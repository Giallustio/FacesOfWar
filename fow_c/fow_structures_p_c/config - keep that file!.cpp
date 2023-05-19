#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

// type scope
#define private 0
#define protected 1
#define public 2

#include <CfgSurfaces.hpp>

class CfgPatches
{
	class WX_Objects
	{
		units[] = 
		{
			flag_jap01,
			wx_ammoboxwood01,
			wx_ammoboxwood02,
			wx_ammoboxwood03,
			wx_axe,
			wx_baileybridge_01,
			wx_baileybridge_02,
			wx_barbwire01,
			wx_barbwire02,
			wx_barrel01,
			wx_barrel02,
			wx_beachobstacle_01,
			wx_beachobstacle_02,
			wx_brownstone_clutter01,
			wx_brownstone_clutter02,
			wx_bucket,
			wx_building001,
			wx_bunker,
			wx_bunker_roof01,
			wx_bunker_roof02,
			wx_bunker_singlelog01,
			wx_bunker_singlelog02,
			wx_bunker_singlelog03,
			wx_bunker_singlelog04,
			wx_bunker_wall01,
			wx_bunker_wall02,
			wx_camonet01,
			wx_camonet02,
			wx_caverock01,
			wx_caverock02,
			wx_caverock03,
			wx_caverock04,
			wx_caverock05,
			wx_commandbunker,
			wx_corrugated_metal01,
			wx_corrugated_metal02,
			wx_crater01,
			wx_crater02,
			wx_crater03,
			wx_crater04,
			wx_crater05,
			wx_dirtheap001,
			wx_dirtheap002,
			wx_dirtheap003,
			wx_dirtheap004,
			wx_dirtheap005,
			wx_dirtheap006,
			wx_dirtheap007,
			wx_dirtheap008,
			wx_dirtheap009,
			wx_dirtheap010,
			wx_dirtheap011,
			wx_dirtheap012,
			wx_dirtheap013,
			wx_dirtheap014,
			wx_dirtheap015,
			wx_dirtheap016,
			wx_drawbridge,
			wx_dutch_trench01,
			wx_dutch_trench02,
			wx_fielddefence_01,
			wx_fielddefence_02,
			wx_fielddefence_03,
			wx_fielddefence_04,
			wx_fielddefence_06,
			wx_fielddefence_07,
			wx_fielddefence_08,
			wx_flag_jap01,
			wx_flag_jap02,
			wx_flag_jap03,
			wx_flag_jap04,
			wx_flag_jap05,
			wx_flag_jap06,
			wx_haycart,
			wx_hut05_destroyed,
			wx_jap_headquarters,
			wx_jap_stripperclip01,
			wx_japammobox01,
			wx_japammobox02,
			wx_japammopouch,
			wx_japbackpack,
			wx_japbayonet,
			wx_japbunker01,
			wx_japbunker02,
			wx_japbunker03,
			wx_japbunker03_blastwall,
			wx_japbunker04,
			wx_japbunker05,
			wx_japhelmet,
			wx_japtrenchtool,
			wx_jerrycan01,
			wx_jerrycan01,
			wx_leaves01,
			wx_leaves02,
			wx_leaves03,
			wx_leaves04,
			wx_leaves05,
			wx_leaves06,
			wx_leaves07,
			wx_leaves08,
			wx_leaves09,
			wx_leaves10,
			wx_leaves11,
			wx_logbridge01,
			wx_logbridge02,
			wx_logbridge03,
			wx_logbridge04,
			wx_logbridge05,
			wx_logbridge06,
			wx_moerdijkbrug,
			wx_pickaxe,
			wx_rifleshell01,
			wx_sakebottle,
			wx_sandbag00,
			wx_sandbag01,
			wx_sandbag02,
			wx_sandbag03_end,
			wx_sandbag03_mid,
			wx_sandbag04,
			wx_sandbag05,
			wx_shovel,
			wx_sniperspot,
			wx_stoneclutter01,
			wx_stoneclutter02,
			wx_stoneclutter03_125,
			wx_stoneclutter04_500,
			wx_stone_rockbig01,
			wx_stone_rockbig02,
			wx_stone_rockbig03,
			wx_stone_01,
			wx_stone_02,
			wx_stone_03,
			wx_stone_04,
			wx_stone_05,
			wx_stone_06,
			wx_stone_07,
			wx_stone_101,
			wx_stone_102,
			wx_stone_103,
			wx_stone_104,
			wx_stone_105,
			wx_stone_106,
			wx_stone_107,
			wx_stone_108,
			wx_stone_109,
			wx_stone_110,
			wx_stone_111,
			wx_stone_112,
			wx_stone_113,
			wx_stone_114,
			wx_stone_115,
			wx_table01,
			wx_table02,
			wx_trench01,
			wx_trench02,
			wx_trench03,
			wx_trench04,
			wx_trench05,
			wx_trench06,
			wx_trench07,
			wx_trench08,
			wx_trench09,
			wx_type99_magazine,
			wx_water01,
			wx_water02,
			wx_water03,
			wx_windmill,
			wx_woodencrate,
			wx_woodencrate01,
		};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"CAData"};
	};
};

