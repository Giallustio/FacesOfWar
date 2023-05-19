class CfgPatches
{
	units[] =
	{
		"fow_v_AttackTransport",
		"fow_v_AttackTransport_Bow",
		"fow_v_AttackTransport_Bow_helper",
		"fow_v_AttackTransport_Stern",
		"fow_v_AttackTransport_Stern_helper",
		"fow_v_portside_ladder",
		"fow_v_starboard_ladder",
		"fow_v_carrier_test",
		"fow_v_aircraftcarrier02",
		"fow_v_aircraftcarrier03_mid_ijn",
		"fow_v_aircraftcarrier03_mid_usn",
		"fow_v_aircraftcarrier03_bow",
		"fow_v_aircraftcarrier03_stern",
		"fow_v_portside_ladder_long",
		"fow_v_anchor",
		"fow_v_cv_roadway",
		"fow_v_starboard_netting",
		"fow_v_portside_netting",
		"fow_v_attacktransport_ijn",
		"fow_v_attacktransport_ijn_armed",
		"fow_v_attacktransport_usn",
		"fow_v_attacktransport_usn_armed",
		"fow_v_us_navalgun",
		"fow_v_us_NavalGun_aft"
	};
	weapons[] = {};
	requiredVersion = 0.1;
	requiredAddons[] = {"fow_main"};//"Extended_Eventhandlers","wx_us_coxswain","wx_hellcat","WX_Zero","wx_ija_type093_AAGun","CAWater2_LHD","wx_us_bofors"

};



