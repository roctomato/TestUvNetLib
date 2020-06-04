#pragma  once

#define  MAX_THIS_ID     1000000000

#define MAX_SHOP_RECORD  200

// player flag
#define FLAG_ROLE_CASTLE1       1       //--玩家城市1 1
#define FLAG_ROLE_CASTLE2       (1<<1)	//--玩家城市2 2
#define FLAG_ROLE_CASTLE3       (1<<2)	//--玩家城市3 4
#define FLAG_ROLE_TECHNOLOG     (1<<3)	//--玩家科技  8
#define FLAG_ROLE_MAGIC         (1<<4)	//--玩家法术  16
#define FLAG_ROLE_SYSTEM        (1<<5)	//--玩家制度  32 
#define FLAG_ROLE_ITEM          (1<<6)	//--玩家道具  64 

// castle flag
#define FLAG_CASTLE_BUILD   1       //--城市建筑信息  1
#define FLAG_CASTLE_ARMY    (1<<1)	//--城市部队信息  2
#define FLAG_CASTLE_TRAP    (1<<2)	//--城市陷阱信息  4

enum ATTR_TYPE{
	// 玩家属性
	ATTR_TYPE_GOLD           = 1, // 金币
	ATTR_TYPE_POWER          = 2, // 战力
	ATTR_TYPE_PLAYER_LEVEL   = 3, // 玩家等级
	ATTR_TYPE_PLAYER_NEWBIE  = 4, // 新手任务阶段ID
	ATTR_TYPE_PLAYER_NAME    = 5,  // 玩家名字 string
	ATTR_TYPE_ARMY_POWER     = 6, // 部队实力 int64
	ATTR_TYPE_BUILD_POWER    = 7, // 建筑实力 int64
	ATTR_TYPE_TECH_POWER     = 8, // 科技实力 int64
	ATTR_TYPE_HERO_POWER     = 9, // 英雄实力 int64
	
	ATTR_TYPE_PLAYER_WEEK_CONTRIBUTE = 10, // 玩家本周贡献 int32
	ATTR_TYPE_PLAYER_CONTRIBUTE      = 11, // 玩家贡献 int32
	ATTR_TYPE_PLAYER_EXPLOIT         = 12, // 玩家功勋 int32
	ATTR_TYPE_PLAYER_DAY_CONTRIBUTE  = 13, // 玩家今日贡献 int32 
	ATTR_TYPE_PLAYER_WEEK_MAX_CONTRIBUTE  = 14, // 玩家本周贡献上限 int32 
	
	ATTR_TYPE_PLAYER_HELP_CONTRIBUTE = 15, // 本周帮助盟友贡献 int32 
	ATTR_TYPE_PLAYER_TASK_CONTRIBUTE = 16, // 本周完成任务贡献 int32
	ATTR_TYPE_DONATE_ITEM_CONTRIBUTE = 17, // 本周捐献道具贡献 int32
	ATTR_TYPE_DONATE_GLOD_CONTRIBUTE = 18, // 本周捐献金币贡献 int32
	ATTR_TYPE_DONATE_RES_CONTRIBUTE  = 19, // 本周捐资源贡献 int32
	
	
	ATTR_TYPE_HERO_ENERGY    = 20, // 英雄能量
	ATTR_TYPE_MAGIC_DUST     = 21, // 魔尘
	
	ATTR_TYPE_PLAYER_STORY        = 22,
	ATTR_TYPE_PLAYER_ISNEWNAME    = 23,	
	ATTR_TYPE_DAY_TIME_HELP_CONTRIBUTE  = 24, // 每日时间进度帮助获得的贡献 int32
	ATTR_TYPE_DAY_CARD_HELP_CONTRIBUTE  = 25, // 每日时间卡牌帮助获得的贡献 int32
	
	ATTR_TYPE_PLAYER_ICON   = 26, //玩家头像信息 string
	
	ATTR_TYPE_LENGTH_TIME    = 29, // 持续登陆时间 int64
	
	ATTR_TYPE_VIP_LEVEL      = 30, // vip等级   int32
	ATTR_TYPE_VIP_LEFT_TIME  = 31, // vip剩余时间 int64
	ATTR_TYPE_VIP_EXP        = 32, // vip经验值  int64
	ATTR_TYPE_VIP_AdvanceTime        = 33, // int64
	
	ATTR_TYPE_Login_days             = 34, // int32
	ATTR_TYPE_Activity_Info          = 35, // string
	
	ATTR_TYPE_PRI_LEVEL      = 40, // privilege等级   int32
	ATTR_TYPE_PRI_EXP        = 41, // privilege剩余时间 int64	
	
	ATTR_TYPE_MAGIC_CARD_POWER  = 42, // 卡牌实力 int64
	ATTR_TYPE_EQUIP_POWER       = 43, // 装备实力 int64
	
	ATTR_TYPE_RANK_LEVEL     = 50, // 联盟军阶等级 int32
	ATTR_TYPE_LEAGUE_ID      = 51, // 联盟ID  int32
	ATTR_TYPE_LEAGUE_TAG     = 52, // 联盟标签 string
	ATTR_TYPE_LEAGUE_HELP_NUM = 53, // 联盟未处理的帮助总数 int32
	ATTR_TYPE_TIME_HELP_NUM   = 54, // 联盟未处理的时间帮助 int32
	ATTR_TYPE_CARD_HELP_NUM   = 55, // 联盟未处理的卡牌帮助 int32
	ATTR_TYPE_LEAGUE_GIFT     = 56, // 未领取的联盟礼物数量 int32
	ATTR_TYPE_LEAGUE_FIRST_JOIN = 57, // 是否加入过联盟(0否1是) int32
	ATTR_TYPE_LEAGUE_ZONE_BUY_TIMES_PERSON = 58, // int32
	
	ATTR_TYPE_MAX_POWER   = 70,  //max power int64
	ATTR_TYPE_CLIENT_ACTION   = 80,  //玩家已上报事件 json vector
	ATTR_TYPE_FIRST_PAY   = 81,      //玩家已购买礼包 json vector
	
	// 城市属性
	ATTR_TYPE_CITY_LEVEL = 100, // 城市等级 int32
	ATTR_TYPE_CITY_STATE = 101, // 城市状态 int32
	ATTR_TYPE_CITY_NAME  = 102, //
	
	ATTR_TYPE_FOOD       = 110, // 粮食
	ATTR_TYPE_WOOD       = 111, // 木材
    ATTR_TYPE_STONE      = 112, // 石料
	ATTR_TYPE_IRON       = 113, // 铁矿
	ATTR_TYPE_SILVER     = 114, // 银币
	ATTR_TYPE_MANA       = 115, // 法力值
	ATTR_TYPE_PEOPLE     = 116, // 人口
	ATTR_TYPE_CULTURE    = 117, // 文化
	ATTR_TYPE_RELIC_GOLD    = 118, // 圣物金币产出
	ATTR_TYPE_RELIC_PEOPLE  = 119, // 圣物人口产出
	
