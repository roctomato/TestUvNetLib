#ifndef GAMESESSION_HPP
#define GAMESESSION_HPP

#include "ProtolTcp.hpp" // Base class: ProtolTcp
#include "MobyServerProtol.hpp" // Base class: MobyServerProtol

#include  "simple.pb.h"

#include "SingletonT.h"
#include "SimpleHandlerFactory.h"

class GameSession : public ProtolTcp, public MobyServerProtol
{
public:
    GameSession();
    ~GameSession();

    bool OnRecieve(NormalBuff& buff) override;
    int  OnConnect(const char* pszIP_, LsUInt16 port_, LsUInt32 handleID_) override;
    int  OnDisconnect(const char* pszIP_, LsUInt16 port_, Disconnet_Reason reason_) override;
    
    bool SendMsg( uint16_t cmd, google::protobuf::Message* pMsg, uint64_t playerId = 0);
    bool SendMsg( uint16_t cmd, LsUInt8*pBuf, int len, uint64_t playerId = 0);
    
    void HandleRegister( MobyMsgHeader& head, LsUInt8* pData, int len );
    void HandleAccount(MobyMsgHeader& head, LsUInt8* pData, int len );
    int _gsID;
};


class GameServerMgr: public ZbyIDTcpServer<GameSession> 
{
public:    
    bool SendTo(int gs_id, uint16_t cmd, google::protobuf::Message* pMsg, uint64_t playerId );
    void Register(GameSession& s);
    void UnRegister(GameSession& s);
    
    std::map<int,  GameSession*> _gsMap;
};

#endif // GAMESESSION_HPP
