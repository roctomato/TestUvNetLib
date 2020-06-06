#ifndef __LSLOGICDB_H__
#define __LSLOGICDB_H__

#include <vector>
#include <list>
#include <set>
#include <map>
#include "z_typedef.h"

#include <iostream>

#include "Archive.h"

#include "json/u_json_node.h"

namespace Ls {
typedef std::vector<LsUInt32> VecUInt32; //cmment

typedef std::set<LsUInt16> SetUInt16; //cmment

typedef std::vector<std::string> VecString; //cmment

//登录验证
struct LoginTesting
{
	std::string result; //结果

	LoginTesting(){
	};
};

//角色基本信息
struct role_base_info
{
	LsUInt32 roleid; //角色ID
	LsUInt32 accout; //账号ID
	std::string name; //角色名称
	LsUInt32 kingdom; //所在王国ID
	LsInt16 icon_id; //头像icon ID
	std::string open_id; //平台提供的账号名称
	std::string platform; //平台名称
	std::string session_key; //session key
	std::string nation; //国家
	VecUInt32 allrole; //账号所有角色ID

	role_base_info(){
		roleid = 0;
		accout = 0;
		kingdom = 0;
		icon_id = 0;
	};
};

//日志头信息
struct LilithClientInfo
{
	std::string version; //数据版本号,目前版本号为1
	std::string game_id; //一款游戏对应的唯一ID，由莉莉丝提供
	std::string pack_name; //在某个平台上架的唯一游戏包名
	std::string channel_id; //平台提供的账号名称
	std::string idfa; //Ios设备广告标示符，IOS客户端必填
	std::string android_id; //
	std::string google_aid; //
	std::string os_type; //
	std::string os_version; //
	std::string app_version; //
	std::string device_mode; //
	std::string open_id; //平台提供的账号名称
	std::string app_id; //平台提供的账号名称
	std::string name; //玩家名
	std::string platform; //运营平台
	LsUInt32 bindFlag; //绑定账户标记 1- facebook 2 - game center
	LsUInt32 language; //客户端使用的语言
	std::string uid; //用户ID
	std::string sdkv; //SKD版本号
	std::string carrier; //运营商
	std::string mac_wifi; //Mac_Wifi
	std::string mac_3g; //Mac_3g
	std::string net_status; //Net_Status
	std::string ua; //机型
	std::string cid; //渠道ID
	std::string deviceid; //设备ID
	std::string extend; //扩展用

	LilithClientInfo(){
		bindFlag = 0;
		language = 0;
	};
};

//玩家财产信息
struct role_asset_info
{
	LsInt32 gold; //金币
	LsUInt8 vip_level; //vip等级
	LsUInt32 vip_exp; //vip经验
	LsUInt32 vip_time_remaining; //vip激活状态的剩余时间
	LsUInt8 privilege_level; //特权等级
	LsUInt32 privilege_exp; //特权经验

	role_asset_info(){
		gold = 0;
		vip_level = 0;
		vip_exp = 0;
		vip_time_remaining = 0;
		privilege_level = 0;
		privilege_exp = 0;
	};
};

//玩家实力信息
struct role_strength_info
{
	LsInt64 player_power; //玩家战力
	LsInt64 army_power; //部队战力
	LsInt64 build_power; //建筑战力
	LsInt64 tech_power; //科研战力
	LsInt64 hero_power; //英雄战力
	LsInt16 player_level; //玩家等级
	LsInt64 magic_power; //法术卡牌实力
	LsInt64 equip_power; //装备实力

	role_strength_info(){
		player_power = 0;
		army_power = 0;
		build_power = 0;
		tech_power = 0;
		hero_power = 0;
		player_level = 0;
		magic_power = 0;
		equip_power = 0;
	};
};

//玩家英雄职位信息
struct role_hero_job_info
{
	LsInt32 id; //玩家英雄职位ID(1-10)
	LsUInt8 lock; //是否解锁(0锁定，1解锁)

	role_hero_job_info(){
		id = 0;
		lock = 0;
	};
};

typedef std::vector<role_hero_job_info> VecSRoleHeroJobInfo; //玩家英雄职位信息VEC

//玩家基本信息
struct role_all_info
{
	LsUInt32 roleid; //玩家ID
	LsUInt32 accout; //账号ID
	std::string name; //玩家名称
	LsInt16 icon_id; //头像icon ID
	LsUInt32 kingdom; //所在王国ID
	LsUInt32 kingdom_title; //王国头衔，由国王玩家授予，默认0无头衔
	std::string signature; //玩家自定义签名
	LsInt16 newName; //是否改过名字(0,没有，1改过)
	LsInt16 role_type; //角色类型 0-普通玩家 1-机器人
	LsInt32 version; //当前存储的版本
	std::string open_id; //玩家OpenID
	std::string nation; //国家
	LsInt32 icon_endtime; //玩家头像结束时间
	LsInt32 log_upload; //是否上传(0否1是)
	LsInt32 log_level; //日志级别

	role_all_info(){
		roleid = 0;
		accout = 0;
		icon_id = 0;
		kingdom = 0;
		kingdom_title = 0;
		newName = 0;
		role_type = 0;
		version = 0;
		icon_endtime = 0;
		log_upload = 0;
		log_level = 0;
	};
};

//玩家游戏信息
struct role_game_info
{
	LsInt32 newbieTaskStatus; //新手任务步骤
	LsInt32 storyStatus; //新手剧情步骤
	LsUInt32 cur_city; //当前城市ID
	LsInt32 interior; //内政制度
	LsInt32 military; //军事制度
	SetUInt16 first_list; //第一次行为逻辑已触发列表
	LsInt32 create_time; //生成玩家数据的时间
	LsInt32 last_login_time; //最后登录时间
	LsInt32 last_logout_time; //最后登出时间
	LsInt32 first_login_time; //今天第一次登录时间
	LsInt32 continue_login_days; //持续登录天数
	LsInt32 sysMailIndex; //系统邮件领取到的下标数
	LsInt16 newHero; //新英雄通知事件
	SetUInt16 award_list; //后台奖励列表
	SetUInt16 trigger_list; //触发引导列表
	SetUInt16 client_action; //玩家发送行为列表
	LsInt32 sign_index; //签到索引
	LsInt32 sign_today; //是否可签到(0否1是)
	LsInt32 csign_index; //累计签到索引
	LsInt32 csign_num; //累计签到次数
	LsInt32 left_find; //剩余查询次数
	LsInt32 last_find_time; //上次查询时间
	LsInt32 tribe_attack_times; //蛮族进攻次数
	LsInt32 forbit_chat; //是否禁言 0-否 1-是
	VecUInt32 first_pay_list; //首充金币礼包ID列表

	role_game_info(){
		newbieTaskStatus = 0;
		storyStatus = 0;
		cur_city = 0;
		interior = 0;
		military = 0;
		create_time = 0;
		last_login_time = 0;
		last_logout_time = 0;
		first_login_time = 0;
		continue_login_days = 0;
		sysMailIndex = 0;
		newHero = 0;
		sign_index = 0;
		sign_today = 0;
		csign_index = 0;
		csign_num = 0;
		left_find = 0;
		last_find_time = 0;
		tribe_attack_times = 0;
		forbit_chat = 0;
	};
};

//登录账号表
struct user_account
{
	LsInt32 id; //
	std::string name; //账号名
	std::string password; //
	std::string mobile_id; //硬件ID
	LsUInt32 login; //登录次数
	std::string platform; //用户来源的平台
	std::string reg_ip; //注册IP
	LsInt32 reg_time; //注册时间
	std::string last_login_ip; //最后登录IP
	LsInt32 last_login_time; //最后登录时间
	LsInt16 status; //账号状态 0 -正常 1-封号
	LsUInt32 role_id; //角色id

	user_account(){
		id = 0;
		login = 0;
		reg_time = 0;
		last_login_time = 0;
		status = 0;
		role_id = 0;
	};
};

//法术Buff信息
struct SCityMagicBuffInfo
{
	LsUInt32 magic_buff_id; //buff的ID
	LsUInt32 magic_id; //法术ID
	LsInt32 magic_buff_effect; //buff的效果0正常1减半
	LsInt32 magic_start_time; //buff开始时间
	LsInt32 magic_end_time; //buff结束时间
	LsUInt32 from_castle_id; //施法城堡ID
	LsInt32 magic_from_x; //施法方城堡x坐标
	LsInt32 magic_from_y; //施法方城堡y坐标
	LsUInt32 target_castle_id; //被施法城堡ID
	LsInt32 magic_targert_x; //被施法方城堡x坐标
	LsInt32 magic_targert_y; //被施法方城堡y坐标

	SCityMagicBuffInfo(){
		magic_buff_id = 0;
		magic_id = 0;
		magic_buff_effect = 0;
		magic_start_time = 0;
		magic_end_time = 0;
		from_castle_id = 0;
		magic_from_x = 0;
		magic_from_y = 0;
		target_castle_id = 0;
		magic_targert_x = 0;
		magic_targert_y = 0;
	};
};

//准备卡牌信息
struct SPerpareCardInfo
{
	LsUInt32 card_id; //卡牌ID
	LsUInt32 card_state; //卡牌状态(0准备中 1就绪)

	SPerpareCardInfo(){
		card_id = 0;
		card_state = 0;
	};
};

typedef std::vector<SPerpareCardInfo> VecSPerpareCardInfo; //准备卡牌列表

//资源详细信息
struct SResourceDetailInfo
{
	LsInt64 res_current_value; //当前资源量
	LsInt32 res_hour_output; //每小时恢复base
	LsInt32 res_hour_output_total; //每小时恢复total
	float res_second_output; //每秒产量
	LsInt64 res_store_max; //最大资源量
	LsInt64 res_store_max_total; //最大资源量total
	LsInt64 res_store_protect; //保护资源量
	LsInt64 res_store_protect_total; //保护资源量total
	LsUInt32 lastUpdatetime; //上次更新资源现有量时戳
	LsInt32 res_state; //
	LsInt32 attr_type; //

	SResourceDetailInfo(){
		res_current_value = 0;
		res_hour_output = 0;
		res_hour_output_total = 0;
		res_second_output = 0;
		res_store_max = 0;
		res_store_max_total = 0;
		res_store_protect = 0;
		res_store_protect_total = 0;
		lastUpdatetime = 0;
		res_state = 0;
		attr_type = 0;
	};
};

//玩家英雄职位相关信息
struct role_hero_info
{
	SResourceDetailInfo hero_power; //玩家英雄能量
	VecSRoleHeroJobInfo hero_hero_job_vec; //玩家英雄职位信息VEC

	role_hero_info(){
	};
};

//粮食资源信息
struct SFoodIncreaseInfo
{
	SResourceDetailInfo base_res; //基本资源信息
	LsInt32 keep_cost; //消耗的粮食基本维护费
	LsInt32 keep_cost_total; //消耗的粮食总维护费

	SFoodIncreaseInfo(){
		keep_cost = 0;
		keep_cost_total = 0;
	};
};

//城市法术信息
struct SCityMagicInfo
{
	VecSPerpareCardInfo pre_card_list; //准备卡牌列表
	SCityMagicBuffInfo buff_info; //法术buff信息(自己)
	SResourceDetailInfo res_mana; //法力值信息
	LsInt32 magic_level; //施法等级
	LsInt32 pre_end_time; //准备卡牌结束时间

	SCityMagicInfo(){
		magic_level = 0;
		pre_end_time = 0;
	};
};

//城市人口信息
struct SPopulationIncreaseInfo
{
	SResourceDetailInfo base_res; //基本信息
	LsInt32 end_time; //人口恢复加速结束时间

	SPopulationIncreaseInfo(){
		end_time = 0;
	};
};

//大地图地格信息
struct SMapObjBase
{
	LsUInt8 mapObjType; //地格类型
	LsInt32 gridX; //横坐标
	LsInt32 gridY; //纵坐标
	LsUInt32 kingdom; //当前所处的王国id

	SMapObjBase(){
		mapObjType = 0;
		gridX = 0;
		gridY = 0;
		kingdom = 0;
	};
};

//城市建筑信息
struct SCityBuildingInfo
{
	LsUInt32 tile_id; //所在地格
	LsUInt32 type_id; //建筑类型
	LsUInt32 building_id; //建筑id（包含等级）
	LsUInt32 building_state; //建筑状态
	LsUInt32 function_id; //功能ID
	LsUInt32 league_help; //是否申请过联盟帮助

	SCityBuildingInfo(){
		tile_id = 0;
		type_id = 0;
		building_id = 0;
		building_state = 0;
		function_id = 0;
		league_help = 0;
	};
};

typedef std::vector<SCityBuildingInfo> VecSCityBuildingInfo; //

//建造队列信息
struct CityBuildInfo
{
	LsInt32 op_type; //建造类型
	LsUInt32 build_tile; //建筑ID或者tileID
	LsUInt32 startTime; //状态起始时间
	LsUInt32 endTime; //状态结束时间

	CityBuildInfo(){
		op_type = 0;
		build_tile = 0;
		startTime = 0;
		endTime = 0;
	};
};

typedef std::vector<CityBuildInfo> VecCityBuildInfo; //

//建造信息
struct DbCityBuildInfo
{
	VecSCityBuildingInfo vecBuilding; //建筑信息
	VecCityBuildInfo buildQueue; //建造队列

	DbCityBuildInfo(){
	};
};

//地格信息
struct SCityLockInfo
{
	LsUInt32 tile_id; //所在地格
	LsUInt32 tile_state; //地格状态
	LsUInt32 tile_index; //第几个解锁的地格

	SCityLockInfo(){
		tile_id = 0;
		tile_state = 0;
		tile_index = 0;
	};
};

typedef std::vector<SCityLockInfo> VecSCityLockInfo; //

//解锁队列信息
struct CityUnlockInfo
{
	LsInt32 op_type; //建造类型
	LsUInt32 build_tile; //地格ID
	LsUInt32 tile_index; //第几个解锁的地格
	LsUInt32 startTime; //状态起始时间
	LsUInt32 endTime; //状态结束时间

	CityUnlockInfo(){
		op_type = 0;
		build_tile = 0;
		tile_index = 0;
		startTime = 0;
		endTime = 0;
	};
};

//地格信息
struct DbCityLockInfo
{
	VecSCityLockInfo vecLock; //建筑信息
	CityUnlockInfo lockQueue; //建造队列

	DbCityLockInfo(){
	};
};

//城堡建筑解锁地格信息
struct SCityBuildTile
{
	DbCityBuildInfo building; //建筑
	DbCityLockInfo tile; //地格

	SCityBuildTile(){
	};
};

//颜色信息
struct SColorInfo
{
	LsInt32 color_type; //颜色类型(0为自定义类型)
	LsInt32 color_r; //RGB的R值
	LsInt32 color_g; //RGB的G值
	LsInt32 color_b; //RGB的B值

	SColorInfo(){
		color_type = 0;
		color_r = 0;
		color_g = 0;
		color_b = 0;
	};
};

//联盟旗帜
struct SUnionFlagInfo
{
	LsInt32 flag_form; //旗帜形状
	LsInt32 flag_pattern; //旗帜样式
	SColorInfo flag_bf_color1; //旗帜背景颜色1
	SColorInfo flag_bf_color2; //旗帜背景颜色2
	LsInt32 flag_icon; //旗帜纹章
	SColorInfo flag_icon_color; //旗帜纹章颜色
	LsInt32 flag_effect; //旗帜特效

	SUnionFlagInfo(){
		flag_form = 0;
		flag_pattern = 0;
		flag_icon = 0;
		flag_effect = 0;
	};
};

//联盟申请人信息
struct SApplyJoinInfo
{
	LsUInt32 apply_roleid; //申请人id
	LsInt32 apply_time; //apply_time

	SApplyJoinInfo(){
		apply_roleid = 0;
		apply_time = 0;
	};
};

//联盟帮助信息
struct SUnionHelpInfo
{
	LsInt64 help_id; //联盟帮助ID
	LsInt32 city_id; //申请帮助的城池ID
	LsInt32 help_type; //帮助类型（训练、治疗、建造、科研）
	LsInt32 pox_index; //地格ID
	LsInt32 config_id; //对象ID
	LsInt32 player_id; //请求帮助的玩家id
	std::string player_name; //请求帮助的玩家id
	LsInt32 rank_level; //角色的军阶名称
	LsInt32 help_times; //已帮助次数
	LsInt32 help_times_max; //最大帮助次数
	std::string hero_name; //英雄名字
	LsInt32 hero_level; //英雄等级
	LsInt32 hero_face; //英雄头像

	SUnionHelpInfo(){
		help_id = 0;
		city_id = 0;
		help_type = 0;
		pox_index = 0;
		config_id = 0;
		player_id = 0;
		rank_level = 0;
		help_times = 0;
		help_times_max = 0;
		hero_level = 0;
		hero_face = 0;
	};
};

//联盟军阶信息
struct SUnionRankInfo
{
	LsInt32 rank_level; //军阶等级
	std::string rank_name; //军阶名称
	LsInt32 is_default; //是否为默认名称(0否1是)

	SUnionRankInfo(){
		rank_level = 0;
		is_default = 0;
	};
};

typedef std::vector<SUnionRankInfo> VecSUnionRankList; //军阶列表

//联盟数据
struct union_data
{
	LsUInt32 id; //联盟ID
	LsUInt32 kingdom; //联盟所属国王ID
	std::string union_name; //联盟名字
	std::string union_tag; //联盟标签
	std::string union_title; //滚动字幕
	std::string union_des; //联盟描述
	LsUInt32 union_create_time; //联盟创建时间
	LsInt32 union_level; //联盟等级
	LsInt32 auto_accept; //自动招募开关
	LsInt32 union_power; //联盟实力
	LsInt64 union_leader; //联盟盟主player id
	LsInt32 language; //联盟语言
	SUnionFlagInfo union_flag_info; //联盟旗帜
	LsInt32 union_army_color; //联盟部队颜色
	VecSUnionRankList union_rank_list; //军阶列表
	LsInt64 city_power; //联盟城市实力
	LsInt64 army_power; //联盟卫队实力
	LsInt64 army_count; //联盟卫队数量
	LsInt32 defence_time; //联盟城堡被攻击时间
	LsInt32 defence_result; //联盟城堡被攻击结果
	LsInt32 join_level; //加入联盟的等级限制
	LsInt32 join_power; //加入联盟的实力限制

	union_data(){
		id = 0;
		kingdom = 0;
		union_create_time = 0;
		union_level = 0;
		auto_accept = 0;
		union_power = 0;
		union_leader = 0;
		language = 0;
		union_army_color = 0;
		city_power = 0;
		army_power = 0;
		army_count = 0;
		defence_time = 0;
		defence_result = 0;
		join_level = 0;
		join_power = 0;
	};
};

//联盟建筑数据
struct union_build
{
	LsUInt32 lb_type; //建筑类型
	LsUInt32 lb_level; //建筑等级

	union_build(){
		lb_type = 0;
		lb_level = 0;
	};
};

typedef std::vector<union_build> VecUnion_build; //

//联盟城堡
struct SUnion_Castle
{
	LsUInt32 uc_state; //联盟城堡状态
	LsInt32 gridX; //横坐标
	LsInt32 gridY; //纵坐标
	VecUnion_build vec_build; //建筑等级
	LsUInt32 exile_time; //上次流亡的时间点

	SUnion_Castle(){
		uc_state = 0;
		gridX = 0;
		gridY = 0;
		exile_time = 0;
	};
};

//联盟资产
struct SUnion_Assert
{
	LsInt64 u_money; //联盟资金
	LsInt64 indenture; //联盟契约
	LsInt64 manuscript; //联盟手稿
	LsInt32 gift_level; //联盟礼物等级
	LsInt64 gift_point; //联盟礼物点
	VecUInt32 zone_list; //联盟占区域信息

	SUnion_Assert(){
		u_money = 0;
		indenture = 0;
		manuscript = 0;
		gift_level = 0;
		gift_point = 0;
	};
};

//联盟捐献数据-计算价格参数
struct SDonationData
{
	LsInt64 donate_food; //捐献粮食
	LsInt64 donate_wood; //捐献木材
	LsInt64 donate_stone; //捐献石料
	LsInt64 donate_iron; //捐献铁矿
	LsInt64 donate_gold; //捐献金币
	float food_pice; //粮食价格
	float wood_pice; //木材价格
	float stone_pice; //石料价格
	float iron_pice; //铁矿价格
	float food_pice_trend; //粮食价格预算
	float wood_pice_trend; //木材价格预算
	float stone_pice_trend; //石料价格预算
	float iron_pice_trend; //铁矿价格预算
	LsInt32 trend_count; //预算次数
	LsInt32 fresh_time; //价格刷新时间

	SDonationData(){
		donate_food = 0;
		donate_wood = 0;
		donate_stone = 0;
		donate_iron = 0;
		donate_gold = 0;
		food_pice = 0;
		wood_pice = 0;
		stone_pice = 0;
		iron_pice = 0;
		food_pice_trend = 0;
		wood_pice_trend = 0;
		stone_pice_trend = 0;
		iron_pice_trend = 0;
		trend_count = 0;
		fresh_time = 0;
	};
};

//捐献资源数据
struct SDonateResource
{
	LsInt64 donate_food; //粮食
	LsInt64 donate_wood; //木材
	LsInt64 donate_stone; //石料
	LsInt64 donate_iron; //铁矿
	LsInt64 donate_silver; //银币
	LsInt64 donate_indenture; //契约
	LsInt64 donate_manuscript; //手稿
	LsInt64 donate_spice; //香料

