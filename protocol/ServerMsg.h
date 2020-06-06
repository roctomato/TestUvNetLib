#ifndef __SERVERMSG_H__
#define __SERVERMSG_H__

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <string.h>
#include "ls_xtype.h"
#include "Archive.h"
#include "loop_buf.h"
namespace LsSvr {
//服务器通信模块
enum E_Svr_Msg_Module
{
	 SVR_MSG_PROXY_MODULE = 1, //转发消息模块
	 SVR_MSG_LOGIC_MODULE = 2, //服务器间逻辑模块
};

//只带1个string的消息体
struct ProxyOneString
{
	std::string data; //消息体

	ProxyOneString(){
	};
};

//服务器间逻辑消息
enum Svr_Logic_Msg
{
	 Svr_Logic_Gate_Register = 1, //gate向game\center注册自己的kingdom
	 Svr_Logic_Role_Login = 101, //gate通知game有玩家进入游戏世界
	 Svr_Logic_Role_Logout = 102, //gate通知game有玩家离开游戏世界
	 Svr_Logic_Online_Count = 103, //gate通知game游戏世界在线玩家数量
	 Svr_Logic_Kick_Role = 104, //game向gate发送踢人消息
	 Svr_Logic_GameRestart = 105, //game向gate重启消息
	 Svr_Logic_Init_Role_Mail = 200, //game初始系统邮件
	 Svr_Logic_Init_Role_Mail_Response = 201, //game初始系统邮件
	 Svr_Logic_Save_Mail = 202, //game保存邮件
	 Svr_Logic_reCreate_role = 203, //gate向center申请某一个账号重新生成原始玩家数据
	 Svr_Logic_get_reward = 204, //center向game通知玩家需要领取邮件附件里的奖励
	 Svr_Logic_Exxcute_Sql = 205, //game向center执行sql
	 Svr_Logic_get_many_reward = 206, //center向game通知玩家需要领取多个邮件附件里的奖励
};

//转发消息
enum Svr_Proxy_Msg
{
	 Svr_Proxy_Client_Game = 1, //gate转发客户端消息到game
	 Svr_Proxy_Game_Client = 2, //game通过gate发消息到客户端
	 Svr_Proxy_Group_Msg = 3, //群发消息
	 Svr_Proxy_Client_Center = 4, //gate转发客户端消息到center
	 Svr_Proxy_Center_Client = 5, //center
};

typedef std::set<LsUInt32> SetRoleID; //cmment

//发1条消息到多客户端
struct Proxy_Many_Client
{
	SetRoleID setRole; //要发送的角色ID
	LsInt32 except; //不要发送的角色ID
	std::string data; //发送的数据

	Proxy_Many_Client(){
		except = 0;
	};
};

};

CInArchive& operator>>(CInArchive& src, LsSvr::ProxyOneString& s);
LoopBufEx& operator<<( LoopBufEx& src, const LsSvr::ProxyOneString& s);
COutArchive& operator<<( COutArchive& src, const LsSvr::ProxyOneString& s);
CInArchive& operator>>(CInArchive& src, LsSvr::SetRoleID& s);
LoopBufEx& operator<<( LoopBufEx& src, const LsSvr::SetRoleID& s);
COutArchive& operator<<( COutArchive& src, const LsSvr::SetRoleID& s);
CInArchive& operator>>(CInArchive& src, LsSvr::Proxy_Many_Client& s);
LoopBufEx& operator<<( LoopBufEx& src, const LsSvr::Proxy_Many_Client& s);
COutArchive& operator<<( COutArchive& src, const LsSvr::Proxy_Many_Client& s);

#endif
