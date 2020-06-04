#include "GeneralServer.h"
#include "gateapp.h"
#include "gateclient.h"
#include "new_message.pb.h"

typedef void (GateClient::*HANDLE_CLIENT_MSG)(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);
struct Client_Handle_Map {
    LsUInt16 msg;
    HANDLE_CLIENT_MSG handler;
};

Client_Handle_Map gClientMap[] = {
    MSG_ID_Login_Game_Request,
    &GateClient::HandleGameLogin,
    MSG_ID_HeartBeat_Request,
    &GateClient::HandleHeartBeat,
    MSG_ID_Recreate_Role_Request,
    &GateClient::HandleRecreateRole,
};

void GateClient::CheckConnect(LsTimeVal& now)
{
    if(0 == _passAuth && now.tv_sec - _connectTime >= GateApp::Instance()->_configInfo.maxConnectTime) {
        NET_ERR("%s:%d connect time out", this->GetIp(), this->GetPort());
        Disconnect();
    }
}

GateClient::GateClient()
{
    _userRoleID = -1;
    _passAuth = 0;

    _lastRecvTime = 0;
    _startCountTime = 0;
    _totalCount = 0;

    _totalSendCount = 0;
    _totalSendBytes = 0;

    _totalRecvCount = 0;
    _totalRecvBytes = 0;
    this->SetPHandleBuf(this);
}

int GateClient::OnConnect(const char* pszIP_, LsUInt16 port_, LsUInt32 handleID_)
{
    SYS_INFO("GATE CONNECT  %s:%d  cid %d", pszIP_, port_, _cid);
    _connectTime = GateApp::Instance()->_svrTime.tv_sec;
    return 0;
}

int GateClient::OnDisconnect(const char* pszIP_, LsUInt16 port_, Disconnet_Reason reason_)
{
    SYS_INFO("GATE DISCONNECT  %s:%d id %d reason %d", pszIP_, port_, _userRoleID, reason_);
    GateApp* pIns = GateApp::Instance();
    if(-1 != _userRoleID) {

        pIns->_playerMgr.PlayerLogout(this->_userRoleID);
        LsUInt32 cur = GateApp::Instance()->_svrTime.tv_sec;

        int pass = cur - this->_connectTime;

        PLAY_INFO("role:%d total online %d  recv (%u:%u) send(%u:%u)", _userRoleID, pass, this->_totalRecvBytes,
            this->_totalRecvCount, this->_totalSendBytes, this->_totalSendCount);
    }
    return 0;
}
bool GateClient::OnRecieve(NormalBuff& buff)
{
    int bufLen_ = 0;
    LsUInt8* pBuf_ = buff.GetRawBuf(bufLen_);
    ParseOldZbyMsg parse;
    if ( !parse.ParseMsg(pBuf_, bufLen_) ){
        SYS_ERR("PARSE err %d ", this->_handleID);
        this->Disconnect();
    }else{
        this->HandleZbyMsg(*parse.header, (LsUInt8*)parse.pBuf, parse.bufLen);
    }
    
    return true;
}

GateClient::~GateClient()
{
}

void GateClient::HandleZbyMsg(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    // ZPRINT("recv msg %u flag %u  module %u len %d ", header.nCmdID, header.nFlags, header.nModuleID, bufLen_);
    CheckRecvSpeed();
    do {
        _totalRecvCount++;
        _totalRecvBytes += bufLen_;

        if(this->_userRoleID == -1 || MSG_ID_HeartBeat_Request == header.nCmdID
            //|| MSG_ID_Recreate_Role_Request == header.nCmdID
        ) {
            this->HandleGateMsg(header, pBuf_, bufLen_);
            break;
        }

        LsUInt16 module = header.nCmdID / 100;

        this->Pass2Game(header, pBuf_, bufLen_);

    } while(false);
}

void GateClient::HandleGateMsg(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    HANDLE_CLIENT_MSG fnc = NULL;
    for(int i = 0; i < sizeof(gClientMap) / sizeof(gClientMap[0]); i++) {
        if(header.nCmdID == gClientMap[i].msg) {
            fnc = gClientMap[i].handler;
            break;
        }
    }
    if(fnc) {
        (this->*fnc)(header, pBuf_, bufLen_);
    } else {
        PLAY_ERR("unhandle command:%d", header.nCmdID);
    }
}