class CfgVehicles
{
	class All;
	class House;
	class Land;
	class LandVehicle: Land
	{
		class ViewPilot;
		class NewTurret;
		class ViewOptics;
	};
/*	class StaticWeapon: LandVehicle{};
	class WX_navalgun_base: StaticWeapon
	{
		nameSound = "target";
		icon = "";
		mapSize = 3;
		picture = "";
		threat[] = {0.4,0.6,0.2};
		sensitivity = 1;
		hasCommander = 1;
		class HitBody
		{
			armor = 0.4;
			material = 50;
			name = "body";
			visual = "body";
			passThrough = 1;
		};
		class HitHull
		{
			armor = 1;
			material = 50;
			name = "body";
			visual = "body";
			passThrough = 0;
		};
		class HitTurret
		{
			armor = 0.8;
			material = 51;
			name = "turret";
			passThrough = 1;
		};
		class HitGun
		{
			armor = 0.6;
			material = 52;
			name = "gun";
			passThrough = 1;
		};
		class HitEngine
		{
			armor = 0.35;
			material = 60;
			name = "engine";
			visual = "engine";
			passThrough = 1;
		};
		fireDustEffect = "WeaponFireMGun";
		/*class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerName = "$STR_POSITION_GUNNER";
				commanding = 1;
				primaryGunner = 1;
				primaryObserver = 0;
				hasGunner = 1;
				gunnerAction = "ManActTestDriverOut";
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerForceOptics = 0;
				outGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				castGunnerShadow = 1;
				ejectDeadGunner = 1;
				class ViewGunner
				{
					minAngleX = -80;
					maxAngleX = 45;
					initAngleX = 8;
					minAngleY = -125;
					maxAngleY = 125;
					initAngleY = 0;
					minFov = 0.25;
					maxFov = 1.1;
					initFov = 0.65;
				};
				class ViewOptics
				{
					minAngleX = -30;
					maxAngleX = 30;
					initAngleX = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initAngleY = 0;
					minFov = "0.25 / 1";
					maxFov = "0.25 / 0.25";
					initFov = "0.25 / 0.7";
				};
				memoryPointGunnerOptics = "gunner_view";
				memoryPointGunnerOutOptics = "gunner_weaponview";
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGun = "kulas";
				animationSourceBody = "mainTurret";
				body = "mainTurret";
				animationSourceGun = "mainGun";
				gun = "mainGun";
				animationSourceHatch = "hatch_gunner";
				selectionFireAnim = "zasleh";
				startEngine = 0;
				soundServo[] = {};
				lockWhenDriverOut = 0;
				class Turrets
				{
					class obsTurret: NewTurret
					{
						gunnerName = "$STR_POSITION_COMMANDER";
						commanding = 2;
						primaryGunner = 0;
						primaryObserver = 1;
						hasGunner = 1;
						proxyType = "CPCommander";
						proxyIndex = 1;
						gunnerAction = "ManActTestDriverOut";
						gunnerOpticsModel = "\ca\Tracked\optika_tank_driver";
						gunnerForceOptics = 0;
						outGunnerMayFire = 1;
						viewGunnerInExternal = 1;
						castGunnerShadow = 1;
						ejectDeadGunner = 1;
						class ViewGunner
						{
							minAngleX = -80;
							maxAngleX = 45;
							initAngleX = 8;
							minAngleY = -125;
							maxAngleY = 125;
							initAngleY = 0;
							minFov = 0.25;
							maxFov = 1.1;
							initFov = 0.65;
						};
						memoryPointGunnerOptics = "commanderview";
						memoryPointGunnerOutOptics = "commanderview_out";
						memoryPointsGetInGunner = "pos_commander";
						memoryPointsGetInGunnerDir = "pos_commander_dir";
						gunBeg = "usti hlavne";
						gunEnd = "konec hlavne";
						memoryPointGun = "kulas";
						animationSourceBody = "obsTurret";
						body = "obsTurret";
						animationSourceGun = "obsGun";
						gun = "obsGun";
						selectionFireAnim = "Zasleh";
						animationSourceHatch = "hatch_commander";
						startEngine = 0;
						lockWhenDriverOut = 0;
					};
				};
			};
		};
	};*/
	};
	class AllVehicles: All
	{
		class ViewPilot;
		class Viewoptics;
	};
	class FlagCarrierCore;

	class Ship: AllVehicles
	{
		unitInfoType = "UnitInfoCar";
		class HitPoints
		{
			class HitEngine
			{
				armor = 1.2;
				material = 60;
				name = "motor";
				visual = "motor";
				passThrough = 1;
			};
		};
		class NewTurret;
		class Turrets;
		enableGPS = 0;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		class MarkerLights
		{
			class RedStill
			{
				name = "cerveny pozicni";
				color[] = {1.0,0.1,0.1,1};
				ambient[] = {0.1,0.01,0.01,1};
				brightness = 0.01;
				blinking = 0;
			};
			class GreenStill
			{
				name = "zeleny pozicni";
				color[] = {0.1,1.0,0.1,1};
				ambient[] = {0.01,0.1,0.01,1};
				brightness = 0.01;
				blinking = 0;
			};
			class WhiteStill
			{
				name = "bily pozicni";
				color[] = {1.0,1.0,1.0,1};
				ambient[] = {0.1,0.1,0.1,1};
				brightness = 0.01;
				blinking = 0;
			};
		};
		class ViewPilot: ViewPilot
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.4;
			initAngleX = 0;
			minAngleX = -60;
			maxAngleX = 60;
			initAngleY = 0;
			minAngleY = -89;
			maxAngleY = 89;
		};
		class ViewOptics: ViewOptics
		{
			initFov=0.700000;
			minFov=0.070000;
			maxFov=0.350000;
		};

		precision = 10;
		class Eventhandlers: DefaultEventhandlers{};
		class DestructionEffects{};
	};

	class Boat: Ship
	{

	};
	/*class wx_anchor: FlagCarrierCore
	{
		displayName = "Anchor";
		model = "\CA\misc2\SkeetMachine\SkeetDisk.p3d";
	};*/

	class fow_v_m_attacktransportladder: House
	{
		scope = 2;
		access=0;
		displayName = "wx_attacktransportladder";
		model = "\fow\fow_ships\attacktransport\wx_attacktransportladder.p3d";
		mapSize = 0.02;
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		armor = 500;
		ladders[]={{"start","end"}};
		vehicleClass = "wx_objects";
		destrType = "DestructNo";
	};

	class fow_v_m_portside_ladder: House
	{
		scope = 2;
		access=0;
		displayName = "wx_portside_ladder";
		model = "\fow\fow_ships\attacktransport\wx_portside_ladder.p3d";
		mapSize = 0.02;
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		armor = 500;
		ladders[]={{"start","end"}};
		vehicleClass = "wx_objects";
		destrType = "DestructNo";
	};

	class fow_v_m_starboard_ladder: House
	{
		scope = 2;
		access=0;
		displayName = "wx_starboard_ladder";
		model = "\fow\fow_ships\attacktransport\wx_starboard_ladder.p3d";
		mapSize = 0.02;
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		armor = 500;
		ladders[]={{"start","end"}};
		vehicleClass = "wx_objects";
		destrType = "DestructNo";
	};

	class fow_v_m_portside_ladder_long: wx_portside_ladder
	{
		displayName = "wx_portside_ladder_long";
		model = "\fow\fow_ships\attacktransport\wx_portside_ladder_long.p3d";
	};

	class fow_v_m_starboard_ladder_long: wx_portside_ladder_long
	{
		displayName = "wx_starboard_ladder_long";
		reversed = 1;
	};

	class fow_v_m_portside_netting: House
	{
		scope = 2;
		access=0;
		displayName = "wx_portside_netting";
		model = "\fow\fow_ships\attacktransport\wx_portside_netting.p3d";
		mapSize = 0.02;
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		armor = 500;
		ladders[]=
		{
			{"start_01","end_01"},
			{"start_02","end_02"},
			{"start_03","end_03"},
			{"start_04","end_04"},
			{"start_05","end_05"},
			{"start_06","end_06"},
			{"start_07","end_07"}
		};
		vehicleClass = "wx_objects";
		destrType = "DestructNo";
	};

	class fow_v_m_starboard_netting: House
	{
		scope = 2;
		access=0;
		displayName = "wx_starboard_netting";
		model = "\fow\fow_ships\attacktransport\wx_starboard_netting.p3d";
		mapSize = 0.02;
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		armor = 500;
		ladders[]=
		{
			{"start_01","end_01"},
			{"start_02","end_02"},
			{"start_03","end_03"},
			{"start_04","end_04"},
			{"start_05","end_05"},
			{"start_06","end_06"},
			{"start_07","end_07"}
		};
		vehicleClass = "wx_objects";
		destrType = "DestructNo";
	};

	class fow_v_m_attacktransport_bow: House
	{
		scope = 2;
		access=0;
		displayName = "wx_starboard_bow";
		model = "\fow\fow_ships\attacktransport\wx_attacktransport_bow.p3d";
		reversed = 1;
		mapSize = 0.02;
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		armor = 500;
		vehicleClass = "wx_objects";
		destrType = "DestructNo";
	};

	class fow_v_m_attacktransport_bow_helper: House
	{
		scope = 2;
		access=0;
		displayName = "wx_starboard_bow_helper";
		model = "\fow\fow_ships\attacktransport\wx_attacktransport_bow_helper.p3d";
		reversed = 1;
		mapSize = 0.02;
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		armor = 500;
		vehicleClass = "wx_objects";
		destrType = "DestructNo";
	};

	class fow_v_m_attacktransport_stern: House
	{
		scope = 2;
		access=0;
		displayName = "wx_starboard_stern";
		model = "\fow\fow_ships\attacktransport\wx_attacktransport_stern.p3d";
		reversed = 1;
		mapSize = 0.02;
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		armor = 500;
		vehicleClass = "wx_objects";
		destrType = "DestructNo";
	};

	class fow_v_m_attacktransport_stern_helper: House
	{
		scope = 2;
		access=0;
		displayName = "wx_starboard_stern_helper";
		model = "\fow\fow_ships\attacktransport\wx_attacktransport_stern_helper.p3d";
		reversed = 1;
		mapSize = 0.02;
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		armor = 500;
		vehicleClass = "wx_objects";
		destrType = "DestructNo";
	};

	class fow_v_m_cv_roadway: wx_attacktransport_stern
	{
		scope = 2;
		access=0;
		displayName = "wx_starboard_bow";
		model = "\fow\fow_ships\attacktransport\wx_cv_rw.p3d";
		reversed = 1;
		mapSize = 0.02;
		//icon = "\Ca\buildings\Icons\i_camosmall_CA.paa";
		armor = 500;
		vehicleClass = "wx_objects";
		destrType = "DestructNo";
	};

	class fow_v_attacktransport: Boat
	{
		scope = 1;
		faction = "Allied";
		displayName = "AttackTransport";
		accuracy = 0.5;

		crew = "fow_s_us_coxswain";

		side = 1;
		model = "\fow\fow_ships\attacktransport\wx_attacktransport";
		vehicleClass = "AlliedVehiclesClass";
		//picture = "\ca\water\data\ico\rhib_CA.paa";
		mapSize = 150;
		unitInfoType = "UnitInfoShip";

		primaryObserver=2;
		driverName = "fow_s_us_coxswain";
		proxyIndex = 1;
		hideProxyInCombat = false;
		proxyType="CPDriver";
		precision = 6;
		brakeDistance = 20;

		driverAction = "RHIB_Driver";
		driverInAction = "RHIB_Driver";
		cargoAction[] = {"RHIB_Cargo"};
		cargoInAction[] = {"RHIB_Cargo"};

		getInRadius=10;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};

		hasGunner = 1;
		castDriverShadow = 1;
		castCargoShadow = 1;
		gunnerHasFlares = 0;
		maxSpeed = 20;	//was: 12
		enableGPS = 0;
		transportSoldier = 60;

		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInDriverDir = "pos driver dir";

