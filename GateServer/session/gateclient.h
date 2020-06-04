#ifndef CDBCLIENT_H
#define CDBCLIENT_H

#include "LsTimeVal.h"
#include "SimpleHandlerFactory.h"
#include "old_zby_protocol.h"
#include "TimerHandler.h"

#define PLAYER_BUF_LEN (128 * 1024)

#define LOGIN_MODULE 10

class GateClient : public ProtolTcp, public OldZbyProtocol
{
public:
    GateClient();
    ~GateClient();

    bool OnRecieve(NormalBuff& buff) override;
    int OnConnect(const char* pszIP_, LsUInt16 port_, LsUInt32 handleID_) override;
    int OnDisconnect(const char* pszIP_, LsUInt16 port_, Disconnet_Reason reason_) override;

    void HandleZbyMsg(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);

    bool SendZbyMsgEx(LsUInt16 msg,
        LsUInt8* pBuf_,
        LsUInt16 bufLen_,
        LsUInt32 sendflag = 0,
        LsUInt16 flag = 0,
        LsUInt16 module = 0); // for server

    void CheckConnect(LsTimeVal& now);

    void Pass2Game(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);
    void Pass2Center(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);
    void Pass2Publicgate(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);

    /////////////////////////////////////////////////////////////////////////////////////////
    void HandleGateMsg(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);
    /////////////////////////////////////////////////////////////////////////////////////////
    void HandleGameLogin(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);
    void HandleHeartBeat(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);
    void HandleRecreateRole(PacketHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);

    void CheckRecvSpeed();

    int _cid;
    int _userRoleID;
    int _gameSvrID;
    time_t _connectTime;
    time_t _passAuth;

    time_t _lastRecvTime;
    time_t _startCountTime;
    int _totalCount;

    int _totalSendCount;
    LsUInt32 _totalSendBytes;

    int _totalRecvCount;
    LsUInt32 _totalRecvBytes;
};

class GateClientMgr : public ZbyIDTcpServer<GateClient>, public TimerHandler
{
public:
    GateClientMgr();
    ~GateClientMgr();

    GateClient* FindClient(int id){ return FindObj(id); }

    //virtual bool OnUpdate(LsTimeVal& now);
    bool OnTime(uint64_t now) override;
 
    bool SendZbyMsgEx(int id,
        LsUInt16 msg,
        LsUInt8* pBuf_,
        LsUInt16 bufLen_,
        LsUInt32 sendflag = 0,
        LsUInt16 flag = 0,
        LsUInt16 module = 0);
    bool Disconnect(int id);
    int Count()
    {
        return GetCount();
    }
    void SendConnectCount();
    LsInt32 _timeStamp;
};

#endif // CDBCLIENT_H