	ATTR_TYPE_MILL_FOOD       = 120, // 磨坊粮食 int32
	ATTR_TYPE_MILL_WOOD       = 121, // 磨坊木材 int32
    ATTR_TYPE_MILL_STONE      = 122, // 磨坊石料 int32
	ATTR_TYPE_MILL_IRON       = 123, // 磨坊铁矿 int32
	ATTR_TYPE_MILL_SILVER     = 124, // 磨坊银币 int32
	
	
	ATTR_TYPE_MarchingMaxcount = 130, // 行军队列规模 int32
	ATTR_TYPE_MAX_MARCH_QUEUE  = 131, // 最大行军队列条数 int32
	ATTR_TYPE_ARMY_MAX_NUM     = 132, // 正规军上限
	ATTR_TYPE_TRAIN_ARMY       = 133, // 训练规模 int64
	ATTR_TYPE_TRAP_MAX_NUM     = 134, // 陷阱上限 int64
    ATTR_TYPE_TRAIN_TRAP       = 135, // 陷阱训练规模
	ATTR_TYPE_HURT_MAX_NUM     = 136, // 伤兵上限
	ATTR_TYPE_CUR_HURT_NUM     = 137, // 当前伤兵
	ATTR_TYPE_REPAIR_MAX_NUM   = 138, // 修复上限 int64
	ATTR_TYPE_CUR_REPAIR_NUM   = 139, // 当前修复 int64
	
	ATTR_TYPE_LEFT_HIRE_TRIBE_CAP = 140, // 城市剩余可雇佣蛮族容量  int64
	ATTR_TYPE_HIRE_TRIBE_MAX_CAP  = 141, // 城市雇佣蛮族最大容量  int64
	ATTR_TYPE_MAX_AID_CAP         = 142, // 大使馆援军容量 int64
	ATTR_TYPE_LEAGUE_HIRE_MAX_NUM = 143, // 联盟雇佣军上限 int64
	ATTR_TYPE_CUR_TRAP_NUM     = 144, // 当前陷阱数量 int64
	ATTR_TYPE_LEFT_LEAGUE_HIRE_CAP = 145, // 剩余可雇佣联盟卫队容量 int64
	ATTR_TYPE_CUR_AID_NUM         = 146, // 当前援军数量 int64
	
	ATTR_TYPE_PRACTICE_ARMY       = 147, // 今日是否操练过部队(0否1是) int32
	

	ATTR_TYPE_LEAGUE_DESTORY  = 150, // 联盟解散
	ATTR_TYPE_IN_LEAGUE_RANGE = 151, // 是否在联盟城市周围(0否1是) int32 
	ATTR_TYPE_CITY_FACE      = 160, // CITY face
	
	ATTR_TYPE_CITY_BUFF_NUM  = 180, // 城市buff
	ATTR_TYPE_MAGIC_BUFF_NUM = 181, // 法术buff
	
	ATTR_TYPE_ARMY_SCALE_ADDED = 200, // 士兵训练规模加成 int32
	ATTR_TYPE_TRAP_SCALE_ADDED = 201, // 陷阱训练规模加成 int32
	ATTR_TYPE_SCOUT_CONSUME    = 202, // 侦查消耗降低 int32
	ATTR_TYPE_Special_Success_Ratio  = 203, // 任务特殊奖励加成 int32
	ATTR_TYPE_Monster_Energy_Down    = 204, // 打野怪能量减耗加成 int32
	ATTR_TYPE_TROOP_WERIGHT_ADDED    = 205, // 部队负重加成 int32
	ATTR_TYPE_ARMY_SCALE_INCOME      = 206, // 士兵训练规模增加值 int64
	ATTR_TYPE_TRAP_SCALE_INCOME      = 207, // int64
	ATTR_TYPE_Hero_Energy_Down      = 208, // 英雄能量减耗加成 int32
	ATTR_TYPE_Tribe_Energy_Down     = 209, // 打蛮族能量减耗加成 int32
	ATTR_TYPE_Hire_Tribe_Cost_Down   = 210, // 雇佣蛮族减耗 int32
	ATTR_TYPE_Relic_Attr_Increase   = 211, // 圣物属性加成 int32
	
	ATTR_TYPE_Relic_Attr_Gold_Increase   = 212, // 圣物金币产量加成 int32
	ATTR_TYPE_Relic_Attr_People_Increase = 213, // 圣物人口产量加成 int32
	
	
	ATTR_TYPE_Lv1_infantryman_Train_Cost = 251, // 1级步兵训练费用降低 int32 (11)
	ATTR_TYPE_Lv1_archer_Train_Cost      = 252, // 1级弓兵训练费用降低 int32 (12)
	ATTR_TYPE_Lv1_knight_Train_Cost      = 253, // 1级骑兵训练费用降低 int32 (13)
	ATTR_TYPE_Lv1_equipment_Train_Cost   = 254, // 1级器械训练费用降低 int32 (14)
	
	ATTR_TYPE_Lv2_infantryman_Train_Cost = 255, // 2级步兵训练费用降低 int32 (21)
	ATTR_TYPE_Lv2_archer_Train_Cost      = 256, // 2级弓兵训练费用降低 int32 (22)
	ATTR_TYPE_Lv2_knight_Train_Cost      = 257, // 2级骑兵训练费用降低 int32 (23)
	ATTR_TYPE_Lv2_equipment_Train_Cost   = 258, // 2级器械训练费用降低 int32 (24)
	
	ATTR_TYPE_Lv3_infantryman_Train_Cost = 259, // 3级步兵训练费用降低 int32 (31)
	ATTR_TYPE_Lv3_archer_Train_Cost      = 260, // 3级弓兵训练费用降低 int32 (32)
	ATTR_TYPE_Lv3_knight_Train_Cost      = 261, // 3级骑兵训练费用降低 int32 (33)
	ATTR_TYPE_Lv3_equipment_Train_Cost   = 262, // 3级器械训练费用降低 int32 (34)
	
	ATTR_TYPE_Lv4_infantryman_Train_Cost = 263, // 4级步兵训练费用降低 int32 (41)
	ATTR_TYPE_Lv4_archer_Train_Cost      = 264, // 4级弓兵训练费用降低 int32 (42)
	ATTR_TYPE_Lv4_knight_Train_Cost      = 265, // 4级骑兵训练费用降低 int32 (43)
	ATTR_TYPE_Lv4_equipment_Train_Cost   = 266, // 4级器械训练费用降低 int32 (44)
	
	
	
	ATTR_TYPE_HERO_LEVEL                   = 300,
	ATTR_TYPE_HERO_EXP                     = 301,
    ATTR_TYPE_HERO_NAME                    = 302,
    ATTR_TYPE_HERO_SKILL1                    = 303,
    ATTR_TYPE_HERO_SKILL2                    = 304,
    ATTR_TYPE_HERO_SKILL3                    = 305,	
	
