class DefaultEventhandlers;
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
	class StaticWeapon: LandVehicle{};
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
		};*/
	};
	class AllVehicles: All
	{
		class ViewPilot;
		class Viewoptics;
	};
	class FlagCarrierCore;

	/*class wx_anchor: FlagCarrierCore
	{
		displayName = "Anchor";
		model = "\CA\misc2\SkeetMachine\SkeetDisk.p3d";
	};*/

	class wx_attacktransportladder: House
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

	class wx_portside_ladder: House
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

	class wx_starboard_ladder: House
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

	class wx_portside_ladder_long: wx_portside_ladder
	{
		displayName = "wx_portside_ladder_long";
		model = "\fow\fow_ships\attacktransport\wx_portside_ladder_long.p3d";
	};

	class wx_starboard_ladder_long: wx_portside_ladder_long
	{
		displayName = "wx_starboard_ladder_long";
		reversed = 1;
	};

	class wx_portside_netting: House
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

	class wx_starboard_netting: House
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

	class wx_attacktransport_bow: House
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

	class wx_attacktransport_bow_helper: House
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

	class wx_attacktransport_stern: House
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

	class wx_attacktransport_stern_helper: House
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

	class wx_cv_roadway: wx_attacktransport_stern
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
		precision = 6;
		brakeDistance = 20;
	};

	class wx_attacktransport: Boat
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

		ACRE_hasRack = 1;
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
		};

/*
		class EventHandlers
		{
			killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
			init = "[_this select 0] execVM ""\fow\fow_ships\attacktransport\scripts\fow\fow_ships\attacktransport.sqf""; ";
		};
*/

	};
	class wx_attacktransport02: wx_attacktransport
	{
		displayName = "AttackTransport02";
		model = "\fow\fow_ships\attacktransport\wx_attacktransport02";
		scope = 1;

		/*class EventHandlers
		{
			killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
			init = "";
		}; */
	};
/*
	class wx_carrier_test: wx_attacktransport
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
	class wx_aircraftcarrier02: wx_attacktransport
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

	class wx_aircraftcarrier03_bow: wx_attacktransport
	{
		scope = 1;
		displayName = "AirCraftCarrier 03 Bow";
		model = "\fow\fow_ships\attacktransport\wx_aircraftcarrier03_bow";
		armor = 400;

		////picture = "\fow\fow_ships\attacktransport\data\wx_aircraftcarrier_picture.paa";
		////icon = "\fow\fow_ships\attacktransport\data\wx_aircraftcarrier_icon.paa";

		/*class EventHandlers
		{
			killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
			init = "";
		};*/

		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"\fow\fow_ships\attacktransport\data\wx_aircraftcarrier.rvmat",
				"\fow\fow_ships\attacktransport\data\wx_aircraftcarrier.rvmat",
				"\fow\fow_ships\attacktransport\data\wx_aircraftcarrier_destruct.rvmat"
			};
		};

	};

	class wx_aircraftcarrier03_mid: wx_attacktransport
	{
		scope = 1;
		displayName = "AirCraftCarrier 03 Mid";
		model = "\fow\fow_ships\attacktransport\wx_aircraftcarrier03_Mid";
		armor = 400;

		//picture = "\fow\fow_ships\attacktransport\data\wx_aircraftcarrier_picture.paa";
		//icon = "\fow\fow_ships\attacktransport\data\wx_aircraftcarrier_icon.paa";

		maxSpeed = 30;
		transportVehiclesCount = 28;

		driverForceOptics = 0;

		memoryPointDriverOptics = "driverview";
		memoryPointDriverOutOptics = "driverview";

		DriverOutOptics = "driverview";
		DriverOptics = "driverview";

		class ViewOptics: ViewOptics // visionslot view
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
			initAngleX = 0;
			minAngleX = -180;
			maxAngleX = 180;
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
			minAngleX = -180;
			maxAngleX = 180;
			initAngleY = 0;
			minAngleY = -180;
			maxAngleY = 180;
		};

