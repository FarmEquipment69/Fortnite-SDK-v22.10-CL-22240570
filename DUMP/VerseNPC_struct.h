// SolarisGeneratedEnum VerseNPC.loot_type
enum class loot_type : uint8 {
	lt_pickup = 0,
	lt_chest = 1,
	lt_supply_drop = 2,
	lt_unknown = 3
};

// SolarisGeneratedEnum VerseNPC.navigate_result
enum class navigate_result : uint8 {
	nr_reached = 0,
	nr_cancelled = 1,
	nr_unreachable = 2,
	nr_error = 3,
	nr_unsupported = 4
};

// SolarisGeneratedEnum VerseNPC.obstacle_status
enum class obstacle_status : uint8 {
	os_incoming_obstacle = 0,
	os_blocked_by_obstacle = 1,
	os_trap_obstacle = 2
};

// SolarisGeneratedEnum VerseNPC.ping_command_entity_type
enum class ping_command_entity_type : uint8 {
	pcet_pawn = 0,
	pcet_pickup = 1,
	pcet_weapon = 2,
	pcet_container = 3,
	pcet_player_built_actor = 4,
	pcet_building_actor = 5,
	pcet_invalid = 6
};

// SolarisGeneratedEnum VerseNPC.ping_command_type
enum class ping_command_type : uint8 {
	pct_goto = 0,
	pct_back_to_me = 1,
	pct_back_to_default = 2,
	pct_hold_position = 3,
	pct_revive = 4,
	pct_invalid = 5
};

// SolarisGeneratedEnum VerseNPC.threat_status
enum class threat_status : uint8 {
	ts_seeing_threat = 0,
	ts_lost_threat_line_of_sight = 1,
	ts_alerted_by_threat = 2
};

// VerseStruct VerseNPC.damage_info
// Size: 0x40 (Inherited: 0x00)
struct Fdamage_info {
	double __verse_0xBB2452F3_Damage; // 0x00(0x08)
	struct Fthreat_info __verse_0x16209150_DamageCauser; // 0x08(0x38)
};

// VerseStruct VerseNPC.loot_info
// Size: 0x28 (Inherited: 0x00)
struct Floot_info {
	OptionProperty __verse_0xED01F844_Object; // 0x00(0x08)
	struct Fvector3 __verse_0xB0C27E0A_Location; // 0x08(0x18)
	enum class loot_type __verse_0x72E298E9_Type; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// VerseStruct VerseNPC.navigation_parameters
// Size: 0x10 (Inherited: 0x00)
struct Fnavigation_parameters {
	double __verse_0x48D1C52D_AcceptableRadius; // 0x00(0x08)
	char __verse_0x92A9A4A1_CanStrafe : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
	char __verse_0x4835EE0D_AllowPartialPath : 1; // 0x09(0x01)
	char pad_9_1 : 7; // 0x09(0x01)
	char pad_A[0x6]; // 0x0a(0x06)
};

// VerseStruct VerseNPC.obstacle_info
// Size: 0x28 (Inherited: 0x00)
struct Fobstacle_info {
	struct UEntity* __verse_0x459049A1_Target; // 0x00(0x08)
	struct Fvector3 __verse_0xB0C27E0A_Location; // 0x08(0x18)
	enum class obstacle_status __verse_0xFA60180E_Status; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// VerseStruct VerseNPC.ping_info
// Size: 0x38 (Inherited: 0x00)
struct Fping_info {
	enum class ping_command_type __verse_0x72E298E9_Type; // 0x00(0x01)
	enum class ping_command_entity_type __verse_0x6CF7C7E8_EntityType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct Fvector3 __verse_0xB0C27E0A_Location; // 0x08(0x18)
	char __verse_0x0FA78E7E_LocationOnHorizontalSurface : 1; // 0x20(0x01)
	char pad_20_1 : 7; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	OptionProperty __verse_0x459049A1_Target; // 0x28(0x08)
	OptionProperty __verse_0xFD64D7AA_Emitter; // 0x30(0x08)
};

// VerseStruct VerseNPC.threat_info
// Size: 0x38 (Inherited: 0x00)
struct Fthreat_info {
	struct UEntity* __verse_0x459049A1_Target; // 0x00(0x08)
	struct Fvector3 __verse_0xB0C27E0A_Location; // 0x08(0x18)
	enum class threat_status __verse_0xFA60180E_Status; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	double __verse_0xC6D24390_Weight; // 0x28(0x08)
	int64_t __verse_0x555B2F95_Team; // 0x30(0x08)
};

// VerseStruct VerseNPC.tuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R
// Size: 0x40 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x20(0x10)
	VerseStringProperty __verse_0xF64C4596_Elem3; // 0x30(0x10)
};

// VerseStruct VerseNPC.tuple_L_Kchar_M_Kchar_M_Kchar_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_M_Kchar_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
	VerseStringProperty __verse_0x932BF92E_Elem2; // 0x20(0x10)
};

