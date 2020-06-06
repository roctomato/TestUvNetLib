#include "LsUtility.h"
#include "cplayermgr.h"
//#include "LogicContext.h"
#include "GeneralServer.h"
#include "LsTimeVal.h"
#include "crediskey.h"
#include "gateapp.h"
#include "gateclient.h"
#include "new_message.pb.h"
#include <iostream>

bool PlayerInfoEx::CheckConnect(LsTimeVal& now)
{
    bool ret = false;
    time_t passtime = 0;
    do {
        if(state == PLAYER_GATE_STATE_INIT) {
            passtime = now.tv_sec - this->notifyTime;
        }

        if(state == PLAYER_GATE_STATE_LOGOUT) {
            passtime = now.tv_sec - this->logoutTime;
        }

        if(passtime > GateApp::Instance()->_configInfo.maxConnectTime * 30) {
            break;
        }

        ret = true;
    } while(false);
    return ret;
}

bool PlayerInfoEx::SendZbyMsgEx(LsUInt16 msg,
    LsUInt8* pBuf_,
    LsUInt16 bufLen_,
    LsUInt32 sendflag,
    LsUInt16 flag,
    LsUInt16 module)
{
    bool ret = false;
    do {
        if((this->state != PLAYER_GATE_STATE_LOGIN) || (this->cid == -1)) {
            PLAY_ERR("role:%d state %d cid %d MSG %d len %d", this->info.roleid, this->state, this->cid, msg, bufLen_);
            break;
        }

        ret = GateApp::Instance()->_clientMgr.SendZbyMsgEx(this->cid, msg, pBuf_, bufLen_, sendflag, flag, module);
        NET_DEBUG("role:%d pass msg %d len %d", info.roleid, msg, bufLen_);
    } while(false);
    return ret;
}

void PlayerInfoEx::KickOff(LsUInt32 reason)
{
    PLAY_INFO("role:%d kick reason %d", info.roleid, reason);

    s2c_login_kick_notify notify;
    notify.set_reason(reason);

    std::string out;
    notify.SerializeToString(&out);
    LsUInt16 msgid = (LsUInt16)MSG_ID_Login_Kick_Notify;

    GateClient* pc = GateApp::Instance()->_clientMgr.FindClient(this->cid);
    if(pc) {
        pc->SendZbyMsgEx(msgid, (LsUInt8*)(&out[0]), out.size(), SEND_FLAG_FLUSH | SEND_FLAG_CLOSE);
        pc->_userRoleID = -1;
    }
    if(reason == 3) {
        this->session_key = "";
    }
    Logout();
}

void PlayerInfoEx::Logout()
{
    cid = -1;
    state = PlayerInfoEx::PLAYER_GATE_STATE_LOGOUT;
    logoutTime = GateApp::Instance()->_svrTime.tv_sec;
    this->OnLogout();
}

void PlayerInfoEx::Login(int cid_)
{
    cid = cid_;
    state = PlayerInfoEx::PLAYER_GATE_STATE_LOGIN;
    loginTime = GateApp::Instance()->_svrTime.tv_sec;
}

bool PlayerInfoEx::Pass2Game(LsUInt16 msg, LsUInt8* pBuf_, LsUInt16 bufLen_)
{
    bool ret = true;
    do {

        GateGameSession& game = GateApp::Instance()->_gameSession;
        game.SendSvrMsg(
            LsSvr::SVR_MSG_PROXY_MODULE, LsSvr::Svr_Proxy_Client_Game, pBuf_, bufLen_, msg, this->info.roleid);

        NET_DEBUG("role:%d pass msg %d to game", this->info.roleid, msg);

    } while(false);
    return ret;
}
bool PlayerInfoEx::Pass2Center(LsUInt16 msg, LsUInt8* pBuf_, LsUInt16 bufLen_)
{
    bool ret = true;
    do {
        GateGameSession& game = GateApp::Instance()->_gameSession;
        game.SendSvrMsg(
            LsSvr::SVR_MSG_PROXY_MODULE, LsSvr::Svr_Proxy_Client_Game, pBuf_, bufLen_, msg, this->info.roleid);

        NET_DEBUG("role:%d pass msg %d to game", this->info.roleid, msg);
        // ret =  GateApp::Instance()->_centerSession.Pass2GameClientMsg( this->playKingdom, msg,  this->info.roleid,
        // pBuf_, bufLen_);
    } while(false);
    return ret;
}

