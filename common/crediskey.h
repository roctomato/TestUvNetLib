#ifndef CREDISKEY_H
#define CREDISKEY_H

#include "z_typedef.h"
#include <string>

#define WATCH    "watch"
#define MSG_QUEUE "mq"

#define SVR_TYPE_CENTER "center"
#define SVR_TYPE_GAME 	"game"
#define SVR_TYPE_GATE 	"gate"
#define SVR_TYPE_LOGIN	"login"
#define SVT_TYPE_MAIL   "mail"
#define SVR_TYPE_PUBLIC "public"

#define SVR_PRIFIX  "svr"
#define USR_PRIFIX   "usr"
#define ROLE_PRIFIX "role"

#define CHANNEL_KEY "chn"
#define STRING_KEY  "str"
#define HASH_KEY	"hsh"
#define LIST_KEY 	"lst"
#define SET_KEY		"set"
#define ZET_KEY		"zst"
#define SCRIPT_KEY	"spt"

/*
 * 
 * 服务器使用redis推送广播消息格式
 * {
 * "src":"mg:svr:gate:id:1:idx:0",//发送者侦听的消息队列键值
 * "event":"gatelogin",//事件名称
 * "data":{} //事件相关的数据
 * }
 * 
 * 服务器使用redis消息队列格式
 * string src;发送者侦听的消息队列键值
 * string event; 发送事件
 * string data;  该数据可以是二进制流
 * 以上字段全部序列化后生成一个二进制流存入消息队列
 */ 
class CRedisKey {

public:
	CRedisKey();
	~CRedisKey();
	const char* GetWatchAllServerKey();
	const char* GetWatchTypeServerKey(const char* pType);
 
	const char* GenSvrMqAddr(const char* pType, LsUInt32 kingdom=0, LsUInt32 index=0);
	const char* GenCenterMqAddr();
    const char* CurKindomKey();
	const char* GenPublicMqAddr();
	
	const char* BornPosKey();
	const char* RoleItemKey( LsUInt32 roleid );
	const char* RoleDataKey(LsUInt32 roleid );
	const char* LeagueDataKey(LsUInt32 league_id );
	
	const char* OrderKey( int order_type, LsUInt32 league_id );
	const char* LogKey( int log_type, LsUInt32 league_id );
	const char* GetLeagueShopKey(int log_type, LsUInt32 league_id );
	const char* WarRecordKey( LsUInt32 league_id );
	
	const char* HistoryWarKey();
	const char* MarchKey();
	const char* MassKey();
	const char* LogStatisticsKey();
	
	const char* ZbyLogKey();
	
	const char* MagicRecordKey( LsUInt32 castle_id );
	const char* AllianceGiftKey(LsUInt32 roleid );
	
	const char* GolbalDataKey();
	
	const char* EventKey();
	
	const char* ZoneKey();
	
	const char* GateAddrKey( );
	
	const char* GiftCodeKey( const char* fix );
	const char* GettedGiftKey(const char* fix );
	
	const char* GetPlacardTxtKey();
	const char* GetPlacardImgKey();
	
	const char* KingdomSvrInfo(int kingdom);
	
	const char* Format( const char* fmt, ...);
private:
	char _curKey[100];
};

#endif // CREDISKEY_H