	SDonateResource(){
		donate_food = 0;
		donate_wood = 0;
		donate_stone = 0;
		donate_iron = 0;
		donate_silver = 0;
		donate_indenture = 0;
		donate_manuscript = 0;
		donate_spice = 0;
	};
};

//每日捐献限制
struct SDailyDonation
{
	LsInt64 union_money; //资金
	LsInt64 union_silver; //联盟银币
	LsInt64 union_indenture; //联盟契约
	LsInt64 union_manuscript; //联盟手稿
	LsInt64 union_spice; //联盟香料

	SDailyDonation(){
		union_money = 0;
		union_silver = 0;
		union_indenture = 0;
		union_manuscript = 0;
		union_spice = 0;
	};
};

//联盟捐献数据
struct SUnionDonationInfo
{
	SDailyDonation daily_donate; //每日捐献
	SDonateResource out_info; //城外资源
	SDonationData price_res; //计算价格参数的资源

	SUnionDonationInfo(){
	};
};

//联盟成员信息
struct SUnionMemberInfo
{
	LsUInt32 union_id; //联盟ID
	LsUInt64 member_id; //成员ID
	LsInt32 rank_level; //军阶等级
	LsInt32 union_exploit; //联盟功勋
	LsInt32 union_contribute; //联盟贡献
	LsInt32 day_contribute; //今日贡献
	LsInt32 week_contribute; //本周贡献
	LsInt32 week_max_con; //本周贡献最大值
	LsInt32 help_con; //本周帮助贡献
	LsInt32 day_time_help; //今日时间进度帮助贡献
	LsInt32 day_card_help; //今日卡牌帮助贡献
	LsInt32 task_con; //本周任务贡献
	LsInt32 item_con; //本周捐献道具贡献
	LsInt32 gold_con; //本周捐献金币贡献
	LsInt32 res_con; //本周捐献资源贡献
	LsInt32 donate_gold; //捐献金币
	SDonateResource donate_res; //捐献的资源
	LsInt16 first_join; //第一次加入联盟
	VecUInt32 invited_list; //被邀请联盟列表

	SUnionMemberInfo(){
		union_id = 0;
		member_id = 0;
		rank_level = 0;
		union_exploit = 0;
		union_contribute = 0;
		day_contribute = 0;
		week_contribute = 0;
		week_max_con = 0;
		help_con = 0;
		day_time_help = 0;
		day_card_help = 0;
		task_con = 0;
		item_con = 0;
		gold_con = 0;
		res_con = 0;
		donate_gold = 0;
		first_join = 0;
	};
};

//联盟信息
struct SLeagueInfo
{
	union_data league_info; //联盟基本信息
	VecUInt32 member_list; //成员列表
	VecUInt32 block_list; //屏蔽联盟列表
	VecUInt32 invit_list; //联盟邀请列表

	SLeagueInfo(){
	};
};

//联盟科技
struct SUnionTech
{
	LsInt32 tech_id; //联盟科技ID
	LsInt32 type; //科技类型
	LsInt32 level; //科技等级
	LsInt32 tech_point; //联盟科技点
	LsInt32 tech_status; //科技状态(0等级不足1可捐献2可升级3已满级)

	SUnionTech(){
		tech_id = 0;
		type = 0;
		level = 0;
		tech_point = 0;
		tech_status = 0;
	};
};

typedef std::vector<SUnionTech> VecSUnionTech; //联盟科技列表

//系统目标科技
struct SSystemTech
{
	LsInt32 tech_id; //科技ID
	LsInt32 reward_id; //奖励ID

	SSystemTech(){
		tech_id = 0;
		reward_id = 0;
	};
};

typedef std::vector<SSystemTech> VecSSystemTech; //联盟系统科技

//联盟科技数据
struct SUnionTechInfo
{
	VecSUnionTech tech_list; //联盟科技列表
	VecSSystemTech sys_tech; //联盟系统科技
	VecUInt32 donate_tech; //可捐献科技
	LsUInt32 target_tech; //联盟目标科技
	LsUInt32 fresh_num; //刷新系统科技次数
	LsUInt32 set_num; //设置联盟科技次数

	SUnionTechInfo(){
		target_tech = 0;
		fresh_num = 0;
		set_num = 0;
	};
};

//兵种信息
struct SArmyInfo
{
	LsUInt32 armys_id; //兵种id
	LsInt64 armys_quantity; //兵种数量
	LsInt64 normal; //在城内的正常兵种数量
	LsInt64 out; //在外兵种数量
	LsInt64 hurt; //伤兵数量
	LsInt64 treat; //治疗数量

	SArmyInfo(){
		armys_id = 0;
		armys_quantity = 0;
		normal = 0;
		out = 0;
		hurt = 0;
		treat = 0;
	};
};

typedef std::vector<SArmyInfo> VecSArmyInfo; //兵种列表

//兵种建造序列
struct SArmyBulid
{
	LsUInt32 armys_id; //兵种id
	LsInt64 armys_quantity; //兵种数量
	LsUInt32 startTime; //状态起始时间
	LsUInt32 endTime; //状态结束时间
	LsUInt32 build_tile; //兵营的tileID

	SArmyBulid(){
		armys_id = 0;
		armys_quantity = 0;
		startTime = 0;
		endTime = 0;
		build_tile = 0;
	};
};

//城市兵种信息
struct SCityArmyInfo
{
	VecSArmyInfo army; //兵种
	SArmyBulid armyBulid; //建造序列
	LsInt64 maxScale; //训练规模
	LsInt64 maxCapacity; //容量
	LsInt64 maxTribe; //蛮族容量

	SCityArmyInfo(){
		maxScale = 0;
		maxCapacity = 0;
		maxTribe = 0;
	};
};

//城市训练规模限制
struct SCityTrainLimitInfo
{
	LsInt64 troops_single_max; //部队训练规模
	LsInt64 troops_assembled_max; //陷阱训练规模

	SCityTrainLimitInfo(){
		troops_single_max = 0;
		troops_assembled_max = 0;
	};
};

//行军资源信息
struct SMarchResInfo
{
	LsUInt32 res_id; //资源id（包括道具）
	LsInt64 res_quantity; //资源数量

	SMarchResInfo(){
		res_id = 0;
		res_quantity = 0;
	};
};

//行军兵种信息
struct SMarchTroopsInfo
{
	LsUInt32 player_id; //玩家id，集结时需要区分出各玩家的部队数
	LsUInt32 armys_id; //兵种id
	LsInt64 armys_quantity; //该玩家该兵种数量
	LsInt64 armys_hurt; //该玩家该兵种伤兵
	LsInt64 armys_dead; //该玩家该兵种死亡

	SMarchTroopsInfo(){
		player_id = 0;
		armys_id = 0;
		armys_quantity = 0;
		armys_hurt = 0;
		armys_dead = 0;
	};
};

//行军兵种信息(战报用)
struct SMarchTroopsReport
{
	LsUInt32 a; //玩家id，集结时需要区分出各玩家的部队数
	LsUInt32 b; //兵种id
	LsInt64 c; //该玩家该兵种数量
	LsInt64 d; //该玩家该兵种伤兵
	LsInt64 e; //该玩家该兵种死亡

	SMarchTroopsReport(){
		a = 0;
		b = 0;
		c = 0;
		d = 0;
		e = 0;
	};
};

typedef std::vector<SMarchTroopsReport> VecSMarchTroopsReport; //cmment

//行军速度
struct SMarchSpeed
{
	float speed; //速度
	LsUInt32 time; //时间

	SMarchSpeed(){
		speed = 0;
		time = 0;
	};
};

typedef std::vector<SMarchSpeed> VecSMarchSpeed; //cmment

typedef std::vector<SMarchResInfo> VecSMarchResInfo; //cmment

typedef std::vector<SMarchTroopsInfo> VecSMarchTroopsInfo; //cmment

//掉落结果
struct SDropResult
{
	std::string ItemType; //掉落类型  见drop_libcsv
	LsUInt32 Item; //掉落ID
	LsInt32 Count; //数量

	SDropResult(){
		Item = 0;
		Count = 0;
	};
};

typedef std::vector<SDropResult> VecSDropResult; //cmment

//地图上物体信息
struct SMapObj
{
	LsUInt32 objType; //类型
	LsUInt32 objID; //

	SMapObj(){
		objType = 0;
		objID = 0;
	};
};

//行军圣物信息
struct SMarchRelicInfo
{
	LsUInt32 id; //实例ID
	LsUInt32 template_id; //模版ID
	LsInt32 level; //等级
	LsInt32 end_time; //腐朽时间

	SMarchRelicInfo(){
		id = 0;
		template_id = 0;
		level = 0;
		end_time = 0;
	};
};

typedef std::vector<SMarchRelicInfo> VecSMarchRelicInfo; //行军圣物信息列表

// 行军进度相关（文档：军事/行军）
struct SCityMarchProgress
{
	LsUInt32 march_id; //行军id
	LsUInt32 march_type; //
	LsUInt32 player_id; //所属玩家id
	LsUInt32 city_id; //所属城市
	LsUInt32 union_id; //所属联盟
	LsUInt32 loc_start_k; //出发点K坐标
	LsUInt32 loc_start_x; //出发点X坐标
	LsUInt32 loc_start_y; //出发点Y坐标
	LsUInt32 loc_end_k; //目标点K坐标
	LsUInt32 loc_end_x; //目标点X坐标
	LsUInt32 loc_end_y; //目标点y坐标
	LsUInt32 startTime; //状态起始时间
	LsUInt32 endTime; //状态结束时间
	LsUInt32 initEndTime; //队列生成时候的到达结束点
	LsUInt32 hero_id; //英雄id
	LsUInt32 target_id; //行军目标ID
	LsUInt32 _massID; //集结ID
	VecSMarchTroopsInfo stru_troops; //携带部队
	VecSMarchSpeed speed; //行军速度
	VecSDropResult drop_res; //掉落物品(攻击)
	VecSDropResult loss_res; //损失物品(防御)
	SMapObj targetObj; //行军目标类型ID
	LsUInt32 _totalWeight; //采集负重
	LsInt32 _resType; //当前采集类型
	LsInt32 _realWeight; //采集负重
	float _resSpeed; //采集速度
	float _speed; //移动速度
	LsUInt32 carry_point; //采集圣物点
	VecSMarchRelicInfo drop_relic; //携带圣物
	LsUInt32 captive_hero; //俘获英雄
	LsInt32 march_state; //行军状态(0正常1结束)

	SCityMarchProgress(){
		march_id = 0;
		march_type = 0;
		player_id = 0;
		city_id = 0;
		union_id = 0;
		loc_start_k = 0;
		loc_start_x = 0;
		loc_start_y = 0;
		loc_end_k = 0;
		loc_end_x = 0;
		loc_end_y = 0;
		startTime = 0;
		endTime = 0;
		initEndTime = 0;
		hero_id = 0;
		target_id = 0;
		_massID = 0;
		_totalWeight = 0;
		_resType = 0;
		_realWeight = 0;
		_resSpeed = 0;
		_speed = 0;
		carry_point = 0;
		captive_hero = 0;
		march_state = 0;
	};
};

typedef std::vector<SCityMarchProgress> VecSCityMarchProgress; // 行军进度相关（文档：军事/行军）

//集结信息
struct SMassInfo
{
	LsUInt32 mass_id; //集结id
	LsUInt32 role_id; //发起者id
	LsInt32 gridX; //目标点X坐标
	LsInt32 gridY; //目标点y坐标
	LsInt32 total_time; //等待时间
	LsInt32 end_time; //等待截止时间
	LsUInt32 mass_state; //集结状态
	LsUInt32 arrivedMarch; //到达集结点行军数量
	SCityMarchProgress firstMarch; //发起者行军信息

	SMassInfo(){
		mass_id = 0;
		role_id = 0;
		gridX = 0;
		gridY = 0;
		total_time = 0;
		end_time = 0;
		mass_state = 0;
		arrivedMarch = 0;
	};
};

//角色城池信息
struct SRoleCityInfo
{
	LsUInt32 city_id; //城市id
	LsUInt32 inner_id; //城市索引 1 第一个城市 
	std::string city_name; //城市名字（支持多语言？）
	LsUInt8 city_state; //城市状态：正常、流亡、挂起、重建
	LsInt16 city_level_arrived; //城市到达过的最大等级
	LsInt16 city_level_now; //城市当前等级
	LsUInt32 city_icon; //城市icon
	LsInt32 city_union_help_max_time; //该城市请求联盟帮助的次数上限
	LsInt32 city_trade_num; //城市运输数量
	LsInt32 city_trade_tax; //城市运输税率
	LsUInt64 roleID; //所属角色ID
	LsInt16 x; //目标的X坐标
	LsInt16 y; //目标的Y坐标
	LsInt32 last_defence; //上一次被攻击时间
	LsInt32 result; //上一次被攻击胜负0负1胜
	LsInt32 captive_max_num; //英雄最大囚禁数
	LsInt32 last_march; //上一次被攻击行军类型
	LsInt32 practice_army; //操练士兵奖励(0未领取1已领取)

	SRoleCityInfo(){
		city_id = 0;
		inner_id = 0;
		city_state = 0;
		city_level_arrived = 0;
		city_level_now = 0;
		city_icon = 0;
		city_union_help_max_time = 0;
		city_trade_num = 0;
		city_trade_tax = 0;
		roleID = 0;
		x = 0;
		y = 0;
		last_defence = 0;
		result = 0;
		captive_max_num = 0;
		last_march = 0;
		practice_army = 0;
	};
};

//战斗属性buff数据结构
struct FightBuff
{
	LsInt16 b; //buffID
	LsInt32 v; //数值

	FightBuff(){
		b = 0;
		v = 0;
	};
};

typedef std::vector<FightBuff> VecFightBuff; //战斗属性buff信息列表

//战斗信息
struct SFightInfo
{
	LsUInt32 target_kingid; //发生战斗的王国ID
	LsInt16 target_pox_x; //战斗发生的地点
	LsInt16 target_pox_y; //战斗发生的地点
	LsInt32 battletype; //战斗类型1和3是城堡战斗类型，2是部队战斗类型
	LsUInt32 winner_id; //胜利者信息

	SFightInfo(){
		target_kingid = 0;
		target_pox_x = 0;
		target_pox_y = 0;
		battletype = 0;
		winner_id = 0;
	};
};

//参与集结者玩家信息
struct PlayerInfo
{
	LsInt32 id; //玩家id
	std::string name; //玩家姓名
	VecSDropResult get_material; //材料信息

	PlayerInfo(){
		id = 0;
	};
};

typedef std::vector<PlayerInfo> VecPlayerInfo; //参与集结者玩家信息列表

//战俘信息
struct SCaptiveReport
{
	LsUInt32 hero_id; //被俘英雄ID
	LsInt32 hero_icon; //被俘英雄头像
	std::string hero_name; //被俘英雄名字

	SCaptiveReport(){
		hero_id = 0;
		hero_icon = 0;
	};
};

//参与战斗者的信息
struct SFightMarchInfo
{
	LsUInt32 user_id; //参与者ID
	LsInt16 icon_id; //参与者头像ID
	LsInt16 isMass; //是否是集结部队(0不是，1是)
	VecPlayerInfo member_list; //参与集结成员列表
	LsUInt32 league_id; //参与者联盟ID
	std::string leagueTag; //参与者联盟标记
	std::string user_name; //参与者姓名
	std::string castle_name; //来源城市的名称
	LsInt16 from_k; //王国ID
	LsInt16 from_x; //行军出发点
	LsInt16 from_y; //行军出发点
	VecSMarchTroopsReport before_attack; //战前部队
	VecSMarchTroopsReport after_attack; //战后部队
	LsUInt32 troopsTotal; //参战军队总数
	LsUInt32 armyDead; //部队战死
	LsUInt32 armyWounded; //部队受伤
	LsUInt32 armyAlive; //部队存活
	LsUInt32 trapDel; //陷阱损毁（毁灭+受损）
	std::string hero_name; //参与的英雄姓名
	LsInt32 hero_exp; //参与英雄获得的经验
	LsInt64 tribeLost; //蛮族兵种战损
	LsInt32 Rpeople; //奖励人口
	LsInt32 Lpeople; //战损人口
	LsInt32 culture; //奖励文化
	LsInt32 power; //战损实力
	LsInt32 boom; //战损繁荣度
	VecSDropResult get_material; //材料信息
	VecSMarchRelicInfo get_relic; //携带圣物信息
	VecFightBuff herobufflist; //英雄buff信息
	VecFightBuff fightbufflist; //战斗buff信息
	VecUInt32 magiclist; //城堡所带的法术信息
	SCaptiveReport captive_hero; //被俘英雄信息

	SFightMarchInfo(){
		user_id = 0;
		icon_id = 0;
		isMass = 0;
		league_id = 0;
		from_k = 0;
		from_x = 0;
		from_y = 0;
		troopsTotal = 0;
		armyDead = 0;
		armyWounded = 0;
		armyAlive = 0;
		trapDel = 0;
		hero_exp = 0;
		tribeLost = 0;
		Rpeople = 0;
		Lpeople = 0;
		culture = 0;
		power = 0;
		boom = 0;
	};
};

//战报
struct SFightReport
{
	SFightInfo info; //战斗信息
	SFightMarchInfo attack; //进攻者信息
	SFightMarchInfo defnece; //防守者信息

	SFightReport(){
	};
};

//掉落信息
struct SDropItem
{
	LsUInt32 ItemType; //掉落类型 1背包 2-材料 3-装备 4-宝石
	LsUInt32 ItemID; //掉落ID
	LsUInt32 ItemCount; //数量

	SDropItem(){
		ItemType = 0;
		ItemID = 0;
		ItemCount = 0;
	};
};

typedef std::vector<SDropItem> VecSDropItem; //cmment

//人口资源信息
struct SPopulationRes
{
	LsInt32 cur_population; //当前人口
	LsInt32 max_population; //最大人口
	LsInt32 hour_output; //每小时恢复

	SPopulationRes(){
		cur_population = 0;
		max_population = 0;
		hour_output = 0;
	};
};

//装备数据
struct SEquip
{
	LsUInt32 ins_id; //实例ID
	LsUInt32 item_id; //策划配置ID
	LsUInt32 city; //英雄所在城市
	LsUInt32 hero; //装备的英雄
	LsUInt32 pos; //装备在英雄身上的位置
	LsInt32 quality; //品质
	LsInt32 role_item_ins_id; //和玩家相关的实例ID

	SEquip(){
		ins_id = 0;
		item_id = 0;
		city = 0;
		hero = 0;
		pos = 0;
		quality = 0;
		role_item_ins_id = 0;
	};
};

//科技信息
struct STechnologyInfo
{
	LsUInt32 tech_position; //位置
	LsUInt32 tech_id; //科技ID(包含等级)
	LsUInt32 tech_level; //科技等级
	LsUInt32 develop_city_id; //研发的城池ID
	LsInt32 develop_state; //科研状态(0正在研发, 1研发完成)
	LsInt32 startTime; //状态起始时间
	LsInt32 endTime; //状态结束时间
	LsInt32 league_help; //是否申请过联盟帮助
	LsInt32 add_speed; //加速时间

	STechnologyInfo(){
		tech_position = 0;
		tech_id = 0;
		tech_level = 0;
		develop_city_id = 0;
		develop_state = 0;
		startTime = 0;
		endTime = 0;
		league_help = 0;
		add_speed = 0;
	};
};

typedef std::vector<STechnologyInfo> VecTechnologyInfo; //科技列表

//资源信息
struct SResourceInfo
{
	LsInt64 res_current_value; //当前资源量
	LsInt32 res_hour_output; //每小时恢复
	LsInt64 res_store_max; //最大资源量
	LsInt32 res_store_protect; //保护资源量
	LsInt32 res_keep_cost; //维护消耗量
	LsInt32 last_update; //上次更新时间

	SResourceInfo(){
		res_current_value = 0;
		res_hour_output = 0;
		res_store_max = 0;
		res_store_protect = 0;
		res_keep_cost = 0;
		last_update = 0;
	};
};

//伤兵信息
struct SHurtArmyInfo
{
	LsInt32 army_id; //兵种ID
	LsInt32 army_count; //兵种数量

	SHurtArmyInfo(){
		army_id = 0;
		army_count = 0;
	};
};

typedef std::vector<SHurtArmyInfo> VecHurtArmy; //伤兵列表

//治疗信息
struct STreatArmyInfo
{
	LsInt32 pos_index; //治疗的地块
	VecHurtArmy hurt_army_list; //伤兵列表
	LsInt32 start_time; //开始治疗时间
	LsInt32 end_time; //治疗结束时间
	LsInt32 ishelped; //请求帮助

	STreatArmyInfo(){
		pos_index = 0;
		start_time = 0;
		end_time = 0;
		ishelped = 0;
	};
};

//治疗
struct STreatInfo
{
	STreatArmyInfo treat_army_info; //治疗信息
	LsInt32 hospital_capacity; //医院容量

	STreatInfo(){
		hospital_capacity = 0;
	};
};

//道具buff信息
struct SItemBuffInfo
{
	LsInt32 buff_id; //buffID
	LsInt64 start_time; //buff起始时间
	LsInt64 end_time; //buff结束时间

	SItemBuffInfo(){
		buff_id = 0;
		start_time = 0;
		end_time = 0;
	};
};

typedef std::vector<SItemBuffInfo> VecItemBuff; //道具buff信息列表

//敌方联盟信息
struct EnemyLeagueInfo
{
	LsInt32 league_id; //攻击方id
	LsInt16 protocol_state; //议和状态
	LsInt64 startTime; //开始时间
	std::string protocol_content; //议和内容

