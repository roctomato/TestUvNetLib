#include "read_config.h"

std::ostream& operator<<( std::ostream& src, const zby::RedisCfg& s)
{
	src <<"\t\tip:"<< s.ip;
	src<<std::endl;	src <<"\t\tport:"<< s.port;
	src<<std::endl;	src <<"\t\tindex:"<< s.index;
	src<<std::endl;	src <<"\t\tpassword:"<< s.password;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const zby::IpConfig& s)
{
	src <<"\t\tip:"<< s.ip;
	src<<std::endl;	src <<"\t\tport:"<< s.port;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const zby::config& s)
{
	src <<"\t\tmaxConnectTime:"<< s.maxConnectTime;
	src<<std::endl;	src <<"\t\twaringCount:"<< s.waringCount;
	src<<std::endl;	src <<"\t\tmaxClient:"<< s.maxClient;
	src<<std::endl;	src <<"\t\tredisInfo:"<< s.redisInfo;
	src<<std::endl;	src <<"\t\tkingdom:"<< s.kingdom;
	src<<std::endl;	src <<"\t\tindex:"<< s.index;
	src<<std::endl;	src <<"\t\tlocal:"<< s.local;
	src<<std::endl;	src <<"\t\tpublicIP:"<< s.publicIP;
	src<<std::endl;	src <<"\t\tgameserver:"<< s.gameserver;
	src<<std::endl;	src <<"\t\tcenterserver:"<< s.centerserver;
	src<<std::endl;
	return src;
}


bool ReadFromJson( zby::RedisCfg& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "ip"){
			s.ip = i.GetString();
		}
		else if (node_name == "port"){
			s.port = i.GetUInt16();
		}
		else if (node_name == "index"){
			s.index = i.GetUInt16();
		}
		else if (node_name == "password"){
			s.password = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const zby::RedisCfg& s,  UJsonNode& n)
{
	n.push_back("ip", s.ip);
	n.push_back("port", s.port);
	n.push_back("index", s.index);
	n.push_back("password", s.password);
}


bool ReadFromJson( zby::IpConfig& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "ip"){
			s.ip = i.GetString();
		}
		else if (node_name == "port"){
			s.port = i.GetUInt16();
		}
		++i;
	}
	return true;
}
void WriteToJson( const zby::IpConfig& s,  UJsonNode& n)
{
	n.push_back("ip", s.ip);
	n.push_back("port", s.port);
}


bool ReadFromJson( zby::config& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "maxConnectTime"){
			s.maxConnectTime = i.GetInt16();
		}
		else if (node_name == "waringCount"){
			s.waringCount = i.GetUInt16();
		}
		else if (node_name == "maxClient"){
			s.maxClient = i.GetUInt16();
		}
		else if (node_name == "redisInfo"){
			ReadFromJson( s.redisInfo, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "kingdom"){
			s.kingdom = i.GetUInt32();
		}
		else if (node_name == "index"){
			s.index = i.GetUInt16();
		}
		else if (node_name == "local"){
			ReadFromJson( s.local, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "publicIP"){
			ReadFromJson( s.publicIP, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "gameserver"){
			ReadFromJson( s.gameserver, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "centerserver"){
			ReadFromJson( s.centerserver, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const zby::config& s,  UJsonNode& n)
{
	n.push_back("maxConnectTime", s.maxConnectTime);
	n.push_back("waringCount", s.waringCount);
	n.push_back("maxClient", s.maxClient);
	UJsonNode jnode0;
	WriteToJson( s.redisInfo, jnode0 );
	n.push_back("redisInfo", jnode0 );
	n.push_back("kingdom", s.kingdom);
	n.push_back("index", s.index);
	UJsonNode jnode1;
	WriteToJson( s.local, jnode1 );
	n.push_back("local", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.publicIP, jnode2 );
	n.push_back("publicIP", jnode2 );
	UJsonNode jnode3;
	WriteToJson( s.gameserver, jnode3 );
	n.push_back("gameserver", jnode3 );
	UJsonNode jnode4;
	WriteToJson( s.centerserver, jnode4 );
	n.push_back("centerserver", jnode4 );
}


