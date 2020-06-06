#include "ServerMsg.h"

CInArchive& operator>>(CInArchive& src, LsSvr::ProxyOneString& s)
{
	src >> s.data;
	return src;
}
LoopBufEx& operator<<( LoopBufEx& src, const LsSvr::ProxyOneString& s)
{
	src << s.data;
	return src;
}


COutArchive& operator<<( COutArchive& src, const LsSvr::ProxyOneString& s)
{
	src << s.data;
	return src;
}


LoopBufEx& operator<<( LoopBufEx& src, const LsSvr::SetRoleID& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	LsSvr::SetRoleID::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


COutArchive& operator<<( COutArchive& src, const LsSvr::SetRoleID& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	LsSvr::SetRoleID::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, LsSvr::SetRoleID& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		LsUInt32 value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, LsSvr::Proxy_Many_Client& s)
{
	src >> s.setRole;
	src >> s.except;
	src >> s.data;
	return src;
}
LoopBufEx& operator<<( LoopBufEx& src, const LsSvr::Proxy_Many_Client& s)
{
	src << s.setRole;
	src << s.except;
	src << s.data;
	return src;
}


COutArchive& operator<<( COutArchive& src, const LsSvr::Proxy_Many_Client& s)
{
	src << s.setRole;
	src << s.except;
	src << s.data;
	return src;
}