	EnemyLeagueInfo(){
		league_id = 0;
		protocol_state = 0;
		startTime = 0;
	};
};

typedef std::vector<EnemyLeagueInfo> VecEnemyLeagueInfo; //敌方联盟信息列表

//联盟战败信息
struct SLoseInfo
{
	LsInt32 isLosing; //是否在战败中
	LsInt64 endTime; //战败状态结束时间
	std::string tag; //击败本方的敌方联盟的标志

	SLoseInfo(){
		isLosing = 0;
		endTime = 0;
	};
};

//联盟战争大厅信息记录
struct SLeagueRecord
{
	VecEnemyLeagueInfo enemy_league_list; //敌对联盟列表
	VecEnemyLeagueInfo friend_league_list; //友好联盟列表
	SLoseInfo lose_info; //联盟战败信息

	SLeagueRecord(){
	};
};

//联盟历史战争记录
struct SLeagueHistoryWar
{
	std::string league_name; //联盟名字
	std::string league_tag; //联盟标记
	LsInt16 league_level; //联盟等级
	LsInt32 league_power; //联盟实力
	LsInt16 league_lanaguage; //联盟语言
	LsInt16 result; //战争结果
	SUnionFlagInfo league_flag; //联盟旗帜
	LsInt32 end_time; //结束时间

	SLeagueHistoryWar(){
		league_level = 0;
		league_power = 0;
		league_lanaguage = 0;
		result = 0;
		end_time = 0;
	};
};

typedef std::vector<SLeagueHistoryWar> WarInfoList; //联盟历史战争记录列表

//
struct role_mail
{
	std::string guid; //邮件的guid
	LsInt32 stamp; //发送时的unix时戳
	LsInt16 type; //邮件类型
	LsInt16 sub_type; //邮件子类型
	LsInt16 state; //邮件状态
	LsInt32 reciever; //接收者roleid
	std::string title; //标题
	std::string content; //具体内容
	std::string digest; //摘要
	std::string reward; //奖励附件
	LsInt16 get; //奖励附件领取状态(0未领取，1领取)
	std::string reverse; //扩展用

	role_mail(){
		stamp = 0;
		type = 0;
		sub_type = 0;
		state = 0;
		reciever = 0;
		get = 0;
	};
};

//邮件摘要
struct mail_digest
{
	std::string p1; //参数1
	std::string p2; //参数2
	std::string p3; //参数3
	std::string p4; //参数4

	mail_digest(){
	};
};

//
struct role_sys_mail
{
	LsUInt32 last_sys_mail; //全局最后一封系统邮件
	LsUInt32 last_king_sys_mail; //王国最后一封系统邮件

	role_sys_mail(){
		last_sys_mail = 0;
		last_king_sys_mail = 0;
	};
};

//玩家第一次行为提示邮件
struct first_tip_mail
{
	std::string tip; //提示文字
	LsInt32 mana; //法力恢复量
	VecSDropResult dropList; //奖励列表

	first_tip_mail(){
		mana = 0;
	};
};

//奖励提示邮件
struct reward_mail
{
	LsInt32 rank; //排名

	reward_mail(){
		rank = 0;
	};
};

//征招信息
struct SRecruitArmyInfo
{
	VecSArmyInfo recruit_army_list; //征招士兵列表
	LsInt32 start_time; //开始征招时间
	LsInt32 end_time; //征招结束时间

	SRecruitArmyInfo(){
		start_time = 0;
		end_time = 0;
	};
};

//征招预备役
struct SRecruitInfo
{
	SRecruitArmyInfo recruit_army_info; //征招信息
	LsInt32 recruit_count; //征招人数
	LsInt32 recruit_time; //征招时间

	SRecruitInfo(){
		recruit_count = 0;
		recruit_time = 0;
	};
};

//种族信息
struct SRaceInfo
{
	LsUInt32 city_race; //当前种族
	LsUInt32 change_race; //切换种族
	LsUInt32 start_time; //开始时间
	LsUInt32 end_time; //结束时间

	SRaceInfo(){
		city_race = 0;
		change_race = 0;
		start_time = 0;
		end_time = 0;
	};
};

//采集报告
struct SCollectReport
{
	LsUInt32 target_kingid; //采集点的王国ID
	LsInt16 target_pox_x; //采集点
	LsInt16 target_pox_y; //采集点
	LsUInt32 gather_id; //map_gather_point.csv中配置的id
	VecSDropResult res; //采集结果

	SCollectReport(){
		target_kingid = 0;
		target_pox_x = 0;
		target_pox_y = 0;
		gather_id = 0;
	};
};

//军队维护信息
struct SArmyKeepInfo
{
	LsInt32 army_id; //兵种ID
	LsInt32 army_normal; //在城内的正常兵种数量

	SArmyKeepInfo(){
		army_id = 0;
		army_normal = 0;
	};
};

typedef std::vector<SArmyKeepInfo> VecArmyKeep; //军队维护列表

//坐标收藏
struct SPosSave
{
	LsUInt32 id; //保存ID
	LsUInt32 kingid; //王国ID
	LsInt16 pos_x; //
	LsInt16 pos_y; //
	std::string name; //收藏项名称
	LsUInt32 ctype; //收藏类型

	SPosSave(){
		id = 0;
		kingid = 0;
		pos_x = 0;
		pos_y = 0;
		ctype = 0;
	};
};

typedef std::vector<SPosSave> VecSPosSave; //坐标收藏

//运输报告
struct STradeReport
{
	LsUInt32 sender_kingid; //发起者王国ID
	LsInt16 sender_pox_x; //发起者X坐标
	LsInt16 sender_pox_y; //发起者Y坐标
	LsInt16 sender_rank; //发起者的军阶等级
	std::string sender_name; //发起者的名字
	LsInt16 sender_icon; //发起者的头像
	LsUInt64 sender_id; //发起者的ID
	LsInt16 target_pox_x; //目标的X坐标
	LsInt16 target_pox_y; //目标的Y坐标
	std::string target_name; //目标的名字
	LsInt16 target_rank; //目标的军阶等级
	LsInt16 target_icon; //目标的头像
	LsUInt64 target_id; //目标的ID
	VecSDropResult res; //运输的资源

	STradeReport(){
		sender_kingid = 0;
		sender_pox_x = 0;
		sender_pox_y = 0;
		sender_rank = 0;
		sender_icon = 0;
		sender_id = 0;
		target_pox_x = 0;
		target_pox_y = 0;
		target_rank = 0;
		target_icon = 0;
		target_id = 0;
	};
};

//打野怪报告
struct SBossReport
{
	LsUInt32 target_kingid; //目标的王国ID
	LsInt16 target_pox_x; //目标的X坐标
	LsInt16 target_pox_y; //目标的Y坐标
	LsUInt32 face_id; //英雄脸庞ID
	std::string hero_name; //英雄姓名
	LsUInt32 hero_exp; //英雄获得经验
	LsUInt32 monster_id; //野怪ID
	LsInt32 monster_left_hp; //野怪剩余血量
	LsInt32 monster_lost_hp; //本次战斗野怪失去的血量
	VecSDropResult get_material; //获得资源或材料

	SBossReport(){
		target_kingid = 0;
		target_pox_x = 0;
		target_pox_y = 0;
		face_id = 0;
		hero_exp = 0;
		monster_id = 0;
		monster_left_hp = 0;
		monster_lost_hp = 0;
	};
};

//侦查单条信息数据结构
struct Spy_Struct
{
	LsInt64 value; //数值
	LsInt8 isValueFuzzy; //是否数值模糊(1模糊，0不模糊)

	Spy_Struct(){
		value = 0;
		isValueFuzzy = 0;
	};
};

//兵种侦查单条信息数据结构
struct Spy_Struct_Army
{
	LsInt32 a; //兵种id
	LsInt32 b; //兵种数量
	LsInt8 c; //是否信息名模糊(1隐藏，0不隐藏)
	LsInt8 d; //是否数值模糊(1模糊，0不模糊)

	Spy_Struct_Army(){
		a = 0;
		b = 0;
		c = 0;
		d = 0;
	};
};

typedef std::vector<Spy_Struct_Army> VecSSpyArmy; //兵种侦查信息

//侦查战斗buff单条信息数据结构
struct Spy_Struct_Buff
{
	LsInt16 b; //buffID
	LsInt32 v; //数值
	LsInt8 i; //是否数值模糊(1模糊，0不模糊)

	Spy_Struct_Buff(){
		b = 0;
		v = 0;
		i = 0;
	};
};

typedef std::vector<Spy_Struct_Buff> VecSSpyBuff; //兵种buff侦查信息

//战斗力量侦查报告
struct SSpyReportFight
{
	LsInt32 armyTotal; //军队总数
	VecSSpyArmy armyInfo; //军队详细信息
	VecSSpyBuff buffInfo; //战斗buff详细信息

	SSpyReportFight(){
		armyTotal = 0;
	};
};

//侦查信息-城堡基本信息
struct Spy_CastleInfo
{
	std::string playerName; //玩家姓名
	std::string castleName; //城堡姓名
	LsInt16 iconID; //头像iconID
	std::string leagueFlag; //联盟标识
	LsInt16 kingdomID; //王国ID
	LsInt16 posX; //坐标x
	LsInt16 posY; //坐标y
	Spy_Struct magicPower; //法术强度

	Spy_CastleInfo(){
		iconID = 0;
		kingdomID = 0;
		posX = 0;
		posY = 0;
	};
};

//侦查信息-城堡资源信息
struct Spy_ResourceInfo
{
	Spy_Struct food; //粮食资源
	Spy_Struct wood; //木头资源
	Spy_Struct stone; //石头资源
	Spy_Struct iron; //铁资源
	Spy_Struct silver; //银资源

	Spy_ResourceInfo(){
	};
};

//侦查信息-城堡援军信息
struct Spy_ArmyInfo
{
	LsInt32 supportTotal; //援军总数
	VecSSpyArmy supportInfo; //援军详细信息

	Spy_ArmyInfo(){
		supportTotal = 0;
	};
};

//侦查信息-城堡陷阱信息
struct Spy_TrapInfo
{
	LsInt32 trapTotal; //陷阱总数
	VecSSpyArmy trapInfo; //陷阱详细信息

	Spy_TrapInfo(){
		trapTotal = 0;
	};
};

//城堡侦查报告
struct SSpyReport
{
	LsInt32 notify_type; //战报类型
	Spy_CastleInfo castle_info; //侦查信息-城堡基本信息
	Spy_ResourceInfo resource_info; //侦查信息-城堡资源信息
	Spy_ArmyInfo support_info; //侦查信息-城堡援军信息
	Spy_TrapInfo trap_info; //侦查信息-城堡陷阱信息
	SSpyReportFight fight_info; //侦查信息-城堡战斗力量信息
	std::string spy_tip; //侦查提示信息

	SSpyReport(){
		notify_type = 0;
	};
};

//军队侦查报告
struct SSpyReportArmy
{
	LsInt32 notify_type; //战报类型
	LsInt32 march_type; //行军类型
	Spy_CastleInfo castle_info; //侦查信息-城堡基本信息
	SSpyReportFight fight_info; //侦查信息-城堡战斗力量信息
	std::string spy_tip; //侦查提示信息

	SSpyReportArmy(){
		notify_type = 0;
		march_type = 0;
	};
};

//被别人侦查报告
struct SSpyBeReported
{
	LsInt32 notify_type; //战报类型
	std::string playerName; //玩家姓名
	LsInt16 iconID; //头像iconID
	std::string leagueFlag; //联盟标识

	SSpyBeReported(){
		notify_type = 0;
		iconID = 0;
	};
};

//联盟事件通知
struct SLeagueEventNotify
{
	std::string league_name; //联盟名字
	std::string member_name; //成员名字
	std::string member_name2; //成员名字

	SLeagueEventNotify(){
	};
};

//联盟主动宣战通知
struct SDeclareWarReport
{
	std::string d_r_n; //宣战者玩家名字
	std::string d_l_n; //宣战者玩家联盟名字
	std::string b_l_n; //被宣战联盟名字

	SDeclareWarReport(){
	};
};

//联盟战争宣战通知
struct SFightWarReport
{
	std::string d_r_n; //宣战者玩家名字
	std::string d_l_n; //宣战者玩家联盟名字
	std::string d_l_t; //宣战者玩家联盟标记
	std::string b_l_t; //被宣战者玩家联盟标记
	std::string b_l_n; //被宣战联盟名字
	std::string b_r_n; //被攻击玩家名字
	LsInt32 K; //战争发生点k
	LsInt32 X; //战争发生点X
	LsInt32 Y; //战争发生点y

	SFightWarReport(){
		K = 0;
		X = 0;
		Y = 0;
	};
};

//联盟议和情况通知
struct SMakePeaceReport
{
	LsInt32 a; //回答（1同意2拒绝）
	std::string a_l_n; //提出和平方联盟名字
	std::string r_r_n; //应答方玩家名字
	std::string r_l_n; //应答方联盟名字
	std::string r_l_t; //应答方联盟标记

	SMakePeaceReport(){
		a = 0;
	};
};

//联盟胜负情况通知
struct SLeagueResultReport
{
	std::string w_t; //胜利方联盟标记
	std::string w_n; //胜利方联盟名字
	std::string w_r; //胜利方玩家名字
	std::string l_t; //失败方联盟标记
	std::string l_n; //失败方联盟名字

	SLeagueResultReport(){
	};
};

//角色信息扩展
struct SRoleInfoReserve
{
	LsInt32 magic_dust; //魔尘
	std::string pay_str; //支付字符串
	std::string platform; //运营平台
	std::string log_url; //客户端日志上传路径
	LsInt32 log_upload; //是否上传日志(0否1是)
	LsInt32 log_level; //日志级别
	LsInt32 left_find; //剩余大地图查询次数
	std::string HotURL; //热更URL
	std::string open_id; //openid
	VecUInt32 race_list; //种族列表
	VecUInt32 first_pay_list; //首充ID列表

	SRoleInfoReserve(){
		magic_dust = 0;
		log_upload = 0;
		log_level = 0;
		left_find = 0;
	};
};

//存数据库
struct DB_Fd
{
	std::string fd; //字段名
	std::string data; //数据
	LsUInt32 dataType; //字段类型 0-字符串 1- 数字

	DB_Fd(){
		dataType = 0;
	};
};

typedef std::vector<DB_Fd> VecDB_Fd; //存数据库

//保存玩家数据
struct DB_Player_Info
{
	LsUInt32 roleid; //角色ID
	VecDB_Fd vecData; //数据

	DB_Player_Info(){
		roleid = 0;
	};
};

//创建数据库
struct DB_Create_Info
{
	std::string table; //表名
	std::string where; //条件
	VecDB_Fd vecData; //数据

	DB_Create_Info(){
	};
};

//密文
struct SOneCipher
{
	LsUInt32 idCipher; //密文ID
	LsInt32 state; //状态

	SOneCipher(){
		idCipher = 0;
		state = 0;
	};
};

typedef std::vector<SOneCipher> VecSOneCipher; //密文

//塔罗牌
struct STowerCard
{
	LsUInt32 _idCard; //塔罗牌
	VecSOneCipher _cipher; //密文序列

	STowerCard(){
		_idCard = 0;
	};
};

//日常任务
struct SDailyTask
{
	LsUInt32 _taskID; //任务ID
	LsUInt32 _curCipherID; //密文ID
	LsInt32 _taskTime; //任务时长
	LsInt32 _dayliTaskState; //状态
	VecSDropResult _reward; //奖励
	LsUInt32 heroID; //做任务英雄
	VecSDropResult _spe_reward; //额外奖励
	bool getSpeReward; //是否获取到额外奖励

	SDailyTask(){
		_taskID = 0;
		_curCipherID = 0;
		_taskTime = 0;
		_dayliTaskState = 0;
		heroID = 0;
		getSpeReward = false;
	};
};

typedef std::vector<SDailyTask> VecSDailyTask; //日常任务

//当前日常任务
struct SCurDailyTask
{
	LsUInt32 taskID; //日常任务ID
	LsUInt32 endTime; //结束时间
	LsUInt32 heroID; //做任务英雄
	LsUInt32 startTime; //开始时间

	SCurDailyTask(){
		taskID = 0;
		endTime = 0;
		heroID = 0;
		startTime = 0;
	};
};

//日常任务
struct SPlayerDailyTask
{
	VecSDailyTask vecTask; //日常任务
	SCurDailyTask curTask; //当前任务
	STowerCard tarot; //塔罗牌
	LsUInt32 lastFlush; //上次刷新时间

	SPlayerDailyTask(){
		lastFlush = 0;
	};
};

//任务数据
struct STaskData
{
	LsUInt32 itemID; //物品ID
	LsInt32 count; //当前数量

	STaskData(){
		itemID = 0;
		count = 0;
	};
};

typedef std::vector<STaskData> VecSTaskData; //任务数据

//帝国任务
struct SEmpireTask
{
	LsUInt32 taskID; //任务ID
	LsInt32 taskSingleData; //任务数据
	LsInt32 taskState; //任务状态
	VecSTaskData vecData; //任务数据

	SEmpireTask(){
		taskID = 0;
		taskSingleData = 0;
		taskState = 0;
	};
};

typedef std::vector<SEmpireTask> VecSEmpireTask; //帝国任务数据

//键值对
struct IntKeyValue
{
	LsUInt32 key; //键
	LsInt64 value; //值

	IntKeyValue(){
		key = 0;
		value = 0;
	};
};

typedef std::vector<IntKeyValue> VecIntKeyValue; //cmment

//玩家法术数据
struct SPlayerMagic
{
	VecIntKeyValue vecCard; //卡牌
	VecIntKeyValue vecRes; //卡牌资源
	LsInt32 dust; //魔尘资源
	LsInt32 newHelp; //新的卡牌帮助(0无1有)
	LsInt32 helpCard; //新的帮助卡牌(0无1有)

	SPlayerMagic(){
		dust = 0;
		newHelp = 0;
		helpCard = 0;
	};
};

//英雄技能数据
struct SHeroSkill
{
	LsInt32 skillID; //技能ID
	LsInt16 skillPoint; //投入的技能点
	LsInt16 isEffect; //是否生效(0不生效，1生效)

	SHeroSkill(){
		skillID = 0;
		skillPoint = 0;
		isEffect = 0;
	};
};

//英雄数据
struct SHeroData
{
	LsUInt32 _heroID; //英雄ID
	std::string _heroName; //名字 无 String 16个字符 随机生成，通过道具修改
	LsInt32 _heroFace; //形象 无 Integer 1~16 一套资源对应一个ID
	LsUInt32 _heroCity; //城市归属 无 Integer 1~3 玩家城市id
	LsUInt32 _sex; //性别(0女1男)
	LsInt32 _heroLevel; //等级 无 Integer 1~60
	LsInt32 _heroExp; //经验值
	LsInt16 _heroSkillPoint; //英雄剩余技能点
	SHeroSkill _heroSkill1; //英雄1级技能
	SHeroSkill _heroSkill2; //英雄15级技能
	SHeroSkill _heroSkill3; //英雄30级技能
	LsInt32 _heroPower; //实力  1~999999 每次升级、进阶后增加
	LsInt32 _heroGrade; //进阶次数 无 Integer 1~99 进阶后的英雄才显示
	LsInt32 _heroState; //状态 无 Integer 1~5 1空闲、2出征、3被俘、4死亡、5采集
	LsUInt32 _heroPos; //当前所在位置 状态 1、4时为当前城市ID 3、时为进攻者城市ID 2、5为行军ID
	SetUInt16 _heroJob; //职位
	LsUInt32 _captiveCity; //俘获的城市ID
	LsUInt32 _marchID; //俘获的行军ID
	LsInt32 _releaseTime; //释放时间
	LsInt32 sendhelp; //是否发送过帮助请求 0 - 否 1- 是

	SHeroData(){
		_heroID = 0;
		_heroFace = 0;
		_heroCity = 0;
		_sex = 0;
		_heroLevel = 0;
		_heroExp = 0;
		_heroSkillPoint = 0;
		_heroPower = 0;
		_heroGrade = 0;
		_heroState = 0;
		_heroPos = 0;
		_captiveCity = 0;
		_marchID = 0;
		_releaseTime = 0;
		sendhelp = 0;
	};
};

typedef std::vector<SHeroData> VecSHeroData; //cmment

//此处添加注释
struct SUIntValue
{
	LsUInt32 val; //Add comment here

	SUIntValue(){
		val = 0;
	};
};

typedef std::vector<SUIntValue> VecSUIntValue; //cmment

//此处添加注释
struct SAllHeroData
{
	VecSHeroData vecHero; //自己的英雄
	VecSUIntValue otherHero; //俘获的英雄

	SAllHeroData(){
	};
};

//系统通知
struct SSystemMailData
{
	LsInt32 notify_type; //通知类型:1系统公告 2城市提示 3更新公告 4联盟拒绝
	std::string content; //内容(4联盟名字)

	SSystemMailData(){
		notify_type = 0;
	};
};

//城堡外观
struct SCastleFace
{
	LsInt32 cfg_id; //外观配置ID 0 表示无外观
	LsInt32 left_time; //外观剩余存在时间
	LsInt32 end_time; //截止时间戳
	LsInt32 item_id; //道具ID

