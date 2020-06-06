#ifndef GTMSGREDIS_H
#define GTMSGREDIS_H

#include "LsLogicDb.h"
#include "RedisEvent.h"
#include "RedisProtocol.h"
#include "asyncredis.h"
#include "z_typedef.h"
#include <deque>
#include <string>

class IHandleRedisEvt
{
public:
    virtual void HandleallSvr(Ls::RedisEvent& event) = 0;
};
class GtMsgRedis : public AsyncRedis
{

public:
    GtMsgRedis();
    ~GtMsgRedis();

    void AddKey(const char* pKey);
    static bool HandleGateChannel(redisAsyncContext* c, AsyncRedis* redis, CHiredisReply& reply, void* param);

    virtual void OnConnect(int status);
    virtual void OnDisconnect(int status);

    void SetEvtHandler(IHandleRedisEvt* _evtHandler)
    {
        this->_evtHandler = _evtHandler;
    }

protected:
    std::string _watchKey;
    IHandleRedisEvt* _evtHandler;
};

class GtQueueRedis : public AsyncRedis
{

public:
    GtQueueRedis();
    ~GtQueueRedis();
    void InitKey(const char* pType, LsUInt32 kingdom, LsUInt32 index);
    static bool HandleMsgQueue(redisAsyncContext* c, AsyncRedis* redis, CHiredisReply& reply, void* param);
    virtual void OnConnect(int status);
    virtual void OnDisconnect(int status);

    void SetEvtHandler(IHandleRedisEvt* _evtHandler)
    {
        this->_evtHandler = _evtHandler;
    }
    void SetMsgServer(const std::string& _msgServer)
    {
        this->_msgServer = _msgServer;
    }
    void GetMessage();

protected:
    std::string _msgServer;

    IHandleRedisEvt* _evtHandler;
};

enum REDIS_SEND_TYPE {
    REDIS_SEND_TYPE_BOARDCAST,
    REDIS_SEND_TYPE_MSG,
    REDIS_SEND_HSET,
};

struct RedisMsg {
    int type;
    std::string key;
    std::string data;
    std::string fd;
};

class CRedisEvent : public Ls::RedisEvent
{
public:
    CRedisEvent(const char* pSrc, const char* pEvent)
        : _out(data)
    {
        this->src = pSrc;
        this->event = pEvent;
    }
    COutArchive _out;
};

typedef std::deque<RedisMsg> RedisMsgQue;

class SendRedis : public AsyncRedis
{
public:
    SendRedis();
    ~SendRedis();
    void InitKey(const char* pType, LsUInt32 kingdom, LsUInt32 index);
    void SetSrcKey(const std::string& _srcKey)
    {
        this->_srcKey = _srcKey;
    }

    template <typename T> void Boardcast(const char* pEvent, const char* pDes, T& data)
    {
        PushCommandEx<T>(REDIS_SEND_TYPE_BOARDCAST, pEvent, pDes, data);
    }

    template <typename T> void SendQueue(const char* pEvent, const char* pDes, T& data)
    {
        PushCommandEx<T>(REDIS_SEND_TYPE_MSG, pEvent, pDes, data);
    }

    template <typename T> void PushCommandEx(int type, const char* pEvent, const char* pDes, T& data)
    {
        CRedisEvent re(this->_srcKey.c_str(), pEvent);
        re._out << data;

        COutArchive out2;
        out2 << (Ls::RedisEvent&)re;
        LsUInt32 dwLen;
        char* pRetBuf = out2.GetBuf(dwLen);
        PushCommand(type, pDes, pRetBuf, dwLen);
    }
    void SendGateOnlineMsg(int type, const char* pDes, Ls::GateOnline& evt);
    void SendGameOnlineMsg(int type, const char* pDes, Ls::GateOnline& evt);

    void BoardcastLoginOnlineMsg(const char* pDes);
    void SendPlayerLogin(const char* pDes, Ls::role_base_info& info, const string& session_key, const string& accout);
    void SendSaveSql(const char* pDes, const string& sql);
    void PushCommand(int type, const char* pKey, char* pData, int len);

    void SendServerOnlineEx(int type, const char* event, const char* pDes, Ls::GateOnline& evt);
    void SendHashSet(string& key, string& fd, string& value);

protected:
    void SendServerOnline(const char* server_type, int type, const char* pDes, Ls::GateOnline& evt);

    static bool HandleSendMsgOk(redisAsyncContext* c, AsyncRedis* redis, CHiredisReply& reply, void* param);
    //virtual bool HandleSendMsgOk(redisReply* reply);
    virtual void OnConnect(int status);
    virtual void OnDisconnect(int status);

private:
    void SendCommand();
    void SendCommand(RedisMsg& msg);
    RedisMsgQue _msgQue;
    std::string _srcKey;
};
#endif // GTMSGREDIS_H
