#include <stdio.h>
#include <string.h>

#include "Archive.h"
#include "GeneralServer.h"
#include "LsUtility.h"
#include "zby_debug.h"

#include "crediskey.h"

#include "gtmsgredis.h"
#include <assert.h>

GtMsgRedis::GtMsgRedis()
    : _evtHandler(NULL)
{
}

GtMsgRedis::~GtMsgRedis()
{
}

void GtMsgRedis::AddKey(const char* pKey)
{
    if(_watchKey.empty()) {
        _watchKey = pKey;
    } else {
        _watchKey.append(" ", 1);
        _watchKey.append(pKey, strlen(pKey));
    }
}

bool GtMsgRedis::HandleGateChannel(redisAsyncContext* c, AsyncRedis* redis, CHiredisReply& reply, void* param)
{
    do {
        GtMsgRedis* p = dynamic_cast<GtMsgRedis*>(redis);
        if(NULL == p) {
            REDIS_ERROR("dynamic_cast error");
            break;
        }

        int sz = 0;
        bool isArray = reply.IsArray(sz);

        if(!isArray || sz != 3) {
            REDIS_ERROR("wrong msg ");
            break;
        }

        std::string msg_type;
        if(!reply.GetValueInArray(msg_type, 0)) {
            REDIS_ERROR("Get msg type err ");
            break;
        }

        REDIS_INFO("message type= %s", msg_type.c_str());

        if("message" == msg_type) {
            std::string channel;
            std::string msg;

            reply.GetValueInArray(channel, 1);
            reply.GetValueInArray(msg, 2);
            try {
                CInArchive arch(msg.c_str(), msg.size());
                Ls::RedisEvent event;
                arch >> event;
                REDIS_INFO("recv boardcast src:%s evt:%s", event.src.c_str(), event.event.c_str());

                if(p->_evtHandler)
                    p->_evtHandler->HandleallSvr(event);
                else
                    REDIS_ERROR("no handler");
            } catch(ArInExc& e) {
                REDIS_ERROR("%x %s", p, e.what());
                DumpMem((LsUInt8*)(&msg[0]), msg.size());
            }
        }
    } while(false);
    return true;
}
void GtMsgRedis::OnConnect(int status)
{
    if(status != REDIS_OK) {
        REDIS_INFO("Error: %s\n", _context->errstr);
        return;
    }

    REDIS_INFO("redis Connected...");

    char cmd[128];
    sprintf(cmd, "SUBSCRIBE %s ", _watchKey.c_str());

    ExecRepeatCallback(GtMsgRedis::HandleGateChannel, this, cmd);
    REDIS_INFO("watch channel %s", cmd);
}

void GtMsgRedis::OnDisconnect(int status)
{
}
/*
bool GtMsgRedis::HandleGateChannel(redisReply* reply)
{
    // PrintReply( reply );
    if(reply && reply->type == REDIS_REPLY_ARRAY && reply->elements == 3) {
        redisReply* c = reply->element[0];
        if(c) {
            REDIS_INFO("message type=%d %s", c->type, c->str);
            // std::string str = c->str;
            if(strcmp("message", c->str) == 0) {
                redisReply* channel = reply->element[1];
                redisReply* cur = reply->element[2];
                REDIS_INFO("value type=%d", cur->type);
                //_typeChannel.c_str();
                if(cur) {
                    try {
                        CInArchive arch(cur->str, cur->len);
                        Ls::RedisEvent event;
                        arch >> event;
                        REDIS_INFO("recv boardcast src:%s evt:%s", event.src.c_str(), event.event.c_str());

                        if(_evtHandler)
                            _evtHandler->HandleallSvr(event);
                        else
                            REDIS_ERROR("no handler");
                    } catch(ArInExc& e) {
                        REDIS_ERROR("%x %s", this, e.what());
                        DumpMem((LsUInt8*)cur->str, cur->len);
                    }
                }
            }
        }
    }
    return true;
}
 */

////////////////////////////////////////////////////////////////////////////////////////////////////////

