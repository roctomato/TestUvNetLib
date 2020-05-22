#include "ReqPlayerInfo.hpp"
#include "zby_debug.h"
#include "CNewAccountMgr.h"

ReqPlayerInfo::~ReqPlayerInfo()
{
}

ReqPlayerInfo::ReqPlayerInfo(uint32_t netId, lol::SSLogin& ssLogin)
{
    lol::SSLogin* pSSLogin = &ssLogin;
    CLoginParam& oLoginParam = this->m_param;

    oLoginParam.m_strAccount = pSSLogin->account();
    transform(
        oLoginParam.m_strAccount.begin(), oLoginParam.m_strAccount.end(), oLoginParam.m_strAccount.begin(), ::toupper);
    oLoginParam.m_gsId = pSSLogin->gs_id();
    oLoginParam.m_clientNetId = pSSLogin->netid();
    oLoginParam.m_gateNetId = netId;
    oLoginParam.m_gateLine = pSSLogin->gateline();
    oLoginParam.m_channel = pSSLogin->channel();
    oLoginParam.m_machineInfo.Clear();
    oLoginParam.m_machineInfo.MergeFrom(pSSLogin->machineinfo());
}

void ReqPlayerInfo::Execute(int idx, ThreadContext* param)
{
    do {
        DbThrdContext* pCtx = dynamic_cast<DbThrdContext*>(param);
        if(NULL == pCtx) {
            DB_ERR("dynamic_cast err");
            break;
        }
    
        uint64_t playerid = this->QueryPlayerID(pCtx->_conn); 
        if ( playerid > 0 ){
            m_param.m_playerId = playerid;
            break;
        }
        playerid = this->CreateNewPlayerID( pCtx->_conn);
        if ( playerid == 0 ){
            break;
        }
        m_param.m_playerId = playerid;
    } while(false);
}

void ReqPlayerInfo::HandleResult(bool excuteOk)
{
    if ( !excuteOk){
        DB_ERR("exxcute err");
        return;
    }
    
    uint32_t gsId =  m_param.m_gsId ;

    lol::Db2GameLogin oDb2GameLogin;
	oDb2GameLogin.set_netid(m_param.m_clientNetId);
	oDb2GameLogin.set_gateline(m_param.m_gateLine);
	oDb2GameLogin.set_reconnect(m_param.m_reConnect);
	oDb2GameLogin.set_channel(m_param.m_channel) ;
	lol::MMachineInfo* pMMachineInfo = oDb2GameLogin.mutable_machineinfo();
	pMMachineInfo->MergeFrom(m_param.m_machineInfo);
	lol::SaveRoleData* pRoleData = oDb2GameLogin.mutable_roledata();
    pRoleData->set_account( m_param.m_strAccount);
    pRoleData->set_playerid( m_param.m_playerId );
    pRoleData->set_gsid(m_param.m_gsId);
    pRoleData->set_createtime( m_createTime);

	uint32_t nameIndex =  (uint32_t)m_param.m_playerId  + 6900;
	
	char szRoleName[128] = "";

	snprintf(szRoleName, 128, "#Capt%d", nameIndex);
    pRoleData->set_rolename(szRoleName);

    CNewAccountMgr::Instance()->HandleDbReturn(oDb2GameLogin, gsId);
}

uint64_t ReqPlayerInfo::QueryPlayerID(MYSQL* mysql)
{
    uint64_t playerid = 0;
    int ret = -1;
    MYSQL_RES* this_res = NULL;
    do{
        char sql[256];
		int sqlLen = sprintf(sql, "select playerid, account,createtime,gsid from tblaccount where account='%s' and gsid = %d;",
            m_param.m_strAccount.c_str(), m_param.m_gsId );
        ret = mysql_query(mysql, sql);
		if (ret )
		{
            ret = mysql_errno(mysql);
            DB_ERR("query err %d:%s", ret,  mysql_error(mysql));
            break;
        }
        
        this_res = mysql_store_result(mysql);
        if ( 0 == this_res->row_count){
            DB_ERR("%s %d no record ",  m_param.m_strAccount.c_str(), m_param.m_gsId );
            break;
        }
       
		MYSQL_ROW pRow = NULL;
		unsigned long* pLen = NULL;
		pRow = mysql_fetch_row(this_res);
		pLen = mysql_fetch_lengths(this_res);
			 
		if (NULL == pRow[0])
		{
			DB_ERR("%s %d row err ",  m_param.m_strAccount.c_str(), m_param.m_gsId );
            break;
		}
        playerid = atoll(pRow[0]);
        m_createTime = atol(pRow[2]);
        DB_INFO("%s %d has old player id %u ",  m_param.m_strAccount.c_str(), m_param.m_gsId, playerid );
    }while(false);
    
    if (this_res){
        mysql_free_result(this_res);
    }
    return playerid;
}

uint64_t ReqPlayerInfo::CreateNewPlayerID(MYSQL* mysql)
{
    uint64_t playerid = 0;
    int ret = 0;
    do{
        m_createTime = time(NULL);
        char sql[256];
        const char* fmt="insert into tblaccount (account,createtime,gsid) values( '%s',%d,%d);";
        sprintf( sql, fmt,m_param.m_strAccount.c_str(), m_createTime, m_param.m_gsId );
        ret = mysql_query(mysql, sql);
		if (ret )
		{
            ret = mysql_errno(mysql);
            DB_ERR("query err %d:%s", ret, mysql_error(mysql));
            break;
        }
        
        playerid = mysql_insert_id(mysql);
        DB_INFO("%s %d new player id %u ",  m_param.m_strAccount.c_str(), m_param.m_gsId, playerid );
    }while(false);
      
    return playerid;
}
/////////////////////////////////////////
CLoginParam::CLoginParam():
m_playerId(0), m_gsId(0), m_reConnect(0), m_clientNetId(0), m_gateNetId(0), m_gateLine(0)
{
}