bool PlayerInfoEx::Pass2Publicgate(LsUInt16 msg, LsUInt8* pBuf_, LsUInt16 bufLen_)
{
    SYS_ERR("NO PG NOW");
    return false;
    /*
        bool ret =true;
        CRedisKey key;
        std::string src = key.GenPublicMqAddr();
        do {
                GatePgClient& pg =   GateApp::Instance()->_gatePgClient;
                ret = pg.SendToRoleMsg( src, pBuf_, bufLen_, msg, this->info.roleid );
                pg.Flush();
        } while(false);
        PLAY_DEBUG("role:%d pass to %s  msg %d  len %d to pg %s", this->info.roleid, src.c_str(), msg, bufLen_, ret?
       "ok":"failed"); return ret;*/
}
void PlayerInfoEx::OnLogout()
{
    if(this->viewMap != 0 && this->viewMap != this->info.kingdom) {
        this->NotifyLeaveMap();
    }
}
bool PlayerInfoEx::FilterPass2Game(LsUInt16 msg, LsUInt8* pBuf_, LsUInt16 bufLen_)
{
    bool ret = true;
    if(MSG_ID_Enter_Map_Request == msg) {
        ret = this->FilterEnter(msg, pBuf_, bufLen_);
    } else if(MSG_ID_Move_Map_Request == msg) {
        ret = this->FilterMove(msg, pBuf_, bufLen_);
    } else if(MSG_ID_Leave_Map_Request == msg) {
        ret = this->FilterLeave(msg, pBuf_, bufLen_);
    }
    return ret;
}

bool PlayerInfoEx::FilterEnter(LsUInt16 msgid, LsUInt8* pBuf_, LsUInt16 bufLen_)
{
    bool ret = true;
    c2s_enter_map_request msg;
    msg.ParseFromArray(pBuf_, bufLen_);
    LsInt32 tk = msg.server_id();

    do {
        if(0 == tk) {
            PLAY_ERR("role:%d wrong kingdom", this->info.roleid);
            tk = this->info.kingdom;
            //			break;
        }

        if(tk == this->info.kingdom) {
            break;
        }

        this->Pass2OtherGame(tk, msgid, pBuf_, bufLen_);
        ret = false;
    } while(false);

    if(tk != this->viewMap) {
        this->HandleChangeMapview(tk);
    }
    return ret;
}

bool PlayerInfoEx::FilterLeave(LsUInt16 msgid, LsUInt8* pBuf_, LsUInt16 bufLen_)
{
    bool ret = true;
    c2s_leave_map_request msg;
    msg.ParseFromArray(pBuf_, bufLen_);
    LsInt32 tk = msg.server_id();

    do {
        if(tk != this->viewMap) {
            PLAY_ERR("role:%d wrong kingdom cur %d msg %d", this->info.roleid, this->viewMap, tk);
            break;
        }

        if(this->viewMap == this->info.kingdom) {
            break;
        }
        this->Pass2OtherGame(tk, msgid, pBuf_, bufLen_);
    } while(false);
    this->viewMap = 0;
    return true;
}