	SCastleFace(){
		cfg_id = 0;
		left_time = 0;
		end_time = 0;
		item_id = 0;
	};
};

//大地图城市扩展信息
struct SBigMapCastleInfo
{
	LsInt32 last_defence; //上一次被攻击时间
	LsInt32 result; //0失败1胜利
	LsInt32 power; //所属玩家实力
	SLoseInfo loseinfo; //联盟战败信息
	LsInt32 relic_count; //总圣物数量
	LsInt8 has_6relic; //是否有6级圣物(0没有,1有)
	LsInt32 has_captive; //是否有俘虏(0没有,1有)
	LsInt32 last_march; //上一次被攻击行军
	SCastleFace castle_face; //城堡外观信息
	LsInt32 city_race; //城市种族

	SBigMapCastleInfo(){
		last_defence = 0;
		result = 0;
		power = 0;
		relic_count = 0;
		has_6relic = 0;
		has_captive = 0;
		last_march = 0;
		city_race = 0;
	};
};

//内城扩展信息
struct SInnerCastleInfo
{
	LsInt32 last_defence; //上一次被攻击时间
	LsInt32 result; //上一次被攻击0失败1胜利
	LsInt32 embassy; //是否有大使馆0无1有
	LsInt64 max_tribe; //城市雇佣蛮族最大容量
	LsInt64 left_tribe; //城市剩余可雇佣蛮族容量
	LsInt64 max_guard; //联盟雇佣军上限
	LsInt64 left_guard; //剩余可雇佣联盟卫队容量
	LsInt64 max_hurt; //城市医院上限
	LsInt64 max_aid; //城市援军上限
	LsInt64 cur_aid; //城市当前援军
	LsInt64 weright_add; //负重加成
	LsInt32 league_range; //是否在联盟城市周围(0否1是)
	SCastleFace castle_face; //城堡外观信息

	SInnerCastleInfo(){
		last_defence = 0;
		result = 0;
		embassy = 0;
		max_tribe = 0;
		left_tribe = 0;
		max_guard = 0;
		left_guard = 0;
		max_hurt = 0;
		max_aid = 0;
		cur_aid = 0;
		weright_add = 0;
		league_range = 0;
	};
};

//日志信息
struct SLogInfo
{
	std::string role_name; //玩家名称
	LsUInt64 config_id; //事物ID
	LsInt64 config_num; //事物数量
	LsInt32 log_time; //记录时间

	SLogInfo(){
		config_id = 0;
		config_num = 0;
		log_time = 0;
	};
};

typedef std::vector<SLogInfo> VecSLogInfo; //cmment

//联盟KEY的组成
struct SLeagueKey
{
	std::string key; //KEY值
	LsUInt32 league_id; //联盟ID

	SLeagueKey(){
		league_id = 0;
	};
};

//联盟战争记录
struct SWarRecord
{
	LsInt32 war_type; //联盟战争类型
	std::string attacker; //攻击者名称
	std::string attack_tag; //攻击者联盟标签
	std::string defender; //防御者名称
	std::string defend_tag; //防御者联盟标签
	LsInt32 war_result; //战争结果(1攻击者胜,2防御者胜)
	LsInt32 war_time; //战争发生时间点
	LsInt32 fight_x; //战争发生的X坐标
	LsInt32 fight_y; //战争发生的Y坐标
	LsInt32 kingdom_id; //战争发生的王国ID

	SWarRecord(){
		war_type = 0;
		war_result = 0;
		war_time = 0;
		fight_x = 0;
		fight_y = 0;
		kingdom_id = 0;
	};
};

typedef std::vector<SWarRecord> VecSWarRecord; //cmment

//联盟信息扩展
struct SLeagueInfoReverse
{
	LsInt64 u_capital; //联盟资金
	LsInt32 max_level; //最高等级
	LsInt64 indenture; //联盟契约
	LsInt64 manuscript; //研究手稿
	LsInt32 castle_state; //联盟城堡状态(0没有创建1正常2流亡3重建中)
	LsInt32 fight_count; //战争数量
	std::string league_local; //联盟城堡位置
	std::string boom_data; //联盟繁荣度
	LsInt32 last_exile_time; //上次流亡时间
	LsInt32 last_comment; //最后一次评论时间
	LsInt32 last_fresh; //刷新资源价格时间
	LsInt32 last_buy; //最后一次团购时间
	LsInt64 city_power; //联盟城市实力
	LsInt64 army_power; //联盟军队实力
	LsInt64 army_count; //联盟军队数量
	SLoseInfo loseinfo; //联盟战败信息
	SetUInt16 enemyList; //敌对联盟列表
	LsInt32 gift_level; //联盟礼物等级
	LsInt64 gift_point; //联盟礼物点
	LsInt32 need_level; //加入联盟等级限制
	LsInt32 need_power; //加入联盟实力限制

	SLeagueInfoReverse(){
		u_capital = 0;
		max_level = 0;
		indenture = 0;
		manuscript = 0;
		castle_state = 0;
		fight_count = 0;
		last_exile_time = 0;
		last_comment = 0;
		last_fresh = 0;
		last_buy = 0;
		city_power = 0;
		army_power = 0;
		army_count = 0;
		gift_level = 0;
		gift_point = 0;
		need_level = 0;
		need_power = 0;
	};
};

//常规制度
struct SRuleSystem
{
	LsUInt32 sys_pos; //制度位置
	LsUInt32 sys_id; //制度ID
	LsInt32 sys_level; //制度等级

	SRuleSystem(){
		sys_pos = 0;
		sys_id = 0;
		sys_level = 0;
	};
};

typedef std::vector<SRuleSystem> VecSRuleSystem; //制度列表

//国家制度
struct SCountrySystem
{
	LsUInt32 sys_id; //制度ID
	LsInt32 sys_state; //制度研究状态(0未研究1研究)
	LsInt32 sys_active; //制度激活状态(0未激活1激活)

	SCountrySystem(){
		sys_id = 0;
		sys_state = 0;
		sys_active = 0;
	};
};

typedef std::vector<SCountrySystem> VecSCountrySystem; //国家制度列表

//制度信息
struct SSystemInfo
{
	LsUInt32 sys_target; //当前关注制度ID
	LsInt32 accumulated; //文化累加值
	LsInt32 interior_reform; //内政改革结束时间
	LsInt32 military_reform; //军事改革结束时间
	VecSRuleSystem freedom_list; //自由
	VecSRuleSystem reason_list; //理性
	VecSRuleSystem honour_list; //荣耀
	VecSCountrySystem interior_list; //内政
	VecSCountrySystem military_list; //军事

	SSystemInfo(){
		sys_target = 0;
		accumulated = 0;
		interior_reform = 0;
		military_reform = 0;
	};
};

//文化信息
struct SCultureInfo
{
	LsInt64 cur_value; //文化当前值
	LsInt32 hour_output; //每小时产出
	LsInt32 output_add; //产出加成(万分比)
	LsInt32 accumulated_culture; //文化累加值

	SCultureInfo(){
		cur_value = 0;
		hour_output = 0;
		output_add = 0;
		accumulated_culture = 0;
	};
};

//进度信息扩展
struct SProgressInfoEx
{
	LsInt64 config_num; //进度数量or等级显示

	SProgressInfoEx(){
		config_num = 0;
	};
};

//免费宝箱信息
struct SMagicBoxInfo
{
	LsInt32 cur_num; //当前宝箱数
	LsUInt32 endTime; //刷新结束时间
	LsUInt32 lastStart; //刷新strating时间
	LsUInt32 getTimes; //get box times
	LsUInt32 curBox; //
	LsUInt32 param1; //

	SMagicBoxInfo(){
		cur_num = 0;
		endTime = 0;
		lastStart = 0;
		getTimes = 0;
		curBox = 0;
		param1 = 0;
	};
};

//传奇宝箱信息
struct SLegendBoxInfo
{
	LsInt32 cur_state; //当前状态
	LsInt32 cur_num; //当前累积次数
	LsInt32 total_num; //当前需要总累积次数
	LsUInt32 lastTime; //上次更新时间

	SLegendBoxInfo(){
		cur_state = 0;
		cur_num = 0;
		total_num = 0;
		lastTime = 0;
	};
};

//排行奖励信息
struct SOrderRewardInfo
{
	LsInt32 order_type; //排行榜类型
	LsInt32 order_rank; //排行榜排名

	SOrderRewardInfo(){
		order_type = 0;
		order_rank = 0;
	};
};

//排行奖励信息通知
struct SOrderRewardInfoNtf
{
	LsInt32 order_rank; //排行榜排名
	std::string player_name; //玩家名字

	SOrderRewardInfoNtf(){
		order_rank = 0;
	};
};

typedef std::vector<SOrderRewardInfoNtf> VecSOrderRewardInfoNtf; //排行奖励列表通知

//排行奖励通知
struct SOrderRewardNtf
{
	LsInt32 order_type; //排行榜类型
	VecSOrderRewardInfoNtf reward_list; //奖励信息

	SOrderRewardNtf(){
		order_type = 0;
	};
};

//军队信息扩展
struct SArmyInfoEx
{
	LsInt32 army_type; //军队类型(0军队1陷阱)

	SArmyInfoEx(){
		army_type = 0;
	};
};

//角色游戏数据
struct ROLE
{
	std::string role_all_info; //玩家基本信息
	std::string role_strength_info; //玩家实力信息
	std::string role_hero_info; //玩家英雄信息
	std::string role_game_info; //玩家游戏信息
	std::string collet_pos; //地点收藏
	std::string daily_task; //日常任务
	std::string empire_task; //帝国任务
	std::string league_info; //联盟信息
	std::string technolog_info; //科研信息
	std::string reserve_force; //预备役
	std::string magic_force; //法术力量
	std::string statitics_info; //统计信息
	std::string league_task; //联盟任务
	std::string system_info; //系统信息
	std::string vip_task; //vip任务

	ROLE(){
	};
};

//城堡游戏数据
struct CASTLE
{
	std::string base_info; //城堡基本信息
	std::string build_info; //地格建筑信息
	std::string population; //人口信息
	std::string food_res; //粮食信息
	std::string wood_res; //木材信息
	std::string stone_res; //石头信息
	std::string iron_res; //铁矿信息
	std::string silver_res; //银信息
	std::string army_info; //军队信息
	std::string trap_info; //陷阱信息
	std::string treat_info; //医院信息
	std::string reserve_force; //预备役
	std::string race_info; //种族信息
	std::string magic_info; //法术信息
	std::string hero_info; //英雄信息
	std::string technolog_info; //科技信息
	std::string itembuff_info; //道具buff信息
	std::string culture_info; //文化信息
	std::string repair_info; //陷阱维修信息

	CASTLE(){
	};
};

typedef std::vector<CASTLE> VecCastle; //城堡列表

//装备游戏数据
struct EQUIP
{
	std::string base_info; //装备基本信息
	std::string gem_info; //宝石镶嵌信息
	std::string enchanting; //附魔信息
	std::string refine_info; //精炼信息

	EQUIP(){
	};
};

typedef std::vector<EQUIP> VecEquip; //装备列表

//单个账号游戏数据
struct AccountData
{
	ROLE role; //玩家数据
	VecCastle castle_list; //所有城堡数据
	VecEquip equip_list; //所有装备数据

	AccountData(){
	};
};

//联盟捐献邮件
struct SDonateReport
{
	LsInt32 donate_classify; //捐献分类(1捐献资源2捐兵)
	LsInt32 donate_result; //捐献结果(0失败1成功)
	LsInt32 donate_type; //捐献类型(资源id)
	LsInt64 donate_num; //捐献数量
	LsInt64 contribution; //联盟贡献/功勋
	VecSDropResult reward_item; //道具奖励

	SDonateReport(){
		donate_classify = 0;
		donate_result = 0;
		donate_type = 0;
		donate_num = 0;
		contribution = 0;
	};
};

//锻造仿信息
struct SForgeInfo
{
	LsUInt32 cdEndTime; //CD结束时间
	LsUInt32 equipid; //锻造装备ID

	SForgeInfo(){
		cdEndTime = 0;
		equipid = 0;
	};
};

//法术记录信息
struct SMagicRecord
{
	std::string role_name; //施法者名称
	std::string league_tag; //联盟标签
	LsUInt32 magic_id; //法术ID
	LsInt32 magic_time; //释放时间

	SMagicRecord(){
		magic_id = 0;
		magic_time = 0;
	};
};

typedef std::vector<SMagicRecord> VecSMagicRecord; //法术记录信息列表

//联盟礼物信息
struct SAllianceGiftInfo
{
	LsInt64 this_id; //联盟礼物唯一ID
	LsUInt32 gift_id; //联盟礼物ID
	LsInt32 receive_time; //联盟礼物获得时间
	LsInt32 gift_state; //联盟礼物状态(0未领取1已领取)
	VecSDropResult reward_item; //道具奖励

	SAllianceGiftInfo(){
		this_id = 0;
		gift_id = 0;
		receive_time = 0;
		gift_state = 0;
	};
};

typedef std::vector<SAllianceGiftInfo> VecSAllianceGiftInfo; //联盟礼物信息列表

//字符串字段名整形值
struct SKeyValue
{
	std::string key; //字段名
	LsInt64 value; //值

	SKeyValue(){
		value = 0;
	};
};

typedef std::vector<SKeyValue> VecSKeyValue; //

//附魔属性
struct SEnchantAttr
{
	std::string key; //字段名
	LsInt32 value; //值
	LsInt32 rate; //成长率

	SEnchantAttr(){
		value = 0;
		rate = 0;
	};
};

typedef std::vector<SEnchantAttr> VecSEnchantAttr; //

//属性组数据
struct SEnchGroup
{
	LsInt16 groupID; //属性组id
	LsInt32 value; //修正值

	SEnchGroup(){
		groupID = 0;
		value = 0;
	};
};

typedef std::vector<SEnchGroup> VecSEnchGroup; //属性组数据

//附魔属性
struct SEnchanting
{
	VecSEnchGroup attr_group; //附魔属性组
	VecSEnchantAttr attr; //属性值

	SEnchanting(){
	};
};

//镶嵌宝石信息
struct SGemEquip
{
	LsInt32 pos; //镶嵌的位置
	LsUInt32 gem_id; //宝石ID

	SGemEquip(){
		pos = 0;
		gem_id = 0;
	};
};

typedef std::vector<SGemEquip> VecSGemEquip; //镶嵌宝石组数据

//装备宝石数据
struct SEquipGemInfo
{
	LsInt32 max_hole; //可以镶嵌的数量
	VecSGemEquip gem_info; //属性值

	SEquipGemInfo(){
		max_hole = 0;
	};
};

//装备精炼属性
struct SRefineData
{
	VecSKeyValue refine_attr; //属性值

	SRefineData(){
	};
};

//圣物基础属性
struct SRelicBase
{
	LsUInt32 id; //实例ID
	LsUInt32 template_id; //模版ID
	LsInt32 level; //等级
	LsInt32 relic_type; //类型
	LsInt32 pos; //出生位置
	LsInt32 state; //当前状态
	LsUInt32 end_time; //结束时间

	SRelicBase(){
		id = 0;
		template_id = 0;
		level = 0;
		relic_type = 0;
		pos = 0;
		state = 0;
		end_time = 0;
	};
};

//圣物地图属性
struct SRelicInMap
{
	LsInt32 x; //X坐标
	LsInt32 y; //y坐标
	LsInt32 left_carry; //剩余搬运进度

	SRelicInMap(){
		x = 0;
		y = 0;
		left_carry = 0;
	};
};

//圣物在城市属性
struct SRelicInCity
{
	LsUInt32 city_id; //城市ID
	LsInt32 idx; //供奉位置

	SRelicInCity(){
		city_id = 0;
		idx = 0;
	};
};

//圣物在蛮族上属性
struct SRelicOnTribe
{
	LsInt32 level; //蛮族等级
	LsInt32 tid; //蛮族的模版ID

	SRelicOnTribe(){
		level = 0;
		tid = 0;
	};
};

//藏宝图显示的圣物信息
struct SRelicInfo
{
	LsUInt32 template_id; //模版ID
	LsUInt32 end_time; //结束时间
	LsInt32 posK; //所在地王国id
	LsInt32 posX; //所在地X
	LsInt32 posY; //所在地y

	SRelicInfo(){
		template_id = 0;
		end_time = 0;
		posK = 0;
		posX = 0;
		posY = 0;
	};
};

//邮件单句话提示
struct MailStrTip
{
	std::string tip; //提示

	MailStrTip(){
	};
};

//搬运通知信息
struct SCarryInfo
{
	LsUInt32 relic_id; //圣物模版ID

	SCarryInfo(){
		relic_id = 0;
	};
};

//目标完成情况
struct Goals
{
	LsUInt32 id; //目标id
	LsInt32 type; //目标类型
	LsUInt8 finish; //完成情况(1完成，0未挖成)
	LsInt64 value; //当前完成的数量

	Goals(){
		id = 0;
		type = 0;
		finish = 0;
		value = 0;
	};
};

typedef std::vector<Goals> Days; //一天目标完成情况

//七天目标完成情况
struct SevenDaysInfo
{
	LsUInt32 finish; //是否已全部完全
	Days day_list; //七天目标完成列表

	SevenDaysInfo(){
		finish = 0;
	};
};

typedef std::vector<SevenDaysInfo> SevenDays; //七天目标完成列表

//七天情况
struct SSevenDays
{
	LsUInt32 login_days; //当前登录天数
	SevenDays day_info; //一天情况

	SSevenDays(){
		login_days = 0;
	};
};

//月卡信息
struct SMonthCardInfo
{
	LsUInt32 card_id; //月卡ID
	LsInt32 end_time; //截止时间
	LsInt32 is_get; //今日是否领取(0否1是)

	SMonthCardInfo(){
		card_id = 0;
		end_time = 0;
		is_get = 0;
	};
};

typedef std::vector<SMonthCardInfo> VecSMonthCardInfo; //月卡列表

//充值活动信息
struct SRechargeInfo
{
	LsInt32 first_pay; //首充(0未充值1已充值2已领取首充奖励)
	LsInt32 fund_id; //成长基金
	VecUInt32 fund_reward; //已领取基金等级
	VecSMonthCardInfo card_list; //月卡列表
	VecUInt32 prefer_list; //每日特惠

	SRechargeInfo(){
		first_pay = 0;
		fund_id = 0;
	};
};

//玩家限时活动数据
struct SRoleLimitEventInfo
{
	LsInt32 event_id; //活动id
	LsUInt32 score; //活动积分
	LsUInt64 time; //活动开始时间
	LsInt32 stage; //当前阶段
	LsInt32 level; //开启活动玩家或联盟等级

	SRoleLimitEventInfo(){
		event_id = 0;
		score = 0;
		time = 0;
		stage = 0;
		level = 0;
	};
};

typedef std::vector<SRoleLimitEventInfo> VecSRoleLimitEventInfo; //玩家限时活动数据

//限时活动数据
struct SLimitEventData
{
	VecSRoleLimitEventInfo event_list; //活动列表

	SLimitEventData(){
	};
};

//玩家限时活动领取奖励邮件
struct LimitEventInfoMail
{
	LsInt32 level; //阶段
	LsInt32 event_id; //活动ID

	LimitEventInfoMail(){
		level = 0;
		event_id = 0;
	};
};

//联盟城堡信息扩展
struct SLeagueCastleInfoEx
{
	LsInt32 defence_time; //被攻击时间
	LsInt32 defence_result; //被攻击结果

	SLeagueCastleInfoEx(){
		defence_time = 0;
		defence_result = 0;
	};
};

//玩家头像信息
struct SPlayerIconInfo
{
	LsInt32 icon_id; //玩家头像ID
	LsInt32 end_time; //头像截止时间

	SPlayerIconInfo(){
		icon_id = 0;
		end_time = 0;
	};
};

//英雄信息扩展
struct SHeroInfoEx
{
	LsInt32 prison_id; //被囚禁的的玩家ID
	std::string prison_name; //被囚禁的的玩家名字
	LsInt32 prison_kingdom; //被囚禁的王国
	LsInt32 prison_x; //被囚禁的X坐标
	LsInt32 prison_y; //被囚禁的Y坐标
	LsInt32 prison_left_time; //被囚禁的剩余时间
	LsInt32 captive_total_time; //被俘行军总时间
	LsInt32 captive_left_time; //被俘行军剩余时间
	LsInt32 sendhelp; //是否发送过帮助请求 0 - 否 1- 是

	SHeroInfoEx(){
		prison_id = 0;
		prison_kingdom = 0;
		prison_x = 0;
		prison_y = 0;
		prison_left_time = 0;
		captive_total_time = 0;
		captive_left_time = 0;
		sendhelp = 0;
	};
};

//英雄释放邮件
struct SReleseHeroMail
{
	std::string player_name; //释放者名字
	std::string hero_name; //被释放的英雄名字

	SReleseHeroMail(){
	};
};

//区域基础信息
struct SZoneBase
{
	LsUInt32 z_id; //区域ID
	LsInt32 z_state; //区域状态
	LsInt32 z_type; //状态时间
	LsInt32 z_time; //状态持续时间

	SZoneBase(){
		z_id = 0;
		z_state = 0;
		z_type = 0;
		z_time = 0;
	};
};

//区域军队信息
struct SZoneArmy
{
	VecSArmyInfo army; //区域军队

	SZoneArmy(){
	};
};

//区域联盟信息
struct SZoneLeague
{
	LsUInt32 z_leagueID; //所属联盟
	LsUInt8 z_color; //地图染色

	SZoneLeague(){
		z_leagueID = 0;
		z_color = 0;
	};
};

//区域BUFF信息
struct SZoneBuff
{
	SetUInt16 buff_list; //区域buff

