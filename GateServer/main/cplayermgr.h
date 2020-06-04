#ifndef CPLAYERMGR_H
#define CPLAYERMGR_H

#include <map>
#include <list>

#include "LsLogicDb.h"
//#include "CommonTime.h"
#include "LsUtility.h"
//#include "zhandle16.h"
//#include "cupdatemgr.h"
#include "new_message.pb.h"
#include "ServerMsg.h"
#include "TimerHandler.h"
#include "LsTimeVal.h"
#define PLAYER_ONLINE      1
#define PLAYER_DB_GET      (1<<1) // get data from db
#define PLAYER_DB_LEAGUE   (1<<2) // LEAGUE DB OP

class GateClient;
struct PlayerInfoEx {
	enum {
	    PLAYER_GATE_STATE_INIT,
	    PLAYER_GATE_STATE_LOGIN,
	    PLAYER_GATE_STATE_LOGOUT,
	};

	Ls::role_base_info  info;
	std::string     account_name;
	std::string     session_key;
	LsInt32         cid;
	time_t          notifyTime;
	time_t          loginTime;
	time_t          logoutTime;
	int             state;
	LsInt32			playKingdom;
	LsInt32			viewMap;
	std::string  	ip;
	
	Ls::LilithClientInfo _lilithinfo;
	
	void SetPlayKingdom(const LsInt32& playKingdom) {
		this->playKingdom = playKingdom;
	}

	PlayerInfoEx() {
		cid = -1;
		playKingdom = -1;
		state = PLAYER_GATE_STATE_INIT;
		viewMap     =  0;
	}

	bool CheckConnect(LsTimeVal &now);
	bool SendZbyMsgEx( LsUInt16 msg,  LsUInt8 *pBuf_, LsUInt16 bufLen_,   LsUInt32 sendflag=0, LsUInt16 flag=0, LsUInt16 module=0 );
	bool Pass2Game(LsUInt16 msg,LsUInt8 *pBuf_, LsUInt16 bufLen_);
	bool Pass2Center(LsUInt16 msg,LsUInt8 *pBuf_, LsUInt16 bufLen_);
	bool Pass2Publicgate(LsUInt16 msg,LsUInt8 *pBuf_, LsUInt16 bufLen_);
	bool Pass2OtherGame(LsUInt32 kingdom, LsUInt16 msg,LsUInt8 *pBuf_, LsUInt16 bufLen_);
	
	bool FilterPass2Game(LsUInt16 msg, LsUInt8* pBuf_, LsUInt16 bufLen_);
	bool FilterMove(LsUInt16 msg, LsUInt8* pBuf_, LsUInt16 bufLen_);
	bool FilterEnter(LsUInt16 msg, LsUInt8* pBuf_, LsUInt16 bufLen_);
	bool FilterLeave(LsUInt16 msg, LsUInt8* pBuf_, LsUInt16 bufLen_);
	
	void KickOff( LsUInt32 reason );
	void Logout();
	void Login( int cid );
	void OnLogout();
	void HandleChangeMapview( LsInt32 newMap);
	void NotifyLeaveMap();
};


typedef std::map<LsUInt32, PlayerInfoEx> PLAYER_ID_MAP;
typedef std::list<LsUInt32> Erase_List;


class CPlayerMgr : public TimerHandler
{
public:
	CPlayerMgr();
	~CPlayerMgr();

	PlayerInfoEx* FindPlayer(  LsUInt32 nAccountID );
	void Remove(LsUInt32 id );

	void AddOnlinePlayer(Ls::role_base_info& info, const string& session_key,  string& account);
    bool OnTime(uint64_t now) override;
    
	bool CheckPlayerLogin(GateClient& client, c2s_login_game_request& msg);
	bool PlayerLogout( LsUInt32 id);
	bool CheckHearBeat(GateClient& client, c2s_heartbeat_request& msg);

	bool SendZbyMsgEx( LsUInt32 id, LsUInt16 msg,  LsUInt8 *pBuf_, LsUInt32 bufLen_,   LsUInt32 sendflag=0, LsUInt16 flag=0, LsUInt16 module=0 );
	bool SendMsg( LsUInt32 id, LsUInt16 msg, ::google::protobuf::Message* pmsg);
	void SendAll(LsUInt16 msg, std::string& out, int except, int kindom );
	
	void GetKingomPlayer( LsSvr::SetRoleID& roleSet, LsUInt32 kingdom );
	
	void SendServerInfoToPlayer(LsUInt16 serverID,LsUInt32 status);
	
    int ChangeRole( LsUInt32 old, LsUInt32 newRole );
	PLAYER_ID_MAP _playerIDMap;

};

#endif // CPLAYERMGR_H