class CfgVehicleClasses
{
	class WX_Objects
	{
		displayName = "WX_Objects";
	};
};

class CfgSounds
{
	class wx_bunkerdoor_open
	{
		name= "WX_bunkerdoor_open";
		sound[]={"\wx_objects\sounds\WX_bunkerdoor_open.wss",db-15,1,50};
		titles[]={};
	};

	class wx_bunkerdoor_close
	{
		name= "WX_bunkerdoor_close";
		sound[]={"\wx_objects\sounds\WX_bunkerdoor_close.wss",db-15,1,50};
		titles[]={};
	};
};

class CfgVehicles 
{
	class Building;
	class Strategic;
	class NonStrategic: Building
	{
		class DestructionEffects;
	};
	class HouseBase;
	class Land_VASICore;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class Ruins;

	class jap_flag01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\jap_flag01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "jap_flag01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_ammoboxwood01: house
	{
		scope = 2;	// Any classes declared public are CamCreateabale, and selectable via the Editor
		access=0;	// Determines the manipulability of the class
		animated = 0;	// when set true, the animation class, if any, happens, otherwise it doesn't 
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_ammoboxwood01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Ammoboxwood01";
		accuracy = 0.2; // Determines how easy an object is to identify. Smaller values are easier to detect
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_ammoboxwood02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_ammoboxwood02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Ammoboxwood02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_ammoboxwood03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_ammoboxwood03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Ammoboxwood03";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_attacktransport: house
	{
		scope = 2;
		access=0;
		animated = 1;
		vehicleClass = "WX_Objects";
		model = "\wx_attacktransport\wx_attacktransport";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Attacktransport";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";

		class EventHandlers
		{
			init = "[_this select 0] execVM ""\wx_attacktransport\scripts\WX_AttackTransport.sqf""; ";
		};
	};

	class wx_axe: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_axe";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Axe";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_WX_BaileyBridge_01: house
	{
		scope = 2;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_BaileyBridge_01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "BaileyBridge_01";
		accuracy = 0.2;
		mapSize = 3.3;

		destrType = "DestructEngine";
		armor = 600;

	};
	class Land_WX_BaileyBridge_02: house
	{
		scope = 2;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_BaileyBridge_02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "BaileyBridge_02";
		accuracy = 0.2;
		mapSize = 3.3;

		destrType = "DestructEngine";
		armor = 600;
	};

	class wx_barbwire01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_barbwire01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Barbwire01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructBuilding";
		armor = 50;
	};

