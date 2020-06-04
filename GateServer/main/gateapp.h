#ifndef GATEAPP_H
#define GATEAPP_H

#include "SingletonT.h"
#include "appnetstack.h" // Base class: IAppStart

#include "cgateredis.h"
#include "cplayermgr.h"
#include "gateclient.h"
#include "gategamesession.h"
#include "gtmsgredis.h"

#define SERVER_NAME "GateServer"
#include "ConfigInfo.h"

#define DEFAULT_CFG_FILE "gate.cfg"

#define DEFAULT_LOG_FILE "gate_log.config"

#define CFG_FOLD "../cfg/"

class GateApp : public IAppStart, public TimerHandler, public SingletonT<GateApp>
{
public:
    GateApp();
    ~GateApp();
    
    /// implement IAppStart /////////////////////////////////////
    bool Init(int argc, char* argv[], AppNetStack* ans) override;
    bool StartWork(AppNetStack* ans) override;
    bool AllowExit(AppNetStack* ans) override;
    bool OnExit(AppNetStack* ans) override;
    bool OnstackStart(AppNetStack* ans) override;
    void DoStop() override;
    ////implement TimerHandler
    bool OnTime(uint64_t now) override;
    ///////////////////////////////////////////////////

    bool StartNetWork(AppNetStack* ans);
    void StartRedis(AppNetStack* ans);
    void StartUpdate(AppNetStack* ans);
    void CheckConnect();
    
    ConfigInfo _configInfo;

    CPlayerMgr _playerMgr;
    
    GateClientMgr _clientMgr;

    GateGameSession _gameSession;

    GtMsgRedis _channelRedis;
    GtQueueRedis _msgRedis;

    CGateRedis _HandleRedisEvt;
    SendRedis _sendRedis;

    LsTimeVal _svrTime;
    
private:

    void InitDefaultFile();
    
    std::string _cfgFile;
    std::string _logCfgFile;
};

#endif // GATEAPP_H