GtQueueRedis::GtQueueRedis()
    : _evtHandler(NULL)
{
}
bool GtQueueRedis::HandleMsgQueue(redisAsyncContext* c, AsyncRedis* redis, CHiredisReply& reply, void* param)
{
    do {
        GtQueueRedis* p = dynamic_cast<GtQueueRedis*>(redis);
        if(NULL == p) {
            REDIS_ERROR("dynamic_cast error");
            break;
        }

        int sz = 0;
        bool isArray = reply.IsArray(sz);

        if(!isArray || sz != 2) {
            REDIS_ERROR("wrong msg ");
            break;
        }

        std::string msg;
        reply.GetValueInArray(msg, 1);

        try {
            CInArchive arch(msg.c_str(), msg.size());
            Ls::RedisEvent event;
            arch >> event;
            REDIS_INFO("recv QUEUE src:%s evt:%s", event.src.c_str(), event.event.c_str());

            if(p->_evtHandler)
                p->_evtHandler->HandleallSvr(event);
            else
                REDIS_ERROR("no handler");
             p->GetMessage();   
            
        } catch(ArInExc& e) {
            REDIS_ERROR("%x %s", p, e.what());
            DumpMem((LsUInt8*)(&msg[0]), msg.size());
        }
    } while(false);
    return true;
}
/*
bool GtQueueRedis::HandleMsgQueue(redisReply* reply)
{
    // this->PrintReply( reply);
    if(reply && reply->type == REDIS_REPLY_ARRAY && reply->elements == 2) {
        redisReply* c = reply->element[1];
        if(c) {
            try {
                CInArchive arch(c->str, c->len);
                Ls::RedisEvent event;
                arch >> event;
                REDIS_INFO("recv msg src:%s evt:%s", event.src.c_str(), event.event.c_str());
                // this->OnRecvEvnt( event);
                if(_evtHandler)
                    _evtHandler->HandleallSvr(event);
                else
                    REDIS_ERROR("no handler");
            } catch(ArInExc& e) {
                REDIS_ERROR("%x %s", this, e.what());
                DumpMem((LsUInt8*)c->str, c->len);
            }
        }
    }
    this->GetMessage();
    return true;
}
*/
void GtQueueRedis::OnConnect(int status)
{

    if(status != REDIS_OK) {
        REDIS_INFO("Error: %s\n", _context->errstr);
        return;
    }

    GetMessage();
}

void GtQueueRedis::OnDisconnect(int status)
{
}

GtQueueRedis::~GtQueueRedis()
{
}

void GtQueueRedis::GetMessage()
{
    char cmd[128];
    sprintf(cmd, "blpop %s 0", this->_msgServer.c_str());

    Exec(GtQueueRedis::HandleMsgQueue, NULL, cmd);
    REDIS_INFO("msg queue %s", cmd);
}

void GtQueueRedis::InitKey(const char* pType, LsUInt32 kingdom, LsUInt32 index)
{
    CRedisKey key;
    _msgServer = key.GenSvrMqAddr(pType, kingdom, index);
}

//////////////////////////////////////////////////////////////////////////////
/*
bool SendRedis::HandleSendMsgOk(redisReply* reply)
{
    SendCommand();
    return true;
}
 */
bool SendRedis::HandleSendMsgOk(redisAsyncContext* c, AsyncRedis* redis, CHiredisReply& reply, void* param)
{
    SendRedis* p = dynamic_cast<SendRedis*>(redis);
    if(NULL == p) {
        REDIS_ERROR("dynamic_cast error");
    } else {
        p->SendCommand();
    }
    return true;
}
void SendRedis::InitKey(const char* pType, LsUInt32 kingdom, LsUInt32 index)
{
    CRedisKey key;
    _srcKey = key.GenSvrMqAddr(pType, kingdom, index);
}

void SendRedis::OnConnect(int status)
{
    if(status != REDIS_OK) {
        REDIS_INFO("Error: %s\n", _context->errstr);
        return;
    }

    this->SendCommand();
}

void SendRedis::OnDisconnect(int status)
{
}

void SendRedis::PushCommand(int type, const char* pKey, char* pData, int len)
{
    assert(pKey);
    assert(pData && len > 0);
    RedisMsg msg;
    msg.type = type;
    msg.key = pKey;
    msg.data.assign(pData, len);

    if(_msgQue.empty() && this->IsConnect()) {
        this->SendCommand(msg);
    } else {
        _msgQue.push_back(msg);
    }
}

SendRedis::SendRedis()
{
}

SendRedis::~SendRedis()
{
}

void SendRedis::SendCommand()
{
    if(_msgQue.empty() || !this->IsConnect())
        return;
    RedisMsg& msg = _msgQue.front();
    SendCommand(msg);
    _msgQue.pop_front();
}

