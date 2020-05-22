#include "CNewAccountMgr.h"
#include "ReqPlayerInfo.hpp"
#include "cndbserver.h"
#include "zby_debug.h"

std::string GetKey(std::string& account, int gs_id)
{
    transform(account.begin(), account.end(), account.begin(), ::toupper);
    char temp[100];
    sprintf(temp, "%s_%d", account.c_str(), gs_id);
    return temp;
}

//////////////////////////////////////////////////////
CNewAccountMgr::CNewAccountMgr()
{
}

CNewAccountMgr::~CNewAccountMgr()
{
}

void CNewAccountMgr::HandleNewAccount(lol::SSLogin* pSSLogin)
{
    std::string name = pSSLogin->account();
    std::string account = GetKey(name, pSSLogin->gs_id());

    uint32_t netId = pSSLogin->netid();
    auto it = this->_accountMap.find(account);
    NewAccount* pN = NULL;

    if(it == this->_accountMap.end()) {
        NewAccount& na = this->_accountMap[account];
        na.account = account;
        pN = &na;
        na.PushToDb(pSSLogin);
    } else {
        pN = &(it->second);
    }

    pN->AddNetId(netId);
}

void CNewAccountMgr::HandleDbReturn(lol::Db2GameLogin& dbmsg, uint32_t gsId)
{
    std::string account = dbmsg.mutable_roledata()->account();
    std::string key = GetKey(account, gsId);

    auto it = this->_accountMap.find(key);
    if(it != this->_accountMap.end()) {
        NewAccount& na = it->second;
        dbmsg.set_netid(na.lastNetId);
        SYS_INFO("%s query db return netid %u", key.c_str(), na.lastNetId);
        this->_accountMap.erase(it);
    } else {
        SYS_ERR("no key %s", key.c_str());
    }

    cndbserver::Instance()->_gsMgr.SendTo(gsId, lol::SVR_DB2GAME_LOGIN2, &dbmsg, 0);
}

//////////////////////////////////////////////////////////////////////////
void NewAccount::PushToDb(lol::SSLogin* pSSLogin)
{
    uint32_t netId = pSSLogin->netid();
    cndbserver::Instance()->_dbThrd.PushTaskEx<ReqPlayerInfo>(0, netId, *pSSLogin);
    SYS_INFO("%s query db netid %u", this->account.c_str(), netId);
}

void NewAccount::AddNetId(uint32_t netid)
{
    if(!netIDSet.empty()) {
        SYS_ERR("%s query db change last netid %u", this->account.c_str(), netid);
    }
    netIDSet.insert(netid);
    lastNetId = netid;
}
