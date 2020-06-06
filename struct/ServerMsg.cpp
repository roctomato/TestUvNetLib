#include "ServerMsg.h"

std::ostream& operator<<( std::ostream& src, const LsSvr::E_Svr_Msg_Module& s)
{
	src <<"value:"<< (long)s<<" ";
	switch( s )
	{
	case LsSvr::SVR_MSG_PROXY_MODULE:
		src<<"SVR_MSG_PROXY_MODULE:转发消息模块";
		break;
	case LsSvr::SVR_MSG_LOGIC_MODULE:
		src<<"SVR_MSG_LOGIC_MODULE:服务器间逻辑模块";
		break;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const LsSvr::ProxyOneString& s)
{
	src <<"\t\tdata:"<< s.data;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const LsSvr::Svr_Logic_Msg& s)
{
	src <<"value:"<< (long)s<<" ";
	switch( s )
	{
	case LsSvr::Svr_Logic_Gate_Register:
		src<<"Svr_Logic_Gate_Register:gate向game\center注册自己的kingdom";
		break;
	case LsSvr::Svr_Logic_Role_Login:
		src<<"Svr_Logic_Role_Login:gate通知game有玩家进入游戏世界";
		break;
	case LsSvr::Svr_Logic_Role_Logout:
		src<<"Svr_Logic_Role_Logout:gate通知game有玩家离开游戏世界";
		break;
	case LsSvr::Svr_Logic_Online_Count:
		src<<"Svr_Logic_Online_Count:gate通知game游戏世界在线玩家数量";
		break;
	case LsSvr::Svr_Logic_Kick_Role:
		src<<"Svr_Logic_Kick_Role:game向gate发送踢人消息";
		break;
	case LsSvr::Svr_Logic_GameRestart:
		src<<"Svr_Logic_GameRestart:game向gate重启消息";
		break;
	case LsSvr::Svr_SWITCH_Role:
		src<<"Svr_SWITCH_Role:game向gate发送切换角色消息";
		break;
	case LsSvr::Svr_Logic_Init_Role_Mail:
		src<<"Svr_Logic_Init_Role_Mail:game初始系统邮件";
		break;
	case LsSvr::Svr_Logic_Init_Role_Mail_Response:
		src<<"Svr_Logic_Init_Role_Mail_Response:game初始系统邮件";
		break;
	case LsSvr::Svr_Logic_Save_Mail:
		src<<"Svr_Logic_Save_Mail:game保存邮件";
		break;
	case LsSvr::Svr_Logic_reCreate_role:
		src<<"Svr_Logic_reCreate_role:gate向center申请某一个账号重新生成原始玩家数据";
		break;
	case LsSvr::Svr_Logic_get_reward:
		src<<"Svr_Logic_get_reward:center向game通知玩家需要领取邮件附件里的奖励";
		break;
	case LsSvr::Svr_Logic_Exxcute_Sql:
		src<<"Svr_Logic_Exxcute_Sql:game向center执行sql";
		break;
	case LsSvr::Svr_Logic_get_many_reward:
		src<<"Svr_Logic_get_many_reward:center向game通知玩家需要领取多个邮件附件里的奖励";
		break;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const LsSvr::Svr_Proxy_Msg& s)
{
	src <<"value:"<< (long)s<<" ";
	switch( s )
	{
	case LsSvr::Svr_Proxy_Client_Game:
		src<<"Svr_Proxy_Client_Game:gate转发客户端消息到game";
		break;
	case LsSvr::Svr_Proxy_Game_Client:
		src<<"Svr_Proxy_Game_Client:game通过gate发消息到客户端";
		break;
	case LsSvr::Svr_Proxy_Group_Msg:
		src<<"Svr_Proxy_Group_Msg:群发消息";
		break;
	case LsSvr::Svr_Proxy_Client_Center:
		src<<"Svr_Proxy_Client_Center:gate转发客户端消息到center";
		break;
	case LsSvr::Svr_Proxy_Center_Client:
		src<<"Svr_Proxy_Center_Client:center";
		break;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const LsSvr::SetRoleID& s)
{
	src<<"SetRoleID "<<"size:" << s.size()<<std::endl;
	LsSvr::SetRoleID::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const LsSvr::Proxy_Many_Client& s)
{
	src <<"\t\tsetRole:"<< s.setRole;
	src<<std::endl;	src <<"\t\texcept:"<< s.except;
	src<<std::endl;	src <<"\t\tdata:"<< s.data;
	src<<std::endl;
	return src;
}


CInArchive& operator>>(CInArchive& src, LsSvr::ProxyOneString& s)
{
	src >> s.data;
	return src;
}
COutArchive& operator<<( COutArchive& src, const LsSvr::ProxyOneString& s)
{
	src << s.data;
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
COutArchive& operator<<( COutArchive& src, const LsSvr::Proxy_Many_Client& s)
{
	src << s.setRole;
	src << s.except;
	src << s.data;
	return src;
}


bool ReadFromJson( LsSvr::ProxyOneString& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "data"){
			s.data = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const LsSvr::ProxyOneString& s,  UJsonNode& n)
{
	n.push_back("data", s.data);
}


bool ReadFromJson( LsSvr::SetRoleID& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		LsUInt32 value;
		value = i.GetUInt32();
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const LsSvr::SetRoleID& s,  UJsonNode& n)
{
	LsSvr::SetRoleID::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		n.push_back(*it);
	}
}

bool ReadFromJson( LsSvr::Proxy_Many_Client& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "setRole"){
			ReadFromJson( s.setRole, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "except"){
			s.except = i.GetInt32();
		}
		else if (node_name == "data"){
			s.data = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const LsSvr::Proxy_Many_Client& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.setRole, jnode0 );
	n.push_back("setRole", jnode0 );
	n.push_back("except", s.except);
	n.push_back("data", s.data);
}


