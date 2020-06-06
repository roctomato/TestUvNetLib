#include "LsUtility.h"
#include "ServerMsg.h"
#include "gateapp.h"
#include "gategamesession.h"
#include "zby_debug.h"
#include "GeneralServer.h"

GateGameSession::GateGameSession()
    : ZServerHandler(NET_BUF_LEN)
{

    _tryConnect = 0;
    SetAsConnect();
    _kingdom = 0;
    this->SetPHandleBuf(this);
}

GateGameSession::~GateGameSession()
{
}

int GateGameSession::OnConnect(const char* pszIP_, LsUInt16 port_, LsUInt32 handleID_)
{
    this->_kingdom = GateApp::Instance()->_configInfo.kingdom;
    SYS_INFO("connect kingdom %d game  ip %s port %d fd %d", this->_kingdom, pszIP_, port_, this->GetHandleID());
    _tryConnect = 0;
    SendRegister();

    return 0;
}

int GateGameSession::OnDisconnect(const char* pszIP_, LsUInt16 port_, Disconnet_Reason reason_)
{
    if(_tryConnect < 2) {
        SYS_INFO("game %s:%d id  reaseson %d", pszIP_, port_, reason_);
    }
    // GateApp::Instance()->_gameSvrMgr.DisconnectGame( this->_kingdom );
    if(reason_ == 2) {
        GateApp::Instance()->_playerMgr.SendServerInfoToPlayer(1, 2);
    }
    this->PrintTotal();
    return 0;
}

void GateGameSession::HandleSvrMsg(SvrMsgHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    if(header.module == LsSvr::SVR_MSG_LOGIC_MODULE) {
        HandleLogicSvrMsg(header, pBuf_, bufLen_);
    } else if(header.module == LsSvr::SVR_MSG_PROXY_MODULE) {
        CPlayerMgr& mgr = GateApp::Instance()->_playerMgr;
        if(LsSvr::Svr_Proxy_Game_Client == header.cmd) {
            mgr.SendZbyMsgEx(header.param2, header.param1, pBuf_, bufLen_, SEND_FLAG_FLUSH);
        } else if(LsSvr::Svr_Proxy_Group_Msg == header.cmd) {
            LsSvr::Proxy_Many_Client msg;
            CInArchive ar((LsInt8*)pBuf_, bufLen_);
            ar >> msg;
            if(!msg.setRole.empty()) {
                LsSvr::SetRoleID::iterator it;
                for(it = msg.setRole.begin(); it != msg.setRole.end(); it++) {
                    mgr.SendZbyMsgEx(*it, header.param1, (LsUInt8*)&msg.data[0], msg.data.size(), SEND_FLAG_FLUSH);
                }
            } else {
                mgr.SendAll(header.param1, msg.data, msg.except, this->_kingdom);
            }
        }
    }
}

void GateGameSession::SendRegister()
{
    COutArchive out;
    LsSvr::SetRoleID sr;
    GateApp::Instance()->_playerMgr.GetKingomPlayer(sr, this->_kingdom);
    out << sr;
    LsUInt32 len;
    char* pBuf = out.GetBuf(len);
    this->SendSvrMsg(LsSvr::SVR_MSG_LOGIC_MODULE, LsSvr::Svr_Logic_Gate_Register, (LsUInt8*)pBuf, len, this->_kingdom);
    //this->Flush();
}

void GateGameSession::SendRoleWillLogin(PlayerInfoEx& pi)
{
    COutArchive out;
    out << pi.info << pi.ip << pi._lilithinfo;
    LsUInt32 len;
    char* pBuf = out.GetBuf(len);
    this->SendSvrMsg(LsSvr::SVR_MSG_LOGIC_MODULE, LsSvr::Svr_Logic_Role_Login, (LsUInt8*)pBuf, len);
    //this->Flush();
}
void GateGameSession::SendRoleWillLogin(Ls::role_base_info& rbi)
{
    string ip = "127.0.0.1";
    Ls::LilithClientInfo linfo;
    linfo.open_id = rbi.open_id;
    linfo.name = rbi.name;
    COutArchive out;
    out << rbi << ip << linfo;
    LsUInt32 len;
    char* pBuf = out.GetBuf(len);
    this->SendSvrMsg(LsSvr::SVR_MSG_LOGIC_MODULE, LsSvr::Svr_Logic_Role_Login, (LsUInt8*)pBuf, len);
    //this->Flush();
    PLAY_INFO("role:%d send create robot league", rbi.roleid);
}