	ATTR_TYPE_HERO_FACE                      = 306,
	
	ATTR_TYPE_HAS_NEW_HERO_EVENT             = 400, // 获得新英雄 int32
	ATTR_TYPE_HAS_NEW_CARD_HELP              = 401, // 有新的卡牌帮助请求 int32
	ATTR_TYPE_Get_NEW_CARD_HELP              = 402, // 获得新的卡牌帮助 int32
	
	//玩家信息显示
	ATTR_TYPE_Fight_Win_Count  = 501, // 战斗胜利次数
	ATTR_TYPE_Fight_Fail_Count = 502, // 战斗失败次数
	ATTR_TYPE_Attack_Win_Count = 503, // 进攻胜利次数
	ATTR_TYPE_Attack_Fail_Count = 504, // 进攻失败次数
	ATTR_TYPE_Defend_Win_Count  = 505, // 防守胜利次数
	ATTR_TYPE_Defend_Fail_Count = 506, // 防守失败次数
	ATTR_TYPE_Spy_Count         = 507, // 侦查次数
	ATTR_TYPE_Destroy_Army_Count = 508, // 消灭部队数量
	ATTR_TYPE_Lost_Army_Count    = 509, // 部队损失数量
	ATTR_TYPE_Cure_Army_Count    = 510, // 部队治疗数量
	ATTR_TYPE_Destroy_City_Count = 511, // 摧毁城市次数
	ATTR_TYPE_Exile_City_Count   = 512, // 城市流亡次数
	
	ATTR_TYPE_Honor            = 513, // 荣誉值
	
	ATTR_TYPE_Captured_Hero_Count = 514, // 俘获英雄次数
	ATTR_TYPE_trapped_Hero_Count  = 515, // 英雄被俘次数
	ATTR_TYPE_Kill_Hero_Count     = 516, // 斩首英雄次数
	ATTR_TYPE_Killed_Hero_Count   = 517, // 英雄被杀次数
	ATTR_TYPE_Released_Hero_Count = 518, // 英雄被释放次数
	ATTR_TYPE_Rescue_Hero_Count   = 519, // 英雄被解救次数
	ATTR_TYPE_Kill_Monster_Count  = 520, // 击杀怪物数量
	
	ATTR_TYPE_Power_Order          = 521, // 实力排行
	ATTR_TYPE_Hero_Power_Order     = 522, // 英雄实力排行
	ATTR_TYPE_Destroy_Army_Order   = 523, // 击杀部队排行
	ATTR_TYPE_Kill_Monster_Order   = 524, // 击杀怪物排行
	ATTR_TYPE_Honor_Order          = 525, // 荣誉排行
	ATTR_TYPE_Cost_Gold_Order      = 526, // 花费金币排行
	ATTR_TYPE_Captured_Hero_Order  = 527, // 俘获英雄排行
	ATTR_TYPE_Kill_Hero_Order      = 528, // 斩首英雄排行
	
	ATTR_TYPE_King_Count           = 529, // 当选国王
	
	ATTR_TYPE_Legendary_Activity_Top1  = 530, // 赢得传奇活动第1
	ATTR_TYPE_Legendary_Activity_Top3  = 531, // 赢得传奇活动前3
	ATTR_TYPE_Legendary_Activity_Top10 = 532, // 赢得传奇活动第前10
	
	ATTR_TYPE_League_Activity_Top1     = 533, // 联盟活动获得第1名
	ATTR_TYPE_League_Activity_Top3     = 534, // 赢得联盟活动第前3
	ATTR_TYPE_League_Activity_Top10    = 535, // 赢得联盟活动第前10
	
	ATTR_TYPE_Country_Activity_Top1    = 536, // 赢得国家活动第1
	ATTR_TYPE_Country_Activity_Top3    = 537, // 赢得国家活动前3
	ATTR_TYPE_Country_Activity_Top10   = 538, // 赢得国家活动前10
	
	
	
	// 城市信息显示
	ATTR_TYPE_March_Queue_Count   = 539, // 行军队列总数
	ATTR_TYPE_March_Army_Count    = 540, // 出征兵力
	ATTR_TYPE_Make_Trap_Speed_Increase     = 541, // 制造陷阱速度
	ATTR_TYPE_Make_Trap_Cost_Increase      = 542, // 制造陷阱消耗
	ATTR_TYPE_March_Speed_Increase         = 543, // 部队行军速度(march_speed)
	ATTR_TYPE_March_Weight_Increase        = 544, // 部队行军负重
	
	ATTR_TYPE_Infantry_Attack_Increase     = 545, // 步兵攻击
	ATTR_TYPE_Infantry_Defend_Increase     = 546, // 步兵防御
	ATTR_TYPE_Infantry_Health_Increase     = 547, // 步兵生命
	ATTR_TYPE_Bowman_Attack_Increase       = 548, // 弓兵攻击
	ATTR_TYPE_Bowman_Defend_Increase       = 549, // 弓兵防御
	ATTR_TYPE_Bowman_Health_Increase       = 550, // 弓兵生命
	ATTR_TYPE_Cavalry_Attack_Increase      = 551, // 骑兵攻击
	ATTR_TYPE_Cavalry_Defend_Increase      = 552, // 骑兵防御
	ATTR_TYPE_Cavalry_Health_Increase      = 553, // 骑兵生命
	ATTR_TYPE_Machine_Attack_Increase      = 554, // 器械攻击
	ATTR_TYPE_Machine_Defend_Increase      = 555, // 器械防御
	ATTR_TYPE_Machine_Health_Increase      = 556, // 器械生命
	ATTR_TYPE_Trap_Attack_Increase         = 557, // 陷阱攻击
	ATTR_TYPE_Trap_Defend_Increase         = 558, // 陷阱防御
	ATTR_TYPE_Trap_Health_Increase         = 559, // 陷阱耐久
	
	ATTR_TYPE_Reinforcement_Count = 560, // 援军数量
	
	ATTR_TYPE_Food_Out_Put        = 561, // 粮食产量
	ATTR_TYPE_Wood_Out_Put        = 562, // 木材产量
	ATTR_TYPE_Stone_Out_Put       = 563, // 石材产量
	ATTR_TYPE_Iron_Out_Put        = 564, // 铁矿产量
	ATTR_TYPE_Silver_Out_Put      = 565, // 银矿产量
	