void SendRedis::SendCommand(RedisMsg& msg)
{
    HandleRedis fn = (HandleRedis)&SendRedis::HandleSendMsgOk;
    REDIS_INFO(" send type:%d key:%s", msg.type, msg.key.c_str());
    switch(msg.type) {
    case REDIS_SEND_TYPE_BOARDCAST:
        this->Exec(fn, NULL,"publish %s %b", msg.key.c_str(), msg.data.c_str(), msg.data.size());
        break;

    case REDIS_SEND_TYPE_MSG:
        this->Exec(fn, NULL,"rpush %s %b", msg.key.c_str(), msg.data.c_str(), msg.data.size());
        break;
    case REDIS_SEND_HSET:
        this->Exec(fn, NULL, "hset %s %s %s", msg.key.c_str(), msg.fd.c_str(), msg.data.c_str());
        break;
    default:
        REDIS_ERROR("wrong type %d", msg.type);
        break;
    }
}

void SendRedis::SendGateOnlineMsg(int type, const char* pDes, Ls::GateOnline& data)
{
    SendServerOnline(SVR_TYPE_GATE, type, pDes, data);
}

void SendRedis::SendGameOnlineMsg(int type, const char* pDes, Ls::GateOnline& evt)
{
    SendServerOnline(SVR_TYPE_GAME, type, pDes, evt);
}
void SendRedis::SendServerOnlineEx(int type, const char* event, const char* pDes, Ls::GateOnline& data)
{

    Ls::RedisEvent evt;
    evt.src = this->_srcKey;
    evt.event = event;

    COutArchive out(evt.data);
    out << data;

    COutArchive out2;
    out2 << evt;
    LsUInt32 dwLen;
    char* pRetBuf = out2.GetBuf(dwLen);
    PushCommand(type, pDes, pRetBuf, dwLen); // REDIS_SEND_TYPE_BOARDCAST
}

void SendRedis::SendServerOnline(const char* server_type, int type, const char* pDes, Ls::GateOnline& data)
{

    Ls::RedisEvent evt;
    evt.src = this->_srcKey;
    if(strcmp(server_type, SVR_TYPE_GATE) == 0) {
        evt.event = EVENT_GATE_ONLINE;
    } else if(strcmp(server_type, SVR_TYPE_GAME) == 0) {
        evt.event = EVENT_GAME_ONLINE;
    } else {
        REDIS_ERROR("unsurport type:%s", server_type ? server_type : "NULL");
        return;
    }

    COutArchive out(evt.data);
    out << data;

    COutArchive out2;
    out2 << evt;
    LsUInt32 dwLen;
    char* pRetBuf = out2.GetBuf(dwLen);
    PushCommand(type, pDes, pRetBuf, dwLen);
}

void SendRedis::BoardcastLoginOnlineMsg(const char* pDes)
{
    Ls::RedisEvent evt;
    evt.src = this->_srcKey;
    evt.event = EVENT_LOGIN_ONLINE;
    COutArchive out;
    out << evt;

    LsUInt32 dwLen;
    char* pRetBuf = out.GetBuf(dwLen);
    PushCommand(REDIS_SEND_TYPE_BOARDCAST, pDes, pRetBuf, dwLen);
}

void SendRedis::SendPlayerLogin(const char* pDes,
    Ls::role_base_info& info,
    const string& session_key,
    const string& account)
{
    Ls::RedisEvent evt;
    evt.src = this->_srcKey;
    evt.event = EVENT_PLAYER_LOGIN;
    COutArchive out(evt.data);
    out << info << session_key << account;

    COutArchive out2;
    out2 << evt;
    LsUInt32 dwLen;
    char* pRetBuf = out2.GetBuf(dwLen);
    PushCommand(REDIS_SEND_TYPE_MSG, pDes, pRetBuf, dwLen);
}
void SendRedis::SendSaveSql(const char* pDes, const string& sql)
{
    Ls::RedisEvent evt;
    evt.src = this->_srcKey;
    evt.event = EVENT_CENTER_SAVE_SQL;
    evt.data = sql;
    // COutArchive out(evt.data);
    // out<< sql ;

    COutArchive out2;
    out2 << evt;
    LsUInt32 dwLen;
    char* pRetBuf = out2.GetBuf(dwLen);
    PushCommand(REDIS_SEND_TYPE_MSG, pDes, pRetBuf, dwLen);
}
void SendRedis::SendHashSet(string& key, string& fd, string& value)
{
    RedisMsg msg;
    msg.type = REDIS_SEND_HSET;
    msg.key = key;
    msg.data = value;
    msg.fd = fd;

    if(_msgQue.empty() && this->IsConnect()) {
        this->SendCommand(msg);
    } else {
        _msgQue.push_back(msg);
    }
}
