#include "LsLogicDb.h"

std::ostream& operator<<( std::ostream& src, const Ls::VecUInt32& s)
{
	src<<"VecUInt32 "<<"size:" << s.size()<<std::endl;
	Ls::VecUInt32::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SetUInt16& s)
{
	src<<"SetUInt16 "<<"size:" << s.size()<<std::endl;
	Ls::SetUInt16::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecString& s)
{
	src<<"VecString "<<"size:" << s.size()<<std::endl;
	Ls::VecString::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::LoginTesting& s)
{
	src <<"\t\tresult:"<< s.result;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::role_base_info& s)
{
	src <<"\t\troleid:"<< s.roleid;
	src<<std::endl;	src <<"\t\taccout:"<< s.accout;
	src<<std::endl;	src <<"\t\tname:"<< s.name;
	src<<std::endl;	src <<"\t\tkingdom:"<< s.kingdom;
	src<<std::endl;	src <<"\t\ticon_id:"<< s.icon_id;
	src<<std::endl;	src <<"\t\topen_id:"<< s.open_id;
	src<<std::endl;	src <<"\t\tplatform:"<< s.platform;
	src<<std::endl;	src <<"\t\tsession_key:"<< s.session_key;
	src<<std::endl;	src <<"\t\tnation:"<< s.nation;
	src<<std::endl;	src <<"\t\tallrole:"<< s.allrole;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::LilithClientInfo& s)
{
	src <<"\t\tversion:"<< s.version;
	src<<std::endl;	src <<"\t\tgame_id:"<< s.game_id;
	src<<std::endl;	src <<"\t\tpack_name:"<< s.pack_name;
	src<<std::endl;	src <<"\t\tchannel_id:"<< s.channel_id;
	src<<std::endl;	src <<"\t\tidfa:"<< s.idfa;
	src<<std::endl;	src <<"\t\tandroid_id:"<< s.android_id;
	src<<std::endl;	src <<"\t\tgoogle_aid:"<< s.google_aid;
	src<<std::endl;	src <<"\t\tos_type:"<< s.os_type;
	src<<std::endl;	src <<"\t\tos_version:"<< s.os_version;
	src<<std::endl;	src <<"\t\tapp_version:"<< s.app_version;
	src<<std::endl;	src <<"\t\tdevice_mode:"<< s.device_mode;
	src<<std::endl;	src <<"\t\topen_id:"<< s.open_id;
	src<<std::endl;	src <<"\t\tapp_id:"<< s.app_id;
	src<<std::endl;	src <<"\t\tname:"<< s.name;
	src<<std::endl;	src <<"\t\tplatform:"<< s.platform;
	src<<std::endl;	src <<"\t\tbindFlag:"<< s.bindFlag;
	src<<std::endl;	src <<"\t\tlanguage:"<< s.language;
	src<<std::endl;	src <<"\t\tuid:"<< s.uid;
	src<<std::endl;	src <<"\t\tsdkv:"<< s.sdkv;
	src<<std::endl;	src <<"\t\tcarrier:"<< s.carrier;
	src<<std::endl;	src <<"\t\tmac_wifi:"<< s.mac_wifi;
	src<<std::endl;	src <<"\t\tmac_3g:"<< s.mac_3g;
	src<<std::endl;	src <<"\t\tnet_status:"<< s.net_status;
	src<<std::endl;	src <<"\t\tua:"<< s.ua;
	src<<std::endl;	src <<"\t\tcid:"<< s.cid;
	src<<std::endl;	src <<"\t\tdeviceid:"<< s.deviceid;
	src<<std::endl;	src <<"\t\textend:"<< s.extend;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::role_asset_info& s)
{
	src <<"\t\tgold:"<< s.gold;
	src<<std::endl;	src <<"\t\tvip_level:"<< s.vip_level;
	src<<std::endl;	src <<"\t\tvip_exp:"<< s.vip_exp;
	src<<std::endl;	src <<"\t\tvip_time_remaining:"<< s.vip_time_remaining;
	src<<std::endl;	src <<"\t\tprivilege_level:"<< s.privilege_level;
	src<<std::endl;	src <<"\t\tprivilege_exp:"<< s.privilege_exp;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::role_strength_info& s)
{
	src <<"\t\tplayer_power:"<< s.player_power;
	src<<std::endl;	src <<"\t\tarmy_power:"<< s.army_power;
	src<<std::endl;	src <<"\t\tbuild_power:"<< s.build_power;
	src<<std::endl;	src <<"\t\ttech_power:"<< s.tech_power;
	src<<std::endl;	src <<"\t\thero_power:"<< s.hero_power;
	src<<std::endl;	src <<"\t\tplayer_level:"<< s.player_level;
	src<<std::endl;	src <<"\t\tmagic_power:"<< s.magic_power;
	src<<std::endl;	src <<"\t\tequip_power:"<< s.equip_power;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::role_hero_job_info& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\tlock:"<< s.lock;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSRoleHeroJobInfo& s)
{
	src<<"VecSRoleHeroJobInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSRoleHeroJobInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::role_all_info& s)
{
	src <<"\t\troleid:"<< s.roleid;
	src<<std::endl;	src <<"\t\taccout:"<< s.accout;
	src<<std::endl;	src <<"\t\tname:"<< s.name;
	src<<std::endl;	src <<"\t\ticon_id:"<< s.icon_id;
	src<<std::endl;	src <<"\t\tkingdom:"<< s.kingdom;
	src<<std::endl;	src <<"\t\tkingdom_title:"<< s.kingdom_title;
	src<<std::endl;	src <<"\t\tsignature:"<< s.signature;
	src<<std::endl;	src <<"\t\tnewName:"<< s.newName;
	src<<std::endl;	src <<"\t\trole_type:"<< s.role_type;
	src<<std::endl;	src <<"\t\tversion:"<< s.version;
	src<<std::endl;	src <<"\t\topen_id:"<< s.open_id;
	src<<std::endl;	src <<"\t\tnation:"<< s.nation;
	src<<std::endl;	src <<"\t\ticon_endtime:"<< s.icon_endtime;
	src<<std::endl;	src <<"\t\tlog_upload:"<< s.log_upload;
	src<<std::endl;	src <<"\t\tlog_level:"<< s.log_level;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::role_game_info& s)
{
	src <<"\t\tnewbieTaskStatus:"<< s.newbieTaskStatus;
	src<<std::endl;	src <<"\t\tstoryStatus:"<< s.storyStatus;
	src<<std::endl;	src <<"\t\tcur_city:"<< s.cur_city;
	src<<std::endl;	src <<"\t\tinterior:"<< s.interior;
	src<<std::endl;	src <<"\t\tmilitary:"<< s.military;
	src<<std::endl;	src <<"\t\tfirst_list:"<< s.first_list;
	src<<std::endl;	src <<"\t\tcreate_time:"<< s.create_time;
	src<<std::endl;	src <<"\t\tlast_login_time:"<< s.last_login_time;
	src<<std::endl;	src <<"\t\tlast_logout_time:"<< s.last_logout_time;
	src<<std::endl;	src <<"\t\tfirst_login_time:"<< s.first_login_time;
	src<<std::endl;	src <<"\t\tcontinue_login_days:"<< s.continue_login_days;
	src<<std::endl;	src <<"\t\tsysMailIndex:"<< s.sysMailIndex;
	src<<std::endl;	src <<"\t\tnewHero:"<< s.newHero;
	src<<std::endl;	src <<"\t\taward_list:"<< s.award_list;
	src<<std::endl;	src <<"\t\ttrigger_list:"<< s.trigger_list;
	src<<std::endl;	src <<"\t\tclient_action:"<< s.client_action;
	src<<std::endl;	src <<"\t\tsign_index:"<< s.sign_index;
	src<<std::endl;	src <<"\t\tsign_today:"<< s.sign_today;
	src<<std::endl;	src <<"\t\tcsign_index:"<< s.csign_index;
	src<<std::endl;	src <<"\t\tcsign_num:"<< s.csign_num;
	src<<std::endl;	src <<"\t\tleft_find:"<< s.left_find;
	src<<std::endl;	src <<"\t\tlast_find_time:"<< s.last_find_time;
	src<<std::endl;	src <<"\t\ttribe_attack_times:"<< s.tribe_attack_times;
	src<<std::endl;	src <<"\t\tforbit_chat:"<< s.forbit_chat;
	src<<std::endl;	src <<"\t\tfirst_pay_list:"<< s.first_pay_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::user_account& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\tname:"<< s.name;
	src<<std::endl;	src <<"\t\tpassword:"<< s.password;
	src<<std::endl;	src <<"\t\tmobile_id:"<< s.mobile_id;
	src<<std::endl;	src <<"\t\tlogin:"<< s.login;
	src<<std::endl;	src <<"\t\tplatform:"<< s.platform;
	src<<std::endl;	src <<"\t\treg_ip:"<< s.reg_ip;
	src<<std::endl;	src <<"\t\treg_time:"<< s.reg_time;
	src<<std::endl;	src <<"\t\tlast_login_ip:"<< s.last_login_ip;
	src<<std::endl;	src <<"\t\tlast_login_time:"<< s.last_login_time;
	src<<std::endl;	src <<"\t\tstatus:"<< s.status;
	src<<std::endl;	src <<"\t\trole_id:"<< s.role_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCityMagicBuffInfo& s)
{
	src <<"\t\tmagic_buff_id:"<< s.magic_buff_id;
	src<<std::endl;	src <<"\t\tmagic_id:"<< s.magic_id;
	src<<std::endl;	src <<"\t\tmagic_buff_effect:"<< s.magic_buff_effect;
	src<<std::endl;	src <<"\t\tmagic_start_time:"<< s.magic_start_time;
	src<<std::endl;	src <<"\t\tmagic_end_time:"<< s.magic_end_time;
	src<<std::endl;	src <<"\t\tfrom_castle_id:"<< s.from_castle_id;
	src<<std::endl;	src <<"\t\tmagic_from_x:"<< s.magic_from_x;
	src<<std::endl;	src <<"\t\tmagic_from_y:"<< s.magic_from_y;
	src<<std::endl;	src <<"\t\ttarget_castle_id:"<< s.target_castle_id;
	src<<std::endl;	src <<"\t\tmagic_targert_x:"<< s.magic_targert_x;
	src<<std::endl;	src <<"\t\tmagic_targert_y:"<< s.magic_targert_y;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SPerpareCardInfo& s)
{
	src <<"\t\tcard_id:"<< s.card_id;
	src<<std::endl;	src <<"\t\tcard_state:"<< s.card_state;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSPerpareCardInfo& s)
{
	src<<"VecSPerpareCardInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSPerpareCardInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SResourceDetailInfo& s)
{
	src <<"\t\tres_current_value:"<< s.res_current_value;
	src<<std::endl;	src <<"\t\tres_hour_output:"<< s.res_hour_output;
	src<<std::endl;	src <<"\t\tres_hour_output_total:"<< s.res_hour_output_total;
	src<<std::endl;	src <<"\t\tres_second_output:"<< s.res_second_output;
	src<<std::endl;	src <<"\t\tres_store_max:"<< s.res_store_max;
	src<<std::endl;	src <<"\t\tres_store_max_total:"<< s.res_store_max_total;
	src<<std::endl;	src <<"\t\tres_store_protect:"<< s.res_store_protect;
	src<<std::endl;	src <<"\t\tres_store_protect_total:"<< s.res_store_protect_total;
	src<<std::endl;	src <<"\t\tlastUpdatetime:"<< s.lastUpdatetime;
	src<<std::endl;	src <<"\t\tres_state:"<< s.res_state;
	src<<std::endl;	src <<"\t\tattr_type:"<< s.attr_type;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::role_hero_info& s)
{
	src <<"\t\thero_power:"<< s.hero_power;
	src<<std::endl;	src <<"\t\thero_hero_job_vec:"<< s.hero_hero_job_vec;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SFoodIncreaseInfo& s)
{
	src <<"\t\tbase_res:"<< s.base_res;
	src<<std::endl;	src <<"\t\tkeep_cost:"<< s.keep_cost;
	src<<std::endl;	src <<"\t\tkeep_cost_total:"<< s.keep_cost_total;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCityMagicInfo& s)
{
	src <<"\t\tpre_card_list:"<< s.pre_card_list;
	src<<std::endl;	src <<"\t\tbuff_info:"<< s.buff_info;
	src<<std::endl;	src <<"\t\tres_mana:"<< s.res_mana;
	src<<std::endl;	src <<"\t\tmagic_level:"<< s.magic_level;
	src<<std::endl;	src <<"\t\tpre_end_time:"<< s.pre_end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SPopulationIncreaseInfo& s)
{
	src <<"\t\tbase_res:"<< s.base_res;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMapObjBase& s)
{
	src <<"\t\tmapObjType:"<< s.mapObjType;
	src<<std::endl;	src <<"\t\tgridX:"<< s.gridX;
	src<<std::endl;	src <<"\t\tgridY:"<< s.gridY;
	src<<std::endl;	src <<"\t\tkingdom:"<< s.kingdom;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCityBuildingInfo& s)
{
	src <<"\t\ttile_id:"<< s.tile_id;
	src<<std::endl;	src <<"\t\ttype_id:"<< s.type_id;
	src<<std::endl;	src <<"\t\tbuilding_id:"<< s.building_id;
	src<<std::endl;	src <<"\t\tbuilding_state:"<< s.building_state;
	src<<std::endl;	src <<"\t\tfunction_id:"<< s.function_id;
	src<<std::endl;	src <<"\t\tleague_help:"<< s.league_help;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSCityBuildingInfo& s)
{
	src<<"VecSCityBuildingInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSCityBuildingInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::CityBuildInfo& s)
{
	src <<"\t\top_type:"<< s.op_type;
	src<<std::endl;	src <<"\t\tbuild_tile:"<< s.build_tile;
	src<<std::endl;	src <<"\t\tstartTime:"<< s.startTime;
	src<<std::endl;	src <<"\t\tendTime:"<< s.endTime;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecCityBuildInfo& s)
{
	src<<"VecCityBuildInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecCityBuildInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::DbCityBuildInfo& s)
{
	src <<"\t\tvecBuilding:"<< s.vecBuilding;
	src<<std::endl;	src <<"\t\tbuildQueue:"<< s.buildQueue;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCityLockInfo& s)
{
	src <<"\t\ttile_id:"<< s.tile_id;
	src<<std::endl;	src <<"\t\ttile_state:"<< s.tile_state;
	src<<std::endl;	src <<"\t\ttile_index:"<< s.tile_index;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSCityLockInfo& s)
{
	src<<"VecSCityLockInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSCityLockInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::CityUnlockInfo& s)
{
	src <<"\t\top_type:"<< s.op_type;
	src<<std::endl;	src <<"\t\tbuild_tile:"<< s.build_tile;
	src<<std::endl;	src <<"\t\ttile_index:"<< s.tile_index;
	src<<std::endl;	src <<"\t\tstartTime:"<< s.startTime;
	src<<std::endl;	src <<"\t\tendTime:"<< s.endTime;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::DbCityLockInfo& s)
{
	src <<"\t\tvecLock:"<< s.vecLock;
	src<<std::endl;	src <<"\t\tlockQueue:"<< s.lockQueue;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCityBuildTile& s)
{
	src <<"\t\tbuilding:"<< s.building;
	src<<std::endl;	src <<"\t\ttile:"<< s.tile;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SColorInfo& s)
{
	src <<"\t\tcolor_type:"<< s.color_type;
	src<<std::endl;	src <<"\t\tcolor_r:"<< s.color_r;
	src<<std::endl;	src <<"\t\tcolor_g:"<< s.color_g;
	src<<std::endl;	src <<"\t\tcolor_b:"<< s.color_b;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SUnionFlagInfo& s)
{
	src <<"\t\tflag_form:"<< s.flag_form;
	src<<std::endl;	src <<"\t\tflag_pattern:"<< s.flag_pattern;
	src<<std::endl;	src <<"\t\tflag_bf_color1:"<< s.flag_bf_color1;
	src<<std::endl;	src <<"\t\tflag_bf_color2:"<< s.flag_bf_color2;
	src<<std::endl;	src <<"\t\tflag_icon:"<< s.flag_icon;
	src<<std::endl;	src <<"\t\tflag_icon_color:"<< s.flag_icon_color;
	src<<std::endl;	src <<"\t\tflag_effect:"<< s.flag_effect;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SApplyJoinInfo& s)
{
	src <<"\t\tapply_roleid:"<< s.apply_roleid;
	src<<std::endl;	src <<"\t\tapply_time:"<< s.apply_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SUnionHelpInfo& s)
{
	src <<"\t\thelp_id:"<< s.help_id;
	src<<std::endl;	src <<"\t\tcity_id:"<< s.city_id;
	src<<std::endl;	src <<"\t\thelp_type:"<< s.help_type;
	src<<std::endl;	src <<"\t\tpox_index:"<< s.pox_index;
	src<<std::endl;	src <<"\t\tconfig_id:"<< s.config_id;
	src<<std::endl;	src <<"\t\tplayer_id:"<< s.player_id;
	src<<std::endl;	src <<"\t\tplayer_name:"<< s.player_name;
	src<<std::endl;	src <<"\t\trank_level:"<< s.rank_level;
	src<<std::endl;	src <<"\t\thelp_times:"<< s.help_times;
	src<<std::endl;	src <<"\t\thelp_times_max:"<< s.help_times_max;
	src<<std::endl;	src <<"\t\thero_name:"<< s.hero_name;
	src<<std::endl;	src <<"\t\thero_level:"<< s.hero_level;
	src<<std::endl;	src <<"\t\thero_face:"<< s.hero_face;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SUnionRankInfo& s)
{
	src <<"\t\trank_level:"<< s.rank_level;
	src<<std::endl;	src <<"\t\trank_name:"<< s.rank_name;
	src<<std::endl;	src <<"\t\tis_default:"<< s.is_default;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSUnionRankList& s)
{
	src<<"VecSUnionRankList "<<"size:" << s.size()<<std::endl;
	Ls::VecSUnionRankList::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::union_data& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\tkingdom:"<< s.kingdom;
	src<<std::endl;	src <<"\t\tunion_name:"<< s.union_name;
	src<<std::endl;	src <<"\t\tunion_tag:"<< s.union_tag;
	src<<std::endl;	src <<"\t\tunion_title:"<< s.union_title;
	src<<std::endl;	src <<"\t\tunion_des:"<< s.union_des;
	src<<std::endl;	src <<"\t\tunion_create_time:"<< s.union_create_time;
	src<<std::endl;	src <<"\t\tunion_level:"<< s.union_level;
	src<<std::endl;	src <<"\t\tauto_accept:"<< s.auto_accept;
	src<<std::endl;	src <<"\t\tunion_power:"<< s.union_power;
	src<<std::endl;	src <<"\t\tunion_leader:"<< s.union_leader;
	src<<std::endl;	src <<"\t\tlanguage:"<< s.language;
	src<<std::endl;	src <<"\t\tunion_flag_info:"<< s.union_flag_info;
	src<<std::endl;	src <<"\t\tunion_army_color:"<< s.union_army_color;
	src<<std::endl;	src <<"\t\tunion_rank_list:"<< s.union_rank_list;
	src<<std::endl;	src <<"\t\tcity_power:"<< s.city_power;
	src<<std::endl;	src <<"\t\tarmy_power:"<< s.army_power;
	src<<std::endl;	src <<"\t\tarmy_count:"<< s.army_count;
	src<<std::endl;	src <<"\t\tdefence_time:"<< s.defence_time;
	src<<std::endl;	src <<"\t\tdefence_result:"<< s.defence_result;
	src<<std::endl;	src <<"\t\tjoin_level:"<< s.join_level;
	src<<std::endl;	src <<"\t\tjoin_power:"<< s.join_power;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::union_build& s)
{
	src <<"\t\tlb_type:"<< s.lb_type;
	src<<std::endl;	src <<"\t\tlb_level:"<< s.lb_level;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecUnion_build& s)
{
	src<<"VecUnion_build "<<"size:" << s.size()<<std::endl;
	Ls::VecUnion_build::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SUnion_Castle& s)
{
	src <<"\t\tuc_state:"<< s.uc_state;
	src<<std::endl;	src <<"\t\tgridX:"<< s.gridX;
	src<<std::endl;	src <<"\t\tgridY:"<< s.gridY;
	src<<std::endl;	src <<"\t\tvec_build:"<< s.vec_build;
	src<<std::endl;	src <<"\t\texile_time:"<< s.exile_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SUnion_Assert& s)
{
	src <<"\t\tu_money:"<< s.u_money;
	src<<std::endl;	src <<"\t\tindenture:"<< s.indenture;
	src<<std::endl;	src <<"\t\tmanuscript:"<< s.manuscript;
	src<<std::endl;	src <<"\t\tgift_level:"<< s.gift_level;
	src<<std::endl;	src <<"\t\tgift_point:"<< s.gift_point;
	src<<std::endl;	src <<"\t\tzone_list:"<< s.zone_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDonationData& s)
{
	src <<"\t\tdonate_food:"<< s.donate_food;
	src<<std::endl;	src <<"\t\tdonate_wood:"<< s.donate_wood;
	src<<std::endl;	src <<"\t\tdonate_stone:"<< s.donate_stone;
	src<<std::endl;	src <<"\t\tdonate_iron:"<< s.donate_iron;
	src<<std::endl;	src <<"\t\tdonate_gold:"<< s.donate_gold;
	src<<std::endl;	src <<"\t\tfood_pice:"<< s.food_pice;
	src<<std::endl;	src <<"\t\twood_pice:"<< s.wood_pice;
	src<<std::endl;	src <<"\t\tstone_pice:"<< s.stone_pice;
	src<<std::endl;	src <<"\t\tiron_pice:"<< s.iron_pice;
	src<<std::endl;	src <<"\t\tfood_pice_trend:"<< s.food_pice_trend;
	src<<std::endl;	src <<"\t\twood_pice_trend:"<< s.wood_pice_trend;
	src<<std::endl;	src <<"\t\tstone_pice_trend:"<< s.stone_pice_trend;
	src<<std::endl;	src <<"\t\tiron_pice_trend:"<< s.iron_pice_trend;
	src<<std::endl;	src <<"\t\ttrend_count:"<< s.trend_count;
	src<<std::endl;	src <<"\t\tfresh_time:"<< s.fresh_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDonateResource& s)
{
	src <<"\t\tdonate_food:"<< s.donate_food;
	src<<std::endl;	src <<"\t\tdonate_wood:"<< s.donate_wood;
	src<<std::endl;	src <<"\t\tdonate_stone:"<< s.donate_stone;
	src<<std::endl;	src <<"\t\tdonate_iron:"<< s.donate_iron;
	src<<std::endl;	src <<"\t\tdonate_silver:"<< s.donate_silver;
	src<<std::endl;	src <<"\t\tdonate_indenture:"<< s.donate_indenture;
	src<<std::endl;	src <<"\t\tdonate_manuscript:"<< s.donate_manuscript;
	src<<std::endl;	src <<"\t\tdonate_spice:"<< s.donate_spice;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDailyDonation& s)
{
	src <<"\t\tunion_money:"<< s.union_money;
	src<<std::endl;	src <<"\t\tunion_silver:"<< s.union_silver;
	src<<std::endl;	src <<"\t\tunion_indenture:"<< s.union_indenture;
	src<<std::endl;	src <<"\t\tunion_manuscript:"<< s.union_manuscript;
	src<<std::endl;	src <<"\t\tunion_spice:"<< s.union_spice;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SUnionDonationInfo& s)
{
	src <<"\t\tdaily_donate:"<< s.daily_donate;
	src<<std::endl;	src <<"\t\tout_info:"<< s.out_info;
	src<<std::endl;	src <<"\t\tprice_res:"<< s.price_res;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SUnionMemberInfo& s)
{
	src <<"\t\tunion_id:"<< s.union_id;
	src<<std::endl;	src <<"\t\tmember_id:"<< s.member_id;
	src<<std::endl;	src <<"\t\trank_level:"<< s.rank_level;
	src<<std::endl;	src <<"\t\tunion_exploit:"<< s.union_exploit;
	src<<std::endl;	src <<"\t\tunion_contribute:"<< s.union_contribute;
	src<<std::endl;	src <<"\t\tday_contribute:"<< s.day_contribute;
	src<<std::endl;	src <<"\t\tweek_contribute:"<< s.week_contribute;
	src<<std::endl;	src <<"\t\tweek_max_con:"<< s.week_max_con;
	src<<std::endl;	src <<"\t\thelp_con:"<< s.help_con;
	src<<std::endl;	src <<"\t\tday_time_help:"<< s.day_time_help;
	src<<std::endl;	src <<"\t\tday_card_help:"<< s.day_card_help;
	src<<std::endl;	src <<"\t\ttask_con:"<< s.task_con;
	src<<std::endl;	src <<"\t\titem_con:"<< s.item_con;
	src<<std::endl;	src <<"\t\tgold_con:"<< s.gold_con;
	src<<std::endl;	src <<"\t\tres_con:"<< s.res_con;
	src<<std::endl;	src <<"\t\tdonate_gold:"<< s.donate_gold;
	src<<std::endl;	src <<"\t\tdonate_res:"<< s.donate_res;
	src<<std::endl;	src <<"\t\tfirst_join:"<< s.first_join;
	src<<std::endl;	src <<"\t\tinvited_list:"<< s.invited_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLeagueInfo& s)
{
	src <<"\t\tleague_info:"<< s.league_info;
	src<<std::endl;	src <<"\t\tmember_list:"<< s.member_list;
	src<<std::endl;	src <<"\t\tblock_list:"<< s.block_list;
	src<<std::endl;	src <<"\t\tinvit_list:"<< s.invit_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SUnionTech& s)
{
	src <<"\t\ttech_id:"<< s.tech_id;
	src<<std::endl;	src <<"\t\ttype:"<< s.type;
	src<<std::endl;	src <<"\t\tlevel:"<< s.level;
	src<<std::endl;	src <<"\t\ttech_point:"<< s.tech_point;
	src<<std::endl;	src <<"\t\ttech_status:"<< s.tech_status;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSUnionTech& s)
{
	src<<"VecSUnionTech "<<"size:" << s.size()<<std::endl;
	Ls::VecSUnionTech::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SSystemTech& s)
{
	src <<"\t\ttech_id:"<< s.tech_id;
	src<<std::endl;	src <<"\t\treward_id:"<< s.reward_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSSystemTech& s)
{
	src<<"VecSSystemTech "<<"size:" << s.size()<<std::endl;
	Ls::VecSSystemTech::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SUnionTechInfo& s)
{
	src <<"\t\ttech_list:"<< s.tech_list;
	src<<std::endl;	src <<"\t\tsys_tech:"<< s.sys_tech;
	src<<std::endl;	src <<"\t\tdonate_tech:"<< s.donate_tech;
	src<<std::endl;	src <<"\t\ttarget_tech:"<< s.target_tech;
	src<<std::endl;	src <<"\t\tfresh_num:"<< s.fresh_num;
	src<<std::endl;	src <<"\t\tset_num:"<< s.set_num;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SArmyInfo& s)
{
	src <<"\t\tarmys_id:"<< s.armys_id;
	src<<std::endl;	src <<"\t\tarmys_quantity:"<< s.armys_quantity;
	src<<std::endl;	src <<"\t\tnormal:"<< s.normal;
	src<<std::endl;	src <<"\t\tout:"<< s.out;
	src<<std::endl;	src <<"\t\thurt:"<< s.hurt;
	src<<std::endl;	src <<"\t\ttreat:"<< s.treat;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSArmyInfo& s)
{
	src<<"VecSArmyInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSArmyInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SArmyBulid& s)
{
	src <<"\t\tarmys_id:"<< s.armys_id;
	src<<std::endl;	src <<"\t\tarmys_quantity:"<< s.armys_quantity;
	src<<std::endl;	src <<"\t\tstartTime:"<< s.startTime;
	src<<std::endl;	src <<"\t\tendTime:"<< s.endTime;
	src<<std::endl;	src <<"\t\tbuild_tile:"<< s.build_tile;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCityArmyInfo& s)
{
	src <<"\t\tarmy:"<< s.army;
	src<<std::endl;	src <<"\t\tarmyBulid:"<< s.armyBulid;
	src<<std::endl;	src <<"\t\tmaxScale:"<< s.maxScale;
	src<<std::endl;	src <<"\t\tmaxCapacity:"<< s.maxCapacity;
	src<<std::endl;	src <<"\t\tmaxTribe:"<< s.maxTribe;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCityTrainLimitInfo& s)
{
	src <<"\t\ttroops_single_max:"<< s.troops_single_max;
	src<<std::endl;	src <<"\t\ttroops_assembled_max:"<< s.troops_assembled_max;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMarchResInfo& s)
{
	src <<"\t\tres_id:"<< s.res_id;
	src<<std::endl;	src <<"\t\tres_quantity:"<< s.res_quantity;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMarchTroopsInfo& s)
{
	src <<"\t\tplayer_id:"<< s.player_id;
	src<<std::endl;	src <<"\t\tarmys_id:"<< s.armys_id;
	src<<std::endl;	src <<"\t\tarmys_quantity:"<< s.armys_quantity;
	src<<std::endl;	src <<"\t\tarmys_hurt:"<< s.armys_hurt;
	src<<std::endl;	src <<"\t\tarmys_dead:"<< s.armys_dead;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMarchTroopsReport& s)
{
	src <<"\t\ta:"<< s.a;
	src<<std::endl;	src <<"\t\tb:"<< s.b;
	src<<std::endl;	src <<"\t\tc:"<< s.c;
	src<<std::endl;	src <<"\t\td:"<< s.d;
	src<<std::endl;	src <<"\t\te:"<< s.e;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSMarchTroopsReport& s)
{
	src<<"VecSMarchTroopsReport "<<"size:" << s.size()<<std::endl;
	Ls::VecSMarchTroopsReport::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMarchSpeed& s)
{
	src <<"\t\tspeed:"<< s.speed;
	src<<std::endl;	src <<"\t\ttime:"<< s.time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSMarchSpeed& s)
{
	src<<"VecSMarchSpeed "<<"size:" << s.size()<<std::endl;
	Ls::VecSMarchSpeed::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSMarchResInfo& s)
{
	src<<"VecSMarchResInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSMarchResInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSMarchTroopsInfo& s)
{
	src<<"VecSMarchTroopsInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSMarchTroopsInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDropResult& s)
{
	src <<"\t\tItemType:"<< s.ItemType;
	src<<std::endl;	src <<"\t\tItem:"<< s.Item;
	src<<std::endl;	src <<"\t\tCount:"<< s.Count;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSDropResult& s)
{
	src<<"VecSDropResult "<<"size:" << s.size()<<std::endl;
	Ls::VecSDropResult::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMapObj& s)
{
	src <<"\t\tobjType:"<< s.objType;
	src<<std::endl;	src <<"\t\tobjID:"<< s.objID;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMarchRelicInfo& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\ttemplate_id:"<< s.template_id;
	src<<std::endl;	src <<"\t\tlevel:"<< s.level;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSMarchRelicInfo& s)
{
	src<<"VecSMarchRelicInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSMarchRelicInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCityMarchProgress& s)
{
	src <<"\t\tmarch_id:"<< s.march_id;
	src<<std::endl;	src <<"\t\tmarch_type:"<< s.march_type;
	src<<std::endl;	src <<"\t\tplayer_id:"<< s.player_id;
	src<<std::endl;	src <<"\t\tcity_id:"<< s.city_id;
	src<<std::endl;	src <<"\t\tunion_id:"<< s.union_id;
	src<<std::endl;	src <<"\t\tloc_start_k:"<< s.loc_start_k;
	src<<std::endl;	src <<"\t\tloc_start_x:"<< s.loc_start_x;
	src<<std::endl;	src <<"\t\tloc_start_y:"<< s.loc_start_y;
	src<<std::endl;	src <<"\t\tloc_end_k:"<< s.loc_end_k;
	src<<std::endl;	src <<"\t\tloc_end_x:"<< s.loc_end_x;
	src<<std::endl;	src <<"\t\tloc_end_y:"<< s.loc_end_y;
	src<<std::endl;	src <<"\t\tstartTime:"<< s.startTime;
	src<<std::endl;	src <<"\t\tendTime:"<< s.endTime;
	src<<std::endl;	src <<"\t\tinitEndTime:"<< s.initEndTime;
	src<<std::endl;	src <<"\t\thero_id:"<< s.hero_id;
	src<<std::endl;	src <<"\t\ttarget_id:"<< s.target_id;
	src<<std::endl;	src <<"\t\t_massID:"<< s._massID;
	src<<std::endl;	src <<"\t\tstru_troops:"<< s.stru_troops;
	src<<std::endl;	src <<"\t\tspeed:"<< s.speed;
	src<<std::endl;	src <<"\t\tdrop_res:"<< s.drop_res;
	src<<std::endl;	src <<"\t\tloss_res:"<< s.loss_res;
	src<<std::endl;	src <<"\t\ttargetObj:"<< s.targetObj;
	src<<std::endl;	src <<"\t\t_totalWeight:"<< s._totalWeight;
	src<<std::endl;	src <<"\t\t_resType:"<< s._resType;
	src<<std::endl;	src <<"\t\t_realWeight:"<< s._realWeight;
	src<<std::endl;	src <<"\t\t_resSpeed:"<< s._resSpeed;
	src<<std::endl;	src <<"\t\t_speed:"<< s._speed;
	src<<std::endl;	src <<"\t\tcarry_point:"<< s.carry_point;
	src<<std::endl;	src <<"\t\tdrop_relic:"<< s.drop_relic;
	src<<std::endl;	src <<"\t\tcaptive_hero:"<< s.captive_hero;
	src<<std::endl;	src <<"\t\tmarch_state:"<< s.march_state;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSCityMarchProgress& s)
{
	src<<"VecSCityMarchProgress "<<"size:" << s.size()<<std::endl;
	Ls::VecSCityMarchProgress::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMassInfo& s)
{
	src <<"\t\tmass_id:"<< s.mass_id;
	src<<std::endl;	src <<"\t\trole_id:"<< s.role_id;
	src<<std::endl;	src <<"\t\tgridX:"<< s.gridX;
	src<<std::endl;	src <<"\t\tgridY:"<< s.gridY;
	src<<std::endl;	src <<"\t\ttotal_time:"<< s.total_time;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;	src <<"\t\tmass_state:"<< s.mass_state;
	src<<std::endl;	src <<"\t\tarrivedMarch:"<< s.arrivedMarch;
	src<<std::endl;	src <<"\t\tfirstMarch:"<< s.firstMarch;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRoleCityInfo& s)
{
	src <<"\t\tcity_id:"<< s.city_id;
	src<<std::endl;	src <<"\t\tinner_id:"<< s.inner_id;
	src<<std::endl;	src <<"\t\tcity_name:"<< s.city_name;
	src<<std::endl;	src <<"\t\tcity_state:"<< s.city_state;
	src<<std::endl;	src <<"\t\tcity_level_arrived:"<< s.city_level_arrived;
	src<<std::endl;	src <<"\t\tcity_level_now:"<< s.city_level_now;
	src<<std::endl;	src <<"\t\tcity_icon:"<< s.city_icon;
	src<<std::endl;	src <<"\t\tcity_union_help_max_time:"<< s.city_union_help_max_time;
	src<<std::endl;	src <<"\t\tcity_trade_num:"<< s.city_trade_num;
	src<<std::endl;	src <<"\t\tcity_trade_tax:"<< s.city_trade_tax;
	src<<std::endl;	src <<"\t\troleID:"<< s.roleID;
	src<<std::endl;	src <<"\t\tx:"<< s.x;
	src<<std::endl;	src <<"\t\ty:"<< s.y;
	src<<std::endl;	src <<"\t\tlast_defence:"<< s.last_defence;
	src<<std::endl;	src <<"\t\tresult:"<< s.result;
	src<<std::endl;	src <<"\t\tcaptive_max_num:"<< s.captive_max_num;
	src<<std::endl;	src <<"\t\tlast_march:"<< s.last_march;
	src<<std::endl;	src <<"\t\tpractice_army:"<< s.practice_army;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::FightBuff& s)
{
	src <<"\t\tb:"<< s.b;
	src<<std::endl;	src <<"\t\tv:"<< s.v;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecFightBuff& s)
{
	src<<"VecFightBuff "<<"size:" << s.size()<<std::endl;
	Ls::VecFightBuff::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SFightInfo& s)
{
	src <<"\t\ttarget_kingid:"<< s.target_kingid;
	src<<std::endl;	src <<"\t\ttarget_pox_x:"<< s.target_pox_x;
	src<<std::endl;	src <<"\t\ttarget_pox_y:"<< s.target_pox_y;
	src<<std::endl;	src <<"\t\tbattletype:"<< s.battletype;
	src<<std::endl;	src <<"\t\twinner_id:"<< s.winner_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::PlayerInfo& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\tname:"<< s.name;
	src<<std::endl;	src <<"\t\tget_material:"<< s.get_material;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecPlayerInfo& s)
{
	src<<"VecPlayerInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecPlayerInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCaptiveReport& s)
{
	src <<"\t\thero_id:"<< s.hero_id;
	src<<std::endl;	src <<"\t\thero_icon:"<< s.hero_icon;
	src<<std::endl;	src <<"\t\thero_name:"<< s.hero_name;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SFightMarchInfo& s)
{
	src <<"\t\tuser_id:"<< s.user_id;
	src<<std::endl;	src <<"\t\ticon_id:"<< s.icon_id;
	src<<std::endl;	src <<"\t\tisMass:"<< s.isMass;
	src<<std::endl;	src <<"\t\tmember_list:"<< s.member_list;
	src<<std::endl;	src <<"\t\tleague_id:"<< s.league_id;
	src<<std::endl;	src <<"\t\tleagueTag:"<< s.leagueTag;
	src<<std::endl;	src <<"\t\tuser_name:"<< s.user_name;
	src<<std::endl;	src <<"\t\tcastle_name:"<< s.castle_name;
	src<<std::endl;	src <<"\t\tfrom_k:"<< s.from_k;
	src<<std::endl;	src <<"\t\tfrom_x:"<< s.from_x;
	src<<std::endl;	src <<"\t\tfrom_y:"<< s.from_y;
	src<<std::endl;	src <<"\t\tbefore_attack:"<< s.before_attack;
	src<<std::endl;	src <<"\t\tafter_attack:"<< s.after_attack;
	src<<std::endl;	src <<"\t\ttroopsTotal:"<< s.troopsTotal;
	src<<std::endl;	src <<"\t\tarmyDead:"<< s.armyDead;
	src<<std::endl;	src <<"\t\tarmyWounded:"<< s.armyWounded;
	src<<std::endl;	src <<"\t\tarmyAlive:"<< s.armyAlive;
	src<<std::endl;	src <<"\t\ttrapDel:"<< s.trapDel;
	src<<std::endl;	src <<"\t\thero_name:"<< s.hero_name;
	src<<std::endl;	src <<"\t\thero_exp:"<< s.hero_exp;
	src<<std::endl;	src <<"\t\ttribeLost:"<< s.tribeLost;
	src<<std::endl;	src <<"\t\tRpeople:"<< s.Rpeople;
	src<<std::endl;	src <<"\t\tLpeople:"<< s.Lpeople;
	src<<std::endl;	src <<"\t\tculture:"<< s.culture;
	src<<std::endl;	src <<"\t\tpower:"<< s.power;
	src<<std::endl;	src <<"\t\tboom:"<< s.boom;
	src<<std::endl;	src <<"\t\tget_material:"<< s.get_material;
	src<<std::endl;	src <<"\t\tget_relic:"<< s.get_relic;
	src<<std::endl;	src <<"\t\therobufflist:"<< s.herobufflist;
	src<<std::endl;	src <<"\t\tfightbufflist:"<< s.fightbufflist;
	src<<std::endl;	src <<"\t\tmagiclist:"<< s.magiclist;
	src<<std::endl;	src <<"\t\tcaptive_hero:"<< s.captive_hero;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SFightReport& s)
{
	src <<"\t\tinfo:"<< s.info;
	src<<std::endl;	src <<"\t\tattack:"<< s.attack;
	src<<std::endl;	src <<"\t\tdefnece:"<< s.defnece;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDropItem& s)
{
	src <<"\t\tItemType:"<< s.ItemType;
	src<<std::endl;	src <<"\t\tItemID:"<< s.ItemID;
	src<<std::endl;	src <<"\t\tItemCount:"<< s.ItemCount;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSDropItem& s)
{
	src<<"VecSDropItem "<<"size:" << s.size()<<std::endl;
	Ls::VecSDropItem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SPopulationRes& s)
{
	src <<"\t\tcur_population:"<< s.cur_population;
	src<<std::endl;	src <<"\t\tmax_population:"<< s.max_population;
	src<<std::endl;	src <<"\t\thour_output:"<< s.hour_output;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SEquip& s)
{
	src <<"\t\tins_id:"<< s.ins_id;
	src<<std::endl;	src <<"\t\titem_id:"<< s.item_id;
	src<<std::endl;	src <<"\t\tcity:"<< s.city;
	src<<std::endl;	src <<"\t\thero:"<< s.hero;
	src<<std::endl;	src <<"\t\tpos:"<< s.pos;
	src<<std::endl;	src <<"\t\tquality:"<< s.quality;
	src<<std::endl;	src <<"\t\trole_item_ins_id:"<< s.role_item_ins_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::STechnologyInfo& s)
{
	src <<"\t\ttech_position:"<< s.tech_position;
	src<<std::endl;	src <<"\t\ttech_id:"<< s.tech_id;
	src<<std::endl;	src <<"\t\ttech_level:"<< s.tech_level;
	src<<std::endl;	src <<"\t\tdevelop_city_id:"<< s.develop_city_id;
	src<<std::endl;	src <<"\t\tdevelop_state:"<< s.develop_state;
	src<<std::endl;	src <<"\t\tstartTime:"<< s.startTime;
	src<<std::endl;	src <<"\t\tendTime:"<< s.endTime;
	src<<std::endl;	src <<"\t\tleague_help:"<< s.league_help;
	src<<std::endl;	src <<"\t\tadd_speed:"<< s.add_speed;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecTechnologyInfo& s)
{
	src<<"VecTechnologyInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecTechnologyInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SResourceInfo& s)
{
	src <<"\t\tres_current_value:"<< s.res_current_value;
	src<<std::endl;	src <<"\t\tres_hour_output:"<< s.res_hour_output;
	src<<std::endl;	src <<"\t\tres_store_max:"<< s.res_store_max;
	src<<std::endl;	src <<"\t\tres_store_protect:"<< s.res_store_protect;
	src<<std::endl;	src <<"\t\tres_keep_cost:"<< s.res_keep_cost;
	src<<std::endl;	src <<"\t\tlast_update:"<< s.last_update;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SHurtArmyInfo& s)
{
	src <<"\t\tarmy_id:"<< s.army_id;
	src<<std::endl;	src <<"\t\tarmy_count:"<< s.army_count;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecHurtArmy& s)
{
	src<<"VecHurtArmy "<<"size:" << s.size()<<std::endl;
	Ls::VecHurtArmy::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::STreatArmyInfo& s)
{
	src <<"\t\tpos_index:"<< s.pos_index;
	src<<std::endl;	src <<"\t\thurt_army_list:"<< s.hurt_army_list;
	src<<std::endl;	src <<"\t\tstart_time:"<< s.start_time;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;	src <<"\t\tishelped:"<< s.ishelped;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::STreatInfo& s)
{
	src <<"\t\ttreat_army_info:"<< s.treat_army_info;
	src<<std::endl;	src <<"\t\thospital_capacity:"<< s.hospital_capacity;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SItemBuffInfo& s)
{
	src <<"\t\tbuff_id:"<< s.buff_id;
	src<<std::endl;	src <<"\t\tstart_time:"<< s.start_time;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecItemBuff& s)
{
	src<<"VecItemBuff "<<"size:" << s.size()<<std::endl;
	Ls::VecItemBuff::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::EnemyLeagueInfo& s)
{
	src <<"\t\tleague_id:"<< s.league_id;
	src<<std::endl;	src <<"\t\tprotocol_state:"<< s.protocol_state;
	src<<std::endl;	src <<"\t\tstartTime:"<< s.startTime;
	src<<std::endl;	src <<"\t\tprotocol_content:"<< s.protocol_content;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecEnemyLeagueInfo& s)
{
	src<<"VecEnemyLeagueInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecEnemyLeagueInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLoseInfo& s)
{
	src <<"\t\tisLosing:"<< s.isLosing;
	src<<std::endl;	src <<"\t\tendTime:"<< s.endTime;
	src<<std::endl;	src <<"\t\ttag:"<< s.tag;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLeagueRecord& s)
{
	src <<"\t\tenemy_league_list:"<< s.enemy_league_list;
	src<<std::endl;	src <<"\t\tfriend_league_list:"<< s.friend_league_list;
	src<<std::endl;	src <<"\t\tlose_info:"<< s.lose_info;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLeagueHistoryWar& s)
{
	src <<"\t\tleague_name:"<< s.league_name;
	src<<std::endl;	src <<"\t\tleague_tag:"<< s.league_tag;
	src<<std::endl;	src <<"\t\tleague_level:"<< s.league_level;
	src<<std::endl;	src <<"\t\tleague_power:"<< s.league_power;
	src<<std::endl;	src <<"\t\tleague_lanaguage:"<< s.league_lanaguage;
	src<<std::endl;	src <<"\t\tresult:"<< s.result;
	src<<std::endl;	src <<"\t\tleague_flag:"<< s.league_flag;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::WarInfoList& s)
{
	src<<"WarInfoList "<<"size:" << s.size()<<std::endl;
	Ls::WarInfoList::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::role_mail& s)
{
	src <<"\t\tguid:"<< s.guid;
	src<<std::endl;	src <<"\t\tstamp:"<< s.stamp;
	src<<std::endl;	src <<"\t\ttype:"<< s.type;
	src<<std::endl;	src <<"\t\tsub_type:"<< s.sub_type;
	src<<std::endl;	src <<"\t\tstate:"<< s.state;
	src<<std::endl;	src <<"\t\treciever:"<< s.reciever;
	src<<std::endl;	src <<"\t\ttitle:"<< s.title;
	src<<std::endl;	src <<"\t\tcontent:"<< s.content;
	src<<std::endl;	src <<"\t\tdigest:"<< s.digest;
	src<<std::endl;	src <<"\t\treward:"<< s.reward;
	src<<std::endl;	src <<"\t\tget:"<< s.get;
	src<<std::endl;	src <<"\t\treverse:"<< s.reverse;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::mail_digest& s)
{
	src <<"\t\tp1:"<< s.p1;
	src<<std::endl;	src <<"\t\tp2:"<< s.p2;
	src<<std::endl;	src <<"\t\tp3:"<< s.p3;
	src<<std::endl;	src <<"\t\tp4:"<< s.p4;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::role_sys_mail& s)
{
	src <<"\t\tlast_sys_mail:"<< s.last_sys_mail;
	src<<std::endl;	src <<"\t\tlast_king_sys_mail:"<< s.last_king_sys_mail;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::first_tip_mail& s)
{
	src <<"\t\ttip:"<< s.tip;
	src<<std::endl;	src <<"\t\tmana:"<< s.mana;
	src<<std::endl;	src <<"\t\tdropList:"<< s.dropList;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::reward_mail& s)
{
	src <<"\t\trank:"<< s.rank;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRecruitArmyInfo& s)
{
	src <<"\t\trecruit_army_list:"<< s.recruit_army_list;
	src<<std::endl;	src <<"\t\tstart_time:"<< s.start_time;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRecruitInfo& s)
{
	src <<"\t\trecruit_army_info:"<< s.recruit_army_info;
	src<<std::endl;	src <<"\t\trecruit_count:"<< s.recruit_count;
	src<<std::endl;	src <<"\t\trecruit_time:"<< s.recruit_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRaceInfo& s)
{
	src <<"\t\tcity_race:"<< s.city_race;
	src<<std::endl;	src <<"\t\tchange_race:"<< s.change_race;
	src<<std::endl;	src <<"\t\tstart_time:"<< s.start_time;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCollectReport& s)
{
	src <<"\t\ttarget_kingid:"<< s.target_kingid;
	src<<std::endl;	src <<"\t\ttarget_pox_x:"<< s.target_pox_x;
	src<<std::endl;	src <<"\t\ttarget_pox_y:"<< s.target_pox_y;
	src<<std::endl;	src <<"\t\tgather_id:"<< s.gather_id;
	src<<std::endl;	src <<"\t\tres:"<< s.res;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SArmyKeepInfo& s)
{
	src <<"\t\tarmy_id:"<< s.army_id;
	src<<std::endl;	src <<"\t\tarmy_normal:"<< s.army_normal;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecArmyKeep& s)
{
	src<<"VecArmyKeep "<<"size:" << s.size()<<std::endl;
	Ls::VecArmyKeep::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SPosSave& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\tkingid:"<< s.kingid;
	src<<std::endl;	src <<"\t\tpos_x:"<< s.pos_x;
	src<<std::endl;	src <<"\t\tpos_y:"<< s.pos_y;
	src<<std::endl;	src <<"\t\tname:"<< s.name;
	src<<std::endl;	src <<"\t\tctype:"<< s.ctype;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSPosSave& s)
{
	src<<"VecSPosSave "<<"size:" << s.size()<<std::endl;
	Ls::VecSPosSave::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::STradeReport& s)
{
	src <<"\t\tsender_kingid:"<< s.sender_kingid;
	src<<std::endl;	src <<"\t\tsender_pox_x:"<< s.sender_pox_x;
	src<<std::endl;	src <<"\t\tsender_pox_y:"<< s.sender_pox_y;
	src<<std::endl;	src <<"\t\tsender_rank:"<< s.sender_rank;
	src<<std::endl;	src <<"\t\tsender_name:"<< s.sender_name;
	src<<std::endl;	src <<"\t\tsender_icon:"<< s.sender_icon;
	src<<std::endl;	src <<"\t\tsender_id:"<< s.sender_id;
	src<<std::endl;	src <<"\t\ttarget_pox_x:"<< s.target_pox_x;
	src<<std::endl;	src <<"\t\ttarget_pox_y:"<< s.target_pox_y;
	src<<std::endl;	src <<"\t\ttarget_name:"<< s.target_name;
	src<<std::endl;	src <<"\t\ttarget_rank:"<< s.target_rank;
	src<<std::endl;	src <<"\t\ttarget_icon:"<< s.target_icon;
	src<<std::endl;	src <<"\t\ttarget_id:"<< s.target_id;
	src<<std::endl;	src <<"\t\tres:"<< s.res;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SBossReport& s)
{
	src <<"\t\ttarget_kingid:"<< s.target_kingid;
	src<<std::endl;	src <<"\t\ttarget_pox_x:"<< s.target_pox_x;
	src<<std::endl;	src <<"\t\ttarget_pox_y:"<< s.target_pox_y;
	src<<std::endl;	src <<"\t\tface_id:"<< s.face_id;
	src<<std::endl;	src <<"\t\thero_name:"<< s.hero_name;
	src<<std::endl;	src <<"\t\thero_exp:"<< s.hero_exp;
	src<<std::endl;	src <<"\t\tmonster_id:"<< s.monster_id;
	src<<std::endl;	src <<"\t\tmonster_left_hp:"<< s.monster_left_hp;
	src<<std::endl;	src <<"\t\tmonster_lost_hp:"<< s.monster_lost_hp;
	src<<std::endl;	src <<"\t\tget_material:"<< s.get_material;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Spy_Struct& s)
{
	src <<"\t\tvalue:"<< s.value;
	src<<std::endl;	src <<"\t\tisValueFuzzy:"<< s.isValueFuzzy;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Spy_Struct_Army& s)
{
	src <<"\t\ta:"<< s.a;
	src<<std::endl;	src <<"\t\tb:"<< s.b;
	src<<std::endl;	src <<"\t\tc:"<< s.c;
	src<<std::endl;	src <<"\t\td:"<< s.d;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSSpyArmy& s)
{
	src<<"VecSSpyArmy "<<"size:" << s.size()<<std::endl;
	Ls::VecSSpyArmy::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Spy_Struct_Buff& s)
{
	src <<"\t\tb:"<< s.b;
	src<<std::endl;	src <<"\t\tv:"<< s.v;
	src<<std::endl;	src <<"\t\ti:"<< s.i;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSSpyBuff& s)
{
	src<<"VecSSpyBuff "<<"size:" << s.size()<<std::endl;
	Ls::VecSSpyBuff::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SSpyReportFight& s)
{
	src <<"\t\tarmyTotal:"<< s.armyTotal;
	src<<std::endl;	src <<"\t\tarmyInfo:"<< s.armyInfo;
	src<<std::endl;	src <<"\t\tbuffInfo:"<< s.buffInfo;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Spy_CastleInfo& s)
{
	src <<"\t\tplayerName:"<< s.playerName;
	src<<std::endl;	src <<"\t\tcastleName:"<< s.castleName;
	src<<std::endl;	src <<"\t\ticonID:"<< s.iconID;
	src<<std::endl;	src <<"\t\tleagueFlag:"<< s.leagueFlag;
	src<<std::endl;	src <<"\t\tkingdomID:"<< s.kingdomID;
	src<<std::endl;	src <<"\t\tposX:"<< s.posX;
	src<<std::endl;	src <<"\t\tposY:"<< s.posY;
	src<<std::endl;	src <<"\t\tmagicPower:"<< s.magicPower;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Spy_ResourceInfo& s)
{
	src <<"\t\tfood:"<< s.food;
	src<<std::endl;	src <<"\t\twood:"<< s.wood;
	src<<std::endl;	src <<"\t\tstone:"<< s.stone;
	src<<std::endl;	src <<"\t\tiron:"<< s.iron;
	src<<std::endl;	src <<"\t\tsilver:"<< s.silver;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Spy_ArmyInfo& s)
{
	src <<"\t\tsupportTotal:"<< s.supportTotal;
	src<<std::endl;	src <<"\t\tsupportInfo:"<< s.supportInfo;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Spy_TrapInfo& s)
{
	src <<"\t\ttrapTotal:"<< s.trapTotal;
	src<<std::endl;	src <<"\t\ttrapInfo:"<< s.trapInfo;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SSpyReport& s)
{
	src <<"\t\tnotify_type:"<< s.notify_type;
	src<<std::endl;	src <<"\t\tcastle_info:"<< s.castle_info;
	src<<std::endl;	src <<"\t\tresource_info:"<< s.resource_info;
	src<<std::endl;	src <<"\t\tsupport_info:"<< s.support_info;
	src<<std::endl;	src <<"\t\ttrap_info:"<< s.trap_info;
	src<<std::endl;	src <<"\t\tfight_info:"<< s.fight_info;
	src<<std::endl;	src <<"\t\tspy_tip:"<< s.spy_tip;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SSpyReportArmy& s)
{
	src <<"\t\tnotify_type:"<< s.notify_type;
	src<<std::endl;	src <<"\t\tmarch_type:"<< s.march_type;
	src<<std::endl;	src <<"\t\tcastle_info:"<< s.castle_info;
	src<<std::endl;	src <<"\t\tfight_info:"<< s.fight_info;
	src<<std::endl;	src <<"\t\tspy_tip:"<< s.spy_tip;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SSpyBeReported& s)
{
	src <<"\t\tnotify_type:"<< s.notify_type;
	src<<std::endl;	src <<"\t\tplayerName:"<< s.playerName;
	src<<std::endl;	src <<"\t\ticonID:"<< s.iconID;
	src<<std::endl;	src <<"\t\tleagueFlag:"<< s.leagueFlag;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLeagueEventNotify& s)
{
	src <<"\t\tleague_name:"<< s.league_name;
	src<<std::endl;	src <<"\t\tmember_name:"<< s.member_name;
	src<<std::endl;	src <<"\t\tmember_name2:"<< s.member_name2;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDeclareWarReport& s)
{
	src <<"\t\td_r_n:"<< s.d_r_n;
	src<<std::endl;	src <<"\t\td_l_n:"<< s.d_l_n;
	src<<std::endl;	src <<"\t\tb_l_n:"<< s.b_l_n;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SFightWarReport& s)
{
	src <<"\t\td_r_n:"<< s.d_r_n;
	src<<std::endl;	src <<"\t\td_l_n:"<< s.d_l_n;
	src<<std::endl;	src <<"\t\td_l_t:"<< s.d_l_t;
	src<<std::endl;	src <<"\t\tb_l_t:"<< s.b_l_t;
	src<<std::endl;	src <<"\t\tb_l_n:"<< s.b_l_n;
	src<<std::endl;	src <<"\t\tb_r_n:"<< s.b_r_n;
	src<<std::endl;	src <<"\t\tK:"<< s.K;
	src<<std::endl;	src <<"\t\tX:"<< s.X;
	src<<std::endl;	src <<"\t\tY:"<< s.Y;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMakePeaceReport& s)
{
	src <<"\t\ta:"<< s.a;
	src<<std::endl;	src <<"\t\ta_l_n:"<< s.a_l_n;
	src<<std::endl;	src <<"\t\tr_r_n:"<< s.r_r_n;
	src<<std::endl;	src <<"\t\tr_l_n:"<< s.r_l_n;
	src<<std::endl;	src <<"\t\tr_l_t:"<< s.r_l_t;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLeagueResultReport& s)
{
	src <<"\t\tw_t:"<< s.w_t;
	src<<std::endl;	src <<"\t\tw_n:"<< s.w_n;
	src<<std::endl;	src <<"\t\tw_r:"<< s.w_r;
	src<<std::endl;	src <<"\t\tl_t:"<< s.l_t;
	src<<std::endl;	src <<"\t\tl_n:"<< s.l_n;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRoleInfoReserve& s)
{
	src <<"\t\tmagic_dust:"<< s.magic_dust;
	src<<std::endl;	src <<"\t\tpay_str:"<< s.pay_str;
	src<<std::endl;	src <<"\t\tplatform:"<< s.platform;
	src<<std::endl;	src <<"\t\tlog_url:"<< s.log_url;
	src<<std::endl;	src <<"\t\tlog_upload:"<< s.log_upload;
	src<<std::endl;	src <<"\t\tlog_level:"<< s.log_level;
	src<<std::endl;	src <<"\t\tleft_find:"<< s.left_find;
	src<<std::endl;	src <<"\t\tHotURL:"<< s.HotURL;
	src<<std::endl;	src <<"\t\topen_id:"<< s.open_id;
	src<<std::endl;	src <<"\t\trace_list:"<< s.race_list;
	src<<std::endl;	src <<"\t\tfirst_pay_list:"<< s.first_pay_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::DB_Fd& s)
{
	src <<"\t\tfd:"<< s.fd;
	src<<std::endl;	src <<"\t\tdata:"<< s.data;
	src<<std::endl;	src <<"\t\tdataType:"<< s.dataType;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecDB_Fd& s)
{
	src<<"VecDB_Fd "<<"size:" << s.size()<<std::endl;
	Ls::VecDB_Fd::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::DB_Player_Info& s)
{
	src <<"\t\troleid:"<< s.roleid;
	src<<std::endl;	src <<"\t\tvecData:"<< s.vecData;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::DB_Create_Info& s)
{
	src <<"\t\ttable:"<< s.table;
	src<<std::endl;	src <<"\t\twhere:"<< s.where;
	src<<std::endl;	src <<"\t\tvecData:"<< s.vecData;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SOneCipher& s)
{
	src <<"\t\tidCipher:"<< s.idCipher;
	src<<std::endl;	src <<"\t\tstate:"<< s.state;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSOneCipher& s)
{
	src<<"VecSOneCipher "<<"size:" << s.size()<<std::endl;
	Ls::VecSOneCipher::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::STowerCard& s)
{
	src <<"\t\t_idCard:"<< s._idCard;
	src<<std::endl;	src <<"\t\t_cipher:"<< s._cipher;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDailyTask& s)
{
	src <<"\t\t_taskID:"<< s._taskID;
	src<<std::endl;	src <<"\t\t_curCipherID:"<< s._curCipherID;
	src<<std::endl;	src <<"\t\t_taskTime:"<< s._taskTime;
	src<<std::endl;	src <<"\t\t_dayliTaskState:"<< s._dayliTaskState;
	src<<std::endl;	src <<"\t\t_reward:"<< s._reward;
	src<<std::endl;	src <<"\t\theroID:"<< s.heroID;
	src<<std::endl;	src <<"\t\t_spe_reward:"<< s._spe_reward;
	src<<std::endl;	src <<"\t\tgetSpeReward:"<< s.getSpeReward;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSDailyTask& s)
{
	src<<"VecSDailyTask "<<"size:" << s.size()<<std::endl;
	Ls::VecSDailyTask::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCurDailyTask& s)
{
	src <<"\t\ttaskID:"<< s.taskID;
	src<<std::endl;	src <<"\t\tendTime:"<< s.endTime;
	src<<std::endl;	src <<"\t\theroID:"<< s.heroID;
	src<<std::endl;	src <<"\t\tstartTime:"<< s.startTime;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SPlayerDailyTask& s)
{
	src <<"\t\tvecTask:"<< s.vecTask;
	src<<std::endl;	src <<"\t\tcurTask:"<< s.curTask;
	src<<std::endl;	src <<"\t\ttarot:"<< s.tarot;
	src<<std::endl;	src <<"\t\tlastFlush:"<< s.lastFlush;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::STaskData& s)
{
	src <<"\t\titemID:"<< s.itemID;
	src<<std::endl;	src <<"\t\tcount:"<< s.count;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSTaskData& s)
{
	src<<"VecSTaskData "<<"size:" << s.size()<<std::endl;
	Ls::VecSTaskData::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SEmpireTask& s)
{
	src <<"\t\ttaskID:"<< s.taskID;
	src<<std::endl;	src <<"\t\ttaskSingleData:"<< s.taskSingleData;
	src<<std::endl;	src <<"\t\ttaskState:"<< s.taskState;
	src<<std::endl;	src <<"\t\tvecData:"<< s.vecData;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSEmpireTask& s)
{
	src<<"VecSEmpireTask "<<"size:" << s.size()<<std::endl;
	Ls::VecSEmpireTask::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::IntKeyValue& s)
{
	src <<"\t\tkey:"<< s.key;
	src<<std::endl;	src <<"\t\tvalue:"<< s.value;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecIntKeyValue& s)
{
	src<<"VecIntKeyValue "<<"size:" << s.size()<<std::endl;
	Ls::VecIntKeyValue::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SPlayerMagic& s)
{
	src <<"\t\tvecCard:"<< s.vecCard;
	src<<std::endl;	src <<"\t\tvecRes:"<< s.vecRes;
	src<<std::endl;	src <<"\t\tdust:"<< s.dust;
	src<<std::endl;	src <<"\t\tnewHelp:"<< s.newHelp;
	src<<std::endl;	src <<"\t\thelpCard:"<< s.helpCard;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SHeroSkill& s)
{
	src <<"\t\tskillID:"<< s.skillID;
	src<<std::endl;	src <<"\t\tskillPoint:"<< s.skillPoint;
	src<<std::endl;	src <<"\t\tisEffect:"<< s.isEffect;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SHeroData& s)
{
	src <<"\t\t_heroID:"<< s._heroID;
	src<<std::endl;	src <<"\t\t_heroName:"<< s._heroName;
	src<<std::endl;	src <<"\t\t_heroFace:"<< s._heroFace;
	src<<std::endl;	src <<"\t\t_heroCity:"<< s._heroCity;
	src<<std::endl;	src <<"\t\t_sex:"<< s._sex;
	src<<std::endl;	src <<"\t\t_heroLevel:"<< s._heroLevel;
	src<<std::endl;	src <<"\t\t_heroExp:"<< s._heroExp;
	src<<std::endl;	src <<"\t\t_heroSkillPoint:"<< s._heroSkillPoint;
	src<<std::endl;	src <<"\t\t_heroSkill1:"<< s._heroSkill1;
	src<<std::endl;	src <<"\t\t_heroSkill2:"<< s._heroSkill2;
	src<<std::endl;	src <<"\t\t_heroSkill3:"<< s._heroSkill3;
	src<<std::endl;	src <<"\t\t_heroPower:"<< s._heroPower;
	src<<std::endl;	src <<"\t\t_heroGrade:"<< s._heroGrade;
	src<<std::endl;	src <<"\t\t_heroState:"<< s._heroState;
	src<<std::endl;	src <<"\t\t_heroPos:"<< s._heroPos;
	src<<std::endl;	src <<"\t\t_heroJob:"<< s._heroJob;
	src<<std::endl;	src <<"\t\t_captiveCity:"<< s._captiveCity;
	src<<std::endl;	src <<"\t\t_marchID:"<< s._marchID;
	src<<std::endl;	src <<"\t\t_releaseTime:"<< s._releaseTime;
	src<<std::endl;	src <<"\t\tsendhelp:"<< s.sendhelp;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSHeroData& s)
{
	src<<"VecSHeroData "<<"size:" << s.size()<<std::endl;
	Ls::VecSHeroData::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SUIntValue& s)
{
	src <<"\t\tval:"<< s.val;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSUIntValue& s)
{
	src<<"VecSUIntValue "<<"size:" << s.size()<<std::endl;
	Ls::VecSUIntValue::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SAllHeroData& s)
{
	src <<"\t\tvecHero:"<< s.vecHero;
	src<<std::endl;	src <<"\t\totherHero:"<< s.otherHero;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SSystemMailData& s)
{
	src <<"\t\tnotify_type:"<< s.notify_type;
	src<<std::endl;	src <<"\t\tcontent:"<< s.content;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCastleFace& s)
{
	src <<"\t\tcfg_id:"<< s.cfg_id;
	src<<std::endl;	src <<"\t\tleft_time:"<< s.left_time;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;	src <<"\t\titem_id:"<< s.item_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SBigMapCastleInfo& s)
{
	src <<"\t\tlast_defence:"<< s.last_defence;
	src<<std::endl;	src <<"\t\tresult:"<< s.result;
	src<<std::endl;	src <<"\t\tpower:"<< s.power;
	src<<std::endl;	src <<"\t\tloseinfo:"<< s.loseinfo;
	src<<std::endl;	src <<"\t\trelic_count:"<< s.relic_count;
	src<<std::endl;	src <<"\t\thas_6relic:"<< s.has_6relic;
	src<<std::endl;	src <<"\t\thas_captive:"<< s.has_captive;
	src<<std::endl;	src <<"\t\tlast_march:"<< s.last_march;
	src<<std::endl;	src <<"\t\tcastle_face:"<< s.castle_face;
	src<<std::endl;	src <<"\t\tcity_race:"<< s.city_race;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SInnerCastleInfo& s)
{
	src <<"\t\tlast_defence:"<< s.last_defence;
	src<<std::endl;	src <<"\t\tresult:"<< s.result;
	src<<std::endl;	src <<"\t\tembassy:"<< s.embassy;
	src<<std::endl;	src <<"\t\tmax_tribe:"<< s.max_tribe;
	src<<std::endl;	src <<"\t\tleft_tribe:"<< s.left_tribe;
	src<<std::endl;	src <<"\t\tmax_guard:"<< s.max_guard;
	src<<std::endl;	src <<"\t\tleft_guard:"<< s.left_guard;
	src<<std::endl;	src <<"\t\tmax_hurt:"<< s.max_hurt;
	src<<std::endl;	src <<"\t\tmax_aid:"<< s.max_aid;
	src<<std::endl;	src <<"\t\tcur_aid:"<< s.cur_aid;
	src<<std::endl;	src <<"\t\tweright_add:"<< s.weright_add;
	src<<std::endl;	src <<"\t\tleague_range:"<< s.league_range;
	src<<std::endl;	src <<"\t\tcastle_face:"<< s.castle_face;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLogInfo& s)
{
	src <<"\t\trole_name:"<< s.role_name;
	src<<std::endl;	src <<"\t\tconfig_id:"<< s.config_id;
	src<<std::endl;	src <<"\t\tconfig_num:"<< s.config_num;
	src<<std::endl;	src <<"\t\tlog_time:"<< s.log_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSLogInfo& s)
{
	src<<"VecSLogInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSLogInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLeagueKey& s)
{
	src <<"\t\tkey:"<< s.key;
	src<<std::endl;	src <<"\t\tleague_id:"<< s.league_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SWarRecord& s)
{
	src <<"\t\twar_type:"<< s.war_type;
	src<<std::endl;	src <<"\t\tattacker:"<< s.attacker;
	src<<std::endl;	src <<"\t\tattack_tag:"<< s.attack_tag;
	src<<std::endl;	src <<"\t\tdefender:"<< s.defender;
	src<<std::endl;	src <<"\t\tdefend_tag:"<< s.defend_tag;
	src<<std::endl;	src <<"\t\twar_result:"<< s.war_result;
	src<<std::endl;	src <<"\t\twar_time:"<< s.war_time;
	src<<std::endl;	src <<"\t\tfight_x:"<< s.fight_x;
	src<<std::endl;	src <<"\t\tfight_y:"<< s.fight_y;
	src<<std::endl;	src <<"\t\tkingdom_id:"<< s.kingdom_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSWarRecord& s)
{
	src<<"VecSWarRecord "<<"size:" << s.size()<<std::endl;
	Ls::VecSWarRecord::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLeagueInfoReverse& s)
{
	src <<"\t\tu_capital:"<< s.u_capital;
	src<<std::endl;	src <<"\t\tmax_level:"<< s.max_level;
	src<<std::endl;	src <<"\t\tindenture:"<< s.indenture;
	src<<std::endl;	src <<"\t\tmanuscript:"<< s.manuscript;
	src<<std::endl;	src <<"\t\tcastle_state:"<< s.castle_state;
	src<<std::endl;	src <<"\t\tfight_count:"<< s.fight_count;
	src<<std::endl;	src <<"\t\tleague_local:"<< s.league_local;
	src<<std::endl;	src <<"\t\tboom_data:"<< s.boom_data;
	src<<std::endl;	src <<"\t\tlast_exile_time:"<< s.last_exile_time;
	src<<std::endl;	src <<"\t\tlast_comment:"<< s.last_comment;
	src<<std::endl;	src <<"\t\tlast_fresh:"<< s.last_fresh;
	src<<std::endl;	src <<"\t\tlast_buy:"<< s.last_buy;
	src<<std::endl;	src <<"\t\tcity_power:"<< s.city_power;
	src<<std::endl;	src <<"\t\tarmy_power:"<< s.army_power;
	src<<std::endl;	src <<"\t\tarmy_count:"<< s.army_count;
	src<<std::endl;	src <<"\t\tloseinfo:"<< s.loseinfo;
	src<<std::endl;	src <<"\t\tenemyList:"<< s.enemyList;
	src<<std::endl;	src <<"\t\tgift_level:"<< s.gift_level;
	src<<std::endl;	src <<"\t\tgift_point:"<< s.gift_point;
	src<<std::endl;	src <<"\t\tneed_level:"<< s.need_level;
	src<<std::endl;	src <<"\t\tneed_power:"<< s.need_power;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRuleSystem& s)
{
	src <<"\t\tsys_pos:"<< s.sys_pos;
	src<<std::endl;	src <<"\t\tsys_id:"<< s.sys_id;
	src<<std::endl;	src <<"\t\tsys_level:"<< s.sys_level;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSRuleSystem& s)
{
	src<<"VecSRuleSystem "<<"size:" << s.size()<<std::endl;
	Ls::VecSRuleSystem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCountrySystem& s)
{
	src <<"\t\tsys_id:"<< s.sys_id;
	src<<std::endl;	src <<"\t\tsys_state:"<< s.sys_state;
	src<<std::endl;	src <<"\t\tsys_active:"<< s.sys_active;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSCountrySystem& s)
{
	src<<"VecSCountrySystem "<<"size:" << s.size()<<std::endl;
	Ls::VecSCountrySystem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SSystemInfo& s)
{
	src <<"\t\tsys_target:"<< s.sys_target;
	src<<std::endl;	src <<"\t\taccumulated:"<< s.accumulated;
	src<<std::endl;	src <<"\t\tinterior_reform:"<< s.interior_reform;
	src<<std::endl;	src <<"\t\tmilitary_reform:"<< s.military_reform;
	src<<std::endl;	src <<"\t\tfreedom_list:"<< s.freedom_list;
	src<<std::endl;	src <<"\t\treason_list:"<< s.reason_list;
	src<<std::endl;	src <<"\t\thonour_list:"<< s.honour_list;
	src<<std::endl;	src <<"\t\tinterior_list:"<< s.interior_list;
	src<<std::endl;	src <<"\t\tmilitary_list:"<< s.military_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCultureInfo& s)
{
	src <<"\t\tcur_value:"<< s.cur_value;
	src<<std::endl;	src <<"\t\thour_output:"<< s.hour_output;
	src<<std::endl;	src <<"\t\toutput_add:"<< s.output_add;
	src<<std::endl;	src <<"\t\taccumulated_culture:"<< s.accumulated_culture;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SProgressInfoEx& s)
{
	src <<"\t\tconfig_num:"<< s.config_num;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMagicBoxInfo& s)
{
	src <<"\t\tcur_num:"<< s.cur_num;
	src<<std::endl;	src <<"\t\tendTime:"<< s.endTime;
	src<<std::endl;	src <<"\t\tlastStart:"<< s.lastStart;
	src<<std::endl;	src <<"\t\tgetTimes:"<< s.getTimes;
	src<<std::endl;	src <<"\t\tcurBox:"<< s.curBox;
	src<<std::endl;	src <<"\t\tparam1:"<< s.param1;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLegendBoxInfo& s)
{
	src <<"\t\tcur_state:"<< s.cur_state;
	src<<std::endl;	src <<"\t\tcur_num:"<< s.cur_num;
	src<<std::endl;	src <<"\t\ttotal_num:"<< s.total_num;
	src<<std::endl;	src <<"\t\tlastTime:"<< s.lastTime;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SOrderRewardInfo& s)
{
	src <<"\t\torder_type:"<< s.order_type;
	src<<std::endl;	src <<"\t\torder_rank:"<< s.order_rank;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SOrderRewardInfoNtf& s)
{
	src <<"\t\torder_rank:"<< s.order_rank;
	src<<std::endl;	src <<"\t\tplayer_name:"<< s.player_name;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSOrderRewardInfoNtf& s)
{
	src<<"VecSOrderRewardInfoNtf "<<"size:" << s.size()<<std::endl;
	Ls::VecSOrderRewardInfoNtf::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SOrderRewardNtf& s)
{
	src <<"\t\torder_type:"<< s.order_type;
	src<<std::endl;	src <<"\t\treward_list:"<< s.reward_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SArmyInfoEx& s)
{
	src <<"\t\tarmy_type:"<< s.army_type;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::ROLE& s)
{
	src <<"\t\trole_all_info:"<< s.role_all_info;
	src<<std::endl;	src <<"\t\trole_strength_info:"<< s.role_strength_info;
	src<<std::endl;	src <<"\t\trole_hero_info:"<< s.role_hero_info;
	src<<std::endl;	src <<"\t\trole_game_info:"<< s.role_game_info;
	src<<std::endl;	src <<"\t\tcollet_pos:"<< s.collet_pos;
	src<<std::endl;	src <<"\t\tdaily_task:"<< s.daily_task;
	src<<std::endl;	src <<"\t\tempire_task:"<< s.empire_task;
	src<<std::endl;	src <<"\t\tleague_info:"<< s.league_info;
	src<<std::endl;	src <<"\t\ttechnolog_info:"<< s.technolog_info;
	src<<std::endl;	src <<"\t\treserve_force:"<< s.reserve_force;
	src<<std::endl;	src <<"\t\tmagic_force:"<< s.magic_force;
	src<<std::endl;	src <<"\t\tstatitics_info:"<< s.statitics_info;
	src<<std::endl;	src <<"\t\tleague_task:"<< s.league_task;
	src<<std::endl;	src <<"\t\tsystem_info:"<< s.system_info;
	src<<std::endl;	src <<"\t\tvip_task:"<< s.vip_task;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::CASTLE& s)
{
	src <<"\t\tbase_info:"<< s.base_info;
	src<<std::endl;	src <<"\t\tbuild_info:"<< s.build_info;
	src<<std::endl;	src <<"\t\tpopulation:"<< s.population;
	src<<std::endl;	src <<"\t\tfood_res:"<< s.food_res;
	src<<std::endl;	src <<"\t\twood_res:"<< s.wood_res;
	src<<std::endl;	src <<"\t\tstone_res:"<< s.stone_res;
	src<<std::endl;	src <<"\t\tiron_res:"<< s.iron_res;
	src<<std::endl;	src <<"\t\tsilver_res:"<< s.silver_res;
	src<<std::endl;	src <<"\t\tarmy_info:"<< s.army_info;
	src<<std::endl;	src <<"\t\ttrap_info:"<< s.trap_info;
	src<<std::endl;	src <<"\t\ttreat_info:"<< s.treat_info;
	src<<std::endl;	src <<"\t\treserve_force:"<< s.reserve_force;
	src<<std::endl;	src <<"\t\trace_info:"<< s.race_info;
	src<<std::endl;	src <<"\t\tmagic_info:"<< s.magic_info;
	src<<std::endl;	src <<"\t\thero_info:"<< s.hero_info;
	src<<std::endl;	src <<"\t\ttechnolog_info:"<< s.technolog_info;
	src<<std::endl;	src <<"\t\titembuff_info:"<< s.itembuff_info;
	src<<std::endl;	src <<"\t\tculture_info:"<< s.culture_info;
	src<<std::endl;	src <<"\t\trepair_info:"<< s.repair_info;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecCastle& s)
{
	src<<"VecCastle "<<"size:" << s.size()<<std::endl;
	Ls::VecCastle::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::EQUIP& s)
{
	src <<"\t\tbase_info:"<< s.base_info;
	src<<std::endl;	src <<"\t\tgem_info:"<< s.gem_info;
	src<<std::endl;	src <<"\t\tenchanting:"<< s.enchanting;
	src<<std::endl;	src <<"\t\trefine_info:"<< s.refine_info;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecEquip& s)
{
	src<<"VecEquip "<<"size:" << s.size()<<std::endl;
	Ls::VecEquip::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::AccountData& s)
{
	src <<"\t\trole:"<< s.role;
	src<<std::endl;	src <<"\t\tcastle_list:"<< s.castle_list;
	src<<std::endl;	src <<"\t\tequip_list:"<< s.equip_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDonateReport& s)
{
	src <<"\t\tdonate_classify:"<< s.donate_classify;
	src<<std::endl;	src <<"\t\tdonate_result:"<< s.donate_result;
	src<<std::endl;	src <<"\t\tdonate_type:"<< s.donate_type;
	src<<std::endl;	src <<"\t\tdonate_num:"<< s.donate_num;
	src<<std::endl;	src <<"\t\tcontribution:"<< s.contribution;
	src<<std::endl;	src <<"\t\treward_item:"<< s.reward_item;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SForgeInfo& s)
{
	src <<"\t\tcdEndTime:"<< s.cdEndTime;
	src<<std::endl;	src <<"\t\tequipid:"<< s.equipid;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMagicRecord& s)
{
	src <<"\t\trole_name:"<< s.role_name;
	src<<std::endl;	src <<"\t\tleague_tag:"<< s.league_tag;
	src<<std::endl;	src <<"\t\tmagic_id:"<< s.magic_id;
	src<<std::endl;	src <<"\t\tmagic_time:"<< s.magic_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSMagicRecord& s)
{
	src<<"VecSMagicRecord "<<"size:" << s.size()<<std::endl;
	Ls::VecSMagicRecord::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SAllianceGiftInfo& s)
{
	src <<"\t\tthis_id:"<< s.this_id;
	src<<std::endl;	src <<"\t\tgift_id:"<< s.gift_id;
	src<<std::endl;	src <<"\t\treceive_time:"<< s.receive_time;
	src<<std::endl;	src <<"\t\tgift_state:"<< s.gift_state;
	src<<std::endl;	src <<"\t\treward_item:"<< s.reward_item;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSAllianceGiftInfo& s)
{
	src<<"VecSAllianceGiftInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSAllianceGiftInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SKeyValue& s)
{
	src <<"\t\tkey:"<< s.key;
	src<<std::endl;	src <<"\t\tvalue:"<< s.value;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSKeyValue& s)
{
	src<<"VecSKeyValue "<<"size:" << s.size()<<std::endl;
	Ls::VecSKeyValue::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SEnchantAttr& s)
{
	src <<"\t\tkey:"<< s.key;
	src<<std::endl;	src <<"\t\tvalue:"<< s.value;
	src<<std::endl;	src <<"\t\trate:"<< s.rate;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSEnchantAttr& s)
{
	src<<"VecSEnchantAttr "<<"size:" << s.size()<<std::endl;
	Ls::VecSEnchantAttr::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SEnchGroup& s)
{
	src <<"\t\tgroupID:"<< s.groupID;
	src<<std::endl;	src <<"\t\tvalue:"<< s.value;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSEnchGroup& s)
{
	src<<"VecSEnchGroup "<<"size:" << s.size()<<std::endl;
	Ls::VecSEnchGroup::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SEnchanting& s)
{
	src <<"\t\tattr_group:"<< s.attr_group;
	src<<std::endl;	src <<"\t\tattr:"<< s.attr;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SGemEquip& s)
{
	src <<"\t\tpos:"<< s.pos;
	src<<std::endl;	src <<"\t\tgem_id:"<< s.gem_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSGemEquip& s)
{
	src<<"VecSGemEquip "<<"size:" << s.size()<<std::endl;
	Ls::VecSGemEquip::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SEquipGemInfo& s)
{
	src <<"\t\tmax_hole:"<< s.max_hole;
	src<<std::endl;	src <<"\t\tgem_info:"<< s.gem_info;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRefineData& s)
{
	src <<"\t\trefine_attr:"<< s.refine_attr;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRelicBase& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\ttemplate_id:"<< s.template_id;
	src<<std::endl;	src <<"\t\tlevel:"<< s.level;
	src<<std::endl;	src <<"\t\trelic_type:"<< s.relic_type;
	src<<std::endl;	src <<"\t\tpos:"<< s.pos;
	src<<std::endl;	src <<"\t\tstate:"<< s.state;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRelicInMap& s)
{
	src <<"\t\tx:"<< s.x;
	src<<std::endl;	src <<"\t\ty:"<< s.y;
	src<<std::endl;	src <<"\t\tleft_carry:"<< s.left_carry;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRelicInCity& s)
{
	src <<"\t\tcity_id:"<< s.city_id;
	src<<std::endl;	src <<"\t\tidx:"<< s.idx;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRelicOnTribe& s)
{
	src <<"\t\tlevel:"<< s.level;
	src<<std::endl;	src <<"\t\ttid:"<< s.tid;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRelicInfo& s)
{
	src <<"\t\ttemplate_id:"<< s.template_id;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;	src <<"\t\tposK:"<< s.posK;
	src<<std::endl;	src <<"\t\tposX:"<< s.posX;
	src<<std::endl;	src <<"\t\tposY:"<< s.posY;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::MailStrTip& s)
{
	src <<"\t\ttip:"<< s.tip;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCarryInfo& s)
{
	src <<"\t\trelic_id:"<< s.relic_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Goals& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\ttype:"<< s.type;
	src<<std::endl;	src <<"\t\tfinish:"<< s.finish;
	src<<std::endl;	src <<"\t\tvalue:"<< s.value;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Days& s)
{
	src<<"Days "<<"size:" << s.size()<<std::endl;
	Ls::Days::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SevenDaysInfo& s)
{
	src <<"\t\tfinish:"<< s.finish;
	src<<std::endl;	src <<"\t\tday_list:"<< s.day_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SevenDays& s)
{
	src<<"SevenDays "<<"size:" << s.size()<<std::endl;
	Ls::SevenDays::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SSevenDays& s)
{
	src <<"\t\tlogin_days:"<< s.login_days;
	src<<std::endl;	src <<"\t\tday_info:"<< s.day_info;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMonthCardInfo& s)
{
	src <<"\t\tcard_id:"<< s.card_id;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;	src <<"\t\tis_get:"<< s.is_get;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSMonthCardInfo& s)
{
	src<<"VecSMonthCardInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSMonthCardInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRechargeInfo& s)
{
	src <<"\t\tfirst_pay:"<< s.first_pay;
	src<<std::endl;	src <<"\t\tfund_id:"<< s.fund_id;
	src<<std::endl;	src <<"\t\tfund_reward:"<< s.fund_reward;
	src<<std::endl;	src <<"\t\tcard_list:"<< s.card_list;
	src<<std::endl;	src <<"\t\tprefer_list:"<< s.prefer_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRoleLimitEventInfo& s)
{
	src <<"\t\tevent_id:"<< s.event_id;
	src<<std::endl;	src <<"\t\tscore:"<< s.score;
	src<<std::endl;	src <<"\t\ttime:"<< s.time;
	src<<std::endl;	src <<"\t\tstage:"<< s.stage;
	src<<std::endl;	src <<"\t\tlevel:"<< s.level;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSRoleLimitEventInfo& s)
{
	src<<"VecSRoleLimitEventInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSRoleLimitEventInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLimitEventData& s)
{
	src <<"\t\tevent_list:"<< s.event_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::LimitEventInfoMail& s)
{
	src <<"\t\tlevel:"<< s.level;
	src<<std::endl;	src <<"\t\tevent_id:"<< s.event_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLeagueCastleInfoEx& s)
{
	src <<"\t\tdefence_time:"<< s.defence_time;
	src<<std::endl;	src <<"\t\tdefence_result:"<< s.defence_result;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SPlayerIconInfo& s)
{
	src <<"\t\ticon_id:"<< s.icon_id;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SHeroInfoEx& s)
{
	src <<"\t\tprison_id:"<< s.prison_id;
	src<<std::endl;	src <<"\t\tprison_name:"<< s.prison_name;
	src<<std::endl;	src <<"\t\tprison_kingdom:"<< s.prison_kingdom;
	src<<std::endl;	src <<"\t\tprison_x:"<< s.prison_x;
	src<<std::endl;	src <<"\t\tprison_y:"<< s.prison_y;
	src<<std::endl;	src <<"\t\tprison_left_time:"<< s.prison_left_time;
	src<<std::endl;	src <<"\t\tcaptive_total_time:"<< s.captive_total_time;
	src<<std::endl;	src <<"\t\tcaptive_left_time:"<< s.captive_left_time;
	src<<std::endl;	src <<"\t\tsendhelp:"<< s.sendhelp;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SReleseHeroMail& s)
{
	src <<"\t\tplayer_name:"<< s.player_name;
	src<<std::endl;	src <<"\t\thero_name:"<< s.hero_name;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SZoneBase& s)
{
	src <<"\t\tz_id:"<< s.z_id;
	src<<std::endl;	src <<"\t\tz_state:"<< s.z_state;
	src<<std::endl;	src <<"\t\tz_type:"<< s.z_type;
	src<<std::endl;	src <<"\t\tz_time:"<< s.z_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SZoneArmy& s)
{
	src <<"\t\tarmy:"<< s.army;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SZoneLeague& s)
{
	src <<"\t\tz_leagueID:"<< s.z_leagueID;
	src<<std::endl;	src <<"\t\tz_color:"<< s.z_color;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SZoneBuff& s)
{
	src <<"\t\tbuff_list:"<< s.buff_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SZoneCircle& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\ttime:"<< s.time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SJunmenLoginData& s)
{
	src <<"\t\tunid:"<< s.unid;
	src<<std::endl;	src <<"\t\taccount_id:"<< s.account_id;
	src<<std::endl;	src <<"\t\ttoken:"<< s.token;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SJunmenLoginInfo& s)
{
	src <<"\t\tcode:"<< s.code;
	src<<std::endl;	src <<"\t\tdata:"<< s.data;
	src<<std::endl;	src <<"\t\tcodeValue:"<< s.codeValue;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::StartEventData& s)
{
	src <<"\t\tevent_id:"<< s.event_id;
	src<<std::endl;	src <<"\t\tprepare_time:"<< s.prepare_time;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLivenessInfo& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\tvalue:"<< s.value;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSLivenessInfo& s)
{
	src<<"VecSLivenessInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSLivenessInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLivenessData& s)
{
	src <<"\t\tactive_value :"<< s.active_value ;
	src<<std::endl;	src <<"\t\tcumulative_value:"<< s.cumulative_value;
	src<<std::endl;	src <<"\t\treset_time:"<< s.reset_time;
	src<<std::endl;	src <<"\t\treward_list:"<< s.reward_list;
	src<<std::endl;	src <<"\t\tcreward_list:"<< s.creward_list;
	src<<std::endl;	src <<"\t\tliveness_list:"<< s.liveness_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::ZoneMapData& s)
{
	src <<"\t\tzone_state:"<< s.zone_state;
	src<<std::endl;	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDuokuUserInfo& s)
{
	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\tname:"<< s.name;
	src<<std::endl;	src <<"\t\tnick:"<< s.nick;
	src<<std::endl;	src <<"\t\tavator:"<< s.avator;
	src<<std::endl;	src <<"\t\tsex:"<< s.sex;
	src<<std::endl;	src <<"\t\tarea:"<< s.area;
	src<<std::endl;	src <<"\t\ttoken:"<< s.token;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDuokuChannelInfo& s)
{
	src <<"\t\tsdkchannel:"<< s.sdkchannel;
	src<<std::endl;	src <<"\t\tserverid:"<< s.serverid;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDuokuLoginInfo& s)
{
	src <<"\t\tcode:"<< s.code;
	src<<std::endl;	src <<"\t\tuserinfo:"<< s.userinfo;
	src<<std::endl;	src <<"\t\tchannelinfo:"<< s.channelinfo;
	src<<std::endl;	src <<"\t\text:"<< s.ext;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::UnionShopLog& s)
{
	src <<"\t\tbuy_time:"<< s.buy_time;
	src<<std::endl;	src <<"\t\tname:"<< s.name;
	src<<std::endl;	src <<"\t\titem_id:"<< s.item_id;
	src<<std::endl;	src <<"\t\titem_count:"<< s.item_count;
	src<<std::endl;	src <<"\t\tmembers:"<< s.members;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecUnionShopLog& s)
{
	src<<"VecUnionShopLog "<<"size:" << s.size()<<std::endl;
	Ls::VecUnionShopLog::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::UnionGroupShop& s)
{
	src <<"\t\tend_time:"<< s.end_time;
	src<<std::endl;	src <<"\t\tmembers:"<< s.members;
	src<<std::endl;	src <<"\t\titem_id:"<< s.item_id;
	src<<std::endl;	src <<"\t\titem_count:"<< s.item_count;
	src<<std::endl;	src <<"\t\tquality:"<< s.quality;
	src<<std::endl;	src <<"\t\tprice:"<< s.price;
	src<<std::endl;	src <<"\t\tjoins:"<< s.joins;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecUnionGroupShop& s)
{
	src<<"VecUnionGroupShop "<<"size:" << s.size()<<std::endl;
	Ls::VecUnionGroupShop::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::UnionShopData& s)
{
	src <<"\t\tflush_time:"<< s.flush_time;
	src<<std::endl;	src <<"\t\tushopGp:"<< s.ushopGp;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::online_number& s)
{
	src <<"\t\tdt:"<< s.dt;
	src<<std::endl;	src <<"\t\taction:"<< s.action;
	src<<std::endl;	src <<"\t\tgame:"<< s.game;
	src<<std::endl;	src <<"\t\tver:"<< s.ver;
	src<<std::endl;	src <<"\t\tserver:"<< s.server;
	src<<std::endl;	src <<"\t\tserverip:"<< s.serverip;
	src<<std::endl;	src <<"\t\tnum:"<< s.num;
	src<<std::endl;	src <<"\t\tmax_num:"<< s.max_num;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Register_log& s)
{
	src <<"\t\tdt:"<< s.dt;
	src<<std::endl;	src <<"\t\taction:"<< s.action;
	src<<std::endl;	src <<"\t\tgame:"<< s.game;
	src<<std::endl;	src <<"\t\tcid:"<< s.cid;
	src<<std::endl;	src <<"\t\tserver:"<< s.server;
	src<<std::endl;	src <<"\t\tUser_ip:"<< s.User_ip;
	src<<std::endl;	src <<"\t\tDeviceid:"<< s.Deviceid;
	src<<std::endl;	src <<"\t\tUid:"<< s.Uid;
	src<<std::endl;	src <<"\t\tPlatform:"<< s.Platform;
	src<<std::endl;	src <<"\t\tcarrier:"<< s.carrier;
	src<<std::endl;	src <<"\t\tua:"<< s.ua;
	src<<std::endl;	src <<"\t\tmac_wifi:"<< s.mac_wifi;
	src<<std::endl;	src <<"\t\tMac_3g:"<< s.Mac_3g;
	src<<std::endl;	src <<"\t\tNet_status:"<< s.Net_status;
	src<<std::endl;	src <<"\t\tver:"<< s.ver;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::First_openlog& s)
{
	src <<"\t\tdt:"<< s.dt;
	src<<std::endl;	src <<"\t\taction:"<< s.action;
	src<<std::endl;	src <<"\t\tgame:"<< s.game;
	src<<std::endl;	src <<"\t\tcid:"<< s.cid;
	src<<std::endl;	src <<"\t\tserver:"<< s.server;
	src<<std::endl;	src <<"\t\tuser_ip:"<< s.user_ip;
	src<<std::endl;	src <<"\t\tdeviceid:"<< s.deviceid;
	src<<std::endl;	src <<"\t\tuid:"<< s.uid;
	src<<std::endl;	src <<"\t\tplatform:"<< s.platform;
	src<<std::endl;	src <<"\t\tcarrier:"<< s.carrier;
	src<<std::endl;	src <<"\t\tua:"<< s.ua;
	src<<std::endl;	src <<"\t\tmac_wifi:"<< s.mac_wifi;
	src<<std::endl;	src <<"\t\tmac_3g:"<< s.mac_3g;
	src<<std::endl;	src <<"\t\tnet_status:"<< s.net_status;
	src<<std::endl;	src <<"\t\tsdkv:"<< s.sdkv;
	src<<std::endl;	src <<"\t\tserver_ip:"<< s.server_ip;
	src<<std::endl;	src <<"\t\tver:"<< s.ver;
	src<<std::endl;	src <<"\t\tchannel:"<< s.channel;
	src<<std::endl;	src <<"\t\tbindFlag:"<< s.bindFlag;
	src<<std::endl;	src <<"\t\tlanguage:"<< s.language;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::login_success& s)
{
	src <<"\t\tdt:"<< s.dt;
	src<<std::endl;	src <<"\t\taction:"<< s.action;
	src<<std::endl;	src <<"\t\tgame:"<< s.game;
	src<<std::endl;	src <<"\t\tserver:"<< s.server;
	src<<std::endl;	src <<"\t\tuid:"<< s.uid;
	src<<std::endl;	src <<"\t\tdeviceid:"<< s.deviceid;
	src<<std::endl;	src <<"\t\troleid:"<< s.roleid;
	src<<std::endl;	src <<"\t\treq_id:"<< s.req_id;
	src<<std::endl;	src <<"\t\trole_info:"<< s.role_info;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::pay_log& s)
{
	src <<"\t\tdt:"<< s.dt;
	src<<std::endl;	src <<"\t\taction:"<< s.action;
	src<<std::endl;	src <<"\t\tgame:"<< s.game;
	src<<std::endl;	src <<"\t\tuid:"<< s.uid;
	src<<std::endl;	src <<"\t\tUser_ip:"<< s.User_ip;
	src<<std::endl;	src <<"\t\tdeviceid:"<< s.deviceid;
	src<<std::endl;	src <<"\t\tsdkv:"<< s.sdkv;
	src<<std::endl;	src <<"\t\tPlatform:"<< s.Platform;
	src<<std::endl;	src <<"\t\tua:"<< s.ua;
	src<<std::endl;	src <<"\t\tcarrier:"<< s.carrier;
	src<<std::endl;	src <<"\t\tMac_wifi:"<< s.Mac_wifi;
	src<<std::endl;	src <<"\t\tMac_3g:"<< s.Mac_3g;
	src<<std::endl;	src <<"\t\tNet_status:"<< s.Net_status;
	src<<std::endl;	src <<"\t\troleid:"<< s.roleid;
	src<<std::endl;	src <<"\t\tserver:"<< s.server;
	src<<std::endl;	src <<"\t\tcid:"<< s.cid;
	src<<std::endl;	src <<"\t\tsdk_orderid:"<< s.sdk_orderid;
	src<<std::endl;	src <<"\t\tcp_orderid:"<< s.cp_orderid;
	src<<std::endl;	src <<"\t\torder_cid:"<< s.order_cid;
	src<<std::endl;	src <<"\t\tpay_type:"<< s.pay_type;
	src<<std::endl;	src <<"\t\torder_status:"<< s.order_status;
	src<<std::endl;	src <<"\t\tmoney:"<< s.money;
	src<<std::endl;	src <<"\t\tgood_id:"<< s.good_id;
	src<<std::endl;	src <<"\t\tgood_num:"<< s.good_num;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::player_action_log& s)
{
	src <<"\t\tdt:"<< s.dt;
	src<<std::endl;	src <<"\t\taction:"<< s.action;
	src<<std::endl;	src <<"\t\tgame:"<< s.game;
	src<<std::endl;	src <<"\t\tcid:"<< s.cid;
	src<<std::endl;	src <<"\t\tsdkv:"<< s.sdkv;
	src<<std::endl;	src <<"\t\tuid:"<< s.uid;
	src<<std::endl;	src <<"\t\troleid:"<< s.roleid;
	src<<std::endl;	src <<"\t\tdeviceid:"<< s.deviceid;
	src<<std::endl;	src <<"\t\tserver:"<< s.server;
	src<<std::endl;	src <<"\t\tPlatform:"<< s.Platform;
	src<<std::endl;	src <<"\t\tua:"<< s.ua;
	src<<std::endl;	src <<"\t\tcarrier:"<< s.carrier;
	src<<std::endl;	src <<"\t\tMac_wifi:"<< s.Mac_wifi;
	src<<std::endl;	src <<"\t\tMac_3g:"<< s.Mac_3g;
	src<<std::endl;	src <<"\t\tNet_status:"<< s.Net_status;
	src<<std::endl;	src <<"\t\taction_name:"<< s.action_name;
	src<<std::endl;	src <<"\t\taction_result:"<< s.action_result;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::player_online_log& s)
{
	src <<"\t\tdt:"<< s.dt;
	src<<std::endl;	src <<"\t\taction:"<< s.action;
	src<<std::endl;	src <<"\t\tgame:"<< s.game;
	src<<std::endl;	src <<"\t\tuid:"<< s.uid;
	src<<std::endl;	src <<"\t\troleid:"<< s.roleid;
	src<<std::endl;	src <<"\t\tserver:"<< s.server;
	src<<std::endl;	src <<"\t\tcid:"<< s.cid;
	src<<std::endl;	src <<"\t\tdeviceid:"<< s.deviceid;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMagicEffect& s)
{
	src <<"\t\tcity_name:"<< s.city_name;
	src<<std::endl;	src <<"\t\teffect_value:"<< s.effect_value;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SChapterTaskInfo& s)
{
	src <<"\t\tindex:"<< s.index;
	src<<std::endl;	src <<"\t\ttype:"<< s.type;
	src<<std::endl;	src <<"\t\tid:"<< s.id;
	src<<std::endl;	src <<"\t\tvalue:"<< s.value;
	src<<std::endl;	src <<"\t\tstate:"<< s.state;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSChapterTaskInfo& s)
{
	src<<"VecSChapterTaskInfo "<<"size:" << s.size()<<std::endl;
	Ls::VecSChapterTaskInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SChapterTaskData& s)
{
	src <<"\t\tchapter_id:"<< s.chapter_id;
	src<<std::endl;	src <<"\t\ttask_list:"<< s.task_list;
	src<<std::endl;	src <<"\t\tchapter_state:"<< s.chapter_state;
	src<<std::endl;	src <<"\t\tversion:"<< s.version;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SFightFailed& s)
{
	src <<"\t\tarmy_count:"<< s.army_count;
	src<<std::endl;	src <<"\t\tstart_stamp:"<< s.start_stamp;
	src<<std::endl;	src <<"\t\ttriger_stamp:"<< s.triger_stamp;
	src<<std::endl;	src <<"\t\thurt_value:"<< s.hurt_value;
	src<<std::endl;	src <<"\t\tdead_value:"<< s.dead_value;
	src<<std::endl;	src <<"\t\tdead_army:"<< s.dead_army;
	src<<std::endl;	src <<"\t\tenenmy_name:"<< s.enenmy_name;
	src<<std::endl;	src <<"\t\tunion_tag:"<< s.union_tag;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::MShopItem& s)
{
	src <<"\t\titem_id:"<< s.item_id;
	src<<std::endl;	src <<"\t\told_price:"<< s.old_price;
	src<<std::endl;	src <<"\t\tcur_price:"<< s.cur_price;
	src<<std::endl;	src <<"\t\tprice_type:"<< s.price_type;
	src<<std::endl;	src <<"\t\tprice_level:"<< s.price_level;
	src<<std::endl;	src <<"\t\tstate:"<< s.state;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecMShopItem& s)
{
	src<<"VecMShopItem "<<"size:" << s.size()<<std::endl;
	Ls::VecMShopItem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::MShopData& s)
{
	src <<"\t\texp:"<< s.exp;
	src<<std::endl;	src <<"\t\tflush_time:"<< s.flush_time;
	src<<std::endl;	src <<"\t\thandle_flush:"<< s.handle_flush;
	src<<std::endl;	src <<"\t\tshop_item:"<< s.shop_item;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SFleetTrade& s)
{
	src <<"\t\ttrade_type:"<< s.trade_type;
	src<<std::endl;	src <<"\t\tleft_trade:"<< s.left_trade;
	src<<std::endl;	src <<"\t\tright_trade:"<< s.right_trade;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SAllyEvent& s)
{
	src <<"\t\tevent_id:"<< s.event_id;
	src<<std::endl;	src <<"\t\tevent_index:"<< s.event_index;
	src<<std::endl;	src <<"\t\thero_icon:"<< s.hero_icon;
	src<<std::endl;	src <<"\t\tally_id:"<< s.ally_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSAllyEvent& s)
{
	src<<"VecSAllyEvent "<<"size:" << s.size()<<std::endl;
	Ls::VecSAllyEvent::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SOfflineInfo& s)
{
	src <<"\t\toffline_food:"<< s.offline_food;
	src<<std::endl;	src <<"\t\toffline_wood:"<< s.offline_wood;
	src<<std::endl;	src <<"\t\toffline_stone:"<< s.offline_stone;
	src<<std::endl;	src <<"\t\toffline_iron:"<< s.offline_iron;
	src<<std::endl;	src <<"\t\toffline_silver:"<< s.offline_silver;
	src<<std::endl;	src <<"\t\toffline_build:"<< s.offline_build;
	src<<std::endl;	src <<"\t\tbuild_time:"<< s.build_time;
	src<<std::endl;	src <<"\t\toffline_tech:"<< s.offline_tech;
	src<<std::endl;	src <<"\t\ttech_time:"<< s.tech_time;
	src<<std::endl;	src <<"\t\toffline_army:"<< s.offline_army;
	src<<std::endl;	src <<"\t\tarmy_count:"<< s.army_count;
	src<<std::endl;	src <<"\t\ttrain_time:"<< s.train_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SMillRes& s)
{
	src <<"\t\thour_output:"<< s.hour_output;
	src<<std::endl;	src <<"\t\tlast_time:"<< s.last_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SGambleItem& s)
{
	src <<"\t\tgamble_weight:"<< s.gamble_weight;
	src<<std::endl;	src <<"\t\tshow:"<< s.show;
	src<<std::endl;	src <<"\t\tgamble_item:"<< s.gamble_item;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSGambleItem& s)
{
	src<<"VecSGambleItem "<<"size:" << s.size()<<std::endl;
	Ls::VecSGambleItem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SGambleInfo& s)
{
	src <<"\t\tgamble_level:"<< s.gamble_level;
	src<<std::endl;	src <<"\t\tfree_count:"<< s.free_count;
	src<<std::endl;	src <<"\t\tgamble_item:"<< s.gamble_item;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SCityMillData& s)
{
	src <<"\t\tmill_food:"<< s.mill_food;
	src<<std::endl;	src <<"\t\tmill_wood:"<< s.mill_wood;
	src<<std::endl;	src <<"\t\tmill_stone:"<< s.mill_stone;
	src<<std::endl;	src <<"\t\tmill_iron:"<< s.mill_iron;
	src<<std::endl;	src <<"\t\tmill_silver:"<< s.mill_silver;
	src<<std::endl;	src <<"\t\tmill_item:"<< s.mill_item;
	src<<std::endl;	src <<"\t\tcd_end_time:"<< s.cd_end_time;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SDuokuLogExtend& s)
{
	src <<"\t\tplayer_id:"<< s.player_id;
	src<<std::endl;	src <<"\t\tkingdom_id:"<< s.kingdom_id;
	src<<std::endl;	src <<"\t\tplayer_level:"<< s.player_level;
	src<<std::endl;	src <<"\t\tlast_login_time:"<< s.last_login_time;
	src<<std::endl;	src <<"\t\tevent_type:"<< s.event_type;
	src<<std::endl;	src <<"\t\tevent_num:"<< s.event_num;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SWondulData& s)
{
	src <<"\t\twondul_id:"<< s.wondul_id;
	src<<std::endl;	src <<"\t\ttype_id:"<< s.type_id;
	src<<std::endl;	src <<"\t\tcur_data:"<< s.cur_data;
	src<<std::endl;	src <<"\t\tneed_data:"<< s.need_data;
	src<<std::endl;	src <<"\t\tget_reward:"<< s.get_reward;
	src<<std::endl;	src <<"\t\tlast_update:"<< s.last_update;
	src<<std::endl;	src <<"\t\tflag:"<< s.flag;
	src<<std::endl;	src <<"\t\tstart_flag:"<< s.start_flag;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecSWondulData& s)
{
	src<<"VecSWondulData "<<"size:" << s.size()<<std::endl;
	Ls::VecSWondulData::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SRoleWondulData& s)
{
	src <<"\t\tlast_update:"<< s.last_update;
	src<<std::endl;	src <<"\t\tWondulData:"<< s.WondulData;
	src<<std::endl;	src <<"\t\tfightValue:"<< s.fightValue;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SExchangeBuilding& s)
{
	src <<"\t\tCityID:"<< s.CityID;
	src<<std::endl;	src <<"\t\tlandfrom:"<< s.landfrom;
	src<<std::endl;	src <<"\t\tlandto:"<< s.landto;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SLeagueCount& s)
{
	src <<"\t\tnormal:"<< s.normal;
	src<<std::endl;	src <<"\t\tother:"<< s.other;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::Pvp_Log_ext& s)
{
	src <<"\t\tplayer_id:"<< s.player_id;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::role_show_info& s)
{
	src <<"\t\troleid:"<< s.roleid;
	src<<std::endl;	src <<"\t\tname:"<< s.name;
	src<<std::endl;	src <<"\t\tkingdom:"<< s.kingdom;
	src<<std::endl;	src <<"\t\ticon_id:"<< s.icon_id;
	src<<std::endl;	src <<"\t\tvip_level:"<< s.vip_level;
	src<<std::endl;	src <<"\t\tprivilege_level:"<< s.privilege_level;
	src<<std::endl;	src <<"\t\tleague_name:"<< s.league_name;
	src<<std::endl;	src <<"\t\tleague_tag:"<< s.league_tag;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::efun_auth_result& s)
{
	src <<"\t\tcode:"<< s.code;
	src<<std::endl;	src <<"\t\tmessage:"<< s.message;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SFriend_info& s)
{
	src <<"\t\tfriend_list:"<< s.friend_list;
	src<<std::endl;	src <<"\t\tallow_list:"<< s.allow_list;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SOtherTempData& s)
{
	src <<"\t\tvalue:"<< s.value;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::SResLog& s)
{
	src <<"\t\tfood:"<< s.food;
	src<<std::endl;	src <<"\t\twood:"<< s.wood;
	src<<std::endl;	src <<"\t\tstone:"<< s.stone;
	src<<std::endl;	src <<"\t\tiron:"<< s.iron;
	src<<std::endl;	src <<"\t\tsilver:"<< s.silver;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::CaslteMapObj& s)
{
	src <<"\t\tpos_x:"<< s.pos_x;
	src<<std::endl;	src <<"\t\tpos_y:"<< s.pos_y;
	src<<std::endl;	src <<"\t\ttemplate_id:"<< s.template_id;
	src<<std::endl;	src <<"\t\tobj_type:"<< s.obj_type;
	src<<std::endl;	src <<"\t\tparam1:"<< s.param1;
	src<<std::endl;	src <<"\t\tparam2:"<< s.param2;
	src<<std::endl;
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::VecCaslteMapObj& s)
{
	src<<"VecCaslteMapObj "<<"size:" << s.size()<<std::endl;
	Ls::VecCaslteMapObj::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		src<<"\t\t"<<*it<<std::endl;
	}
	return src;
}


std::ostream& operator<<( std::ostream& src, const Ls::CaslteMapInfo& s)
{
	src <<"\t\tmapObj:"<< s.mapObj;
	src<<std::endl;	src <<"\t\tmatch:"<< s.match;
	src<<std::endl;	src <<"\t\tgridX:"<< s.gridX;
	src<<std::endl;	src <<"\t\tgridY:"<< s.gridY;
	src<<std::endl;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecUInt32& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecUInt32::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecUInt32& s)
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
COutArchive& operator<<( COutArchive& src, const Ls::SetUInt16& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::SetUInt16::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SetUInt16& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		LsUInt16 value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::VecString& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecString::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecString& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		std::string value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::LoginTesting& s)
{
	src >> s.result;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::LoginTesting& s)
{
	src << s.result;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::role_base_info& s)
{
	src >> s.roleid;
	src >> s.accout;
	src >> s.name;
	src >> s.kingdom;
	src >> s.icon_id;
	src >> s.open_id;
	src >> s.platform;
	src >> s.session_key;
	src >> s.nation;
	src >> s.allrole;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::role_base_info& s)
{
	src << s.roleid;
	src << s.accout;
	src << s.name;
	src << s.kingdom;
	src << s.icon_id;
	src << s.open_id;
	src << s.platform;
	src << s.session_key;
	src << s.nation;
	src << s.allrole;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::LilithClientInfo& s)
{
	src >> s.version;
	src >> s.game_id;
	src >> s.pack_name;
	src >> s.channel_id;
	src >> s.idfa;
	src >> s.android_id;
	src >> s.google_aid;
	src >> s.os_type;
	src >> s.os_version;
	src >> s.app_version;
	src >> s.device_mode;
	src >> s.open_id;
	src >> s.app_id;
	src >> s.name;
	src >> s.platform;
	src >> s.bindFlag;
	src >> s.language;
	src >> s.uid;
	src >> s.sdkv;
	src >> s.carrier;
	src >> s.mac_wifi;
	src >> s.mac_3g;
	src >> s.net_status;
	src >> s.ua;
	src >> s.cid;
	src >> s.deviceid;
	src >> s.extend;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::LilithClientInfo& s)
{
	src << s.version;
	src << s.game_id;
	src << s.pack_name;
	src << s.channel_id;
	src << s.idfa;
	src << s.android_id;
	src << s.google_aid;
	src << s.os_type;
	src << s.os_version;
	src << s.app_version;
	src << s.device_mode;
	src << s.open_id;
	src << s.app_id;
	src << s.name;
	src << s.platform;
	src << s.bindFlag;
	src << s.language;
	src << s.uid;
	src << s.sdkv;
	src << s.carrier;
	src << s.mac_wifi;
	src << s.mac_3g;
	src << s.net_status;
	src << s.ua;
	src << s.cid;
	src << s.deviceid;
	src << s.extend;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::role_asset_info& s)
{
	src >> s.gold;
	src >> s.vip_level;
	src >> s.vip_exp;
	src >> s.vip_time_remaining;
	src >> s.privilege_level;
	src >> s.privilege_exp;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::role_asset_info& s)
{
	src << s.gold;
	src << s.vip_level;
	src << s.vip_exp;
	src << s.vip_time_remaining;
	src << s.privilege_level;
	src << s.privilege_exp;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::role_strength_info& s)
{
	src >> s.player_power;
	src >> s.army_power;
	src >> s.build_power;
	src >> s.tech_power;
	src >> s.hero_power;
	src >> s.player_level;
	src >> s.magic_power;
	src >> s.equip_power;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::role_strength_info& s)
{
	src << s.player_power;
	src << s.army_power;
	src << s.build_power;
	src << s.tech_power;
	src << s.hero_power;
	src << s.player_level;
	src << s.magic_power;
	src << s.equip_power;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::role_hero_job_info& s)
{
	src >> s.id;
	src >> s.lock;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::role_hero_job_info& s)
{
	src << s.id;
	src << s.lock;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSRoleHeroJobInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSRoleHeroJobInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSRoleHeroJobInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::role_hero_job_info value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::role_all_info& s)
{
	src >> s.roleid;
	src >> s.accout;
	src >> s.name;
	src >> s.icon_id;
	src >> s.kingdom;
	src >> s.kingdom_title;
	src >> s.signature;
	src >> s.newName;
	src >> s.role_type;
	src >> s.version;
	src >> s.open_id;
	src >> s.nation;
	src >> s.icon_endtime;
	src >> s.log_upload;
	src >> s.log_level;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::role_all_info& s)
{
	src << s.roleid;
	src << s.accout;
	src << s.name;
	src << s.icon_id;
	src << s.kingdom;
	src << s.kingdom_title;
	src << s.signature;
	src << s.newName;
	src << s.role_type;
	src << s.version;
	src << s.open_id;
	src << s.nation;
	src << s.icon_endtime;
	src << s.log_upload;
	src << s.log_level;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::role_game_info& s)
{
	src >> s.newbieTaskStatus;
	src >> s.storyStatus;
	src >> s.cur_city;
	src >> s.interior;
	src >> s.military;
	src >> s.first_list;
	src >> s.create_time;
	src >> s.last_login_time;
	src >> s.last_logout_time;
	src >> s.first_login_time;
	src >> s.continue_login_days;
	src >> s.sysMailIndex;
	src >> s.newHero;
	src >> s.award_list;
	src >> s.trigger_list;
	src >> s.client_action;
	src >> s.sign_index;
	src >> s.sign_today;
	src >> s.csign_index;
	src >> s.csign_num;
	src >> s.left_find;
	src >> s.last_find_time;
	src >> s.tribe_attack_times;
	src >> s.forbit_chat;
	src >> s.first_pay_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::role_game_info& s)
{
	src << s.newbieTaskStatus;
	src << s.storyStatus;
	src << s.cur_city;
	src << s.interior;
	src << s.military;
	src << s.first_list;
	src << s.create_time;
	src << s.last_login_time;
	src << s.last_logout_time;
	src << s.first_login_time;
	src << s.continue_login_days;
	src << s.sysMailIndex;
	src << s.newHero;
	src << s.award_list;
	src << s.trigger_list;
	src << s.client_action;
	src << s.sign_index;
	src << s.sign_today;
	src << s.csign_index;
	src << s.csign_num;
	src << s.left_find;
	src << s.last_find_time;
	src << s.tribe_attack_times;
	src << s.forbit_chat;
	src << s.first_pay_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::user_account& s)
{
	src >> s.id;
	src >> s.name;
	src >> s.password;
	src >> s.mobile_id;
	src >> s.login;
	src >> s.platform;
	src >> s.reg_ip;
	src >> s.reg_time;
	src >> s.last_login_ip;
	src >> s.last_login_time;
	src >> s.status;
	src >> s.role_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::user_account& s)
{
	src << s.id;
	src << s.name;
	src << s.password;
	src << s.mobile_id;
	src << s.login;
	src << s.platform;
	src << s.reg_ip;
	src << s.reg_time;
	src << s.last_login_ip;
	src << s.last_login_time;
	src << s.status;
	src << s.role_id;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCityMagicBuffInfo& s)
{
	src >> s.magic_buff_id;
	src >> s.magic_id;
	src >> s.magic_buff_effect;
	src >> s.magic_start_time;
	src >> s.magic_end_time;
	src >> s.from_castle_id;
	src >> s.magic_from_x;
	src >> s.magic_from_y;
	src >> s.target_castle_id;
	src >> s.magic_targert_x;
	src >> s.magic_targert_y;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCityMagicBuffInfo& s)
{
	src << s.magic_buff_id;
	src << s.magic_id;
	src << s.magic_buff_effect;
	src << s.magic_start_time;
	src << s.magic_end_time;
	src << s.from_castle_id;
	src << s.magic_from_x;
	src << s.magic_from_y;
	src << s.target_castle_id;
	src << s.magic_targert_x;
	src << s.magic_targert_y;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SPerpareCardInfo& s)
{
	src >> s.card_id;
	src >> s.card_state;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SPerpareCardInfo& s)
{
	src << s.card_id;
	src << s.card_state;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSPerpareCardInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSPerpareCardInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSPerpareCardInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SPerpareCardInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SResourceDetailInfo& s)
{
	src >> s.res_current_value;
	src >> s.res_hour_output;
	src >> s.res_hour_output_total;
	src >> s.res_second_output;
	src >> s.res_store_max;
	src >> s.res_store_max_total;
	src >> s.res_store_protect;
	src >> s.res_store_protect_total;
	src >> s.lastUpdatetime;
	src >> s.res_state;
	src >> s.attr_type;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SResourceDetailInfo& s)
{
	src << s.res_current_value;
	src << s.res_hour_output;
	src << s.res_hour_output_total;
	src << s.res_second_output;
	src << s.res_store_max;
	src << s.res_store_max_total;
	src << s.res_store_protect;
	src << s.res_store_protect_total;
	src << s.lastUpdatetime;
	src << s.res_state;
	src << s.attr_type;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::role_hero_info& s)
{
	src >> s.hero_power;
	src >> s.hero_hero_job_vec;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::role_hero_info& s)
{
	src << s.hero_power;
	src << s.hero_hero_job_vec;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SFoodIncreaseInfo& s)
{
	src >> s.base_res;
	src >> s.keep_cost;
	src >> s.keep_cost_total;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SFoodIncreaseInfo& s)
{
	src << s.base_res;
	src << s.keep_cost;
	src << s.keep_cost_total;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCityMagicInfo& s)
{
	src >> s.pre_card_list;
	src >> s.buff_info;
	src >> s.res_mana;
	src >> s.magic_level;
	src >> s.pre_end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCityMagicInfo& s)
{
	src << s.pre_card_list;
	src << s.buff_info;
	src << s.res_mana;
	src << s.magic_level;
	src << s.pre_end_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SPopulationIncreaseInfo& s)
{
	src >> s.base_res;
	src >> s.end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SPopulationIncreaseInfo& s)
{
	src << s.base_res;
	src << s.end_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMapObjBase& s)
{
	src >> s.mapObjType;
	src >> s.gridX;
	src >> s.gridY;
	src >> s.kingdom;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMapObjBase& s)
{
	src << s.mapObjType;
	src << s.gridX;
	src << s.gridY;
	src << s.kingdom;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCityBuildingInfo& s)
{
	src >> s.tile_id;
	src >> s.type_id;
	src >> s.building_id;
	src >> s.building_state;
	src >> s.function_id;
	src >> s.league_help;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCityBuildingInfo& s)
{
	src << s.tile_id;
	src << s.type_id;
	src << s.building_id;
	src << s.building_state;
	src << s.function_id;
	src << s.league_help;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSCityBuildingInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSCityBuildingInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSCityBuildingInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SCityBuildingInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::CityBuildInfo& s)
{
	src >> s.op_type;
	src >> s.build_tile;
	src >> s.startTime;
	src >> s.endTime;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::CityBuildInfo& s)
{
	src << s.op_type;
	src << s.build_tile;
	src << s.startTime;
	src << s.endTime;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecCityBuildInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecCityBuildInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecCityBuildInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::CityBuildInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::DbCityBuildInfo& s)
{
	src >> s.vecBuilding;
	src >> s.buildQueue;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::DbCityBuildInfo& s)
{
	src << s.vecBuilding;
	src << s.buildQueue;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCityLockInfo& s)
{
	src >> s.tile_id;
	src >> s.tile_state;
	src >> s.tile_index;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCityLockInfo& s)
{
	src << s.tile_id;
	src << s.tile_state;
	src << s.tile_index;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSCityLockInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSCityLockInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSCityLockInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SCityLockInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::CityUnlockInfo& s)
{
	src >> s.op_type;
	src >> s.build_tile;
	src >> s.tile_index;
	src >> s.startTime;
	src >> s.endTime;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::CityUnlockInfo& s)
{
	src << s.op_type;
	src << s.build_tile;
	src << s.tile_index;
	src << s.startTime;
	src << s.endTime;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::DbCityLockInfo& s)
{
	src >> s.vecLock;
	src >> s.lockQueue;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::DbCityLockInfo& s)
{
	src << s.vecLock;
	src << s.lockQueue;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCityBuildTile& s)
{
	src >> s.building;
	src >> s.tile;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCityBuildTile& s)
{
	src << s.building;
	src << s.tile;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SColorInfo& s)
{
	src >> s.color_type;
	src >> s.color_r;
	src >> s.color_g;
	src >> s.color_b;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SColorInfo& s)
{
	src << s.color_type;
	src << s.color_r;
	src << s.color_g;
	src << s.color_b;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SUnionFlagInfo& s)
{
	src >> s.flag_form;
	src >> s.flag_pattern;
	src >> s.flag_bf_color1;
	src >> s.flag_bf_color2;
	src >> s.flag_icon;
	src >> s.flag_icon_color;
	src >> s.flag_effect;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SUnionFlagInfo& s)
{
	src << s.flag_form;
	src << s.flag_pattern;
	src << s.flag_bf_color1;
	src << s.flag_bf_color2;
	src << s.flag_icon;
	src << s.flag_icon_color;
	src << s.flag_effect;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SApplyJoinInfo& s)
{
	src >> s.apply_roleid;
	src >> s.apply_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SApplyJoinInfo& s)
{
	src << s.apply_roleid;
	src << s.apply_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SUnionHelpInfo& s)
{
	src >> s.help_id;
	src >> s.city_id;
	src >> s.help_type;
	src >> s.pox_index;
	src >> s.config_id;
	src >> s.player_id;
	src >> s.player_name;
	src >> s.rank_level;
	src >> s.help_times;
	src >> s.help_times_max;
	src >> s.hero_name;
	src >> s.hero_level;
	src >> s.hero_face;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SUnionHelpInfo& s)
{
	src << s.help_id;
	src << s.city_id;
	src << s.help_type;
	src << s.pox_index;
	src << s.config_id;
	src << s.player_id;
	src << s.player_name;
	src << s.rank_level;
	src << s.help_times;
	src << s.help_times_max;
	src << s.hero_name;
	src << s.hero_level;
	src << s.hero_face;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SUnionRankInfo& s)
{
	src >> s.rank_level;
	src >> s.rank_name;
	src >> s.is_default;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SUnionRankInfo& s)
{
	src << s.rank_level;
	src << s.rank_name;
	src << s.is_default;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSUnionRankList& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSUnionRankList::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSUnionRankList& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SUnionRankInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::union_data& s)
{
	src >> s.id;
	src >> s.kingdom;
	src >> s.union_name;
	src >> s.union_tag;
	src >> s.union_title;
	src >> s.union_des;
	src >> s.union_create_time;
	src >> s.union_level;
	src >> s.auto_accept;
	src >> s.union_power;
	src >> s.union_leader;
	src >> s.language;
	src >> s.union_flag_info;
	src >> s.union_army_color;
	src >> s.union_rank_list;
	src >> s.city_power;
	src >> s.army_power;
	src >> s.army_count;
	src >> s.defence_time;
	src >> s.defence_result;
	src >> s.join_level;
	src >> s.join_power;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::union_data& s)
{
	src << s.id;
	src << s.kingdom;
	src << s.union_name;
	src << s.union_tag;
	src << s.union_title;
	src << s.union_des;
	src << s.union_create_time;
	src << s.union_level;
	src << s.auto_accept;
	src << s.union_power;
	src << s.union_leader;
	src << s.language;
	src << s.union_flag_info;
	src << s.union_army_color;
	src << s.union_rank_list;
	src << s.city_power;
	src << s.army_power;
	src << s.army_count;
	src << s.defence_time;
	src << s.defence_result;
	src << s.join_level;
	src << s.join_power;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::union_build& s)
{
	src >> s.lb_type;
	src >> s.lb_level;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::union_build& s)
{
	src << s.lb_type;
	src << s.lb_level;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecUnion_build& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecUnion_build::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecUnion_build& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::union_build value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SUnion_Castle& s)
{
	src >> s.uc_state;
	src >> s.gridX;
	src >> s.gridY;
	src >> s.vec_build;
	src >> s.exile_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SUnion_Castle& s)
{
	src << s.uc_state;
	src << s.gridX;
	src << s.gridY;
	src << s.vec_build;
	src << s.exile_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SUnion_Assert& s)
{
	src >> s.u_money;
	src >> s.indenture;
	src >> s.manuscript;
	src >> s.gift_level;
	src >> s.gift_point;
	src >> s.zone_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SUnion_Assert& s)
{
	src << s.u_money;
	src << s.indenture;
	src << s.manuscript;
	src << s.gift_level;
	src << s.gift_point;
	src << s.zone_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDonationData& s)
{
	src >> s.donate_food;
	src >> s.donate_wood;
	src >> s.donate_stone;
	src >> s.donate_iron;
	src >> s.donate_gold;
	src >> s.food_pice;
	src >> s.wood_pice;
	src >> s.stone_pice;
	src >> s.iron_pice;
	src >> s.food_pice_trend;
	src >> s.wood_pice_trend;
	src >> s.stone_pice_trend;
	src >> s.iron_pice_trend;
	src >> s.trend_count;
	src >> s.fresh_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDonationData& s)
{
	src << s.donate_food;
	src << s.donate_wood;
	src << s.donate_stone;
	src << s.donate_iron;
	src << s.donate_gold;
	src << s.food_pice;
	src << s.wood_pice;
	src << s.stone_pice;
	src << s.iron_pice;
	src << s.food_pice_trend;
	src << s.wood_pice_trend;
	src << s.stone_pice_trend;
	src << s.iron_pice_trend;
	src << s.trend_count;
	src << s.fresh_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDonateResource& s)
{
	src >> s.donate_food;
	src >> s.donate_wood;
	src >> s.donate_stone;
	src >> s.donate_iron;
	src >> s.donate_silver;
	src >> s.donate_indenture;
	src >> s.donate_manuscript;
	src >> s.donate_spice;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDonateResource& s)
{
	src << s.donate_food;
	src << s.donate_wood;
	src << s.donate_stone;
	src << s.donate_iron;
	src << s.donate_silver;
	src << s.donate_indenture;
	src << s.donate_manuscript;
	src << s.donate_spice;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDailyDonation& s)
{
	src >> s.union_money;
	src >> s.union_silver;
	src >> s.union_indenture;
	src >> s.union_manuscript;
	src >> s.union_spice;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDailyDonation& s)
{
	src << s.union_money;
	src << s.union_silver;
	src << s.union_indenture;
	src << s.union_manuscript;
	src << s.union_spice;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SUnionDonationInfo& s)
{
	src >> s.daily_donate;
	src >> s.out_info;
	src >> s.price_res;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SUnionDonationInfo& s)
{
	src << s.daily_donate;
	src << s.out_info;
	src << s.price_res;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SUnionMemberInfo& s)
{
	src >> s.union_id;
	src >> s.member_id;
	src >> s.rank_level;
	src >> s.union_exploit;
	src >> s.union_contribute;
	src >> s.day_contribute;
	src >> s.week_contribute;
	src >> s.week_max_con;
	src >> s.help_con;
	src >> s.day_time_help;
	src >> s.day_card_help;
	src >> s.task_con;
	src >> s.item_con;
	src >> s.gold_con;
	src >> s.res_con;
	src >> s.donate_gold;
	src >> s.donate_res;
	src >> s.first_join;
	src >> s.invited_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SUnionMemberInfo& s)
{
	src << s.union_id;
	src << s.member_id;
	src << s.rank_level;
	src << s.union_exploit;
	src << s.union_contribute;
	src << s.day_contribute;
	src << s.week_contribute;
	src << s.week_max_con;
	src << s.help_con;
	src << s.day_time_help;
	src << s.day_card_help;
	src << s.task_con;
	src << s.item_con;
	src << s.gold_con;
	src << s.res_con;
	src << s.donate_gold;
	src << s.donate_res;
	src << s.first_join;
	src << s.invited_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SLeagueInfo& s)
{
	src >> s.league_info;
	src >> s.member_list;
	src >> s.block_list;
	src >> s.invit_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueInfo& s)
{
	src << s.league_info;
	src << s.member_list;
	src << s.block_list;
	src << s.invit_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SUnionTech& s)
{
	src >> s.tech_id;
	src >> s.type;
	src >> s.level;
	src >> s.tech_point;
	src >> s.tech_status;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SUnionTech& s)
{
	src << s.tech_id;
	src << s.type;
	src << s.level;
	src << s.tech_point;
	src << s.tech_status;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSUnionTech& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSUnionTech::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSUnionTech& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SUnionTech value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SSystemTech& s)
{
	src >> s.tech_id;
	src >> s.reward_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SSystemTech& s)
{
	src << s.tech_id;
	src << s.reward_id;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSSystemTech& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSSystemTech::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSSystemTech& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SSystemTech value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SUnionTechInfo& s)
{
	src >> s.tech_list;
	src >> s.sys_tech;
	src >> s.donate_tech;
	src >> s.target_tech;
	src >> s.fresh_num;
	src >> s.set_num;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SUnionTechInfo& s)
{
	src << s.tech_list;
	src << s.sys_tech;
	src << s.donate_tech;
	src << s.target_tech;
	src << s.fresh_num;
	src << s.set_num;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SArmyInfo& s)
{
	src >> s.armys_id;
	src >> s.armys_quantity;
	src >> s.normal;
	src >> s.out;
	src >> s.hurt;
	src >> s.treat;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SArmyInfo& s)
{
	src << s.armys_id;
	src << s.armys_quantity;
	src << s.normal;
	src << s.out;
	src << s.hurt;
	src << s.treat;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSArmyInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSArmyInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSArmyInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SArmyInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SArmyBulid& s)
{
	src >> s.armys_id;
	src >> s.armys_quantity;
	src >> s.startTime;
	src >> s.endTime;
	src >> s.build_tile;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SArmyBulid& s)
{
	src << s.armys_id;
	src << s.armys_quantity;
	src << s.startTime;
	src << s.endTime;
	src << s.build_tile;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCityArmyInfo& s)
{
	src >> s.army;
	src >> s.armyBulid;
	src >> s.maxScale;
	src >> s.maxCapacity;
	src >> s.maxTribe;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCityArmyInfo& s)
{
	src << s.army;
	src << s.armyBulid;
	src << s.maxScale;
	src << s.maxCapacity;
	src << s.maxTribe;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCityTrainLimitInfo& s)
{
	src >> s.troops_single_max;
	src >> s.troops_assembled_max;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCityTrainLimitInfo& s)
{
	src << s.troops_single_max;
	src << s.troops_assembled_max;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMarchResInfo& s)
{
	src >> s.res_id;
	src >> s.res_quantity;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMarchResInfo& s)
{
	src << s.res_id;
	src << s.res_quantity;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMarchTroopsInfo& s)
{
	src >> s.player_id;
	src >> s.armys_id;
	src >> s.armys_quantity;
	src >> s.armys_hurt;
	src >> s.armys_dead;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMarchTroopsInfo& s)
{
	src << s.player_id;
	src << s.armys_id;
	src << s.armys_quantity;
	src << s.armys_hurt;
	src << s.armys_dead;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMarchTroopsReport& s)
{
	src >> s.a;
	src >> s.b;
	src >> s.c;
	src >> s.d;
	src >> s.e;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMarchTroopsReport& s)
{
	src << s.a;
	src << s.b;
	src << s.c;
	src << s.d;
	src << s.e;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSMarchTroopsReport& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSMarchTroopsReport::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSMarchTroopsReport& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SMarchTroopsReport value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SMarchSpeed& s)
{
	src >> s.speed;
	src >> s.time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMarchSpeed& s)
{
	src << s.speed;
	src << s.time;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSMarchSpeed& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSMarchSpeed::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSMarchSpeed& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SMarchSpeed value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::VecSMarchResInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSMarchResInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSMarchResInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SMarchResInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::VecSMarchTroopsInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSMarchTroopsInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSMarchTroopsInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SMarchTroopsInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SDropResult& s)
{
	src >> s.ItemType;
	src >> s.Item;
	src >> s.Count;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDropResult& s)
{
	src << s.ItemType;
	src << s.Item;
	src << s.Count;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSDropResult& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSDropResult::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSDropResult& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SDropResult value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SMapObj& s)
{
	src >> s.objType;
	src >> s.objID;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMapObj& s)
{
	src << s.objType;
	src << s.objID;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMarchRelicInfo& s)
{
	src >> s.id;
	src >> s.template_id;
	src >> s.level;
	src >> s.end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMarchRelicInfo& s)
{
	src << s.id;
	src << s.template_id;
	src << s.level;
	src << s.end_time;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSMarchRelicInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSMarchRelicInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSMarchRelicInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SMarchRelicInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SCityMarchProgress& s)
{
	src >> s.march_id;
	src >> s.march_type;
	src >> s.player_id;
	src >> s.city_id;
	src >> s.union_id;
	src >> s.loc_start_k;
	src >> s.loc_start_x;
	src >> s.loc_start_y;
	src >> s.loc_end_k;
	src >> s.loc_end_x;
	src >> s.loc_end_y;
	src >> s.startTime;
	src >> s.endTime;
	src >> s.initEndTime;
	src >> s.hero_id;
	src >> s.target_id;
	src >> s._massID;
	src >> s.stru_troops;
	src >> s.speed;
	src >> s.drop_res;
	src >> s.loss_res;
	src >> s.targetObj;
	src >> s._totalWeight;
	src >> s._resType;
	src >> s._realWeight;
	src >> s._resSpeed;
	src >> s._speed;
	src >> s.carry_point;
	src >> s.drop_relic;
	src >> s.captive_hero;
	src >> s.march_state;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCityMarchProgress& s)
{
	src << s.march_id;
	src << s.march_type;
	src << s.player_id;
	src << s.city_id;
	src << s.union_id;
	src << s.loc_start_k;
	src << s.loc_start_x;
	src << s.loc_start_y;
	src << s.loc_end_k;
	src << s.loc_end_x;
	src << s.loc_end_y;
	src << s.startTime;
	src << s.endTime;
	src << s.initEndTime;
	src << s.hero_id;
	src << s.target_id;
	src << s._massID;
	src << s.stru_troops;
	src << s.speed;
	src << s.drop_res;
	src << s.loss_res;
	src << s.targetObj;
	src << s._totalWeight;
	src << s._resType;
	src << s._realWeight;
	src << s._resSpeed;
	src << s._speed;
	src << s.carry_point;
	src << s.drop_relic;
	src << s.captive_hero;
	src << s.march_state;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSCityMarchProgress& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSCityMarchProgress::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSCityMarchProgress& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SCityMarchProgress value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SMassInfo& s)
{
	src >> s.mass_id;
	src >> s.role_id;
	src >> s.gridX;
	src >> s.gridY;
	src >> s.total_time;
	src >> s.end_time;
	src >> s.mass_state;
	src >> s.arrivedMarch;
	src >> s.firstMarch;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMassInfo& s)
{
	src << s.mass_id;
	src << s.role_id;
	src << s.gridX;
	src << s.gridY;
	src << s.total_time;
	src << s.end_time;
	src << s.mass_state;
	src << s.arrivedMarch;
	src << s.firstMarch;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRoleCityInfo& s)
{
	src >> s.city_id;
	src >> s.inner_id;
	src >> s.city_name;
	src >> s.city_state;
	src >> s.city_level_arrived;
	src >> s.city_level_now;
	src >> s.city_icon;
	src >> s.city_union_help_max_time;
	src >> s.city_trade_num;
	src >> s.city_trade_tax;
	src >> s.roleID;
	src >> s.x;
	src >> s.y;
	src >> s.last_defence;
	src >> s.result;
	src >> s.captive_max_num;
	src >> s.last_march;
	src >> s.practice_army;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRoleCityInfo& s)
{
	src << s.city_id;
	src << s.inner_id;
	src << s.city_name;
	src << s.city_state;
	src << s.city_level_arrived;
	src << s.city_level_now;
	src << s.city_icon;
	src << s.city_union_help_max_time;
	src << s.city_trade_num;
	src << s.city_trade_tax;
	src << s.roleID;
	src << s.x;
	src << s.y;
	src << s.last_defence;
	src << s.result;
	src << s.captive_max_num;
	src << s.last_march;
	src << s.practice_army;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::FightBuff& s)
{
	src >> s.b;
	src >> s.v;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::FightBuff& s)
{
	src << s.b;
	src << s.v;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecFightBuff& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecFightBuff::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecFightBuff& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::FightBuff value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SFightInfo& s)
{
	src >> s.target_kingid;
	src >> s.target_pox_x;
	src >> s.target_pox_y;
	src >> s.battletype;
	src >> s.winner_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SFightInfo& s)
{
	src << s.target_kingid;
	src << s.target_pox_x;
	src << s.target_pox_y;
	src << s.battletype;
	src << s.winner_id;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::PlayerInfo& s)
{
	src >> s.id;
	src >> s.name;
	src >> s.get_material;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::PlayerInfo& s)
{
	src << s.id;
	src << s.name;
	src << s.get_material;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecPlayerInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecPlayerInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecPlayerInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::PlayerInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SCaptiveReport& s)
{
	src >> s.hero_id;
	src >> s.hero_icon;
	src >> s.hero_name;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCaptiveReport& s)
{
	src << s.hero_id;
	src << s.hero_icon;
	src << s.hero_name;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SFightMarchInfo& s)
{
	src >> s.user_id;
	src >> s.icon_id;
	src >> s.isMass;
	src >> s.member_list;
	src >> s.league_id;
	src >> s.leagueTag;
	src >> s.user_name;
	src >> s.castle_name;
	src >> s.from_k;
	src >> s.from_x;
	src >> s.from_y;
	src >> s.before_attack;
	src >> s.after_attack;
	src >> s.troopsTotal;
	src >> s.armyDead;
	src >> s.armyWounded;
	src >> s.armyAlive;
	src >> s.trapDel;
	src >> s.hero_name;
	src >> s.hero_exp;
	src >> s.tribeLost;
	src >> s.Rpeople;
	src >> s.Lpeople;
	src >> s.culture;
	src >> s.power;
	src >> s.boom;
	src >> s.get_material;
	src >> s.get_relic;
	src >> s.herobufflist;
	src >> s.fightbufflist;
	src >> s.magiclist;
	src >> s.captive_hero;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SFightMarchInfo& s)
{
	src << s.user_id;
	src << s.icon_id;
	src << s.isMass;
	src << s.member_list;
	src << s.league_id;
	src << s.leagueTag;
	src << s.user_name;
	src << s.castle_name;
	src << s.from_k;
	src << s.from_x;
	src << s.from_y;
	src << s.before_attack;
	src << s.after_attack;
	src << s.troopsTotal;
	src << s.armyDead;
	src << s.armyWounded;
	src << s.armyAlive;
	src << s.trapDel;
	src << s.hero_name;
	src << s.hero_exp;
	src << s.tribeLost;
	src << s.Rpeople;
	src << s.Lpeople;
	src << s.culture;
	src << s.power;
	src << s.boom;
	src << s.get_material;
	src << s.get_relic;
	src << s.herobufflist;
	src << s.fightbufflist;
	src << s.magiclist;
	src << s.captive_hero;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SFightReport& s)
{
	src >> s.info;
	src >> s.attack;
	src >> s.defnece;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SFightReport& s)
{
	src << s.info;
	src << s.attack;
	src << s.defnece;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDropItem& s)
{
	src >> s.ItemType;
	src >> s.ItemID;
	src >> s.ItemCount;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDropItem& s)
{
	src << s.ItemType;
	src << s.ItemID;
	src << s.ItemCount;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSDropItem& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSDropItem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSDropItem& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SDropItem value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SPopulationRes& s)
{
	src >> s.cur_population;
	src >> s.max_population;
	src >> s.hour_output;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SPopulationRes& s)
{
	src << s.cur_population;
	src << s.max_population;
	src << s.hour_output;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SEquip& s)
{
	src >> s.ins_id;
	src >> s.item_id;
	src >> s.city;
	src >> s.hero;
	src >> s.pos;
	src >> s.quality;
	src >> s.role_item_ins_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SEquip& s)
{
	src << s.ins_id;
	src << s.item_id;
	src << s.city;
	src << s.hero;
	src << s.pos;
	src << s.quality;
	src << s.role_item_ins_id;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::STechnologyInfo& s)
{
	src >> s.tech_position;
	src >> s.tech_id;
	src >> s.tech_level;
	src >> s.develop_city_id;
	src >> s.develop_state;
	src >> s.startTime;
	src >> s.endTime;
	src >> s.league_help;
	src >> s.add_speed;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::STechnologyInfo& s)
{
	src << s.tech_position;
	src << s.tech_id;
	src << s.tech_level;
	src << s.develop_city_id;
	src << s.develop_state;
	src << s.startTime;
	src << s.endTime;
	src << s.league_help;
	src << s.add_speed;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecTechnologyInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecTechnologyInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecTechnologyInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::STechnologyInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SResourceInfo& s)
{
	src >> s.res_current_value;
	src >> s.res_hour_output;
	src >> s.res_store_max;
	src >> s.res_store_protect;
	src >> s.res_keep_cost;
	src >> s.last_update;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SResourceInfo& s)
{
	src << s.res_current_value;
	src << s.res_hour_output;
	src << s.res_store_max;
	src << s.res_store_protect;
	src << s.res_keep_cost;
	src << s.last_update;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SHurtArmyInfo& s)
{
	src >> s.army_id;
	src >> s.army_count;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SHurtArmyInfo& s)
{
	src << s.army_id;
	src << s.army_count;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecHurtArmy& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecHurtArmy::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecHurtArmy& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SHurtArmyInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::STreatArmyInfo& s)
{
	src >> s.pos_index;
	src >> s.hurt_army_list;
	src >> s.start_time;
	src >> s.end_time;
	src >> s.ishelped;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::STreatArmyInfo& s)
{
	src << s.pos_index;
	src << s.hurt_army_list;
	src << s.start_time;
	src << s.end_time;
	src << s.ishelped;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::STreatInfo& s)
{
	src >> s.treat_army_info;
	src >> s.hospital_capacity;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::STreatInfo& s)
{
	src << s.treat_army_info;
	src << s.hospital_capacity;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SItemBuffInfo& s)
{
	src >> s.buff_id;
	src >> s.start_time;
	src >> s.end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SItemBuffInfo& s)
{
	src << s.buff_id;
	src << s.start_time;
	src << s.end_time;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecItemBuff& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecItemBuff::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecItemBuff& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SItemBuffInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::EnemyLeagueInfo& s)
{
	src >> s.league_id;
	src >> s.protocol_state;
	src >> s.startTime;
	src >> s.protocol_content;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::EnemyLeagueInfo& s)
{
	src << s.league_id;
	src << s.protocol_state;
	src << s.startTime;
	src << s.protocol_content;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecEnemyLeagueInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecEnemyLeagueInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecEnemyLeagueInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::EnemyLeagueInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SLoseInfo& s)
{
	src >> s.isLosing;
	src >> s.endTime;
	src >> s.tag;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLoseInfo& s)
{
	src << s.isLosing;
	src << s.endTime;
	src << s.tag;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SLeagueRecord& s)
{
	src >> s.enemy_league_list;
	src >> s.friend_league_list;
	src >> s.lose_info;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueRecord& s)
{
	src << s.enemy_league_list;
	src << s.friend_league_list;
	src << s.lose_info;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SLeagueHistoryWar& s)
{
	src >> s.league_name;
	src >> s.league_tag;
	src >> s.league_level;
	src >> s.league_power;
	src >> s.league_lanaguage;
	src >> s.result;
	src >> s.league_flag;
	src >> s.end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueHistoryWar& s)
{
	src << s.league_name;
	src << s.league_tag;
	src << s.league_level;
	src << s.league_power;
	src << s.league_lanaguage;
	src << s.result;
	src << s.league_flag;
	src << s.end_time;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::WarInfoList& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::WarInfoList::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::WarInfoList& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SLeagueHistoryWar value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::role_mail& s)
{
	src >> s.guid;
	src >> s.stamp;
	src >> s.type;
	src >> s.sub_type;
	src >> s.state;
	src >> s.reciever;
	src >> s.title;
	src >> s.content;
	src >> s.digest;
	src >> s.reward;
	src >> s.get;
	src >> s.reverse;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::role_mail& s)
{
	src << s.guid;
	src << s.stamp;
	src << s.type;
	src << s.sub_type;
	src << s.state;
	src << s.reciever;
	src << s.title;
	src << s.content;
	src << s.digest;
	src << s.reward;
	src << s.get;
	src << s.reverse;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::mail_digest& s)
{
	src >> s.p1;
	src >> s.p2;
	src >> s.p3;
	src >> s.p4;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::mail_digest& s)
{
	src << s.p1;
	src << s.p2;
	src << s.p3;
	src << s.p4;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::role_sys_mail& s)
{
	src >> s.last_sys_mail;
	src >> s.last_king_sys_mail;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::role_sys_mail& s)
{
	src << s.last_sys_mail;
	src << s.last_king_sys_mail;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::first_tip_mail& s)
{
	src >> s.tip;
	src >> s.mana;
	src >> s.dropList;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::first_tip_mail& s)
{
	src << s.tip;
	src << s.mana;
	src << s.dropList;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::reward_mail& s)
{
	src >> s.rank;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::reward_mail& s)
{
	src << s.rank;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRecruitArmyInfo& s)
{
	src >> s.recruit_army_list;
	src >> s.start_time;
	src >> s.end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRecruitArmyInfo& s)
{
	src << s.recruit_army_list;
	src << s.start_time;
	src << s.end_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRecruitInfo& s)
{
	src >> s.recruit_army_info;
	src >> s.recruit_count;
	src >> s.recruit_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRecruitInfo& s)
{
	src << s.recruit_army_info;
	src << s.recruit_count;
	src << s.recruit_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRaceInfo& s)
{
	src >> s.city_race;
	src >> s.change_race;
	src >> s.start_time;
	src >> s.end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRaceInfo& s)
{
	src << s.city_race;
	src << s.change_race;
	src << s.start_time;
	src << s.end_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCollectReport& s)
{
	src >> s.target_kingid;
	src >> s.target_pox_x;
	src >> s.target_pox_y;
	src >> s.gather_id;
	src >> s.res;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCollectReport& s)
{
	src << s.target_kingid;
	src << s.target_pox_x;
	src << s.target_pox_y;
	src << s.gather_id;
	src << s.res;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SArmyKeepInfo& s)
{
	src >> s.army_id;
	src >> s.army_normal;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SArmyKeepInfo& s)
{
	src << s.army_id;
	src << s.army_normal;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecArmyKeep& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecArmyKeep::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecArmyKeep& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SArmyKeepInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SPosSave& s)
{
	src >> s.id;
	src >> s.kingid;
	src >> s.pos_x;
	src >> s.pos_y;
	src >> s.name;
	src >> s.ctype;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SPosSave& s)
{
	src << s.id;
	src << s.kingid;
	src << s.pos_x;
	src << s.pos_y;
	src << s.name;
	src << s.ctype;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSPosSave& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSPosSave::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSPosSave& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SPosSave value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::STradeReport& s)
{
	src >> s.sender_kingid;
	src >> s.sender_pox_x;
	src >> s.sender_pox_y;
	src >> s.sender_rank;
	src >> s.sender_name;
	src >> s.sender_icon;
	src >> s.sender_id;
	src >> s.target_pox_x;
	src >> s.target_pox_y;
	src >> s.target_name;
	src >> s.target_rank;
	src >> s.target_icon;
	src >> s.target_id;
	src >> s.res;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::STradeReport& s)
{
	src << s.sender_kingid;
	src << s.sender_pox_x;
	src << s.sender_pox_y;
	src << s.sender_rank;
	src << s.sender_name;
	src << s.sender_icon;
	src << s.sender_id;
	src << s.target_pox_x;
	src << s.target_pox_y;
	src << s.target_name;
	src << s.target_rank;
	src << s.target_icon;
	src << s.target_id;
	src << s.res;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SBossReport& s)
{
	src >> s.target_kingid;
	src >> s.target_pox_x;
	src >> s.target_pox_y;
	src >> s.face_id;
	src >> s.hero_name;
	src >> s.hero_exp;
	src >> s.monster_id;
	src >> s.monster_left_hp;
	src >> s.monster_lost_hp;
	src >> s.get_material;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SBossReport& s)
{
	src << s.target_kingid;
	src << s.target_pox_x;
	src << s.target_pox_y;
	src << s.face_id;
	src << s.hero_name;
	src << s.hero_exp;
	src << s.monster_id;
	src << s.monster_left_hp;
	src << s.monster_lost_hp;
	src << s.get_material;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::Spy_Struct& s)
{
	src >> s.value;
	src >> s.isValueFuzzy;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::Spy_Struct& s)
{
	src << s.value;
	src << s.isValueFuzzy;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::Spy_Struct_Army& s)
{
	src >> s.a;
	src >> s.b;
	src >> s.c;
	src >> s.d;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::Spy_Struct_Army& s)
{
	src << s.a;
	src << s.b;
	src << s.c;
	src << s.d;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSSpyArmy& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSSpyArmy::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSSpyArmy& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::Spy_Struct_Army value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::Spy_Struct_Buff& s)
{
	src >> s.b;
	src >> s.v;
	src >> s.i;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::Spy_Struct_Buff& s)
{
	src << s.b;
	src << s.v;
	src << s.i;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSSpyBuff& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSSpyBuff::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSSpyBuff& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::Spy_Struct_Buff value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SSpyReportFight& s)
{
	src >> s.armyTotal;
	src >> s.armyInfo;
	src >> s.buffInfo;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SSpyReportFight& s)
{
	src << s.armyTotal;
	src << s.armyInfo;
	src << s.buffInfo;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::Spy_CastleInfo& s)
{
	src >> s.playerName;
	src >> s.castleName;
	src >> s.iconID;
	src >> s.leagueFlag;
	src >> s.kingdomID;
	src >> s.posX;
	src >> s.posY;
	src >> s.magicPower;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::Spy_CastleInfo& s)
{
	src << s.playerName;
	src << s.castleName;
	src << s.iconID;
	src << s.leagueFlag;
	src << s.kingdomID;
	src << s.posX;
	src << s.posY;
	src << s.magicPower;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::Spy_ResourceInfo& s)
{
	src >> s.food;
	src >> s.wood;
	src >> s.stone;
	src >> s.iron;
	src >> s.silver;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::Spy_ResourceInfo& s)
{
	src << s.food;
	src << s.wood;
	src << s.stone;
	src << s.iron;
	src << s.silver;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::Spy_ArmyInfo& s)
{
	src >> s.supportTotal;
	src >> s.supportInfo;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::Spy_ArmyInfo& s)
{
	src << s.supportTotal;
	src << s.supportInfo;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::Spy_TrapInfo& s)
{
	src >> s.trapTotal;
	src >> s.trapInfo;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::Spy_TrapInfo& s)
{
	src << s.trapTotal;
	src << s.trapInfo;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SSpyReport& s)
{
	src >> s.notify_type;
	src >> s.castle_info;
	src >> s.resource_info;
	src >> s.support_info;
	src >> s.trap_info;
	src >> s.fight_info;
	src >> s.spy_tip;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SSpyReport& s)
{
	src << s.notify_type;
	src << s.castle_info;
	src << s.resource_info;
	src << s.support_info;
	src << s.trap_info;
	src << s.fight_info;
	src << s.spy_tip;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SSpyReportArmy& s)
{
	src >> s.notify_type;
	src >> s.march_type;
	src >> s.castle_info;
	src >> s.fight_info;
	src >> s.spy_tip;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SSpyReportArmy& s)
{
	src << s.notify_type;
	src << s.march_type;
	src << s.castle_info;
	src << s.fight_info;
	src << s.spy_tip;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SSpyBeReported& s)
{
	src >> s.notify_type;
	src >> s.playerName;
	src >> s.iconID;
	src >> s.leagueFlag;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SSpyBeReported& s)
{
	src << s.notify_type;
	src << s.playerName;
	src << s.iconID;
	src << s.leagueFlag;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SLeagueEventNotify& s)
{
	src >> s.league_name;
	src >> s.member_name;
	src >> s.member_name2;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueEventNotify& s)
{
	src << s.league_name;
	src << s.member_name;
	src << s.member_name2;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDeclareWarReport& s)
{
	src >> s.d_r_n;
	src >> s.d_l_n;
	src >> s.b_l_n;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDeclareWarReport& s)
{
	src << s.d_r_n;
	src << s.d_l_n;
	src << s.b_l_n;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SFightWarReport& s)
{
	src >> s.d_r_n;
	src >> s.d_l_n;
	src >> s.d_l_t;
	src >> s.b_l_t;
	src >> s.b_l_n;
	src >> s.b_r_n;
	src >> s.K;
	src >> s.X;
	src >> s.Y;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SFightWarReport& s)
{
	src << s.d_r_n;
	src << s.d_l_n;
	src << s.d_l_t;
	src << s.b_l_t;
	src << s.b_l_n;
	src << s.b_r_n;
	src << s.K;
	src << s.X;
	src << s.Y;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMakePeaceReport& s)
{
	src >> s.a;
	src >> s.a_l_n;
	src >> s.r_r_n;
	src >> s.r_l_n;
	src >> s.r_l_t;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMakePeaceReport& s)
{
	src << s.a;
	src << s.a_l_n;
	src << s.r_r_n;
	src << s.r_l_n;
	src << s.r_l_t;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SLeagueResultReport& s)
{
	src >> s.w_t;
	src >> s.w_n;
	src >> s.w_r;
	src >> s.l_t;
	src >> s.l_n;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueResultReport& s)
{
	src << s.w_t;
	src << s.w_n;
	src << s.w_r;
	src << s.l_t;
	src << s.l_n;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRoleInfoReserve& s)
{
	src >> s.magic_dust;
	src >> s.pay_str;
	src >> s.platform;
	src >> s.log_url;
	src >> s.log_upload;
	src >> s.log_level;
	src >> s.left_find;
	src >> s.HotURL;
	src >> s.open_id;
	src >> s.race_list;
	src >> s.first_pay_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRoleInfoReserve& s)
{
	src << s.magic_dust;
	src << s.pay_str;
	src << s.platform;
	src << s.log_url;
	src << s.log_upload;
	src << s.log_level;
	src << s.left_find;
	src << s.HotURL;
	src << s.open_id;
	src << s.race_list;
	src << s.first_pay_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::DB_Fd& s)
{
	src >> s.fd;
	src >> s.data;
	src >> s.dataType;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::DB_Fd& s)
{
	src << s.fd;
	src << s.data;
	src << s.dataType;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecDB_Fd& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecDB_Fd::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecDB_Fd& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::DB_Fd value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::DB_Player_Info& s)
{
	src >> s.roleid;
	src >> s.vecData;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::DB_Player_Info& s)
{
	src << s.roleid;
	src << s.vecData;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::DB_Create_Info& s)
{
	src >> s.table;
	src >> s.where;
	src >> s.vecData;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::DB_Create_Info& s)
{
	src << s.table;
	src << s.where;
	src << s.vecData;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SOneCipher& s)
{
	src >> s.idCipher;
	src >> s.state;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SOneCipher& s)
{
	src << s.idCipher;
	src << s.state;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSOneCipher& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSOneCipher::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSOneCipher& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SOneCipher value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::STowerCard& s)
{
	src >> s._idCard;
	src >> s._cipher;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::STowerCard& s)
{
	src << s._idCard;
	src << s._cipher;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDailyTask& s)
{
	src >> s._taskID;
	src >> s._curCipherID;
	src >> s._taskTime;
	src >> s._dayliTaskState;
	src >> s._reward;
	src >> s.heroID;
	src >> s._spe_reward;
	src >> s.getSpeReward;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDailyTask& s)
{
	src << s._taskID;
	src << s._curCipherID;
	src << s._taskTime;
	src << s._dayliTaskState;
	src << s._reward;
	src << s.heroID;
	src << s._spe_reward;
	src << s.getSpeReward;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSDailyTask& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSDailyTask::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSDailyTask& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SDailyTask value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SCurDailyTask& s)
{
	src >> s.taskID;
	src >> s.endTime;
	src >> s.heroID;
	src >> s.startTime;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCurDailyTask& s)
{
	src << s.taskID;
	src << s.endTime;
	src << s.heroID;
	src << s.startTime;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SPlayerDailyTask& s)
{
	src >> s.vecTask;
	src >> s.curTask;
	src >> s.tarot;
	src >> s.lastFlush;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SPlayerDailyTask& s)
{
	src << s.vecTask;
	src << s.curTask;
	src << s.tarot;
	src << s.lastFlush;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::STaskData& s)
{
	src >> s.itemID;
	src >> s.count;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::STaskData& s)
{
	src << s.itemID;
	src << s.count;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSTaskData& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSTaskData::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSTaskData& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::STaskData value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SEmpireTask& s)
{
	src >> s.taskID;
	src >> s.taskSingleData;
	src >> s.taskState;
	src >> s.vecData;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SEmpireTask& s)
{
	src << s.taskID;
	src << s.taskSingleData;
	src << s.taskState;
	src << s.vecData;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSEmpireTask& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSEmpireTask::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSEmpireTask& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SEmpireTask value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::IntKeyValue& s)
{
	src >> s.key;
	src >> s.value;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::IntKeyValue& s)
{
	src << s.key;
	src << s.value;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecIntKeyValue& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecIntKeyValue::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecIntKeyValue& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::IntKeyValue value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SPlayerMagic& s)
{
	src >> s.vecCard;
	src >> s.vecRes;
	src >> s.dust;
	src >> s.newHelp;
	src >> s.helpCard;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SPlayerMagic& s)
{
	src << s.vecCard;
	src << s.vecRes;
	src << s.dust;
	src << s.newHelp;
	src << s.helpCard;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SHeroSkill& s)
{
	src >> s.skillID;
	src >> s.skillPoint;
	src >> s.isEffect;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SHeroSkill& s)
{
	src << s.skillID;
	src << s.skillPoint;
	src << s.isEffect;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SHeroData& s)
{
	src >> s._heroID;
	src >> s._heroName;
	src >> s._heroFace;
	src >> s._heroCity;
	src >> s._sex;
	src >> s._heroLevel;
	src >> s._heroExp;
	src >> s._heroSkillPoint;
	src >> s._heroSkill1;
	src >> s._heroSkill2;
	src >> s._heroSkill3;
	src >> s._heroPower;
	src >> s._heroGrade;
	src >> s._heroState;
	src >> s._heroPos;
	src >> s._heroJob;
	src >> s._captiveCity;
	src >> s._marchID;
	src >> s._releaseTime;
	src >> s.sendhelp;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SHeroData& s)
{
	src << s._heroID;
	src << s._heroName;
	src << s._heroFace;
	src << s._heroCity;
	src << s._sex;
	src << s._heroLevel;
	src << s._heroExp;
	src << s._heroSkillPoint;
	src << s._heroSkill1;
	src << s._heroSkill2;
	src << s._heroSkill3;
	src << s._heroPower;
	src << s._heroGrade;
	src << s._heroState;
	src << s._heroPos;
	src << s._heroJob;
	src << s._captiveCity;
	src << s._marchID;
	src << s._releaseTime;
	src << s.sendhelp;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSHeroData& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSHeroData::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSHeroData& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SHeroData value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SUIntValue& s)
{
	src >> s.val;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SUIntValue& s)
{
	src << s.val;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSUIntValue& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSUIntValue::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSUIntValue& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SUIntValue value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SAllHeroData& s)
{
	src >> s.vecHero;
	src >> s.otherHero;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SAllHeroData& s)
{
	src << s.vecHero;
	src << s.otherHero;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SSystemMailData& s)
{
	src >> s.notify_type;
	src >> s.content;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SSystemMailData& s)
{
	src << s.notify_type;
	src << s.content;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCastleFace& s)
{
	src >> s.cfg_id;
	src >> s.left_time;
	src >> s.end_time;
	src >> s.item_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCastleFace& s)
{
	src << s.cfg_id;
	src << s.left_time;
	src << s.end_time;
	src << s.item_id;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SBigMapCastleInfo& s)
{
	src >> s.last_defence;
	src >> s.result;
	src >> s.power;
	src >> s.loseinfo;
	src >> s.relic_count;
	src >> s.has_6relic;
	src >> s.has_captive;
	src >> s.last_march;
	src >> s.castle_face;
	src >> s.city_race;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SBigMapCastleInfo& s)
{
	src << s.last_defence;
	src << s.result;
	src << s.power;
	src << s.loseinfo;
	src << s.relic_count;
	src << s.has_6relic;
	src << s.has_captive;
	src << s.last_march;
	src << s.castle_face;
	src << s.city_race;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SInnerCastleInfo& s)
{
	src >> s.last_defence;
	src >> s.result;
	src >> s.embassy;
	src >> s.max_tribe;
	src >> s.left_tribe;
	src >> s.max_guard;
	src >> s.left_guard;
	src >> s.max_hurt;
	src >> s.max_aid;
	src >> s.cur_aid;
	src >> s.weright_add;
	src >> s.league_range;
	src >> s.castle_face;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SInnerCastleInfo& s)
{
	src << s.last_defence;
	src << s.result;
	src << s.embassy;
	src << s.max_tribe;
	src << s.left_tribe;
	src << s.max_guard;
	src << s.left_guard;
	src << s.max_hurt;
	src << s.max_aid;
	src << s.cur_aid;
	src << s.weright_add;
	src << s.league_range;
	src << s.castle_face;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SLogInfo& s)
{
	src >> s.role_name;
	src >> s.config_id;
	src >> s.config_num;
	src >> s.log_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLogInfo& s)
{
	src << s.role_name;
	src << s.config_id;
	src << s.config_num;
	src << s.log_time;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSLogInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSLogInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSLogInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SLogInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SLeagueKey& s)
{
	src >> s.key;
	src >> s.league_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueKey& s)
{
	src << s.key;
	src << s.league_id;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SWarRecord& s)
{
	src >> s.war_type;
	src >> s.attacker;
	src >> s.attack_tag;
	src >> s.defender;
	src >> s.defend_tag;
	src >> s.war_result;
	src >> s.war_time;
	src >> s.fight_x;
	src >> s.fight_y;
	src >> s.kingdom_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SWarRecord& s)
{
	src << s.war_type;
	src << s.attacker;
	src << s.attack_tag;
	src << s.defender;
	src << s.defend_tag;
	src << s.war_result;
	src << s.war_time;
	src << s.fight_x;
	src << s.fight_y;
	src << s.kingdom_id;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSWarRecord& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSWarRecord::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSWarRecord& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SWarRecord value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SLeagueInfoReverse& s)
{
	src >> s.u_capital;
	src >> s.max_level;
	src >> s.indenture;
	src >> s.manuscript;
	src >> s.castle_state;
	src >> s.fight_count;
	src >> s.league_local;
	src >> s.boom_data;
	src >> s.last_exile_time;
	src >> s.last_comment;
	src >> s.last_fresh;
	src >> s.last_buy;
	src >> s.city_power;
	src >> s.army_power;
	src >> s.army_count;
	src >> s.loseinfo;
	src >> s.enemyList;
	src >> s.gift_level;
	src >> s.gift_point;
	src >> s.need_level;
	src >> s.need_power;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueInfoReverse& s)
{
	src << s.u_capital;
	src << s.max_level;
	src << s.indenture;
	src << s.manuscript;
	src << s.castle_state;
	src << s.fight_count;
	src << s.league_local;
	src << s.boom_data;
	src << s.last_exile_time;
	src << s.last_comment;
	src << s.last_fresh;
	src << s.last_buy;
	src << s.city_power;
	src << s.army_power;
	src << s.army_count;
	src << s.loseinfo;
	src << s.enemyList;
	src << s.gift_level;
	src << s.gift_point;
	src << s.need_level;
	src << s.need_power;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRuleSystem& s)
{
	src >> s.sys_pos;
	src >> s.sys_id;
	src >> s.sys_level;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRuleSystem& s)
{
	src << s.sys_pos;
	src << s.sys_id;
	src << s.sys_level;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSRuleSystem& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSRuleSystem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSRuleSystem& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SRuleSystem value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SCountrySystem& s)
{
	src >> s.sys_id;
	src >> s.sys_state;
	src >> s.sys_active;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCountrySystem& s)
{
	src << s.sys_id;
	src << s.sys_state;
	src << s.sys_active;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSCountrySystem& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSCountrySystem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSCountrySystem& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SCountrySystem value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SSystemInfo& s)
{
	src >> s.sys_target;
	src >> s.accumulated;
	src >> s.interior_reform;
	src >> s.military_reform;
	src >> s.freedom_list;
	src >> s.reason_list;
	src >> s.honour_list;
	src >> s.interior_list;
	src >> s.military_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SSystemInfo& s)
{
	src << s.sys_target;
	src << s.accumulated;
	src << s.interior_reform;
	src << s.military_reform;
	src << s.freedom_list;
	src << s.reason_list;
	src << s.honour_list;
	src << s.interior_list;
	src << s.military_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCultureInfo& s)
{
	src >> s.cur_value;
	src >> s.hour_output;
	src >> s.output_add;
	src >> s.accumulated_culture;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCultureInfo& s)
{
	src << s.cur_value;
	src << s.hour_output;
	src << s.output_add;
	src << s.accumulated_culture;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SProgressInfoEx& s)
{
	src >> s.config_num;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SProgressInfoEx& s)
{
	src << s.config_num;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMagicBoxInfo& s)
{
	src >> s.cur_num;
	src >> s.endTime;
	src >> s.lastStart;
	src >> s.getTimes;
	src >> s.curBox;
	src >> s.param1;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMagicBoxInfo& s)
{
	src << s.cur_num;
	src << s.endTime;
	src << s.lastStart;
	src << s.getTimes;
	src << s.curBox;
	src << s.param1;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SLegendBoxInfo& s)
{
	src >> s.cur_state;
	src >> s.cur_num;
	src >> s.total_num;
	src >> s.lastTime;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLegendBoxInfo& s)
{
	src << s.cur_state;
	src << s.cur_num;
	src << s.total_num;
	src << s.lastTime;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SOrderRewardInfo& s)
{
	src >> s.order_type;
	src >> s.order_rank;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SOrderRewardInfo& s)
{
	src << s.order_type;
	src << s.order_rank;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SOrderRewardInfoNtf& s)
{
	src >> s.order_rank;
	src >> s.player_name;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SOrderRewardInfoNtf& s)
{
	src << s.order_rank;
	src << s.player_name;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSOrderRewardInfoNtf& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSOrderRewardInfoNtf::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSOrderRewardInfoNtf& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SOrderRewardInfoNtf value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SOrderRewardNtf& s)
{
	src >> s.order_type;
	src >> s.reward_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SOrderRewardNtf& s)
{
	src << s.order_type;
	src << s.reward_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SArmyInfoEx& s)
{
	src >> s.army_type;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SArmyInfoEx& s)
{
	src << s.army_type;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::ROLE& s)
{
	src >> s.role_all_info;
	src >> s.role_strength_info;
	src >> s.role_hero_info;
	src >> s.role_game_info;
	src >> s.collet_pos;
	src >> s.daily_task;
	src >> s.empire_task;
	src >> s.league_info;
	src >> s.technolog_info;
	src >> s.reserve_force;
	src >> s.magic_force;
	src >> s.statitics_info;
	src >> s.league_task;
	src >> s.system_info;
	src >> s.vip_task;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::ROLE& s)
{
	src << s.role_all_info;
	src << s.role_strength_info;
	src << s.role_hero_info;
	src << s.role_game_info;
	src << s.collet_pos;
	src << s.daily_task;
	src << s.empire_task;
	src << s.league_info;
	src << s.technolog_info;
	src << s.reserve_force;
	src << s.magic_force;
	src << s.statitics_info;
	src << s.league_task;
	src << s.system_info;
	src << s.vip_task;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::CASTLE& s)
{
	src >> s.base_info;
	src >> s.build_info;
	src >> s.population;
	src >> s.food_res;
	src >> s.wood_res;
	src >> s.stone_res;
	src >> s.iron_res;
	src >> s.silver_res;
	src >> s.army_info;
	src >> s.trap_info;
	src >> s.treat_info;
	src >> s.reserve_force;
	src >> s.race_info;
	src >> s.magic_info;
	src >> s.hero_info;
	src >> s.technolog_info;
	src >> s.itembuff_info;
	src >> s.culture_info;
	src >> s.repair_info;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::CASTLE& s)
{
	src << s.base_info;
	src << s.build_info;
	src << s.population;
	src << s.food_res;
	src << s.wood_res;
	src << s.stone_res;
	src << s.iron_res;
	src << s.silver_res;
	src << s.army_info;
	src << s.trap_info;
	src << s.treat_info;
	src << s.reserve_force;
	src << s.race_info;
	src << s.magic_info;
	src << s.hero_info;
	src << s.technolog_info;
	src << s.itembuff_info;
	src << s.culture_info;
	src << s.repair_info;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecCastle& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecCastle::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecCastle& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::CASTLE value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::EQUIP& s)
{
	src >> s.base_info;
	src >> s.gem_info;
	src >> s.enchanting;
	src >> s.refine_info;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::EQUIP& s)
{
	src << s.base_info;
	src << s.gem_info;
	src << s.enchanting;
	src << s.refine_info;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecEquip& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecEquip::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecEquip& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::EQUIP value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::AccountData& s)
{
	src >> s.role;
	src >> s.castle_list;
	src >> s.equip_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::AccountData& s)
{
	src << s.role;
	src << s.castle_list;
	src << s.equip_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDonateReport& s)
{
	src >> s.donate_classify;
	src >> s.donate_result;
	src >> s.donate_type;
	src >> s.donate_num;
	src >> s.contribution;
	src >> s.reward_item;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDonateReport& s)
{
	src << s.donate_classify;
	src << s.donate_result;
	src << s.donate_type;
	src << s.donate_num;
	src << s.contribution;
	src << s.reward_item;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SForgeInfo& s)
{
	src >> s.cdEndTime;
	src >> s.equipid;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SForgeInfo& s)
{
	src << s.cdEndTime;
	src << s.equipid;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMagicRecord& s)
{
	src >> s.role_name;
	src >> s.league_tag;
	src >> s.magic_id;
	src >> s.magic_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMagicRecord& s)
{
	src << s.role_name;
	src << s.league_tag;
	src << s.magic_id;
	src << s.magic_time;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSMagicRecord& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSMagicRecord::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSMagicRecord& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SMagicRecord value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SAllianceGiftInfo& s)
{
	src >> s.this_id;
	src >> s.gift_id;
	src >> s.receive_time;
	src >> s.gift_state;
	src >> s.reward_item;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SAllianceGiftInfo& s)
{
	src << s.this_id;
	src << s.gift_id;
	src << s.receive_time;
	src << s.gift_state;
	src << s.reward_item;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSAllianceGiftInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSAllianceGiftInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSAllianceGiftInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SAllianceGiftInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SKeyValue& s)
{
	src >> s.key;
	src >> s.value;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SKeyValue& s)
{
	src << s.key;
	src << s.value;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSKeyValue& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSKeyValue::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSKeyValue& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SKeyValue value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SEnchantAttr& s)
{
	src >> s.key;
	src >> s.value;
	src >> s.rate;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SEnchantAttr& s)
{
	src << s.key;
	src << s.value;
	src << s.rate;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSEnchantAttr& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSEnchantAttr::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSEnchantAttr& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SEnchantAttr value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SEnchGroup& s)
{
	src >> s.groupID;
	src >> s.value;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SEnchGroup& s)
{
	src << s.groupID;
	src << s.value;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSEnchGroup& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSEnchGroup::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSEnchGroup& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SEnchGroup value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SEnchanting& s)
{
	src >> s.attr_group;
	src >> s.attr;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SEnchanting& s)
{
	src << s.attr_group;
	src << s.attr;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SGemEquip& s)
{
	src >> s.pos;
	src >> s.gem_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SGemEquip& s)
{
	src << s.pos;
	src << s.gem_id;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSGemEquip& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSGemEquip::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSGemEquip& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SGemEquip value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SEquipGemInfo& s)
{
	src >> s.max_hole;
	src >> s.gem_info;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SEquipGemInfo& s)
{
	src << s.max_hole;
	src << s.gem_info;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRefineData& s)
{
	src >> s.refine_attr;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRefineData& s)
{
	src << s.refine_attr;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRelicBase& s)
{
	src >> s.id;
	src >> s.template_id;
	src >> s.level;
	src >> s.relic_type;
	src >> s.pos;
	src >> s.state;
	src >> s.end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRelicBase& s)
{
	src << s.id;
	src << s.template_id;
	src << s.level;
	src << s.relic_type;
	src << s.pos;
	src << s.state;
	src << s.end_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRelicInMap& s)
{
	src >> s.x;
	src >> s.y;
	src >> s.left_carry;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRelicInMap& s)
{
	src << s.x;
	src << s.y;
	src << s.left_carry;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRelicInCity& s)
{
	src >> s.city_id;
	src >> s.idx;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRelicInCity& s)
{
	src << s.city_id;
	src << s.idx;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRelicOnTribe& s)
{
	src >> s.level;
	src >> s.tid;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRelicOnTribe& s)
{
	src << s.level;
	src << s.tid;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRelicInfo& s)
{
	src >> s.template_id;
	src >> s.end_time;
	src >> s.posK;
	src >> s.posX;
	src >> s.posY;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRelicInfo& s)
{
	src << s.template_id;
	src << s.end_time;
	src << s.posK;
	src << s.posX;
	src << s.posY;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::MailStrTip& s)
{
	src >> s.tip;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::MailStrTip& s)
{
	src << s.tip;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCarryInfo& s)
{
	src >> s.relic_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCarryInfo& s)
{
	src << s.relic_id;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::Goals& s)
{
	src >> s.id;
	src >> s.type;
	src >> s.finish;
	src >> s.value;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::Goals& s)
{
	src << s.id;
	src << s.type;
	src << s.finish;
	src << s.value;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::Days& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::Days::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::Days& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::Goals value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SevenDaysInfo& s)
{
	src >> s.finish;
	src >> s.day_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SevenDaysInfo& s)
{
	src << s.finish;
	src << s.day_list;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::SevenDays& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::SevenDays::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SevenDays& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SevenDaysInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SSevenDays& s)
{
	src >> s.login_days;
	src >> s.day_info;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SSevenDays& s)
{
	src << s.login_days;
	src << s.day_info;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMonthCardInfo& s)
{
	src >> s.card_id;
	src >> s.end_time;
	src >> s.is_get;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMonthCardInfo& s)
{
	src << s.card_id;
	src << s.end_time;
	src << s.is_get;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSMonthCardInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSMonthCardInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSMonthCardInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SMonthCardInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SRechargeInfo& s)
{
	src >> s.first_pay;
	src >> s.fund_id;
	src >> s.fund_reward;
	src >> s.card_list;
	src >> s.prefer_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRechargeInfo& s)
{
	src << s.first_pay;
	src << s.fund_id;
	src << s.fund_reward;
	src << s.card_list;
	src << s.prefer_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SRoleLimitEventInfo& s)
{
	src >> s.event_id;
	src >> s.score;
	src >> s.time;
	src >> s.stage;
	src >> s.level;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRoleLimitEventInfo& s)
{
	src << s.event_id;
	src << s.score;
	src << s.time;
	src << s.stage;
	src << s.level;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSRoleLimitEventInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSRoleLimitEventInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSRoleLimitEventInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SRoleLimitEventInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SLimitEventData& s)
{
	src >> s.event_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLimitEventData& s)
{
	src << s.event_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::LimitEventInfoMail& s)
{
	src >> s.level;
	src >> s.event_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::LimitEventInfoMail& s)
{
	src << s.level;
	src << s.event_id;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SLeagueCastleInfoEx& s)
{
	src >> s.defence_time;
	src >> s.defence_result;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueCastleInfoEx& s)
{
	src << s.defence_time;
	src << s.defence_result;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SPlayerIconInfo& s)
{
	src >> s.icon_id;
	src >> s.end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SPlayerIconInfo& s)
{
	src << s.icon_id;
	src << s.end_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SHeroInfoEx& s)
{
	src >> s.prison_id;
	src >> s.prison_name;
	src >> s.prison_kingdom;
	src >> s.prison_x;
	src >> s.prison_y;
	src >> s.prison_left_time;
	src >> s.captive_total_time;
	src >> s.captive_left_time;
	src >> s.sendhelp;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SHeroInfoEx& s)
{
	src << s.prison_id;
	src << s.prison_name;
	src << s.prison_kingdom;
	src << s.prison_x;
	src << s.prison_y;
	src << s.prison_left_time;
	src << s.captive_total_time;
	src << s.captive_left_time;
	src << s.sendhelp;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SReleseHeroMail& s)
{
	src >> s.player_name;
	src >> s.hero_name;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SReleseHeroMail& s)
{
	src << s.player_name;
	src << s.hero_name;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SZoneBase& s)
{
	src >> s.z_id;
	src >> s.z_state;
	src >> s.z_type;
	src >> s.z_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SZoneBase& s)
{
	src << s.z_id;
	src << s.z_state;
	src << s.z_type;
	src << s.z_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SZoneArmy& s)
{
	src >> s.army;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SZoneArmy& s)
{
	src << s.army;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SZoneLeague& s)
{
	src >> s.z_leagueID;
	src >> s.z_color;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SZoneLeague& s)
{
	src << s.z_leagueID;
	src << s.z_color;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SZoneBuff& s)
{
	src >> s.buff_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SZoneBuff& s)
{
	src << s.buff_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SZoneCircle& s)
{
	src >> s.id;
	src >> s.time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SZoneCircle& s)
{
	src << s.id;
	src << s.time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SJunmenLoginData& s)
{
	src >> s.unid;
	src >> s.account_id;
	src >> s.token;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SJunmenLoginData& s)
{
	src << s.unid;
	src << s.account_id;
	src << s.token;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SJunmenLoginInfo& s)
{
	src >> s.code;
	src >> s.data;
	src >> s.codeValue;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SJunmenLoginInfo& s)
{
	src << s.code;
	src << s.data;
	src << s.codeValue;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::StartEventData& s)
{
	src >> s.event_id;
	src >> s.prepare_time;
	src >> s.end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::StartEventData& s)
{
	src << s.event_id;
	src << s.prepare_time;
	src << s.end_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SLivenessInfo& s)
{
	src >> s.id;
	src >> s.value;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLivenessInfo& s)
{
	src << s.id;
	src << s.value;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSLivenessInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSLivenessInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSLivenessInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SLivenessInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SLivenessData& s)
{
	src >> s.active_value ;
	src >> s.cumulative_value;
	src >> s.reset_time;
	src >> s.reward_list;
	src >> s.creward_list;
	src >> s.liveness_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLivenessData& s)
{
	src << s.active_value ;
	src << s.cumulative_value;
	src << s.reset_time;
	src << s.reward_list;
	src << s.creward_list;
	src << s.liveness_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::ZoneMapData& s)
{
	src >> s.zone_state;
	src >> s.end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::ZoneMapData& s)
{
	src << s.zone_state;
	src << s.end_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDuokuUserInfo& s)
{
	src >> s.id;
	src >> s.name;
	src >> s.nick;
	src >> s.avator;
	src >> s.sex;
	src >> s.area;
	src >> s.token;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDuokuUserInfo& s)
{
	src << s.id;
	src << s.name;
	src << s.nick;
	src << s.avator;
	src << s.sex;
	src << s.area;
	src << s.token;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDuokuChannelInfo& s)
{
	src >> s.sdkchannel;
	src >> s.serverid;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDuokuChannelInfo& s)
{
	src << s.sdkchannel;
	src << s.serverid;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDuokuLoginInfo& s)
{
	src >> s.code;
	src >> s.userinfo;
	src >> s.channelinfo;
	src >> s.ext;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDuokuLoginInfo& s)
{
	src << s.code;
	src << s.userinfo;
	src << s.channelinfo;
	src << s.ext;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::UnionShopLog& s)
{
	src >> s.buy_time;
	src >> s.name;
	src >> s.item_id;
	src >> s.item_count;
	src >> s.members;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::UnionShopLog& s)
{
	src << s.buy_time;
	src << s.name;
	src << s.item_id;
	src << s.item_count;
	src << s.members;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecUnionShopLog& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecUnionShopLog::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecUnionShopLog& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::UnionShopLog value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::UnionGroupShop& s)
{
	src >> s.end_time;
	src >> s.members;
	src >> s.item_id;
	src >> s.item_count;
	src >> s.quality;
	src >> s.price;
	src >> s.joins;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::UnionGroupShop& s)
{
	src << s.end_time;
	src << s.members;
	src << s.item_id;
	src << s.item_count;
	src << s.quality;
	src << s.price;
	src << s.joins;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecUnionGroupShop& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecUnionGroupShop::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecUnionGroupShop& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::UnionGroupShop value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::UnionShopData& s)
{
	src >> s.flush_time;
	src >> s.ushopGp;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::UnionShopData& s)
{
	src << s.flush_time;
	src << s.ushopGp;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::online_number& s)
{
	src >> s.dt;
	src >> s.action;
	src >> s.game;
	src >> s.ver;
	src >> s.server;
	src >> s.serverip;
	src >> s.num;
	src >> s.max_num;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::online_number& s)
{
	src << s.dt;
	src << s.action;
	src << s.game;
	src << s.ver;
	src << s.server;
	src << s.serverip;
	src << s.num;
	src << s.max_num;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::Register_log& s)
{
	src >> s.dt;
	src >> s.action;
	src >> s.game;
	src >> s.cid;
	src >> s.server;
	src >> s.User_ip;
	src >> s.Deviceid;
	src >> s.Uid;
	src >> s.Platform;
	src >> s.carrier;
	src >> s.ua;
	src >> s.mac_wifi;
	src >> s.Mac_3g;
	src >> s.Net_status;
	src >> s.ver;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::Register_log& s)
{
	src << s.dt;
	src << s.action;
	src << s.game;
	src << s.cid;
	src << s.server;
	src << s.User_ip;
	src << s.Deviceid;
	src << s.Uid;
	src << s.Platform;
	src << s.carrier;
	src << s.ua;
	src << s.mac_wifi;
	src << s.Mac_3g;
	src << s.Net_status;
	src << s.ver;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::First_openlog& s)
{
	src >> s.dt;
	src >> s.action;
	src >> s.game;
	src >> s.cid;
	src >> s.server;
	src >> s.user_ip;
	src >> s.deviceid;
	src >> s.uid;
	src >> s.platform;
	src >> s.carrier;
	src >> s.ua;
	src >> s.mac_wifi;
	src >> s.mac_3g;
	src >> s.net_status;
	src >> s.sdkv;
	src >> s.server_ip;
	src >> s.ver;
	src >> s.channel;
	src >> s.bindFlag;
	src >> s.language;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::First_openlog& s)
{
	src << s.dt;
	src << s.action;
	src << s.game;
	src << s.cid;
	src << s.server;
	src << s.user_ip;
	src << s.deviceid;
	src << s.uid;
	src << s.platform;
	src << s.carrier;
	src << s.ua;
	src << s.mac_wifi;
	src << s.mac_3g;
	src << s.net_status;
	src << s.sdkv;
	src << s.server_ip;
	src << s.ver;
	src << s.channel;
	src << s.bindFlag;
	src << s.language;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::login_success& s)
{
	src >> s.dt;
	src >> s.action;
	src >> s.game;
	src >> s.server;
	src >> s.uid;
	src >> s.deviceid;
	src >> s.roleid;
	src >> s.req_id;
	src >> s.role_info;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::login_success& s)
{
	src << s.dt;
	src << s.action;
	src << s.game;
	src << s.server;
	src << s.uid;
	src << s.deviceid;
	src << s.roleid;
	src << s.req_id;
	src << s.role_info;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::pay_log& s)
{
	src >> s.dt;
	src >> s.action;
	src >> s.game;
	src >> s.uid;
	src >> s.User_ip;
	src >> s.deviceid;
	src >> s.sdkv;
	src >> s.Platform;
	src >> s.ua;
	src >> s.carrier;
	src >> s.Mac_wifi;
	src >> s.Mac_3g;
	src >> s.Net_status;
	src >> s.roleid;
	src >> s.server;
	src >> s.cid;
	src >> s.sdk_orderid;
	src >> s.cp_orderid;
	src >> s.order_cid;
	src >> s.pay_type;
	src >> s.order_status;
	src >> s.money;
	src >> s.good_id;
	src >> s.good_num;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::pay_log& s)
{
	src << s.dt;
	src << s.action;
	src << s.game;
	src << s.uid;
	src << s.User_ip;
	src << s.deviceid;
	src << s.sdkv;
	src << s.Platform;
	src << s.ua;
	src << s.carrier;
	src << s.Mac_wifi;
	src << s.Mac_3g;
	src << s.Net_status;
	src << s.roleid;
	src << s.server;
	src << s.cid;
	src << s.sdk_orderid;
	src << s.cp_orderid;
	src << s.order_cid;
	src << s.pay_type;
	src << s.order_status;
	src << s.money;
	src << s.good_id;
	src << s.good_num;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::player_action_log& s)
{
	src >> s.dt;
	src >> s.action;
	src >> s.game;
	src >> s.cid;
	src >> s.sdkv;
	src >> s.uid;
	src >> s.roleid;
	src >> s.deviceid;
	src >> s.server;
	src >> s.Platform;
	src >> s.ua;
	src >> s.carrier;
	src >> s.Mac_wifi;
	src >> s.Mac_3g;
	src >> s.Net_status;
	src >> s.action_name;
	src >> s.action_result;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::player_action_log& s)
{
	src << s.dt;
	src << s.action;
	src << s.game;
	src << s.cid;
	src << s.sdkv;
	src << s.uid;
	src << s.roleid;
	src << s.deviceid;
	src << s.server;
	src << s.Platform;
	src << s.ua;
	src << s.carrier;
	src << s.Mac_wifi;
	src << s.Mac_3g;
	src << s.Net_status;
	src << s.action_name;
	src << s.action_result;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::player_online_log& s)
{
	src >> s.dt;
	src >> s.action;
	src >> s.game;
	src >> s.uid;
	src >> s.roleid;
	src >> s.server;
	src >> s.cid;
	src >> s.deviceid;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::player_online_log& s)
{
	src << s.dt;
	src << s.action;
	src << s.game;
	src << s.uid;
	src << s.roleid;
	src << s.server;
	src << s.cid;
	src << s.deviceid;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMagicEffect& s)
{
	src >> s.city_name;
	src >> s.effect_value;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMagicEffect& s)
{
	src << s.city_name;
	src << s.effect_value;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SChapterTaskInfo& s)
{
	src >> s.index;
	src >> s.type;
	src >> s.id;
	src >> s.value;
	src >> s.state;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SChapterTaskInfo& s)
{
	src << s.index;
	src << s.type;
	src << s.id;
	src << s.value;
	src << s.state;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSChapterTaskInfo& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSChapterTaskInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSChapterTaskInfo& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SChapterTaskInfo value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SChapterTaskData& s)
{
	src >> s.chapter_id;
	src >> s.task_list;
	src >> s.chapter_state;
	src >> s.version;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SChapterTaskData& s)
{
	src << s.chapter_id;
	src << s.task_list;
	src << s.chapter_state;
	src << s.version;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SFightFailed& s)
{
	src >> s.army_count;
	src >> s.start_stamp;
	src >> s.triger_stamp;
	src >> s.hurt_value;
	src >> s.dead_value;
	src >> s.dead_army;
	src >> s.enenmy_name;
	src >> s.union_tag;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SFightFailed& s)
{
	src << s.army_count;
	src << s.start_stamp;
	src << s.triger_stamp;
	src << s.hurt_value;
	src << s.dead_value;
	src << s.dead_army;
	src << s.enenmy_name;
	src << s.union_tag;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::MShopItem& s)
{
	src >> s.item_id;
	src >> s.old_price;
	src >> s.cur_price;
	src >> s.price_type;
	src >> s.price_level;
	src >> s.state;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::MShopItem& s)
{
	src << s.item_id;
	src << s.old_price;
	src << s.cur_price;
	src << s.price_type;
	src << s.price_level;
	src << s.state;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecMShopItem& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecMShopItem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecMShopItem& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::MShopItem value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::MShopData& s)
{
	src >> s.exp;
	src >> s.flush_time;
	src >> s.handle_flush;
	src >> s.shop_item;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::MShopData& s)
{
	src << s.exp;
	src << s.flush_time;
	src << s.handle_flush;
	src << s.shop_item;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SFleetTrade& s)
{
	src >> s.trade_type;
	src >> s.left_trade;
	src >> s.right_trade;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SFleetTrade& s)
{
	src << s.trade_type;
	src << s.left_trade;
	src << s.right_trade;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SAllyEvent& s)
{
	src >> s.event_id;
	src >> s.event_index;
	src >> s.hero_icon;
	src >> s.ally_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SAllyEvent& s)
{
	src << s.event_id;
	src << s.event_index;
	src << s.hero_icon;
	src << s.ally_id;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSAllyEvent& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSAllyEvent::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSAllyEvent& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SAllyEvent value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SOfflineInfo& s)
{
	src >> s.offline_food;
	src >> s.offline_wood;
	src >> s.offline_stone;
	src >> s.offline_iron;
	src >> s.offline_silver;
	src >> s.offline_build;
	src >> s.build_time;
	src >> s.offline_tech;
	src >> s.tech_time;
	src >> s.offline_army;
	src >> s.army_count;
	src >> s.train_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SOfflineInfo& s)
{
	src << s.offline_food;
	src << s.offline_wood;
	src << s.offline_stone;
	src << s.offline_iron;
	src << s.offline_silver;
	src << s.offline_build;
	src << s.build_time;
	src << s.offline_tech;
	src << s.tech_time;
	src << s.offline_army;
	src << s.army_count;
	src << s.train_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SMillRes& s)
{
	src >> s.hour_output;
	src >> s.last_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SMillRes& s)
{
	src << s.hour_output;
	src << s.last_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SGambleItem& s)
{
	src >> s.gamble_weight;
	src >> s.show;
	src >> s.gamble_item;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SGambleItem& s)
{
	src << s.gamble_weight;
	src << s.show;
	src << s.gamble_item;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSGambleItem& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSGambleItem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSGambleItem& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SGambleItem value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SGambleInfo& s)
{
	src >> s.gamble_level;
	src >> s.free_count;
	src >> s.gamble_item;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SGambleInfo& s)
{
	src << s.gamble_level;
	src << s.free_count;
	src << s.gamble_item;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SCityMillData& s)
{
	src >> s.mill_food;
	src >> s.mill_wood;
	src >> s.mill_stone;
	src >> s.mill_iron;
	src >> s.mill_silver;
	src >> s.mill_item;
	src >> s.cd_end_time;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SCityMillData& s)
{
	src << s.mill_food;
	src << s.mill_wood;
	src << s.mill_stone;
	src << s.mill_iron;
	src << s.mill_silver;
	src << s.mill_item;
	src << s.cd_end_time;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SDuokuLogExtend& s)
{
	src >> s.player_id;
	src >> s.kingdom_id;
	src >> s.player_level;
	src >> s.last_login_time;
	src >> s.event_type;
	src >> s.event_num;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SDuokuLogExtend& s)
{
	src << s.player_id;
	src << s.kingdom_id;
	src << s.player_level;
	src << s.last_login_time;
	src << s.event_type;
	src << s.event_num;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SWondulData& s)
{
	src >> s.wondul_id;
	src >> s.type_id;
	src >> s.cur_data;
	src >> s.need_data;
	src >> s.get_reward;
	src >> s.last_update;
	src >> s.flag;
	src >> s.start_flag;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SWondulData& s)
{
	src << s.wondul_id;
	src << s.type_id;
	src << s.cur_data;
	src << s.need_data;
	src << s.get_reward;
	src << s.last_update;
	src << s.flag;
	src << s.start_flag;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecSWondulData& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecSWondulData::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecSWondulData& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::SWondulData value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::SRoleWondulData& s)
{
	src >> s.last_update;
	src >> s.WondulData;
	src >> s.fightValue;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SRoleWondulData& s)
{
	src << s.last_update;
	src << s.WondulData;
	src << s.fightValue;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SExchangeBuilding& s)
{
	src >> s.CityID;
	src >> s.landfrom;
	src >> s.landto;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SExchangeBuilding& s)
{
	src << s.CityID;
	src << s.landfrom;
	src << s.landto;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SLeagueCount& s)
{
	src >> s.normal;
	src >> s.other;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueCount& s)
{
	src << s.normal;
	src << s.other;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::Pvp_Log_ext& s)
{
	src >> s.player_id;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::Pvp_Log_ext& s)
{
	src << s.player_id;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::role_show_info& s)
{
	src >> s.roleid;
	src >> s.name;
	src >> s.kingdom;
	src >> s.icon_id;
	src >> s.vip_level;
	src >> s.privilege_level;
	src >> s.league_name;
	src >> s.league_tag;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::role_show_info& s)
{
	src << s.roleid;
	src << s.name;
	src << s.kingdom;
	src << s.icon_id;
	src << s.vip_level;
	src << s.privilege_level;
	src << s.league_name;
	src << s.league_tag;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::efun_auth_result& s)
{
	src >> s.code;
	src >> s.message;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::efun_auth_result& s)
{
	src << s.code;
	src << s.message;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SFriend_info& s)
{
	src >> s.friend_list;
	src >> s.allow_list;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SFriend_info& s)
{
	src << s.friend_list;
	src << s.allow_list;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SOtherTempData& s)
{
	src >> s.value;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SOtherTempData& s)
{
	src << s.value;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::SResLog& s)
{
	src >> s.food;
	src >> s.wood;
	src >> s.stone;
	src >> s.iron;
	src >> s.silver;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::SResLog& s)
{
	src << s.food;
	src << s.wood;
	src << s.stone;
	src << s.iron;
	src << s.silver;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::CaslteMapObj& s)
{
	src >> s.pos_x;
	src >> s.pos_y;
	src >> s.template_id;
	src >> s.obj_type;
	src >> s.param1;
	src >> s.param2;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::CaslteMapObj& s)
{
	src << s.pos_x;
	src << s.pos_y;
	src << s.template_id;
	src << s.obj_type;
	src << s.param1;
	src << s.param2;
	return src;
}


COutArchive& operator<<( COutArchive& src, const Ls::VecCaslteMapObj& s)
{
	unsigned short sz =(unsigned short)s.size();
	src << sz;
	Ls::VecCaslteMapObj::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
		src<<*it;
	return src;
}


CInArchive& operator>>(CInArchive& src, Ls::VecCaslteMapObj& s)
{
	unsigned short  sz;
	src >> sz; 
	for( int i =0; i < sz; i ++)
	{
		Ls::CaslteMapObj value;
		src>>value;
		s.insert( s.end(),value);
	}
	return src;
}
CInArchive& operator>>(CInArchive& src, Ls::CaslteMapInfo& s)
{
	src >> s.mapObj;
	src >> s.match;
	src >> s.gridX;
	src >> s.gridY;
	return src;
}
COutArchive& operator<<( COutArchive& src, const Ls::CaslteMapInfo& s)
{
	src << s.mapObj;
	src << s.match;
	src << s.gridX;
	src << s.gridY;
	return src;
}


bool ReadFromJson( Ls::VecUInt32& s,  const UJsonNode& n )
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
void WriteToJson( const Ls::VecUInt32& s,  UJsonNode& n)
{
	Ls::VecUInt32::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		n.push_back(*it);
	}
}

bool ReadFromJson( Ls::SetUInt16& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		LsUInt16 value;
		value = i.GetUInt16();
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::SetUInt16& s,  UJsonNode& n)
{
	Ls::SetUInt16::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		n.push_back(*it);
	}
}

bool ReadFromJson( Ls::VecString& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		std::string value;
		value = i.GetString();
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecString& s,  UJsonNode& n)
{
	Ls::VecString::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{
		n.push_back(*it);
	}
}

bool ReadFromJson( Ls::LoginTesting& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "result"){
			s.result = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::LoginTesting& s,  UJsonNode& n)
{
	n.push_back("result", s.result);
}


bool ReadFromJson( Ls::role_base_info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "roleid"){
			s.roleid = i.GetUInt32();
		}
		else if (node_name == "accout"){
			s.accout = i.GetUInt32();
		}
		else if (node_name == "name"){
			s.name = i.GetString();
		}
		else if (node_name == "kingdom"){
			s.kingdom = i.GetUInt32();
		}
		else if (node_name == "icon_id"){
			s.icon_id = i.GetInt16();
		}
		else if (node_name == "open_id"){
			s.open_id = i.GetString();
		}
		else if (node_name == "platform"){
			s.platform = i.GetString();
		}
		else if (node_name == "session_key"){
			s.session_key = i.GetString();
		}
		else if (node_name == "nation"){
			s.nation = i.GetString();
		}
		else if (node_name == "allrole"){
			ReadFromJson( s.allrole, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::role_base_info& s,  UJsonNode& n)
{
	n.push_back("roleid", s.roleid);
	n.push_back("accout", s.accout);
	n.push_back("name", s.name);
	n.push_back("kingdom", s.kingdom);
	n.push_back("icon_id", s.icon_id);
	n.push_back("open_id", s.open_id);
	n.push_back("platform", s.platform);
	n.push_back("session_key", s.session_key);
	n.push_back("nation", s.nation);
	UJsonNode jnode0;
	WriteToJson( s.allrole, jnode0 );
	n.push_back("allrole", jnode0 );
}


bool ReadFromJson( Ls::LilithClientInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "version"){
			s.version = i.GetString();
		}
		else if (node_name == "game_id"){
			s.game_id = i.GetString();
		}
		else if (node_name == "pack_name"){
			s.pack_name = i.GetString();
		}
		else if (node_name == "channel_id"){
			s.channel_id = i.GetString();
		}
		else if (node_name == "idfa"){
			s.idfa = i.GetString();
		}
		else if (node_name == "android_id"){
			s.android_id = i.GetString();
		}
		else if (node_name == "google_aid"){
			s.google_aid = i.GetString();
		}
		else if (node_name == "os_type"){
			s.os_type = i.GetString();
		}
		else if (node_name == "os_version"){
			s.os_version = i.GetString();
		}
		else if (node_name == "app_version"){
			s.app_version = i.GetString();
		}
		else if (node_name == "device_mode"){
			s.device_mode = i.GetString();
		}
		else if (node_name == "open_id"){
			s.open_id = i.GetString();
		}
		else if (node_name == "app_id"){
			s.app_id = i.GetString();
		}
		else if (node_name == "name"){
			s.name = i.GetString();
		}
		else if (node_name == "platform"){
			s.platform = i.GetString();
		}
		else if (node_name == "bindFlag"){
			s.bindFlag = i.GetUInt32();
		}
		else if (node_name == "language"){
			s.language = i.GetUInt32();
		}
		else if (node_name == "uid"){
			s.uid = i.GetString();
		}
		else if (node_name == "sdkv"){
			s.sdkv = i.GetString();
		}
		else if (node_name == "carrier"){
			s.carrier = i.GetString();
		}
		else if (node_name == "mac_wifi"){
			s.mac_wifi = i.GetString();
		}
		else if (node_name == "mac_3g"){
			s.mac_3g = i.GetString();
		}
		else if (node_name == "net_status"){
			s.net_status = i.GetString();
		}
		else if (node_name == "ua"){
			s.ua = i.GetString();
		}
		else if (node_name == "cid"){
			s.cid = i.GetString();
		}
		else if (node_name == "deviceid"){
			s.deviceid = i.GetString();
		}
		else if (node_name == "extend"){
			s.extend = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::LilithClientInfo& s,  UJsonNode& n)
{
	n.push_back("version", s.version);
	n.push_back("game_id", s.game_id);
	n.push_back("pack_name", s.pack_name);
	n.push_back("channel_id", s.channel_id);
	n.push_back("idfa", s.idfa);
	n.push_back("android_id", s.android_id);
	n.push_back("google_aid", s.google_aid);
	n.push_back("os_type", s.os_type);
	n.push_back("os_version", s.os_version);
	n.push_back("app_version", s.app_version);
	n.push_back("device_mode", s.device_mode);
	n.push_back("open_id", s.open_id);
	n.push_back("app_id", s.app_id);
	n.push_back("name", s.name);
	n.push_back("platform", s.platform);
	n.push_back("bindFlag", s.bindFlag);
	n.push_back("language", s.language);
	n.push_back("uid", s.uid);
	n.push_back("sdkv", s.sdkv);
	n.push_back("carrier", s.carrier);
	n.push_back("mac_wifi", s.mac_wifi);
	n.push_back("mac_3g", s.mac_3g);
	n.push_back("net_status", s.net_status);
	n.push_back("ua", s.ua);
	n.push_back("cid", s.cid);
	n.push_back("deviceid", s.deviceid);
	n.push_back("extend", s.extend);
}


bool ReadFromJson( Ls::role_asset_info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "gold"){
			s.gold = i.GetInt32();
		}
		else if (node_name == "vip_level"){
			s.vip_level = i.GetUInt8();
		}
		else if (node_name == "vip_exp"){
			s.vip_exp = i.GetUInt32();
		}
		else if (node_name == "vip_time_remaining"){
			s.vip_time_remaining = i.GetUInt32();
		}
		else if (node_name == "privilege_level"){
			s.privilege_level = i.GetUInt8();
		}
		else if (node_name == "privilege_exp"){
			s.privilege_exp = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::role_asset_info& s,  UJsonNode& n)
{
	n.push_back("gold", s.gold);
	n.push_back("vip_level", s.vip_level);
	n.push_back("vip_exp", s.vip_exp);
	n.push_back("vip_time_remaining", s.vip_time_remaining);
	n.push_back("privilege_level", s.privilege_level);
	n.push_back("privilege_exp", s.privilege_exp);
}


bool ReadFromJson( Ls::role_strength_info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "player_power"){
			s.player_power = i.GetInt64();
		}
		else if (node_name == "army_power"){
			s.army_power = i.GetInt64();
		}
		else if (node_name == "build_power"){
			s.build_power = i.GetInt64();
		}
		else if (node_name == "tech_power"){
			s.tech_power = i.GetInt64();
		}
		else if (node_name == "hero_power"){
			s.hero_power = i.GetInt64();
		}
		else if (node_name == "player_level"){
			s.player_level = i.GetInt16();
		}
		else if (node_name == "magic_power"){
			s.magic_power = i.GetInt64();
		}
		else if (node_name == "equip_power"){
			s.equip_power = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::role_strength_info& s,  UJsonNode& n)
{
	n.push_back("player_power", s.player_power);
	n.push_back("army_power", s.army_power);
	n.push_back("build_power", s.build_power);
	n.push_back("tech_power", s.tech_power);
	n.push_back("hero_power", s.hero_power);
	n.push_back("player_level", s.player_level);
	n.push_back("magic_power", s.magic_power);
	n.push_back("equip_power", s.equip_power);
}


bool ReadFromJson( Ls::role_hero_job_info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetInt32();
		}
		else if (node_name == "lock"){
			s.lock = i.GetUInt8();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::role_hero_job_info& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("lock", s.lock);
}


bool ReadFromJson( Ls::VecSRoleHeroJobInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::role_hero_job_info value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSRoleHeroJobInfo& s,  UJsonNode& n)
{
	Ls::VecSRoleHeroJobInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::role_all_info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "roleid"){
			s.roleid = i.GetUInt32();
		}
		else if (node_name == "accout"){
			s.accout = i.GetUInt32();
		}
		else if (node_name == "name"){
			s.name = i.GetString();
		}
		else if (node_name == "icon_id"){
			s.icon_id = i.GetInt16();
		}
		else if (node_name == "kingdom"){
			s.kingdom = i.GetUInt32();
		}
		else if (node_name == "kingdom_title"){
			s.kingdom_title = i.GetUInt32();
		}
		else if (node_name == "signature"){
			s.signature = i.GetString();
		}
		else if (node_name == "newName"){
			s.newName = i.GetInt16();
		}
		else if (node_name == "role_type"){
			s.role_type = i.GetInt16();
		}
		else if (node_name == "version"){
			s.version = i.GetInt32();
		}
		else if (node_name == "open_id"){
			s.open_id = i.GetString();
		}
		else if (node_name == "nation"){
			s.nation = i.GetString();
		}
		else if (node_name == "icon_endtime"){
			s.icon_endtime = i.GetInt32();
		}
		else if (node_name == "log_upload"){
			s.log_upload = i.GetInt32();
		}
		else if (node_name == "log_level"){
			s.log_level = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::role_all_info& s,  UJsonNode& n)
{
	n.push_back("roleid", s.roleid);
	n.push_back("accout", s.accout);
	n.push_back("name", s.name);
	n.push_back("icon_id", s.icon_id);
	n.push_back("kingdom", s.kingdom);
	n.push_back("kingdom_title", s.kingdom_title);
	n.push_back("signature", s.signature);
	n.push_back("newName", s.newName);
	n.push_back("role_type", s.role_type);
	n.push_back("version", s.version);
	n.push_back("open_id", s.open_id);
	n.push_back("nation", s.nation);
	n.push_back("icon_endtime", s.icon_endtime);
	n.push_back("log_upload", s.log_upload);
	n.push_back("log_level", s.log_level);
}


bool ReadFromJson( Ls::role_game_info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "newbieTaskStatus"){
			s.newbieTaskStatus = i.GetInt32();
		}
		else if (node_name == "storyStatus"){
			s.storyStatus = i.GetInt32();
		}
		else if (node_name == "cur_city"){
			s.cur_city = i.GetUInt32();
		}
		else if (node_name == "interior"){
			s.interior = i.GetInt32();
		}
		else if (node_name == "military"){
			s.military = i.GetInt32();
		}
		else if (node_name == "first_list"){
			ReadFromJson( s.first_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "create_time"){
			s.create_time = i.GetInt32();
		}
		else if (node_name == "last_login_time"){
			s.last_login_time = i.GetInt32();
		}
		else if (node_name == "last_logout_time"){
			s.last_logout_time = i.GetInt32();
		}
		else if (node_name == "first_login_time"){
			s.first_login_time = i.GetInt32();
		}
		else if (node_name == "continue_login_days"){
			s.continue_login_days = i.GetInt32();
		}
		else if (node_name == "sysMailIndex"){
			s.sysMailIndex = i.GetInt32();
		}
		else if (node_name == "newHero"){
			s.newHero = i.GetInt16();
		}
		else if (node_name == "award_list"){
			ReadFromJson( s.award_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "trigger_list"){
			ReadFromJson( s.trigger_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "client_action"){
			ReadFromJson( s.client_action, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "sign_index"){
			s.sign_index = i.GetInt32();
		}
		else if (node_name == "sign_today"){
			s.sign_today = i.GetInt32();
		}
		else if (node_name == "csign_index"){
			s.csign_index = i.GetInt32();
		}
		else if (node_name == "csign_num"){
			s.csign_num = i.GetInt32();
		}
		else if (node_name == "left_find"){
			s.left_find = i.GetInt32();
		}
		else if (node_name == "last_find_time"){
			s.last_find_time = i.GetInt32();
		}
		else if (node_name == "tribe_attack_times"){
			s.tribe_attack_times = i.GetInt32();
		}
		else if (node_name == "forbit_chat"){
			s.forbit_chat = i.GetInt32();
		}
		else if (node_name == "first_pay_list"){
			ReadFromJson( s.first_pay_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::role_game_info& s,  UJsonNode& n)
{
	n.push_back("newbieTaskStatus", s.newbieTaskStatus);
	n.push_back("storyStatus", s.storyStatus);
	n.push_back("cur_city", s.cur_city);
	n.push_back("interior", s.interior);
	n.push_back("military", s.military);
	UJsonNode jnode0;
	WriteToJson( s.first_list, jnode0 );
	n.push_back("first_list", jnode0 );
	n.push_back("create_time", s.create_time);
	n.push_back("last_login_time", s.last_login_time);
	n.push_back("last_logout_time", s.last_logout_time);
	n.push_back("first_login_time", s.first_login_time);
	n.push_back("continue_login_days", s.continue_login_days);
	n.push_back("sysMailIndex", s.sysMailIndex);
	n.push_back("newHero", s.newHero);
	UJsonNode jnode1;
	WriteToJson( s.award_list, jnode1 );
	n.push_back("award_list", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.trigger_list, jnode2 );
	n.push_back("trigger_list", jnode2 );
	UJsonNode jnode3;
	WriteToJson( s.client_action, jnode3 );
	n.push_back("client_action", jnode3 );
	n.push_back("sign_index", s.sign_index);
	n.push_back("sign_today", s.sign_today);
	n.push_back("csign_index", s.csign_index);
	n.push_back("csign_num", s.csign_num);
	n.push_back("left_find", s.left_find);
	n.push_back("last_find_time", s.last_find_time);
	n.push_back("tribe_attack_times", s.tribe_attack_times);
	n.push_back("forbit_chat", s.forbit_chat);
	UJsonNode jnode4;
	WriteToJson( s.first_pay_list, jnode4 );
	n.push_back("first_pay_list", jnode4 );
}


bool ReadFromJson( Ls::user_account& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetInt32();
		}
		else if (node_name == "name"){
			s.name = i.GetString();
		}
		else if (node_name == "password"){
			s.password = i.GetString();
		}
		else if (node_name == "mobile_id"){
			s.mobile_id = i.GetString();
		}
		else if (node_name == "login"){
			s.login = i.GetUInt32();
		}
		else if (node_name == "platform"){
			s.platform = i.GetString();
		}
		else if (node_name == "reg_ip"){
			s.reg_ip = i.GetString();
		}
		else if (node_name == "reg_time"){
			s.reg_time = i.GetInt32();
		}
		else if (node_name == "last_login_ip"){
			s.last_login_ip = i.GetString();
		}
		else if (node_name == "last_login_time"){
			s.last_login_time = i.GetInt32();
		}
		else if (node_name == "status"){
			s.status = i.GetInt16();
		}
		else if (node_name == "role_id"){
			s.role_id = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::user_account& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("name", s.name);
	n.push_back("password", s.password);
	n.push_back("mobile_id", s.mobile_id);
	n.push_back("login", s.login);
	n.push_back("platform", s.platform);
	n.push_back("reg_ip", s.reg_ip);
	n.push_back("reg_time", s.reg_time);
	n.push_back("last_login_ip", s.last_login_ip);
	n.push_back("last_login_time", s.last_login_time);
	n.push_back("status", s.status);
	n.push_back("role_id", s.role_id);
}


bool ReadFromJson( Ls::SCityMagicBuffInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "magic_buff_id"){
			s.magic_buff_id = i.GetUInt32();
		}
		else if (node_name == "magic_id"){
			s.magic_id = i.GetUInt32();
		}
		else if (node_name == "magic_buff_effect"){
			s.magic_buff_effect = i.GetInt32();
		}
		else if (node_name == "magic_start_time"){
			s.magic_start_time = i.GetInt32();
		}
		else if (node_name == "magic_end_time"){
			s.magic_end_time = i.GetInt32();
		}
		else if (node_name == "from_castle_id"){
			s.from_castle_id = i.GetUInt32();
		}
		else if (node_name == "magic_from_x"){
			s.magic_from_x = i.GetInt32();
		}
		else if (node_name == "magic_from_y"){
			s.magic_from_y = i.GetInt32();
		}
		else if (node_name == "target_castle_id"){
			s.target_castle_id = i.GetUInt32();
		}
		else if (node_name == "magic_targert_x"){
			s.magic_targert_x = i.GetInt32();
		}
		else if (node_name == "magic_targert_y"){
			s.magic_targert_y = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCityMagicBuffInfo& s,  UJsonNode& n)
{
	n.push_back("magic_buff_id", s.magic_buff_id);
	n.push_back("magic_id", s.magic_id);
	n.push_back("magic_buff_effect", s.magic_buff_effect);
	n.push_back("magic_start_time", s.magic_start_time);
	n.push_back("magic_end_time", s.magic_end_time);
	n.push_back("from_castle_id", s.from_castle_id);
	n.push_back("magic_from_x", s.magic_from_x);
	n.push_back("magic_from_y", s.magic_from_y);
	n.push_back("target_castle_id", s.target_castle_id);
	n.push_back("magic_targert_x", s.magic_targert_x);
	n.push_back("magic_targert_y", s.magic_targert_y);
}


bool ReadFromJson( Ls::SPerpareCardInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "card_id"){
			s.card_id = i.GetUInt32();
		}
		else if (node_name == "card_state"){
			s.card_state = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SPerpareCardInfo& s,  UJsonNode& n)
{
	n.push_back("card_id", s.card_id);
	n.push_back("card_state", s.card_state);
}


bool ReadFromJson( Ls::VecSPerpareCardInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SPerpareCardInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSPerpareCardInfo& s,  UJsonNode& n)
{
	Ls::VecSPerpareCardInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SResourceDetailInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "res_current_value"){
			s.res_current_value = i.GetInt64();
		}
		else if (node_name == "res_hour_output"){
			s.res_hour_output = i.GetInt32();
		}
		else if (node_name == "res_hour_output_total"){
			s.res_hour_output_total = i.GetInt32();
		}
		else if (node_name == "res_second_output"){
			s.res_second_output = i.GetFloat();
		}
		else if (node_name == "res_store_max"){
			s.res_store_max = i.GetInt64();
		}
		else if (node_name == "res_store_max_total"){
			s.res_store_max_total = i.GetInt64();
		}
		else if (node_name == "res_store_protect"){
			s.res_store_protect = i.GetInt64();
		}
		else if (node_name == "res_store_protect_total"){
			s.res_store_protect_total = i.GetInt64();
		}
		else if (node_name == "lastUpdatetime"){
			s.lastUpdatetime = i.GetUInt32();
		}
		else if (node_name == "res_state"){
			s.res_state = i.GetInt32();
		}
		else if (node_name == "attr_type"){
			s.attr_type = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SResourceDetailInfo& s,  UJsonNode& n)
{
	n.push_back("res_current_value", s.res_current_value);
	n.push_back("res_hour_output", s.res_hour_output);
	n.push_back("res_hour_output_total", s.res_hour_output_total);
	n.push_back("res_second_output", s.res_second_output);
	n.push_back("res_store_max", s.res_store_max);
	n.push_back("res_store_max_total", s.res_store_max_total);
	n.push_back("res_store_protect", s.res_store_protect);
	n.push_back("res_store_protect_total", s.res_store_protect_total);
	n.push_back("lastUpdatetime", s.lastUpdatetime);
	n.push_back("res_state", s.res_state);
	n.push_back("attr_type", s.attr_type);
}


bool ReadFromJson( Ls::role_hero_info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "hero_power"){
			ReadFromJson( s.hero_power, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "hero_hero_job_vec"){
			ReadFromJson( s.hero_hero_job_vec, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::role_hero_info& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.hero_power, jnode0 );
	n.push_back("hero_power", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.hero_hero_job_vec, jnode1 );
	n.push_back("hero_hero_job_vec", jnode1 );
}


bool ReadFromJson( Ls::SFoodIncreaseInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "base_res"){
			ReadFromJson( s.base_res, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "keep_cost"){
			s.keep_cost = i.GetInt32();
		}
		else if (node_name == "keep_cost_total"){
			s.keep_cost_total = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SFoodIncreaseInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.base_res, jnode0 );
	n.push_back("base_res", jnode0 );
	n.push_back("keep_cost", s.keep_cost);
	n.push_back("keep_cost_total", s.keep_cost_total);
}


bool ReadFromJson( Ls::SCityMagicInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "pre_card_list"){
			ReadFromJson( s.pre_card_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "buff_info"){
			ReadFromJson( s.buff_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "res_mana"){
			ReadFromJson( s.res_mana, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "magic_level"){
			s.magic_level = i.GetInt32();
		}
		else if (node_name == "pre_end_time"){
			s.pre_end_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCityMagicInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.pre_card_list, jnode0 );
	n.push_back("pre_card_list", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.buff_info, jnode1 );
	n.push_back("buff_info", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.res_mana, jnode2 );
	n.push_back("res_mana", jnode2 );
	n.push_back("magic_level", s.magic_level);
	n.push_back("pre_end_time", s.pre_end_time);
}


bool ReadFromJson( Ls::SPopulationIncreaseInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "base_res"){
			ReadFromJson( s.base_res, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SPopulationIncreaseInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.base_res, jnode0 );
	n.push_back("base_res", jnode0 );
	n.push_back("end_time", s.end_time);
}


bool ReadFromJson( Ls::SMapObjBase& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "mapObjType"){
			s.mapObjType = i.GetUInt8();
		}
		else if (node_name == "gridX"){
			s.gridX = i.GetInt32();
		}
		else if (node_name == "gridY"){
			s.gridY = i.GetInt32();
		}
		else if (node_name == "kingdom"){
			s.kingdom = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMapObjBase& s,  UJsonNode& n)
{
	n.push_back("mapObjType", s.mapObjType);
	n.push_back("gridX", s.gridX);
	n.push_back("gridY", s.gridY);
	n.push_back("kingdom", s.kingdom);
}


bool ReadFromJson( Ls::SCityBuildingInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "tile_id"){
			s.tile_id = i.GetUInt32();
		}
		else if (node_name == "type_id"){
			s.type_id = i.GetUInt32();
		}
		else if (node_name == "building_id"){
			s.building_id = i.GetUInt32();
		}
		else if (node_name == "building_state"){
			s.building_state = i.GetUInt32();
		}
		else if (node_name == "function_id"){
			s.function_id = i.GetUInt32();
		}
		else if (node_name == "league_help"){
			s.league_help = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCityBuildingInfo& s,  UJsonNode& n)
{
	n.push_back("tile_id", s.tile_id);
	n.push_back("type_id", s.type_id);
	n.push_back("building_id", s.building_id);
	n.push_back("building_state", s.building_state);
	n.push_back("function_id", s.function_id);
	n.push_back("league_help", s.league_help);
}


bool ReadFromJson( Ls::VecSCityBuildingInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SCityBuildingInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSCityBuildingInfo& s,  UJsonNode& n)
{
	Ls::VecSCityBuildingInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::CityBuildInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "op_type"){
			s.op_type = i.GetInt32();
		}
		else if (node_name == "build_tile"){
			s.build_tile = i.GetUInt32();
		}
		else if (node_name == "startTime"){
			s.startTime = i.GetUInt32();
		}
		else if (node_name == "endTime"){
			s.endTime = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::CityBuildInfo& s,  UJsonNode& n)
{
	n.push_back("op_type", s.op_type);
	n.push_back("build_tile", s.build_tile);
	n.push_back("startTime", s.startTime);
	n.push_back("endTime", s.endTime);
}


bool ReadFromJson( Ls::VecCityBuildInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::CityBuildInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecCityBuildInfo& s,  UJsonNode& n)
{
	Ls::VecCityBuildInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::DbCityBuildInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "vecBuilding"){
			ReadFromJson( s.vecBuilding, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "buildQueue"){
			ReadFromJson( s.buildQueue, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::DbCityBuildInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.vecBuilding, jnode0 );
	n.push_back("vecBuilding", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.buildQueue, jnode1 );
	n.push_back("buildQueue", jnode1 );
}


bool ReadFromJson( Ls::SCityLockInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "tile_id"){
			s.tile_id = i.GetUInt32();
		}
		else if (node_name == "tile_state"){
			s.tile_state = i.GetUInt32();
		}
		else if (node_name == "tile_index"){
			s.tile_index = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCityLockInfo& s,  UJsonNode& n)
{
	n.push_back("tile_id", s.tile_id);
	n.push_back("tile_state", s.tile_state);
	n.push_back("tile_index", s.tile_index);
}


bool ReadFromJson( Ls::VecSCityLockInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SCityLockInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSCityLockInfo& s,  UJsonNode& n)
{
	Ls::VecSCityLockInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::CityUnlockInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "op_type"){
			s.op_type = i.GetInt32();
		}
		else if (node_name == "build_tile"){
			s.build_tile = i.GetUInt32();
		}
		else if (node_name == "tile_index"){
			s.tile_index = i.GetUInt32();
		}
		else if (node_name == "startTime"){
			s.startTime = i.GetUInt32();
		}
		else if (node_name == "endTime"){
			s.endTime = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::CityUnlockInfo& s,  UJsonNode& n)
{
	n.push_back("op_type", s.op_type);
	n.push_back("build_tile", s.build_tile);
	n.push_back("tile_index", s.tile_index);
	n.push_back("startTime", s.startTime);
	n.push_back("endTime", s.endTime);
}


bool ReadFromJson( Ls::DbCityLockInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "vecLock"){
			ReadFromJson( s.vecLock, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "lockQueue"){
			ReadFromJson( s.lockQueue, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::DbCityLockInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.vecLock, jnode0 );
	n.push_back("vecLock", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.lockQueue, jnode1 );
	n.push_back("lockQueue", jnode1 );
}


bool ReadFromJson( Ls::SCityBuildTile& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "building"){
			ReadFromJson( s.building, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "tile"){
			ReadFromJson( s.tile, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCityBuildTile& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.building, jnode0 );
	n.push_back("building", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.tile, jnode1 );
	n.push_back("tile", jnode1 );
}


bool ReadFromJson( Ls::SColorInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "color_type"){
			s.color_type = i.GetInt32();
		}
		else if (node_name == "color_r"){
			s.color_r = i.GetInt32();
		}
		else if (node_name == "color_g"){
			s.color_g = i.GetInt32();
		}
		else if (node_name == "color_b"){
			s.color_b = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SColorInfo& s,  UJsonNode& n)
{
	n.push_back("color_type", s.color_type);
	n.push_back("color_r", s.color_r);
	n.push_back("color_g", s.color_g);
	n.push_back("color_b", s.color_b);
}


bool ReadFromJson( Ls::SUnionFlagInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "flag_form"){
			s.flag_form = i.GetInt32();
		}
		else if (node_name == "flag_pattern"){
			s.flag_pattern = i.GetInt32();
		}
		else if (node_name == "flag_bf_color1"){
			ReadFromJson( s.flag_bf_color1, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "flag_bf_color2"){
			ReadFromJson( s.flag_bf_color2, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "flag_icon"){
			s.flag_icon = i.GetInt32();
		}
		else if (node_name == "flag_icon_color"){
			ReadFromJson( s.flag_icon_color, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "flag_effect"){
			s.flag_effect = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SUnionFlagInfo& s,  UJsonNode& n)
{
	n.push_back("flag_form", s.flag_form);
	n.push_back("flag_pattern", s.flag_pattern);
	UJsonNode jnode0;
	WriteToJson( s.flag_bf_color1, jnode0 );
	n.push_back("flag_bf_color1", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.flag_bf_color2, jnode1 );
	n.push_back("flag_bf_color2", jnode1 );
	n.push_back("flag_icon", s.flag_icon);
	UJsonNode jnode2;
	WriteToJson( s.flag_icon_color, jnode2 );
	n.push_back("flag_icon_color", jnode2 );
	n.push_back("flag_effect", s.flag_effect);
}


bool ReadFromJson( Ls::SApplyJoinInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "apply_roleid"){
			s.apply_roleid = i.GetUInt32();
		}
		else if (node_name == "apply_time"){
			s.apply_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SApplyJoinInfo& s,  UJsonNode& n)
{
	n.push_back("apply_roleid", s.apply_roleid);
	n.push_back("apply_time", s.apply_time);
}


bool ReadFromJson( Ls::SUnionHelpInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "help_id"){
			s.help_id = i.GetInt64();
		}
		else if (node_name == "city_id"){
			s.city_id = i.GetInt32();
		}
		else if (node_name == "help_type"){
			s.help_type = i.GetInt32();
		}
		else if (node_name == "pox_index"){
			s.pox_index = i.GetInt32();
		}
		else if (node_name == "config_id"){
			s.config_id = i.GetInt32();
		}
		else if (node_name == "player_id"){
			s.player_id = i.GetInt32();
		}
		else if (node_name == "player_name"){
			s.player_name = i.GetString();
		}
		else if (node_name == "rank_level"){
			s.rank_level = i.GetInt32();
		}
		else if (node_name == "help_times"){
			s.help_times = i.GetInt32();
		}
		else if (node_name == "help_times_max"){
			s.help_times_max = i.GetInt32();
		}
		else if (node_name == "hero_name"){
			s.hero_name = i.GetString();
		}
		else if (node_name == "hero_level"){
			s.hero_level = i.GetInt32();
		}
		else if (node_name == "hero_face"){
			s.hero_face = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SUnionHelpInfo& s,  UJsonNode& n)
{
	n.push_back("help_id", s.help_id);
	n.push_back("city_id", s.city_id);
	n.push_back("help_type", s.help_type);
	n.push_back("pox_index", s.pox_index);
	n.push_back("config_id", s.config_id);
	n.push_back("player_id", s.player_id);
	n.push_back("player_name", s.player_name);
	n.push_back("rank_level", s.rank_level);
	n.push_back("help_times", s.help_times);
	n.push_back("help_times_max", s.help_times_max);
	n.push_back("hero_name", s.hero_name);
	n.push_back("hero_level", s.hero_level);
	n.push_back("hero_face", s.hero_face);
}


bool ReadFromJson( Ls::SUnionRankInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "rank_level"){
			s.rank_level = i.GetInt32();
		}
		else if (node_name == "rank_name"){
			s.rank_name = i.GetString();
		}
		else if (node_name == "is_default"){
			s.is_default = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SUnionRankInfo& s,  UJsonNode& n)
{
	n.push_back("rank_level", s.rank_level);
	n.push_back("rank_name", s.rank_name);
	n.push_back("is_default", s.is_default);
}


bool ReadFromJson( Ls::VecSUnionRankList& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SUnionRankInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSUnionRankList& s,  UJsonNode& n)
{
	Ls::VecSUnionRankList::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::union_data& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetUInt32();
		}
		else if (node_name == "kingdom"){
			s.kingdom = i.GetUInt32();
		}
		else if (node_name == "union_name"){
			s.union_name = i.GetString();
		}
		else if (node_name == "union_tag"){
			s.union_tag = i.GetString();
		}
		else if (node_name == "union_title"){
			s.union_title = i.GetString();
		}
		else if (node_name == "union_des"){
			s.union_des = i.GetString();
		}
		else if (node_name == "union_create_time"){
			s.union_create_time = i.GetUInt32();
		}
		else if (node_name == "union_level"){
			s.union_level = i.GetInt32();
		}
		else if (node_name == "auto_accept"){
			s.auto_accept = i.GetInt32();
		}
		else if (node_name == "union_power"){
			s.union_power = i.GetInt32();
		}
		else if (node_name == "union_leader"){
			s.union_leader = i.GetInt64();
		}
		else if (node_name == "language"){
			s.language = i.GetInt32();
		}
		else if (node_name == "union_flag_info"){
			ReadFromJson( s.union_flag_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "union_army_color"){
			s.union_army_color = i.GetInt32();
		}
		else if (node_name == "union_rank_list"){
			ReadFromJson( s.union_rank_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "city_power"){
			s.city_power = i.GetInt64();
		}
		else if (node_name == "army_power"){
			s.army_power = i.GetInt64();
		}
		else if (node_name == "army_count"){
			s.army_count = i.GetInt64();
		}
		else if (node_name == "defence_time"){
			s.defence_time = i.GetInt32();
		}
		else if (node_name == "defence_result"){
			s.defence_result = i.GetInt32();
		}
		else if (node_name == "join_level"){
			s.join_level = i.GetInt32();
		}
		else if (node_name == "join_power"){
			s.join_power = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::union_data& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("kingdom", s.kingdom);
	n.push_back("union_name", s.union_name);
	n.push_back("union_tag", s.union_tag);
	n.push_back("union_title", s.union_title);
	n.push_back("union_des", s.union_des);
	n.push_back("union_create_time", s.union_create_time);
	n.push_back("union_level", s.union_level);
	n.push_back("auto_accept", s.auto_accept);
	n.push_back("union_power", s.union_power);
	n.push_back("union_leader", s.union_leader);
	n.push_back("language", s.language);
	UJsonNode jnode0;
	WriteToJson( s.union_flag_info, jnode0 );
	n.push_back("union_flag_info", jnode0 );
	n.push_back("union_army_color", s.union_army_color);
	UJsonNode jnode1;
	WriteToJson( s.union_rank_list, jnode1 );
	n.push_back("union_rank_list", jnode1 );
	n.push_back("city_power", s.city_power);
	n.push_back("army_power", s.army_power);
	n.push_back("army_count", s.army_count);
	n.push_back("defence_time", s.defence_time);
	n.push_back("defence_result", s.defence_result);
	n.push_back("join_level", s.join_level);
	n.push_back("join_power", s.join_power);
}


bool ReadFromJson( Ls::union_build& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "lb_type"){
			s.lb_type = i.GetUInt32();
		}
		else if (node_name == "lb_level"){
			s.lb_level = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::union_build& s,  UJsonNode& n)
{
	n.push_back("lb_type", s.lb_type);
	n.push_back("lb_level", s.lb_level);
}


bool ReadFromJson( Ls::VecUnion_build& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::union_build value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecUnion_build& s,  UJsonNode& n)
{
	Ls::VecUnion_build::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SUnion_Castle& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "uc_state"){
			s.uc_state = i.GetUInt32();
		}
		else if (node_name == "gridX"){
			s.gridX = i.GetInt32();
		}
		else if (node_name == "gridY"){
			s.gridY = i.GetInt32();
		}
		else if (node_name == "vec_build"){
			ReadFromJson( s.vec_build, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "exile_time"){
			s.exile_time = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SUnion_Castle& s,  UJsonNode& n)
{
	n.push_back("uc_state", s.uc_state);
	n.push_back("gridX", s.gridX);
	n.push_back("gridY", s.gridY);
	UJsonNode jnode0;
	WriteToJson( s.vec_build, jnode0 );
	n.push_back("vec_build", jnode0 );
	n.push_back("exile_time", s.exile_time);
}


bool ReadFromJson( Ls::SUnion_Assert& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "u_money"){
			s.u_money = i.GetInt64();
		}
		else if (node_name == "indenture"){
			s.indenture = i.GetInt64();
		}
		else if (node_name == "manuscript"){
			s.manuscript = i.GetInt64();
		}
		else if (node_name == "gift_level"){
			s.gift_level = i.GetInt32();
		}
		else if (node_name == "gift_point"){
			s.gift_point = i.GetInt64();
		}
		else if (node_name == "zone_list"){
			ReadFromJson( s.zone_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SUnion_Assert& s,  UJsonNode& n)
{
	n.push_back("u_money", s.u_money);
	n.push_back("indenture", s.indenture);
	n.push_back("manuscript", s.manuscript);
	n.push_back("gift_level", s.gift_level);
	n.push_back("gift_point", s.gift_point);
	UJsonNode jnode0;
	WriteToJson( s.zone_list, jnode0 );
	n.push_back("zone_list", jnode0 );
}


bool ReadFromJson( Ls::SDonationData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "donate_food"){
			s.donate_food = i.GetInt64();
		}
		else if (node_name == "donate_wood"){
			s.donate_wood = i.GetInt64();
		}
		else if (node_name == "donate_stone"){
			s.donate_stone = i.GetInt64();
		}
		else if (node_name == "donate_iron"){
			s.donate_iron = i.GetInt64();
		}
		else if (node_name == "donate_gold"){
			s.donate_gold = i.GetInt64();
		}
		else if (node_name == "food_pice"){
			s.food_pice = i.GetFloat();
		}
		else if (node_name == "wood_pice"){
			s.wood_pice = i.GetFloat();
		}
		else if (node_name == "stone_pice"){
			s.stone_pice = i.GetFloat();
		}
		else if (node_name == "iron_pice"){
			s.iron_pice = i.GetFloat();
		}
		else if (node_name == "food_pice_trend"){
			s.food_pice_trend = i.GetFloat();
		}
		else if (node_name == "wood_pice_trend"){
			s.wood_pice_trend = i.GetFloat();
		}
		else if (node_name == "stone_pice_trend"){
			s.stone_pice_trend = i.GetFloat();
		}
		else if (node_name == "iron_pice_trend"){
			s.iron_pice_trend = i.GetFloat();
		}
		else if (node_name == "trend_count"){
			s.trend_count = i.GetInt32();
		}
		else if (node_name == "fresh_time"){
			s.fresh_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDonationData& s,  UJsonNode& n)
{
	n.push_back("donate_food", s.donate_food);
	n.push_back("donate_wood", s.donate_wood);
	n.push_back("donate_stone", s.donate_stone);
	n.push_back("donate_iron", s.donate_iron);
	n.push_back("donate_gold", s.donate_gold);
	n.push_back("food_pice", s.food_pice);
	n.push_back("wood_pice", s.wood_pice);
	n.push_back("stone_pice", s.stone_pice);
	n.push_back("iron_pice", s.iron_pice);
	n.push_back("food_pice_trend", s.food_pice_trend);
	n.push_back("wood_pice_trend", s.wood_pice_trend);
	n.push_back("stone_pice_trend", s.stone_pice_trend);
	n.push_back("iron_pice_trend", s.iron_pice_trend);
	n.push_back("trend_count", s.trend_count);
	n.push_back("fresh_time", s.fresh_time);
}


bool ReadFromJson( Ls::SDonateResource& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "donate_food"){
			s.donate_food = i.GetInt64();
		}
		else if (node_name == "donate_wood"){
			s.donate_wood = i.GetInt64();
		}
		else if (node_name == "donate_stone"){
			s.donate_stone = i.GetInt64();
		}
		else if (node_name == "donate_iron"){
			s.donate_iron = i.GetInt64();
		}
		else if (node_name == "donate_silver"){
			s.donate_silver = i.GetInt64();
		}
		else if (node_name == "donate_indenture"){
			s.donate_indenture = i.GetInt64();
		}
		else if (node_name == "donate_manuscript"){
			s.donate_manuscript = i.GetInt64();
		}
		else if (node_name == "donate_spice"){
			s.donate_spice = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDonateResource& s,  UJsonNode& n)
{
	n.push_back("donate_food", s.donate_food);
	n.push_back("donate_wood", s.donate_wood);
	n.push_back("donate_stone", s.donate_stone);
	n.push_back("donate_iron", s.donate_iron);
	n.push_back("donate_silver", s.donate_silver);
	n.push_back("donate_indenture", s.donate_indenture);
	n.push_back("donate_manuscript", s.donate_manuscript);
	n.push_back("donate_spice", s.donate_spice);
}


bool ReadFromJson( Ls::SDailyDonation& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "union_money"){
			s.union_money = i.GetInt64();
		}
		else if (node_name == "union_silver"){
			s.union_silver = i.GetInt64();
		}
		else if (node_name == "union_indenture"){
			s.union_indenture = i.GetInt64();
		}
		else if (node_name == "union_manuscript"){
			s.union_manuscript = i.GetInt64();
		}
		else if (node_name == "union_spice"){
			s.union_spice = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDailyDonation& s,  UJsonNode& n)
{
	n.push_back("union_money", s.union_money);
	n.push_back("union_silver", s.union_silver);
	n.push_back("union_indenture", s.union_indenture);
	n.push_back("union_manuscript", s.union_manuscript);
	n.push_back("union_spice", s.union_spice);
}


bool ReadFromJson( Ls::SUnionDonationInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "daily_donate"){
			ReadFromJson( s.daily_donate, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "out_info"){
			ReadFromJson( s.out_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "price_res"){
			ReadFromJson( s.price_res, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SUnionDonationInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.daily_donate, jnode0 );
	n.push_back("daily_donate", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.out_info, jnode1 );
	n.push_back("out_info", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.price_res, jnode2 );
	n.push_back("price_res", jnode2 );
}


bool ReadFromJson( Ls::SUnionMemberInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "union_id"){
			s.union_id = i.GetUInt32();
		}
		else if (node_name == "member_id"){
			s.member_id = i.GetUInt64();
		}
		else if (node_name == "rank_level"){
			s.rank_level = i.GetInt32();
		}
		else if (node_name == "union_exploit"){
			s.union_exploit = i.GetInt32();
		}
		else if (node_name == "union_contribute"){
			s.union_contribute = i.GetInt32();
		}
		else if (node_name == "day_contribute"){
			s.day_contribute = i.GetInt32();
		}
		else if (node_name == "week_contribute"){
			s.week_contribute = i.GetInt32();
		}
		else if (node_name == "week_max_con"){
			s.week_max_con = i.GetInt32();
		}
		else if (node_name == "help_con"){
			s.help_con = i.GetInt32();
		}
		else if (node_name == "day_time_help"){
			s.day_time_help = i.GetInt32();
		}
		else if (node_name == "day_card_help"){
			s.day_card_help = i.GetInt32();
		}
		else if (node_name == "task_con"){
			s.task_con = i.GetInt32();
		}
		else if (node_name == "item_con"){
			s.item_con = i.GetInt32();
		}
		else if (node_name == "gold_con"){
			s.gold_con = i.GetInt32();
		}
		else if (node_name == "res_con"){
			s.res_con = i.GetInt32();
		}
		else if (node_name == "donate_gold"){
			s.donate_gold = i.GetInt32();
		}
		else if (node_name == "donate_res"){
			ReadFromJson( s.donate_res, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "first_join"){
			s.first_join = i.GetInt16();
		}
		else if (node_name == "invited_list"){
			ReadFromJson( s.invited_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SUnionMemberInfo& s,  UJsonNode& n)
{
	n.push_back("union_id", s.union_id);
	n.push_back("member_id", s.member_id);
	n.push_back("rank_level", s.rank_level);
	n.push_back("union_exploit", s.union_exploit);
	n.push_back("union_contribute", s.union_contribute);
	n.push_back("day_contribute", s.day_contribute);
	n.push_back("week_contribute", s.week_contribute);
	n.push_back("week_max_con", s.week_max_con);
	n.push_back("help_con", s.help_con);
	n.push_back("day_time_help", s.day_time_help);
	n.push_back("day_card_help", s.day_card_help);
	n.push_back("task_con", s.task_con);
	n.push_back("item_con", s.item_con);
	n.push_back("gold_con", s.gold_con);
	n.push_back("res_con", s.res_con);
	n.push_back("donate_gold", s.donate_gold);
	UJsonNode jnode0;
	WriteToJson( s.donate_res, jnode0 );
	n.push_back("donate_res", jnode0 );
	n.push_back("first_join", s.first_join);
	UJsonNode jnode1;
	WriteToJson( s.invited_list, jnode1 );
	n.push_back("invited_list", jnode1 );
}


bool ReadFromJson( Ls::SLeagueInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "league_info"){
			ReadFromJson( s.league_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "member_list"){
			ReadFromJson( s.member_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "block_list"){
			ReadFromJson( s.block_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "invit_list"){
			ReadFromJson( s.invit_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLeagueInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.league_info, jnode0 );
	n.push_back("league_info", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.member_list, jnode1 );
	n.push_back("member_list", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.block_list, jnode2 );
	n.push_back("block_list", jnode2 );
	UJsonNode jnode3;
	WriteToJson( s.invit_list, jnode3 );
	n.push_back("invit_list", jnode3 );
}


bool ReadFromJson( Ls::SUnionTech& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "tech_id"){
			s.tech_id = i.GetInt32();
		}
		else if (node_name == "type"){
			s.type = i.GetInt32();
		}
		else if (node_name == "level"){
			s.level = i.GetInt32();
		}
		else if (node_name == "tech_point"){
			s.tech_point = i.GetInt32();
		}
		else if (node_name == "tech_status"){
			s.tech_status = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SUnionTech& s,  UJsonNode& n)
{
	n.push_back("tech_id", s.tech_id);
	n.push_back("type", s.type);
	n.push_back("level", s.level);
	n.push_back("tech_point", s.tech_point);
	n.push_back("tech_status", s.tech_status);
}


bool ReadFromJson( Ls::VecSUnionTech& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SUnionTech value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSUnionTech& s,  UJsonNode& n)
{
	Ls::VecSUnionTech::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SSystemTech& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "tech_id"){
			s.tech_id = i.GetInt32();
		}
		else if (node_name == "reward_id"){
			s.reward_id = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SSystemTech& s,  UJsonNode& n)
{
	n.push_back("tech_id", s.tech_id);
	n.push_back("reward_id", s.reward_id);
}


bool ReadFromJson( Ls::VecSSystemTech& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SSystemTech value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSSystemTech& s,  UJsonNode& n)
{
	Ls::VecSSystemTech::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SUnionTechInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "tech_list"){
			ReadFromJson( s.tech_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "sys_tech"){
			ReadFromJson( s.sys_tech, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "donate_tech"){
			ReadFromJson( s.donate_tech, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "target_tech"){
			s.target_tech = i.GetUInt32();
		}
		else if (node_name == "fresh_num"){
			s.fresh_num = i.GetUInt32();
		}
		else if (node_name == "set_num"){
			s.set_num = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SUnionTechInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.tech_list, jnode0 );
	n.push_back("tech_list", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.sys_tech, jnode1 );
	n.push_back("sys_tech", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.donate_tech, jnode2 );
	n.push_back("donate_tech", jnode2 );
	n.push_back("target_tech", s.target_tech);
	n.push_back("fresh_num", s.fresh_num);
	n.push_back("set_num", s.set_num);
}


bool ReadFromJson( Ls::SArmyInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "armys_id"){
			s.armys_id = i.GetUInt32();
		}
		else if (node_name == "armys_quantity"){
			s.armys_quantity = i.GetInt64();
		}
		else if (node_name == "normal"){
			s.normal = i.GetInt64();
		}
		else if (node_name == "out"){
			s.out = i.GetInt64();
		}
		else if (node_name == "hurt"){
			s.hurt = i.GetInt64();
		}
		else if (node_name == "treat"){
			s.treat = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SArmyInfo& s,  UJsonNode& n)
{
	n.push_back("armys_id", s.armys_id);
	n.push_back("armys_quantity", s.armys_quantity);
	n.push_back("normal", s.normal);
	n.push_back("out", s.out);
	n.push_back("hurt", s.hurt);
	n.push_back("treat", s.treat);
}


bool ReadFromJson( Ls::VecSArmyInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SArmyInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSArmyInfo& s,  UJsonNode& n)
{
	Ls::VecSArmyInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SArmyBulid& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "armys_id"){
			s.armys_id = i.GetUInt32();
		}
		else if (node_name == "armys_quantity"){
			s.armys_quantity = i.GetInt64();
		}
		else if (node_name == "startTime"){
			s.startTime = i.GetUInt32();
		}
		else if (node_name == "endTime"){
			s.endTime = i.GetUInt32();
		}
		else if (node_name == "build_tile"){
			s.build_tile = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SArmyBulid& s,  UJsonNode& n)
{
	n.push_back("armys_id", s.armys_id);
	n.push_back("armys_quantity", s.armys_quantity);
	n.push_back("startTime", s.startTime);
	n.push_back("endTime", s.endTime);
	n.push_back("build_tile", s.build_tile);
}


bool ReadFromJson( Ls::SCityArmyInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "army"){
			ReadFromJson( s.army, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "armyBulid"){
			ReadFromJson( s.armyBulid, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "maxScale"){
			s.maxScale = i.GetInt64();
		}
		else if (node_name == "maxCapacity"){
			s.maxCapacity = i.GetInt64();
		}
		else if (node_name == "maxTribe"){
			s.maxTribe = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCityArmyInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.army, jnode0 );
	n.push_back("army", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.armyBulid, jnode1 );
	n.push_back("armyBulid", jnode1 );
	n.push_back("maxScale", s.maxScale);
	n.push_back("maxCapacity", s.maxCapacity);
	n.push_back("maxTribe", s.maxTribe);
}


bool ReadFromJson( Ls::SCityTrainLimitInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "troops_single_max"){
			s.troops_single_max = i.GetInt64();
		}
		else if (node_name == "troops_assembled_max"){
			s.troops_assembled_max = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCityTrainLimitInfo& s,  UJsonNode& n)
{
	n.push_back("troops_single_max", s.troops_single_max);
	n.push_back("troops_assembled_max", s.troops_assembled_max);
}


bool ReadFromJson( Ls::SMarchResInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "res_id"){
			s.res_id = i.GetUInt32();
		}
		else if (node_name == "res_quantity"){
			s.res_quantity = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMarchResInfo& s,  UJsonNode& n)
{
	n.push_back("res_id", s.res_id);
	n.push_back("res_quantity", s.res_quantity);
}


bool ReadFromJson( Ls::SMarchTroopsInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "player_id"){
			s.player_id = i.GetUInt32();
		}
		else if (node_name == "armys_id"){
			s.armys_id = i.GetUInt32();
		}
		else if (node_name == "armys_quantity"){
			s.armys_quantity = i.GetInt64();
		}
		else if (node_name == "armys_hurt"){
			s.armys_hurt = i.GetInt64();
		}
		else if (node_name == "armys_dead"){
			s.armys_dead = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMarchTroopsInfo& s,  UJsonNode& n)
{
	n.push_back("player_id", s.player_id);
	n.push_back("armys_id", s.armys_id);
	n.push_back("armys_quantity", s.armys_quantity);
	n.push_back("armys_hurt", s.armys_hurt);
	n.push_back("armys_dead", s.armys_dead);
}


bool ReadFromJson( Ls::SMarchTroopsReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "a"){
			s.a = i.GetUInt32();
		}
		else if (node_name == "b"){
			s.b = i.GetUInt32();
		}
		else if (node_name == "c"){
			s.c = i.GetInt64();
		}
		else if (node_name == "d"){
			s.d = i.GetInt64();
		}
		else if (node_name == "e"){
			s.e = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMarchTroopsReport& s,  UJsonNode& n)
{
	n.push_back("a", s.a);
	n.push_back("b", s.b);
	n.push_back("c", s.c);
	n.push_back("d", s.d);
	n.push_back("e", s.e);
}


bool ReadFromJson( Ls::VecSMarchTroopsReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SMarchTroopsReport value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSMarchTroopsReport& s,  UJsonNode& n)
{
	Ls::VecSMarchTroopsReport::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SMarchSpeed& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "speed"){
			s.speed = i.GetFloat();
		}
		else if (node_name == "time"){
			s.time = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMarchSpeed& s,  UJsonNode& n)
{
	n.push_back("speed", s.speed);
	n.push_back("time", s.time);
}


bool ReadFromJson( Ls::VecSMarchSpeed& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SMarchSpeed value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSMarchSpeed& s,  UJsonNode& n)
{
	Ls::VecSMarchSpeed::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::VecSMarchResInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SMarchResInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSMarchResInfo& s,  UJsonNode& n)
{
	Ls::VecSMarchResInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::VecSMarchTroopsInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SMarchTroopsInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSMarchTroopsInfo& s,  UJsonNode& n)
{
	Ls::VecSMarchTroopsInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SDropResult& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "ItemType"){
			s.ItemType = i.GetString();
		}
		else if (node_name == "Item"){
			s.Item = i.GetUInt32();
		}
		else if (node_name == "Count"){
			s.Count = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDropResult& s,  UJsonNode& n)
{
	n.push_back("ItemType", s.ItemType);
	n.push_back("Item", s.Item);
	n.push_back("Count", s.Count);
}


bool ReadFromJson( Ls::VecSDropResult& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SDropResult value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSDropResult& s,  UJsonNode& n)
{
	Ls::VecSDropResult::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SMapObj& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "objType"){
			s.objType = i.GetUInt32();
		}
		else if (node_name == "objID"){
			s.objID = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMapObj& s,  UJsonNode& n)
{
	n.push_back("objType", s.objType);
	n.push_back("objID", s.objID);
}


bool ReadFromJson( Ls::SMarchRelicInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetUInt32();
		}
		else if (node_name == "template_id"){
			s.template_id = i.GetUInt32();
		}
		else if (node_name == "level"){
			s.level = i.GetInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMarchRelicInfo& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("template_id", s.template_id);
	n.push_back("level", s.level);
	n.push_back("end_time", s.end_time);
}


bool ReadFromJson( Ls::VecSMarchRelicInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SMarchRelicInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSMarchRelicInfo& s,  UJsonNode& n)
{
	Ls::VecSMarchRelicInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SCityMarchProgress& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "march_id"){
			s.march_id = i.GetUInt32();
		}
		else if (node_name == "march_type"){
			s.march_type = i.GetUInt32();
		}
		else if (node_name == "player_id"){
			s.player_id = i.GetUInt32();
		}
		else if (node_name == "city_id"){
			s.city_id = i.GetUInt32();
		}
		else if (node_name == "union_id"){
			s.union_id = i.GetUInt32();
		}
		else if (node_name == "loc_start_k"){
			s.loc_start_k = i.GetUInt32();
		}
		else if (node_name == "loc_start_x"){
			s.loc_start_x = i.GetUInt32();
		}
		else if (node_name == "loc_start_y"){
			s.loc_start_y = i.GetUInt32();
		}
		else if (node_name == "loc_end_k"){
			s.loc_end_k = i.GetUInt32();
		}
		else if (node_name == "loc_end_x"){
			s.loc_end_x = i.GetUInt32();
		}
		else if (node_name == "loc_end_y"){
			s.loc_end_y = i.GetUInt32();
		}
		else if (node_name == "startTime"){
			s.startTime = i.GetUInt32();
		}
		else if (node_name == "endTime"){
			s.endTime = i.GetUInt32();
		}
		else if (node_name == "initEndTime"){
			s.initEndTime = i.GetUInt32();
		}
		else if (node_name == "hero_id"){
			s.hero_id = i.GetUInt32();
		}
		else if (node_name == "target_id"){
			s.target_id = i.GetUInt32();
		}
		else if (node_name == "_massID"){
			s._massID = i.GetUInt32();
		}
		else if (node_name == "stru_troops"){
			ReadFromJson( s.stru_troops, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "speed"){
			ReadFromJson( s.speed, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "drop_res"){
			ReadFromJson( s.drop_res, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "loss_res"){
			ReadFromJson( s.loss_res, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "targetObj"){
			ReadFromJson( s.targetObj, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "_totalWeight"){
			s._totalWeight = i.GetUInt32();
		}
		else if (node_name == "_resType"){
			s._resType = i.GetInt32();
		}
		else if (node_name == "_realWeight"){
			s._realWeight = i.GetInt32();
		}
		else if (node_name == "_resSpeed"){
			s._resSpeed = i.GetFloat();
		}
		else if (node_name == "_speed"){
			s._speed = i.GetFloat();
		}
		else if (node_name == "carry_point"){
			s.carry_point = i.GetUInt32();
		}
		else if (node_name == "drop_relic"){
			ReadFromJson( s.drop_relic, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "captive_hero"){
			s.captive_hero = i.GetUInt32();
		}
		else if (node_name == "march_state"){
			s.march_state = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCityMarchProgress& s,  UJsonNode& n)
{
	n.push_back("march_id", s.march_id);
	n.push_back("march_type", s.march_type);
	n.push_back("player_id", s.player_id);
	n.push_back("city_id", s.city_id);
	n.push_back("union_id", s.union_id);
	n.push_back("loc_start_k", s.loc_start_k);
	n.push_back("loc_start_x", s.loc_start_x);
	n.push_back("loc_start_y", s.loc_start_y);
	n.push_back("loc_end_k", s.loc_end_k);
	n.push_back("loc_end_x", s.loc_end_x);
	n.push_back("loc_end_y", s.loc_end_y);
	n.push_back("startTime", s.startTime);
	n.push_back("endTime", s.endTime);
	n.push_back("initEndTime", s.initEndTime);
	n.push_back("hero_id", s.hero_id);
	n.push_back("target_id", s.target_id);
	n.push_back("_massID", s._massID);
	UJsonNode jnode0;
	WriteToJson( s.stru_troops, jnode0 );
	n.push_back("stru_troops", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.speed, jnode1 );
	n.push_back("speed", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.drop_res, jnode2 );
	n.push_back("drop_res", jnode2 );
	UJsonNode jnode3;
	WriteToJson( s.loss_res, jnode3 );
	n.push_back("loss_res", jnode3 );
	UJsonNode jnode4;
	WriteToJson( s.targetObj, jnode4 );
	n.push_back("targetObj", jnode4 );
	n.push_back("_totalWeight", s._totalWeight);
	n.push_back("_resType", s._resType);
	n.push_back("_realWeight", s._realWeight);
	n.push_back("_resSpeed", s._resSpeed);
	n.push_back("_speed", s._speed);
	n.push_back("carry_point", s.carry_point);
	UJsonNode jnode5;
	WriteToJson( s.drop_relic, jnode5 );
	n.push_back("drop_relic", jnode5 );
	n.push_back("captive_hero", s.captive_hero);
	n.push_back("march_state", s.march_state);
}


bool ReadFromJson( Ls::VecSCityMarchProgress& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SCityMarchProgress value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSCityMarchProgress& s,  UJsonNode& n)
{
	Ls::VecSCityMarchProgress::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SMassInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "mass_id"){
			s.mass_id = i.GetUInt32();
		}
		else if (node_name == "role_id"){
			s.role_id = i.GetUInt32();
		}
		else if (node_name == "gridX"){
			s.gridX = i.GetInt32();
		}
		else if (node_name == "gridY"){
			s.gridY = i.GetInt32();
		}
		else if (node_name == "total_time"){
			s.total_time = i.GetInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		else if (node_name == "mass_state"){
			s.mass_state = i.GetUInt32();
		}
		else if (node_name == "arrivedMarch"){
			s.arrivedMarch = i.GetUInt32();
		}
		else if (node_name == "firstMarch"){
			ReadFromJson( s.firstMarch, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMassInfo& s,  UJsonNode& n)
{
	n.push_back("mass_id", s.mass_id);
	n.push_back("role_id", s.role_id);
	n.push_back("gridX", s.gridX);
	n.push_back("gridY", s.gridY);
	n.push_back("total_time", s.total_time);
	n.push_back("end_time", s.end_time);
	n.push_back("mass_state", s.mass_state);
	n.push_back("arrivedMarch", s.arrivedMarch);
	UJsonNode jnode0;
	WriteToJson( s.firstMarch, jnode0 );
	n.push_back("firstMarch", jnode0 );
}


bool ReadFromJson( Ls::SRoleCityInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "city_id"){
			s.city_id = i.GetUInt32();
		}
		else if (node_name == "inner_id"){
			s.inner_id = i.GetUInt32();
		}
		else if (node_name == "city_name"){
			s.city_name = i.GetString();
		}
		else if (node_name == "city_state"){
			s.city_state = i.GetUInt8();
		}
		else if (node_name == "city_level_arrived"){
			s.city_level_arrived = i.GetInt16();
		}
		else if (node_name == "city_level_now"){
			s.city_level_now = i.GetInt16();
		}
		else if (node_name == "city_icon"){
			s.city_icon = i.GetUInt32();
		}
		else if (node_name == "city_union_help_max_time"){
			s.city_union_help_max_time = i.GetInt32();
		}
		else if (node_name == "city_trade_num"){
			s.city_trade_num = i.GetInt32();
		}
		else if (node_name == "city_trade_tax"){
			s.city_trade_tax = i.GetInt32();
		}
		else if (node_name == "roleID"){
			s.roleID = i.GetUInt64();
		}
		else if (node_name == "x"){
			s.x = i.GetInt16();
		}
		else if (node_name == "y"){
			s.y = i.GetInt16();
		}
		else if (node_name == "last_defence"){
			s.last_defence = i.GetInt32();
		}
		else if (node_name == "result"){
			s.result = i.GetInt32();
		}
		else if (node_name == "captive_max_num"){
			s.captive_max_num = i.GetInt32();
		}
		else if (node_name == "last_march"){
			s.last_march = i.GetInt32();
		}
		else if (node_name == "practice_army"){
			s.practice_army = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRoleCityInfo& s,  UJsonNode& n)
{
	n.push_back("city_id", s.city_id);
	n.push_back("inner_id", s.inner_id);
	n.push_back("city_name", s.city_name);
	n.push_back("city_state", s.city_state);
	n.push_back("city_level_arrived", s.city_level_arrived);
	n.push_back("city_level_now", s.city_level_now);
	n.push_back("city_icon", s.city_icon);
	n.push_back("city_union_help_max_time", s.city_union_help_max_time);
	n.push_back("city_trade_num", s.city_trade_num);
	n.push_back("city_trade_tax", s.city_trade_tax);
	n.push_back("roleID", s.roleID);
	n.push_back("x", s.x);
	n.push_back("y", s.y);
	n.push_back("last_defence", s.last_defence);
	n.push_back("result", s.result);
	n.push_back("captive_max_num", s.captive_max_num);
	n.push_back("last_march", s.last_march);
	n.push_back("practice_army", s.practice_army);
}


bool ReadFromJson( Ls::FightBuff& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "b"){
			s.b = i.GetInt16();
		}
		else if (node_name == "v"){
			s.v = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::FightBuff& s,  UJsonNode& n)
{
	n.push_back("b", s.b);
	n.push_back("v", s.v);
}


bool ReadFromJson( Ls::VecFightBuff& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::FightBuff value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecFightBuff& s,  UJsonNode& n)
{
	Ls::VecFightBuff::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SFightInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "target_kingid"){
			s.target_kingid = i.GetUInt32();
		}
		else if (node_name == "target_pox_x"){
			s.target_pox_x = i.GetInt16();
		}
		else if (node_name == "target_pox_y"){
			s.target_pox_y = i.GetInt16();
		}
		else if (node_name == "battletype"){
			s.battletype = i.GetInt32();
		}
		else if (node_name == "winner_id"){
			s.winner_id = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SFightInfo& s,  UJsonNode& n)
{
	n.push_back("target_kingid", s.target_kingid);
	n.push_back("target_pox_x", s.target_pox_x);
	n.push_back("target_pox_y", s.target_pox_y);
	n.push_back("battletype", s.battletype);
	n.push_back("winner_id", s.winner_id);
}


bool ReadFromJson( Ls::PlayerInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetInt32();
		}
		else if (node_name == "name"){
			s.name = i.GetString();
		}
		else if (node_name == "get_material"){
			ReadFromJson( s.get_material, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::PlayerInfo& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("name", s.name);
	UJsonNode jnode0;
	WriteToJson( s.get_material, jnode0 );
	n.push_back("get_material", jnode0 );
}


bool ReadFromJson( Ls::VecPlayerInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::PlayerInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecPlayerInfo& s,  UJsonNode& n)
{
	Ls::VecPlayerInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SCaptiveReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "hero_id"){
			s.hero_id = i.GetUInt32();
		}
		else if (node_name == "hero_icon"){
			s.hero_icon = i.GetInt32();
		}
		else if (node_name == "hero_name"){
			s.hero_name = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCaptiveReport& s,  UJsonNode& n)
{
	n.push_back("hero_id", s.hero_id);
	n.push_back("hero_icon", s.hero_icon);
	n.push_back("hero_name", s.hero_name);
}


bool ReadFromJson( Ls::SFightMarchInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "user_id"){
			s.user_id = i.GetUInt32();
		}
		else if (node_name == "icon_id"){
			s.icon_id = i.GetInt16();
		}
		else if (node_name == "isMass"){
			s.isMass = i.GetInt16();
		}
		else if (node_name == "member_list"){
			ReadFromJson( s.member_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "league_id"){
			s.league_id = i.GetUInt32();
		}
		else if (node_name == "leagueTag"){
			s.leagueTag = i.GetString();
		}
		else if (node_name == "user_name"){
			s.user_name = i.GetString();
		}
		else if (node_name == "castle_name"){
			s.castle_name = i.GetString();
		}
		else if (node_name == "from_k"){
			s.from_k = i.GetInt16();
		}
		else if (node_name == "from_x"){
			s.from_x = i.GetInt16();
		}
		else if (node_name == "from_y"){
			s.from_y = i.GetInt16();
		}
		else if (node_name == "before_attack"){
			ReadFromJson( s.before_attack, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "after_attack"){
			ReadFromJson( s.after_attack, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "troopsTotal"){
			s.troopsTotal = i.GetUInt32();
		}
		else if (node_name == "armyDead"){
			s.armyDead = i.GetUInt32();
		}
		else if (node_name == "armyWounded"){
			s.armyWounded = i.GetUInt32();
		}
		else if (node_name == "armyAlive"){
			s.armyAlive = i.GetUInt32();
		}
		else if (node_name == "trapDel"){
			s.trapDel = i.GetUInt32();
		}
		else if (node_name == "hero_name"){
			s.hero_name = i.GetString();
		}
		else if (node_name == "hero_exp"){
			s.hero_exp = i.GetInt32();
		}
		else if (node_name == "tribeLost"){
			s.tribeLost = i.GetInt64();
		}
		else if (node_name == "Rpeople"){
			s.Rpeople = i.GetInt32();
		}
		else if (node_name == "Lpeople"){
			s.Lpeople = i.GetInt32();
		}
		else if (node_name == "culture"){
			s.culture = i.GetInt32();
		}
		else if (node_name == "power"){
			s.power = i.GetInt32();
		}
		else if (node_name == "boom"){
			s.boom = i.GetInt32();
		}
		else if (node_name == "get_material"){
			ReadFromJson( s.get_material, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "get_relic"){
			ReadFromJson( s.get_relic, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "herobufflist"){
			ReadFromJson( s.herobufflist, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "fightbufflist"){
			ReadFromJson( s.fightbufflist, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "magiclist"){
			ReadFromJson( s.magiclist, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "captive_hero"){
			ReadFromJson( s.captive_hero, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SFightMarchInfo& s,  UJsonNode& n)
{
	n.push_back("user_id", s.user_id);
	n.push_back("icon_id", s.icon_id);
	n.push_back("isMass", s.isMass);
	UJsonNode jnode0;
	WriteToJson( s.member_list, jnode0 );
	n.push_back("member_list", jnode0 );
	n.push_back("league_id", s.league_id);
	n.push_back("leagueTag", s.leagueTag);
	n.push_back("user_name", s.user_name);
	n.push_back("castle_name", s.castle_name);
	n.push_back("from_k", s.from_k);
	n.push_back("from_x", s.from_x);
	n.push_back("from_y", s.from_y);
	UJsonNode jnode1;
	WriteToJson( s.before_attack, jnode1 );
	n.push_back("before_attack", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.after_attack, jnode2 );
	n.push_back("after_attack", jnode2 );
	n.push_back("troopsTotal", s.troopsTotal);
	n.push_back("armyDead", s.armyDead);
	n.push_back("armyWounded", s.armyWounded);
	n.push_back("armyAlive", s.armyAlive);
	n.push_back("trapDel", s.trapDel);
	n.push_back("hero_name", s.hero_name);
	n.push_back("hero_exp", s.hero_exp);
	n.push_back("tribeLost", s.tribeLost);
	n.push_back("Rpeople", s.Rpeople);
	n.push_back("Lpeople", s.Lpeople);
	n.push_back("culture", s.culture);
	n.push_back("power", s.power);
	n.push_back("boom", s.boom);
	UJsonNode jnode3;
	WriteToJson( s.get_material, jnode3 );
	n.push_back("get_material", jnode3 );
	UJsonNode jnode4;
	WriteToJson( s.get_relic, jnode4 );
	n.push_back("get_relic", jnode4 );
	UJsonNode jnode5;
	WriteToJson( s.herobufflist, jnode5 );
	n.push_back("herobufflist", jnode5 );
	UJsonNode jnode6;
	WriteToJson( s.fightbufflist, jnode6 );
	n.push_back("fightbufflist", jnode6 );
	UJsonNode jnode7;
	WriteToJson( s.magiclist, jnode7 );
	n.push_back("magiclist", jnode7 );
	UJsonNode jnode8;
	WriteToJson( s.captive_hero, jnode8 );
	n.push_back("captive_hero", jnode8 );
}


bool ReadFromJson( Ls::SFightReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "info"){
			ReadFromJson( s.info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "attack"){
			ReadFromJson( s.attack, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "defnece"){
			ReadFromJson( s.defnece, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SFightReport& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.info, jnode0 );
	n.push_back("info", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.attack, jnode1 );
	n.push_back("attack", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.defnece, jnode2 );
	n.push_back("defnece", jnode2 );
}


bool ReadFromJson( Ls::SDropItem& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "ItemType"){
			s.ItemType = i.GetUInt32();
		}
		else if (node_name == "ItemID"){
			s.ItemID = i.GetUInt32();
		}
		else if (node_name == "ItemCount"){
			s.ItemCount = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDropItem& s,  UJsonNode& n)
{
	n.push_back("ItemType", s.ItemType);
	n.push_back("ItemID", s.ItemID);
	n.push_back("ItemCount", s.ItemCount);
}


bool ReadFromJson( Ls::VecSDropItem& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SDropItem value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSDropItem& s,  UJsonNode& n)
{
	Ls::VecSDropItem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SPopulationRes& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "cur_population"){
			s.cur_population = i.GetInt32();
		}
		else if (node_name == "max_population"){
			s.max_population = i.GetInt32();
		}
		else if (node_name == "hour_output"){
			s.hour_output = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SPopulationRes& s,  UJsonNode& n)
{
	n.push_back("cur_population", s.cur_population);
	n.push_back("max_population", s.max_population);
	n.push_back("hour_output", s.hour_output);
}


bool ReadFromJson( Ls::SEquip& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "ins_id"){
			s.ins_id = i.GetUInt32();
		}
		else if (node_name == "item_id"){
			s.item_id = i.GetUInt32();
		}
		else if (node_name == "city"){
			s.city = i.GetUInt32();
		}
		else if (node_name == "hero"){
			s.hero = i.GetUInt32();
		}
		else if (node_name == "pos"){
			s.pos = i.GetUInt32();
		}
		else if (node_name == "quality"){
			s.quality = i.GetInt32();
		}
		else if (node_name == "role_item_ins_id"){
			s.role_item_ins_id = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SEquip& s,  UJsonNode& n)
{
	n.push_back("ins_id", s.ins_id);
	n.push_back("item_id", s.item_id);
	n.push_back("city", s.city);
	n.push_back("hero", s.hero);
	n.push_back("pos", s.pos);
	n.push_back("quality", s.quality);
	n.push_back("role_item_ins_id", s.role_item_ins_id);
}


bool ReadFromJson( Ls::STechnologyInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "tech_position"){
			s.tech_position = i.GetUInt32();
		}
		else if (node_name == "tech_id"){
			s.tech_id = i.GetUInt32();
		}
		else if (node_name == "tech_level"){
			s.tech_level = i.GetUInt32();
		}
		else if (node_name == "develop_city_id"){
			s.develop_city_id = i.GetUInt32();
		}
		else if (node_name == "develop_state"){
			s.develop_state = i.GetInt32();
		}
		else if (node_name == "startTime"){
			s.startTime = i.GetInt32();
		}
		else if (node_name == "endTime"){
			s.endTime = i.GetInt32();
		}
		else if (node_name == "league_help"){
			s.league_help = i.GetInt32();
		}
		else if (node_name == "add_speed"){
			s.add_speed = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::STechnologyInfo& s,  UJsonNode& n)
{
	n.push_back("tech_position", s.tech_position);
	n.push_back("tech_id", s.tech_id);
	n.push_back("tech_level", s.tech_level);
	n.push_back("develop_city_id", s.develop_city_id);
	n.push_back("develop_state", s.develop_state);
	n.push_back("startTime", s.startTime);
	n.push_back("endTime", s.endTime);
	n.push_back("league_help", s.league_help);
	n.push_back("add_speed", s.add_speed);
}


bool ReadFromJson( Ls::VecTechnologyInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::STechnologyInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecTechnologyInfo& s,  UJsonNode& n)
{
	Ls::VecTechnologyInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SResourceInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "res_current_value"){
			s.res_current_value = i.GetInt64();
		}
		else if (node_name == "res_hour_output"){
			s.res_hour_output = i.GetInt32();
		}
		else if (node_name == "res_store_max"){
			s.res_store_max = i.GetInt64();
		}
		else if (node_name == "res_store_protect"){
			s.res_store_protect = i.GetInt32();
		}
		else if (node_name == "res_keep_cost"){
			s.res_keep_cost = i.GetInt32();
		}
		else if (node_name == "last_update"){
			s.last_update = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SResourceInfo& s,  UJsonNode& n)
{
	n.push_back("res_current_value", s.res_current_value);
	n.push_back("res_hour_output", s.res_hour_output);
	n.push_back("res_store_max", s.res_store_max);
	n.push_back("res_store_protect", s.res_store_protect);
	n.push_back("res_keep_cost", s.res_keep_cost);
	n.push_back("last_update", s.last_update);
}


bool ReadFromJson( Ls::SHurtArmyInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "army_id"){
			s.army_id = i.GetInt32();
		}
		else if (node_name == "army_count"){
			s.army_count = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SHurtArmyInfo& s,  UJsonNode& n)
{
	n.push_back("army_id", s.army_id);
	n.push_back("army_count", s.army_count);
}


bool ReadFromJson( Ls::VecHurtArmy& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SHurtArmyInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecHurtArmy& s,  UJsonNode& n)
{
	Ls::VecHurtArmy::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::STreatArmyInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "pos_index"){
			s.pos_index = i.GetInt32();
		}
		else if (node_name == "hurt_army_list"){
			ReadFromJson( s.hurt_army_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "start_time"){
			s.start_time = i.GetInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		else if (node_name == "ishelped"){
			s.ishelped = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::STreatArmyInfo& s,  UJsonNode& n)
{
	n.push_back("pos_index", s.pos_index);
	UJsonNode jnode0;
	WriteToJson( s.hurt_army_list, jnode0 );
	n.push_back("hurt_army_list", jnode0 );
	n.push_back("start_time", s.start_time);
	n.push_back("end_time", s.end_time);
	n.push_back("ishelped", s.ishelped);
}


bool ReadFromJson( Ls::STreatInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "treat_army_info"){
			ReadFromJson( s.treat_army_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "hospital_capacity"){
			s.hospital_capacity = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::STreatInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.treat_army_info, jnode0 );
	n.push_back("treat_army_info", jnode0 );
	n.push_back("hospital_capacity", s.hospital_capacity);
}


bool ReadFromJson( Ls::SItemBuffInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "buff_id"){
			s.buff_id = i.GetInt32();
		}
		else if (node_name == "start_time"){
			s.start_time = i.GetInt64();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SItemBuffInfo& s,  UJsonNode& n)
{
	n.push_back("buff_id", s.buff_id);
	n.push_back("start_time", s.start_time);
	n.push_back("end_time", s.end_time);
}


bool ReadFromJson( Ls::VecItemBuff& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SItemBuffInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecItemBuff& s,  UJsonNode& n)
{
	Ls::VecItemBuff::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::EnemyLeagueInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "league_id"){
			s.league_id = i.GetInt32();
		}
		else if (node_name == "protocol_state"){
			s.protocol_state = i.GetInt16();
		}
		else if (node_name == "startTime"){
			s.startTime = i.GetInt64();
		}
		else if (node_name == "protocol_content"){
			s.protocol_content = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::EnemyLeagueInfo& s,  UJsonNode& n)
{
	n.push_back("league_id", s.league_id);
	n.push_back("protocol_state", s.protocol_state);
	n.push_back("startTime", s.startTime);
	n.push_back("protocol_content", s.protocol_content);
}


bool ReadFromJson( Ls::VecEnemyLeagueInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::EnemyLeagueInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecEnemyLeagueInfo& s,  UJsonNode& n)
{
	Ls::VecEnemyLeagueInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SLoseInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "isLosing"){
			s.isLosing = i.GetInt32();
		}
		else if (node_name == "endTime"){
			s.endTime = i.GetInt64();
		}
		else if (node_name == "tag"){
			s.tag = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLoseInfo& s,  UJsonNode& n)
{
	n.push_back("isLosing", s.isLosing);
	n.push_back("endTime", s.endTime);
	n.push_back("tag", s.tag);
}


bool ReadFromJson( Ls::SLeagueRecord& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "enemy_league_list"){
			ReadFromJson( s.enemy_league_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "friend_league_list"){
			ReadFromJson( s.friend_league_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "lose_info"){
			ReadFromJson( s.lose_info, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLeagueRecord& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.enemy_league_list, jnode0 );
	n.push_back("enemy_league_list", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.friend_league_list, jnode1 );
	n.push_back("friend_league_list", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.lose_info, jnode2 );
	n.push_back("lose_info", jnode2 );
}


bool ReadFromJson( Ls::SLeagueHistoryWar& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "league_name"){
			s.league_name = i.GetString();
		}
		else if (node_name == "league_tag"){
			s.league_tag = i.GetString();
		}
		else if (node_name == "league_level"){
			s.league_level = i.GetInt16();
		}
		else if (node_name == "league_power"){
			s.league_power = i.GetInt32();
		}
		else if (node_name == "league_lanaguage"){
			s.league_lanaguage = i.GetInt16();
		}
		else if (node_name == "result"){
			s.result = i.GetInt16();
		}
		else if (node_name == "league_flag"){
			ReadFromJson( s.league_flag, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLeagueHistoryWar& s,  UJsonNode& n)
{
	n.push_back("league_name", s.league_name);
	n.push_back("league_tag", s.league_tag);
	n.push_back("league_level", s.league_level);
	n.push_back("league_power", s.league_power);
	n.push_back("league_lanaguage", s.league_lanaguage);
	n.push_back("result", s.result);
	UJsonNode jnode0;
	WriteToJson( s.league_flag, jnode0 );
	n.push_back("league_flag", jnode0 );
	n.push_back("end_time", s.end_time);
}


bool ReadFromJson( Ls::WarInfoList& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SLeagueHistoryWar value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::WarInfoList& s,  UJsonNode& n)
{
	Ls::WarInfoList::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::role_mail& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "guid"){
			s.guid = i.GetString();
		}
		else if (node_name == "stamp"){
			s.stamp = i.GetInt32();
		}
		else if (node_name == "type"){
			s.type = i.GetInt16();
		}
		else if (node_name == "sub_type"){
			s.sub_type = i.GetInt16();
		}
		else if (node_name == "state"){
			s.state = i.GetInt16();
		}
		else if (node_name == "reciever"){
			s.reciever = i.GetInt32();
		}
		else if (node_name == "title"){
			s.title = i.GetString();
		}
		else if (node_name == "content"){
			s.content = i.GetString();
		}
		else if (node_name == "digest"){
			s.digest = i.GetString();
		}
		else if (node_name == "reward"){
			s.reward = i.GetString();
		}
		else if (node_name == "get"){
			s.get = i.GetInt16();
		}
		else if (node_name == "reverse"){
			s.reverse = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::role_mail& s,  UJsonNode& n)
{
	n.push_back("guid", s.guid);
	n.push_back("stamp", s.stamp);
	n.push_back("type", s.type);
	n.push_back("sub_type", s.sub_type);
	n.push_back("state", s.state);
	n.push_back("reciever", s.reciever);
	n.push_back("title", s.title);
	n.push_back("content", s.content);
	n.push_back("digest", s.digest);
	n.push_back("reward", s.reward);
	n.push_back("get", s.get);
	n.push_back("reverse", s.reverse);
}


bool ReadFromJson( Ls::mail_digest& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "p1"){
			s.p1 = i.GetString();
		}
		else if (node_name == "p2"){
			s.p2 = i.GetString();
		}
		else if (node_name == "p3"){
			s.p3 = i.GetString();
		}
		else if (node_name == "p4"){
			s.p4 = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::mail_digest& s,  UJsonNode& n)
{
	n.push_back("p1", s.p1);
	n.push_back("p2", s.p2);
	n.push_back("p3", s.p3);
	n.push_back("p4", s.p4);
}


bool ReadFromJson( Ls::role_sys_mail& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "last_sys_mail"){
			s.last_sys_mail = i.GetUInt32();
		}
		else if (node_name == "last_king_sys_mail"){
			s.last_king_sys_mail = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::role_sys_mail& s,  UJsonNode& n)
{
	n.push_back("last_sys_mail", s.last_sys_mail);
	n.push_back("last_king_sys_mail", s.last_king_sys_mail);
}


bool ReadFromJson( Ls::first_tip_mail& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "tip"){
			s.tip = i.GetString();
		}
		else if (node_name == "mana"){
			s.mana = i.GetInt32();
		}
		else if (node_name == "dropList"){
			ReadFromJson( s.dropList, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::first_tip_mail& s,  UJsonNode& n)
{
	n.push_back("tip", s.tip);
	n.push_back("mana", s.mana);
	UJsonNode jnode0;
	WriteToJson( s.dropList, jnode0 );
	n.push_back("dropList", jnode0 );
}


bool ReadFromJson( Ls::reward_mail& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "rank"){
			s.rank = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::reward_mail& s,  UJsonNode& n)
{
	n.push_back("rank", s.rank);
}


bool ReadFromJson( Ls::SRecruitArmyInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "recruit_army_list"){
			ReadFromJson( s.recruit_army_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "start_time"){
			s.start_time = i.GetInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRecruitArmyInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.recruit_army_list, jnode0 );
	n.push_back("recruit_army_list", jnode0 );
	n.push_back("start_time", s.start_time);
	n.push_back("end_time", s.end_time);
}


bool ReadFromJson( Ls::SRecruitInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "recruit_army_info"){
			ReadFromJson( s.recruit_army_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "recruit_count"){
			s.recruit_count = i.GetInt32();
		}
		else if (node_name == "recruit_time"){
			s.recruit_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRecruitInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.recruit_army_info, jnode0 );
	n.push_back("recruit_army_info", jnode0 );
	n.push_back("recruit_count", s.recruit_count);
	n.push_back("recruit_time", s.recruit_time);
}


bool ReadFromJson( Ls::SRaceInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "city_race"){
			s.city_race = i.GetUInt32();
		}
		else if (node_name == "change_race"){
			s.change_race = i.GetUInt32();
		}
		else if (node_name == "start_time"){
			s.start_time = i.GetUInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRaceInfo& s,  UJsonNode& n)
{
	n.push_back("city_race", s.city_race);
	n.push_back("change_race", s.change_race);
	n.push_back("start_time", s.start_time);
	n.push_back("end_time", s.end_time);
}


bool ReadFromJson( Ls::SCollectReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "target_kingid"){
			s.target_kingid = i.GetUInt32();
		}
		else if (node_name == "target_pox_x"){
			s.target_pox_x = i.GetInt16();
		}
		else if (node_name == "target_pox_y"){
			s.target_pox_y = i.GetInt16();
		}
		else if (node_name == "gather_id"){
			s.gather_id = i.GetUInt32();
		}
		else if (node_name == "res"){
			ReadFromJson( s.res, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCollectReport& s,  UJsonNode& n)
{
	n.push_back("target_kingid", s.target_kingid);
	n.push_back("target_pox_x", s.target_pox_x);
	n.push_back("target_pox_y", s.target_pox_y);
	n.push_back("gather_id", s.gather_id);
	UJsonNode jnode0;
	WriteToJson( s.res, jnode0 );
	n.push_back("res", jnode0 );
}


bool ReadFromJson( Ls::SArmyKeepInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "army_id"){
			s.army_id = i.GetInt32();
		}
		else if (node_name == "army_normal"){
			s.army_normal = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SArmyKeepInfo& s,  UJsonNode& n)
{
	n.push_back("army_id", s.army_id);
	n.push_back("army_normal", s.army_normal);
}


bool ReadFromJson( Ls::VecArmyKeep& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SArmyKeepInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecArmyKeep& s,  UJsonNode& n)
{
	Ls::VecArmyKeep::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SPosSave& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetUInt32();
		}
		else if (node_name == "kingid"){
			s.kingid = i.GetUInt32();
		}
		else if (node_name == "pos_x"){
			s.pos_x = i.GetInt16();
		}
		else if (node_name == "pos_y"){
			s.pos_y = i.GetInt16();
		}
		else if (node_name == "name"){
			s.name = i.GetString();
		}
		else if (node_name == "ctype"){
			s.ctype = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SPosSave& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("kingid", s.kingid);
	n.push_back("pos_x", s.pos_x);
	n.push_back("pos_y", s.pos_y);
	n.push_back("name", s.name);
	n.push_back("ctype", s.ctype);
}


bool ReadFromJson( Ls::VecSPosSave& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SPosSave value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSPosSave& s,  UJsonNode& n)
{
	Ls::VecSPosSave::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::STradeReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "sender_kingid"){
			s.sender_kingid = i.GetUInt32();
		}
		else if (node_name == "sender_pox_x"){
			s.sender_pox_x = i.GetInt16();
		}
		else if (node_name == "sender_pox_y"){
			s.sender_pox_y = i.GetInt16();
		}
		else if (node_name == "sender_rank"){
			s.sender_rank = i.GetInt16();
		}
		else if (node_name == "sender_name"){
			s.sender_name = i.GetString();
		}
		else if (node_name == "sender_icon"){
			s.sender_icon = i.GetInt16();
		}
		else if (node_name == "sender_id"){
			s.sender_id = i.GetUInt64();
		}
		else if (node_name == "target_pox_x"){
			s.target_pox_x = i.GetInt16();
		}
		else if (node_name == "target_pox_y"){
			s.target_pox_y = i.GetInt16();
		}
		else if (node_name == "target_name"){
			s.target_name = i.GetString();
		}
		else if (node_name == "target_rank"){
			s.target_rank = i.GetInt16();
		}
		else if (node_name == "target_icon"){
			s.target_icon = i.GetInt16();
		}
		else if (node_name == "target_id"){
			s.target_id = i.GetUInt64();
		}
		else if (node_name == "res"){
			ReadFromJson( s.res, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::STradeReport& s,  UJsonNode& n)
{
	n.push_back("sender_kingid", s.sender_kingid);
	n.push_back("sender_pox_x", s.sender_pox_x);
	n.push_back("sender_pox_y", s.sender_pox_y);
	n.push_back("sender_rank", s.sender_rank);
	n.push_back("sender_name", s.sender_name);
	n.push_back("sender_icon", s.sender_icon);
	n.push_back("sender_id", s.sender_id);
	n.push_back("target_pox_x", s.target_pox_x);
	n.push_back("target_pox_y", s.target_pox_y);
	n.push_back("target_name", s.target_name);
	n.push_back("target_rank", s.target_rank);
	n.push_back("target_icon", s.target_icon);
	n.push_back("target_id", s.target_id);
	UJsonNode jnode0;
	WriteToJson( s.res, jnode0 );
	n.push_back("res", jnode0 );
}


bool ReadFromJson( Ls::SBossReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "target_kingid"){
			s.target_kingid = i.GetUInt32();
		}
		else if (node_name == "target_pox_x"){
			s.target_pox_x = i.GetInt16();
		}
		else if (node_name == "target_pox_y"){
			s.target_pox_y = i.GetInt16();
		}
		else if (node_name == "face_id"){
			s.face_id = i.GetUInt32();
		}
		else if (node_name == "hero_name"){
			s.hero_name = i.GetString();
		}
		else if (node_name == "hero_exp"){
			s.hero_exp = i.GetUInt32();
		}
		else if (node_name == "monster_id"){
			s.monster_id = i.GetUInt32();
		}
		else if (node_name == "monster_left_hp"){
			s.monster_left_hp = i.GetInt32();
		}
		else if (node_name == "monster_lost_hp"){
			s.monster_lost_hp = i.GetInt32();
		}
		else if (node_name == "get_material"){
			ReadFromJson( s.get_material, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SBossReport& s,  UJsonNode& n)
{
	n.push_back("target_kingid", s.target_kingid);
	n.push_back("target_pox_x", s.target_pox_x);
	n.push_back("target_pox_y", s.target_pox_y);
	n.push_back("face_id", s.face_id);
	n.push_back("hero_name", s.hero_name);
	n.push_back("hero_exp", s.hero_exp);
	n.push_back("monster_id", s.monster_id);
	n.push_back("monster_left_hp", s.monster_left_hp);
	n.push_back("monster_lost_hp", s.monster_lost_hp);
	UJsonNode jnode0;
	WriteToJson( s.get_material, jnode0 );
	n.push_back("get_material", jnode0 );
}


bool ReadFromJson( Ls::Spy_Struct& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "value"){
			s.value = i.GetInt64();
		}
		else if (node_name == "isValueFuzzy"){
			s.isValueFuzzy = i.GetInt8();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::Spy_Struct& s,  UJsonNode& n)
{
	n.push_back("value", s.value);
	n.push_back("isValueFuzzy", s.isValueFuzzy);
}


bool ReadFromJson( Ls::Spy_Struct_Army& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "a"){
			s.a = i.GetInt32();
		}
		else if (node_name == "b"){
			s.b = i.GetInt32();
		}
		else if (node_name == "c"){
			s.c = i.GetInt8();
		}
		else if (node_name == "d"){
			s.d = i.GetInt8();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::Spy_Struct_Army& s,  UJsonNode& n)
{
	n.push_back("a", s.a);
	n.push_back("b", s.b);
	n.push_back("c", s.c);
	n.push_back("d", s.d);
}


bool ReadFromJson( Ls::VecSSpyArmy& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::Spy_Struct_Army value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSSpyArmy& s,  UJsonNode& n)
{
	Ls::VecSSpyArmy::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::Spy_Struct_Buff& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "b"){
			s.b = i.GetInt16();
		}
		else if (node_name == "v"){
			s.v = i.GetInt32();
		}
		else if (node_name == "i"){
			s.i = i.GetInt8();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::Spy_Struct_Buff& s,  UJsonNode& n)
{
	n.push_back("b", s.b);
	n.push_back("v", s.v);
	n.push_back("i", s.i);
}


bool ReadFromJson( Ls::VecSSpyBuff& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::Spy_Struct_Buff value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSSpyBuff& s,  UJsonNode& n)
{
	Ls::VecSSpyBuff::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SSpyReportFight& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "armyTotal"){
			s.armyTotal = i.GetInt32();
		}
		else if (node_name == "armyInfo"){
			ReadFromJson( s.armyInfo, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "buffInfo"){
			ReadFromJson( s.buffInfo, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SSpyReportFight& s,  UJsonNode& n)
{
	n.push_back("armyTotal", s.armyTotal);
	UJsonNode jnode0;
	WriteToJson( s.armyInfo, jnode0 );
	n.push_back("armyInfo", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.buffInfo, jnode1 );
	n.push_back("buffInfo", jnode1 );
}


bool ReadFromJson( Ls::Spy_CastleInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "playerName"){
			s.playerName = i.GetString();
		}
		else if (node_name == "castleName"){
			s.castleName = i.GetString();
		}
		else if (node_name == "iconID"){
			s.iconID = i.GetInt16();
		}
		else if (node_name == "leagueFlag"){
			s.leagueFlag = i.GetString();
		}
		else if (node_name == "kingdomID"){
			s.kingdomID = i.GetInt16();
		}
		else if (node_name == "posX"){
			s.posX = i.GetInt16();
		}
		else if (node_name == "posY"){
			s.posY = i.GetInt16();
		}
		else if (node_name == "magicPower"){
			ReadFromJson( s.magicPower, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::Spy_CastleInfo& s,  UJsonNode& n)
{
	n.push_back("playerName", s.playerName);
	n.push_back("castleName", s.castleName);
	n.push_back("iconID", s.iconID);
	n.push_back("leagueFlag", s.leagueFlag);
	n.push_back("kingdomID", s.kingdomID);
	n.push_back("posX", s.posX);
	n.push_back("posY", s.posY);
	UJsonNode jnode0;
	WriteToJson( s.magicPower, jnode0 );
	n.push_back("magicPower", jnode0 );
}


bool ReadFromJson( Ls::Spy_ResourceInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "food"){
			ReadFromJson( s.food, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "wood"){
			ReadFromJson( s.wood, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "stone"){
			ReadFromJson( s.stone, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "iron"){
			ReadFromJson( s.iron, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "silver"){
			ReadFromJson( s.silver, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::Spy_ResourceInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.food, jnode0 );
	n.push_back("food", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.wood, jnode1 );
	n.push_back("wood", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.stone, jnode2 );
	n.push_back("stone", jnode2 );
	UJsonNode jnode3;
	WriteToJson( s.iron, jnode3 );
	n.push_back("iron", jnode3 );
	UJsonNode jnode4;
	WriteToJson( s.silver, jnode4 );
	n.push_back("silver", jnode4 );
}


bool ReadFromJson( Ls::Spy_ArmyInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "supportTotal"){
			s.supportTotal = i.GetInt32();
		}
		else if (node_name == "supportInfo"){
			ReadFromJson( s.supportInfo, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::Spy_ArmyInfo& s,  UJsonNode& n)
{
	n.push_back("supportTotal", s.supportTotal);
	UJsonNode jnode0;
	WriteToJson( s.supportInfo, jnode0 );
	n.push_back("supportInfo", jnode0 );
}


bool ReadFromJson( Ls::Spy_TrapInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "trapTotal"){
			s.trapTotal = i.GetInt32();
		}
		else if (node_name == "trapInfo"){
			ReadFromJson( s.trapInfo, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::Spy_TrapInfo& s,  UJsonNode& n)
{
	n.push_back("trapTotal", s.trapTotal);
	UJsonNode jnode0;
	WriteToJson( s.trapInfo, jnode0 );
	n.push_back("trapInfo", jnode0 );
}


bool ReadFromJson( Ls::SSpyReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "notify_type"){
			s.notify_type = i.GetInt32();
		}
		else if (node_name == "castle_info"){
			ReadFromJson( s.castle_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "resource_info"){
			ReadFromJson( s.resource_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "support_info"){
			ReadFromJson( s.support_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "trap_info"){
			ReadFromJson( s.trap_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "fight_info"){
			ReadFromJson( s.fight_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "spy_tip"){
			s.spy_tip = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SSpyReport& s,  UJsonNode& n)
{
	n.push_back("notify_type", s.notify_type);
	UJsonNode jnode0;
	WriteToJson( s.castle_info, jnode0 );
	n.push_back("castle_info", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.resource_info, jnode1 );
	n.push_back("resource_info", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.support_info, jnode2 );
	n.push_back("support_info", jnode2 );
	UJsonNode jnode3;
	WriteToJson( s.trap_info, jnode3 );
	n.push_back("trap_info", jnode3 );
	UJsonNode jnode4;
	WriteToJson( s.fight_info, jnode4 );
	n.push_back("fight_info", jnode4 );
	n.push_back("spy_tip", s.spy_tip);
}


bool ReadFromJson( Ls::SSpyReportArmy& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "notify_type"){
			s.notify_type = i.GetInt32();
		}
		else if (node_name == "march_type"){
			s.march_type = i.GetInt32();
		}
		else if (node_name == "castle_info"){
			ReadFromJson( s.castle_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "fight_info"){
			ReadFromJson( s.fight_info, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "spy_tip"){
			s.spy_tip = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SSpyReportArmy& s,  UJsonNode& n)
{
	n.push_back("notify_type", s.notify_type);
	n.push_back("march_type", s.march_type);
	UJsonNode jnode0;
	WriteToJson( s.castle_info, jnode0 );
	n.push_back("castle_info", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.fight_info, jnode1 );
	n.push_back("fight_info", jnode1 );
	n.push_back("spy_tip", s.spy_tip);
}


bool ReadFromJson( Ls::SSpyBeReported& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "notify_type"){
			s.notify_type = i.GetInt32();
		}
		else if (node_name == "playerName"){
			s.playerName = i.GetString();
		}
		else if (node_name == "iconID"){
			s.iconID = i.GetInt16();
		}
		else if (node_name == "leagueFlag"){
			s.leagueFlag = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SSpyBeReported& s,  UJsonNode& n)
{
	n.push_back("notify_type", s.notify_type);
	n.push_back("playerName", s.playerName);
	n.push_back("iconID", s.iconID);
	n.push_back("leagueFlag", s.leagueFlag);
}


bool ReadFromJson( Ls::SLeagueEventNotify& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "league_name"){
			s.league_name = i.GetString();
		}
		else if (node_name == "member_name"){
			s.member_name = i.GetString();
		}
		else if (node_name == "member_name2"){
			s.member_name2 = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLeagueEventNotify& s,  UJsonNode& n)
{
	n.push_back("league_name", s.league_name);
	n.push_back("member_name", s.member_name);
	n.push_back("member_name2", s.member_name2);
}


bool ReadFromJson( Ls::SDeclareWarReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "d_r_n"){
			s.d_r_n = i.GetString();
		}
		else if (node_name == "d_l_n"){
			s.d_l_n = i.GetString();
		}
		else if (node_name == "b_l_n"){
			s.b_l_n = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDeclareWarReport& s,  UJsonNode& n)
{
	n.push_back("d_r_n", s.d_r_n);
	n.push_back("d_l_n", s.d_l_n);
	n.push_back("b_l_n", s.b_l_n);
}


bool ReadFromJson( Ls::SFightWarReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "d_r_n"){
			s.d_r_n = i.GetString();
		}
		else if (node_name == "d_l_n"){
			s.d_l_n = i.GetString();
		}
		else if (node_name == "d_l_t"){
			s.d_l_t = i.GetString();
		}
		else if (node_name == "b_l_t"){
			s.b_l_t = i.GetString();
		}
		else if (node_name == "b_l_n"){
			s.b_l_n = i.GetString();
		}
		else if (node_name == "b_r_n"){
			s.b_r_n = i.GetString();
		}
		else if (node_name == "K"){
			s.K = i.GetInt32();
		}
		else if (node_name == "X"){
			s.X = i.GetInt32();
		}
		else if (node_name == "Y"){
			s.Y = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SFightWarReport& s,  UJsonNode& n)
{
	n.push_back("d_r_n", s.d_r_n);
	n.push_back("d_l_n", s.d_l_n);
	n.push_back("d_l_t", s.d_l_t);
	n.push_back("b_l_t", s.b_l_t);
	n.push_back("b_l_n", s.b_l_n);
	n.push_back("b_r_n", s.b_r_n);
	n.push_back("K", s.K);
	n.push_back("X", s.X);
	n.push_back("Y", s.Y);
}


bool ReadFromJson( Ls::SMakePeaceReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "a"){
			s.a = i.GetInt32();
		}
		else if (node_name == "a_l_n"){
			s.a_l_n = i.GetString();
		}
		else if (node_name == "r_r_n"){
			s.r_r_n = i.GetString();
		}
		else if (node_name == "r_l_n"){
			s.r_l_n = i.GetString();
		}
		else if (node_name == "r_l_t"){
			s.r_l_t = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMakePeaceReport& s,  UJsonNode& n)
{
	n.push_back("a", s.a);
	n.push_back("a_l_n", s.a_l_n);
	n.push_back("r_r_n", s.r_r_n);
	n.push_back("r_l_n", s.r_l_n);
	n.push_back("r_l_t", s.r_l_t);
}


bool ReadFromJson( Ls::SLeagueResultReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "w_t"){
			s.w_t = i.GetString();
		}
		else if (node_name == "w_n"){
			s.w_n = i.GetString();
		}
		else if (node_name == "w_r"){
			s.w_r = i.GetString();
		}
		else if (node_name == "l_t"){
			s.l_t = i.GetString();
		}
		else if (node_name == "l_n"){
			s.l_n = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLeagueResultReport& s,  UJsonNode& n)
{
	n.push_back("w_t", s.w_t);
	n.push_back("w_n", s.w_n);
	n.push_back("w_r", s.w_r);
	n.push_back("l_t", s.l_t);
	n.push_back("l_n", s.l_n);
}


bool ReadFromJson( Ls::SRoleInfoReserve& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "magic_dust"){
			s.magic_dust = i.GetInt32();
		}
		else if (node_name == "pay_str"){
			s.pay_str = i.GetString();
		}
		else if (node_name == "platform"){
			s.platform = i.GetString();
		}
		else if (node_name == "log_url"){
			s.log_url = i.GetString();
		}
		else if (node_name == "log_upload"){
			s.log_upload = i.GetInt32();
		}
		else if (node_name == "log_level"){
			s.log_level = i.GetInt32();
		}
		else if (node_name == "left_find"){
			s.left_find = i.GetInt32();
		}
		else if (node_name == "HotURL"){
			s.HotURL = i.GetString();
		}
		else if (node_name == "open_id"){
			s.open_id = i.GetString();
		}
		else if (node_name == "race_list"){
			ReadFromJson( s.race_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "first_pay_list"){
			ReadFromJson( s.first_pay_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRoleInfoReserve& s,  UJsonNode& n)
{
	n.push_back("magic_dust", s.magic_dust);
	n.push_back("pay_str", s.pay_str);
	n.push_back("platform", s.platform);
	n.push_back("log_url", s.log_url);
	n.push_back("log_upload", s.log_upload);
	n.push_back("log_level", s.log_level);
	n.push_back("left_find", s.left_find);
	n.push_back("HotURL", s.HotURL);
	n.push_back("open_id", s.open_id);
	UJsonNode jnode0;
	WriteToJson( s.race_list, jnode0 );
	n.push_back("race_list", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.first_pay_list, jnode1 );
	n.push_back("first_pay_list", jnode1 );
}


bool ReadFromJson( Ls::DB_Fd& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "fd"){
			s.fd = i.GetString();
		}
		else if (node_name == "data"){
			s.data = i.GetString();
		}
		else if (node_name == "dataType"){
			s.dataType = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::DB_Fd& s,  UJsonNode& n)
{
	n.push_back("fd", s.fd);
	n.push_back("data", s.data);
	n.push_back("dataType", s.dataType);
}


bool ReadFromJson( Ls::VecDB_Fd& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::DB_Fd value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecDB_Fd& s,  UJsonNode& n)
{
	Ls::VecDB_Fd::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::DB_Player_Info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "roleid"){
			s.roleid = i.GetUInt32();
		}
		else if (node_name == "vecData"){
			ReadFromJson( s.vecData, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::DB_Player_Info& s,  UJsonNode& n)
{
	n.push_back("roleid", s.roleid);
	UJsonNode jnode0;
	WriteToJson( s.vecData, jnode0 );
	n.push_back("vecData", jnode0 );
}


bool ReadFromJson( Ls::DB_Create_Info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "table"){
			s.table = i.GetString();
		}
		else if (node_name == "where"){
			s.where = i.GetString();
		}
		else if (node_name == "vecData"){
			ReadFromJson( s.vecData, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::DB_Create_Info& s,  UJsonNode& n)
{
	n.push_back("table", s.table);
	n.push_back("where", s.where);
	UJsonNode jnode0;
	WriteToJson( s.vecData, jnode0 );
	n.push_back("vecData", jnode0 );
}


bool ReadFromJson( Ls::SOneCipher& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "idCipher"){
			s.idCipher = i.GetUInt32();
		}
		else if (node_name == "state"){
			s.state = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SOneCipher& s,  UJsonNode& n)
{
	n.push_back("idCipher", s.idCipher);
	n.push_back("state", s.state);
}


bool ReadFromJson( Ls::VecSOneCipher& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SOneCipher value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSOneCipher& s,  UJsonNode& n)
{
	Ls::VecSOneCipher::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::STowerCard& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "_idCard"){
			s._idCard = i.GetUInt32();
		}
		else if (node_name == "_cipher"){
			ReadFromJson( s._cipher, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::STowerCard& s,  UJsonNode& n)
{
	n.push_back("_idCard", s._idCard);
	UJsonNode jnode0;
	WriteToJson( s._cipher, jnode0 );
	n.push_back("_cipher", jnode0 );
}


bool ReadFromJson( Ls::SDailyTask& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "_taskID"){
			s._taskID = i.GetUInt32();
		}
		else if (node_name == "_curCipherID"){
			s._curCipherID = i.GetUInt32();
		}
		else if (node_name == "_taskTime"){
			s._taskTime = i.GetInt32();
		}
		else if (node_name == "_dayliTaskState"){
			s._dayliTaskState = i.GetInt32();
		}
		else if (node_name == "_reward"){
			ReadFromJson( s._reward, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "heroID"){
			s.heroID = i.GetUInt32();
		}
		else if (node_name == "_spe_reward"){
			ReadFromJson( s._spe_reward, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "getSpeReward"){
			s.getSpeReward = i.GetBool();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDailyTask& s,  UJsonNode& n)
{
	n.push_back("_taskID", s._taskID);
	n.push_back("_curCipherID", s._curCipherID);
	n.push_back("_taskTime", s._taskTime);
	n.push_back("_dayliTaskState", s._dayliTaskState);
	UJsonNode jnode0;
	WriteToJson( s._reward, jnode0 );
	n.push_back("_reward", jnode0 );
	n.push_back("heroID", s.heroID);
	UJsonNode jnode1;
	WriteToJson( s._spe_reward, jnode1 );
	n.push_back("_spe_reward", jnode1 );
	n.push_back("getSpeReward", s.getSpeReward);
}


bool ReadFromJson( Ls::VecSDailyTask& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SDailyTask value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSDailyTask& s,  UJsonNode& n)
{
	Ls::VecSDailyTask::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SCurDailyTask& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "taskID"){
			s.taskID = i.GetUInt32();
		}
		else if (node_name == "endTime"){
			s.endTime = i.GetUInt32();
		}
		else if (node_name == "heroID"){
			s.heroID = i.GetUInt32();
		}
		else if (node_name == "startTime"){
			s.startTime = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCurDailyTask& s,  UJsonNode& n)
{
	n.push_back("taskID", s.taskID);
	n.push_back("endTime", s.endTime);
	n.push_back("heroID", s.heroID);
	n.push_back("startTime", s.startTime);
}


bool ReadFromJson( Ls::SPlayerDailyTask& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "vecTask"){
			ReadFromJson( s.vecTask, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "curTask"){
			ReadFromJson( s.curTask, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "tarot"){
			ReadFromJson( s.tarot, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "lastFlush"){
			s.lastFlush = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SPlayerDailyTask& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.vecTask, jnode0 );
	n.push_back("vecTask", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.curTask, jnode1 );
	n.push_back("curTask", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.tarot, jnode2 );
	n.push_back("tarot", jnode2 );
	n.push_back("lastFlush", s.lastFlush);
}


bool ReadFromJson( Ls::STaskData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "itemID"){
			s.itemID = i.GetUInt32();
		}
		else if (node_name == "count"){
			s.count = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::STaskData& s,  UJsonNode& n)
{
	n.push_back("itemID", s.itemID);
	n.push_back("count", s.count);
}


bool ReadFromJson( Ls::VecSTaskData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::STaskData value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSTaskData& s,  UJsonNode& n)
{
	Ls::VecSTaskData::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SEmpireTask& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "taskID"){
			s.taskID = i.GetUInt32();
		}
		else if (node_name == "taskSingleData"){
			s.taskSingleData = i.GetInt32();
		}
		else if (node_name == "taskState"){
			s.taskState = i.GetInt32();
		}
		else if (node_name == "vecData"){
			ReadFromJson( s.vecData, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SEmpireTask& s,  UJsonNode& n)
{
	n.push_back("taskID", s.taskID);
	n.push_back("taskSingleData", s.taskSingleData);
	n.push_back("taskState", s.taskState);
	UJsonNode jnode0;
	WriteToJson( s.vecData, jnode0 );
	n.push_back("vecData", jnode0 );
}


bool ReadFromJson( Ls::VecSEmpireTask& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SEmpireTask value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSEmpireTask& s,  UJsonNode& n)
{
	Ls::VecSEmpireTask::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::IntKeyValue& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "key"){
			s.key = i.GetUInt32();
		}
		else if (node_name == "value"){
			s.value = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::IntKeyValue& s,  UJsonNode& n)
{
	n.push_back("key", s.key);
	n.push_back("value", s.value);
}


bool ReadFromJson( Ls::VecIntKeyValue& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::IntKeyValue value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecIntKeyValue& s,  UJsonNode& n)
{
	Ls::VecIntKeyValue::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SPlayerMagic& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "vecCard"){
			ReadFromJson( s.vecCard, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "vecRes"){
			ReadFromJson( s.vecRes, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "dust"){
			s.dust = i.GetInt32();
		}
		else if (node_name == "newHelp"){
			s.newHelp = i.GetInt32();
		}
		else if (node_name == "helpCard"){
			s.helpCard = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SPlayerMagic& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.vecCard, jnode0 );
	n.push_back("vecCard", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.vecRes, jnode1 );
	n.push_back("vecRes", jnode1 );
	n.push_back("dust", s.dust);
	n.push_back("newHelp", s.newHelp);
	n.push_back("helpCard", s.helpCard);
}


bool ReadFromJson( Ls::SHeroSkill& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "skillID"){
			s.skillID = i.GetInt32();
		}
		else if (node_name == "skillPoint"){
			s.skillPoint = i.GetInt16();
		}
		else if (node_name == "isEffect"){
			s.isEffect = i.GetInt16();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SHeroSkill& s,  UJsonNode& n)
{
	n.push_back("skillID", s.skillID);
	n.push_back("skillPoint", s.skillPoint);
	n.push_back("isEffect", s.isEffect);
}


bool ReadFromJson( Ls::SHeroData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "_heroID"){
			s._heroID = i.GetUInt32();
		}
		else if (node_name == "_heroName"){
			s._heroName = i.GetString();
		}
		else if (node_name == "_heroFace"){
			s._heroFace = i.GetInt32();
		}
		else if (node_name == "_heroCity"){
			s._heroCity = i.GetUInt32();
		}
		else if (node_name == "_sex"){
			s._sex = i.GetUInt32();
		}
		else if (node_name == "_heroLevel"){
			s._heroLevel = i.GetInt32();
		}
		else if (node_name == "_heroExp"){
			s._heroExp = i.GetInt32();
		}
		else if (node_name == "_heroSkillPoint"){
			s._heroSkillPoint = i.GetInt16();
		}
		else if (node_name == "_heroSkill1"){
			ReadFromJson( s._heroSkill1, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "_heroSkill2"){
			ReadFromJson( s._heroSkill2, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "_heroSkill3"){
			ReadFromJson( s._heroSkill3, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "_heroPower"){
			s._heroPower = i.GetInt32();
		}
		else if (node_name == "_heroGrade"){
			s._heroGrade = i.GetInt32();
		}
		else if (node_name == "_heroState"){
			s._heroState = i.GetInt32();
		}
		else if (node_name == "_heroPos"){
			s._heroPos = i.GetUInt32();
		}
		else if (node_name == "_heroJob"){
			ReadFromJson( s._heroJob, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "_captiveCity"){
			s._captiveCity = i.GetUInt32();
		}
		else if (node_name == "_marchID"){
			s._marchID = i.GetUInt32();
		}
		else if (node_name == "_releaseTime"){
			s._releaseTime = i.GetInt32();
		}
		else if (node_name == "sendhelp"){
			s.sendhelp = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SHeroData& s,  UJsonNode& n)
{
	n.push_back("_heroID", s._heroID);
	n.push_back("_heroName", s._heroName);
	n.push_back("_heroFace", s._heroFace);
	n.push_back("_heroCity", s._heroCity);
	n.push_back("_sex", s._sex);
	n.push_back("_heroLevel", s._heroLevel);
	n.push_back("_heroExp", s._heroExp);
	n.push_back("_heroSkillPoint", s._heroSkillPoint);
	UJsonNode jnode0;
	WriteToJson( s._heroSkill1, jnode0 );
	n.push_back("_heroSkill1", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s._heroSkill2, jnode1 );
	n.push_back("_heroSkill2", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s._heroSkill3, jnode2 );
	n.push_back("_heroSkill3", jnode2 );
	n.push_back("_heroPower", s._heroPower);
	n.push_back("_heroGrade", s._heroGrade);
	n.push_back("_heroState", s._heroState);
	n.push_back("_heroPos", s._heroPos);
	UJsonNode jnode3;
	WriteToJson( s._heroJob, jnode3 );
	n.push_back("_heroJob", jnode3 );
	n.push_back("_captiveCity", s._captiveCity);
	n.push_back("_marchID", s._marchID);
	n.push_back("_releaseTime", s._releaseTime);
	n.push_back("sendhelp", s.sendhelp);
}


bool ReadFromJson( Ls::VecSHeroData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SHeroData value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSHeroData& s,  UJsonNode& n)
{
	Ls::VecSHeroData::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SUIntValue& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "val"){
			s.val = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SUIntValue& s,  UJsonNode& n)
{
	n.push_back("val", s.val);
}


bool ReadFromJson( Ls::VecSUIntValue& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SUIntValue value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSUIntValue& s,  UJsonNode& n)
{
	Ls::VecSUIntValue::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SAllHeroData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "vecHero"){
			ReadFromJson( s.vecHero, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "otherHero"){
			ReadFromJson( s.otherHero, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SAllHeroData& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.vecHero, jnode0 );
	n.push_back("vecHero", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.otherHero, jnode1 );
	n.push_back("otherHero", jnode1 );
}


bool ReadFromJson( Ls::SSystemMailData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "notify_type"){
			s.notify_type = i.GetInt32();
		}
		else if (node_name == "content"){
			s.content = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SSystemMailData& s,  UJsonNode& n)
{
	n.push_back("notify_type", s.notify_type);
	n.push_back("content", s.content);
}


bool ReadFromJson( Ls::SCastleFace& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "cfg_id"){
			s.cfg_id = i.GetInt32();
		}
		else if (node_name == "left_time"){
			s.left_time = i.GetInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		else if (node_name == "item_id"){
			s.item_id = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCastleFace& s,  UJsonNode& n)
{
	n.push_back("cfg_id", s.cfg_id);
	n.push_back("left_time", s.left_time);
	n.push_back("end_time", s.end_time);
	n.push_back("item_id", s.item_id);
}


bool ReadFromJson( Ls::SBigMapCastleInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "last_defence"){
			s.last_defence = i.GetInt32();
		}
		else if (node_name == "result"){
			s.result = i.GetInt32();
		}
		else if (node_name == "power"){
			s.power = i.GetInt32();
		}
		else if (node_name == "loseinfo"){
			ReadFromJson( s.loseinfo, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "relic_count"){
			s.relic_count = i.GetInt32();
		}
		else if (node_name == "has_6relic"){
			s.has_6relic = i.GetInt8();
		}
		else if (node_name == "has_captive"){
			s.has_captive = i.GetInt32();
		}
		else if (node_name == "last_march"){
			s.last_march = i.GetInt32();
		}
		else if (node_name == "castle_face"){
			ReadFromJson( s.castle_face, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "city_race"){
			s.city_race = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SBigMapCastleInfo& s,  UJsonNode& n)
{
	n.push_back("last_defence", s.last_defence);
	n.push_back("result", s.result);
	n.push_back("power", s.power);
	UJsonNode jnode0;
	WriteToJson( s.loseinfo, jnode0 );
	n.push_back("loseinfo", jnode0 );
	n.push_back("relic_count", s.relic_count);
	n.push_back("has_6relic", s.has_6relic);
	n.push_back("has_captive", s.has_captive);
	n.push_back("last_march", s.last_march);
	UJsonNode jnode1;
	WriteToJson( s.castle_face, jnode1 );
	n.push_back("castle_face", jnode1 );
	n.push_back("city_race", s.city_race);
}


bool ReadFromJson( Ls::SInnerCastleInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "last_defence"){
			s.last_defence = i.GetInt32();
		}
		else if (node_name == "result"){
			s.result = i.GetInt32();
		}
		else if (node_name == "embassy"){
			s.embassy = i.GetInt32();
		}
		else if (node_name == "max_tribe"){
			s.max_tribe = i.GetInt64();
		}
		else if (node_name == "left_tribe"){
			s.left_tribe = i.GetInt64();
		}
		else if (node_name == "max_guard"){
			s.max_guard = i.GetInt64();
		}
		else if (node_name == "left_guard"){
			s.left_guard = i.GetInt64();
		}
		else if (node_name == "max_hurt"){
			s.max_hurt = i.GetInt64();
		}
		else if (node_name == "max_aid"){
			s.max_aid = i.GetInt64();
		}
		else if (node_name == "cur_aid"){
			s.cur_aid = i.GetInt64();
		}
		else if (node_name == "weright_add"){
			s.weright_add = i.GetInt64();
		}
		else if (node_name == "league_range"){
			s.league_range = i.GetInt32();
		}
		else if (node_name == "castle_face"){
			ReadFromJson( s.castle_face, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SInnerCastleInfo& s,  UJsonNode& n)
{
	n.push_back("last_defence", s.last_defence);
	n.push_back("result", s.result);
	n.push_back("embassy", s.embassy);
	n.push_back("max_tribe", s.max_tribe);
	n.push_back("left_tribe", s.left_tribe);
	n.push_back("max_guard", s.max_guard);
	n.push_back("left_guard", s.left_guard);
	n.push_back("max_hurt", s.max_hurt);
	n.push_back("max_aid", s.max_aid);
	n.push_back("cur_aid", s.cur_aid);
	n.push_back("weright_add", s.weright_add);
	n.push_back("league_range", s.league_range);
	UJsonNode jnode0;
	WriteToJson( s.castle_face, jnode0 );
	n.push_back("castle_face", jnode0 );
}


bool ReadFromJson( Ls::SLogInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "role_name"){
			s.role_name = i.GetString();
		}
		else if (node_name == "config_id"){
			s.config_id = i.GetUInt64();
		}
		else if (node_name == "config_num"){
			s.config_num = i.GetInt64();
		}
		else if (node_name == "log_time"){
			s.log_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLogInfo& s,  UJsonNode& n)
{
	n.push_back("role_name", s.role_name);
	n.push_back("config_id", s.config_id);
	n.push_back("config_num", s.config_num);
	n.push_back("log_time", s.log_time);
}


bool ReadFromJson( Ls::VecSLogInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SLogInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSLogInfo& s,  UJsonNode& n)
{
	Ls::VecSLogInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SLeagueKey& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "key"){
			s.key = i.GetString();
		}
		else if (node_name == "league_id"){
			s.league_id = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLeagueKey& s,  UJsonNode& n)
{
	n.push_back("key", s.key);
	n.push_back("league_id", s.league_id);
}


bool ReadFromJson( Ls::SWarRecord& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "war_type"){
			s.war_type = i.GetInt32();
		}
		else if (node_name == "attacker"){
			s.attacker = i.GetString();
		}
		else if (node_name == "attack_tag"){
			s.attack_tag = i.GetString();
		}
		else if (node_name == "defender"){
			s.defender = i.GetString();
		}
		else if (node_name == "defend_tag"){
			s.defend_tag = i.GetString();
		}
		else if (node_name == "war_result"){
			s.war_result = i.GetInt32();
		}
		else if (node_name == "war_time"){
			s.war_time = i.GetInt32();
		}
		else if (node_name == "fight_x"){
			s.fight_x = i.GetInt32();
		}
		else if (node_name == "fight_y"){
			s.fight_y = i.GetInt32();
		}
		else if (node_name == "kingdom_id"){
			s.kingdom_id = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SWarRecord& s,  UJsonNode& n)
{
	n.push_back("war_type", s.war_type);
	n.push_back("attacker", s.attacker);
	n.push_back("attack_tag", s.attack_tag);
	n.push_back("defender", s.defender);
	n.push_back("defend_tag", s.defend_tag);
	n.push_back("war_result", s.war_result);
	n.push_back("war_time", s.war_time);
	n.push_back("fight_x", s.fight_x);
	n.push_back("fight_y", s.fight_y);
	n.push_back("kingdom_id", s.kingdom_id);
}


bool ReadFromJson( Ls::VecSWarRecord& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SWarRecord value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSWarRecord& s,  UJsonNode& n)
{
	Ls::VecSWarRecord::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SLeagueInfoReverse& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "u_capital"){
			s.u_capital = i.GetInt64();
		}
		else if (node_name == "max_level"){
			s.max_level = i.GetInt32();
		}
		else if (node_name == "indenture"){
			s.indenture = i.GetInt64();
		}
		else if (node_name == "manuscript"){
			s.manuscript = i.GetInt64();
		}
		else if (node_name == "castle_state"){
			s.castle_state = i.GetInt32();
		}
		else if (node_name == "fight_count"){
			s.fight_count = i.GetInt32();
		}
		else if (node_name == "league_local"){
			s.league_local = i.GetString();
		}
		else if (node_name == "boom_data"){
			s.boom_data = i.GetString();
		}
		else if (node_name == "last_exile_time"){
			s.last_exile_time = i.GetInt32();
		}
		else if (node_name == "last_comment"){
			s.last_comment = i.GetInt32();
		}
		else if (node_name == "last_fresh"){
			s.last_fresh = i.GetInt32();
		}
		else if (node_name == "last_buy"){
			s.last_buy = i.GetInt32();
		}
		else if (node_name == "city_power"){
			s.city_power = i.GetInt64();
		}
		else if (node_name == "army_power"){
			s.army_power = i.GetInt64();
		}
		else if (node_name == "army_count"){
			s.army_count = i.GetInt64();
		}
		else if (node_name == "loseinfo"){
			ReadFromJson( s.loseinfo, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "enemyList"){
			ReadFromJson( s.enemyList, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "gift_level"){
			s.gift_level = i.GetInt32();
		}
		else if (node_name == "gift_point"){
			s.gift_point = i.GetInt64();
		}
		else if (node_name == "need_level"){
			s.need_level = i.GetInt32();
		}
		else if (node_name == "need_power"){
			s.need_power = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLeagueInfoReverse& s,  UJsonNode& n)
{
	n.push_back("u_capital", s.u_capital);
	n.push_back("max_level", s.max_level);
	n.push_back("indenture", s.indenture);
	n.push_back("manuscript", s.manuscript);
	n.push_back("castle_state", s.castle_state);
	n.push_back("fight_count", s.fight_count);
	n.push_back("league_local", s.league_local);
	n.push_back("boom_data", s.boom_data);
	n.push_back("last_exile_time", s.last_exile_time);
	n.push_back("last_comment", s.last_comment);
	n.push_back("last_fresh", s.last_fresh);
	n.push_back("last_buy", s.last_buy);
	n.push_back("city_power", s.city_power);
	n.push_back("army_power", s.army_power);
	n.push_back("army_count", s.army_count);
	UJsonNode jnode0;
	WriteToJson( s.loseinfo, jnode0 );
	n.push_back("loseinfo", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.enemyList, jnode1 );
	n.push_back("enemyList", jnode1 );
	n.push_back("gift_level", s.gift_level);
	n.push_back("gift_point", s.gift_point);
	n.push_back("need_level", s.need_level);
	n.push_back("need_power", s.need_power);
}


bool ReadFromJson( Ls::SRuleSystem& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "sys_pos"){
			s.sys_pos = i.GetUInt32();
		}
		else if (node_name == "sys_id"){
			s.sys_id = i.GetUInt32();
		}
		else if (node_name == "sys_level"){
			s.sys_level = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRuleSystem& s,  UJsonNode& n)
{
	n.push_back("sys_pos", s.sys_pos);
	n.push_back("sys_id", s.sys_id);
	n.push_back("sys_level", s.sys_level);
}


bool ReadFromJson( Ls::VecSRuleSystem& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SRuleSystem value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSRuleSystem& s,  UJsonNode& n)
{
	Ls::VecSRuleSystem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SCountrySystem& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "sys_id"){
			s.sys_id = i.GetUInt32();
		}
		else if (node_name == "sys_state"){
			s.sys_state = i.GetInt32();
		}
		else if (node_name == "sys_active"){
			s.sys_active = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCountrySystem& s,  UJsonNode& n)
{
	n.push_back("sys_id", s.sys_id);
	n.push_back("sys_state", s.sys_state);
	n.push_back("sys_active", s.sys_active);
}


bool ReadFromJson( Ls::VecSCountrySystem& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SCountrySystem value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSCountrySystem& s,  UJsonNode& n)
{
	Ls::VecSCountrySystem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SSystemInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "sys_target"){
			s.sys_target = i.GetUInt32();
		}
		else if (node_name == "accumulated"){
			s.accumulated = i.GetInt32();
		}
		else if (node_name == "interior_reform"){
			s.interior_reform = i.GetInt32();
		}
		else if (node_name == "military_reform"){
			s.military_reform = i.GetInt32();
		}
		else if (node_name == "freedom_list"){
			ReadFromJson( s.freedom_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "reason_list"){
			ReadFromJson( s.reason_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "honour_list"){
			ReadFromJson( s.honour_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "interior_list"){
			ReadFromJson( s.interior_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "military_list"){
			ReadFromJson( s.military_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SSystemInfo& s,  UJsonNode& n)
{
	n.push_back("sys_target", s.sys_target);
	n.push_back("accumulated", s.accumulated);
	n.push_back("interior_reform", s.interior_reform);
	n.push_back("military_reform", s.military_reform);
	UJsonNode jnode0;
	WriteToJson( s.freedom_list, jnode0 );
	n.push_back("freedom_list", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.reason_list, jnode1 );
	n.push_back("reason_list", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.honour_list, jnode2 );
	n.push_back("honour_list", jnode2 );
	UJsonNode jnode3;
	WriteToJson( s.interior_list, jnode3 );
	n.push_back("interior_list", jnode3 );
	UJsonNode jnode4;
	WriteToJson( s.military_list, jnode4 );
	n.push_back("military_list", jnode4 );
}


bool ReadFromJson( Ls::SCultureInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "cur_value"){
			s.cur_value = i.GetInt64();
		}
		else if (node_name == "hour_output"){
			s.hour_output = i.GetInt32();
		}
		else if (node_name == "output_add"){
			s.output_add = i.GetInt32();
		}
		else if (node_name == "accumulated_culture"){
			s.accumulated_culture = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCultureInfo& s,  UJsonNode& n)
{
	n.push_back("cur_value", s.cur_value);
	n.push_back("hour_output", s.hour_output);
	n.push_back("output_add", s.output_add);
	n.push_back("accumulated_culture", s.accumulated_culture);
}


bool ReadFromJson( Ls::SProgressInfoEx& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "config_num"){
			s.config_num = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SProgressInfoEx& s,  UJsonNode& n)
{
	n.push_back("config_num", s.config_num);
}


bool ReadFromJson( Ls::SMagicBoxInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "cur_num"){
			s.cur_num = i.GetInt32();
		}
		else if (node_name == "endTime"){
			s.endTime = i.GetUInt32();
		}
		else if (node_name == "lastStart"){
			s.lastStart = i.GetUInt32();
		}
		else if (node_name == "getTimes"){
			s.getTimes = i.GetUInt32();
		}
		else if (node_name == "curBox"){
			s.curBox = i.GetUInt32();
		}
		else if (node_name == "param1"){
			s.param1 = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMagicBoxInfo& s,  UJsonNode& n)
{
	n.push_back("cur_num", s.cur_num);
	n.push_back("endTime", s.endTime);
	n.push_back("lastStart", s.lastStart);
	n.push_back("getTimes", s.getTimes);
	n.push_back("curBox", s.curBox);
	n.push_back("param1", s.param1);
}


bool ReadFromJson( Ls::SLegendBoxInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "cur_state"){
			s.cur_state = i.GetInt32();
		}
		else if (node_name == "cur_num"){
			s.cur_num = i.GetInt32();
		}
		else if (node_name == "total_num"){
			s.total_num = i.GetInt32();
		}
		else if (node_name == "lastTime"){
			s.lastTime = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLegendBoxInfo& s,  UJsonNode& n)
{
	n.push_back("cur_state", s.cur_state);
	n.push_back("cur_num", s.cur_num);
	n.push_back("total_num", s.total_num);
	n.push_back("lastTime", s.lastTime);
}


bool ReadFromJson( Ls::SOrderRewardInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "order_type"){
			s.order_type = i.GetInt32();
		}
		else if (node_name == "order_rank"){
			s.order_rank = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SOrderRewardInfo& s,  UJsonNode& n)
{
	n.push_back("order_type", s.order_type);
	n.push_back("order_rank", s.order_rank);
}


bool ReadFromJson( Ls::SOrderRewardInfoNtf& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "order_rank"){
			s.order_rank = i.GetInt32();
		}
		else if (node_name == "player_name"){
			s.player_name = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SOrderRewardInfoNtf& s,  UJsonNode& n)
{
	n.push_back("order_rank", s.order_rank);
	n.push_back("player_name", s.player_name);
}


bool ReadFromJson( Ls::VecSOrderRewardInfoNtf& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SOrderRewardInfoNtf value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSOrderRewardInfoNtf& s,  UJsonNode& n)
{
	Ls::VecSOrderRewardInfoNtf::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SOrderRewardNtf& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "order_type"){
			s.order_type = i.GetInt32();
		}
		else if (node_name == "reward_list"){
			ReadFromJson( s.reward_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SOrderRewardNtf& s,  UJsonNode& n)
{
	n.push_back("order_type", s.order_type);
	UJsonNode jnode0;
	WriteToJson( s.reward_list, jnode0 );
	n.push_back("reward_list", jnode0 );
}


bool ReadFromJson( Ls::SArmyInfoEx& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "army_type"){
			s.army_type = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SArmyInfoEx& s,  UJsonNode& n)
{
	n.push_back("army_type", s.army_type);
}


bool ReadFromJson( Ls::ROLE& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "role_all_info"){
			s.role_all_info = i.GetString();
		}
		else if (node_name == "role_strength_info"){
			s.role_strength_info = i.GetString();
		}
		else if (node_name == "role_hero_info"){
			s.role_hero_info = i.GetString();
		}
		else if (node_name == "role_game_info"){
			s.role_game_info = i.GetString();
		}
		else if (node_name == "collet_pos"){
			s.collet_pos = i.GetString();
		}
		else if (node_name == "daily_task"){
			s.daily_task = i.GetString();
		}
		else if (node_name == "empire_task"){
			s.empire_task = i.GetString();
		}
		else if (node_name == "league_info"){
			s.league_info = i.GetString();
		}
		else if (node_name == "technolog_info"){
			s.technolog_info = i.GetString();
		}
		else if (node_name == "reserve_force"){
			s.reserve_force = i.GetString();
		}
		else if (node_name == "magic_force"){
			s.magic_force = i.GetString();
		}
		else if (node_name == "statitics_info"){
			s.statitics_info = i.GetString();
		}
		else if (node_name == "league_task"){
			s.league_task = i.GetString();
		}
		else if (node_name == "system_info"){
			s.system_info = i.GetString();
		}
		else if (node_name == "vip_task"){
			s.vip_task = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::ROLE& s,  UJsonNode& n)
{
	n.push_back("role_all_info", s.role_all_info);
	n.push_back("role_strength_info", s.role_strength_info);
	n.push_back("role_hero_info", s.role_hero_info);
	n.push_back("role_game_info", s.role_game_info);
	n.push_back("collet_pos", s.collet_pos);
	n.push_back("daily_task", s.daily_task);
	n.push_back("empire_task", s.empire_task);
	n.push_back("league_info", s.league_info);
	n.push_back("technolog_info", s.technolog_info);
	n.push_back("reserve_force", s.reserve_force);
	n.push_back("magic_force", s.magic_force);
	n.push_back("statitics_info", s.statitics_info);
	n.push_back("league_task", s.league_task);
	n.push_back("system_info", s.system_info);
	n.push_back("vip_task", s.vip_task);
}


bool ReadFromJson( Ls::CASTLE& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "base_info"){
			s.base_info = i.GetString();
		}
		else if (node_name == "build_info"){
			s.build_info = i.GetString();
		}
		else if (node_name == "population"){
			s.population = i.GetString();
		}
		else if (node_name == "food_res"){
			s.food_res = i.GetString();
		}
		else if (node_name == "wood_res"){
			s.wood_res = i.GetString();
		}
		else if (node_name == "stone_res"){
			s.stone_res = i.GetString();
		}
		else if (node_name == "iron_res"){
			s.iron_res = i.GetString();
		}
		else if (node_name == "silver_res"){
			s.silver_res = i.GetString();
		}
		else if (node_name == "army_info"){
			s.army_info = i.GetString();
		}
		else if (node_name == "trap_info"){
			s.trap_info = i.GetString();
		}
		else if (node_name == "treat_info"){
			s.treat_info = i.GetString();
		}
		else if (node_name == "reserve_force"){
			s.reserve_force = i.GetString();
		}
		else if (node_name == "race_info"){
			s.race_info = i.GetString();
		}
		else if (node_name == "magic_info"){
			s.magic_info = i.GetString();
		}
		else if (node_name == "hero_info"){
			s.hero_info = i.GetString();
		}
		else if (node_name == "technolog_info"){
			s.technolog_info = i.GetString();
		}
		else if (node_name == "itembuff_info"){
			s.itembuff_info = i.GetString();
		}
		else if (node_name == "culture_info"){
			s.culture_info = i.GetString();
		}
		else if (node_name == "repair_info"){
			s.repair_info = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::CASTLE& s,  UJsonNode& n)
{
	n.push_back("base_info", s.base_info);
	n.push_back("build_info", s.build_info);
	n.push_back("population", s.population);
	n.push_back("food_res", s.food_res);
	n.push_back("wood_res", s.wood_res);
	n.push_back("stone_res", s.stone_res);
	n.push_back("iron_res", s.iron_res);
	n.push_back("silver_res", s.silver_res);
	n.push_back("army_info", s.army_info);
	n.push_back("trap_info", s.trap_info);
	n.push_back("treat_info", s.treat_info);
	n.push_back("reserve_force", s.reserve_force);
	n.push_back("race_info", s.race_info);
	n.push_back("magic_info", s.magic_info);
	n.push_back("hero_info", s.hero_info);
	n.push_back("technolog_info", s.technolog_info);
	n.push_back("itembuff_info", s.itembuff_info);
	n.push_back("culture_info", s.culture_info);
	n.push_back("repair_info", s.repair_info);
}


bool ReadFromJson( Ls::VecCastle& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::CASTLE value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecCastle& s,  UJsonNode& n)
{
	Ls::VecCastle::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::EQUIP& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "base_info"){
			s.base_info = i.GetString();
		}
		else if (node_name == "gem_info"){
			s.gem_info = i.GetString();
		}
		else if (node_name == "enchanting"){
			s.enchanting = i.GetString();
		}
		else if (node_name == "refine_info"){
			s.refine_info = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::EQUIP& s,  UJsonNode& n)
{
	n.push_back("base_info", s.base_info);
	n.push_back("gem_info", s.gem_info);
	n.push_back("enchanting", s.enchanting);
	n.push_back("refine_info", s.refine_info);
}


bool ReadFromJson( Ls::VecEquip& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::EQUIP value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecEquip& s,  UJsonNode& n)
{
	Ls::VecEquip::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::AccountData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "role"){
			ReadFromJson( s.role, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "castle_list"){
			ReadFromJson( s.castle_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "equip_list"){
			ReadFromJson( s.equip_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::AccountData& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.role, jnode0 );
	n.push_back("role", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.castle_list, jnode1 );
	n.push_back("castle_list", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.equip_list, jnode2 );
	n.push_back("equip_list", jnode2 );
}


bool ReadFromJson( Ls::SDonateReport& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "donate_classify"){
			s.donate_classify = i.GetInt32();
		}
		else if (node_name == "donate_result"){
			s.donate_result = i.GetInt32();
		}
		else if (node_name == "donate_type"){
			s.donate_type = i.GetInt32();
		}
		else if (node_name == "donate_num"){
			s.donate_num = i.GetInt64();
		}
		else if (node_name == "contribution"){
			s.contribution = i.GetInt64();
		}
		else if (node_name == "reward_item"){
			ReadFromJson( s.reward_item, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDonateReport& s,  UJsonNode& n)
{
	n.push_back("donate_classify", s.donate_classify);
	n.push_back("donate_result", s.donate_result);
	n.push_back("donate_type", s.donate_type);
	n.push_back("donate_num", s.donate_num);
	n.push_back("contribution", s.contribution);
	UJsonNode jnode0;
	WriteToJson( s.reward_item, jnode0 );
	n.push_back("reward_item", jnode0 );
}


bool ReadFromJson( Ls::SForgeInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "cdEndTime"){
			s.cdEndTime = i.GetUInt32();
		}
		else if (node_name == "equipid"){
			s.equipid = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SForgeInfo& s,  UJsonNode& n)
{
	n.push_back("cdEndTime", s.cdEndTime);
	n.push_back("equipid", s.equipid);
}


bool ReadFromJson( Ls::SMagicRecord& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "role_name"){
			s.role_name = i.GetString();
		}
		else if (node_name == "league_tag"){
			s.league_tag = i.GetString();
		}
		else if (node_name == "magic_id"){
			s.magic_id = i.GetUInt32();
		}
		else if (node_name == "magic_time"){
			s.magic_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMagicRecord& s,  UJsonNode& n)
{
	n.push_back("role_name", s.role_name);
	n.push_back("league_tag", s.league_tag);
	n.push_back("magic_id", s.magic_id);
	n.push_back("magic_time", s.magic_time);
}


bool ReadFromJson( Ls::VecSMagicRecord& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SMagicRecord value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSMagicRecord& s,  UJsonNode& n)
{
	Ls::VecSMagicRecord::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SAllianceGiftInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "this_id"){
			s.this_id = i.GetInt64();
		}
		else if (node_name == "gift_id"){
			s.gift_id = i.GetUInt32();
		}
		else if (node_name == "receive_time"){
			s.receive_time = i.GetInt32();
		}
		else if (node_name == "gift_state"){
			s.gift_state = i.GetInt32();
		}
		else if (node_name == "reward_item"){
			ReadFromJson( s.reward_item, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SAllianceGiftInfo& s,  UJsonNode& n)
{
	n.push_back("this_id", s.this_id);
	n.push_back("gift_id", s.gift_id);
	n.push_back("receive_time", s.receive_time);
	n.push_back("gift_state", s.gift_state);
	UJsonNode jnode0;
	WriteToJson( s.reward_item, jnode0 );
	n.push_back("reward_item", jnode0 );
}


bool ReadFromJson( Ls::VecSAllianceGiftInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SAllianceGiftInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSAllianceGiftInfo& s,  UJsonNode& n)
{
	Ls::VecSAllianceGiftInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SKeyValue& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "key"){
			s.key = i.GetString();
		}
		else if (node_name == "value"){
			s.value = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SKeyValue& s,  UJsonNode& n)
{
	n.push_back("key", s.key);
	n.push_back("value", s.value);
}


bool ReadFromJson( Ls::VecSKeyValue& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SKeyValue value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSKeyValue& s,  UJsonNode& n)
{
	Ls::VecSKeyValue::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SEnchantAttr& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "key"){
			s.key = i.GetString();
		}
		else if (node_name == "value"){
			s.value = i.GetInt32();
		}
		else if (node_name == "rate"){
			s.rate = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SEnchantAttr& s,  UJsonNode& n)
{
	n.push_back("key", s.key);
	n.push_back("value", s.value);
	n.push_back("rate", s.rate);
}


bool ReadFromJson( Ls::VecSEnchantAttr& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SEnchantAttr value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSEnchantAttr& s,  UJsonNode& n)
{
	Ls::VecSEnchantAttr::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SEnchGroup& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "groupID"){
			s.groupID = i.GetInt16();
		}
		else if (node_name == "value"){
			s.value = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SEnchGroup& s,  UJsonNode& n)
{
	n.push_back("groupID", s.groupID);
	n.push_back("value", s.value);
}


bool ReadFromJson( Ls::VecSEnchGroup& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SEnchGroup value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSEnchGroup& s,  UJsonNode& n)
{
	Ls::VecSEnchGroup::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SEnchanting& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "attr_group"){
			ReadFromJson( s.attr_group, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "attr"){
			ReadFromJson( s.attr, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SEnchanting& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.attr_group, jnode0 );
	n.push_back("attr_group", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.attr, jnode1 );
	n.push_back("attr", jnode1 );
}


bool ReadFromJson( Ls::SGemEquip& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "pos"){
			s.pos = i.GetInt32();
		}
		else if (node_name == "gem_id"){
			s.gem_id = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SGemEquip& s,  UJsonNode& n)
{
	n.push_back("pos", s.pos);
	n.push_back("gem_id", s.gem_id);
}


bool ReadFromJson( Ls::VecSGemEquip& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SGemEquip value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSGemEquip& s,  UJsonNode& n)
{
	Ls::VecSGemEquip::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SEquipGemInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "max_hole"){
			s.max_hole = i.GetInt32();
		}
		else if (node_name == "gem_info"){
			ReadFromJson( s.gem_info, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SEquipGemInfo& s,  UJsonNode& n)
{
	n.push_back("max_hole", s.max_hole);
	UJsonNode jnode0;
	WriteToJson( s.gem_info, jnode0 );
	n.push_back("gem_info", jnode0 );
}


bool ReadFromJson( Ls::SRefineData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "refine_attr"){
			ReadFromJson( s.refine_attr, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRefineData& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.refine_attr, jnode0 );
	n.push_back("refine_attr", jnode0 );
}


bool ReadFromJson( Ls::SRelicBase& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetUInt32();
		}
		else if (node_name == "template_id"){
			s.template_id = i.GetUInt32();
		}
		else if (node_name == "level"){
			s.level = i.GetInt32();
		}
		else if (node_name == "relic_type"){
			s.relic_type = i.GetInt32();
		}
		else if (node_name == "pos"){
			s.pos = i.GetInt32();
		}
		else if (node_name == "state"){
			s.state = i.GetInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRelicBase& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("template_id", s.template_id);
	n.push_back("level", s.level);
	n.push_back("relic_type", s.relic_type);
	n.push_back("pos", s.pos);
	n.push_back("state", s.state);
	n.push_back("end_time", s.end_time);
}


bool ReadFromJson( Ls::SRelicInMap& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "x"){
			s.x = i.GetInt32();
		}
		else if (node_name == "y"){
			s.y = i.GetInt32();
		}
		else if (node_name == "left_carry"){
			s.left_carry = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRelicInMap& s,  UJsonNode& n)
{
	n.push_back("x", s.x);
	n.push_back("y", s.y);
	n.push_back("left_carry", s.left_carry);
}


bool ReadFromJson( Ls::SRelicInCity& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "city_id"){
			s.city_id = i.GetUInt32();
		}
		else if (node_name == "idx"){
			s.idx = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRelicInCity& s,  UJsonNode& n)
{
	n.push_back("city_id", s.city_id);
	n.push_back("idx", s.idx);
}


bool ReadFromJson( Ls::SRelicOnTribe& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "level"){
			s.level = i.GetInt32();
		}
		else if (node_name == "tid"){
			s.tid = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRelicOnTribe& s,  UJsonNode& n)
{
	n.push_back("level", s.level);
	n.push_back("tid", s.tid);
}


bool ReadFromJson( Ls::SRelicInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "template_id"){
			s.template_id = i.GetUInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetUInt32();
		}
		else if (node_name == "posK"){
			s.posK = i.GetInt32();
		}
		else if (node_name == "posX"){
			s.posX = i.GetInt32();
		}
		else if (node_name == "posY"){
			s.posY = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRelicInfo& s,  UJsonNode& n)
{
	n.push_back("template_id", s.template_id);
	n.push_back("end_time", s.end_time);
	n.push_back("posK", s.posK);
	n.push_back("posX", s.posX);
	n.push_back("posY", s.posY);
}


bool ReadFromJson( Ls::MailStrTip& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "tip"){
			s.tip = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::MailStrTip& s,  UJsonNode& n)
{
	n.push_back("tip", s.tip);
}


bool ReadFromJson( Ls::SCarryInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "relic_id"){
			s.relic_id = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCarryInfo& s,  UJsonNode& n)
{
	n.push_back("relic_id", s.relic_id);
}


bool ReadFromJson( Ls::Goals& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetUInt32();
		}
		else if (node_name == "type"){
			s.type = i.GetInt32();
		}
		else if (node_name == "finish"){
			s.finish = i.GetUInt8();
		}
		else if (node_name == "value"){
			s.value = i.GetInt64();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::Goals& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("type", s.type);
	n.push_back("finish", s.finish);
	n.push_back("value", s.value);
}


bool ReadFromJson( Ls::Days& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::Goals value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::Days& s,  UJsonNode& n)
{
	Ls::Days::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SevenDaysInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "finish"){
			s.finish = i.GetUInt32();
		}
		else if (node_name == "day_list"){
			ReadFromJson( s.day_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SevenDaysInfo& s,  UJsonNode& n)
{
	n.push_back("finish", s.finish);
	UJsonNode jnode0;
	WriteToJson( s.day_list, jnode0 );
	n.push_back("day_list", jnode0 );
}


bool ReadFromJson( Ls::SevenDays& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SevenDaysInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::SevenDays& s,  UJsonNode& n)
{
	Ls::SevenDays::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SSevenDays& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "login_days"){
			s.login_days = i.GetUInt32();
		}
		else if (node_name == "day_info"){
			ReadFromJson( s.day_info, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SSevenDays& s,  UJsonNode& n)
{
	n.push_back("login_days", s.login_days);
	UJsonNode jnode0;
	WriteToJson( s.day_info, jnode0 );
	n.push_back("day_info", jnode0 );
}


bool ReadFromJson( Ls::SMonthCardInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "card_id"){
			s.card_id = i.GetUInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		else if (node_name == "is_get"){
			s.is_get = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMonthCardInfo& s,  UJsonNode& n)
{
	n.push_back("card_id", s.card_id);
	n.push_back("end_time", s.end_time);
	n.push_back("is_get", s.is_get);
}


bool ReadFromJson( Ls::VecSMonthCardInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SMonthCardInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSMonthCardInfo& s,  UJsonNode& n)
{
	Ls::VecSMonthCardInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SRechargeInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "first_pay"){
			s.first_pay = i.GetInt32();
		}
		else if (node_name == "fund_id"){
			s.fund_id = i.GetInt32();
		}
		else if (node_name == "fund_reward"){
			ReadFromJson( s.fund_reward, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "card_list"){
			ReadFromJson( s.card_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "prefer_list"){
			ReadFromJson( s.prefer_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRechargeInfo& s,  UJsonNode& n)
{
	n.push_back("first_pay", s.first_pay);
	n.push_back("fund_id", s.fund_id);
	UJsonNode jnode0;
	WriteToJson( s.fund_reward, jnode0 );
	n.push_back("fund_reward", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.card_list, jnode1 );
	n.push_back("card_list", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.prefer_list, jnode2 );
	n.push_back("prefer_list", jnode2 );
}


bool ReadFromJson( Ls::SRoleLimitEventInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "event_id"){
			s.event_id = i.GetInt32();
		}
		else if (node_name == "score"){
			s.score = i.GetUInt32();
		}
		else if (node_name == "time"){
			s.time = i.GetUInt64();
		}
		else if (node_name == "stage"){
			s.stage = i.GetInt32();
		}
		else if (node_name == "level"){
			s.level = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRoleLimitEventInfo& s,  UJsonNode& n)
{
	n.push_back("event_id", s.event_id);
	n.push_back("score", s.score);
	n.push_back("time", s.time);
	n.push_back("stage", s.stage);
	n.push_back("level", s.level);
}


bool ReadFromJson( Ls::VecSRoleLimitEventInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SRoleLimitEventInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSRoleLimitEventInfo& s,  UJsonNode& n)
{
	Ls::VecSRoleLimitEventInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SLimitEventData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "event_list"){
			ReadFromJson( s.event_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLimitEventData& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.event_list, jnode0 );
	n.push_back("event_list", jnode0 );
}


bool ReadFromJson( Ls::LimitEventInfoMail& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "level"){
			s.level = i.GetInt32();
		}
		else if (node_name == "event_id"){
			s.event_id = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::LimitEventInfoMail& s,  UJsonNode& n)
{
	n.push_back("level", s.level);
	n.push_back("event_id", s.event_id);
}


bool ReadFromJson( Ls::SLeagueCastleInfoEx& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "defence_time"){
			s.defence_time = i.GetInt32();
		}
		else if (node_name == "defence_result"){
			s.defence_result = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLeagueCastleInfoEx& s,  UJsonNode& n)
{
	n.push_back("defence_time", s.defence_time);
	n.push_back("defence_result", s.defence_result);
}


bool ReadFromJson( Ls::SPlayerIconInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "icon_id"){
			s.icon_id = i.GetInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SPlayerIconInfo& s,  UJsonNode& n)
{
	n.push_back("icon_id", s.icon_id);
	n.push_back("end_time", s.end_time);
}


bool ReadFromJson( Ls::SHeroInfoEx& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "prison_id"){
			s.prison_id = i.GetInt32();
		}
		else if (node_name == "prison_name"){
			s.prison_name = i.GetString();
		}
		else if (node_name == "prison_kingdom"){
			s.prison_kingdom = i.GetInt32();
		}
		else if (node_name == "prison_x"){
			s.prison_x = i.GetInt32();
		}
		else if (node_name == "prison_y"){
			s.prison_y = i.GetInt32();
		}
		else if (node_name == "prison_left_time"){
			s.prison_left_time = i.GetInt32();
		}
		else if (node_name == "captive_total_time"){
			s.captive_total_time = i.GetInt32();
		}
		else if (node_name == "captive_left_time"){
			s.captive_left_time = i.GetInt32();
		}
		else if (node_name == "sendhelp"){
			s.sendhelp = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SHeroInfoEx& s,  UJsonNode& n)
{
	n.push_back("prison_id", s.prison_id);
	n.push_back("prison_name", s.prison_name);
	n.push_back("prison_kingdom", s.prison_kingdom);
	n.push_back("prison_x", s.prison_x);
	n.push_back("prison_y", s.prison_y);
	n.push_back("prison_left_time", s.prison_left_time);
	n.push_back("captive_total_time", s.captive_total_time);
	n.push_back("captive_left_time", s.captive_left_time);
	n.push_back("sendhelp", s.sendhelp);
}


bool ReadFromJson( Ls::SReleseHeroMail& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "player_name"){
			s.player_name = i.GetString();
		}
		else if (node_name == "hero_name"){
			s.hero_name = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SReleseHeroMail& s,  UJsonNode& n)
{
	n.push_back("player_name", s.player_name);
	n.push_back("hero_name", s.hero_name);
}


bool ReadFromJson( Ls::SZoneBase& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "z_id"){
			s.z_id = i.GetUInt32();
		}
		else if (node_name == "z_state"){
			s.z_state = i.GetInt32();
		}
		else if (node_name == "z_type"){
			s.z_type = i.GetInt32();
		}
		else if (node_name == "z_time"){
			s.z_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SZoneBase& s,  UJsonNode& n)
{
	n.push_back("z_id", s.z_id);
	n.push_back("z_state", s.z_state);
	n.push_back("z_type", s.z_type);
	n.push_back("z_time", s.z_time);
}


bool ReadFromJson( Ls::SZoneArmy& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "army"){
			ReadFromJson( s.army, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SZoneArmy& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.army, jnode0 );
	n.push_back("army", jnode0 );
}


bool ReadFromJson( Ls::SZoneLeague& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "z_leagueID"){
			s.z_leagueID = i.GetUInt32();
		}
		else if (node_name == "z_color"){
			s.z_color = i.GetUInt8();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SZoneLeague& s,  UJsonNode& n)
{
	n.push_back("z_leagueID", s.z_leagueID);
	n.push_back("z_color", s.z_color);
}


bool ReadFromJson( Ls::SZoneBuff& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "buff_list"){
			ReadFromJson( s.buff_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SZoneBuff& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.buff_list, jnode0 );
	n.push_back("buff_list", jnode0 );
}


bool ReadFromJson( Ls::SZoneCircle& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetUInt16();
		}
		else if (node_name == "time"){
			s.time = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SZoneCircle& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("time", s.time);
}


bool ReadFromJson( Ls::SJunmenLoginData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "unid"){
			s.unid = i.GetString();
		}
		else if (node_name == "account_id"){
			s.account_id = i.GetString();
		}
		else if (node_name == "token"){
			s.token = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SJunmenLoginData& s,  UJsonNode& n)
{
	n.push_back("unid", s.unid);
	n.push_back("account_id", s.account_id);
	n.push_back("token", s.token);
}


bool ReadFromJson( Ls::SJunmenLoginInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "code"){
			s.code = i.GetInt32();
		}
		else if (node_name == "data"){
			ReadFromJson( s.data, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "codeValue"){
			s.codeValue = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SJunmenLoginInfo& s,  UJsonNode& n)
{
	n.push_back("code", s.code);
	UJsonNode jnode0;
	WriteToJson( s.data, jnode0 );
	n.push_back("data", jnode0 );
	n.push_back("codeValue", s.codeValue);
}


bool ReadFromJson( Ls::StartEventData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "event_id"){
			s.event_id = i.GetInt32();
		}
		else if (node_name == "prepare_time"){
			s.prepare_time = i.GetUInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::StartEventData& s,  UJsonNode& n)
{
	n.push_back("event_id", s.event_id);
	n.push_back("prepare_time", s.prepare_time);
	n.push_back("end_time", s.end_time);
}


bool ReadFromJson( Ls::SLivenessInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetUInt32();
		}
		else if (node_name == "value"){
			s.value = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLivenessInfo& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("value", s.value);
}


bool ReadFromJson( Ls::VecSLivenessInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SLivenessInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSLivenessInfo& s,  UJsonNode& n)
{
	Ls::VecSLivenessInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SLivenessData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "active_value "){
			s.active_value  = i.GetInt32();
		}
		else if (node_name == "cumulative_value"){
			s.cumulative_value = i.GetInt32();
		}
		else if (node_name == "reset_time"){
			s.reset_time = i.GetInt32();
		}
		else if (node_name == "reward_list"){
			ReadFromJson( s.reward_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "creward_list"){
			ReadFromJson( s.creward_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "liveness_list"){
			ReadFromJson( s.liveness_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLivenessData& s,  UJsonNode& n)
{
	n.push_back("active_value ", s.active_value );
	n.push_back("cumulative_value", s.cumulative_value);
	n.push_back("reset_time", s.reset_time);
	UJsonNode jnode0;
	WriteToJson( s.reward_list, jnode0 );
	n.push_back("reward_list", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.creward_list, jnode1 );
	n.push_back("creward_list", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.liveness_list, jnode2 );
	n.push_back("liveness_list", jnode2 );
}


bool ReadFromJson( Ls::ZoneMapData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "zone_state"){
			s.zone_state = i.GetInt32();
		}
		else if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::ZoneMapData& s,  UJsonNode& n)
{
	n.push_back("zone_state", s.zone_state);
	n.push_back("end_time", s.end_time);
}


bool ReadFromJson( Ls::SDuokuUserInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "id"){
			s.id = i.GetString();
		}
		else if (node_name == "name"){
			s.name = i.GetString();
		}
		else if (node_name == "nick"){
			s.nick = i.GetString();
		}
		else if (node_name == "avator"){
			s.avator = i.GetString();
		}
		else if (node_name == "sex"){
			s.sex = i.GetString();
		}
		else if (node_name == "area"){
			s.area = i.GetString();
		}
		else if (node_name == "token"){
			s.token = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDuokuUserInfo& s,  UJsonNode& n)
{
	n.push_back("id", s.id);
	n.push_back("name", s.name);
	n.push_back("nick", s.nick);
	n.push_back("avator", s.avator);
	n.push_back("sex", s.sex);
	n.push_back("area", s.area);
	n.push_back("token", s.token);
}


bool ReadFromJson( Ls::SDuokuChannelInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "sdkchannel"){
			s.sdkchannel = i.GetString();
		}
		else if (node_name == "serverid"){
			s.serverid = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDuokuChannelInfo& s,  UJsonNode& n)
{
	n.push_back("sdkchannel", s.sdkchannel);
	n.push_back("serverid", s.serverid);
}


bool ReadFromJson( Ls::SDuokuLoginInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "code"){
			s.code = i.GetInt32();
		}
		else if (node_name == "userinfo"){
			ReadFromJson( s.userinfo, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "channelinfo"){
			ReadFromJson( s.channelinfo, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "ext"){
			s.ext = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDuokuLoginInfo& s,  UJsonNode& n)
{
	n.push_back("code", s.code);
	UJsonNode jnode0;
	WriteToJson( s.userinfo, jnode0 );
	n.push_back("userinfo", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.channelinfo, jnode1 );
	n.push_back("channelinfo", jnode1 );
	n.push_back("ext", s.ext);
}


bool ReadFromJson( Ls::UnionShopLog& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "buy_time"){
			s.buy_time = i.GetInt32();
		}
		else if (node_name == "name"){
			s.name = i.GetString();
		}
		else if (node_name == "item_id"){
			s.item_id = i.GetUInt32();
		}
		else if (node_name == "item_count"){
			s.item_count = i.GetUInt32();
		}
		else if (node_name == "members"){
			s.members = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::UnionShopLog& s,  UJsonNode& n)
{
	n.push_back("buy_time", s.buy_time);
	n.push_back("name", s.name);
	n.push_back("item_id", s.item_id);
	n.push_back("item_count", s.item_count);
	n.push_back("members", s.members);
}


bool ReadFromJson( Ls::VecUnionShopLog& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::UnionShopLog value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecUnionShopLog& s,  UJsonNode& n)
{
	Ls::VecUnionShopLog::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::UnionGroupShop& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "end_time"){
			s.end_time = i.GetInt32();
		}
		else if (node_name == "members"){
			s.members = i.GetInt32();
		}
		else if (node_name == "item_id"){
			s.item_id = i.GetUInt32();
		}
		else if (node_name == "item_count"){
			s.item_count = i.GetInt32();
		}
		else if (node_name == "quality"){
			s.quality = i.GetUInt32();
		}
		else if (node_name == "price"){
			s.price = i.GetInt32();
		}
		else if (node_name == "joins"){
			ReadFromJson( s.joins, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::UnionGroupShop& s,  UJsonNode& n)
{
	n.push_back("end_time", s.end_time);
	n.push_back("members", s.members);
	n.push_back("item_id", s.item_id);
	n.push_back("item_count", s.item_count);
	n.push_back("quality", s.quality);
	n.push_back("price", s.price);
	UJsonNode jnode0;
	WriteToJson( s.joins, jnode0 );
	n.push_back("joins", jnode0 );
}


bool ReadFromJson( Ls::VecUnionGroupShop& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::UnionGroupShop value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecUnionGroupShop& s,  UJsonNode& n)
{
	Ls::VecUnionGroupShop::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::UnionShopData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "flush_time"){
			s.flush_time = i.GetInt32();
		}
		else if (node_name == "ushopGp"){
			ReadFromJson( s.ushopGp, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::UnionShopData& s,  UJsonNode& n)
{
	n.push_back("flush_time", s.flush_time);
	UJsonNode jnode0;
	WriteToJson( s.ushopGp, jnode0 );
	n.push_back("ushopGp", jnode0 );
}


bool ReadFromJson( Ls::online_number& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "dt"){
			s.dt = i.GetString();
		}
		else if (node_name == "action"){
			s.action = i.GetString();
		}
		else if (node_name == "game"){
			s.game = i.GetString();
		}
		else if (node_name == "ver"){
			s.ver = i.GetString();
		}
		else if (node_name == "server"){
			s.server = i.GetString();
		}
		else if (node_name == "serverip"){
			s.serverip = i.GetString();
		}
		else if (node_name == "num"){
			s.num = i.GetString();
		}
		else if (node_name == "max_num"){
			s.max_num = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::online_number& s,  UJsonNode& n)
{
	n.push_back("dt", s.dt);
	n.push_back("action", s.action);
	n.push_back("game", s.game);
	n.push_back("ver", s.ver);
	n.push_back("server", s.server);
	n.push_back("serverip", s.serverip);
	n.push_back("num", s.num);
	n.push_back("max_num", s.max_num);
}


bool ReadFromJson( Ls::Register_log& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "dt"){
			s.dt = i.GetString();
		}
		else if (node_name == "action"){
			s.action = i.GetString();
		}
		else if (node_name == "game"){
			s.game = i.GetString();
		}
		else if (node_name == "cid"){
			s.cid = i.GetString();
		}
		else if (node_name == "server"){
			s.server = i.GetString();
		}
		else if (node_name == "User_ip"){
			s.User_ip = i.GetString();
		}
		else if (node_name == "Deviceid"){
			s.Deviceid = i.GetString();
		}
		else if (node_name == "Uid"){
			s.Uid = i.GetString();
		}
		else if (node_name == "Platform"){
			s.Platform = i.GetString();
		}
		else if (node_name == "carrier"){
			s.carrier = i.GetString();
		}
		else if (node_name == "ua"){
			s.ua = i.GetString();
		}
		else if (node_name == "mac_wifi"){
			s.mac_wifi = i.GetString();
		}
		else if (node_name == "Mac_3g"){
			s.Mac_3g = i.GetString();
		}
		else if (node_name == "Net_status"){
			s.Net_status = i.GetString();
		}
		else if (node_name == "ver"){
			s.ver = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::Register_log& s,  UJsonNode& n)
{
	n.push_back("dt", s.dt);
	n.push_back("action", s.action);
	n.push_back("game", s.game);
	n.push_back("cid", s.cid);
	n.push_back("server", s.server);
	n.push_back("User_ip", s.User_ip);
	n.push_back("Deviceid", s.Deviceid);
	n.push_back("Uid", s.Uid);
	n.push_back("Platform", s.Platform);
	n.push_back("carrier", s.carrier);
	n.push_back("ua", s.ua);
	n.push_back("mac_wifi", s.mac_wifi);
	n.push_back("Mac_3g", s.Mac_3g);
	n.push_back("Net_status", s.Net_status);
	n.push_back("ver", s.ver);
}


bool ReadFromJson( Ls::First_openlog& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "dt"){
			s.dt = i.GetString();
		}
		else if (node_name == "action"){
			s.action = i.GetString();
		}
		else if (node_name == "game"){
			s.game = i.GetString();
		}
		else if (node_name == "cid"){
			s.cid = i.GetString();
		}
		else if (node_name == "server"){
			s.server = i.GetString();
		}
		else if (node_name == "user_ip"){
			s.user_ip = i.GetString();
		}
		else if (node_name == "deviceid"){
			s.deviceid = i.GetString();
		}
		else if (node_name == "uid"){
			s.uid = i.GetString();
		}
		else if (node_name == "platform"){
			s.platform = i.GetString();
		}
		else if (node_name == "carrier"){
			s.carrier = i.GetString();
		}
		else if (node_name == "ua"){
			s.ua = i.GetString();
		}
		else if (node_name == "mac_wifi"){
			s.mac_wifi = i.GetString();
		}
		else if (node_name == "mac_3g"){
			s.mac_3g = i.GetString();
		}
		else if (node_name == "net_status"){
			s.net_status = i.GetString();
		}
		else if (node_name == "sdkv"){
			s.sdkv = i.GetString();
		}
		else if (node_name == "server_ip"){
			s.server_ip = i.GetString();
		}
		else if (node_name == "ver"){
			s.ver = i.GetString();
		}
		else if (node_name == "channel"){
			s.channel = i.GetString();
		}
		else if (node_name == "bindFlag"){
			s.bindFlag = i.GetUInt32();
		}
		else if (node_name == "language"){
			s.language = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::First_openlog& s,  UJsonNode& n)
{
	n.push_back("dt", s.dt);
	n.push_back("action", s.action);
	n.push_back("game", s.game);
	n.push_back("cid", s.cid);
	n.push_back("server", s.server);
	n.push_back("user_ip", s.user_ip);
	n.push_back("deviceid", s.deviceid);
	n.push_back("uid", s.uid);
	n.push_back("platform", s.platform);
	n.push_back("carrier", s.carrier);
	n.push_back("ua", s.ua);
	n.push_back("mac_wifi", s.mac_wifi);
	n.push_back("mac_3g", s.mac_3g);
	n.push_back("net_status", s.net_status);
	n.push_back("sdkv", s.sdkv);
	n.push_back("server_ip", s.server_ip);
	n.push_back("ver", s.ver);
	n.push_back("channel", s.channel);
	n.push_back("bindFlag", s.bindFlag);
	n.push_back("language", s.language);
}


bool ReadFromJson( Ls::login_success& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "dt"){
			s.dt = i.GetString();
		}
		else if (node_name == "action"){
			s.action = i.GetString();
		}
		else if (node_name == "game"){
			s.game = i.GetString();
		}
		else if (node_name == "server"){
			s.server = i.GetString();
		}
		else if (node_name == "uid"){
			s.uid = i.GetString();
		}
		else if (node_name == "deviceid"){
			s.deviceid = i.GetString();
		}
		else if (node_name == "roleid"){
			s.roleid = i.GetString();
		}
		else if (node_name == "req_id"){
			s.req_id = i.GetString();
		}
		else if (node_name == "role_info"){
			s.role_info = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::login_success& s,  UJsonNode& n)
{
	n.push_back("dt", s.dt);
	n.push_back("action", s.action);
	n.push_back("game", s.game);
	n.push_back("server", s.server);
	n.push_back("uid", s.uid);
	n.push_back("deviceid", s.deviceid);
	n.push_back("roleid", s.roleid);
	n.push_back("req_id", s.req_id);
	n.push_back("role_info", s.role_info);
}


bool ReadFromJson( Ls::pay_log& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "dt"){
			s.dt = i.GetString();
		}
		else if (node_name == "action"){
			s.action = i.GetString();
		}
		else if (node_name == "game"){
			s.game = i.GetString();
		}
		else if (node_name == "uid"){
			s.uid = i.GetString();
		}
		else if (node_name == "User_ip"){
			s.User_ip = i.GetString();
		}
		else if (node_name == "deviceid"){
			s.deviceid = i.GetString();
		}
		else if (node_name == "sdkv"){
			s.sdkv = i.GetString();
		}
		else if (node_name == "Platform"){
			s.Platform = i.GetString();
		}
		else if (node_name == "ua"){
			s.ua = i.GetString();
		}
		else if (node_name == "carrier"){
			s.carrier = i.GetString();
		}
		else if (node_name == "Mac_wifi"){
			s.Mac_wifi = i.GetString();
		}
		else if (node_name == "Mac_3g"){
			s.Mac_3g = i.GetString();
		}
		else if (node_name == "Net_status"){
			s.Net_status = i.GetString();
		}
		else if (node_name == "roleid"){
			s.roleid = i.GetString();
		}
		else if (node_name == "server"){
			s.server = i.GetString();
		}
		else if (node_name == "cid"){
			s.cid = i.GetString();
		}
		else if (node_name == "sdk_orderid"){
			s.sdk_orderid = i.GetString();
		}
		else if (node_name == "cp_orderid"){
			s.cp_orderid = i.GetString();
		}
		else if (node_name == "order_cid"){
			s.order_cid = i.GetString();
		}
		else if (node_name == "pay_type"){
			s.pay_type = i.GetString();
		}
		else if (node_name == "order_status"){
			s.order_status = i.GetString();
		}
		else if (node_name == "money"){
			s.money = i.GetString();
		}
		else if (node_name == "good_id"){
			s.good_id = i.GetString();
		}
		else if (node_name == "good_num"){
			s.good_num = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::pay_log& s,  UJsonNode& n)
{
	n.push_back("dt", s.dt);
	n.push_back("action", s.action);
	n.push_back("game", s.game);
	n.push_back("uid", s.uid);
	n.push_back("User_ip", s.User_ip);
	n.push_back("deviceid", s.deviceid);
	n.push_back("sdkv", s.sdkv);
	n.push_back("Platform", s.Platform);
	n.push_back("ua", s.ua);
	n.push_back("carrier", s.carrier);
	n.push_back("Mac_wifi", s.Mac_wifi);
	n.push_back("Mac_3g", s.Mac_3g);
	n.push_back("Net_status", s.Net_status);
	n.push_back("roleid", s.roleid);
	n.push_back("server", s.server);
	n.push_back("cid", s.cid);
	n.push_back("sdk_orderid", s.sdk_orderid);
	n.push_back("cp_orderid", s.cp_orderid);
	n.push_back("order_cid", s.order_cid);
	n.push_back("pay_type", s.pay_type);
	n.push_back("order_status", s.order_status);
	n.push_back("money", s.money);
	n.push_back("good_id", s.good_id);
	n.push_back("good_num", s.good_num);
}


bool ReadFromJson( Ls::player_action_log& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "dt"){
			s.dt = i.GetString();
		}
		else if (node_name == "action"){
			s.action = i.GetString();
		}
		else if (node_name == "game"){
			s.game = i.GetString();
		}
		else if (node_name == "cid"){
			s.cid = i.GetString();
		}
		else if (node_name == "sdkv"){
			s.sdkv = i.GetString();
		}
		else if (node_name == "uid"){
			s.uid = i.GetString();
		}
		else if (node_name == "roleid"){
			s.roleid = i.GetString();
		}
		else if (node_name == "deviceid"){
			s.deviceid = i.GetString();
		}
		else if (node_name == "server"){
			s.server = i.GetString();
		}
		else if (node_name == "Platform"){
			s.Platform = i.GetString();
		}
		else if (node_name == "ua"){
			s.ua = i.GetString();
		}
		else if (node_name == "carrier"){
			s.carrier = i.GetString();
		}
		else if (node_name == "Mac_wifi"){
			s.Mac_wifi = i.GetString();
		}
		else if (node_name == "Mac_3g"){
			s.Mac_3g = i.GetString();
		}
		else if (node_name == "Net_status"){
			s.Net_status = i.GetString();
		}
		else if (node_name == "action_name"){
			s.action_name = i.GetString();
		}
		else if (node_name == "action_result"){
			s.action_result = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::player_action_log& s,  UJsonNode& n)
{
	n.push_back("dt", s.dt);
	n.push_back("action", s.action);
	n.push_back("game", s.game);
	n.push_back("cid", s.cid);
	n.push_back("sdkv", s.sdkv);
	n.push_back("uid", s.uid);
	n.push_back("roleid", s.roleid);
	n.push_back("deviceid", s.deviceid);
	n.push_back("server", s.server);
	n.push_back("Platform", s.Platform);
	n.push_back("ua", s.ua);
	n.push_back("carrier", s.carrier);
	n.push_back("Mac_wifi", s.Mac_wifi);
	n.push_back("Mac_3g", s.Mac_3g);
	n.push_back("Net_status", s.Net_status);
	n.push_back("action_name", s.action_name);
	n.push_back("action_result", s.action_result);
}


bool ReadFromJson( Ls::player_online_log& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "dt"){
			s.dt = i.GetString();
		}
		else if (node_name == "action"){
			s.action = i.GetString();
		}
		else if (node_name == "game"){
			s.game = i.GetString();
		}
		else if (node_name == "uid"){
			s.uid = i.GetString();
		}
		else if (node_name == "roleid"){
			s.roleid = i.GetString();
		}
		else if (node_name == "server"){
			s.server = i.GetString();
		}
		else if (node_name == "cid"){
			s.cid = i.GetString();
		}
		else if (node_name == "deviceid"){
			s.deviceid = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::player_online_log& s,  UJsonNode& n)
{
	n.push_back("dt", s.dt);
	n.push_back("action", s.action);
	n.push_back("game", s.game);
	n.push_back("uid", s.uid);
	n.push_back("roleid", s.roleid);
	n.push_back("server", s.server);
	n.push_back("cid", s.cid);
	n.push_back("deviceid", s.deviceid);
}


bool ReadFromJson( Ls::SMagicEffect& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "city_name"){
			s.city_name = i.GetString();
		}
		else if (node_name == "effect_value"){
			s.effect_value = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMagicEffect& s,  UJsonNode& n)
{
	n.push_back("city_name", s.city_name);
	n.push_back("effect_value", s.effect_value);
}


bool ReadFromJson( Ls::SChapterTaskInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "index"){
			s.index = i.GetUInt32();
		}
		else if (node_name == "type"){
			s.type = i.GetUInt32();
		}
		else if (node_name == "id"){
			s.id = i.GetUInt32();
		}
		else if (node_name == "value"){
			s.value = i.GetInt32();
		}
		else if (node_name == "state"){
			s.state = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SChapterTaskInfo& s,  UJsonNode& n)
{
	n.push_back("index", s.index);
	n.push_back("type", s.type);
	n.push_back("id", s.id);
	n.push_back("value", s.value);
	n.push_back("state", s.state);
}


bool ReadFromJson( Ls::VecSChapterTaskInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SChapterTaskInfo value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSChapterTaskInfo& s,  UJsonNode& n)
{
	Ls::VecSChapterTaskInfo::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SChapterTaskData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "chapter_id"){
			s.chapter_id = i.GetUInt32();
		}
		else if (node_name == "task_list"){
			ReadFromJson( s.task_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "chapter_state"){
			s.chapter_state = i.GetInt32();
		}
		else if (node_name == "version"){
			s.version = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SChapterTaskData& s,  UJsonNode& n)
{
	n.push_back("chapter_id", s.chapter_id);
	UJsonNode jnode0;
	WriteToJson( s.task_list, jnode0 );
	n.push_back("task_list", jnode0 );
	n.push_back("chapter_state", s.chapter_state);
	n.push_back("version", s.version);
}


bool ReadFromJson( Ls::SFightFailed& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "army_count"){
			s.army_count = i.GetInt32();
		}
		else if (node_name == "start_stamp"){
			s.start_stamp = i.GetInt32();
		}
		else if (node_name == "triger_stamp"){
			s.triger_stamp = i.GetInt32();
		}
		else if (node_name == "hurt_value"){
			s.hurt_value = i.GetInt32();
		}
		else if (node_name == "dead_value"){
			s.dead_value = i.GetInt32();
		}
		else if (node_name == "dead_army"){
			s.dead_army = i.GetInt32();
		}
		else if (node_name == "enenmy_name"){
			s.enenmy_name = i.GetString();
		}
		else if (node_name == "union_tag"){
			s.union_tag = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SFightFailed& s,  UJsonNode& n)
{
	n.push_back("army_count", s.army_count);
	n.push_back("start_stamp", s.start_stamp);
	n.push_back("triger_stamp", s.triger_stamp);
	n.push_back("hurt_value", s.hurt_value);
	n.push_back("dead_value", s.dead_value);
	n.push_back("dead_army", s.dead_army);
	n.push_back("enenmy_name", s.enenmy_name);
	n.push_back("union_tag", s.union_tag);
}


bool ReadFromJson( Ls::MShopItem& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "item_id"){
			s.item_id = i.GetUInt32();
		}
		else if (node_name == "old_price"){
			s.old_price = i.GetInt32();
		}
		else if (node_name == "cur_price"){
			s.cur_price = i.GetInt32();
		}
		else if (node_name == "price_type"){
			s.price_type = i.GetInt32();
		}
		else if (node_name == "price_level"){
			s.price_level = i.GetInt32();
		}
		else if (node_name == "state"){
			s.state = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::MShopItem& s,  UJsonNode& n)
{
	n.push_back("item_id", s.item_id);
	n.push_back("old_price", s.old_price);
	n.push_back("cur_price", s.cur_price);
	n.push_back("price_type", s.price_type);
	n.push_back("price_level", s.price_level);
	n.push_back("state", s.state);
}


bool ReadFromJson( Ls::VecMShopItem& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::MShopItem value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecMShopItem& s,  UJsonNode& n)
{
	Ls::VecMShopItem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::MShopData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "exp"){
			s.exp = i.GetInt32();
		}
		else if (node_name == "flush_time"){
			s.flush_time = i.GetInt32();
		}
		else if (node_name == "handle_flush"){
			s.handle_flush = i.GetInt32();
		}
		else if (node_name == "shop_item"){
			ReadFromJson( s.shop_item, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::MShopData& s,  UJsonNode& n)
{
	n.push_back("exp", s.exp);
	n.push_back("flush_time", s.flush_time);
	n.push_back("handle_flush", s.handle_flush);
	UJsonNode jnode0;
	WriteToJson( s.shop_item, jnode0 );
	n.push_back("shop_item", jnode0 );
}


bool ReadFromJson( Ls::SFleetTrade& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "trade_type"){
			s.trade_type = i.GetInt32();
		}
		else if (node_name == "left_trade"){
			s.left_trade = i.GetUInt32();
		}
		else if (node_name == "right_trade"){
			s.right_trade = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SFleetTrade& s,  UJsonNode& n)
{
	n.push_back("trade_type", s.trade_type);
	n.push_back("left_trade", s.left_trade);
	n.push_back("right_trade", s.right_trade);
}


bool ReadFromJson( Ls::SAllyEvent& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "event_id"){
			s.event_id = i.GetUInt32();
		}
		else if (node_name == "event_index"){
			s.event_index = i.GetInt32();
		}
		else if (node_name == "hero_icon"){
			s.hero_icon = i.GetUInt32();
		}
		else if (node_name == "ally_id"){
			s.ally_id = i.GetUInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SAllyEvent& s,  UJsonNode& n)
{
	n.push_back("event_id", s.event_id);
	n.push_back("event_index", s.event_index);
	n.push_back("hero_icon", s.hero_icon);
	n.push_back("ally_id", s.ally_id);
}


bool ReadFromJson( Ls::VecSAllyEvent& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SAllyEvent value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSAllyEvent& s,  UJsonNode& n)
{
	Ls::VecSAllyEvent::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SOfflineInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "offline_food"){
			s.offline_food = i.GetInt64();
		}
		else if (node_name == "offline_wood"){
			s.offline_wood = i.GetInt64();
		}
		else if (node_name == "offline_stone"){
			s.offline_stone = i.GetInt64();
		}
		else if (node_name == "offline_iron"){
			s.offline_iron = i.GetInt64();
		}
		else if (node_name == "offline_silver"){
			s.offline_silver = i.GetInt64();
		}
		else if (node_name == "offline_build"){
			s.offline_build = i.GetUInt32();
		}
		else if (node_name == "build_time"){
			s.build_time = i.GetInt32();
		}
		else if (node_name == "offline_tech"){
			s.offline_tech = i.GetUInt32();
		}
		else if (node_name == "tech_time"){
			s.tech_time = i.GetInt32();
		}
		else if (node_name == "offline_army"){
			s.offline_army = i.GetUInt32();
		}
		else if (node_name == "army_count"){
			s.army_count = i.GetInt32();
		}
		else if (node_name == "train_time"){
			s.train_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SOfflineInfo& s,  UJsonNode& n)
{
	n.push_back("offline_food", s.offline_food);
	n.push_back("offline_wood", s.offline_wood);
	n.push_back("offline_stone", s.offline_stone);
	n.push_back("offline_iron", s.offline_iron);
	n.push_back("offline_silver", s.offline_silver);
	n.push_back("offline_build", s.offline_build);
	n.push_back("build_time", s.build_time);
	n.push_back("offline_tech", s.offline_tech);
	n.push_back("tech_time", s.tech_time);
	n.push_back("offline_army", s.offline_army);
	n.push_back("army_count", s.army_count);
	n.push_back("train_time", s.train_time);
}


bool ReadFromJson( Ls::SMillRes& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "hour_output"){
			s.hour_output = i.GetInt32();
		}
		else if (node_name == "last_time"){
			s.last_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SMillRes& s,  UJsonNode& n)
{
	n.push_back("hour_output", s.hour_output);
	n.push_back("last_time", s.last_time);
}


bool ReadFromJson( Ls::SGambleItem& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "gamble_weight"){
			s.gamble_weight = i.GetInt32();
		}
		else if (node_name == "show"){
			s.show = i.GetInt32();
		}
		else if (node_name == "gamble_item"){
			ReadFromJson( s.gamble_item, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SGambleItem& s,  UJsonNode& n)
{
	n.push_back("gamble_weight", s.gamble_weight);
	n.push_back("show", s.show);
	UJsonNode jnode0;
	WriteToJson( s.gamble_item, jnode0 );
	n.push_back("gamble_item", jnode0 );
}


bool ReadFromJson( Ls::VecSGambleItem& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SGambleItem value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSGambleItem& s,  UJsonNode& n)
{
	Ls::VecSGambleItem::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SGambleInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "gamble_level"){
			s.gamble_level = i.GetInt32();
		}
		else if (node_name == "free_count"){
			s.free_count = i.GetInt32();
		}
		else if (node_name == "gamble_item"){
			ReadFromJson( s.gamble_item, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SGambleInfo& s,  UJsonNode& n)
{
	n.push_back("gamble_level", s.gamble_level);
	n.push_back("free_count", s.free_count);
	UJsonNode jnode0;
	WriteToJson( s.gamble_item, jnode0 );
	n.push_back("gamble_item", jnode0 );
}


bool ReadFromJson( Ls::SCityMillData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "mill_food"){
			ReadFromJson( s.mill_food, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "mill_wood"){
			ReadFromJson( s.mill_wood, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "mill_stone"){
			ReadFromJson( s.mill_stone, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "mill_iron"){
			ReadFromJson( s.mill_iron, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "mill_silver"){
			ReadFromJson( s.mill_silver, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "mill_item"){
			ReadFromJson( s.mill_item, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "cd_end_time"){
			s.cd_end_time = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SCityMillData& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.mill_food, jnode0 );
	n.push_back("mill_food", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.mill_wood, jnode1 );
	n.push_back("mill_wood", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.mill_stone, jnode2 );
	n.push_back("mill_stone", jnode2 );
	UJsonNode jnode3;
	WriteToJson( s.mill_iron, jnode3 );
	n.push_back("mill_iron", jnode3 );
	UJsonNode jnode4;
	WriteToJson( s.mill_silver, jnode4 );
	n.push_back("mill_silver", jnode4 );
	UJsonNode jnode5;
	WriteToJson( s.mill_item, jnode5 );
	n.push_back("mill_item", jnode5 );
	n.push_back("cd_end_time", s.cd_end_time);
}


bool ReadFromJson( Ls::SDuokuLogExtend& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "player_id"){
			s.player_id = i.GetUInt32();
		}
		else if (node_name == "kingdom_id"){
			s.kingdom_id = i.GetInt32();
		}
		else if (node_name == "player_level"){
			s.player_level = i.GetInt32();
		}
		else if (node_name == "last_login_time"){
			s.last_login_time = i.GetInt32();
		}
		else if (node_name == "event_type"){
			s.event_type = i.GetInt32();
		}
		else if (node_name == "event_num"){
			s.event_num = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SDuokuLogExtend& s,  UJsonNode& n)
{
	n.push_back("player_id", s.player_id);
	n.push_back("kingdom_id", s.kingdom_id);
	n.push_back("player_level", s.player_level);
	n.push_back("last_login_time", s.last_login_time);
	n.push_back("event_type", s.event_type);
	n.push_back("event_num", s.event_num);
}


bool ReadFromJson( Ls::SWondulData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "wondul_id"){
			s.wondul_id = i.GetInt32();
		}
		else if (node_name == "type_id"){
			s.type_id = i.GetInt32();
		}
		else if (node_name == "cur_data"){
			s.cur_data = i.GetInt32();
		}
		else if (node_name == "need_data"){
			s.need_data = i.GetInt32();
		}
		else if (node_name == "get_reward"){
			s.get_reward = i.GetInt32();
		}
		else if (node_name == "last_update"){
			s.last_update = i.GetInt32();
		}
		else if (node_name == "flag"){
			s.flag = i.GetInt32();
		}
		else if (node_name == "start_flag"){
			s.start_flag = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SWondulData& s,  UJsonNode& n)
{
	n.push_back("wondul_id", s.wondul_id);
	n.push_back("type_id", s.type_id);
	n.push_back("cur_data", s.cur_data);
	n.push_back("need_data", s.need_data);
	n.push_back("get_reward", s.get_reward);
	n.push_back("last_update", s.last_update);
	n.push_back("flag", s.flag);
	n.push_back("start_flag", s.start_flag);
}


bool ReadFromJson( Ls::VecSWondulData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::SWondulData value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecSWondulData& s,  UJsonNode& n)
{
	Ls::VecSWondulData::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::SRoleWondulData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "last_update"){
			s.last_update = i.GetInt32();
		}
		else if (node_name == "WondulData"){
			ReadFromJson( s.WondulData, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "fightValue"){
			ReadFromJson( s.fightValue, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SRoleWondulData& s,  UJsonNode& n)
{
	n.push_back("last_update", s.last_update);
	UJsonNode jnode0;
	WriteToJson( s.WondulData, jnode0 );
	n.push_back("WondulData", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.fightValue, jnode1 );
	n.push_back("fightValue", jnode1 );
}


bool ReadFromJson( Ls::SExchangeBuilding& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "CityID"){
			s.CityID = i.GetInt32();
		}
		else if (node_name == "landfrom"){
			s.landfrom = i.GetInt32();
		}
		else if (node_name == "landto"){
			s.landto = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SExchangeBuilding& s,  UJsonNode& n)
{
	n.push_back("CityID", s.CityID);
	n.push_back("landfrom", s.landfrom);
	n.push_back("landto", s.landto);
}


bool ReadFromJson( Ls::SLeagueCount& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "normal"){
			ReadFromJson( s.normal, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "other"){
			ReadFromJson( s.other, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SLeagueCount& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.normal, jnode0 );
	n.push_back("normal", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.other, jnode1 );
	n.push_back("other", jnode1 );
}


bool ReadFromJson( Ls::Pvp_Log_ext& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "player_id"){
			ReadFromJson( s.player_id, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::Pvp_Log_ext& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.player_id, jnode0 );
	n.push_back("player_id", jnode0 );
}


bool ReadFromJson( Ls::role_show_info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "roleid"){
			s.roleid = i.GetUInt32();
		}
		else if (node_name == "name"){
			s.name = i.GetString();
		}
		else if (node_name == "kingdom"){
			s.kingdom = i.GetUInt32();
		}
		else if (node_name == "icon_id"){
			s.icon_id = i.GetInt16();
		}
		else if (node_name == "vip_level"){
			s.vip_level = i.GetUInt8();
		}
		else if (node_name == "privilege_level"){
			s.privilege_level = i.GetUInt8();
		}
		else if (node_name == "league_name"){
			s.league_name = i.GetString();
		}
		else if (node_name == "league_tag"){
			s.league_tag = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::role_show_info& s,  UJsonNode& n)
{
	n.push_back("roleid", s.roleid);
	n.push_back("name", s.name);
	n.push_back("kingdom", s.kingdom);
	n.push_back("icon_id", s.icon_id);
	n.push_back("vip_level", s.vip_level);
	n.push_back("privilege_level", s.privilege_level);
	n.push_back("league_name", s.league_name);
	n.push_back("league_tag", s.league_tag);
}


bool ReadFromJson( Ls::efun_auth_result& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "code"){
			s.code = i.GetString();
		}
		else if (node_name == "message"){
			s.message = i.GetString();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::efun_auth_result& s,  UJsonNode& n)
{
	n.push_back("code", s.code);
	n.push_back("message", s.message);
}


bool ReadFromJson( Ls::SFriend_info& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "friend_list"){
			ReadFromJson( s.friend_list, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "allow_list"){
			ReadFromJson( s.allow_list, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SFriend_info& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.friend_list, jnode0 );
	n.push_back("friend_list", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.allow_list, jnode1 );
	n.push_back("allow_list", jnode1 );
}


bool ReadFromJson( Ls::SOtherTempData& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "value"){
			ReadFromJson( s.value, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SOtherTempData& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.value, jnode0 );
	n.push_back("value", jnode0 );
}


bool ReadFromJson( Ls::SResLog& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "food"){
			ReadFromJson( s.food, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "wood"){
			ReadFromJson( s.wood, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "stone"){
			ReadFromJson( s.stone, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "iron"){
			ReadFromJson( s.iron, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "silver"){
			ReadFromJson( s.silver, UJsonNode(i.GetCurValue()) );
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::SResLog& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.food, jnode0 );
	n.push_back("food", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.wood, jnode1 );
	n.push_back("wood", jnode1 );
	UJsonNode jnode2;
	WriteToJson( s.stone, jnode2 );
	n.push_back("stone", jnode2 );
	UJsonNode jnode3;
	WriteToJson( s.iron, jnode3 );
	n.push_back("iron", jnode3 );
	UJsonNode jnode4;
	WriteToJson( s.silver, jnode4 );
	n.push_back("silver", jnode4 );
}


bool ReadFromJson( Ls::CaslteMapObj& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "pos_x"){
			s.pos_x = i.GetInt32();
		}
		else if (node_name == "pos_y"){
			s.pos_y = i.GetInt32();
		}
		else if (node_name == "template_id"){
			s.template_id = i.GetInt32();
		}
		else if (node_name == "obj_type"){
			s.obj_type = i.GetInt32();
		}
		else if (node_name == "param1"){
			s.param1 = i.GetInt32();
		}
		else if (node_name == "param2"){
			s.param2 = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::CaslteMapObj& s,  UJsonNode& n)
{
	n.push_back("pos_x", s.pos_x);
	n.push_back("pos_y", s.pos_y);
	n.push_back("template_id", s.template_id);
	n.push_back("obj_type", s.obj_type);
	n.push_back("param1", s.param1);
	n.push_back("param2", s.param2);
}


bool ReadFromJson( Ls::VecCaslteMapObj& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);
	while( ! i.end() ){
		Ls::CaslteMapObj value;
		ReadFromJson( value, UJsonNode(i.GetCurValue()) );
		s.insert( s.end(),value);
		i++;
	}
	return true;
}
void WriteToJson( const Ls::VecCaslteMapObj& s,  UJsonNode& n)
{
	Ls::VecCaslteMapObj::const_iterator it;
	for( it = s.begin(); it != s.end(); it ++)
	{

			UJsonNode jnode;
			WriteToJson( *it, jnode );
			n.push_back( jnode );
 	}
}

bool ReadFromJson( Ls::CaslteMapInfo& s,  const UJsonNode& n )
{
	UJ_Iterator i (n);;
	while( ! i.end() ){
		std::string node_name = i.GetCurKey();
		if (node_name == "mapObj"){
			ReadFromJson( s.mapObj, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "match"){
			ReadFromJson( s.match, UJsonNode(i.GetCurValue()) );
		}
		else if (node_name == "gridX"){
			s.gridX = i.GetInt32();
		}
		else if (node_name == "gridY"){
			s.gridY = i.GetInt32();
		}
		++i;
	}
	return true;
}
void WriteToJson( const Ls::CaslteMapInfo& s,  UJsonNode& n)
{
	UJsonNode jnode0;
	WriteToJson( s.mapObj, jnode0 );
	n.push_back("mapObj", jnode0 );
	UJsonNode jnode1;
	WriteToJson( s.match, jnode1 );
	n.push_back("match", jnode1 );
	n.push_back("gridX", s.gridX);
	n.push_back("gridY", s.gridY);
}