	ATTR_TYPE_Res_Collect_Speed_Increase   = 566, // 资源采集速度
	ATTR_TYPE_Gold_Collect_Speed_Increase  = 567, // 金币采集速度
	ATTR_TYPE_Warehouse_Protect   = 568, // 仓库保护量
	ATTR_TYPE_Build_Speed_Increase         = 569, // 建筑建造速度
	ATTR_TYPE_Develop_Tech_Speed_Increase  = 570, // 科技研究速度
	ATTR_TYPE_Culture_Out_Put_Increase     = 571, // 文化产出速度
	ATTR_TYPE_Mana_Recover_Speed_Increase  = 572, // 法力恢复速度
	ATTR_TYPE_Train_Army          = 573, // 训练士兵
	ATTR_TYPE_Train_Army_Speed_Increase    = 574, // 训练速度
	ATTR_TYPE_Train_Army_Cost_Increase     = 575, // 训练消耗
	ATTR_TYPE_Hospital_Capacity   = 576, // 医院容量
	ATTR_TYPE_Cure_Speed_Increase          = 577, // 治疗速度
	ATTR_TYPE_Cure_Cost_Increase           = 578, // 治疗消耗
	ATTR_TYPE_Keep_Army_Cost_Increase      = 579, // 维护费
	ATTR_TYPE_Hero_Energy_Recover_Speed_Increase  = 580, // 能量恢复速度
	
	////////////
	ATTR_TYPE_Troops_Weight_Increase       = 581, // 部队负重加成 int32
	ATTR_TYPE_Monster_March_Speed_Increase = 582, // daye行军速度(monster_march_speed)
	ATTR_TYPE_Trade_March_Speed_Increase   = 583, // trade_march_speed
	
	ATTR_TYPE_trade_march_speed = 700,//运输行军速度提高 trade_march_speed
	ATTR_TYPE_army_hp = 701,//部队生命值提高 army_hp
	ATTR_TYPE_army_defense = 702,//部队防御力提高 army_defense
	ATTR_TYPE_army_attack = 703,//部队攻击力提高 army_attack
	ATTR_TYPE_army_ranged_defense = 704,//部队远程防御提高 army_ranged_defense
	ATTR_TYPE_army_ranged_attack = 705,//部队远程攻击提高 army_ranged_attack
	ATTR_TYPE_army_melee_defense = 706,//部队近战防御提高 army_melee_defense
	ATTR_TYPE_army_melee_attack = 707,//部队近战攻击提高 army_melee_attack
	ATTR_TYPE_army_knight_marster = 708,//骑兵攻击^防御^生命值提高 army_knight_marster
	ATTR_TYPE_army_infantryman_marster = 709,//步兵攻击^防御^生命值提高 army_infantryman_marster
	ATTR_TYPE_army_archer_marster = 710,//弓兵攻击^防御^生命值提高 army_archer_marster
	ATTR_TYPE_army_repair_marster = 711,//器械攻击^防御^生命值提高 army_repair_marster
	ATTR_TYPE_barbarian_attack_up = 712,//对蛮族造成的伤害提高 barbarian_attack_up
	ATTR_TYPE_barbarian_damage_down = 713,//攻击蛮族时所受伤害降低 barbarian_damage_down
	ATTR_TYPE_plunder_resources_amount = 714,//资源掠夺量提高 plunder_resources_amount
	
	ATTR_TYPE_culture    = 715, // 文化
	ATTR_TYPE_build_cost = 716,//建造消耗降低 build_cost
	ATTR_TYPE_research_cost = 717,//研发消耗降低 research_cost
	ATTR_TYPE_forge_time_down = 718,//锻造时间减少 forge_time_down
	ATTR_TYPE_forge_silver_down = 719,//锻造消耗银币减少 forge_silver_down
	ATTR_TYPE_monster_extra_drop = 720,//攻击怪物有几率获得额外的道具 monster_extra_drop
	ATTR_TYPE_barbarian_drop_probability = 721,//攻击蛮族获得道具的概率提高 barbarian_drop_probability
	ATTR_TYPE_material_drop_probability = 722,//采集材料掉落概率提升 material_drop_probability
	ATTR_TYPE_trap_build_speed = 723,//陷阱制造速度提高 trap_build_speed
	ATTR_TYPE_trap_cost_reduction = 724,//陷阱费用降低 trap_cost_reduction
	ATTR_TYPE_lv4knight_train_cost = 725,//4级骑兵训练费用降低 lv4knight_train_cost
	ATTR_TYPE_lv4infantryman_train_cost = 726,//4级步兵训练费用降低 lv4infantryman_train_cost
	ATTR_TYPE_lv4equipment_train_cost = 727,//4级器械训练费用降低 lv4equipment_train_cost
	ATTR_TYPE_lv4archer_train_cost = 728,//4级弓兵训练费用降低 lv4archer_train_cost
	ATTR_TYPE_lv3knight_train_cost = 729,//3级骑兵训练费用降低 lv3knight_train_cost
	ATTR_TYPE_lv3infantryman_train_cost = 730,//3级步兵训练费用降低 lv3infantryman_train_cost
	ATTR_TYPE_lv3equipment_train_cost = 731,//3级器械训练费用降低 lv3equipment_train_cost
	ATTR_TYPE_lv3archer_train_cost = 732,//3级弓兵训练费用降低 lv3archer_train_cost
	ATTR_TYPE_lv2knight_train_cost = 733,//2级骑兵训练费用降低 lv2knight_train_cost
	ATTR_TYPE_lv2infantryman_train_cost = 734,//2级步兵训练费用降低 lv2infantryman_train_cost
	ATTR_TYPE_lv2equipment_train_cost = 735,//2级器械训练费用降低 lv2equipment_train_cost
	ATTR_TYPE_lv2archer_train_cost = 736,//2级弓兵训练费用降低 lv2archer_train_cost
	ATTR_TYPE_lv1knight_train_cost = 737,//1级骑兵训练费用降低 lv1knight_train_cost
	ATTR_TYPE_lv1infantryman_train_cost = 738,//1级步兵训练费用降低 lv1infantryman_train_cost
	ATTR_TYPE_lv1equipment_train_cost = 739,//1级器械训练费用降低 lv1equipment_train_cost
	ATTR_TYPE_lv1archer_train_cost = 740,//1级弓兵训练费用降低 lv1archer_train_cost
	ATTR_TYPE_lv1trap_repair_number = 741,//1级陷阱修复数量提高 lv1trap_repair_number
	ATTR_TYPE_lv2trap_repair_number = 742,//2级陷阱修复数量提高 lv2trap_repair_number
	ATTR_TYPE_lv3trap_repair_number = 743,//3级陷阱修复数量提高 lv3trap_repair_number
	ATTR_TYPE_lv4trap_repair_number = 744,//4级陷阱修复数量提高 lv4trap_repair_number
	ATTR_TYPE_trap_repair_number = 745,//陷阱修复数量增加 trap_repair_number
	ATTR_TYPE_trap_repair_speed = 746,//陷阱修复速度提高 trap_repair_speed
	ATTR_TYPE_hero_exp = 747,//英雄获得经验速度提高 hero_exp
	ATTR_TYPE_hero_fight_exp = 748,//英雄通过战斗获得的经验提高 hero_fight_exp
	ATTR_TYPE_hero_pve_exp_increase = 749,//英雄PVE经验提高 hero_pve_exp_increase
	ATTR_TYPE_hero_pvp_exp_increase = 750,//英雄PVP经验提高 hero_pvp_exp_increase
	ATTR_TYPE_monster_exp = 751,//攻击怪物获得的经验提高 monster_exp
	ATTR_TYPE_hero_energy_recovery_speed = 752,//英雄能量恢复速度提高 hero_energy_recovery_speed
	ATTR_TYPE_monster_energy_down = 753,//攻击怪物所需能量降低 monster_energy_down
	ATTR_TYPE_population_quest_increase = 754,//任务获得的人口提高 population_quest_increase
	ATTR_TYPE_population_pvp_increase = 755,//PVP人口奖励提高 population_pvp_increase
	ATTR_TYPE_population_bar_increase = 756,//攻击蛮族人口奖励提高 population_bar_increase
	
};

