#include "ThisDbMgr.hpp"
#include "cndbserver.h"

bool ThisDbMgr::StartDb(int thread_count)
{
    mb::DbConfig& cfg = cndbserver::Instance()->_configInfo.dbcfg;
    return DbThrdMgr::StartDb( thread_count, AppNetStack::Instance()->loop(), cfg.host.c_str(), cfg.user.c_str(), cfg.passwd.c_str(), cfg.db.c_str(), cfg.port, MYSQL_FLAG );
}