/*
		class EventHandlers
		{
			killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
			init = "";
		};
*/
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"\fow\fow_ships\attacktransport\data\wx_aircraftcarrier.rvmat",
				"\fow\fow_ships\attacktransport\data\wx_aircraftcarrier.rvmat",
				"\fow\fow_ships\attacktransport\data\wx_aircraftcarrier_destruct.rvmat"
			};
		};

		/*class UserActions
		{
			class DIH_rear_elevator
			{
				displayNameDefault = "";
				displayName = "Rear Elevator Menu";
				position = "elevator01";
				radius = 15.0;
				showWindow = 0;
				onlyForPlayer = 0;
				condition = "(true)";
				statement = "[this,'elevator01'] call DIH_cv_fnc_diag_elev_open;";		//was: [this] call DIH_cv_sPfH;
			};
			class DIH_forward_elevator
			{
				displayNameDefault = "";
				displayName = "Forward Elevator Menu";
				position = "elevator02";
				radius = 15.0;
				showWindow = 0;
				onlyForPlayer = 0;
				condition = "(true)";
				statement = "[this,'elevator02'] call DIH_cv_fnc_diag_elev_open;";
			};
			class DIH_clear_deck
			{
				displayNameDefault = "";
				displayName = "Clear Deck from Wrecks";
				position = "eye";
				radius = 20;
				showWindow = 0;
				onlyForPlayer = 0;
				condition = "(player == (driver this))";
				statement = "[this] call DIH_cv_fnc_clearDeck;";
			};
			class DIH_harbour_menu
			{
				displayNameDefault = "";
				displayName = "Harbour Menu";
				position = "eye";
				radius = 20;
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == (driver this))";
				statement = "[this] call DIH_cv_fnc_diag_hMenu_open;";
			};
			class DIH_anchor
			{
				displayNameDefault = "";
				displayName = "Drop/Hoist Anchor";
				position = "eye";
				radius = 20;
				showWindow = 0;
				onlyForPlayer = 0;
				condition = "(player == (driver this))";
				statement = "[this,0,0,[0,31.5]] spawn DIH_cv_fnc_anchor;";
			};
		};*/
		//actionBegin1 = "OpenDoors";	//wt...?
		//actionEnd1 = "OpenDoors";	//wt...?
	};

	class wx_aircraftcarrier03_stern: wx_attacktransport
	{
		scope = 1;
		displayName = "AirCraftCarrier 03 Stern";
		model = "\fow\fow_ships\attacktransport\wx_aircraftcarrier03_Stern";
		armor = 400;

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
				"\fow\fow_ships\attacktransport\data\wx_aircraftcarrier_destruct.rvmat"
			};
		};

	};

	class wx_aircraftcarrier03_mid_ijn: wx_aircraftcarrier03_mid
	{
		scope = 2;
		side = 0;
		faction = "fow_ija";
		crew = "WX_IJA_rifleman";
		displayName = "IJN Escort Carrier";
		vehicleClass = "wx_ships";
	};

	class wx_aircraftcarrier03_mid_usn: wx_aircraftcarrier03_mid
	{
		scope = 2;
		displayName = "USN Escort Carrier";

		faction = "fow_usa";
		vehicleClass = "wx_ships";
	};

	class wx_attacktransport_ijn: wx_attacktransport
	{
		scope = 2;
		side = 0;
		faction = "fow_ija";
		crew = "WX_IJA_rifleman";
		displayName = "IJN Attack Transport";
		vehicleClass = "wx_ships";

		/*class UserActions
		{
			class DIH_harbour_menu
			{
				displayNameDefault = "";
				displayName = "Harbour Menu";
				position = "driverview";
				radius = 20;
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == (driver this))";
				statement = "[this] call DIH_cv_fnc_diag_hMenu_open;";
			};
			class DIH_anchor
			{
				displayNameDefault = "";
				displayName = "Drop/Hoist Anchor";
				position = "driverview";
				radius = 20;
				showWindow = 0;
				onlyForPlayer = 0;
				condition = "(player == (driver this))";
				statement = "[this,0,0,[0,1.660]] spawn DIH_cv_fnc_anchor;";
			};
		};*/
	};

	class wx_attacktransport_ijn_armed: wx_attacktransport_ijn
	{
		scope = 1;
		displayName = "IJN Attack Transport (armed)";
	};

	class wx_attacktransport_usn: wx_attacktransport
	{
		scope = 2;
		displayName = "USN Attack Transport";

		faction = "fow_usa";
		vehicleClass = "wx_ships";

		/*class UserActions
		{
			class DIH_harbour_menu
			{
				displayNameDefault = "";
				displayName = "Harbour Menu";
				position = "driverview";
				radius = 20;
				showWindow = 0;
				onlyForPlayer = 1;
				condition = "(player == (driver this))";
				statement = "[this] call DIH_cv_fnc_diag_hMenu_open;";
			};
			class DIH_anchor
			{
				displayNameDefault = "";
				displayName = "Drop/Hoist Anchor";
				position = "driverview";
				radius = 20;
				showWindow = 0;
				onlyForPlayer = 0;
				condition = "(player == (driver this))";
				statement = "[this,0,0,[0,1.660]] spawn DIH_cv_fnc_anchor;";
			};
		};*/
	};

	class wx_attacktransport_usn_armed: wx_attacktransport_usn
	{
		scope = 2;
		displayName = "USN Attack Transport (armed)";
	};

	class RHIB: Boat
	{
		ACRE_hasRack = 1;
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
		};
	};

	class WX_us_NavalGun: WX_navalgun_base
	{
		scope= 2;
		side = 1;
		faction = "fow_usa";
		vehicleclass=wx_static;
		displayName = "Naval Gun";
		model = "\fow\fow_ships\attacktransport\WX_US_NavalGun";
		//icon = "\fow\fow_ships\attacktransport\data\WX_US_NavalGun_iconmap.paa";
		mapSize = 4;
		//picture = "\fow\fow_ships\attacktransport\data\WX_US_NavalGun_picture.paa";
		nameSound = "Cannon";
		crew = "fow_s_us_coxswain";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		armor = 200;
		hasCommander = 0;

		accuracy = 5; //Determines how easy an object is to identify. Smaller values are easier to detect
		camouflage = 0.5; //how difficult to spot. bigger = easier
		threat[] = {1,0.0500000,0.050000}; // soldier

		/*class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{

				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunnerviewweapon";
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				memoryPointGun = "kulas";
				ejectdeadgunner = 1;
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\WX_ija_type095_tank_HaGo\Optica\37mm_Scope.p3d";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};

				animationSourceBody = "mainTurret";
				body = "mainTurret";
				animationSourceGun = "mainGun";
				gun = "mainGun";

				weapons[] = {"WX_US_NavalGun"};
				magazines[]=
				{
					"WX_US_NavalGun_magazine",
					"WX_US_NavalGun_magazine",
					"WX_US_NavalGun_magazine",
					"WX_US_NavalGun_magazine",
					"WX_US_NavalGun_magazine"
				};
				gunnerAction = "searchlight_Gunner";
				gunnerInAction = "searchlight_Gunner";
				minTurn = -125;	//was 50
				maxTurn = 125;	//was 50
				initTurn = 0;
				minElev = -10;
				maxElev = 20;
				initElev = 0;
				maxHorizontalRotSpeed = 0.07;
				maxVerticalRotSpeed = 0.07;
				soundServo[] = {"\timo_sound\weapons\wx_ija_type010_DPGun\sounds\wx_ija_type010_DPGun_Traverse",0.03,1};

				class ViewOptics // Looking over the iron Sights
				{
					initFov = 0.3;
					minFov = 0.2;
					maxFov = 0.4;
					initAngleX = 0;
					minAngleX = -70;
					maxAngleX = 70;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
				};

				class ViewGunner // looking slighty from above the gun
				{
					initFov = 0.3;
					minFov = 0.2;
					maxFov = 0.4;
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;	
					minAngleY = -360;
					maxAngleY = 360;
				};

				class HeadLimits // 3rdperson view zoomed out
				{
					initAngleX = 5;
					minAngleX = -40;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -60;
					maxAngleY = 60;
				};

				extCameraPosition[]={0,2,-10};
				groupCameraPosition[]={0,5,-20};
				class Turrets{};
			};
		};*/
		class Library
		{
			libTextDesc = "WX_US_NavalGun";
		};

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"\fow\fow_ships\attacktransport\data\WX_US_NavalGun.rvmat",
				"\fow\fow_ships\attacktransport\data\WX_US_NavalGun.rvmat",
				"\fow\fow_ships\attacktransport\data\WX_US_NavalGun_destruct.rvmat"
			};
		};

		/*class EventHandlers
		{
			killed = "_this execVM ""CA\Data\ParticleEffects\SCRIPTS\killed.sqf""";
		};*/

		class AnimationSources
		{
			class gun_recoil
			{
				source = "reload";
				weapon = "WX_US_NavalGun";
			};
		};
	};

	class WX_us_NavalGun_aft: WX_us_NavalGun
	{
		displayName = "Naval Gun (aft)";
		reversed = false;
		scope= 1;	//no need to have that one in the editor
	};

	class WX_us_bofors_twin: WX_us_NavalGun
	{
		displayName = "Bofors Twin";
		model = "\fow\fow_ships\attacktransport\WX_US_bofors_twin";
		class AnimationSources: AnimationSources
		{
			class mainTurret
			{
				source = "mainTurret";
				weapon = "wx_us_bofors_twin";
			};
			class mainGun
			{
				source = "mainGun";
				weapon = "wx_us_bofors_twin";
			};
			class recoil_1
			{
				source = "reload";
				weapon = "wx_us_bofors_twin";
			};
			class recoil_2
			{
				source = "reload";
				weapon = "wx_us_bofors_twin";
			};
			class recoil_3
			{
				source = "reload";
				weapon = "wx_us_bofors_twin";
			};
			class recoil_4
			{
				source = "reload";
				weapon = "wx_us_bofors_twin";
			};
			class ReloadMagazine
			{
				source = "ReloadMagazine";
				weapon = "wx_us_bofors_twin";
			};
		};
		/*class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				minElev = -4;
				maxElev = 85;
				initElev = 0;
				maxHorizontalRotSpeed = 0.35;
				maxVerticalRotSpeed = 0.35;
				weapons[] = {"WX_US_Bofors_Twin"};
				magazines[]=
				{
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",

 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",

 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",

 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",

 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",

 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",

 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6", 					

					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
 					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6",
  					"wx_us_008Rnd_bofors_TF_6"
				};
				gunnerAction = "AV8B_pilot";
				gunnerInAction = "AV8B_pilot";
				gunnerForceOptics = 1;
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
			};

		};*/

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"\fow\fow_ships\attacktransport\data\WX_US_Bofors.rvmat",
				"\fow\fow_ships\attacktransport\data\WX_US_Bofors.rvmat",
				"\fow\fow_ships\attacktransport\data\WX_US_Bofors_destruct.rvmat"
			};
		};

	};
	/*class WX_us_bofors_twin_portside: WX_us_bofors_twin
	{
		displayName = "Bofors Twin portside";
		model = "\fow\fow_ships\attacktransport\WX_US_bofors_twin";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initTurn = 90;
				minTurn = 5;
				maxTurn = 175;
			};
		};
	};
	class WX_us_bofors_twin_starboard: WX_us_bofors_twin
	{
		displayName = "Bofors Twin starboard";
		model = "\fow\fow_ships\attacktransport\WX_US_bofors_twin";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				initTurn = -90;
				minTurn = 185;
				maxTurn = 355;
			};
		};
	};*/
	/*class WX_us_bofors_quad_portside: WX_us_bofors_twin_portside
	{
		displayName = "Bofors Quad portside";
		model = "\fow\fow_ships\attacktransport\WX_US_bofors_Quad";
	};
	class WX_us_bofors_quad_starboard: WX_us_bofors_twin_starboard
	{
		displayName = "Bofors Quad starboard";
		model = "\fow\fow_ships\attacktransport\WX_US_bofors_Quad";
	};*/
};