enum OBJ_ATTR_TYPE{
	OBJ_ATTR_TYPE_FOOD   = 1, // 粮食每小时产出
	OBJ_ATTR_TYPE_WOOD   = 2, // 木材每小时产出
	OBJ_ATTR_TYPE_STONE  = 3, // 石材每小时产出
	OBJ_ATTR_TYPE_IRON   = 4, // 铁矿每小时产出
	OBJ_ATTR_TYPE_SILVER = 5, // 银矿每小时产出
	OBJ_ATTR_TYPE_CULTURE = 6, // 文化值每小时产出
	OBJ_ATTR_TYPE_TRAIN_ARMY = 7, // 单个军营部队训练规模
	OBJ_ATTR_TYPE_TRAIN_TRAP = 8, // 单个兵工厂陷阱规模
	OBJ_ATTR_TYPE_HURT_CAP = 9, // 单个医院伤兵容量
};

// 奖励事件类型
enum REWARD_EVENT_TYPE{
	REWARD_EVENT_TYPE_Unlock_Title  = 1, // 解锁地格
	REWARD_EVENT_TYPE_Finish_Build  = 2, // 建筑奖励
	REWARD_EVENT_TYPE_Destroy_Build = 3, // 摧毁建筑
};

// 奖励内容类型
enum REWARD_OBJECT_TYPE{
	REWARD_OBJECT_TYPE_Population = 1, // 人口
	REWARD_OBJECT_TYPE_Power      = 2, // 实力
	REWARD_OBJECT_TYPE_Resources  = 3, // 资源 
	REWARD_OBJECT_TYPE_Item       = 4, // 道具
};

// 系统通知类型
enum SYSTEM_MAIL_TYPE{
	SYSTEM_MAIL_NOTICE        = 1, // 系统公告    
	SYSTEM_MAIL_CITY_TIP      = 2, // 城市提示
	SYSTEM_MAIL_NEW_TIP       = 3, // 更新公告
	SYSTEM_MAIL_LEAGUE_REFUSE = 4, // 联盟拒绝
};

// 联盟属性
enum LEAGUE_ATTR_TYPE{
	LEAGUE_ATTR_TYPE_Capital        = 1, // 联盟资金(物质) int64
	LEAGUE_ATTR_TYPE_Boom           = 2, // 联盟繁荣度(人口) int64
	LEAGUE_ATTR_TYPE_Power          = 3, // 联盟实力 int64
	LEAGUE_ATTR_TYPE_Cur_Level      = 4, // 联盟当前等级 int32
	LEAGUE_ATTR_TYPE_Max_Level      = 5, // 联盟曾经的最高等级 int32
	LEAGUE_ATTR_TYPE_Recovery_Speed = 6, // 联盟繁荣度恢复速度/小时 int32
	LEAGUE_ATTR_TYPE_Indenture      = 7, // 联盟契约 int64
	LEAGUE_ATTR_TYPE_Manuscript     = 8, // 研究手稿 int64
	LEAGUE_ATTR_TYPE_Max_Boom       = 9, // 联盟繁荣度最大值(人口) int64
	LEAGUE_ATTR_TYPE_LCastle_State  = 10, // 联盟城堡状态(0没有创建1正常2流亡) int32
	LEAGUE_ATTR_TYPE_Fight_count    = 11, // 战争数量 int32
	LEAGUE_ATTR_TYPE_LCastle_Local  = 12, // 联盟城堡位置 string
	LEAGUE_ATTR_TYPE_Boom_Data      = 13, // 联盟繁荣度 string
	LEAGUE_ATTR_TYPE_Last_Exile_time   = 14, //联盟城堡上一次被打流亡的时间点 int32
	
	LEAGUE_ATTR_TYPE_COMMENT      = 15, // 联盟评论int32(最后一次评论的时间)
	LEAGUE_ATTR_TYPE_REFESH_PRICE = 16, // 联盟捐献int32(联盟资源最后一次刷新时间)
	LEAGUE_ATTR_TYPE_GROUP_BUY    = 17, // 联盟商店int32(最后一次团购时间)
	
	LEAGUE_ATTR_TYPE_City_Power   = 18, // 联盟城市实力 int64
	LEAGUE_ATTR_TYPE_Army_Power   = 19, // 联盟卫队实力 int64
	LEAGUE_ATTR_TYPE_Army_Count   = 20, // 联盟卫队数量 int64
	
	LEAGUE_ATTR_TYPE_LOSE_INFO    = 21, // string
	LEAGUE_ATTR_TYPE_ENEMY_LIST   = 22, // int32 vec
	
	LEAGUE_ATTR_TYPE_GIFT_LEVEL   = 23, // 联盟礼物等级 int32
	LEAGUE_ATTR_TYPE_GIFT_POINT   = 24, // 联盟礼物点 int64
	
	LEAGUE_ATTR_TYPE_FRIEND_LIST   = 25, // int32 vec
	LEAGUE_ATTR_TYPE_ZONE_BUY_TIMES = 26, // int32
	
	LEAGUE_ATTR_TYPE_MAX_MEMBER_LIMIT = 27, // 联盟成员上限
	
	LEAGUE_ATTR_TYPE_Help_Num       = 50, // 帮助次数 int64
	LEAGUE_ATTR_TYPE_Kill_Monster   = 51, // 杀怪次数 int64 
	LEAGUE_ATTR_TYPE_Fight_Win      = 52, // 胜利次数(非集结) int64
	LEAGUE_ATTR_TYPE_Fight_Fail     = 53, // 失败次数(非集结) int64
	LEAGUE_ATTR_TYPE_War_Win        = 54, // 战争集结胜利次数 int64
	LEAGUE_ATTR_TYPE_War_Fail       = 55, // 战争集结失败次数 int64
	LEAGUE_ATTR_TYPE_Destroy_Castle = 56, // 摧毁玩家城市次数 int64
	LEAGUE_ATTR_TYPE_Exile_Castle   = 57, // 城市被摧毁次数 int64
	LEAGUE_ATTR_TYPE_Destroy_League_Castle  = 58, // 摧毁联盟城市次数 int64
	LEAGUE_ATTR_TYPE_Exile_League_Castle    = 59, // 联盟城市被摧毁次数 int64
	LEAGUE_ATTR_TYPE_Kill_Army      = 60, // 消灭部队数量 int64
	LEAGUE_ATTR_TYPE_Lost_Army      = 61, // 损失部队数量	int64
	LEAGUE_ATTR_TYPE_Limit_Event    = 62, // 限时活动信息 string
	
