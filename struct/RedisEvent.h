#ifndef __REDISEVENT_H__
#define __REDISEVENT_H__

#include <vector>
#include <list>
#include <set>
#include <map>
#include "z_typedef.h"

#include <iostream>

#include "Archive.h"

#include "json/u_json_node.h"

namespace Ls {
//通过redis通信的消息体
struct RedisEvent
{
	std::string src; //发送者的消息侦听队列
	std::string event; //事件名称
	std::string data; //消息体

	RedisEvent(){
	};
};

//gate上线
struct GateOnline
{
	LsInt32 kingdom; //所属王国
	LsInt32 index; //gate服务器序号
	std::string ip; //公网地址
	LsUInt16 port; //公网端口

	GateOnline(){
		kingdom = 0;
		index = 0;
		port = 0;
	};
};

};

std::ostream& operator<<( std::ostream& src, const Ls::RedisEvent& s);
std::ostream& operator<<( std::ostream& src, const Ls::GateOnline& s);

CInArchive& operator>>(CInArchive& src, Ls::RedisEvent& s);
COutArchive& operator<<( COutArchive& src, const Ls::RedisEvent& s);
CInArchive& operator>>(CInArchive& src, Ls::GateOnline& s);
COutArchive& operator<<( COutArchive& src, const Ls::GateOnline& s);

void WriteToJson( const Ls::RedisEvent& s,  UJsonNode& n);
bool ReadFromJson( Ls::RedisEvent& s,  const UJsonNode& n );
void WriteToJson( const Ls::GateOnline& s,  UJsonNode& n);
bool ReadFromJson( Ls::GateOnline& s,  const UJsonNode& n );

#endif
