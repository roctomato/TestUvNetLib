#include "gateapp.h"
#include "getopt.h"
#include "log4cpploggerex.h"
#include "crediskey.h"

GateApp::GateApp()
{
    _svrTime.GetNow();
    InitDefaultFile();
}

GateApp::~GateApp()
{
}

bool GateApp::Init(int argc, char* argv[], AppNetStack* ans)
{
    //此处添加初始化逻辑(读取配置，设置日志，启动数据库线程池...,以及检测其他初始化数据)
    //若返回false则进程退出
    bool ret = false;
    do {
        int ch;
        bool bKill = false;

        while((ch = getopt(argc, argv, "Cdkc:l:")) != -1) {
            switch(ch) {
            case 'k':
                bKill = true;
                break;
            case 'c':
                _cfgFile = optarg;
                break;
            case 'l':
                _logCfgFile = optarg;
                break;
            case 'd':
                ans->SetDaemon(true);
                break;

            case 'C':
                this->_configInfo.PrintExamleCfg();
                exit(0);
                break;
            }
        }

        _cfgFile = CFG_FOLD + _cfgFile;
        _logCfgFile = CFG_FOLD + _logCfgFile;

        try {
            InitLog<Log4cppLoggerEx>(_logCfgFile);
        } catch(ConfigureExceptionEx& e) {
            printf("open log config file %s failed. Reason %s\n", _logCfgFile.c_str(), e.what());
            return false;
        }

        if(!_configInfo.LoadCfg(_cfgFile.c_str())) {
            SYS_INFO("open %s file failed.please create this file first, then write confige data like followed\n",
                _cfgFile.c_str());
            _configInfo.PrintExamleCfg();
            return false;
        } else {
            SYS_INFO("%s", "read config file ok");
            cout << _configInfo << endl;
        }

        if(bKill) {
            ans->Kill();
            exit(0);
        }
        SYS_INFO("Init SERVER ok");
        ret = true;
    } while(false);
    return ret;
}

bool GateApp::StartWork(AppNetStack* ans)
{
    //此处添加服务器启动后逻辑，启动各种网络客户端、服务器，初始化逻辑
    bool ret = false;
    do {
        if(!this->StartNetWork(ans)) {
            SYS_ERR("%s", "start net failed");
            return false;
        }

        StartUpdate(ans);
        
        StartRedis(ans);
        
        SYS_INFO("start SERVER ok");
        ret = true;
    } while(false);
    return ret;
}

bool GateApp::AllowExit(AppNetStack* ans)
{
    return true;
}

bool GateApp::OnExit(AppNetStack* ans)
{
    SYS_INFO("server exit");
    return true;
}

bool GateApp::OnstackStart(AppNetStack* ans)
{
    //工作线程启动后，在该线程中会调用该函数

    SYS_INFO("work thread  ok");
    return true;
}

void GateApp::DoStop()
{
    /*
     * this->_gsMgr.StopServer();
    this->_dbThrd.Stop();
     */
}
bool GateApp::OnTime(uint64_t now)
{
    _svrTime.GetNow();
    CheckConnect();
    return true;
}

void GateApp::StartRedis(AppNetStack* ans)
{
    zby::RedisCfg& cfg = this->_configInfo.redisInfo;
	CRedisKey key;
	std::string allKey  = key.GetWatchAllServerKey();
	std::string curKey  = key. GenSvrMqAddr( SVR_TYPE_GATE, this->_configInfo.kingdom, this->_configInfo.index );
	
     uv_loop_t* loop = ans->loop();
	 
	_HandleRedisEvt.SetSelfKey( curKey );
	_channelRedis.AddKey( allKey.c_str());
	_channelRedis.AddKey( curKey.c_str());
	_channelRedis.Connect( cfg.ip.c_str(), cfg.port , loop, cfg.index, cfg.password.c_str() );
	_channelRedis.SetEvtHandler(&_HandleRedisEvt);
	
	_msgRedis.InitKey( SVR_TYPE_GATE, this->_configInfo.kingdom, this->_configInfo.index);
	_msgRedis.Connect( cfg.ip.c_str(), cfg.port , loop , cfg.index, cfg.password.c_str() );
	_msgRedis.SetEvtHandler(&_HandleRedisEvt);
	
	_sendRedis.InitKey( SVR_TYPE_GATE, this->_configInfo.kingdom, this->_configInfo.index );
	_sendRedis.Connect( cfg.ip.c_str(), cfg.port , loop , cfg.index, cfg.password.c_str() );

	
	Ls::GateOnline evt;
	evt.kingdom = this->_configInfo.kingdom;
	evt.index   =  this->_configInfo.index;
	evt.ip      =  this->_configInfo.publicIP.ip;
	evt.port    =  this->_configInfo.publicIP.port;
	_sendRedis.SendGateOnlineMsg( REDIS_SEND_TYPE_BOARDCAST, allKey.c_str(), evt );
	
	std::string str;
	WriteToJsonStr(evt, str, false );
	std::string svrInfo  = key.KingdomSvrInfo( this->_configInfo.kingdom);
	std::string fd = "gate";
	_sendRedis.SendHashSet(svrInfo, fd, str );
	
}

void GateApp::StartUpdate(AppNetStack* ans)
{
    this->Start(ans->loop(), 1000, 1000);
    _clientMgr.Start(ans->loop(), 5000, 5000);
    _playerMgr.Start(ans->loop(), 4999, 4999);
}

void GateApp::CheckConnect()
{
    if(AppNetStack::Instance()->IsExit())
        return;

    uv_loop_t* loop = AppNetStack::Instance()->loop();

    ProtolTcp* pCnt[] = {
        &_gameSession,
        //&_centerSession
    };

    for(LsUInt32 i = 0; i < ARRAY_SIZE(pCnt); i++) {
        int centerCnntState = pCnt[i]->GetNetState();
        if(centerCnntState == NET_STATE_HANDLE_DISCONNECT || centerCnntState == NET_STATE_INIT) {
            pCnt[i]->ReConnect(loop);
        }
    }

    AsyncRedis* pRedis[] = { &_channelRedis, &_msgRedis, &_sendRedis };

    zby::RedisCfg& cfg = this->_configInfo.redisInfo;
    for(LsUInt32 i = 0; i < ARRAY_SIZE(pRedis); i++) {
        if(!pRedis[i]->IsConnect()) {
            pRedis[i]->Connect(cfg.ip.c_str(), cfg.port, loop, cfg.index, cfg.password.c_str());
        }
    }
}

void GateApp::InitDefaultFile()
{
    
    _cfgFile = DEFAULT_CFG_FILE;
    _logCfgFile = DEFAULT_LOG_FILE;
}

bool GateApp::StartNetWork(AppNetStack* ans)
{
    bool ret = false;
    do {
        std::string ip = _configInfo.local.ip;
        unsigned short port = _configInfo.local.port;
        if(!this->_clientMgr.Listen(ip.c_str(), port, ans->loop())) {
            SYS_ERR("START server %s:%u err", ip.c_str(), port);
            break;
        }
        SYS_INFO("START server %s:%u ok", ip.c_str(), port);

        _gameSession.ConnectGm(this->_configInfo.gameserver.ip.c_str(), this->_configInfo.gameserver.port);

        ret = true;
    } while(false);
    return ret;
}