// VerseStruct VerseNPC.tuple_L_Kchar_M_Kchar_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_Kchar_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	VerseStringProperty __verse_0x7D844C3C_Elem1; // 0x10(0x10)
};

// VerseStruct VerseNPC.tuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R
// Size: 0x49 (Inherited: 0x00)
struct Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x10(0x02)
	char pad_12[0x6]; // 0x12(0x06)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x18(0x09)
	char pad_21[0x7]; // 0x21(0x07)
	OptionProperty __verse_0xF64C4596_Elem3; // 0x28(0x21)
};

// VerseStruct VerseNPC.tuple_L_Kchar_Maction__result_R
// Size: 0x11 (Inherited: 0x00)
struct Ftuple_L_Kchar_Maction__result_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	enum class action_result __verse_0x7D844C3C_Elem1; // 0x10(0x01)
};

// VerseStruct VerseNPC.tuple_L_Kchar_Mnavigate__result_R
// Size: 0x11 (Inherited: 0x00)
struct Ftuple_L_Kchar_Mnavigate__result_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	enum class navigate_result __verse_0x7D844C3C_Elem1; // 0x10(0x01)
};

// VerseStruct VerseNPC.tuple_L_Kchar_Mobstacle__status_R
// Size: 0x11 (Inherited: 0x00)
struct Ftuple_L_Kchar_Mobstacle__status_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	enum class obstacle_status __verse_0x7D844C3C_Elem1; // 0x10(0x01)
};

// VerseStruct VerseNPC.tuple_L_Kchar_Mthreat__status_R
// Size: 0x11 (Inherited: 0x00)
struct Ftuple_L_Kchar_Mthreat__status_R {
	VerseStringProperty __verse_0x18E3F084_Elem0; // 0x00(0x10)
	enum class threat_status __verse_0x7D844C3C_Elem1; // 0x10(0x01)
};

// VerseStruct VerseNPC.tuple_L_R
// Size: 0x01 (Inherited: 0x00)
struct Ftuple_L_R {
	char $StructPaddingDummy; // 0x00(0x01)
};

// VerseStruct VerseNPC.tuple_Lentity_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R
// Size: 0x19 (Inherited: 0x00)
struct Ftuple_Lentity_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R {
	struct UEntity* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x11)
};

// VerseStruct VerseNPC.tuple_Lentity_M_QNavigationParameters_Nnavigation__parameters_R
// Size: 0x19 (Inherited: 0x00)
struct Ftuple_Lentity_M_QNavigationParameters_Nnavigation__parameters_R {
	struct UEntity* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x11)
};

// VerseStruct VerseNPC.tuple_Lentity_Mfloat_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lentity_Mfloat_R {
	struct UEntity* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseNPC.tuple_Lentity_Mlogic_R
// Size: 0x09 (Inherited: 0x00)
struct Ftuple_Lentity_Mlogic_R {
	struct UEntity* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	char __verse_0x7D844C3C_Elem1 : 1; // 0x08(0x01)
	char pad_8_1 : 7; // 0x08(0x01)
};

// VerseStruct VerseNPC.tuple_Lfloat_Mfloat_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lfloat_Mfloat_R {
	double __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_M_Qentity_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lnpc__component_M_Qentity_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_M_Qthreat__info_R
