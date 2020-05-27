#include "getopt.h"

#include "log4cpploggerex.h"

#include "DbThrdContext.hpp"
#include "cndbserver.h"

cndbserver::cndbserver()
{
    _cfgFile = DEFAULT_CFG_FILE;
    _logCfgFile = DEFAULT_LOG_FILE;
}

cndbserver::~cndbserver()
{
}

bool cndbserver::Init(int argc, char* argv[], AppNetStack* ans)
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
            InitLog<Log4cppLoggerEx>( _logCfgFile);
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
bool cndbserver::StartWork(AppNetStack* ans)
{
    //此处添加服务器启动后逻辑，启动各种网络客户端、服务器，初始化逻辑
    bool ret = false;
    do {
        
        if(!_dbThrd.StartDb(_configInfo.dbthread_count)) {
            SYS_ERR("start db count %d err", _configInfo.dbthread_count);
            break;
        }
        SYS_INFO("start db thread count %d ok", _configInfo.dbthread_count);

        std::string ip = _configInfo.local.ip;
        unsigned short port =  _configInfo.local.port;

        if(!this->_gsMgr.Listen(ip.c_str(), port, ans->loop())) {
            SYS_ERR("START server %s:%u err", ip.c_str(), port);
            break;
        }

        SYS_INFO("START server %s:%u ok", ip.c_str(), port);

        SYS_INFO("start SERVER ok");
        ret = true;
    } while(false);
    return ret;
}
bool cndbserver::OnstackStart(AppNetStack* ans)
{
    //工作线程启动后，在该线程中会调用该函数

    SYS_INFO("work thread  ok");
    return true;
}

bool cndbserver::AllowExit(AppNetStack* ans)
{
    //此处服务器退出前询问是否可以退出
    //SYS_INFO("query  exit");
    bool ret = false;
    do {
        if(_dbThrd.IsAnyRunning()) {
            break;
        }
        ret = true;
    } while(false);
    return ret;
}

bool cndbserver::OnExit(AppNetStack* ans)
{
    //此处添加退出程序时逻辑
    this->_dbThrd.Join();
    SYS_INFO("server exit");
    return true;
}

void cndbserver::DoStop()
{
    this->_gsMgr.StopServer();
    this->_dbThrd.Stop();
}
