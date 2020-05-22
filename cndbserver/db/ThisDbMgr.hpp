#ifndef THISDBMGR_HPP
#define THISDBMGR_HPP

#include "DbThrdContext.hpp" // Base class: DbThrdMgr

class ThisDbMgr : public DbThrdMgr
{
public:
    bool StartDb(int thread_count);
};

#endif // THISDBMGR_HPP