	SZoneBuff(){
	};
};

//区域法阵信息
struct SZoneCircle
{
	LsUInt16 id; //法阵id
	LsUInt32 time; //结束时间点

	SZoneCircle(){
		id = 0;
		time = 0;
	};
};

//骏梦登录数据
struct SJunmenLoginData
{
	std::string unid; //玩家唯一ID
	std::string account_id; //玩家名称
	std::string token; //登录token

	SJunmenLoginData(){
	};
};

//骏梦登录信息
struct SJunmenLoginInfo
{
	LsInt32 code; //返回状态码
	SJunmenLoginData data; //骏梦登录数据
	std::string codeValue; //描述信息

	SJunmenLoginInfo(){
		code = 0;
	};
};

//限时活动数据
struct StartEventData
{
	LsInt32 event_id; //活动id
	LsUInt32 prepare_time; //活动准备结束时间
	LsUInt32 end_time; //活动准备结束时间

	StartEventData(){
		event_id = 0;
		prepare_time = 0;
		end_time = 0;
	};
};

//活跃项信息
struct SLivenessInfo
{
	LsUInt32 id; //活跃项id
	LsInt32 value; //活跃项value

	SLivenessInfo(){
		id = 0;
		value = 0;
	};
};

typedef std::vector<SLivenessInfo> VecSLivenessInfo; //活跃项列表

//活跃度数据
struct SLivenessData
{
	LsInt32 active_value ; //每日活跃度
	LsInt32 cumulative_value; //累计活跃度
	LsInt32 reset_time; //累计活跃度重置时间
	VecUInt32 reward_list; //已领取每日奖励ID列表
	VecUInt32 creward_list; //已领取累计奖励ID列表
	VecSLivenessInfo liveness_list; //活跃项列表列表

	SLivenessData(){
		active_value  = 0;
		cumulative_value = 0;
		reset_time = 0;
	};
};

//区域数据
struct ZoneMapData
{
	LsInt32 zone_state; //区域状态
	LsInt32 end_time; //状态结束时间

	ZoneMapData(){
		zone_state = 0;
		end_time = 0;
	};
};

//多酷玩家数据
struct SDuokuUserInfo
{
	std::string id; //ID
	std::string name; //名称
	std::string nick; //
	std::string avator; //
	std::string sex; //
	std::string area; //
	std::string token; //

	SDuokuUserInfo(){
	};
};

//多酷渠道信息
struct SDuokuChannelInfo
{
	std::string sdkchannel; //sdk渠道
	std::string serverid; //

	SDuokuChannelInfo(){
	};
};

//多酷登录返回数据
struct SDuokuLoginInfo
{
	LsInt32 code; //返回状态码
	SDuokuUserInfo userinfo; //
	SDuokuChannelInfo channelinfo; //
	std::string ext; //扩展信息

	SDuokuLoginInfo(){
		code = 0;
	};
};

//联盟商店购物/团购日志
struct UnionShopLog
{
	LsInt32 buy_time; //购物时间
	std::string name; //玩家名称(团购记录忽略)
	LsUInt32 item_id; //道具ID
	LsUInt32 item_count; //道具数量
	LsInt32 members; //参与人数

	UnionShopLog(){
		buy_time = 0;
		item_id = 0;
		item_count = 0;
		members = 0;
	};
};

typedef std::vector<UnionShopLog> VecUnionShopLog; //联盟商店购物/团购日志

//联盟商店团购
struct UnionGroupShop
{
	LsInt32 end_time; //结束时间
	LsInt32 members; //参与人数
	LsUInt32 item_id; //道具ID
	LsInt32 item_count; //道具数量
	LsUInt32 quality; //品质
	LsInt32 price; //实际价格
	VecUInt32 joins; //参与者

	UnionGroupShop(){
		end_time = 0;
		members = 0;
		item_id = 0;
		item_count = 0;
		quality = 0;
		price = 0;
	};
};

typedef std::vector<UnionGroupShop> VecUnionGroupShop; //联盟商店团购

//联盟商店数据
struct UnionShopData
{
	LsInt32 flush_time; //下次刷新时间
	VecUnionGroupShop ushopGp; //团购数据

	UnionShopData(){
		flush_time = 0;
	};
};

//日志打点时机：每隔十分钟检查一次
struct online_number
{
	std::string dt; //毫秒或者YY-MM-DD HH:MM:SS
	std::string action; //online
	std::string game; //游戏的唯一标识
	std::string ver; //游戏版本号
	std::string server; //区服名称
	std::string serverip; //服务器ip
	std::string num; //在线人数
	std::string max_num; //最高在线人数

	online_number(){
	};
};

//注册日志
struct Register_log
{
	std::string dt; //毫秒或者YY-MM-DD HH:MM:SS
	std::string action; //Registry
	std::string game; //游戏的唯一标识
	std::string cid; //渠道
	std::string server; //区服
	std::string User_ip; //用户IP
	std::string Deviceid; //设备id
	std::string Uid; //角色id
	std::string Platform; //平台
	std::string carrier; //运营商
	std::string ua; //机型
	std::string mac_wifi; //mac_wifi
	std::string Mac_3g; //Mac_3g
	std::string Net_status; //Net_status
	std::string ver; //游戏版本号

	Register_log(){
	};
};

//第一次打开游戏日志
struct First_openlog
{
	std::string dt; //毫秒或者YY-MM-DD HH:MM:SS
	std::string action; //Click
	std::string game; //游戏的唯一标识
	std::string cid; //渠道
	std::string server; //区服
	std::string user_ip; //用户IP
	std::string deviceid; //设备id
	std::string uid; //第一次打开游戏，可能诶有UID，可以为空。
	std::string platform; //平台
	std::string carrier; //运营商
	std::string ua; //机型
	std::string mac_wifi; //mac_wifi
	std::string mac_3g; //Mac_3g
	std::string net_status; //Net_status
	std::string sdkv; //SDK版本号
	std::string server_ip; //服务器IP
	std::string ver; //游戏版本号
	std::string channel; //渠道名称
	LsUInt32 bindFlag; //绑定账户标记 1- facebook 2 - game center
	LsUInt32 language; //客户端使用的语言

	First_openlog(){
		bindFlag = 0;
		language = 0;
	};
};

//登录成功后
struct login_success
{
	std::string dt; //毫秒或者YY-MM-DD HH:MM:SS
	std::string action; //Click
	std::string game; //游戏的唯一标识
	std::string server; //区服
	std::string uid; //用户id
	std::string deviceid; //设备id
	std::string roleid; //游戏内的用户唯一标识
	std::string req_id; //请求id
	std::string role_info; //具体游戏要具体商量

	login_success(){
	};
};

//支付日志
struct pay_log
{
	std::string dt; //毫秒或者YY-MM-DD HH:MM:SS
	std::string action; //Pay
	std::string game; //游戏
	std::string uid; //用户id
	std::string User_ip; //用户IP
	std::string deviceid; //设备id
	std::string sdkv; //Sdk版本号
	std::string Platform; //平台
	std::string ua; //机型
	std::string carrier; //运营商
	std::string Mac_wifi; //Mac_wifi
	std::string Mac_3g; //Mac_3g
	std::string Net_status; //Net_status
	std::string roleid; //游戏内id
	std::string server; //区服
	std::string cid; //渠道
	std::string sdk_orderid; //Sdk订单号
	std::string cp_orderid; //Cp订单号
	std::string order_cid; //订单渠道
	std::string pay_type; //支付类型，哪种方式支付
	std::string order_status; //支付状态
	std::string money; //支付金额
	std::string good_id; //商品id
	std::string good_num; //商品数量

	pay_log(){
	};
};

//用户行为日志
struct player_action_log
{
	std::string dt; //毫秒或者YY-MM-DD HH:MM:SS
	std::string action; //action
	std::string game; //游戏
	std::string cid; //渠道
	std::string sdkv; //Sdk版本号
	std::string uid; //用户id
	std::string roleid; //角色id
	std::string deviceid; //设备id
	std::string server; //区服
	std::string Platform; //平台
	std::string ua; //机型
	std::string carrier; //运营商
	std::string Mac_wifi; //Mac_wifi
	std::string Mac_3g; //Mac_3g
	std::string Net_status; //Net_status
	std::string action_name; //行为，格式为：游戏_行为
	std::string action_result; //结果，具体游戏与运营具体沟通，变动了哪些道具等结果

	player_action_log(){
	};
};

//用户在线时长日志
struct player_online_log
{
	std::string dt; //毫秒或者YY-MM-DD HH:MM:SS
	std::string action; //Heart
	std::string game; //游戏
	std::string uid; //用户id
	std::string roleid; //角色id
	std::string server; //区服
	std::string cid; //渠道
	std::string deviceid; //设备id

	player_online_log(){
	};
};

//法术效果
struct SMagicEffect
{
	std::string city_name; //被施法的城市名称
	LsInt32 effect_value; //影响数值

	SMagicEffect(){
		effect_value = 0;
	};
};

//章节任务信息
struct SChapterTaskInfo
{
	LsUInt32 index; //索引
	LsUInt32 type; //条件类型
	LsUInt32 id; //条件ID
	LsInt32 value; //条件值
	LsInt32 state; //奖励状态(0未完成1可领取2已领取)

	SChapterTaskInfo(){
		index = 0;
		type = 0;
		id = 0;
		value = 0;
		state = 0;
	};
};

typedef std::vector<SChapterTaskInfo> VecSChapterTaskInfo; //章节任务信息列表

//章节数据
struct SChapterTaskData
{
	LsUInt32 chapter_id; //章节ID
	VecSChapterTaskInfo task_list; //章节任务列表
	LsInt32 chapter_state; //章节奖励状态(0未完成1可领取)
	LsInt32 version; //配置版本

	SChapterTaskData(){
		chapter_id = 0;
		chapter_state = 0;
		version = 0;
	};
};

//战败安抚数据
struct SFightFailed
{
	LsInt32 army_count; //战败前军队总数
	LsInt32 start_stamp; //开始计算战损时间
	LsInt32 triger_stamp; //促发帮助时间
	LsInt32 hurt_value; //受伤战损
	LsInt32 dead_value; //死亡战损
	LsInt32 dead_army; //战损军队数
	std::string enenmy_name; //攻打者名称
	std::string union_tag; //攻打者联盟标记

	SFightFailed(){
		army_count = 0;
		start_stamp = 0;
		triger_stamp = 0;
		hurt_value = 0;
		dead_value = 0;
		dead_army = 0;
	};
};

//神秘商店道具
struct MShopItem
{
	LsUInt32 item_id; //道具ID
	LsInt32 old_price; //原价
	LsInt32 cur_price; //现价
	LsInt32 price_type; //购买货币类型
	LsInt32 price_level; // 打折等级 0-表示不打折
	LsInt32 state; //购买状态 0 - 未购买 1-已购买

	MShopItem(){
		item_id = 0;
		old_price = 0;
		cur_price = 0;
		price_type = 0;
		price_level = 0;
		state = 0;
	};
};

typedef std::vector<MShopItem> VecMShopItem; //神秘商店道具

//神秘商店数据
struct MShopData
{
	LsInt32 exp; //商人经验值
	LsInt32 flush_time; //下次刷新时间
	LsInt32 handle_flush; //手动刷新次数
	VecMShopItem shop_item; //商品数据

	MShopData(){
		exp = 0;
		flush_time = 0;
		handle_flush = 0;
	};
};

//商船贸易数据
struct SFleetTrade
{
	LsInt32 trade_type; //贸易类型
	LsUInt32 left_trade; //左边贸易
	LsUInt32 right_trade; //右边贸易

	SFleetTrade(){
		trade_type = 0;
		left_trade = 0;
		right_trade = 0;
	};
};

//盟友事件数据
struct SAllyEvent
{
	LsUInt32 event_id; //事件ID
	LsInt32 event_index; //事件索引(配置索引)
	LsUInt32 hero_icon; //英雄头像
	LsUInt32 ally_id; //盟友ID

	SAllyEvent(){
		event_id = 0;
		event_index = 0;
		hero_icon = 0;
		ally_id = 0;
	};
};

typedef std::vector<SAllyEvent> VecSAllyEvent; //盟友事件列表

//离线数据
struct SOfflineInfo
{
	LsInt64 offline_food; //离线时的粮食
	LsInt64 offline_wood; //离线时的木头
	LsInt64 offline_stone; //离线时石头
	LsInt64 offline_iron; //离线时铁矿
	LsInt64 offline_silver; //离线时银币
	LsUInt32 offline_build; //离线完成的建筑ID
	LsInt32 build_time; //离线建筑队列剩余时间
	LsUInt32 offline_tech; //离线完成的科技iD
	LsInt32 tech_time; //离线科技队列剩余时间
	LsUInt32 offline_army; //离线训练的军队ID
	LsInt32 army_count; //离线训练的军队数量
	LsInt32 train_time; //离线训练队列剩余时间

	SOfflineInfo(){
		offline_food = 0;
		offline_wood = 0;
		offline_stone = 0;
		offline_iron = 0;
		offline_silver = 0;
		offline_build = 0;
		build_time = 0;
		offline_tech = 0;
		tech_time = 0;
		offline_army = 0;
		army_count = 0;
		train_time = 0;
	};
};

//磨坊资源
struct SMillRes
{
	LsInt32 hour_output; //每小时产量
	LsInt32 last_time; //最后一次提炼时间

	SMillRes(){
		hour_output = 0;
		last_time = 0;
	};
};

//赌具数据
struct SGambleItem
{
	LsInt32 gamble_weight; //抽取权重
	LsInt32 show; //是否展示
	SDropResult gamble_item; //转盘数据

	SGambleItem(){
		gamble_weight = 0;
		show = 0;
	};
};

typedef std::vector<SGambleItem> VecSGambleItem; //赌具数据

//玩家赌场数据
struct SGambleInfo
{
	LsInt32 gamble_level; //等级
	LsInt32 free_count; //剩余免费刷新次数
	VecSGambleItem gamble_item; //转盘数据

	SGambleInfo(){
		gamble_level = 0;
		free_count = 0;
	};
};

//磨坊数据
struct SCityMillData
{
	SMillRes mill_food; //磨坊粮食数据
	SMillRes mill_wood; //磨坊木材数据
	SMillRes mill_stone; //磨坊石料数据
	SMillRes mill_iron; //磨坊铁矿数据
	SMillRes mill_silver; //磨坊银币数据
	VecSDropResult mill_item; //磨坊道具数据
	LsInt32 cd_end_time; //制作材料结束时间

	SCityMillData(){
		cd_end_time = 0;
	};
};

//多酷数据打点拓展
struct SDuokuLogExtend
{
	LsUInt32 player_id; //玩家ID
	LsInt32 kingdom_id; //王国ID
	LsInt32 player_level; //玩家等级
	LsInt32 last_login_time; //最后登录的时间
	LsInt32 event_type; //事件类型
	LsInt32 event_num; //当前存量

	SDuokuLogExtend(){
		player_id = 0;
		kingdom_id = 0;
		player_level = 0;
		last_login_time = 0;
		event_type = 0;
		event_num = 0;
	};
};

//精彩活动数据
struct SWondulData
{
	LsInt32 wondul_id; //活动实例ID
	LsInt32 type_id; //类型ID
	LsInt32 cur_data; //当前数据
	LsInt32 need_data; //需要数据
	LsInt32 get_reward; //领奖状态 0 - 未领取 1-已领取
	LsInt32 last_update; //上次更新时间
	LsInt32 flag; //数据标记
	LsInt32 start_flag; //本次开启的标记值，如果不同就清零

	SWondulData(){
		wondul_id = 0;
		type_id = 0;
		cur_data = 0;
		need_data = 0;
		get_reward = 0;
		last_update = 0;
		flag = 0;
		start_flag = 0;
	};
};

typedef std::vector<SWondulData> VecSWondulData; //精彩活动数据

//玩家精彩活动数据
struct SRoleWondulData
{
	LsInt32 last_update; //上次更新时间
	VecSWondulData WondulData; //活动数据
	VecIntKeyValue fightValue; //当前实力排名活动数值

	SRoleWondulData(){
		last_update = 0;
	};
};

//交换建筑
struct SExchangeBuilding
{
	LsInt32 CityID; //城堡
	LsInt32 landfrom; //移动地格
	LsInt32 landto; //目标地格

	SExchangeBuilding(){
		CityID = 0;
		landfrom = 0;
		landto = 0;
	};
};

//联盟统计数据
struct SLeagueCount
{
	VecIntKeyValue normal; //普通统计
	VecIntKeyValue other; //其他统计

	SLeagueCount(){
	};
};

//pvp扩展字段
struct Pvp_Log_ext
{
	VecUInt32 player_id; //全部参与集结的玩家id

	Pvp_Log_ext(){
	};
};

//角色基本信息
struct role_show_info
{
	LsUInt32 roleid; //角色ID
	std::string name; //角色名称
	LsUInt32 kingdom; //所在王国ID
	LsInt16 icon_id; //头像icon ID
	LsUInt8 vip_level; //vip等级
	LsUInt8 privilege_level; //特权等级
	std::string league_name; //联盟名字
	std::string league_tag; //联盟标签

	role_show_info(){
		roleid = 0;
		kingdom = 0;
		icon_id = 0;
		vip_level = 0;
		privilege_level = 0;
	};
};

//认证结果
struct efun_auth_result
{
	std::string code; //结果代码
	std::string message; //结果提示

	efun_auth_result(){
	};
};

//好友信息
struct SFriend_info
{
	VecUInt32 friend_list; //好友
	VecUInt32 allow_list; //请求好友列表

	SFriend_info(){
	};
};

//其他要存的临时数据
struct SOtherTempData
{
	VecIntKeyValue value; //普通统计

	SOtherTempData(){
	};
};

//资源日志
struct SResLog
{
	SDropResult food; //粮食
	SDropResult wood; //木
	SDropResult stone; //石头
	SDropResult iron; //铁
	SDropResult silver; //银

	SResLog(){
	};
};

//个人地图物体信息
struct CaslteMapObj
{
	LsInt32 pos_x; //X坐标
	LsInt32 pos_y; //Y坐标
	LsInt32 template_id; //模板ID
	LsInt32 obj_type; //类型
	LsInt32 param1; //数据1
	LsInt32 param2; //参数2

	CaslteMapObj(){
		pos_x = 0;
		pos_y = 0;
		template_id = 0;
		obj_type = 0;
		param1 = 0;
		param2 = 0;
	};
};

typedef std::vector<CaslteMapObj> VecCaslteMapObj; //个人地图物体信息

//个人副本地图信息
struct CaslteMapInfo
{
	VecCaslteMapObj mapObj; //地图物体
	VecSCityMarchProgress match; //行军信息
	LsInt32 gridX; //横坐标
	LsInt32 gridY; //纵坐标

	CaslteMapInfo(){
		gridX = 0;
		gridY = 0;
	};
};

};

