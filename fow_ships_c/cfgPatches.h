class CfgPatches
{
 class WX_AttackTransport
 {
  units[] =
  {
   "WX_AttackTransport",
   "WX_AttackTransport_Bow",
   "WX_AttackTransport_Bow_helper",
   "WX_AttackTransport_Stern",
   "WX_AttackTransport_Stern_helper",
   "WX_portside_ladder",
   "WX_starboard_ladder",
   "wx_carrier_test",
   "wx_aircraftcarrier02",
   "wx_aircraftcarrier03_mid_ijn",
   "wx_aircraftcarrier03_mid_usn",
   "wx_aircraftcarrier03_bow",
   "wx_aircraftcarrier03_stern",
   "wx_portside_ladder_long",
   "wx_anchor",
   "wx_cv_roadway",
   "wx_starboard_netting",
   "wx_portside_netting",
   "wx_attacktransport_ijn",
   "wx_attacktransport_ijn_armed",
   "wx_attacktransport_usn",
   "wx_attacktransport_usn_armed",
   "wx_us_navalgun",
   "WX_us_NavalGun_aft"
  };
  weapons[] = {};
  requiredVersion = 0.1;
  requiredAddons[] = {};//"Extended_Eventhandlers","wx_us_coxswain","wx_hellcat","WX_Zero","wx_ija_type093_AAGun","CAWater2_LHD","wx_us_bofors"
 };
};
/*
class Extended_Init_Eventhandlers
{
    class wx_attacktransport_ijn
    {
	class XEH_wx_attacktransport_ijn_init_exclusive
	{
       		scope=0;
       		init = "[_this select 0,'IJN',0] execVM '\wx_attacktransport\scripts\WX_AttackTransport.sqf'; if (isNil 'DIH_fx_cv_stack_smoke') THEN {DIH_fx_cv_stack_smoke=compile preprocessFileLineNumbers '\wx_attacktransport\scripts\DIH_cv_stack_smoke.sqf';}; [_this select 0,'stack_smoke1'] spawn DIH_fx_cv_stack_smoke;";
	};
    };
    class wx_attacktransport_usn
    {
	class XEH_wx_attacktransport_usn_init_exclusive
	{
       		scope=0;
       		init = "[_this select 0,'USN',0] execVM '\wx_attacktransport\scripts\WX_AttackTransport.sqf'; if (isNil 'DIH_fx_cv_stack_smoke') THEN {DIH_fx_cv_stack_smoke=compile preprocessFileLineNumbers '\wx_attacktransport\scripts\DIH_cv_stack_smoke.sqf';}; [_this select 0,'stack_smoke1'] spawn DIH_fx_cv_stack_smoke;";
	};
    };
    class wx_attacktransport_usn_armed
    {
	class XEH_wx_attacktransport_usn_armed_init_exclusive
	{
       		scope=0;
       		init = "[_this select 0,'USN',1] execVM '\wx_attacktransport\scripts\WX_AttackTransport.sqf'; if (isNil 'DIH_fx_cv_stack_smoke') THEN {DIH_fx_cv_stack_smoke=compile preprocessFileLineNumbers '\wx_attacktransport\scripts\DIH_cv_stack_smoke.sqf';}; [_this select 0,'stack_smoke1'] spawn DIH_fx_cv_stack_smoke;";
	};
    };
    class wx_aircraftcarrier03_mid_ijn
    {
	class XEH_wx_aircraftcarrier03_mid_ijn_init_exclusive
	{
       		scope=0;
       		init = "[_this,'IJN'] execVM '\wx_attacktransport\scripts\DIH_cv_init.sqf'; if (isNil 'DIH_fx_cv_stack_smoke') THEN {DIH_fx_cv_stack_smoke=compile preprocessFileLineNumbers '\wx_attacktransport\scripts\DIH_cv_stack_smoke.sqf';}; [_this select 0,'stack_smoke1'] spawn DIH_fx_cv_stack_smoke;";
	};
    };
    class wx_aircraftcarrier03_mid_usn
    {
	class XEH_wx_aircraftcarrier03_mid_usn_init_exclusive
	{
       		scope=0;
       		init = "[_this,'USN'] execVM '\wx_attacktransport\scripts\DIH_cv_init.sqf'; if (isNil 'DIH_fx_cv_stack_smoke') THEN {DIH_fx_cv_stack_smoke=compile preprocessFileLineNumbers '\wx_attacktransport\scripts\DIH_cv_stack_smoke.sqf';}; [_this select 0,'stack_smoke1'] spawn DIH_fx_cv_stack_smoke;";
	};
    };
    class wx_aircraftcarrier03_stern
    {
	class XEH_wx_aircraftcarrier03_stern_init_exclusive
	{
       		scope=0;
       		init = "[_this select 0] execVM '\wx_attacktransport\scripts\DIH_cv_ladders.sqf';";
	};
    };
	class WX_us_bofors_twin
	{
		DIH_fx_WX_us_bofors_twin_init = "if (isNil 'DIH_fx_AA_TF_wx_us_bofors_nvl') then {DIH_fx_AA_TF_wx_us_bofors_nvl=compile preprocessFileLineNumbers '\wx_attacktransport\scripts\DIH_timeFuse_bof_nvl.sqf';}; (_this select 0) addEventHandler ['fired', {_this call DIH_fx_AA_TF_wx_us_bofors_nvl;}];";
	};
};
class Extended_Killed_Eventhandlers
{
    class wx_attacktransport_ijn
    {
	class XEH_wx_attacktransport_ijn_killed_exclusive
	{
        	scope=0;
		//killed = "detach (_this select 0); _this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
		killed = "[(_this select 0)] spawn DIH_cv_fnc_ship_sinking;";
	};
    };
    class wx_attacktransport_usn
    {
	class XEH_wx_attacktransport_usn_killed_exclusive
	{
        	scope=0;
		//killed = "detach (_this select 0); _this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
		killed = "[(_this select 0)] spawn DIH_cv_fnc_ship_sinking;";
	};
    };
    class wx_aircraftcarrier03_mid_ijn
    {
	class XEH_wx_aircraftcarrier03_mid_ijn_killed_exclusive1
	{
       		scope=0;
       		//killed = "(_this select 0) addEventHandler ['killed', {detach (_this select 0); {if (not isPlayer _x) THEN {(vehicle _x) lock true; moveOut _x;};} forEach units ((_this select 0) getVariable 'DIH_cv_group');}];";
       		killed = "[(_this select 0)] spawn DIH_cv_fnc_ship_sinking; {if (not isPlayer _x) THEN {unassignVehicle _x; (vehicle _x) lock true; moveOut _x;};} forEach units ((_this select 0) getVariable 'DIH_cv_group');";
	};

	//class XEH_wx_aircraftcarrier03_mid_ijn_killed_exclusive2
	//{
   //     	scope=0;
	//	killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
	//};

    };
    class wx_aircraftcarrier03_mid_usn
    {
	class XEH_wx_aircraftcarrier03_mid_usn_killed_exclusive1
	{
       		scope=0;
       		killed = "[(_this select 0)] spawn DIH_cv_fnc_ship_sinking; {if (not isPlayer _x) THEN {unassignVehicle _x; (vehicle _x) lock true; moveOut _x;};} forEach units ((_this select 0) getVariable 'DIH_cv_group');";
	};

	//class XEH_wx_aircraftcarrier03_mid_usn_killed_exclusive2
	//{
   //     	scope=0;
	//	killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
	//};

    };
    class wx_aircraftcarrier03_stern
    {
	class XEH_wx_aircraftcarrier03_stern_killed_exclusive
	{
       		scope=0;
       		killed = "[_this select 0] execVM '\wx_attacktransport\scripts\DIH_cv_damageCheck.sqf';";
	};
    };
    class wx_aircraftcarrier03_bow
    {
	class XEH_wx_aircraftcarrier03_bow_killed_exclusive
	{
       		scope=0;
       		killed = "[_this select 0] execVM '\wx_attacktransport\scripts\DIH_cv_damageCheck.sqf';";
	};
    };
};*/