//		memoryPointsLeftWaterEffect="waterEffectL";
//		memoryPointsRightWaterEffect="waterEffectR";

		leftDustEffect = "LDustEffects";
		rightDustEffect = "RDustEffects";
		leftWaterEffect = "LWaterEffects";
		rightWaterEffect = "RWaterEffects";
		leftEngineEffect = "LEngEffects";
		rightEngineEffect = "REngEffects";
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";

		typicalCargo[] = {};

		supplyRadius = 3;
		extCameraPosition[] = {0,20,-38.0};
		cost = 10000;
		armor = 500; // was 75

		DriverForceOptics = 0;

		memoryPointDriverOptics[] = {"driverview", "pilot"};
		memoryPointDriverOutOptics = "driveroutview";

		pointPilot="pilot";
		pointCommander="velitel";

		class ViewOptics: ViewOptics // visionslot view
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
			initAngleX = 0;
			minAngleX = -80;
			maxAngleX = 80;
			initAngleY = 0;
			minAngleY = -180;
			maxAngleY = 180;
		};

		class ViewPilot: ViewPilot // 1stperson view
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
			initAngleX = 0;
			minAngleX = -80;
			maxAngleX = 80;
			initAngleY = 0;
			minAngleY = -180;
			maxAngleY = 180;
		};

		class AnimationSources{};
		class UserActions{};

		soundEnviron[] = {"",0.0562341,0.9};
		class SoundEvents{};
		insideSoundCoef = 1;
		/*soundEngineOnInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01",0.1,1.0};
		soundEngineOnExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-start-01",1.0,1.0,150};
		soundEngineOffInt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01",0.1,1.0};
		soundEngineOffExt[] = {"ca\sounds\vehicles\water\rhib\ext-boat-stop-01",1.0,1.0,150};
*/
/*		class Sounds
		{
			class Engine
			{
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-low-01",1.0,0.9,300};
				frequency = "(randomizer*0.05+0.55)*rpm";
				volume = "engineOn*(rpm factor[0.5, 0.1])";
			};
			class EngineHighOut
			{
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-high-01",1.0,0.8,300};
				frequency = "(randomizer*0.05+0.55)*rpm";
				volume = "engineOn*(rpm factor[0.4, 1.3])";
			};
			class IdleOut
			{
				sound[] = {"ca\sounds\vehicles\water\rhib\ext-boat-engine-idle-03",0.562341,1.0,150};
				frequency = "1";
				volume = "engineOn*(rpm factor[0.3, 0])";
			};
			class WaternoiseOutW0
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-water-noise-nospeed",0.398107,1.0,100};
				frequency = "1";
				volume = "(speed factor[7, 0])";
			};
			class WaternoiseOutW1
			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-lospd-noise-02",0.398107,1.0,100};
				frequency = "1";
				volume = "((speed factor[2, 12]) min (speed factor[12, 2]))";
			};
			class WaternoiseOutW2
 			{
				sound[] = {"ca\sounds\vehicles\water\water_sfx\ext-boat-hispd-noise-02",0.398107,1.0,100};
				frequency = "1";
				volume = "(speed factor[9, 18.7])";
			};
		};*/

		class HitPoints
		{
			class HitEngine
			{
				armor = 1.2;
				material = 60;
				name = "engine";
				visual = "engine";
				passThrough = 1;
			};
		};


		driverCompartments = 1;
		cargoCompartments[] = {0};


		class Turrets: Turrets{};

		class Library
		{
			libTextDesc = "$STR_LIB_LCM3";
		};

		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"\fow\fow_ships\attacktransport\data\wx_attacktransport.rvmat",
				"\fow\fow_ships\attacktransport\data\wx_attacktransport.rvmat",
				"\fow\fow_ships\attacktransport\data\wx_attacktransport_destruct.rvmat"
			};
		};

