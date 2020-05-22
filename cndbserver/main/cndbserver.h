#ifndef __cndbserver_H__
#define __cndbserver_H__

#include "appnetstack.h" // Base class: IAppStart
#include "SingletonT.h"

#include "DbThrdContext.hpp"
#include "GameSession.hpp"
#include "ConfigInfo.hpp"
#include "ThisDbMgr.hpp"

#define DEFAULT_CFG_FILE "cndbserver.cfg"
#define DEFAULT_LOG_FILE  "cndbserver.config"
#define CFG_FOLD          "../cfg/"
class cndbserver : public IAppStart, public SingletonT<cndbserver>
{
public:
	cndbserver();
	~cndbserver();

	
	///implement IAppStart /////////////////////////////////////
	bool Init(int argc, char* argv[], AppNetStack* ans) override;
	bool StartWork(AppNetStack* ans)    override;
	bool AllowExit(AppNetStack* ans)    override;
	bool OnExit(AppNetStack* ans)       override;
	bool OnstackStart(AppNetStack* ans) override;  
    void DoStop()                       override;
	///////////////////////////////////////////////////
    
    bool InitDb();
    
    ThisDbMgr       _dbThrd;
    GameServerMgr   _gsMgr;
    ConfigInfo      _configInfo;
    
private:
	std::string		_cfgFile;	
	std::string		_logCfgFile;
};

#endif // __cndbserver_H__