std::ostream& operator<<( std::ostream& src, const Ls::VecUInt32& s);
std::ostream& operator<<( std::ostream& src, const Ls::SetUInt16& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecString& s);
std::ostream& operator<<( std::ostream& src, const Ls::LoginTesting& s);
std::ostream& operator<<( std::ostream& src, const Ls::role_base_info& s);
std::ostream& operator<<( std::ostream& src, const Ls::LilithClientInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::role_asset_info& s);
std::ostream& operator<<( std::ostream& src, const Ls::role_strength_info& s);
std::ostream& operator<<( std::ostream& src, const Ls::role_hero_job_info& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSRoleHeroJobInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::role_all_info& s);
std::ostream& operator<<( std::ostream& src, const Ls::role_game_info& s);
std::ostream& operator<<( std::ostream& src, const Ls::user_account& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCityMagicBuffInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SPerpareCardInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSPerpareCardInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SResourceDetailInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::role_hero_info& s);
std::ostream& operator<<( std::ostream& src, const Ls::SFoodIncreaseInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCityMagicInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SPopulationIncreaseInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMapObjBase& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCityBuildingInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSCityBuildingInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::CityBuildInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecCityBuildInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::DbCityBuildInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCityLockInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSCityLockInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::CityUnlockInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::DbCityLockInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCityBuildTile& s);
std::ostream& operator<<( std::ostream& src, const Ls::SColorInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SUnionFlagInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SApplyJoinInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SUnionHelpInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SUnionRankInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSUnionRankList& s);
std::ostream& operator<<( std::ostream& src, const Ls::union_data& s);
std::ostream& operator<<( std::ostream& src, const Ls::union_build& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecUnion_build& s);
std::ostream& operator<<( std::ostream& src, const Ls::SUnion_Castle& s);
std::ostream& operator<<( std::ostream& src, const Ls::SUnion_Assert& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDonationData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDonateResource& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDailyDonation& s);
std::ostream& operator<<( std::ostream& src, const Ls::SUnionDonationInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SUnionMemberInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLeagueInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SUnionTech& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSUnionTech& s);
std::ostream& operator<<( std::ostream& src, const Ls::SSystemTech& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSSystemTech& s);
std::ostream& operator<<( std::ostream& src, const Ls::SUnionTechInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SArmyInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSArmyInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SArmyBulid& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCityArmyInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCityTrainLimitInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMarchResInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMarchTroopsInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMarchTroopsReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSMarchTroopsReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMarchSpeed& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSMarchSpeed& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSMarchResInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSMarchTroopsInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDropResult& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSDropResult& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMapObj& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMarchRelicInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSMarchRelicInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCityMarchProgress& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSCityMarchProgress& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMassInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRoleCityInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::FightBuff& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecFightBuff& s);
std::ostream& operator<<( std::ostream& src, const Ls::SFightInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::PlayerInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecPlayerInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCaptiveReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SFightMarchInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SFightReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDropItem& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSDropItem& s);
std::ostream& operator<<( std::ostream& src, const Ls::SPopulationRes& s);
std::ostream& operator<<( std::ostream& src, const Ls::SEquip& s);
std::ostream& operator<<( std::ostream& src, const Ls::STechnologyInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecTechnologyInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SResourceInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SHurtArmyInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecHurtArmy& s);
std::ostream& operator<<( std::ostream& src, const Ls::STreatArmyInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::STreatInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SItemBuffInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecItemBuff& s);
std::ostream& operator<<( std::ostream& src, const Ls::EnemyLeagueInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecEnemyLeagueInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLoseInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLeagueRecord& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLeagueHistoryWar& s);
std::ostream& operator<<( std::ostream& src, const Ls::WarInfoList& s);
std::ostream& operator<<( std::ostream& src, const Ls::role_mail& s);
std::ostream& operator<<( std::ostream& src, const Ls::mail_digest& s);
std::ostream& operator<<( std::ostream& src, const Ls::role_sys_mail& s);
std::ostream& operator<<( std::ostream& src, const Ls::first_tip_mail& s);
std::ostream& operator<<( std::ostream& src, const Ls::reward_mail& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRecruitArmyInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRecruitInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRaceInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCollectReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SArmyKeepInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecArmyKeep& s);
std::ostream& operator<<( std::ostream& src, const Ls::SPosSave& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSPosSave& s);
std::ostream& operator<<( std::ostream& src, const Ls::STradeReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SBossReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::Spy_Struct& s);
std::ostream& operator<<( std::ostream& src, const Ls::Spy_Struct_Army& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSSpyArmy& s);
std::ostream& operator<<( std::ostream& src, const Ls::Spy_Struct_Buff& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSSpyBuff& s);
std::ostream& operator<<( std::ostream& src, const Ls::SSpyReportFight& s);
std::ostream& operator<<( std::ostream& src, const Ls::Spy_CastleInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::Spy_ResourceInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::Spy_ArmyInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::Spy_TrapInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SSpyReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SSpyReportArmy& s);
std::ostream& operator<<( std::ostream& src, const Ls::SSpyBeReported& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLeagueEventNotify& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDeclareWarReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SFightWarReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMakePeaceReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLeagueResultReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRoleInfoReserve& s);
std::ostream& operator<<( std::ostream& src, const Ls::DB_Fd& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecDB_Fd& s);
std::ostream& operator<<( std::ostream& src, const Ls::DB_Player_Info& s);
std::ostream& operator<<( std::ostream& src, const Ls::DB_Create_Info& s);
std::ostream& operator<<( std::ostream& src, const Ls::SOneCipher& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSOneCipher& s);
std::ostream& operator<<( std::ostream& src, const Ls::STowerCard& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDailyTask& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSDailyTask& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCurDailyTask& s);
std::ostream& operator<<( std::ostream& src, const Ls::SPlayerDailyTask& s);
std::ostream& operator<<( std::ostream& src, const Ls::STaskData& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSTaskData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SEmpireTask& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSEmpireTask& s);
std::ostream& operator<<( std::ostream& src, const Ls::IntKeyValue& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecIntKeyValue& s);
std::ostream& operator<<( std::ostream& src, const Ls::SPlayerMagic& s);
std::ostream& operator<<( std::ostream& src, const Ls::SHeroSkill& s);
std::ostream& operator<<( std::ostream& src, const Ls::SHeroData& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSHeroData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SUIntValue& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSUIntValue& s);
std::ostream& operator<<( std::ostream& src, const Ls::SAllHeroData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SSystemMailData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCastleFace& s);
std::ostream& operator<<( std::ostream& src, const Ls::SBigMapCastleInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SInnerCastleInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLogInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSLogInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLeagueKey& s);
std::ostream& operator<<( std::ostream& src, const Ls::SWarRecord& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSWarRecord& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLeagueInfoReverse& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRuleSystem& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSRuleSystem& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCountrySystem& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSCountrySystem& s);
std::ostream& operator<<( std::ostream& src, const Ls::SSystemInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCultureInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SProgressInfoEx& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMagicBoxInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLegendBoxInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SOrderRewardInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SOrderRewardInfoNtf& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSOrderRewardInfoNtf& s);
std::ostream& operator<<( std::ostream& src, const Ls::SOrderRewardNtf& s);
std::ostream& operator<<( std::ostream& src, const Ls::SArmyInfoEx& s);
std::ostream& operator<<( std::ostream& src, const Ls::ROLE& s);
std::ostream& operator<<( std::ostream& src, const Ls::CASTLE& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecCastle& s);
std::ostream& operator<<( std::ostream& src, const Ls::EQUIP& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecEquip& s);
std::ostream& operator<<( std::ostream& src, const Ls::AccountData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDonateReport& s);
std::ostream& operator<<( std::ostream& src, const Ls::SForgeInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMagicRecord& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSMagicRecord& s);
std::ostream& operator<<( std::ostream& src, const Ls::SAllianceGiftInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSAllianceGiftInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SKeyValue& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSKeyValue& s);
std::ostream& operator<<( std::ostream& src, const Ls::SEnchantAttr& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSEnchantAttr& s);
std::ostream& operator<<( std::ostream& src, const Ls::SEnchGroup& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSEnchGroup& s);
std::ostream& operator<<( std::ostream& src, const Ls::SEnchanting& s);
std::ostream& operator<<( std::ostream& src, const Ls::SGemEquip& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSGemEquip& s);
std::ostream& operator<<( std::ostream& src, const Ls::SEquipGemInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRefineData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRelicBase& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRelicInMap& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRelicInCity& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRelicOnTribe& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRelicInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::MailStrTip& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCarryInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::Goals& s);
std::ostream& operator<<( std::ostream& src, const Ls::Days& s);
std::ostream& operator<<( std::ostream& src, const Ls::SevenDaysInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SevenDays& s);
std::ostream& operator<<( std::ostream& src, const Ls::SSevenDays& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMonthCardInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSMonthCardInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRechargeInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRoleLimitEventInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSRoleLimitEventInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLimitEventData& s);
std::ostream& operator<<( std::ostream& src, const Ls::LimitEventInfoMail& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLeagueCastleInfoEx& s);
std::ostream& operator<<( std::ostream& src, const Ls::SPlayerIconInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SHeroInfoEx& s);
std::ostream& operator<<( std::ostream& src, const Ls::SReleseHeroMail& s);
std::ostream& operator<<( std::ostream& src, const Ls::SZoneBase& s);
std::ostream& operator<<( std::ostream& src, const Ls::SZoneArmy& s);
std::ostream& operator<<( std::ostream& src, const Ls::SZoneLeague& s);
std::ostream& operator<<( std::ostream& src, const Ls::SZoneBuff& s);
std::ostream& operator<<( std::ostream& src, const Ls::SZoneCircle& s);
std::ostream& operator<<( std::ostream& src, const Ls::SJunmenLoginData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SJunmenLoginInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::StartEventData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLivenessInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSLivenessInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLivenessData& s);
std::ostream& operator<<( std::ostream& src, const Ls::ZoneMapData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDuokuUserInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDuokuChannelInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDuokuLoginInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::UnionShopLog& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecUnionShopLog& s);
std::ostream& operator<<( std::ostream& src, const Ls::UnionGroupShop& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecUnionGroupShop& s);
std::ostream& operator<<( std::ostream& src, const Ls::UnionShopData& s);
std::ostream& operator<<( std::ostream& src, const Ls::online_number& s);
std::ostream& operator<<( std::ostream& src, const Ls::Register_log& s);
std::ostream& operator<<( std::ostream& src, const Ls::First_openlog& s);
std::ostream& operator<<( std::ostream& src, const Ls::login_success& s);
std::ostream& operator<<( std::ostream& src, const Ls::pay_log& s);
std::ostream& operator<<( std::ostream& src, const Ls::player_action_log& s);
std::ostream& operator<<( std::ostream& src, const Ls::player_online_log& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMagicEffect& s);
std::ostream& operator<<( std::ostream& src, const Ls::SChapterTaskInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSChapterTaskInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SChapterTaskData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SFightFailed& s);
std::ostream& operator<<( std::ostream& src, const Ls::MShopItem& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecMShopItem& s);
std::ostream& operator<<( std::ostream& src, const Ls::MShopData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SFleetTrade& s);
std::ostream& operator<<( std::ostream& src, const Ls::SAllyEvent& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSAllyEvent& s);
std::ostream& operator<<( std::ostream& src, const Ls::SOfflineInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SMillRes& s);
std::ostream& operator<<( std::ostream& src, const Ls::SGambleItem& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSGambleItem& s);
std::ostream& operator<<( std::ostream& src, const Ls::SGambleInfo& s);
std::ostream& operator<<( std::ostream& src, const Ls::SCityMillData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SDuokuLogExtend& s);
std::ostream& operator<<( std::ostream& src, const Ls::SWondulData& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecSWondulData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SRoleWondulData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SExchangeBuilding& s);
std::ostream& operator<<( std::ostream& src, const Ls::SLeagueCount& s);
std::ostream& operator<<( std::ostream& src, const Ls::Pvp_Log_ext& s);
std::ostream& operator<<( std::ostream& src, const Ls::role_show_info& s);
std::ostream& operator<<( std::ostream& src, const Ls::efun_auth_result& s);
std::ostream& operator<<( std::ostream& src, const Ls::SFriend_info& s);
std::ostream& operator<<( std::ostream& src, const Ls::SOtherTempData& s);
std::ostream& operator<<( std::ostream& src, const Ls::SResLog& s);
std::ostream& operator<<( std::ostream& src, const Ls::CaslteMapObj& s);
std::ostream& operator<<( std::ostream& src, const Ls::VecCaslteMapObj& s);
std::ostream& operator<<( std::ostream& src, const Ls::CaslteMapInfo& s);

