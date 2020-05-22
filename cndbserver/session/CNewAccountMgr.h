#ifndef CNEWACCOUNTMGR_H
#define CNEWACCOUNTMGR_H

#include "SingletonT.h"
#include <map>
#include <set>
#include <string>

#include "simple.pb.h"


typedef std::set<uint32_t> NetIdSet;

struct NewAccount
{
    std::string account;
    NetIdSet    netIDSet;
    uint32_t    lastNetId;
    void PushToDb(lol::SSLogin* pSSLogin);
    void AddNetId(uint32_t netid);
};

typedef std::map<std::string, NewAccount> NewAccountMap;

class CNewAccountMgr: public SingletonT<CNewAccountMgr> 
{
public:
    CNewAccountMgr();
    ~CNewAccountMgr();

    void HandleNewAccount( lol::SSLogin* pSSLogin );
    void HandleDbReturn(lol::Db2GameLogin& dbmsg, uint32_t gsId);
    NewAccountMap _accountMap;
};

#endif // CNEWACCOUNTMGR_H