void GateGameSession::SendRoleLogout(PlayerInfoEx& pi)
{

    this->SendRoleLogoutEx(pi.info.roleid);
}
void GateGameSession::SendRoleLogoutEx(LsUInt32 roleid)
{
    COutArchive out;
    out << roleid;
    LsUInt32 len;
    char* pBuf = out.GetBuf(len);
    this->SendSvrMsg(LsSvr::SVR_MSG_LOGIC_MODULE, LsSvr::Svr_Logic_Role_Logout, (LsUInt8*)pBuf, len);
    //this->Flush();
}

void GateGameSession::SendOnlineCount(LsUInt32 count)
{
    COutArchive out;
    out << count;
    LsUInt32 len;
    char* pBuf = out.GetBuf(len);
    this->SendSvrMsg(LsSvr::SVR_MSG_LOGIC_MODULE, LsSvr::Svr_Logic_Online_Count, (LsUInt8*)pBuf, len);
   // this->Flush();
}
void GateGameSession::HandleLogicSvrMsg(SvrMsgHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    if(LsSvr::Svr_Logic_Kick_Role == header.cmd) {
        this->HandleKickMsg(header, pBuf_, bufLen_);
    } else if(LsSvr::Svr_Logic_GameRestart == header.cmd) {
        GateApp::Instance()->_playerMgr.SendServerInfoToPlayer(1, 1);
        SYS_INFO("send svr info to player");
	}else if ( LsSvr::Svr_SWITCH_Role == header.cmd ){
        GateApp::Instance()->_playerMgr.ChangeRole(header.param1, header.param2);
    }
}
void GateGameSession::HandleKickMsg(SvrMsgHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_)
{
    CInArchive arch((char*)pBuf_, bufLen_);
    LsUInt32 roleid;
    LsInt32 reason;
    arch >> roleid >> reason;

    do {
        PlayerInfoEx* pi = GateApp::Instance()->_playerMgr.FindPlayer(roleid);
        if(NULL == pi) {
            PLAY_ERR("role:%d not found", roleid);
            break;
        }
        pi->KickOff(reason);
        // GateApp::Instance()->_playerMgr.Remove( roleid );
        PLAY_INFO("role:%d kick %d ok", roleid, reason);

    } while(false);
}
bool GateGameSession::ConnectGm(const char* pszIP_, LsUInt16 port_)
{
    bool ret = false;
    GateApp* pIns = GateApp::Instance();
    do {
        int state = GetNetState();
        if(NET_STATE_INIT == state) {
            ret = this->Connect(pszIP_, port_, AppNetStack::Instance()->loop());
        } else if(NET_STATE_HANDLE_DISCONNECT == state) {
            ret = this->ReConnect( AppNetStack::Instance()->loop());
        } else {
            NET_INFO("err state %d", state);
        }

    } while(false);
    return ret;
}
void GateGameSession::PrintTotal()
{
}
bool GateGameSession::OnRecieve(NormalBuff& buff)
{
    int bufLen_ = 0;
    LsUInt8* pBuf_ = buff.GetRawBuf(bufLen_);
    SvrMsgHeader* pheader = (SvrMsgHeader*)pBuf_;

    LsUInt32 leftSize = bufLen_ - sizeof(SvrMsgHeader);
    LsUInt8* pData = (LsUInt8*)pBuf_ + sizeof(SvrMsgHeader);

    if(pheader->size == bufLen_) {
        _totalRecv += bufLen_;
        try {

            this->HandleSvrMsg(*pheader, pData, leftSize);
        } catch(...) {
            SYS_ERR("m:%d c:%d p1:%d p2:%d p3:%d", pheader->module, pheader->cmd, pheader->param1, pheader->param2,
                pheader->param3);
            DumpMem((LsUInt8*)pBuf_, bufLen_);
        }
    } else {
        Disconnect();
        NET_ERR("msgLen %d datalen %d", pheader->size, bufLen_);
        DumpMem((LsUInt8*)pBuf_, bufLen_);
    }
    return true;
}
bool GateGameSession::SendSvrMsg(LsUInt8 module,
    LsUInt8 cmd,
    LsUInt8* pBuf_,
    LsUInt32 bufLen_,
    LsUInt32 param1,
    LsUInt32 param2,
    LsUInt32 p3)
{
    GenSendQueue sq;
    if(bufLen_ > 0) {
        sq.AddBuff(pBuf_, bufLen_, true);
    }

    SvrMsgHeader head;
    head.cmd = cmd;
    head.module = module;
    head.param1 = param1;
    head.param2 = param2;
    head.param3 = p3;
    head.AddToSend(sq);
    return this->Send(sq);
}
