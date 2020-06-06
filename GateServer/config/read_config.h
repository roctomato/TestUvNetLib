#ifndef __READ_CONFIG_H__
#define __READ_CONFIG_H__

#include <vector>
#include <list>
#include <set>
#include <map>
#include "z_typedef.h"

#include <iostream>

#include "json/u_json_node.h"

namespace zby {
//redis配置
struct RedisCfg
{
	std::string ip; //地址
	LsUInt16 port; //端口
	LsUInt16 index; //数据库索引
	std::string password; //密码

	RedisCfg(){
		port = 0;
		index = 0;
	};
};

//redis配置
struct IpConfig
{
	std::string ip; //地址
	LsUInt16 port; //端口

	IpConfig(){
		port = 0;
	};
};

//配置
struct config
{
	LsInt16 maxConnectTime; //客户端最多连接时长
	LsUInt16 waringCount; //警戒人数
	LsUInt16 maxClient; //支撑客户端数
	RedisCfg redisInfo; //redis配置
	LsUInt32 kingdom; //王国ID
	LsUInt16 index; //gate序号
	IpConfig local; //服务器侦听的地址端口
	IpConfig publicIP; //公网地址端口
	IpConfig gameserver; //游戏服务器地址
	IpConfig centerserver; //center服务器地址

	config(){
		maxConnectTime = 0;
		waringCount = 0;
		maxClient = 0;
		kingdom = 0;
		index = 0;
	};
};

};

std::ostream& operator<<( std::ostream& src, const zby::RedisCfg& s);
std::ostream& operator<<( std::ostream& src, const zby::IpConfig& s);
std::ostream& operator<<( std::ostream& src, const zby::config& s);

void WriteToJson( const zby::RedisCfg& s,  UJsonNode& n);
bool ReadFromJson( zby::RedisCfg& s,  const UJsonNode& n );
void WriteToJson( const zby::IpConfig& s,  UJsonNode& n);
bool ReadFromJson( zby::IpConfig& s,  const UJsonNode& n );
void WriteToJson( const zby::config& s,  UJsonNode& n);
bool ReadFromJson( zby::config& s,  const UJsonNode& n );

#endif