void GateClient::HandleGameLogin(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    c2s_login_game_request msg;
    msg.ParseFromArray(pBuf_ + 2, bufLen_ - 1);

    s2c_login_game_response response;
    response.set_error_code(error_id_login_passworderror);
    if(GateApp::Instance()->_playerMgr.CheckPlayerLogin(*this, msg)) {
        response.set_error_code(error_id_noerror);
    }

    std::string out;
    response.SerializeToString(&out);
    LsUInt16 msgid = (LsUInt16)MSG_ID_Login_Game_Response;
    this->SendZbyMsgEx(msgid, (LsUInt8*)(&out[0]), out.size());
}

void GateClient::HandleRecreateRole(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    c2s_recreate_role_request msg;
    msg.ParseFromArray(pBuf_ + 2, bufLen_ - 1);

    if(_userRoleID != -1) {
        // GateApp::Instance()->_centerSession.SendRecreateRoleInfo(_userRoleID);
    }

    // GateApp::Instance()->_centerSession.SendRecreateRoleInfo(msg.user_id());

    PlayerInfoEx* pPlayer = GateApp::Instance()->_playerMgr.FindPlayer(msg.user_id());
    if(pPlayer) {
        pPlayer->KickOff(1);
    }

    /*std::string out;
    response.SerializeToString(&out);
    LsUInt16 msgid = (LsUInt16)MSG_ID_Login_Game_Response;
    this->SendZbyMsgEx(msgid, (LsUInt8*)(&out[0]), out.size());*/
}

void GateClient::HandleHeartBeat(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    c2s_heartbeat_request msg;
    msg.ParseFromArray(pBuf_ + 2, bufLen_ - 1);

    s2c_heartbeat_response response;
    GateApp::Instance()->_playerMgr.CheckHearBeat(*this, msg);
    response.set_local_time(msg.local_time());
    response.set_server_time(GateApp::Instance()->_svrTime.tv_sec);

    std::string out;
    response.SerializeToString(&out);
    LsUInt16 msgid = (LsUInt16)MSG_ID_HeartBeat_Response;
    this->SendZbyMsgEx(msgid, (LsUInt8*)(&out[0]), out.size());
    NET_DEBUG("role:%d recv heatbeat cl %d sv %d", this->_userRoleID, msg.local_time(), response.server_time());
}

void GateClient::Pass2Game(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    GateApp* pIns = GateApp::Instance();
    PlayerInfoEx* pi = pIns->_playerMgr.FindPlayer(this->_userRoleID);
    do {
        if(NULL == pi) {
            PLAY_ERR("role:%d not found", _userRoleID);
            break;
        }
        pi->Pass2Game(header.nCmdID, pBuf_ + 2, bufLen_ - 1);

    } while(false);
}
void GateClient::Pass2Center(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    GateApp* pIns = GateApp::Instance();
    PlayerInfoEx* pi = pIns->_playerMgr.FindPlayer(this->_userRoleID);
    do {
        if(NULL == pi) {
            PLAY_ERR("role:%d not found", _userRoleID);
            break;
        }

        pi->Pass2Center(header.nCmdID, pBuf_ + 2, bufLen_ - 1);

    } while(false);
}

void GateClient::Pass2Publicgate(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    GateApp* pIns = GateApp::Instance();
    PlayerInfoEx* pi = pIns->_playerMgr.FindPlayer(this->_userRoleID);
    do {
        if(NULL == pi) {
            PLAY_ERR("role:%d not found", _userRoleID);
            break;
        }

        pi->Pass2Publicgate(header.nCmdID, pBuf_ + 2, bufLen_ - 1);

    } while(false);
}

#define CHECK_SECOND 5
#define ALLOW_COUNT 40

