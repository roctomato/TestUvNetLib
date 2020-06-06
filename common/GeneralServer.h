#ifndef __GENERAL_SERVER_H__
#define __GENERAL_SERVER_H__

#include "zby_debug.h"

#define DEFAULT_DB_SERVER_PORT   30001

#define DEFAULT_GAME_SERVER_PORT 30002

#define DEFAULT_CENTER_LOGIN_PORT 30060
#define DEFAULT_CENTER_GAME_PORT 	30061

#define DEFAULT_LOGIN_SERVER_PORT  30006

// auth:dbname:hero_id:sessionkey
#define AUTH_SESSION_FMT         "auth:%s:%u:%u"

#define LOGIN_SERVER_TYPE    1
#define CENTER_SERVER_TYPE  2
#define GAME_SERVER_TYPE       3

#define SWITCH_SERVER_TIMEOUT	120
#define  CACHED_TIME                              60

#define SERVER_LOGIC_CHAT_TYPE   1


#define SEND_FLAG_FLUSH 1
#define SEND_FLAG_CLOSE  ( 1<<1 )

#define GAME_NAME     "zhanhuo&wenming"
#define VERISION_NAME "0.1.0"


#define CFG_FOLD      "../cfg/"

#define  PLAY_LOGOBJECT       "player"
#define  CENTER_LOGOBJECT       "center"
#define  FIGHT_LOGOBJECT       "fight"
#define  LEAGUE_LOGOBJECT       "league"
#define  REDIS_LOGOBJECT       "redis"
#define  RELIC_LOGOBJECT       "relic"
#define  PAY_LOGOBJECT         "pay"
#define  RES_LOGOBJECT         "res"
#define  DATA_LOGOBJECT         "data"





#define PLAY_INFO(FMT, ...)  LogPrintPrint( PLAY_LOGOBJECT, LOG_PRIORITY_INFO,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define PLAY_WARN(FMT, ...)  LogPrintPrint( PLAY_LOGOBJECT, LOG_PRIORITY_WARNING,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define PLAY_ERR(FMT, ...)      LogPrintPrint( PLAY_LOGOBJECT, LOG_PRIORITY_ERROR,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define PLAY_DEBUG(FMT, ...) LogPrintPrint( PLAY_LOGOBJECT, LOG_PRIORITY_DEBUG,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )

#define CENTER_INFO(FMT, ...)  LogPrintPrint( CENTER_LOGOBJECT, LOG_PRIORITY_INFO,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define CENTER_WARN(FMT, ...)  LogPrintPrint( CENTER_LOGOBJECT, LOG_PRIORITY_WARNING,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define CENTER_ERR(FMT, ...)      LogPrintPrint( CENTER_LOGOBJECT, LOG_PRIORITY_ERROR,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define CENTER_DEBUG(FMT, ...) LogPrintPrint( CENTER_LOGOBJECT, LOG_PRIORITY_DEBUG,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )

#define FIGHT_INFO(FMT, ...)  LogPrintPrint( FIGHT_LOGOBJECT, LOG_PRIORITY_INFO,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define FIGHT_WARN(FMT, ...)  LogPrintPrint( FIGHT_LOGOBJECT, LOG_PRIORITY_WARNING,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define FIGHT_ERR(FMT, ...)      LogPrintPrint( FIGHT_LOGOBJECT, LOG_PRIORITY_ERROR,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define FIGHT_DEBUG(FMT, ...) LogPrintPrint( FIGHT_LOGOBJECT, LOG_PRIORITY_DEBUG,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )

#define LEAGUE_INFO(FMT, ...)  LogPrintPrint( LEAGUE_LOGOBJECT, LOG_PRIORITY_INFO,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define LEAGUE_WARN(FMT, ...)  LogPrintPrint( LEAGUE_LOGOBJECT, LOG_PRIORITY_WARNING,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define LEAGUE_ERR(FMT, ...)      LogPrintPrint( LEAGUE_LOGOBJECT, LOG_PRIORITY_ERROR,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define LEAGUE_DEBUG(FMT, ...) LogPrintPrint( LEAGUE_LOGOBJECT, LOG_PRIORITY_DEBUG,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )

#define REDIS_INFO(FMT, ...)  LogPrintPrint( REDIS_LOGOBJECT, LOG_PRIORITY_INFO,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define REDIS_WARN(FMT, ...)  LogPrintPrint( REDIS_LOGOBJECT, LOG_PRIORITY_WARNING,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define REDIS_ERROR(FMT, ...)      LogPrintPrint( REDIS_LOGOBJECT, LOG_PRIORITY_ERROR,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define REDIS_DEBUG(FMT, ...) LogPrintPrint( REDIS_LOGOBJECT, LOG_PRIORITY_DEBUG,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )

#define RELIC_INFO(FMT, ...)  LogPrintPrint( RELIC_LOGOBJECT, LOG_PRIORITY_INFO,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define RELIC_WARN(FMT, ...)  LogPrintPrint( RELIC_LOGOBJECT, LOG_PRIORITY_WARNING,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define RELIC_ERR(FMT, ...) LogPrintPrint( RELIC_LOGOBJECT, LOG_PRIORITY_ERROR,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define RELIC_DEBUG(FMT, ...) LogPrintPrint( RELIC_LOGOBJECT, LOG_PRIORITY_DEBUG,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )

#define PAY_INFO(FMT, ...)  LogPrintPrint( PAY_LOGOBJECT, LOG_PRIORITY_INFO,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define PAY_WARN(FMT, ...)  LogPrintPrint( PAY_LOGOBJECT, LOG_PRIORITY_WARNING,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define PAY_ERR(FMT, ...)      LogPrintPrint( PAY_LOGOBJECT, LOG_PRIORITY_ERROR,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define PAY_DEBUG(FMT, ...) LogPrintPrint( PAY_LOGOBJECT, LOG_PRIORITY_DEBUG,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )

#define RES_INFO(FMT, ...)  LogPrintPrint( RES_LOGOBJECT, LOG_PRIORITY_INFO,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define RES_WARN(FMT, ...)  LogPrintPrint( RES_LOGOBJECT, LOG_PRIORITY_WARNING,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define RES_ERR(FMT, ...)      LogPrintPrint( RES_LOGOBJECT, LOG_PRIORITY_ERROR,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )
#define RES_DEBUG(FMT, ...) LogPrintPrint( RES_LOGOBJECT, LOG_PRIORITY_DEBUG,"%s (%s:%d) " FMT,__FUNCTION__,__FILE__,__LINE__, ## __VA_ARGS__ )

#define DATA_INFO(FMT, ...) 

#endif