CInArchive& operator>>(CInArchive& src, Ls::VecUInt32& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecUInt32& s);
CInArchive& operator>>(CInArchive& src, Ls::SetUInt16& s);
COutArchive& operator<<( COutArchive& src, const Ls::SetUInt16& s);
CInArchive& operator>>(CInArchive& src, Ls::VecString& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecString& s);
CInArchive& operator>>(CInArchive& src, Ls::LoginTesting& s);
COutArchive& operator<<( COutArchive& src, const Ls::LoginTesting& s);
CInArchive& operator>>(CInArchive& src, Ls::role_base_info& s);
COutArchive& operator<<( COutArchive& src, const Ls::role_base_info& s);
CInArchive& operator>>(CInArchive& src, Ls::LilithClientInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::LilithClientInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::role_asset_info& s);
COutArchive& operator<<( COutArchive& src, const Ls::role_asset_info& s);
CInArchive& operator>>(CInArchive& src, Ls::role_strength_info& s);
COutArchive& operator<<( COutArchive& src, const Ls::role_strength_info& s);
CInArchive& operator>>(CInArchive& src, Ls::role_hero_job_info& s);
COutArchive& operator<<( COutArchive& src, const Ls::role_hero_job_info& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSRoleHeroJobInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSRoleHeroJobInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::role_all_info& s);
COutArchive& operator<<( COutArchive& src, const Ls::role_all_info& s);
CInArchive& operator>>(CInArchive& src, Ls::role_game_info& s);
COutArchive& operator<<( COutArchive& src, const Ls::role_game_info& s);
CInArchive& operator>>(CInArchive& src, Ls::user_account& s);
COutArchive& operator<<( COutArchive& src, const Ls::user_account& s);
CInArchive& operator>>(CInArchive& src, Ls::SCityMagicBuffInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCityMagicBuffInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SPerpareCardInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SPerpareCardInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSPerpareCardInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSPerpareCardInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SResourceDetailInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SResourceDetailInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::role_hero_info& s);
COutArchive& operator<<( COutArchive& src, const Ls::role_hero_info& s);
CInArchive& operator>>(CInArchive& src, Ls::SFoodIncreaseInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SFoodIncreaseInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SCityMagicInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCityMagicInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SPopulationIncreaseInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SPopulationIncreaseInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SMapObjBase& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMapObjBase& s);
CInArchive& operator>>(CInArchive& src, Ls::SCityBuildingInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCityBuildingInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSCityBuildingInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSCityBuildingInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::CityBuildInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::CityBuildInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecCityBuildInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecCityBuildInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::DbCityBuildInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::DbCityBuildInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SCityLockInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCityLockInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSCityLockInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSCityLockInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::CityUnlockInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::CityUnlockInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::DbCityLockInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::DbCityLockInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SCityBuildTile& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCityBuildTile& s);
CInArchive& operator>>(CInArchive& src, Ls::SColorInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SColorInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SUnionFlagInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SUnionFlagInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SApplyJoinInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SApplyJoinInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SUnionHelpInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SUnionHelpInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SUnionRankInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SUnionRankInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSUnionRankList& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSUnionRankList& s);
CInArchive& operator>>(CInArchive& src, Ls::union_data& s);
COutArchive& operator<<( COutArchive& src, const Ls::union_data& s);
CInArchive& operator>>(CInArchive& src, Ls::union_build& s);
COutArchive& operator<<( COutArchive& src, const Ls::union_build& s);
CInArchive& operator>>(CInArchive& src, Ls::VecUnion_build& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecUnion_build& s);
CInArchive& operator>>(CInArchive& src, Ls::SUnion_Castle& s);
COutArchive& operator<<( COutArchive& src, const Ls::SUnion_Castle& s);
CInArchive& operator>>(CInArchive& src, Ls::SUnion_Assert& s);
COutArchive& operator<<( COutArchive& src, const Ls::SUnion_Assert& s);
CInArchive& operator>>(CInArchive& src, Ls::SDonationData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDonationData& s);
CInArchive& operator>>(CInArchive& src, Ls::SDonateResource& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDonateResource& s);
CInArchive& operator>>(CInArchive& src, Ls::SDailyDonation& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDailyDonation& s);
CInArchive& operator>>(CInArchive& src, Ls::SUnionDonationInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SUnionDonationInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SUnionMemberInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SUnionMemberInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SLeagueInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SUnionTech& s);
COutArchive& operator<<( COutArchive& src, const Ls::SUnionTech& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSUnionTech& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSUnionTech& s);
CInArchive& operator>>(CInArchive& src, Ls::SSystemTech& s);
COutArchive& operator<<( COutArchive& src, const Ls::SSystemTech& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSSystemTech& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSSystemTech& s);
CInArchive& operator>>(CInArchive& src, Ls::SUnionTechInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SUnionTechInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SArmyInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SArmyInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSArmyInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSArmyInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SArmyBulid& s);
COutArchive& operator<<( COutArchive& src, const Ls::SArmyBulid& s);
CInArchive& operator>>(CInArchive& src, Ls::SCityArmyInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCityArmyInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SCityTrainLimitInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCityTrainLimitInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SMarchResInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMarchResInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SMarchTroopsInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMarchTroopsInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SMarchTroopsReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMarchTroopsReport& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSMarchTroopsReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSMarchTroopsReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SMarchSpeed& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMarchSpeed& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSMarchSpeed& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSMarchSpeed& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSMarchResInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSMarchResInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSMarchTroopsInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSMarchTroopsInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SDropResult& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDropResult& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSDropResult& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSDropResult& s);
CInArchive& operator>>(CInArchive& src, Ls::SMapObj& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMapObj& s);
CInArchive& operator>>(CInArchive& src, Ls::SMarchRelicInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMarchRelicInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSMarchRelicInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSMarchRelicInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SCityMarchProgress& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCityMarchProgress& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSCityMarchProgress& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSCityMarchProgress& s);
CInArchive& operator>>(CInArchive& src, Ls::SMassInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMassInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SRoleCityInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRoleCityInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::FightBuff& s);
COutArchive& operator<<( COutArchive& src, const Ls::FightBuff& s);
CInArchive& operator>>(CInArchive& src, Ls::VecFightBuff& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecFightBuff& s);
CInArchive& operator>>(CInArchive& src, Ls::SFightInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SFightInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::PlayerInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::PlayerInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecPlayerInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecPlayerInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SCaptiveReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCaptiveReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SFightMarchInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SFightMarchInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SFightReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SFightReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SDropItem& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDropItem& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSDropItem& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSDropItem& s);
CInArchive& operator>>(CInArchive& src, Ls::SPopulationRes& s);
COutArchive& operator<<( COutArchive& src, const Ls::SPopulationRes& s);
CInArchive& operator>>(CInArchive& src, Ls::SEquip& s);
COutArchive& operator<<( COutArchive& src, const Ls::SEquip& s);
CInArchive& operator>>(CInArchive& src, Ls::STechnologyInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::STechnologyInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecTechnologyInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecTechnologyInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SResourceInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SResourceInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SHurtArmyInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SHurtArmyInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecHurtArmy& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecHurtArmy& s);
CInArchive& operator>>(CInArchive& src, Ls::STreatArmyInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::STreatArmyInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::STreatInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::STreatInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SItemBuffInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SItemBuffInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecItemBuff& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecItemBuff& s);
CInArchive& operator>>(CInArchive& src, Ls::EnemyLeagueInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::EnemyLeagueInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecEnemyLeagueInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecEnemyLeagueInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SLoseInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLoseInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SLeagueRecord& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueRecord& s);
CInArchive& operator>>(CInArchive& src, Ls::SLeagueHistoryWar& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueHistoryWar& s);
CInArchive& operator>>(CInArchive& src, Ls::WarInfoList& s);
COutArchive& operator<<( COutArchive& src, const Ls::WarInfoList& s);
CInArchive& operator>>(CInArchive& src, Ls::role_mail& s);
COutArchive& operator<<( COutArchive& src, const Ls::role_mail& s);
CInArchive& operator>>(CInArchive& src, Ls::mail_digest& s);
COutArchive& operator<<( COutArchive& src, const Ls::mail_digest& s);
CInArchive& operator>>(CInArchive& src, Ls::role_sys_mail& s);
COutArchive& operator<<( COutArchive& src, const Ls::role_sys_mail& s);
CInArchive& operator>>(CInArchive& src, Ls::first_tip_mail& s);
COutArchive& operator<<( COutArchive& src, const Ls::first_tip_mail& s);
CInArchive& operator>>(CInArchive& src, Ls::reward_mail& s);
COutArchive& operator<<( COutArchive& src, const Ls::reward_mail& s);
CInArchive& operator>>(CInArchive& src, Ls::SRecruitArmyInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRecruitArmyInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SRecruitInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRecruitInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SRaceInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRaceInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SCollectReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCollectReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SArmyKeepInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SArmyKeepInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecArmyKeep& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecArmyKeep& s);
CInArchive& operator>>(CInArchive& src, Ls::SPosSave& s);
COutArchive& operator<<( COutArchive& src, const Ls::SPosSave& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSPosSave& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSPosSave& s);
CInArchive& operator>>(CInArchive& src, Ls::STradeReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::STradeReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SBossReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SBossReport& s);
CInArchive& operator>>(CInArchive& src, Ls::Spy_Struct& s);
COutArchive& operator<<( COutArchive& src, const Ls::Spy_Struct& s);
CInArchive& operator>>(CInArchive& src, Ls::Spy_Struct_Army& s);
COutArchive& operator<<( COutArchive& src, const Ls::Spy_Struct_Army& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSSpyArmy& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSSpyArmy& s);
CInArchive& operator>>(CInArchive& src, Ls::Spy_Struct_Buff& s);
COutArchive& operator<<( COutArchive& src, const Ls::Spy_Struct_Buff& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSSpyBuff& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSSpyBuff& s);
CInArchive& operator>>(CInArchive& src, Ls::SSpyReportFight& s);
COutArchive& operator<<( COutArchive& src, const Ls::SSpyReportFight& s);
CInArchive& operator>>(CInArchive& src, Ls::Spy_CastleInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::Spy_CastleInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::Spy_ResourceInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::Spy_ResourceInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::Spy_ArmyInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::Spy_ArmyInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::Spy_TrapInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::Spy_TrapInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SSpyReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SSpyReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SSpyReportArmy& s);
COutArchive& operator<<( COutArchive& src, const Ls::SSpyReportArmy& s);
CInArchive& operator>>(CInArchive& src, Ls::SSpyBeReported& s);
COutArchive& operator<<( COutArchive& src, const Ls::SSpyBeReported& s);
CInArchive& operator>>(CInArchive& src, Ls::SLeagueEventNotify& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueEventNotify& s);
CInArchive& operator>>(CInArchive& src, Ls::SDeclareWarReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDeclareWarReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SFightWarReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SFightWarReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SMakePeaceReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMakePeaceReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SLeagueResultReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueResultReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SRoleInfoReserve& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRoleInfoReserve& s);
CInArchive& operator>>(CInArchive& src, Ls::DB_Fd& s);
COutArchive& operator<<( COutArchive& src, const Ls::DB_Fd& s);
CInArchive& operator>>(CInArchive& src, Ls::VecDB_Fd& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecDB_Fd& s);
CInArchive& operator>>(CInArchive& src, Ls::DB_Player_Info& s);
COutArchive& operator<<( COutArchive& src, const Ls::DB_Player_Info& s);
CInArchive& operator>>(CInArchive& src, Ls::DB_Create_Info& s);
COutArchive& operator<<( COutArchive& src, const Ls::DB_Create_Info& s);
CInArchive& operator>>(CInArchive& src, Ls::SOneCipher& s);
COutArchive& operator<<( COutArchive& src, const Ls::SOneCipher& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSOneCipher& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSOneCipher& s);
CInArchive& operator>>(CInArchive& src, Ls::STowerCard& s);
COutArchive& operator<<( COutArchive& src, const Ls::STowerCard& s);
CInArchive& operator>>(CInArchive& src, Ls::SDailyTask& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDailyTask& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSDailyTask& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSDailyTask& s);
CInArchive& operator>>(CInArchive& src, Ls::SCurDailyTask& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCurDailyTask& s);
CInArchive& operator>>(CInArchive& src, Ls::SPlayerDailyTask& s);
COutArchive& operator<<( COutArchive& src, const Ls::SPlayerDailyTask& s);
CInArchive& operator>>(CInArchive& src, Ls::STaskData& s);
COutArchive& operator<<( COutArchive& src, const Ls::STaskData& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSTaskData& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSTaskData& s);
CInArchive& operator>>(CInArchive& src, Ls::SEmpireTask& s);
COutArchive& operator<<( COutArchive& src, const Ls::SEmpireTask& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSEmpireTask& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSEmpireTask& s);
CInArchive& operator>>(CInArchive& src, Ls::IntKeyValue& s);
COutArchive& operator<<( COutArchive& src, const Ls::IntKeyValue& s);
CInArchive& operator>>(CInArchive& src, Ls::VecIntKeyValue& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecIntKeyValue& s);
CInArchive& operator>>(CInArchive& src, Ls::SPlayerMagic& s);
COutArchive& operator<<( COutArchive& src, const Ls::SPlayerMagic& s);
CInArchive& operator>>(CInArchive& src, Ls::SHeroSkill& s);
COutArchive& operator<<( COutArchive& src, const Ls::SHeroSkill& s);
CInArchive& operator>>(CInArchive& src, Ls::SHeroData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SHeroData& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSHeroData& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSHeroData& s);
CInArchive& operator>>(CInArchive& src, Ls::SUIntValue& s);
COutArchive& operator<<( COutArchive& src, const Ls::SUIntValue& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSUIntValue& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSUIntValue& s);
CInArchive& operator>>(CInArchive& src, Ls::SAllHeroData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SAllHeroData& s);
CInArchive& operator>>(CInArchive& src, Ls::SSystemMailData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SSystemMailData& s);
CInArchive& operator>>(CInArchive& src, Ls::SCastleFace& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCastleFace& s);
CInArchive& operator>>(CInArchive& src, Ls::SBigMapCastleInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SBigMapCastleInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SInnerCastleInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SInnerCastleInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SLogInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLogInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSLogInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSLogInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SLeagueKey& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueKey& s);
CInArchive& operator>>(CInArchive& src, Ls::SWarRecord& s);
COutArchive& operator<<( COutArchive& src, const Ls::SWarRecord& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSWarRecord& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSWarRecord& s);
CInArchive& operator>>(CInArchive& src, Ls::SLeagueInfoReverse& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueInfoReverse& s);
CInArchive& operator>>(CInArchive& src, Ls::SRuleSystem& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRuleSystem& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSRuleSystem& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSRuleSystem& s);
CInArchive& operator>>(CInArchive& src, Ls::SCountrySystem& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCountrySystem& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSCountrySystem& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSCountrySystem& s);
CInArchive& operator>>(CInArchive& src, Ls::SSystemInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SSystemInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SCultureInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCultureInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SProgressInfoEx& s);
COutArchive& operator<<( COutArchive& src, const Ls::SProgressInfoEx& s);
CInArchive& operator>>(CInArchive& src, Ls::SMagicBoxInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMagicBoxInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SLegendBoxInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLegendBoxInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SOrderRewardInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SOrderRewardInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SOrderRewardInfoNtf& s);
COutArchive& operator<<( COutArchive& src, const Ls::SOrderRewardInfoNtf& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSOrderRewardInfoNtf& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSOrderRewardInfoNtf& s);
CInArchive& operator>>(CInArchive& src, Ls::SOrderRewardNtf& s);
COutArchive& operator<<( COutArchive& src, const Ls::SOrderRewardNtf& s);
CInArchive& operator>>(CInArchive& src, Ls::SArmyInfoEx& s);
COutArchive& operator<<( COutArchive& src, const Ls::SArmyInfoEx& s);
CInArchive& operator>>(CInArchive& src, Ls::ROLE& s);
COutArchive& operator<<( COutArchive& src, const Ls::ROLE& s);
CInArchive& operator>>(CInArchive& src, Ls::CASTLE& s);
COutArchive& operator<<( COutArchive& src, const Ls::CASTLE& s);
CInArchive& operator>>(CInArchive& src, Ls::VecCastle& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecCastle& s);
CInArchive& operator>>(CInArchive& src, Ls::EQUIP& s);
COutArchive& operator<<( COutArchive& src, const Ls::EQUIP& s);
CInArchive& operator>>(CInArchive& src, Ls::VecEquip& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecEquip& s);
CInArchive& operator>>(CInArchive& src, Ls::AccountData& s);
COutArchive& operator<<( COutArchive& src, const Ls::AccountData& s);
CInArchive& operator>>(CInArchive& src, Ls::SDonateReport& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDonateReport& s);
CInArchive& operator>>(CInArchive& src, Ls::SForgeInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SForgeInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SMagicRecord& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMagicRecord& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSMagicRecord& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSMagicRecord& s);
CInArchive& operator>>(CInArchive& src, Ls::SAllianceGiftInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SAllianceGiftInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSAllianceGiftInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSAllianceGiftInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SKeyValue& s);
COutArchive& operator<<( COutArchive& src, const Ls::SKeyValue& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSKeyValue& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSKeyValue& s);
CInArchive& operator>>(CInArchive& src, Ls::SEnchantAttr& s);
COutArchive& operator<<( COutArchive& src, const Ls::SEnchantAttr& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSEnchantAttr& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSEnchantAttr& s);
CInArchive& operator>>(CInArchive& src, Ls::SEnchGroup& s);
COutArchive& operator<<( COutArchive& src, const Ls::SEnchGroup& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSEnchGroup& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSEnchGroup& s);
CInArchive& operator>>(CInArchive& src, Ls::SEnchanting& s);
COutArchive& operator<<( COutArchive& src, const Ls::SEnchanting& s);
CInArchive& operator>>(CInArchive& src, Ls::SGemEquip& s);
COutArchive& operator<<( COutArchive& src, const Ls::SGemEquip& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSGemEquip& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSGemEquip& s);
CInArchive& operator>>(CInArchive& src, Ls::SEquipGemInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SEquipGemInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SRefineData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRefineData& s);
CInArchive& operator>>(CInArchive& src, Ls::SRelicBase& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRelicBase& s);
CInArchive& operator>>(CInArchive& src, Ls::SRelicInMap& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRelicInMap& s);
CInArchive& operator>>(CInArchive& src, Ls::SRelicInCity& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRelicInCity& s);
CInArchive& operator>>(CInArchive& src, Ls::SRelicOnTribe& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRelicOnTribe& s);
CInArchive& operator>>(CInArchive& src, Ls::SRelicInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRelicInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::MailStrTip& s);
COutArchive& operator<<( COutArchive& src, const Ls::MailStrTip& s);
CInArchive& operator>>(CInArchive& src, Ls::SCarryInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCarryInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::Goals& s);
COutArchive& operator<<( COutArchive& src, const Ls::Goals& s);
CInArchive& operator>>(CInArchive& src, Ls::Days& s);
COutArchive& operator<<( COutArchive& src, const Ls::Days& s);
CInArchive& operator>>(CInArchive& src, Ls::SevenDaysInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SevenDaysInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SevenDays& s);
COutArchive& operator<<( COutArchive& src, const Ls::SevenDays& s);
CInArchive& operator>>(CInArchive& src, Ls::SSevenDays& s);
COutArchive& operator<<( COutArchive& src, const Ls::SSevenDays& s);
CInArchive& operator>>(CInArchive& src, Ls::SMonthCardInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMonthCardInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSMonthCardInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSMonthCardInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SRechargeInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRechargeInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SRoleLimitEventInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRoleLimitEventInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSRoleLimitEventInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSRoleLimitEventInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SLimitEventData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLimitEventData& s);
CInArchive& operator>>(CInArchive& src, Ls::LimitEventInfoMail& s);
COutArchive& operator<<( COutArchive& src, const Ls::LimitEventInfoMail& s);
CInArchive& operator>>(CInArchive& src, Ls::SLeagueCastleInfoEx& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueCastleInfoEx& s);
CInArchive& operator>>(CInArchive& src, Ls::SPlayerIconInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SPlayerIconInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SHeroInfoEx& s);
COutArchive& operator<<( COutArchive& src, const Ls::SHeroInfoEx& s);
CInArchive& operator>>(CInArchive& src, Ls::SReleseHeroMail& s);
COutArchive& operator<<( COutArchive& src, const Ls::SReleseHeroMail& s);
CInArchive& operator>>(CInArchive& src, Ls::SZoneBase& s);
COutArchive& operator<<( COutArchive& src, const Ls::SZoneBase& s);
CInArchive& operator>>(CInArchive& src, Ls::SZoneArmy& s);
COutArchive& operator<<( COutArchive& src, const Ls::SZoneArmy& s);
CInArchive& operator>>(CInArchive& src, Ls::SZoneLeague& s);
COutArchive& operator<<( COutArchive& src, const Ls::SZoneLeague& s);
CInArchive& operator>>(CInArchive& src, Ls::SZoneBuff& s);
COutArchive& operator<<( COutArchive& src, const Ls::SZoneBuff& s);
CInArchive& operator>>(CInArchive& src, Ls::SZoneCircle& s);
COutArchive& operator<<( COutArchive& src, const Ls::SZoneCircle& s);
CInArchive& operator>>(CInArchive& src, Ls::SJunmenLoginData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SJunmenLoginData& s);
CInArchive& operator>>(CInArchive& src, Ls::SJunmenLoginInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SJunmenLoginInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::StartEventData& s);
COutArchive& operator<<( COutArchive& src, const Ls::StartEventData& s);
CInArchive& operator>>(CInArchive& src, Ls::SLivenessInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLivenessInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSLivenessInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSLivenessInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SLivenessData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLivenessData& s);
CInArchive& operator>>(CInArchive& src, Ls::ZoneMapData& s);
COutArchive& operator<<( COutArchive& src, const Ls::ZoneMapData& s);
CInArchive& operator>>(CInArchive& src, Ls::SDuokuUserInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDuokuUserInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SDuokuChannelInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDuokuChannelInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SDuokuLoginInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDuokuLoginInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::UnionShopLog& s);
COutArchive& operator<<( COutArchive& src, const Ls::UnionShopLog& s);
CInArchive& operator>>(CInArchive& src, Ls::VecUnionShopLog& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecUnionShopLog& s);
CInArchive& operator>>(CInArchive& src, Ls::UnionGroupShop& s);
COutArchive& operator<<( COutArchive& src, const Ls::UnionGroupShop& s);
CInArchive& operator>>(CInArchive& src, Ls::VecUnionGroupShop& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecUnionGroupShop& s);
CInArchive& operator>>(CInArchive& src, Ls::UnionShopData& s);
COutArchive& operator<<( COutArchive& src, const Ls::UnionShopData& s);
CInArchive& operator>>(CInArchive& src, Ls::online_number& s);
COutArchive& operator<<( COutArchive& src, const Ls::online_number& s);
CInArchive& operator>>(CInArchive& src, Ls::Register_log& s);
COutArchive& operator<<( COutArchive& src, const Ls::Register_log& s);
CInArchive& operator>>(CInArchive& src, Ls::First_openlog& s);
COutArchive& operator<<( COutArchive& src, const Ls::First_openlog& s);
CInArchive& operator>>(CInArchive& src, Ls::login_success& s);
COutArchive& operator<<( COutArchive& src, const Ls::login_success& s);
CInArchive& operator>>(CInArchive& src, Ls::pay_log& s);
COutArchive& operator<<( COutArchive& src, const Ls::pay_log& s);
CInArchive& operator>>(CInArchive& src, Ls::player_action_log& s);
COutArchive& operator<<( COutArchive& src, const Ls::player_action_log& s);
CInArchive& operator>>(CInArchive& src, Ls::player_online_log& s);
COutArchive& operator<<( COutArchive& src, const Ls::player_online_log& s);
CInArchive& operator>>(CInArchive& src, Ls::SMagicEffect& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMagicEffect& s);
CInArchive& operator>>(CInArchive& src, Ls::SChapterTaskInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SChapterTaskInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSChapterTaskInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSChapterTaskInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SChapterTaskData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SChapterTaskData& s);
CInArchive& operator>>(CInArchive& src, Ls::SFightFailed& s);
COutArchive& operator<<( COutArchive& src, const Ls::SFightFailed& s);
CInArchive& operator>>(CInArchive& src, Ls::MShopItem& s);
COutArchive& operator<<( COutArchive& src, const Ls::MShopItem& s);
CInArchive& operator>>(CInArchive& src, Ls::VecMShopItem& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecMShopItem& s);
CInArchive& operator>>(CInArchive& src, Ls::MShopData& s);
COutArchive& operator<<( COutArchive& src, const Ls::MShopData& s);
CInArchive& operator>>(CInArchive& src, Ls::SFleetTrade& s);
COutArchive& operator<<( COutArchive& src, const Ls::SFleetTrade& s);
CInArchive& operator>>(CInArchive& src, Ls::SAllyEvent& s);
COutArchive& operator<<( COutArchive& src, const Ls::SAllyEvent& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSAllyEvent& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSAllyEvent& s);
CInArchive& operator>>(CInArchive& src, Ls::SOfflineInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SOfflineInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SMillRes& s);
COutArchive& operator<<( COutArchive& src, const Ls::SMillRes& s);
CInArchive& operator>>(CInArchive& src, Ls::SGambleItem& s);
COutArchive& operator<<( COutArchive& src, const Ls::SGambleItem& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSGambleItem& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSGambleItem& s);
CInArchive& operator>>(CInArchive& src, Ls::SGambleInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::SGambleInfo& s);
CInArchive& operator>>(CInArchive& src, Ls::SCityMillData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SCityMillData& s);
CInArchive& operator>>(CInArchive& src, Ls::SDuokuLogExtend& s);
COutArchive& operator<<( COutArchive& src, const Ls::SDuokuLogExtend& s);
CInArchive& operator>>(CInArchive& src, Ls::SWondulData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SWondulData& s);
CInArchive& operator>>(CInArchive& src, Ls::VecSWondulData& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecSWondulData& s);
CInArchive& operator>>(CInArchive& src, Ls::SRoleWondulData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SRoleWondulData& s);
CInArchive& operator>>(CInArchive& src, Ls::SExchangeBuilding& s);
COutArchive& operator<<( COutArchive& src, const Ls::SExchangeBuilding& s);
CInArchive& operator>>(CInArchive& src, Ls::SLeagueCount& s);
COutArchive& operator<<( COutArchive& src, const Ls::SLeagueCount& s);
CInArchive& operator>>(CInArchive& src, Ls::Pvp_Log_ext& s);
COutArchive& operator<<( COutArchive& src, const Ls::Pvp_Log_ext& s);
CInArchive& operator>>(CInArchive& src, Ls::role_show_info& s);
COutArchive& operator<<( COutArchive& src, const Ls::role_show_info& s);
CInArchive& operator>>(CInArchive& src, Ls::efun_auth_result& s);
COutArchive& operator<<( COutArchive& src, const Ls::efun_auth_result& s);
CInArchive& operator>>(CInArchive& src, Ls::SFriend_info& s);
COutArchive& operator<<( COutArchive& src, const Ls::SFriend_info& s);
CInArchive& operator>>(CInArchive& src, Ls::SOtherTempData& s);
COutArchive& operator<<( COutArchive& src, const Ls::SOtherTempData& s);
CInArchive& operator>>(CInArchive& src, Ls::SResLog& s);
COutArchive& operator<<( COutArchive& src, const Ls::SResLog& s);
CInArchive& operator>>(CInArchive& src, Ls::CaslteMapObj& s);
COutArchive& operator<<( COutArchive& src, const Ls::CaslteMapObj& s);
CInArchive& operator>>(CInArchive& src, Ls::VecCaslteMapObj& s);
COutArchive& operator<<( COutArchive& src, const Ls::VecCaslteMapObj& s);
CInArchive& operator>>(CInArchive& src, Ls::CaslteMapInfo& s);
COutArchive& operator<<( COutArchive& src, const Ls::CaslteMapInfo& s);