	class wx_barbwire02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_barbwire02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Barbwire02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructBuilding";
		armor = 50;
	};

	class wx_barrel01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_barrel01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Barrel01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_barrel02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_barrel01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Barrel02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_beachobstacle_01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_beachobstacle_01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "beachobstacle01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_beachobstacle_02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_beachobstacle_02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "beachobstacle02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_brownstone_clutter01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_brownstone_clutter01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "brownstone_clutter01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_brownstone_clutter02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_brownstone_clutter02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "brownstone_clutter02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_bucket: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_bucket";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "bucket";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructBuilding";
		armor = 50;
	};

	class Land_WX_building001: house
	{
		scope = 2;
		animated = 1;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_building001";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "WX_building001";
		accuracy = 0.2;
		typicalCargo[] = {};
		mapSize = 3.3;

		destrType = "DestructBuilding";
		armor = 800;

		class AnimationSources
		{
			class Door1
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
			class Door2:Door1{};
			class Door3:Door1{};
			class Door4:Door1{};
			class Door5:Door1{};
			class Door6:Door1{};
			class Door7:Door1{};
			class Door8:Door1{};
			class Door9:Door1{};
			class Door10:Door1{};
		};
		class UserActions
		{


			class OpenDoor1
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = door1_axis;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door1"" < 0.5";
				statement = "this animate [""Door1"", 1]";
			};
			class CloseDoor1
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = door1_axis;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door1"" >= 0.5";
				statement = "this animate [""Door1"", 0]";
			};


			class OpenDoor2
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = door2_axis;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door2"" < 0.5";
				statement = "this animate [""Door2"", 1]";
			};
			class CloseDoor2
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = door2_axis;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door2"" >= 0.5";
				statement = "this animate [""Door2"", 0]";
			};


			class OpenDoor3
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = door3_axis;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door3"" < 0.5";
				statement = "this animate [""Door3"", 1]";
			};
			class CloseDoor3
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = door3_axis;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door3"" >= 0.5";
				statement = "this animate [""Door3"", 0]";
			};


			class OpenDoor4
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = door4_axis;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door4"" < 0.5";
				statement = "this animate [""Door4"", 1]";
			};
			class CloseDoor4
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = door4_axis;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door4"" >= 0.5";
				statement = "this animate [""Door4"", 0]";
			};

			class OpenDoor5
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = open window;
				position = door5_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door5"" < 0.5";
				statement = "this animate [""Door5"", 1]";
			};
			class CloseDoor5
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = close window;
				position = door5_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door5"" >= 0.5";
				statement = "this animate [""Door5"", 0]";
			};

			class OpenDoor6
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = open window;
				position = door6_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door6"" < 0.5";
				statement = "this animate [""Door6"", 1]";
			};
			class CloseDoor6
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = close window;
				position = door6_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door6"" >= 0.5";
				statement = "this animate [""Door6"", 0]";
			};

			class OpenDoor7
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = open window;
				position = door7_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door7"" < 0.5";
				statement = "this animate [""Door7"", 1]";

			};
			class CloseDoor7
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = close window;
				position = door7_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door7"" >= 0.5";
				statement = "this animate [""Door7"", 0]";
			};

			class OpenDoor8
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = open window;
				position = door8_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door8"" < 0.5";
				statement = "this animate [""Door8"", 1]";
			};
			class CloseDoor8
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = close window;
				position = door8_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door8"" >= 0.5";
				statement = "this animate [""Door8"", 0]";
			};

			class OpenDoor9
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = open window;
				position = door9_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door9"" < 0.5";
				statement = "this animate [""Door9"", 1]";
			};
			class CloseDoor9
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = close window;
				position = door9_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door9"" >= 0.5";
				statement = "this animate [""Door9"", 0]";
			};

			class OpenDoor10
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = open window;
				position = door10_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door10"" < 0.5";
				statement = "this animate [""Door10"", 1]";
			};
			class CloseDoor10
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = close window;
				position = door10_axis;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Door10"" >= 0.5";
				statement = "this animate [""Door10"", 0]";
			};

		};

		actionBegin1 = OpenDoor1;
		actionEnd1 = CloseDoor1;
		actionBegin2 = OpenDoor2;
		actionEnd2 = CloseDoor2;
		actionBegin3 = OpenDoor3;
		actionEnd3 = CloseDoor3;
		actionBegin4 = OpenDoor4;
		actionEnd4 = CloseDoor4;
		actionBegin5 = OpenDoor5;
		actionEnd5 = CloseDoor5;
		actionBegin6 = OpenDoor6;
		actionEnd6 = CloseDoor6;
		actionBegin7 = OpenDoor7;
		actionEnd7 = CloseDoor7;
		actionBegin8 = OpenDoor8;
		actionEnd8 = CloseDoor8;
		actionBegin9 = OpenDoor9;
		actionEnd9 = CloseDoor9;
		actionBegin10 = OpenDoor10;
		actionEnd10 = CloseDoor10;
	};

	class Land_wx_bunker: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_bunker";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "bunker";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_bunker_roof01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_bunker_roof01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "bunker_roof01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_bunker_roof02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_bunker_roof02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "bunker_roof02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_bunker_singlelog01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_bunker_singlelog01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "bunker_singlelog01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_bunker_singlelog02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_bunker_singlelog02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "bunker_singlelog02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_bunker_singlelog03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_bunker_singlelog03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "bunker_singlelog03";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_bunker_singlelog04: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_bunker_singlelog04";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "bunker_singlelog04";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_bunker_wall01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_bunker_wall01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "bunker_wall01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_bunker_wall02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_bunker_wall02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "bunker_wall02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_camonet01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_camonet01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "camonet01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructBuilding";
		armor = 200;
	};

	class Land_wx_camonet02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_camonet02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "camonet02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructBuilding";
		armor = 200;
	};

	class Land_wx_caverock01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_caverock01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "caverock01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_caverock02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_caverock02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "caverock02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_caverock03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_caverock03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "caverock03";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_caverock04: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_caverock04";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "caverock04";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_caverock05: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_caverock05";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "caverock05";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_commandbunker: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_commandbunker";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "commandbunker";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_corrugated_metal01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_corrugated_metal01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "corrugated_metal01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_corrugated_metal02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_corrugated_metal02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "corrugated_metal02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_crater01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_crater01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "crater01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_crater02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_crater02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "crater02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_crater03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_crater03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "crater03";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_crater04: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_crater04";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "crater04";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_crater05: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_crater05";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "crater05";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap001: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap001";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap001";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap002: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap002";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap002";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap003: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap003";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap003";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap004: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap004";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap004";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap005: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap005";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap005";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap006: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap006";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap006";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap007: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap007";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap007";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap008: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap008";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap008";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap009: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap009";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap009";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap010: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap010";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap010";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap011: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap011";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap011";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap012: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap012";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap012";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap013: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap013";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap013";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap014: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap014";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap014";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap015: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap015";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap015";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_dirtheap016: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dirtheap016";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dirtheap016";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_drawbridge: house
	{
		scope = 2;
		access=0;
		animated = 1;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_drawbridge";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "drawbridge";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructBuilding";
		armor = 1500;
	};

	class Land_wx_dutch_trench01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dutch_trench01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dutch_trench01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_dutch_trench02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_dutch_trench02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "dutch_trench02";
		accuracy = 0.2;
		mapSize = 1;
		destrType = "DestructNo";
	};

	class Land_wx_fielddefence_01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_fielddefence_01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "fielddefence_01";
		accuracy = 0.2;
		mapSize = 1;
		destrType = "DestructBuilding";
		armor = 300;
	};

	class Land_wx_fielddefence_02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_fielddefence_02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "fielddefence_02";
		accuracy = 0.2;
		mapSize = 1;
		destrType = "DestructBuilding";
		armor = 300;
	};

	class Land_wx_fielddefence_03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_fielddefence_03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "fielddefence_03";
		accuracy = 0.2;
		mapSize = 1;
		destrType = "DestructBuilding";
		armor = 300;
	};

	class Land_wx_fielddefence_04: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_fielddefence_04";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "fielddefence_04";
		accuracy = 0.2;
		mapSize = 1;
		destrType = "DestructBuilding";
		armor = 300;
	};

	class Land_wx_fielddefence_05: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_fielddefence_05";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "fielddefence_05";
		accuracy = 0.2;
		mapSize = 1;
		destrType = "DestructBuilding";
		armor = 300;
	};

	class Land_wx_fielddefence_06: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_fielddefence_06";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "fielddefence_06";
		accuracy = 0.2;
		mapSize = 1;
		destrType = "DestructBuilding";
		armor = 300;
	};

	class Land_wx_fielddefence_07: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_fielddefence_07";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "fielddefence_07";
		accuracy = 0.2;
		mapSize = 1;
		destrType = "DestructBuilding";
		armor = 300;
	};

	class wx_flag_jap01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_flag_jap01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "flag_jap01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_flag_jap02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_flag_jap02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "flag_jap02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_flag_jap03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_flag_jap03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "flag_jap03";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_flag_jap04: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_flag_jap04";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "flag_jap04";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_flag_jap05: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_flag_jap05";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "flag_jap05";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_flag_jap06: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_flag_jap06";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "flag_jap06";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_haycart: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_haycart";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "haycart";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructBuilding";
		armor = 75;
	};

	class Land_wx_hut05_destroyed: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_hut05_destroyed";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "hut05_destroyed";
		accuracy = 0.2;
		mapSize = 1;
		destrType = "DestructNo";
	};

	class Land_wx_jap_headquarters: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_jap_headquarters";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "jap_headquarters";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_jap_stripperclip01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_jap_stripperclip01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stripperclip01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_japammobox01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_japammobox01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "japammobox01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_japammobox02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_japammobox02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "japammobox02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_japammopouch: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_japammopouch";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "japammopouch";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_japbackpack: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_japbackpack";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "japbackpack";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_japbayonet: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_japbayonet";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "japbayonet";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class Land_WX_japbunker01: house
	{
		scope = 2;
		animated = 1;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_japbunker01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "japbunker01";
		destrType = "DestructNo";
		accuracy = 0.2;
		armor = 3000;
		mapSize = 2;

		class AnimationSources
		{
			class Door1
			{
				source="User";
				animPeriod=1;
				initPhase=0;
			};
		};
		class UserActions
		{
			class OpenDoor1
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = door1_axis;
				radius = 2.5;
				onlyForPlayer = false;
				condition = "this animationPhase ""Door1"" < 0.5";
				statement = "this animate [""Door1"", 1]; this say3d ""wx_bunkerdoor_open"" ";
			};
			class CloseDoor1
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = door1_axis;
				radius = 2.5;
				onlyForPlayer = false;
				condition = "this animationPhase ""Door1"" >= 0.5";
				statement = "this animate [""Door1"", 0]; this say3d ""wx_bunkerdoor_close"" ";
			};

		};
		actionBegin1 = OpenDoor1;
		actionEnd1 = CloseDoor1;
	};

	class Land_WX_japbunker02: Land_WX_japbunker01
	{
		model = "\wx_objects\wx_japbunker02";
		displayName = "japbunker02";
	};

	class Land_WX_japbunker03: Land_WX_japbunker01
	{
		model = "\wx_objects\wx_japbunker03";
		displayName = "japbunker03";
	};

	class Land_WX_japbunker03_blastwall: Land_WX_japbunker01
	{
		model = "\wx_objects\wx_japbunker03_blastwall";
		displayName = "japbunker03_blastwall";
	};

	class Land_WX_japbunker04: Land_WX_japbunker01
	{
		model = "\wx_objects\wx_japbunker04";
		displayName = "japbunker04";
	};

	class Land_WX_japbunker05: Land_WX_japbunker01
	{
		model = "\wx_objects\wx_japbunker05";
		displayName = "japbunker05";
	};

	class wx_japhelmet: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_japhelmet";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "japhelmet";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_japtrenchtool: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_japtrenchtool";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "japtrenchtool";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_jerrycan01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_jerrycan01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Jerrycan01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_jerrycan02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_jerrycan02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "Jerrycan02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_leaves01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_leaves02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_leaves03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves03";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};
	class wx_leaves04: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves04";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves04";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};
	class wx_leaves05: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves05";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves05";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};
	class wx_leaves06: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves06";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves06";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};
	class wx_leaves07: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves07";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves07";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};
	class wx_leaves08: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves08";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves08";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};
	class wx_leaves09: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves09";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves09";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};
	class wx_leaves10: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves10";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves10";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};
	class wx_leaves11: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_leaves11";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "leaves11";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class Land_wx_moerdijkbrug: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_moerdijkbrug";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "moerdijkbrug";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructBuilding";
		armor=800;
	};

	class wx_pickaxe: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_pickaxe";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "pickaxe";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_rifleshell01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_rifleshell01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "rifleshell01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "Destructno";
	};

	class wx_sakebottle: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_sakebottle";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "sakebottle";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructBuilding";
		armor=15;
	};

	class wx_sandbag00: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_sandbag00";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "sandbag00";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_sandbag01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_sandbag01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "sandbag01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_sandbag02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_sandbag02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "sandbag02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_sandbag03_end: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_sandbag03_end";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "sandbag03_end";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_sandbag03_mid: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_sandbag03_mid";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "sandbag03_mid";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_sandbag04: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_sandbag04";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "sandbag04";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_sandbag05: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_sandbag05";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "sandbag05";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_shovel: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_shovel";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "shovel";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_sniperspot: house
	{
		displayName = "sniperspot";
		vehicleClass = "WX_Objects";
		animated = 0;
		scope = 2;
		model = wx_objects\wx_sniperspot.p3d;
		armor=100;
		destrType = "DestructBuilding";
		accuracy = 0.2;
		mapSize = 3.3;
		ladders[]={{"start","end"}};
	};

	class wx_stoneclutter01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stoneclutter01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stoneclutter01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stoneclutter02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stoneclutter02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stoneclutter02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_wx_stoneclutter03_125: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_wx_stoneclutter03_125";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "wx_stoneclutter03_125";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_wx_stoneclutter04_500: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_wx_stoneclutter04_500";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "wx_stoneclutter04_500";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_rockbig01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_rockbig01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_rockbig01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_rockbig02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_rockbig02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_rockbig02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_rockbig03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_rockbig03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_rockbig03";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_03";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_04: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_04";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_04";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_05: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_05";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_05";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_06: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_06";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_06";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_07: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_07";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_07";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_101: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_101";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_101";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_102: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_102";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_102";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_103: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_103";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_103";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_104: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_104";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_104";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_105: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_105";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_105";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_106: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_106";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_106";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_107: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_107";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_107";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_108: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_108";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_108";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_109: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_109";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_109";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_110: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_110";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_110";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_stone_111: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_111";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_111";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_112: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_112";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_112";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_113: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_113";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_113";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_114: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_114";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_114";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};
	class wx_stone_115: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_stone_115";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "stone_115";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_table01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_table01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "table01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_table02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_table02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "table02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_trench01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_trench01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "trench01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_trench02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_trench02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "trench02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_trench03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_trench03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "trench03";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_trench04: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_trench04";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "trench04";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_trench05: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_trench05";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "trench05";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_trench06: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_trench06";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "trench06";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_trench07: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_trench07";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "trench07";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_trench08: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_trench08";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "trench08";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_wx_trench09: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_trench09";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "trench09";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_type99_magazine: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_type99_magazine";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "type99_magazine";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_water01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_water01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "water01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_water02: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_water02";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "water02";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_water03: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_water03";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "water03";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class Land_WX_windmill: house
	{
		scope = 2;
		animated = 1;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_windmill";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "windmill";
		destrType = "DestructEngine";
		accuracy = 0.2;
		armor = 600;
		mapSize = 3.3;
	};

	class wx_woodencrate: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_woodencrate";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "woodencrate";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

	class wx_woodencrate01: house
	{
		scope = 2;
		access=0;
		animated = 0;
		vehicleClass = "WX_Objects";
		model = "\wx_objects\wx_woodencrate01";
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName = "woodencrate01";
		accuracy = 0.2;
		mapSize = 1;

		destrType = "DestructNo";
	};

};

class cfgNonAiVehicles
{
	class Proxyflag_jap01
	{
		autocenter = false; // normal vehicle are autocentered
		scope = public;
		reversed = false;
		model = "\wx_objects\flag_jap01";
		simulation = "flag";
		selectionFabric = "latka";
	};
};
enum
{
	=2,
	destructengine=2,
	destructdefault=6,
	destructwreck=7,
	destructtree=3,
	destructtent=4,
	stabilizedinaxisx=1,
	stabilizedinaxisy=2,
	stabilizedinaxesboth=3,
	destructno=0,
	stabilizedinaxesnone=0,
	destructman=5,
	destructbuilding=1
};