#include "cgateredis.h"
#include "LsUtility.h"
#include "gateapp.h"
#include "RedisProtocol.h"
#include "GeneralServer.h"
#include "zby_debug.h"

#include "crediskey.h"

typedef void ( CGateRedis:: *HANDLE_CMMD)(  Ls::RedisEvent& event);
struct Cmd_Map {
	const char* pCmd;
	HANDLE_CMMD handler;
};

Cmd_Map gGmMap[]= {
	EVENT_LOGIN_ONLINE, &CGateRedis::HandleLoginOnline,
    EVENT_PLAYER_LOGIN, &CGateRedis::HandlePlayerLogin,
	EVENT_GAME_ONLINE, &CGateRedis::HandleGameLogin,
	EVENT_PG_ONLINE,  &CGateRedis::HandlePgLogin,
};

CGateRedis::CGateRedis()
{
}

CGateRedis::~CGateRedis()
{
}

void CGateRedis::HandleallSvr(Ls::RedisEvent& event)
{
	if ( event.src != this->_selfKey ){
		HANDLE_CMMD fnc = NULL;
		for( int i = 0; i < sizeof(gGmMap)/sizeof(gGmMap[0]); i++) {
			if ( event.event == gGmMap[i].pCmd ) {
				fnc = gGmMap[i].handler ;
				break;
			}
		}
		if ( fnc ) {
			try{
				(this->*fnc)( event)  ;
			}catch(...){
				REDIS_ERROR("handle command:%s err", event.event.c_str());
			}
		} else {
			REDIS_ERROR("unhandle command:%s", event.event.c_str());
		}
	}else{
		LS_PRINT("RECV self evt %s", event.event.c_str() );
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////
void CGateRedis::HandleLoginOnline(Ls::RedisEvent& event)
{
	GateApp* pIns = GateApp::Instance();
	Ls::GateOnline evt;
	evt.kingdom = pIns->_configInfo.kingdom;
	evt.index   =  pIns->_configInfo.index;
	evt.ip      =  pIns->_configInfo.publicIP.ip;
	evt.port    =  pIns->_configInfo.publicIP.port;
	pIns->_sendRedis.SendGateOnlineMsg( REDIS_SEND_TYPE_MSG, event.src.c_str(), evt );
	REDIS_INFO("recv login online send gate info");
}

void CGateRedis::HandlePlayerLogin(Ls::RedisEvent& event)
{
    GateApp* pIns = GateApp::Instance();
    CInArchive arch( event.data.c_str(), event.data.size());
    
    Ls::role_base_info info;
    std::string session_key;
    std::string account;
    
    arch >>info>>session_key>>account; 
    pIns->_playerMgr.AddOnlinePlayer( info, session_key, account );
	REDIS_INFO("role:%d %s add will login", info.roleid, info.name.c_str() );
}

void CGateRedis::HandleGameLogin(Ls::RedisEvent& event)
{
	
	//GateGameMgr& mgr = GateApp::Instance()->_gameSvrMgr;
	CInArchive arch( event.data.c_str(), event.data.size());
	Ls::GateOnline gi ;
	arch>>gi;
	
	REDIS_INFO("recv gamee info kingdom %d ip:%s port:%d", gi.kingdom, gi.ip.c_str(), gi.port );
	//GateApp* pIns = GateApp::Instance();
	//pIns->_gameSession.ConnectGm( gi.ip.c_str(), gi.port );
	/*
	mgr.UpdateGateInfo( gi );
	if ( gi.kingdom == GateApp::Instance()->_configInfo.kingdom ){
		mgr.AddGameSession( gi.kingdom );
	}
	 */
}
void CGateRedis::HandlePgLogin(Ls::RedisEvent& event)
{
	CInArchive arch( event.data.c_str(), event.data.size());
	Ls::GateOnline gi ;
	arch>>gi;
	
	REDIS_INFO("recv pg info kingdom %d ip:%s port:%d", gi.kingdom, gi.ip.c_str(), gi.port );
	//GateApp* pIns = GateApp::Instance();
	//pIns->_gatePgClient.ConnectPg( gi.ip.c_str(), gi.port );
}