void WriteToJson( const Ls::VecUInt32& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecUInt32& s,  const UJsonNode& n );
void WriteToJson( const Ls::SetUInt16& s,  UJsonNode& n);
bool ReadFromJson( Ls::SetUInt16& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecString& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecString& s,  const UJsonNode& n );
void WriteToJson( const Ls::LoginTesting& s,  UJsonNode& n);
bool ReadFromJson( Ls::LoginTesting& s,  const UJsonNode& n );
void WriteToJson( const Ls::role_base_info& s,  UJsonNode& n);
bool ReadFromJson( Ls::role_base_info& s,  const UJsonNode& n );
void WriteToJson( const Ls::LilithClientInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::LilithClientInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::role_asset_info& s,  UJsonNode& n);
bool ReadFromJson( Ls::role_asset_info& s,  const UJsonNode& n );
void WriteToJson( const Ls::role_strength_info& s,  UJsonNode& n);
bool ReadFromJson( Ls::role_strength_info& s,  const UJsonNode& n );
void WriteToJson( const Ls::role_hero_job_info& s,  UJsonNode& n);
bool ReadFromJson( Ls::role_hero_job_info& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSRoleHeroJobInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSRoleHeroJobInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::role_all_info& s,  UJsonNode& n);
bool ReadFromJson( Ls::role_all_info& s,  const UJsonNode& n );
void WriteToJson( const Ls::role_game_info& s,  UJsonNode& n);
bool ReadFromJson( Ls::role_game_info& s,  const UJsonNode& n );
void WriteToJson( const Ls::user_account& s,  UJsonNode& n);
bool ReadFromJson( Ls::user_account& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCityMagicBuffInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCityMagicBuffInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SPerpareCardInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SPerpareCardInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSPerpareCardInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSPerpareCardInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SResourceDetailInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SResourceDetailInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::role_hero_info& s,  UJsonNode& n);
bool ReadFromJson( Ls::role_hero_info& s,  const UJsonNode& n );
void WriteToJson( const Ls::SFoodIncreaseInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SFoodIncreaseInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCityMagicInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCityMagicInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SPopulationIncreaseInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SPopulationIncreaseInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMapObjBase& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMapObjBase& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCityBuildingInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCityBuildingInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSCityBuildingInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSCityBuildingInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::CityBuildInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::CityBuildInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecCityBuildInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecCityBuildInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::DbCityBuildInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::DbCityBuildInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCityLockInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCityLockInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSCityLockInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSCityLockInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::CityUnlockInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::CityUnlockInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::DbCityLockInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::DbCityLockInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCityBuildTile& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCityBuildTile& s,  const UJsonNode& n );
void WriteToJson( const Ls::SColorInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SColorInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SUnionFlagInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SUnionFlagInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SApplyJoinInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SApplyJoinInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SUnionHelpInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SUnionHelpInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SUnionRankInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SUnionRankInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSUnionRankList& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSUnionRankList& s,  const UJsonNode& n );
void WriteToJson( const Ls::union_data& s,  UJsonNode& n);
bool ReadFromJson( Ls::union_data& s,  const UJsonNode& n );
void WriteToJson( const Ls::union_build& s,  UJsonNode& n);
bool ReadFromJson( Ls::union_build& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecUnion_build& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecUnion_build& s,  const UJsonNode& n );
void WriteToJson( const Ls::SUnion_Castle& s,  UJsonNode& n);
bool ReadFromJson( Ls::SUnion_Castle& s,  const UJsonNode& n );
void WriteToJson( const Ls::SUnion_Assert& s,  UJsonNode& n);
bool ReadFromJson( Ls::SUnion_Assert& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDonationData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDonationData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDonateResource& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDonateResource& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDailyDonation& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDailyDonation& s,  const UJsonNode& n );
void WriteToJson( const Ls::SUnionDonationInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SUnionDonationInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SUnionMemberInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SUnionMemberInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLeagueInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLeagueInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SUnionTech& s,  UJsonNode& n);
bool ReadFromJson( Ls::SUnionTech& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSUnionTech& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSUnionTech& s,  const UJsonNode& n );
void WriteToJson( const Ls::SSystemTech& s,  UJsonNode& n);
bool ReadFromJson( Ls::SSystemTech& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSSystemTech& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSSystemTech& s,  const UJsonNode& n );
void WriteToJson( const Ls::SUnionTechInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SUnionTechInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SArmyInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SArmyInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSArmyInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSArmyInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SArmyBulid& s,  UJsonNode& n);
bool ReadFromJson( Ls::SArmyBulid& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCityArmyInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCityArmyInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCityTrainLimitInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCityTrainLimitInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMarchResInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMarchResInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMarchTroopsInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMarchTroopsInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMarchTroopsReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMarchTroopsReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSMarchTroopsReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSMarchTroopsReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMarchSpeed& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMarchSpeed& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSMarchSpeed& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSMarchSpeed& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSMarchResInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSMarchResInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSMarchTroopsInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSMarchTroopsInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDropResult& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDropResult& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSDropResult& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSDropResult& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMapObj& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMapObj& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMarchRelicInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMarchRelicInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSMarchRelicInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSMarchRelicInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCityMarchProgress& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCityMarchProgress& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSCityMarchProgress& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSCityMarchProgress& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMassInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMassInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRoleCityInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRoleCityInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::FightBuff& s,  UJsonNode& n);
bool ReadFromJson( Ls::FightBuff& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecFightBuff& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecFightBuff& s,  const UJsonNode& n );
void WriteToJson( const Ls::SFightInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SFightInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::PlayerInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::PlayerInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecPlayerInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecPlayerInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCaptiveReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCaptiveReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SFightMarchInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SFightMarchInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SFightReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SFightReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDropItem& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDropItem& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSDropItem& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSDropItem& s,  const UJsonNode& n );
void WriteToJson( const Ls::SPopulationRes& s,  UJsonNode& n);
bool ReadFromJson( Ls::SPopulationRes& s,  const UJsonNode& n );
void WriteToJson( const Ls::SEquip& s,  UJsonNode& n);
bool ReadFromJson( Ls::SEquip& s,  const UJsonNode& n );
void WriteToJson( const Ls::STechnologyInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::STechnologyInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecTechnologyInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecTechnologyInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SResourceInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SResourceInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SHurtArmyInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SHurtArmyInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecHurtArmy& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecHurtArmy& s,  const UJsonNode& n );
void WriteToJson( const Ls::STreatArmyInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::STreatArmyInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::STreatInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::STreatInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SItemBuffInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SItemBuffInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecItemBuff& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecItemBuff& s,  const UJsonNode& n );
void WriteToJson( const Ls::EnemyLeagueInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::EnemyLeagueInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecEnemyLeagueInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecEnemyLeagueInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLoseInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLoseInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLeagueRecord& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLeagueRecord& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLeagueHistoryWar& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLeagueHistoryWar& s,  const UJsonNode& n );
void WriteToJson( const Ls::WarInfoList& s,  UJsonNode& n);
bool ReadFromJson( Ls::WarInfoList& s,  const UJsonNode& n );
void WriteToJson( const Ls::role_mail& s,  UJsonNode& n);
bool ReadFromJson( Ls::role_mail& s,  const UJsonNode& n );
void WriteToJson( const Ls::mail_digest& s,  UJsonNode& n);
bool ReadFromJson( Ls::mail_digest& s,  const UJsonNode& n );
void WriteToJson( const Ls::role_sys_mail& s,  UJsonNode& n);
bool ReadFromJson( Ls::role_sys_mail& s,  const UJsonNode& n );
void WriteToJson( const Ls::first_tip_mail& s,  UJsonNode& n);
bool ReadFromJson( Ls::first_tip_mail& s,  const UJsonNode& n );
void WriteToJson( const Ls::reward_mail& s,  UJsonNode& n);
bool ReadFromJson( Ls::reward_mail& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRecruitArmyInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRecruitArmyInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRecruitInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRecruitInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRaceInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRaceInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCollectReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCollectReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SArmyKeepInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SArmyKeepInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecArmyKeep& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecArmyKeep& s,  const UJsonNode& n );
void WriteToJson( const Ls::SPosSave& s,  UJsonNode& n);
bool ReadFromJson( Ls::SPosSave& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSPosSave& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSPosSave& s,  const UJsonNode& n );
void WriteToJson( const Ls::STradeReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::STradeReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SBossReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SBossReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::Spy_Struct& s,  UJsonNode& n);
bool ReadFromJson( Ls::Spy_Struct& s,  const UJsonNode& n );
void WriteToJson( const Ls::Spy_Struct_Army& s,  UJsonNode& n);
bool ReadFromJson( Ls::Spy_Struct_Army& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSSpyArmy& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSSpyArmy& s,  const UJsonNode& n );
void WriteToJson( const Ls::Spy_Struct_Buff& s,  UJsonNode& n);
bool ReadFromJson( Ls::Spy_Struct_Buff& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSSpyBuff& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSSpyBuff& s,  const UJsonNode& n );
void WriteToJson( const Ls::SSpyReportFight& s,  UJsonNode& n);
bool ReadFromJson( Ls::SSpyReportFight& s,  const UJsonNode& n );
void WriteToJson( const Ls::Spy_CastleInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::Spy_CastleInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::Spy_ResourceInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::Spy_ResourceInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::Spy_ArmyInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::Spy_ArmyInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::Spy_TrapInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::Spy_TrapInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SSpyReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SSpyReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SSpyReportArmy& s,  UJsonNode& n);
bool ReadFromJson( Ls::SSpyReportArmy& s,  const UJsonNode& n );
void WriteToJson( const Ls::SSpyBeReported& s,  UJsonNode& n);
bool ReadFromJson( Ls::SSpyBeReported& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLeagueEventNotify& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLeagueEventNotify& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDeclareWarReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDeclareWarReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SFightWarReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SFightWarReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMakePeaceReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMakePeaceReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLeagueResultReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLeagueResultReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRoleInfoReserve& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRoleInfoReserve& s,  const UJsonNode& n );
void WriteToJson( const Ls::DB_Fd& s,  UJsonNode& n);
bool ReadFromJson( Ls::DB_Fd& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecDB_Fd& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecDB_Fd& s,  const UJsonNode& n );
void WriteToJson( const Ls::DB_Player_Info& s,  UJsonNode& n);
bool ReadFromJson( Ls::DB_Player_Info& s,  const UJsonNode& n );
void WriteToJson( const Ls::DB_Create_Info& s,  UJsonNode& n);
bool ReadFromJson( Ls::DB_Create_Info& s,  const UJsonNode& n );
void WriteToJson( const Ls::SOneCipher& s,  UJsonNode& n);
bool ReadFromJson( Ls::SOneCipher& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSOneCipher& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSOneCipher& s,  const UJsonNode& n );
void WriteToJson( const Ls::STowerCard& s,  UJsonNode& n);
bool ReadFromJson( Ls::STowerCard& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDailyTask& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDailyTask& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSDailyTask& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSDailyTask& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCurDailyTask& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCurDailyTask& s,  const UJsonNode& n );
void WriteToJson( const Ls::SPlayerDailyTask& s,  UJsonNode& n);
bool ReadFromJson( Ls::SPlayerDailyTask& s,  const UJsonNode& n );
void WriteToJson( const Ls::STaskData& s,  UJsonNode& n);
bool ReadFromJson( Ls::STaskData& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSTaskData& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSTaskData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SEmpireTask& s,  UJsonNode& n);
bool ReadFromJson( Ls::SEmpireTask& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSEmpireTask& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSEmpireTask& s,  const UJsonNode& n );
void WriteToJson( const Ls::IntKeyValue& s,  UJsonNode& n);
bool ReadFromJson( Ls::IntKeyValue& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecIntKeyValue& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecIntKeyValue& s,  const UJsonNode& n );
void WriteToJson( const Ls::SPlayerMagic& s,  UJsonNode& n);
bool ReadFromJson( Ls::SPlayerMagic& s,  const UJsonNode& n );
void WriteToJson( const Ls::SHeroSkill& s,  UJsonNode& n);
bool ReadFromJson( Ls::SHeroSkill& s,  const UJsonNode& n );
void WriteToJson( const Ls::SHeroData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SHeroData& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSHeroData& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSHeroData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SUIntValue& s,  UJsonNode& n);
bool ReadFromJson( Ls::SUIntValue& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSUIntValue& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSUIntValue& s,  const UJsonNode& n );
void WriteToJson( const Ls::SAllHeroData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SAllHeroData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SSystemMailData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SSystemMailData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCastleFace& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCastleFace& s,  const UJsonNode& n );
void WriteToJson( const Ls::SBigMapCastleInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SBigMapCastleInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SInnerCastleInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SInnerCastleInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLogInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLogInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSLogInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSLogInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLeagueKey& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLeagueKey& s,  const UJsonNode& n );
void WriteToJson( const Ls::SWarRecord& s,  UJsonNode& n);
bool ReadFromJson( Ls::SWarRecord& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSWarRecord& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSWarRecord& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLeagueInfoReverse& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLeagueInfoReverse& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRuleSystem& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRuleSystem& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSRuleSystem& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSRuleSystem& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCountrySystem& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCountrySystem& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSCountrySystem& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSCountrySystem& s,  const UJsonNode& n );
void WriteToJson( const Ls::SSystemInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SSystemInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCultureInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCultureInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SProgressInfoEx& s,  UJsonNode& n);
bool ReadFromJson( Ls::SProgressInfoEx& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMagicBoxInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMagicBoxInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLegendBoxInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLegendBoxInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SOrderRewardInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SOrderRewardInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SOrderRewardInfoNtf& s,  UJsonNode& n);
bool ReadFromJson( Ls::SOrderRewardInfoNtf& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSOrderRewardInfoNtf& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSOrderRewardInfoNtf& s,  const UJsonNode& n );
void WriteToJson( const Ls::SOrderRewardNtf& s,  UJsonNode& n);
bool ReadFromJson( Ls::SOrderRewardNtf& s,  const UJsonNode& n );
void WriteToJson( const Ls::SArmyInfoEx& s,  UJsonNode& n);
bool ReadFromJson( Ls::SArmyInfoEx& s,  const UJsonNode& n );
void WriteToJson( const Ls::ROLE& s,  UJsonNode& n);
bool ReadFromJson( Ls::ROLE& s,  const UJsonNode& n );
void WriteToJson( const Ls::CASTLE& s,  UJsonNode& n);
bool ReadFromJson( Ls::CASTLE& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecCastle& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecCastle& s,  const UJsonNode& n );
void WriteToJson( const Ls::EQUIP& s,  UJsonNode& n);
bool ReadFromJson( Ls::EQUIP& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecEquip& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecEquip& s,  const UJsonNode& n );
void WriteToJson( const Ls::AccountData& s,  UJsonNode& n);
bool ReadFromJson( Ls::AccountData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDonateReport& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDonateReport& s,  const UJsonNode& n );
void WriteToJson( const Ls::SForgeInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SForgeInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMagicRecord& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMagicRecord& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSMagicRecord& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSMagicRecord& s,  const UJsonNode& n );
void WriteToJson( const Ls::SAllianceGiftInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SAllianceGiftInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSAllianceGiftInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSAllianceGiftInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SKeyValue& s,  UJsonNode& n);
bool ReadFromJson( Ls::SKeyValue& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSKeyValue& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSKeyValue& s,  const UJsonNode& n );
void WriteToJson( const Ls::SEnchantAttr& s,  UJsonNode& n);
bool ReadFromJson( Ls::SEnchantAttr& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSEnchantAttr& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSEnchantAttr& s,  const UJsonNode& n );
void WriteToJson( const Ls::SEnchGroup& s,  UJsonNode& n);
bool ReadFromJson( Ls::SEnchGroup& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSEnchGroup& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSEnchGroup& s,  const UJsonNode& n );
void WriteToJson( const Ls::SEnchanting& s,  UJsonNode& n);
bool ReadFromJson( Ls::SEnchanting& s,  const UJsonNode& n );
void WriteToJson( const Ls::SGemEquip& s,  UJsonNode& n);
bool ReadFromJson( Ls::SGemEquip& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSGemEquip& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSGemEquip& s,  const UJsonNode& n );
void WriteToJson( const Ls::SEquipGemInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SEquipGemInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRefineData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRefineData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRelicBase& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRelicBase& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRelicInMap& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRelicInMap& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRelicInCity& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRelicInCity& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRelicOnTribe& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRelicOnTribe& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRelicInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRelicInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::MailStrTip& s,  UJsonNode& n);
bool ReadFromJson( Ls::MailStrTip& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCarryInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCarryInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::Goals& s,  UJsonNode& n);
bool ReadFromJson( Ls::Goals& s,  const UJsonNode& n );
void WriteToJson( const Ls::Days& s,  UJsonNode& n);
bool ReadFromJson( Ls::Days& s,  const UJsonNode& n );
void WriteToJson( const Ls::SevenDaysInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SevenDaysInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SevenDays& s,  UJsonNode& n);
bool ReadFromJson( Ls::SevenDays& s,  const UJsonNode& n );
void WriteToJson( const Ls::SSevenDays& s,  UJsonNode& n);
bool ReadFromJson( Ls::SSevenDays& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMonthCardInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMonthCardInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSMonthCardInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSMonthCardInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRechargeInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRechargeInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRoleLimitEventInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRoleLimitEventInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSRoleLimitEventInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSRoleLimitEventInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLimitEventData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLimitEventData& s,  const UJsonNode& n );
void WriteToJson( const Ls::LimitEventInfoMail& s,  UJsonNode& n);
bool ReadFromJson( Ls::LimitEventInfoMail& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLeagueCastleInfoEx& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLeagueCastleInfoEx& s,  const UJsonNode& n );
void WriteToJson( const Ls::SPlayerIconInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SPlayerIconInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SHeroInfoEx& s,  UJsonNode& n);
bool ReadFromJson( Ls::SHeroInfoEx& s,  const UJsonNode& n );
void WriteToJson( const Ls::SReleseHeroMail& s,  UJsonNode& n);
bool ReadFromJson( Ls::SReleseHeroMail& s,  const UJsonNode& n );
void WriteToJson( const Ls::SZoneBase& s,  UJsonNode& n);
bool ReadFromJson( Ls::SZoneBase& s,  const UJsonNode& n );
void WriteToJson( const Ls::SZoneArmy& s,  UJsonNode& n);
bool ReadFromJson( Ls::SZoneArmy& s,  const UJsonNode& n );
void WriteToJson( const Ls::SZoneLeague& s,  UJsonNode& n);
bool ReadFromJson( Ls::SZoneLeague& s,  const UJsonNode& n );
void WriteToJson( const Ls::SZoneBuff& s,  UJsonNode& n);
bool ReadFromJson( Ls::SZoneBuff& s,  const UJsonNode& n );
void WriteToJson( const Ls::SZoneCircle& s,  UJsonNode& n);
bool ReadFromJson( Ls::SZoneCircle& s,  const UJsonNode& n );
void WriteToJson( const Ls::SJunmenLoginData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SJunmenLoginData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SJunmenLoginInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SJunmenLoginInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::StartEventData& s,  UJsonNode& n);
bool ReadFromJson( Ls::StartEventData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLivenessInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLivenessInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSLivenessInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSLivenessInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLivenessData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLivenessData& s,  const UJsonNode& n );
void WriteToJson( const Ls::ZoneMapData& s,  UJsonNode& n);
bool ReadFromJson( Ls::ZoneMapData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDuokuUserInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDuokuUserInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDuokuChannelInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDuokuChannelInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDuokuLoginInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDuokuLoginInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::UnionShopLog& s,  UJsonNode& n);
bool ReadFromJson( Ls::UnionShopLog& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecUnionShopLog& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecUnionShopLog& s,  const UJsonNode& n );
void WriteToJson( const Ls::UnionGroupShop& s,  UJsonNode& n);
bool ReadFromJson( Ls::UnionGroupShop& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecUnionGroupShop& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecUnionGroupShop& s,  const UJsonNode& n );
void WriteToJson( const Ls::UnionShopData& s,  UJsonNode& n);
bool ReadFromJson( Ls::UnionShopData& s,  const UJsonNode& n );
void WriteToJson( const Ls::online_number& s,  UJsonNode& n);
bool ReadFromJson( Ls::online_number& s,  const UJsonNode& n );
void WriteToJson( const Ls::Register_log& s,  UJsonNode& n);
bool ReadFromJson( Ls::Register_log& s,  const UJsonNode& n );
void WriteToJson( const Ls::First_openlog& s,  UJsonNode& n);
bool ReadFromJson( Ls::First_openlog& s,  const UJsonNode& n );
void WriteToJson( const Ls::login_success& s,  UJsonNode& n);
bool ReadFromJson( Ls::login_success& s,  const UJsonNode& n );
void WriteToJson( const Ls::pay_log& s,  UJsonNode& n);
bool ReadFromJson( Ls::pay_log& s,  const UJsonNode& n );
void WriteToJson( const Ls::player_action_log& s,  UJsonNode& n);
bool ReadFromJson( Ls::player_action_log& s,  const UJsonNode& n );
void WriteToJson( const Ls::player_online_log& s,  UJsonNode& n);
bool ReadFromJson( Ls::player_online_log& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMagicEffect& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMagicEffect& s,  const UJsonNode& n );
void WriteToJson( const Ls::SChapterTaskInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SChapterTaskInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSChapterTaskInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSChapterTaskInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SChapterTaskData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SChapterTaskData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SFightFailed& s,  UJsonNode& n);
bool ReadFromJson( Ls::SFightFailed& s,  const UJsonNode& n );
void WriteToJson( const Ls::MShopItem& s,  UJsonNode& n);
bool ReadFromJson( Ls::MShopItem& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecMShopItem& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecMShopItem& s,  const UJsonNode& n );
void WriteToJson( const Ls::MShopData& s,  UJsonNode& n);
bool ReadFromJson( Ls::MShopData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SFleetTrade& s,  UJsonNode& n);
bool ReadFromJson( Ls::SFleetTrade& s,  const UJsonNode& n );
void WriteToJson( const Ls::SAllyEvent& s,  UJsonNode& n);
bool ReadFromJson( Ls::SAllyEvent& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSAllyEvent& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSAllyEvent& s,  const UJsonNode& n );
void WriteToJson( const Ls::SOfflineInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SOfflineInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SMillRes& s,  UJsonNode& n);
bool ReadFromJson( Ls::SMillRes& s,  const UJsonNode& n );
void WriteToJson( const Ls::SGambleItem& s,  UJsonNode& n);
bool ReadFromJson( Ls::SGambleItem& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSGambleItem& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSGambleItem& s,  const UJsonNode& n );
void WriteToJson( const Ls::SGambleInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::SGambleInfo& s,  const UJsonNode& n );
void WriteToJson( const Ls::SCityMillData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SCityMillData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SDuokuLogExtend& s,  UJsonNode& n);
bool ReadFromJson( Ls::SDuokuLogExtend& s,  const UJsonNode& n );
void WriteToJson( const Ls::SWondulData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SWondulData& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecSWondulData& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecSWondulData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SRoleWondulData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SRoleWondulData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SExchangeBuilding& s,  UJsonNode& n);
bool ReadFromJson( Ls::SExchangeBuilding& s,  const UJsonNode& n );
void WriteToJson( const Ls::SLeagueCount& s,  UJsonNode& n);
bool ReadFromJson( Ls::SLeagueCount& s,  const UJsonNode& n );
void WriteToJson( const Ls::Pvp_Log_ext& s,  UJsonNode& n);
bool ReadFromJson( Ls::Pvp_Log_ext& s,  const UJsonNode& n );
void WriteToJson( const Ls::role_show_info& s,  UJsonNode& n);
bool ReadFromJson( Ls::role_show_info& s,  const UJsonNode& n );
void WriteToJson( const Ls::efun_auth_result& s,  UJsonNode& n);
bool ReadFromJson( Ls::efun_auth_result& s,  const UJsonNode& n );
void WriteToJson( const Ls::SFriend_info& s,  UJsonNode& n);
bool ReadFromJson( Ls::SFriend_info& s,  const UJsonNode& n );
void WriteToJson( const Ls::SOtherTempData& s,  UJsonNode& n);
bool ReadFromJson( Ls::SOtherTempData& s,  const UJsonNode& n );
void WriteToJson( const Ls::SResLog& s,  UJsonNode& n);
bool ReadFromJson( Ls::SResLog& s,  const UJsonNode& n );
void WriteToJson( const Ls::CaslteMapObj& s,  UJsonNode& n);
bool ReadFromJson( Ls::CaslteMapObj& s,  const UJsonNode& n );
void WriteToJson( const Ls::VecCaslteMapObj& s,  UJsonNode& n);
bool ReadFromJson( Ls::VecCaslteMapObj& s,  const UJsonNode& n );
void WriteToJson( const Ls::CaslteMapInfo& s,  UJsonNode& n);
bool ReadFromJson( Ls::CaslteMapInfo& s,  const UJsonNode& n );

#endif
