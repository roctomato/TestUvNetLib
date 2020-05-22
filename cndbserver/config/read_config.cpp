#include "read_config.h"

std::ostream& operator<<( std::ostream& src, const mb::DbConfig& s)
{
	src <<"\t\thost:"<< s.host;
	src<<std::endl;	src <<"\t\tport:"<< s.port;
	src<<std::endl;	src <<"\t\tuser:"<< s.user;
	src<<std::endl;	src <<"\t\tpasswd:"<< s.passwd;
	src<<std::endl;	src <<"\t\tdb:"<< s.db;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const mb::IpConfig& s)
{
	src <<"\t\tip:"<< s.ip;
	src<<std::endl;	src <<"\t\tport:"<< s.port;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const mb::config& s)
{
	src <<"\t\tlocal:"<< s.local;
	src<<std::endl;	src <<"\t\tdbcfg:"<< s.dbcfg;
	src<<std::endl;	src <<"\t\tdbthread_count:"<< s.dbthread_count;
	src<<std::endl;
	return src;
}


bool ReadFromJson( mb::DbConfig& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "host"){
			s.host = i.GetString();
		}
		else if (node_name == "port"){
			s.port = i.GetUInt16();
		}
		else if (node_name == "user"){
			s.user = i.GetString();
		}
		else if (node_name == "passwd"){
			s.passwd = i.GetString();
		}
		else if (node_name == "db"){
			s.db = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const mb::DbConfig& s,  UJsonNode& n)
{
	n.push_back("host", s.host);
	n.push_back("port", s.port);
	n.push_back("user", s.user);
	n.push_back("passwd", s.passwd);
	n.push_back("db", s.db);
}


bool ReadFromJson( mb::IpConfig& s,  const UJsonNode& n )
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
void WriteToJson( const mb::IpConfig& s,  UJsonNode& n)
{
	n.push_back("ip", s.ip);
	n.push_back("port", s.port);
}


bool ReadFromJson( mb::config& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "local"){
			ReadFromJson( s.local, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "dbcfg"){
			ReadFromJson( s.dbcfg, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "dbthread_count"){
			s.dbthread_count = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const mb::config& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.local, jnode0 );
	n.push_back("local", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.dbcfg, jnode1 );
	n.push_back("dbcfg", jnode1 );
	n.push_back("dbthread_count", s.dbthread_count);
}


