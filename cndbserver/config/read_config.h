#ifndef __READ_CONFIG_H__
#define __READ_CONFIG_H__

#include <vector>
#include <list>
#include <set>
#include <map>
#include "z_typedef.h"

#include <iostream>

#include "json/u_json_node.h"

namespace mb {
//db配置
struct DbConfig
{
	std::string host; //地址
	LsUInt16 port; //端口
	std::string user; //用户名
	std::string passwd; //密码
	std::string db; //数据库名

	DbConfig(){
		port = 0;
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
	IpConfig local; //服务器侦听的地址端口
	DbConfig dbcfg; //数据库配置
	LsUInt32 dbthread_count; //数库线程数

	config(){
		dbthread_count = 0;
	};
};

};

std::ostream& operator<<( std::ostream& src, const mb::DbConfig& s);
std::ostream& operator<<( std::ostream& src, const mb::IpConfig& s);
std::ostream& operator<<( std::ostream& src, const mb::config& s);

void WriteToJson( const mb::DbConfig& s,  UJsonNode& n);
bool ReadFromJson( mb::DbConfig& s,  const UJsonNode& n );
void WriteToJson( const mb::IpConfig& s,  UJsonNode& n);
bool ReadFromJson( mb::IpConfig& s,  const UJsonNode& n );
void WriteToJson( const mb::config& s,  UJsonNode& n);
bool ReadFromJson( mb::config& s,  const UJsonNode& n );

#endif