/*		ACRE_hasRack = 1;
		ACRE_hasExternalAccessRack = 0;
		antennas[] = {""};
		class ACRE_Racks
		{
			class MainRack
			{
				name = "MainRack";
				type = "ACRE_VRC103_VIRTUAL";
				externalAccess = 0;
				canRemove = 0;
				allowedPositions[] = {"driver"};
				defaultRadios[] = {"ACRE_PRC117F"};
				antenna = "ACRE_13IN_UHF_BNC";
				class Position
				{
					attenuationName = "MainRack";
					modelReference[] = {0,0,0};
				};
			};
		};*/

/*
		class EventHandlers
		{
			killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
			init = "[_this select 0] execVM ""\fow\fow_ships\attacktransport\scripts\fow\fow_ships\attacktransport.sqf""; ";
		};
*/

	};
	/*class fow_v_attacktransport02: wx_attacktransport
	{
		displayName = "AttackTransport02";
		model = "\fow\fow_ships\attacktransport\wx_attacktransport02";
		scope = 1;

		/*class EventHandlers
		{
			killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
			init = "";
		}; 
	};*/
/*
	class fow_v_carrier_test: wx_attacktransport
	{
		displayName = "Carrier";
		model = "\fow\fow_ships\attacktransport\wx_aircraftcarrier01";
		maxSpeed = 30;
		class EventHandlers
		{
			killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
			init = "";
		}; 
	};
	class fow_v_aircraftcarrier02: wx_attacktransport
	{
		displayName = "AirCraftCarrier";
		model = "\fow\fow_ships\attacktransport\wx_aircraftcarrier02";

		//picture = "\fow\fow_ships\attacktransport\data\wx_aircraftcarrier_picture.paa";
		//icon = "\fow\fow_ships\attacktransport\data\wx_aircraftcarrier_icon.paa";


		class EventHandlers
		{
			killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
			init = "";
		};

		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"\fow\fow_ships\attacktransport\data\wx_aircraftcarrier.rvmat",
				"\fow\fow_ships\attacktransport\data\wx_aircraftcarrier.rvmat",
				"\fow\fow_ships\attacktransport\data\wx_aircraftcarrier_destruct.rvmat",
			};
		};

	};
*/

//250 was nice, but a slow crash landing plane would still destroy a section of the carrier






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