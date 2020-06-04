#include "RedisEvent.h"

std::ostream& operator<<( std::ostream& src, const Ls::RedisEvent& s)
{
	src <<"\t\tsrc:"<< s.src;
	src<<std::endl;	src <<"\t\tevent:"<< s.event;
	src<<std::endl;	src <<"\t\tdata:"<< s.data;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::GateOnline& s)
{
	src <<"\t\tkingdom:"<< s.kingdom;
	src<<std::endl;	src <<"\t\tindex:"<< s.index;
	src<<std::endl;	src <<"\t\tip:"<< s.ip;
	src<<std::endl;	src <<"\t\tport:"<< s.port;
	src<<std::endl;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::RedisEvent& s)
{
	src >> s.src;
	src >> s.event;
	src >> s.data;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::RedisEvent& s)
{
	src << s.src;
	src << s.event;
	src << s.data;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::GateOnline& s)
{
	src >> s.kingdom;
	src >> s.index;
	src >> s.ip;
	src >> s.port;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::GateOnline& s)
{
	src << s.kingdom;
	src << s.index;
	src << s.ip;
	src << s.port;
	return src;
}


bool ReadFromJson( Ls::RedisEvent& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "src"){
			s.src = i.GetString();
		}
		else if (node_name == "event"){
			s.event = i.GetString();
		}
		else if (node_name == "data"){
			s.data = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::RedisEvent& s,  UJsonNode& n)
{
	n.push_back("src", s.src);
	n.push_back("event", s.event);
	n.push_back("data", s.data);
}


bool ReadFromJson( Ls::GateOnline& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "kingdom"){
			s.kingdom = i.GetInt32();
		}
		else if (node_name == "index"){
			s.index = i.GetInt32();
		}
		else if (node_name == "ip"){
			s.ip = i.GetString();
		}
		else if (node_name == "port"){
			s.port = i.GetUInt16();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::GateOnline& s,  UJsonNode& n)
{
	n.push_back("kingdom", s.kingdom);
	n.push_back("index", s.index);
	n.push_back("ip", s.ip);
	n.push_back("port", s.port);
}