void GateClient::CheckRecvSpeed()
{
    _lastRecvTime = GateApp::Instance()->_svrTime.tv_sec;
    if((0 == this->_startCountTime) || (this->_lastRecvTime - this->_startCountTime > CHECK_SECOND)) {
        this->_totalCount = 0;
        // L("%d -%d = %d", this->_lastRecvTime, this->_startCountTime, this->_lastRecvTime - this->_startCountTime);
        this->_startCountTime = this->_lastRecvTime;
    }
    int pass = this->_lastRecvTime - this->_startCountTime;
    if(0 == pass)
        pass = 1;

    this->_totalCount++;

    if(/*this->_totalCount/pass >= ALLOW_COUNT*4/2 || */ this->_totalCount > CHECK_SECOND * (ALLOW_COUNT)) {
        const char* ip = this->GetIp();
        unsigned short port = this->GetPort();
        // this->GetRemoteIpPort(ip, port);
        SYS_ERR("role:%d total %d %s:%d  cid %d", this->_userRoleID, this->_totalCount, ip, port, _cid);
        this->Disconnect();
    }
}
bool GateClient::SendZbyMsgEx(LsUInt16 msg,
    LsUInt8* pBuf_,
    LsUInt16 bufLen_,
    LsUInt32 sendflag,
    LsUInt16 flag,
    LsUInt16 module)
{
    GenSendQueue sq;
    if(bufLen_ > 0) {
        sq.AddBuff(pBuf_, bufLen_, true);
    }

    PacketHeader header;
    header.PushTo(sq, msg, flag, module);
    if(SEND_FLAG_FLUSH & sendflag) {
        this->SetCloseFlag();
    }

    bool ret = this->Send(sq);
    if(ret) {
        _totalSendCount++;
        _totalSendBytes += bufLen_;
    }
    return ret;
}

/////////////////////////////////////////////////////////////////

GateClientMgr::GateClientMgr()
{
    _timeStamp = 0;
}

GateClientMgr::~GateClientMgr()
{
}

bool CheckConnect(LsUInt32 id_, GateClient* data_, void* pContext_)
{
    LsTimeVal* pTime = (LsTimeVal*)pContext_;
    data_->CheckConnect(*pTime);
    return true;
}

void CheckConnect2(GateClient* data_, LsUInt32 id, void* pContext_)
{

    LsTimeVal* pTime = (LsTimeVal*)pContext_;
    data_->CheckConnect(*pTime);
}
bool GateClientMgr::OnTime(uint64_t t)
{
    LsTimeVal now;
    now.GetNow();
    this->EnumAllList(CheckConnect2, &now);
    if(now.tv_sec - _timeStamp >= 60) {
        this->SendConnectCount();
        _timeStamp = now.tv_sec;
    }

    return true;
}
/*
bool GateClientMgr::OnUpdate(LsTimeVal& now)
{
        // LS_PRINT("mgr  %d", now.tv_sec);
        _pool.EnumUseList(CheckConnect, -1, &now);

        if( now.tv_sec - _timeStamp >= 60){
                this->SendConnectCount();
                _timeStamp = now.tv_sec;
        }

        return true;
}
*/

bool GateClientMgr::SendZbyMsgEx(int id,
    LsUInt16 msg,
    LsUInt8* pBuf_,
    LsUInt16 bufLen_,
    LsUInt32 sendflag,
    LsUInt16 flag,
    LsUInt16 module)
{
    bool ret = false;
    GateClient* pGc = this->FindClient(id);
    if(pGc) {
        pGc->SendZbyMsgEx(msg, pBuf_, bufLen_, sendflag, flag, module);
        ret = true;
    }
    return ret;
}
bool GateClientMgr::Disconnect(int id)
{
    bool ret = false;
    GateClient* pGc = this->FindClient(id);
    if(pGc) {
        pGc->Disconnect();
        ret = true;
    }
    return ret;
}

void GateClientMgr::SendConnectCount()
{
    do {
        GateApp* pIns = GateApp::Instance();
        LsUInt32 count = this->GetCount(); // _pool.GetUseCount();

        SYS_INFO("Online count %d", count);
        pIns->_gameSession.SendOnlineCount(count);
    } while(false);
}

/////////////////////////////////////////////////////////////////////////////////////////////////
