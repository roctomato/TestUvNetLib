#pragma once

// 该文件专门用于定义各类错误号

enum CHAT_ERROR
{
	CHAT_SUCCESS,
	CHAT_ERROR_TARGET_NOT_EXIST,	//	目标不存在
	CHAT_IN_BLACK_FRIEND,			//	在对方黑名单中
	CHAT_ERROR_NO_GUILD,			//	米有公会
	CHAT_ERROR_NO_SELF,				//	不能与自己私聊
	CHAT_ERROR_NO_ITEM,				//	没有聊天所需物品
	CHAT_ERROR_INGAME,				//	对方在游戏中，无法收到某些聊天请求
	CHAT_ERROR_IMSVR_ERR,			//	im服务器异常，无法进行跨服聊天
	CHAT_ERROR_NOTEAM,              // 目前没有队伍
	CHAT_ERROR_TIME,				//	间隔时间不对
	CHAT_ERROR_ERROR_MAP,			//	地图类型不对
	CHAT_ERROR_NOCHANNEL,			//没有频道
	CHAT_ERROR_STATE,				//状态错误
	CHAT_ERROR_IN_TRADE,			//在交易中
	CHAT_ERROR_NULL_COMMAND,		//无效的命令
	CHAT_ERROR_LEVEL_LOW,			//等级过低
};

enum SERVER_TO_SEVER_ERROR
{
	GS_SUCCESS,						//成功	
	GS_REGISTER_IDDUPLICATE,		//重复注册
	GS_REGISTER_INVALIDID,			//无效的服务器id
	GS_REGISTER_FAILED,				//logic error
};