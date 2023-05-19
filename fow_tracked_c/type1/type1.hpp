
	class fow_v_type1_hoki: Tank_F
	{
		displayName = "Type 1 hoki";
		model = "\fow\fow_tracked\type1\type1_hoki";
		faction = "fow_ija";
		
		editorSubcategory = "fow_tracked";
		
		scope = 1;
		side = 1;
		proxyType = "CPDriver";
		proxyIndex = 1;
		commanding = 0;
		hideProxyinCombat = 0;
		forceHidedriver = 0;
		commanderCanSee = "2+4+8+16";
		gunnerCanSee = "2+4+8+16";
		driverCanSee = "2+4+8+16";
		crewVulnerable = 1;
		accuracy = 0.7;
		//picture = "\fow\fow_tracked\lvta2\data\lvta2_pic.paa";
		//Icon = "\fow\fow_tracked\lvta2\data\lvta2_icon.paa";
		mapSize = 11;
		/*
		damageResistance = 0.01;
		armorStructural = 1.5;
		armor = 400;
		minimalHit = 15;*/
		
		#include "physX.hpp"
		#include "sounds.hpp"
		
		/*
		threat[] = {0.1,0.1,0.1};
		cost = 1000000;
		canFloat = 1;
		maxSpeed = 25;
		turnCoef = 2;
		terrainCoef = 2;
		damperSize = 0.2;
		damperForce = 1;
		damperDamping = 1;
		steerAheadSimul = 0.6;
		steerAheadPlan = 0.9;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		brakeDistance = 1.1;
		limitedspeedcoef = 0.2;
		waterSpeedFactor = 0.8;
		maxTurnAngularVelocity = 0.1;
		costTurnCoef = 0.025;
		wheelCircumference = 2;
		tracksSpeed = 1.8;
		forceHideGunner = 0;*/
		class TransportMagazines{};
		transportAmmo = 0;
		crew = "fow_s_ija_rifleman";
		transportSoldier = 11;
		//typicalCargo[] = {"WX_USMarines_NCO","WX_USMarines_Garand","WX_USMarines_Garand","WX_USMarines_Medic","WX_USMarines_M1Carbine_AT","WX_USMarines_Greasegun","WX_USMarines_NCO","WX_USMarines_Garand","WX_USMarines_Garand","WX_USMarines_Medic","WX_USMarines_M1Carbine_AT","WX_USMarines_Greasegun","WX_USMarines_NCO","WX_USMarines_Garand","WX_USMarines_Garand","WX_USMarines_Medic","WX_USMarines_M1Carbine_AT","WX_USMarines_Greasegun"};
		cargoAction[] = {"passenger_low01","RHIB_Cargo"};
		cargoInAction[] = {"RHIB_Cargo"};
		//cargoIsCoDriver[] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		getInAction = "GetInMedium";
		getOutAction = "GetOutLow";
		driverAction = "driver_offroad01";
		//driverInAction = "AH1Z_Pilot";
		supplyRadius = 1.7;
		animationSourceHatch = "Hatch_Driver_Front";
		//preferRoads = 0;
		/*
		insideSoundCoef = 0.9;
		outsideSoundFilter = 1;
		occludeSoundsWhenIn = 0.01;
		obstructSoundsWhenIn = 0.177828;*/
		LeftDustEffect = "LDustEffects";
		RightDustEffect = "RDustEffects";
		driverForceOptics = 0;//better 1, it sucks
		//driverOpticsModel = "\wx_us_lvta2\Optica\M6_Periscope_02";
		//driverOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
		memoryPointDriverOutOptics = "driverview";
		hiddenSelections[] = {"_swaptex01"};
		hiddenSelectionsTextures[] = {"\fow\fow_tracked\type1\data\WX_ija_type001_hoki_gr_co.paa"};
		/*class ViewOptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.466;
			minFov = 0.466;
			maxFov = 0.466;
		};
		class ViewPilot
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
			initAngleX = 0;
			minAngleX = -80;
			maxAngleX = 80;
			initAngleY = 0;
			minAngleY = -110;
			maxAngleY = 110;
		};
		class HeadLimits
		{
			initAngleX = 5;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};*/
		//extCameraPosition[] = {0,2,-10};
		//groupCameraPosition[] = {0,5,-20};
		
		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 100;						/// angle of full light
				outerAngle 		= 179;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 1.0;						/// how big is the flare

				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;		/// this allows adding more lights into scene
				};
			};

			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};

		};

		aggregateReflectors[] = {{"LightCarHeadL01"}, {"LightCarHeadR01"}}; /// aggregating reflectors helps the engine a lot	

		class AnimationSources
		{
			class Hatch_Driver_Front
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Hatch_Driver_Left
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Hatch_Driver_Right
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Hatch_Radioop_Left
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Hatch_Radioop_Right
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		actionBegin1 = "Open_Hatch_Driver_Front";
		actionEnd1 = "Close_Hatch_Driver_Front";
		actionBegin2 = "Open_Hatch_Driver_Left";
		actionEnd2 = "Close_Hatch_Driver_Left";
		actionBegin3 = "Open_Hatch_Driver_Right";
		actionEnd3 = "Close_Hatch_Driver_Right";
		actionBegin4 = "Open_Hatch_Radioop_Left";
		actionEnd4 = "Close_Hatch_Radioop_Left";
		actionBegin5 = "Open_Hatch_Radioop_Right";
		actionEnd5 = "Close_Hatch_Radioop_Right";
		class UserActions
		{
			class Open_Hatch_Driver_Front
			{
				showWindow = 0;
				priority = 5;
				displayName = "Open Front Hatch Driver";
				position = "Hatch_Driver_Front_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Hatch_Driver_Front"" < 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Hatch_Driver_Front"", 1]";
			};
			class Close_Hatch_Driver_Front
			{
				showWindow = 0;
				priority = 4.9;
				displayName = "Close Front Hatch Driver";
				position = "Hatch_Driver_Front_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Hatch_Driver_Front"" > 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Hatch_Driver_Front"", 0]";
			};
			class Open_Hatch_Driver_Left
			{
				showWindow = 0;
				priority = 4.8;
				displayName = "Open Left Hatch Driver";
				position = "Hatch_Driver_Front_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Hatch_Driver_Left"" < 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Hatch_Driver_Left"", 1]";
			};
			class Close_Hatch_Driver_Left
			{
				showWindow = 0;
				priority = 4.7;
				displayName = "Close Left Hatch Driver";
				position = "Hatch_Driver_Front_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Hatch_Driver_Left"" > 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Hatch_Driver_Left"", 0]";
			};
			class Open_Hatch_Driver_Right
			{
				showWindow = 0;
				priority = 4.6;
				displayName = "Open Right Hatch Driver";
				position = "Hatch_Driver_Front_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Hatch_Driver_Right"" < 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Hatch_Driver_Right"", 1]";
			};
			class Close_Hatch_Driver_Right
			{
				showWindow = 0;
				priority = 4.5;
				displayName = "Close Right Hatch Driver";
				position = "Hatch_Driver_Front_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Hatch_Driver_Right"" > 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Hatch_Driver_Right"", 0]";
			};
			class Open_Hatch_RadioOp_Left
			{
				showWindow = 0;
				priority = 4.8;
				displayName = "Open Left Hatch RadioOp";
				position = "Hatch_RadioOp_Left_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Hatch_RadioOp_Left"" < 0.5) && (alive this) && (player == commander this)";
				statement = "this animate [""Hatch_RadioOp_Left"", 1]";
			};
			class Close_Hatch_RadioOp_Left
			{
				showWindow = 0;
				priority = 4.7;
				displayName = "Close Left Hatch RadioOp";
				position = "Hatch_RadioOp_Left_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Hatch_RadioOp_Left"" > 0.5) && (alive this) && (player == commander this)";
				statement = "this animate [""Hatch_RadioOp_Left"", 0]";
			};
			class Open_Hatch_RadioOp_Right
			{
				showWindow = 0;
				priority = 4.6;
				displayName = "Open Right Hatch RadioOp";
				position = "Hatch_Driver_Right_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Hatch_RadioOp_Right"" < 0.5) && (alive this) && (player == commander this)";
				statement = "this animate [""Hatch_RadioOp_Right"", 1]";
			};
			class Close_Hatch_RadioOp_Right
			{
				showWindow = 0;
				priority = 4.5;
				displayName = "Close Right Hatch RadioOp";
				position = "Hatch_RadioOp_Right_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Hatch_RadioOp_Right"" > 0.5) && (alive this) && (player == commander this)";
				statement = "this animate [""Hatch_RadioOp_Right"", 0]";
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 0.85;
				material = 55;
				name = "Hull";
				visual = "Hull";
				passThrough = 1;
			};
			class HitLTrack
			{
				armor = 0.3;
				material = -1;
				name = "Track_L";
				visual = "Track_L";
				passThrough = 0.3;
			};
			class HitRTrack
			{
				armor = 0.3;
				material = -1;
				name = "Track_R";
				visual = "Track_R";
				passThrough = 0.3;
			};
			class HitEngine
			{
				armor = 1;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0.2;
			};
		};

		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
			class Exhaust2
			{
				position = "vyfuk start2";
				direction = "vyfuk konec2";
				effect = "ExhaustsEffectBig";
			};
		};
		class Library
		{
			libTextDesc = "Type 1 Hoki";
		};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		/*class Damage
		{
			tex[] = {};
			mat[] = {"WX_ija_type001_hoki\data\WX_ija_type001_hoki.rvmat","WX_ija_type001_hoki\data\WX_ija_type001_hoki.rvmat","WX_ija_type001_hoki\data\WX_ija_type001_hoki_destruct.rvmat","WX_ija_type001_hoki\data\WX_ija_type001_hoki_tracks.rvmat","WX_ija_type001_hoki\data\WX_ija_type001_hoki_tracks.rvmat","WX_ija_type001_hoki\data\WX_ija_type001_hoki_tracks_destruct.rvmat"};
		};*/
		class Turrets {};
		//class Turrets: Turrets
		//{
			/*class Turret: NewTurret
			{
				proxyIndex = 1;
				proxyType = "CPCommander";
				gunnerName = "commander and RadioOperator";
				gunnerCompartments = "1";
				primaryGunner = 1;
				primaryObserver = 2;
				commanding = 2;
				viewGunnerInExternal = 1;
				forceHideGunner = 0;
				forceHideCommander = 0;
				hasGunner = 1;
				body = "turret";
				gun = "";
				animationSourceBody = "turret";
				animationSourceGun = "";
				animationSourceHatch = "HatchCommander";
				gunBeg = " ";
				gunEnd = " ";
				memoryPointGun = " ";
				memoryPointGunnerOptics = " ";
				memoryPointGunnerOutOptics = " ";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				selectionFireAnim = "";
				gunnerInAction = "Stryker_Cargo01";
				gunnerAction = "Stryker_Cargo01";
				gunnerGetInAction = "GetInlow";
				gunnerGetOutAction = "GetOutlow";
				gunnerOpticsModel = "\ca\Weapons\optika_empty";
				gunnerOutOpticsModel = "\ca\Weapons\optika_empty";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				GunnerForceOptics = 0;
				minElev = 0;
				maxElev = 0;
				initElev = 0;
				minTurn = 0;
				maxTurn = 0;
				initTurn = 0;
				weapons[] = {"FakeWeapon"};
				magazines[] = {"FakeWeapon"};
				startEngine = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				class ViewOptics
				{
					initAngleX = -5;
					minAngleX = -80;
					maxAngleX = 80;
					initAngleY = 0;
					minAngleY = -30;
					maxAngleY = 30;
					initFov = 0.2;
					minFov = 0.1;
					maxFov = 0.3;
				};
			};*/
		//};
	};
	class fow_v_type1_hoki_ija: fow_v_type1_hoki
	{
		scope = 2;
	};