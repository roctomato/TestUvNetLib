#ifndef GATEGAMESESSION_H
#define GATEGAMESESSION_H

#include "LsLogicDb.h"
#include "LsTimeVal.h"
#include "zserverhandler.h"
#include <map>
#include <set>

#define NET_BUF_LEN (10 * 1024 * 1024)

typedef std::map<LsUInt32, int> ConnectGameMap;

class PlayerInfoEx;
class GateGameSession : public ProtolTcp, public ZServerHandler
{
public:
    GateGameSession();
    ~GateGameSession();
    bool ConnectGm(const char* pszIP_, LsUInt16 port_);

    bool OnRecieve(NormalBuff& buff) override;
    int OnConnect(const char* pszIP_, LsUInt16 port_, LsUInt32 handleID_) override;
    int OnDisconnect(const char* pszIP_, LsUInt16 port_, Disconnet_Reason reason_) override;
    
    void HandleSvrMsg(SvrMsgHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);
    bool SendSvrMsg( LsUInt8  module, LsUInt8 cmd, LsUInt8 *pBuf_, LsUInt32 bufLen_, LsUInt32 param1=0, LsUInt32 param2=0, LsUInt32 p3=0 );

    void HandleLogicSvrMsg(SvrMsgHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);
    void HandleKickMsg(SvrMsgHeader& header, LsUInt8* pBuf_, LsInt32 bufLen_);
    void SendRegister();
    void SendRoleWillLogin(PlayerInfoEx& pi);
    void SendRoleWillLogin(Ls::role_base_info& rbi);
    void SendRoleLogout(PlayerInfoEx& pi);
    void SendRoleLogoutEx(LsUInt32 roleid);
    void SendOnlineCount(LsUInt32 count);

    void PrintTotal();

    LsUInt32 _kingdom;

    LsUInt32 _totalSend;
    LsUInt32 _totalRecv;
};

#endif // GATEGAMESESSION_H
