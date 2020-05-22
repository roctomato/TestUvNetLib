#ifndef REQPLAYERINFO_HPP
#define REQPLAYERINFO_HPP

#include "ThreadTask.hpp"
#include  "simple.pb.h"
#include "DbThrdContext.hpp"

class CLoginParam
{
public:
	CLoginParam();

	std::string m_strAccount;
	uint64_t m_playerId;
	uint32_t m_gsId;
	uint32_t m_reConnect;
	uint32_t m_clientNetId;
	uint32_t m_gateNetId;
	uint32_t m_gateLine;
	uint32_t m_channel;

	lol::MMachineInfo m_machineInfo;
};

class ReqPlayerInfo:  public ThreadTask
{
public:
    ReqPlayerInfo(uint32_t netId, lol::SSLogin& ssLogin);
    ~ReqPlayerInfo();

    void Execute( int idx, ThreadContext* param) override;
    void HandleResult(bool excuteOk ) override;
    
    uint64_t QueryPlayerID(MYSQL* mysql);
    uint64_t CreateNewPlayerID(MYSQL* mysql);
    
    CLoginParam m_param;
    time_t      m_createTime;
};

#endif // REQPLAYERINFO_HPP
