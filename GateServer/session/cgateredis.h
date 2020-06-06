#ifndef CGATEREDIS_H
#define CGATEREDIS_H

#include "gtmsgredis.h"

class CGateRedis : public IHandleRedisEvt
{

public:
	CGateRedis();
	~CGateRedis();
	
	void HandleLoginOnline( Ls::RedisEvent& event);
    void HandlePlayerLogin( Ls::RedisEvent& event);
	void HandleGameLogin( Ls::RedisEvent& event);
	void HandlePgLogin(Ls::RedisEvent& event);
	
	virtual void HandleallSvr( Ls::RedisEvent& event);
	
	void SetSelfKey(const std::string& _selfKey) {
		this->_selfKey = _selfKey;
	}
	
protected:
	std::string  _selfKey;

};



#endif // CGATEREDIS_H
