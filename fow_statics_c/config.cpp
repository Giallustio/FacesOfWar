

class CfgPatches {
	class fow_statics_c {
		units[] = {"fow_w_ija_type92_tripod","fow_w_ija_type92_tripod_low","fow_w_ija_type92_tripod_low_s"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_veh_weapons_c","fow_statics"};
	};
};

class CfgVehicles 
{
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMGWeapon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
			};
		};
	};

	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo{};
	};
	
	#include "m1919.hpp"
	#include "mg42.hpp"
	#include "type92.hpp"
	//#include "type93_AA.hpp"
	#include "vickers.hpp"
};

class CfgFunctions {
	class fow_statics_functions {
		tag = "fow_statics";
		class fow_functions {
			file = "fow\fow_statics_c\fnc";
			class canReload;
			class reload;
		};
	};
};