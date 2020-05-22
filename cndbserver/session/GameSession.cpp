#include "GameSession.hpp"
#include "zby_debug.h"

#include "CNewAccountMgr.h"
#include "cndbserver.h"

#define NO_GS_ID -1

GameSession::GameSession()
{
    this->SetPHandleBuf(this);
    _gsID = NO_GS_ID;
}

GameSession::~GameSession()
{
}

bool GameSession::OnRecieve(NormalBuff& buff)
{
    int len;
    LsUInt8* pBuf = buff.GetRawBuf(len);
    CInArchive in((char*)pBuf, len);
    MobyMsgHeader head;
    head.ReadFrom(in);

    LsUInt8* pData = pBuf + MobyMsgHeader_SZ;
    int data_len = len - MobyMsgHeader_SZ;
    switch(head.cmd) {
        case lol::REGISTERSVR: {
            this->HandleRegister(head, pData, data_len);
            break;
        }
        case lol::SVR_GAME2DB_LOGIN2: {
            this->HandleAccount(head, pData, data_len);
            break;
        }
        case 10020: {// heartbeat ignre
            break;
        }
        default: {
            SYS_ERR("UNKONW cmd %d", head.cmd);
            break;
        }
    }
    return true;
}

int GameSession::OnConnect(const char* pszIP_, LsUInt16 port_, LsUInt32 handleID_)
{
    SYS_INFO("%s:%u connect handle %u", pszIP_, port_, handleID_);
    return 0;
}

int GameSession::OnDisconnect(const char* pszIP_, LsUInt16 port_, Disconnet_Reason reason_)
{
    SYS_INFO("%s:%u disconnect reason %d", pszIP_, port_, reason_);
    if(NO_GS_ID != this->_gsID) {
        cndbserver::Instance()->_gsMgr.UnRegister(*this);
    }
    return 0;
}

bool GameSession::SendMsg(uint16_t cmd, LsUInt8* pBuf, int len, uint64_t playerId)
{
    GenSendQueue send;
    send.AddBuff(pBuf, len, true);
    MobyMsgHeader head;
    head.PushTo(cmd, send, playerId);
    return this->Send(send) == 0;
}

bool GameSession::SendMsg(uint16_t cmd, google::protobuf::Message* pMsg, uint64_t playerId)
{
    std::string out;
    pMsg->SerializeToString(&out);
    return this->SendMsg(cmd, (LsUInt8*)&out[0], out.size(), playerId);
}

void GameSession::HandleRegister(MobyMsgHeader& head, LsUInt8* pData, int len)
{
    lol::SSRegisterSvr msg;
    msg.ParseFromArray(pData, len);
    const lol::MSvrInfo& rMSvrInfo = msg.svrinfo();
    _gsID = rMSvrInfo.svrindex();
    cndbserver::Instance()->_gsMgr.Register(*this);
}

void GameSession::HandleAccount(MobyMsgHeader& head, LsUInt8* pData, int len)
{
    lol::SSLogin msg;
    msg.ParseFromArray(pData, len);
    CNewAccountMgr::Instance()->HandleNewAccount(&msg);
}
////////////////////////////////////////////////////////////////////////////////////////////////////
bool GameServerMgr::SendTo(int gs_id, uint16_t cmd, google::protobuf::Message* pMsg, uint64_t playerId)
{
    bool ret = false;
    do {
        auto it = this->_gsMap.find(gs_id);
        if(it == this->_gsMap.end()) {
            SYS_ERR("no gs %d", gs_id);
            break;
        }

        GameSession* pS = it->second;
        if(NULL == pS) {
            SYS_ERR("gamesession null");
            break;
        }

        ret = pS->SendMsg(cmd, pMsg, playerId);
    } while(false);
    return ret;
}

void GameServerMgr::Register(GameSession& s)
{
    int gs_id = s._gsID;
    do {
        if(NO_GS_ID == gs_id) {
            SYS_ERR("gs id wrong");
            break;
        }

        auto it = this->_gsMap.find(gs_id);
        if(it != this->_gsMap.end()) {
            SYS_ERR("repeat register gs %d", gs_id);
            break;
        }
        _gsMap[gs_id] = &s;

        SYS_INFO("gs %d register %s:%d", gs_id, s.GetIp(), s.GetPort());
    } while(false);
}

void GameServerMgr::UnRegister(GameSession& s)
{
    int gs_id = s._gsID;
    do {
        if(NO_GS_ID == gs_id) {
            SYS_ERR("gs id wrong");
            break;
        }

        auto it = this->_gsMap.find(gs_id);
        if(it == this->_gsMap.end()) {
            SYS_ERR("no register gs %d", gs_id);
            break;
        }
        _gsMap.erase(it);

        SYS_INFO("gs %d un register %s:%d", gs_id, s.GetIp(), s.GetPort());
    } while(false);
}