	LEAGUE_ATTR_TYPE_ZONE_LIST   = 81, // 联盟区域列表 uint32 vec
	
};

// 玩家计数类型
enum CounterType
{
	Counter_Type_Fight_Win  = 1, // 战斗胜利次数
	Counter_Type_Fight_Fail = 2, // 战斗失败次数
	Counter_Type_Attack_Win = 3, // 进攻胜利次数
	Counter_Type_Attack_Fail = 4, // 进攻失败次数
	Counter_Type_Defend_Win  = 5, // 防守胜利次数
	Counter_Type_Defend_Fail = 6, // 防守失败次数
	Counter_Type_Spy         = 7, // 侦查次数
	Counter_Type_Destroy_Army = 8, // 消灭部队数量
	Counter_Type_Lost_Army    = 9, // 部队损失数量
	Counter_Type_Cure_Army    = 10, // 部队治疗数量
	Counter_Type_Destroy_City = 11, // 摧毁城市次数
	Counter_Type_Exile_City   = 12, // 城市流亡次数
	
	Counter_Type_Captured_Hero = 14, // 俘获英雄次数
	Counter_Type_trapped_Hero  = 15, // 英雄被俘次数
	Counter_Type_Kill_Hero     = 16, // 斩首英雄次数
	Counter_Type_Killed_Hero   = 17, // 英雄被杀次数
	Counter_Type_Released_Hero = 18, // 英雄被释放次数
	Counter_Type_Rescue_Hero   = 19, // 英雄被解救次数
	Counter_Type_Kill_Monster  = 20, // 击杀怪物数量
	Counter_Type_Destroy_Tribe = 21, // 摧毁蛮族次数
	
	Counter_Type_Alliance_Gift   = 22, // 联盟礼物统计
	
	Counter_Type_Player_Max_power = 101, //
};

// 联盟统计数据
enum LeagueCounterType
{
	League_Counter_Type_League_Power   = 1, // 联盟总实力 
	League_Counter_Type_Help_Num       = 2, // 帮助次数
	League_Counter_Type_Kill_Monster   = 3, // 杀怪次数
	League_Counter_Type_Fight_Win      = 4, // 胜利次数(非集结)
	League_Counter_Type_Fight_Fail     = 5, // 失败次数(非集结)
	League_Counter_Type_Mass_War_Win   = 6, // 战争集结胜利次数
	League_Counter_Type_Mass_War_Fail  = 7, // 战争集结失败次数
	League_Counter_Type_Destroy_Castle = 8, // 摧毁玩家城市次数
	League_Counter_Type_Exile_Castle   = 9, // 城市被摧毁次数
	League_Counter_Type_Destroy_League_Castle  = 10, // 摧毁联盟城市次数
	League_Counter_Type_Exile_League_Castle    = 11, // 联盟城市被摧毁次数
	League_Counter_Type_Kill_Army      = 12, // 消灭部队数量
	League_Counter_Type_Lost_Army      = 13, // 损失部队数量	
};


// 建筑类型
enum Building_Type
{
	Building_Type_City_Hall    = 1, // 市政厅
	Building_Type_Institute    = 2, // 研究所
	Building_Type_School       = 3, // 学校
	Building_Type_Warehouse    = 4, // 仓库
	Building_Type_Barracks     = 5, // 军营
	Building_Type_Arsenal      = 6, // 兵工厂
	Building_Type_Hospital     = 7, // 医院
	Building_Type_Wizard_Tower = 8, // 法师塔
	Building_Type_Commerce     = 9, // 商会
	Building_Type_Monastery    = 10, // 修道院
	Building_Type_Pub          = 11, // 酒馆
	Building_Type_Wall         = 12, // 城墙
	Building_Type_Embassy      = 13, // 大使馆
	Building_Type_Workshop     = 14, // 锻造坊
	Building_Type_Observation  = 15, // 瞭望塔
	Building_Type_Prison       = 16, // 监狱
	Building_Type_Altar        = 17, // 祭坛
	Building_Type_Treasury     = 18, // 宝库
	Building_Type_Gold         = 19, // 金矿
	Building_Type_Farmland     = 20, // 农田
	Building_Type_Residence    = 21, // 民居
	Building_Type_Wood_Field   = 22, // 伐木场
	Building_Type_Quarry       = 23, // 采石场
	Building_Type_Iron_Field   = 24, // 铁矿场 
	Building_Type_Feature_R1   = 25, // 特色R1 
	Building_Type_Feature_R2   = 26, // 特色R2
	Building_Type_Feature_R3   = 27, // 特色R3
	Building_Type_Sign         = 28, // 签到处
	Building_Type_Mill         = 29, // 磨坊作坊
	
};

//信息推送类型
enum Information_Type
{
	// 内政
	Information_Type_Building_Completed      = 101, // 建筑完成
	Information_Type_Training_Completed      = 102, // 训练完成
	Information_Type_Manufacturing_Completed = 103, // 制造完成
	Information_Type_Research_Completed      = 104, // 科研完成
	Information_Type_Cultural_Points         = 105, // 关注制度所需文化足够
	Information_Type_Resources_Reach         = 106, // 某项资源到达自然生产上限
	Information_Type_Unlock_Completed        = 107, // 地格解锁完成
	Information_Type_Have_Lock_Land          = 108, // 当前有未解锁地格
	Information_Type_Relic_Rotten            = 109, // 当前正在供奉的圣物腐朽
	
	// 战斗
	Information_Type_Being_Spy      = 201, // 被侦查
	Information_Type_Being_Attacked = 202, // 被攻击
	Information_Type_Being_Spells   = 203, // 被释放法术

	// 采集
	Information_Type_Collect_Back = 301, // 部队采集完成回到城市
	// 搬运
	Information_Type_Carry_Back   = 401, // 部队搬运完成回到城市

	// 联盟
	Information_Type_Alliance_War = 601, // 新的联盟战争
	
	// 邮件
	Information_Type_Private_Message  = 701, // 收到一封新的私人邮件
	Information_Type_Alliance_Message = 702, // 收到一封新的联盟邮件	
}; 