// Size: 0x41 (Inherited: 0x00)
struct Ftuple_Lnpc__component_M_Qthreat__info_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x08(0x39)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_Mentity_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lnpc__component_Mentity_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct UEntity* __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_Mfloat_R
// Size: 0x10 (Inherited: 0x00)
struct Ftuple_Lnpc__component_Mfloat_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	double __verse_0x7D844C3C_Elem1; // 0x08(0x08)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_Mloot__info_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lnpc__component_Mloot__info_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Floot_info __verse_0x7D844C3C_Elem1; // 0x08(0x28)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_Mping__info_R
// Size: 0x40 (Inherited: 0x00)
struct Ftuple_Lnpc__component_Mping__info_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fping_info __verse_0x7D844C3C_Elem1; // 0x08(0x38)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_Mthreat__info_R
// Size: 0x40 (Inherited: 0x00)
struct Ftuple_Lnpc__component_Mthreat__info_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fthreat_info __verse_0x7D844C3C_Elem1; // 0x08(0x38)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_Mvector3_M_Qentity_Mlogic_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R
// Size: 0x41 (Inherited: 0x00)
struct Ftuple_Lnpc__component_Mvector3_M_Qentity_Mlogic_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x08(0x18)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x20(0x08)
	char __verse_0xF64C4596_Elem3 : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	OptionProperty __verse_0x4F74920B_Elem4; // 0x30(0x11)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_Mvector3_M_Qentity_Mlogic_M_QNavigationParameters_Nnavigation__parameters_R
// Size: 0x41 (Inherited: 0x00)
struct Ftuple_Lnpc__component_Mvector3_M_Qentity_Mlogic_M_QNavigationParameters_Nnavigation__parameters_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x08(0x18)
	OptionProperty __verse_0x932BF92E_Elem2; // 0x20(0x08)
	char __verse_0xF64C4596_Elem3 : 1; // 0x28(0x01)
	char pad_28_1 : 7; // 0x28(0x01)
	char pad_29[0x7]; // 0x29(0x07)
	OptionProperty __verse_0x4F74920B_Elem4; // 0x30(0x11)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_Mvector3_Mfloat_Mentity_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lnpc__component_Mvector3_Mfloat_Mentity_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x08(0x18)
	double __verse_0x932BF92E_Elem2; // 0x20(0x08)
	struct UEntity* __verse_0xF64C4596_Elem3; // 0x28(0x08)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_Mvector3_Mfloat_Mfloat_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lnpc__component_Mvector3_Mfloat_Mfloat_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x08(0x18)
	double __verse_0x932BF92E_Elem2; // 0x20(0x08)
	double __verse_0xF64C4596_Elem3; // 0x28(0x08)
};

// VerseStruct VerseNPC.tuple_Lnpc__component_Mvector3_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_Lnpc__component_Mvector3_R {
	struct Unpc_component* __verse_0x18E3F084_Elem0; // 0x00(0x08)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x08(0x18)
};

// VerseStruct VerseNPC.tuple_Lvector3_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R
// Size: 0x29 (Inherited: 0x00)
struct Ftuple_Lvector3_M_QNavigationParameters_Nnavigation__parameters_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x11)
};

// VerseStruct VerseNPC.tuple_Lvector3_M_QNavigationParameters_Nnavigation__parameters_R
// Size: 0x29 (Inherited: 0x00)
struct Ftuple_Lvector3_M_QNavigationParameters_Nnavigation__parameters_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x11)
};

// VerseStruct VerseNPC.tuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R
// Size: 0x69 (Inherited: 0x00)
struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_20_3d_20_2e_2e_2e_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x51)
};

// VerseStruct VerseNPC.tuple_Lvector3_M_QParams_Nsphere__draw__params_R
// Size: 0x69 (Inherited: 0x00)
struct Ftuple_Lvector3_M_QParams_Nsphere__draw__params_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	OptionProperty __verse_0x7D844C3C_Elem1; // 0x18(0x51)
};

// VerseStruct VerseNPC.tuple_Lvector3_Mfloat_Mcolor_R
// Size: 0x40 (Inherited: 0x00)
struct Ftuple_Lvector3_Mfloat_Mcolor_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	double __verse_0x7D844C3C_Elem1; // 0x18(0x08)
	struct FColor __verse_0x932BF92E_Elem2; // 0x20(0x20)
};

// VerseStruct VerseNPC.tuple_Lvector3_Mfloat_R
// Size: 0x20 (Inherited: 0x00)
struct Ftuple_Lvector3_Mfloat_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	double __verse_0x7D844C3C_Elem1; // 0x18(0x08)
};

// VerseStruct VerseNPC.tuple_Lvector3_Mvector3_R
// Size: 0x30 (Inherited: 0x00)
struct Ftuple_Lvector3_Mvector3_R {
	struct Fvector3 __verse_0x18E3F084_Elem0; // 0x00(0x18)
	struct Fvector3 __verse_0x7D844C3C_Elem1; // 0x18(0x18)
};

