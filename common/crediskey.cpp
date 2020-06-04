#include "crediskey.h"
#include <stdio.h>
#include <assert.h>
#include <stdarg.h>

CRedisKey::CRedisKey()
{
}

CRedisKey::~CRedisKey()
{
}

const char* CRedisKey::GetWatchAllServerKey()
{
	sprintf( _curKey, "%s:allserver",WATCH);
	return _curKey;
}

const char* CRedisKey::GetWatchTypeServerKey(const char* pType)
{
	assert(pType);
	sprintf( _curKey, "%s:svr:%s",WATCH, pType);
	return _curKey;
}
const char* CRedisKey::GenCenterMqAddr()
{
	sprintf( _curKey, "%s:svr:%s",MSG_QUEUE, SVR_TYPE_CENTER);
	return _curKey;
}

const char* CRedisKey::GenSvrMqAddr(const char* pType, LsUInt32 kingdom, LsUInt32 index)
{
	assert(pType);
	sprintf( _curKey, "%s:svr:%s:id:%d:idx:%d",MSG_QUEUE, pType, kingdom, index);
	return _curKey;
}

const char* CRedisKey::CurKindomKey()
{
    sprintf( _curKey, "%s:kindowmcur",STRING_KEY);
	return _curKey;  
}

const char* CRedisKey::BornPosKey()
{
	sprintf( _curKey, "%s:bornpos",HASH_KEY);
	return _curKey; 
}
const char* CRedisKey::RoleItemKey(LsUInt32 roleid)
{
	sprintf( _curKey, "%s:role:item:%u",HASH_KEY, roleid );
	return _curKey; 
}

const char* CRedisKey::OrderKey(int order_type, LsUInt32 league_id)
{
	if( league_id > 0){
		sprintf( _curKey, "%s:order:%dleague:%d", ZET_KEY, order_type,league_id);
	}
	else{
		sprintf( _curKey, "%s:order:%d", ZET_KEY, order_type);
	}
	return _curKey; 
}

const char* CRedisKey::LogKey(int log_type, LsUInt32 league_id)
{
	if( league_id > 0){		
		sprintf( _curKey, "%s:log:%dleague:%d", LIST_KEY, log_type, league_id);
	}
	else{
		sprintf( _curKey, "%s:log:%d", LIST_KEY, log_type);
	}
	
	return _curKey; 
}
const char* CRedisKey::GetLeagueShopKey(int log_type, LsUInt32 league_id)
{
	sprintf( _curKey, "%s:shoplog:%d:league:%d", LIST_KEY, log_type, league_id);
	return _curKey;
}

const char* CRedisKey::WarRecordKey( LsUInt32 league_id )
{
	sprintf( _curKey, "%s:warrecord:league:%d", LIST_KEY, league_id);
	return _curKey; 
}

const char* CRedisKey::HistoryWarKey()
{
	sprintf( _curKey, "%s:HistoryWar", LIST_KEY);
	return _curKey; 
}
const char* CRedisKey::RoleDataKey(LsUInt32 roleid)
{
	sprintf( _curKey, "%s:role:data:%u",HASH_KEY, roleid );
	return _curKey; 
}

const char* CRedisKey::LogStatisticsKey()
{
	sprintf( _curKey, "%s:logstatistics", LIST_KEY);
	return _curKey; 
}
const char* CRedisKey::MarchKey()
{
	sprintf( _curKey, "%s:%s:march", SVR_PRIFIX, HASH_KEY );
	return _curKey; 
}
const char* CRedisKey::MassKey()
{
	sprintf( _curKey, "%s:%s:mass", SVR_PRIFIX, HASH_KEY );
	return _curKey; 
}
const char* CRedisKey::ZbyLogKey()
{
	sprintf( _curKey, "%s:%s:log", SVR_PRIFIX, LIST_KEY );
	return _curKey; 
}

const char* CRedisKey::MagicRecordKey(LsUInt32 castle_id)
{
	sprintf( _curKey, "%s:magicrecord:castle:%d", LIST_KEY, castle_id);
	return _curKey; 
}

const char* CRedisKey::AllianceGiftKey(LsUInt32 roleid)
{
	sprintf( _curKey, "%s:role:alliancegift:%u",HASH_KEY, roleid );
	return _curKey; 
}

const char* CRedisKey::GenPublicMqAddr()
{
	sprintf( _curKey, "%s:svr:%s",MSG_QUEUE, SVR_TYPE_PUBLIC);
	return _curKey;
}

const char* CRedisKey::GolbalDataKey()
{
	sprintf( _curKey, "%s:golbal:data", HASH_KEY);
	return _curKey; 
}

const char* CRedisKey::EventKey()
{
	sprintf( _curKey, "%s:svr:event", HASH_KEY);
	return _curKey; 
}
const char* CRedisKey::Format(const char* fmt, ...)
{
	va_list ap;
	va_start(ap, fmt);
	vsnprintf(_curKey,  sizeof(_curKey)-1, fmt, ap);
	va_end(ap);
	return _curKey; 
}

const char* CRedisKey::ZoneKey()
{
	sprintf( _curKey, "%s:svr:zone", HASH_KEY);
	return _curKey; 
}
const char* CRedisKey::GateAddrKey()
{
	sprintf( _curKey, "%s:svr:gate:addr", HASH_KEY);
	return _curKey; 
}

const char* CRedisKey::LeagueDataKey(LsUInt32 league_id)
{
	sprintf( _curKey, "%s:league:data:%u",HASH_KEY, league_id );
	return _curKey; 
}

const char* CRedisKey::GettedGiftKey(const char* fix)
{
	sprintf( _curKey, "set:active:%s", fix);
	return _curKey; 
}

const char* CRedisKey::GiftCodeKey(const char* fix)
{
	sprintf( _curKey, "hsh:active:%s", fix);
	return _curKey; 
}

const char* CRedisKey::GetPlacardTxtKey()
{
	sprintf( _curKey, "hsh:placard:txt");
	return _curKey;
}

const char* CRedisKey::GetPlacardImgKey()
{
	sprintf( _curKey, "hsh:placard:img");
	return _curKey;
}

const char* CRedisKey::KingdomSvrInfo(int kingdom)
{
	sprintf( _curKey, "hsh:svr:info:%d", kingdom );
	return _curKey;
}