// 活跃度类型
enum Liveness_Type
{
	Liveness_Type_Attack_Barbarian  = 1, // 攻击蛮族
	Liveness_Type_Destroy_Barbarian = 2, // 消灭蛮族
	Liveness_Type_Upgrade_Building  = 3, // 升级建筑
	Liveness_Type_Collect_Food      = 4, // 采集粮食
	Liveness_Type_Collect_Wood      = 5, // 采集木头
	Liveness_Type_Collect_Stone     = 6, // 采集石头
	Liveness_Type_Collect_Iron      = 7, // 采集铁矿
	Liveness_Type_Collect_Silver    = 8, // 采集银矿
	Liveness_Type_Release_Spell     = 9, // 释放法术
	Liveness_Type_Attack_Monster    = 10, // 攻击怪物
	Liveness_Type_Destroy_Monster   = 11, // 消灭怪物
	Liveness_Type_Research_Technology = 12, // 研究科技
	Liveness_Type_Build_Equipment  = 13, // 打造装备
	Liveness_Type_Daily_Attendance = 14, // 每日签到
	Liveness_Type_Get_Online_Gift  = 15, // 在线礼包领取
	Liveness_Type_Get_Dragon_Gift  = 16, // 巨龙礼物领取
	Liveness_Type_Treat_Army       = 17, // 治疗伤兵
	Liveness_Type_Donate_Resource  = 18, // 捐献资源
	Liveness_Type_League_Help      = 19, // 联盟帮助
	Liveness_Type_Train_Army       = 20, // 训练部队
	Liveness_Type_Make_Trap        = 21, // 制造陷阱
	Liveness_Type_Use_Res_Item     = 22, // 使用资源道具
	Liveness_Type_Use_Gain_Item    = 23, // 使用增益道具
	Liveness_Type_Contribute_Army  = 24, // 联盟捐献部队
	Liveness_Type_Buy_League_Item  = 25, // 联盟商店购买道具
	Liveness_Type_Payfor_Gift      = 26, // 购买充值礼包
	Liveness_Type_Use_Gold         = 27, // 消耗金币
	Liveness_Type_Hire_Tribe       = 28, // 雇佣蛮族
	Liveness_Type_Facebook_Share      = 29, // facebook
};

//章节任务类型 
enum ChapterTaskType
{
	Chapter_Task_Type_Upgrade_Build = 1,  // 升级指定建筑到X级         建筑ID,  等级         
	Chapter_Task_Type_Upgrade_City  = 2,  // 升级城市到X级                      等级
	Chapter_Task_Type_Attack_Tribe  = 3,  // 攻击X级蛮族Y次            蛮族等级 次数           需要统计
	Chapter_Task_Type_Research_Tech = 4,  // 研究指定科技                       科技ID 
  	Chapter_Task_Type_Collect_Res   = 5,  // 采集某种资源达到指定数量  资源ID   数量           需要统计

	Chapter_Task_Type_Active_VIP    = 6,  // 激活VIP 
	Chapter_Task_Type_Hire_Tribe    = 7,  // 雇佣X个蛮族               >=蛮族等级 数量         需要统计
	Chapter_Task_Type_Use_Item      = 8,  // 使用指定道具              道具ID     数量         需要统计
	Chapter_Task_Type_Unlock_Land   = 9,  // 已解锁地格达到X个                    数量
	Chapter_Task_Type_Upgrade_Hero  = 10, // 英雄升到X级                          等级         
	Chapter_Task_Type_Add_Point     = 11, // 给英雄技能加点1次    
	Chapter_Task_Type_Army_Count    = 12, // 现役部队数量达到X                    数量
	Chapter_Task_Type_Add_League    = 13, // 加入一个联盟
	Chapter_Task_Type_Collect_Times = 14, // 采集足够次数                         次数         需要统计 
	Chapter_Task_Type_Dragon_Gift   = 15, // 领取巨龙礼物  
	Chapter_Task_Type_Help_Request  = 16, // 发送联盟帮助请求
	Chapter_Task_Type_Open_MagicBox = 17, // 开启魔法宝箱
	Chapter_Task_Type_Upgrade_Card  = 18, // 某法术达到X级             卡牌ID     等级
	
	Chapter_Task_Type_League_City_Buff = 19, // 激活联盟城市的buff                           
	Chapter_Task_Type_Open_League_Gift = 20, // 领取联盟礼物一次                       
	Chapter_Task_Type_Worship_Relic    = 21, // 供奉一个圣物 
	Chapter_Task_Type_Train_Army       = 22, // 训练部队               后续补
	Chapter_Task_Type_Create_Build     = 23, // 建造建筑               后续补
	Chapter_Task_Type_Study_Tech       = 24, // 科技研究               后续补
	Chapter_Task_Type_Wear_Equip       = 25, // 穿戴X件装备                      数量
	Chapter_Task_Type_New_Material     = 26, // 获得新材料
	Chapter_Task_Type_Make_Equip       = 27, // 打造一件装备
	Chapter_Task_Type_Unlock_Job       = 28, // 解锁X个职位                      数量
	Chapter_Task_Type_Contribute       = 29, // 获得X点贡献                      数量        需要统计
	Chapter_Task_Type_Donate_Tech      = 30, // 捐献联盟科技
	Chapter_Task_Type_Donate_Res       = 31, // 捐献X点资源                      数量(所有资源之和) 需要统计
	Chapter_Task_Type_League_Hlep      = 32, // 帮助盟友X次                      次数(时间)         需要统计
	Chapter_Task_Type_Card_Hlep        = 33, // 向盟友赠送卡牌
 	Chapter_Task_Type_Use_Magic        = 34, // 使用指定法术          法术ID
	Chapter_Task_Type_Tarot_Reward     = 35, // 激活塔罗牌奖励
	Chapter_Task_Type_Learn_System     = 36, // 学习内政or军事制度
	Chapter_Task_Type_Second_City      = 37, // 建造第二个城市
	Chapter_Task_Type_Transportation   = 38, // 进行X次输送                       次数      需要统计
	Chapter_Task_Type_Dispatch         = 39, // 进行X次派遣                       次数      需要统计
	Chapter_Task_Type_Donate_Army      = 40, // 向联盟捐献部队达到指定数量        数量      需要统计 


	Chapter_Task_Type_Food_Output      = 101, // 粮食产出
	Chapter_Task_Type_Reilc_Count      = 102, // 圣物数量
};