bool PlayerInfoEx::FilterMove(LsUInt16 msgid, LsUInt8* pBuf_, LsUInt16 bufLen_)
{
    bool ret = true;
    c2s_move_map_request msg;
    msg.ParseFromArray(pBuf_, bufLen_);
    LsInt32 tk = msg.server_id();

    do {
        if(0 == tk) {
            PLAY_ERR("role:%d wrong kingdom", this->info.roleid);
            //			tk  = this->info.kingdom;
            break;
        }

        if(tk == this->info.kingdom) {
            break;
        }

        this->Pass2OtherGame(tk, msgid, pBuf_, bufLen_);
        ret = false;
    } while(false);

    if(tk != this->viewMap) {
        this->HandleChangeMapview(tk);
    }
    return ret;
}
bool PlayerInfoEx::Pass2OtherGame(LsUInt32 kingdom, LsUInt16 msg, LsUInt8* pBuf_, LsUInt16 bufLen_)
{
    bool ret = false;
    CRedisKey key;
    std::string src = key.GenSvrMqAddr(SVR_TYPE_GAME, kingdom);
    PLAY_ERR("role:%d pass to %s  msg %d  len %d to pg %s", this->info.roleid, src.c_str(), msg, bufLen_,
        ret ? "ok" : "failed");
    return ret;
    /*
        bool ret =true;
        CRedisKey key;
        std::string src = key.GenSvrMqAddr( SVR_TYPE_GAME, kingdom);
        do {
                GatePgClient& pg =   GateApp::Instance()->_gatePgClient;
                ret = pg.SendToRoleMsg( src, pBuf_, bufLen_, msg, this->info.roleid );
                pg.Flush();
        } while(false);
        PLAY_DEBUG("role:%d pass to %s  msg %d  len %d to pg %s", this->info.roleid, src.c_str(), msg, bufLen_, ret?
       "ok":"failed"); return ret;*/
}
void PlayerInfoEx::HandleChangeMapview(LsInt32 newMap)
{
    if(this->viewMap != 0) {
        // notify leave map
        this->NotifyLeaveMap();
    }
    this->viewMap = newMap;
}
void PlayerInfoEx::NotifyLeaveMap()
{
    c2s_leave_map_request msg;
    msg.set_server_id(GateApp::Instance()->_configInfo.kingdom);
    msg.set_user_id(this->info.roleid);
    std::string out;
    msg.SerializeToString(&out);
    if(this->viewMap == GateApp::Instance()->_configInfo.kingdom) {
        this->Pass2Game(MSG_ID_Leave_Map_Request, (LsUInt8*)(&(out[0])), out.size());
    } else {
        this->Pass2OtherGame(this->viewMap, MSG_ID_Leave_Map_Request, (LsUInt8*)(&(out[0])), out.size());
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
CPlayerMgr::CPlayerMgr()
{
}

CPlayerMgr::~CPlayerMgr()
{
}

PlayerInfoEx* CPlayerMgr::FindPlayer(LsUInt32 nAccountID)
{
    PLAYER_ID_MAP::iterator it = _playerIDMap.find(nAccountID);
    if(it != _playerIDMap.end()) {
        return &(it->second);
    }
    return NULL;
}

void CPlayerMgr::AddOnlinePlayer(Ls::role_base_info& info, const string& session_key, string& str)
{
    PLAY_INFO("role:%d  %s will  login again", info.roleid, str.c_str());
    PlayerInfoEx* pl = FindPlayer(info.roleid);
    if(pl) {
        ReadFromJsonStr(pl->_lilithinfo, str);
        pl->account_name = pl->_lilithinfo.name;
        pl->session_key = session_key;
        pl->info.session_key = session_key;
        pl->notifyTime = GateApp::Instance()->_svrTime.tv_sec;
        if(pl->cid == -1) {
            pl->state = PlayerInfoEx::PLAYER_GATE_STATE_INIT;
            PLAY_INFO("role:%d  %s will  login again", info.roleid, pl->account_name.c_str());
        } else {
            PLAY_ERR("role:%d %s will repeat login", info.roleid, pl->account_name.c_str());
        }
    } else {
        if(info.open_id == "robot_league") {
            GateApp::Instance()->_gameSession.SendRoleWillLogin(info);
        } else {
            PlayerInfoEx& pi = _playerIDMap[info.roleid];
            ReadFromJsonStr(pi._lilithinfo, str);
            pi.info = info;
            pi.account_name = pi._lilithinfo.name;
            pi.session_key = session_key;
            pi.notifyTime = GateApp::Instance()->_svrTime.tv_sec;
            PLAY_INFO("role:%d will  login %s", info.roleid, pi.account_name.c_str());
        }
    }
}

bool CPlayerMgr::OnTime(uint64_t t)
{
    LsTimeVal now;
    now.GetNow();
    Erase_List eraseList;
    PLAYER_ID_MAP::iterator it;
    for(it = _playerIDMap.begin(); it != _playerIDMap.end(); it++) {
        if(!it->second.CheckConnect(now))
            eraseList.push_back(it->first);
    }

    Erase_List::iterator it2;
    for(it2 = eraseList.begin(); it2 != eraseList.end(); it2++) {
        this->Remove(*it2);
    }
    return true;
}
/*
bool CPlayerMgr::OnUpdate(LsTimeVal& now)
{
        Erase_List eraseList;
        PLAYER_ID_MAP::iterator it;
        for(it = _playerIDMap.begin(); it != _playerIDMap.end(); it++) {
                if(!it->second.CheckConnect(now))
                        eraseList.push_back(it->first);
        }

        Erase_List::iterator it2;
        for(it2 = eraseList.begin(); it2 != eraseList.end(); it2++) {
                this->Remove(*it2);
        }
        return true;
}
*/
void CPlayerMgr::Remove(LsUInt32 id)
{
    _playerIDMap.erase(id);
}

bool CPlayerMgr::CheckPlayerLogin(GateClient& client, c2s_login_game_request& msg)
{
    bool ret = false;
    do {
        LsUInt32 uid = (LsUInt32)msg.user_id();
        PlayerInfoEx* pl = this->FindPlayer(uid);
        if(NULL == pl) {
            PLAY_ERR("role:%d not found", uid);
            break;
        }

        if(pl->session_key != msg.session_key()) {
            PLAY_ERR("role:%d msg session %s cur %s", uid, msg.session_key().c_str(), pl->session_key.c_str());
            break;
        }

        if(pl->account_name != msg.name()) {
            PLAY_ERR("role:%d msg name %s cur %s", uid, msg.name().c_str(), pl->account_name.c_str());
            break;
        }

        GateGameSession* pGame = &(GateApp::Instance()->_gameSession); //_gameSvrMgr.FindGameSession(msg.kingdom());
        if(NULL == pGame || pGame->GetNetState() != NET_STATE_CONNECT) {
            PLAY_ERR("role:%d kingom %d busy", uid, msg.kingdom());
            break;
        }

        if(pl->cid != -1) {
            PLAY_ERR("role:%d repeat login", uid);
            pl->KickOff(0);
        }

        client._passAuth = GateApp::Instance()->_svrTime.tv_sec;
        ;
        client._userRoleID = pl->info.roleid;

        pl->Login(client._cid);
        pl->SetPlayKingdom(msg.kingdom());

        const char* ip = client.GetIp();
        LsUInt16 port = client.GetPort();
        // client.GetRemoteIpPort( ip, port );
        pl->ip = ip;

        pGame->SendRoleWillLogin(*pl);

        ret = true;
    } while(false);
    return ret;
}

bool CPlayerMgr::CheckHearBeat(GateClient& client, c2s_heartbeat_request& msg)
{
    PLAY_DEBUG("roleid:%d local time %d, server time %d I arm alive!", client._userRoleID, msg.local_time(),
        GateApp::Instance()->_svrTime.tv_sec);
    return true;
}

bool CPlayerMgr::PlayerLogout(LsUInt32 id)
{
    bool ret = false;
    do {
        PlayerInfoEx* pl = this->FindPlayer(id);

        if(NULL == pl) {
            PLAY_ERR("role:%d not found", id);
            break;
        }

        pl->Logout();

        GateGameSession* pGame = &(GateApp::Instance()->_gameSession); //_gameSvrMgr.FindGameSession(pl->playKingdom);
        if(NULL == pGame) {
            PLAY_ERR("role:%d kingom %d busy", pl->playKingdom);
            break;
        }
        pGame->SendRoleLogout(*pl);
        ret = true;
    } while(false);
    return ret;
}
bool CPlayerMgr::SendZbyMsgEx(LsUInt32 uid,
    LsUInt16 msg,
    LsUInt8* pBuf_,
    LsUInt32 bufLen_,
    LsUInt32 sendflag,
    LsUInt16 flag,
    LsUInt16 module)
{
    bool ret = false;
    NET_DEBUG("role:%d  pass game msg %d  len %d", uid, msg, bufLen_);
    PlayerInfoEx* pl = FindPlayer(uid);
    if(pl) {
        if(bufLen_ < (0xffff - 100)) {
            ret = pl->SendZbyMsgEx(msg, pBuf_, bufLen_, SEND_FLAG_FLUSH);
        } else {
            PLAY_ERR("role:%d msg %d len %d", uid, msg, bufLen_);
        }
    }

    if(!ret) {
        PLAY_ERR("role:%d not found", uid);
        GateApp::Instance()->_gameSession.SendRoleLogoutEx(uid);
    }
    return ret;
}
void CPlayerMgr::GetKingomPlayer(LsSvr::SetRoleID& roleSet, LsUInt32 kingdom)
{
    PLAYER_ID_MAP::iterator it;
    for(it = _playerIDMap.begin(); it != _playerIDMap.end(); it++) {
        PlayerInfoEx& pi = it->second;
        if(pi.playKingdom == kingdom && pi.state == PlayerInfoEx::PLAYER_GATE_STATE_LOGIN) {
            roleSet.insert(it->first);
        }
    }
}

void CPlayerMgr::SendAll(LsUInt16 msg, std::string& out, int except, int kingdom)
{
    PLAYER_ID_MAP::iterator it;
    for(it = _playerIDMap.begin(); it != _playerIDMap.end(); it++) {
        PlayerInfoEx& pi = it->second;
        if(pi.state == PlayerInfoEx::PLAYER_GATE_STATE_LOGIN && pi.playKingdom == kingdom && pi.info.roleid != except) {
            pi.SendZbyMsgEx(msg, (LsUInt8*)(&out[0]), out.size(), SEND_FLAG_FLUSH);
        }
    }
}

void CPlayerMgr::SendServerInfoToPlayer(LsUInt16 serverID, LsUInt32 status)
{
    c2s_server_status_notify notify;

    notify.set_serverid(serverID);
    notify.set_status(status);

    std::string out;
    notify.SerializeToString(&out);

    PLAYER_ID_MAP::iterator it;
    for(it = _playerIDMap.begin(); it != _playerIDMap.end(); it++) {
        PlayerInfoEx& pi = it->second;
        pi.SendZbyMsgEx(MSG_ID_Server_Status_Notify, (LsUInt8*)(&out[0]), out.size(), SEND_FLAG_FLUSH);
    }
}
int CPlayerMgr::ChangeRole(LsUInt32 old, LsUInt32 newRole)
{
    int ret = -1;
    do {
        PlayerInfoEx* pl = this->FindPlayer(old);

        if(NULL == pl) {
            PLAY_ERR("role:%d not found", old);
            break;
        }
        PlayerInfoEx& newPl = _playerIDMap[newRole];
        newPl.info.roleid = newRole;
        _playerIDMap.erase(old);
        PLAY_INFO("role:%d change to %d", old, newRole);
        ret = 0;
    } while(false);
    return ret;
}