// 七日目标
enum GoalType
{
	GT_Login         = 1, // 登录天数
	GT_MaxPower      = 2, // 最大实力
	GT_Upgrade_Build = 3, // 升级建筑次数
	GT_Army_Count    = 4, // 现役部队达到XX
	GT_Attack_Tribe  = 5, // 攻打蛮族XX次
	GT_League_Task   = 6, // 完成联盟任务次数
	GT_League_Help   = 7, // 帮助盟友次数(时间)
	GT_League_Shop   = 8, // 联盟商店购买次数
	GT_Unlock_Land   = 9, // 解锁地格数(总共)
	GT_Develop_Tech  = 10, // 研究科技次数
	GT_Food_Output   = 11, // 粮食产出
	GT_Mystery_Store = 12, // 神秘商店购买次数
	GT_Collect_Res   = 13, // 采集资源次数
	GT_League_Gift   = 14, // 领取联盟礼物次数
	GT_Group_Shop    = 15, // 参与团购次数
	GT_Add_Speed     = 16, // 使用加速道具次数
	GT_Mass_Tride    = 17, // 参与集结蛮族次数
	GT_Train_T2      = 18, // 训练T2士兵个数
	GT_Active_Tarot  = 19, // 激活塔罗牌次数
	GT_Use_Magic     = 20, // 使用法术次数
	GT_Refine_Equip  = 21, // 精炼装备次数
	GT_Attack_Boss   = 22, // 攻击BOSS次数
	GT_Three_Relic   = 23, // 获得3个圣物(总共)
};

// 限时活动条件类型
enum TimeLimitType
{
	TimeLimitType_Collect_Food       = 1, // 采集1点粮食
	TimeLimitType_Collect_Wood       = 2, // 采集1点木材
	TimeLimitType_Collect_Stone      = 3, // 采集1点石头
	TimeLimitType_Collect_Iron       = 4, // 采集1点铁矿
	TimeLimitType_Collect_Silver     = 5, // 采集1点银矿
	TimeLimitType_Tech_Power         = 6, // 研究提升1点战斗力
	TimeLimitType_Build_Power        = 7, // 建筑提升1点战斗力
	TimeLimitType_Train_Power        = 8, // 训练提升1点战斗力
	TimeLimitType_Hurt_Power         = 9, // 损伤敌方1点实力
	TimeLimitType_Kill_Power         = 10, // 击杀敌方1点实力
	TimeLimitType_Up_Power           = 11, // 提升1点实力
	TimeLimitType_Train_T1           = 12, // 训练T1部队
	TimeLimitType_Train_T2           = 13, // 训练T2部队
	TimeLimitType_Train_T3           = 14, // 训练T3部队
	TimeLimitType_Train_T4           = 15, // 训练T4部队
	TimeLimitType_Attack_Boss1       = 16, // 攻击1级怪物
	TimeLimitType_Attack_Boss2       = 17, // 攻击2级怪物
	TimeLimitType_Attack_Boss3       = 18, // 攻击3级怪物
	TimeLimitType_Attack_Boss4       = 19, // 攻击4级怪物
	TimeLimitType_Attack_Boss5       = 20, // 攻击5级怪物
	TimeLimitType_Attack_Boss6       = 21, // 攻击6级怪物
	TimeLimitType_Attack_World_Boss  = 22, // 攻击世界BOSS
	TimeLimitType_Kill_Boss1         = 23, // 击杀1级怪物
	TimeLimitType_Kill_Boss2         = 24, // 击杀2级怪物
	TimeLimitType_Kill_Boss3         = 25, // 击杀3级怪物
	TimeLimitType_Kill_Boss4         = 26, // 击杀4级怪物
	TimeLimitType_Kill_Boss5         = 27, // 击杀5级怪物
	TimeLimitType_Kill_Boss6         = 28, // 击杀6级怪物
	TimeLimitType_Kill_World_Boss  = 29, // 击杀世界BOSS
	TimeLimitType_Task_Quality1      = 30, // 日常or联盟orVIP任务1次（品质1）
	TimeLimitType_Task_Quality2      = 31, // 日常or联盟orVIP任务1次（品质2）
	TimeLimitType_Task_Quality3      = 32, // 日常or联盟orVIP任务1次（品质3）
	TimeLimitType_Task_Quality4      = 33, // 日常or联盟orVIP任务1次（品质4）
	TimeLimitType_Task_Quality5      = 34, // 日常or联盟orVIP任务1次（品质5）
	TimeLimitType_Task_Quality6      = 35, // 日常or联盟orVIP任务1次（品质6）
	TimeLimitType_Consume_Mana       = 36, // 消耗1点法力
	TimeLimitType_Attack_Tribe1      = 37, // 攻击1-6级蛮族1次
	TimeLimitType_Attack_Tribe7      = 38, // 攻击7-12级蛮族1次
	TimeLimitType_Attack_Tribe13     = 39, // 攻击13-18级蛮族1次
	TimeLimitType_Attack_Tribe19     = 40, // 攻击19-24级蛮族1次
	TimeLimitType_Attack_Tribe25     = 41, // 攻击25-30级蛮族1次
	TimeLimitType_Attack_Tribe31     = 42, // 攻击31-36级蛮族1次
	TimeLimitType_Destroy_Tribe1     = 43, // 摧毁1-6级蛮族1次
	TimeLimitType_Destroy_Tribe7     = 44, // 摧毁7-12级蛮族1次
	TimeLimitType_Destroy_Tribe13    = 45, // 摧毁13-18级蛮族1次
	TimeLimitType_Destroy_Tribe19    = 46, // 摧毁19-24级蛮族1次
	TimeLimitType_Destroy_Tribe25    = 47, // 摧毁25-30级蛮族1次
	TimeLimitType_Destroy_Tribe31    = 48, // 摧毁31-36级蛮族1次
};

//精彩活动类型
enum WonderfulType
{
	WonderfulType_TotalMoney = 1, //累计充值
	WonderfulType_UseGold   =  2, //累计花费金币
	WonderfulType_TodayMoney   =  3, //每日单笔充值
	
	WonderfulType_Attack_Monst = 4, //每日攻击怪物
	WonderfulType_HeroEnemgy   = 5, //每日消耗英雄能量

	WonderfulType_UseMagic     = 6, //每日释放法术
	WonderfulType_MagicPoint   = 7, //每日消耗法力值
	
	WonderfulType_Train_infantryman = 8,  //每日训练步兵
	WonderfulType_Train_Equipment   = 9, //每日训练器械
	WonderfulType_Train_Archer      =10, //每日训练弓兵
	WonderfulType_Train_Knight      =11, //每日训练骑兵
	
	WonderfulType_Collect_Wood       = 12, // 采集木材
	WonderfulType_Collect_Stone      = 13, // 采集石头
	WonderfulType_Collect_Iron       = 14, // 采集铁矿
	WonderfulType_Collect_Silver     = 15, // 采集银矿
	WonderfulType_Collect_Food       = 16, // 采集粮食
	
	WonderfulType_Cumulative_Login   = 17, // 累计登录
	WonderfulType_Daily_Login        = 18, // 每日登录
	
	WonderfulType_City_Level       = 101, // 城市升级
	
	WonderfulType_Add_FightValue   = 206, // 实力增加排行
	WonderfulType_League_Money       = 110, // 联盟资金增加排行
	
};