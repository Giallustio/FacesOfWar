////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 6.13
//'now' is Sun Apr 30 11:41:44 2017 : 'file' last modified on Mon Nov 26 18:42:25 2012
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class wx_us_cfg : WX_US_M5A1\config.bin{
class CfgAmmo
{
	class ShellCore;
	class wx_us_Sh_37mm_m6: ShellCore
	{
		soundHit[] = {"Ca\sounds\Weapons\explosions\explo_large_03",56.2341,1,1800};
		CraterEffects = "HEShellCrater";
		ExplosionEffects = "HEShellExplosion";
		visibleFire = 64;
		audibleFire = 64;
		timeToLive = 60;
		muzzleEffect = "BIS_Effects_Cannon";
		caliber = 33.33;
		whistleOnFire = 2;
	};
	class wx_us_Sh_37mm_M63_HE: wx_us_Sh_37mm_m6
	{
		nvgOnly = 0;
		initTime = 0;
		hit = 70;
		indirectHit = 30;
		indirectHitRange = 8;
		typicalSpeed = 450;
		cost = 500;
		deflecting = 10;
		model = "\WX_US_M4A2\_Tracer.p3d";
		airLock = 0;
		laserLock = 0;
		irLock = 0;
		explosive = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "HEShellExplosion";
		muzzleEffect = "BIS_Effects_HeavyCaliber";
	};
	class wx_us_Sh_37mm_M74_APC: wx_us_Sh_37mm_m6
	{
		nvgOnly = 0;
		initTime = 0;
		hit = 200;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalSpeed = 430;
		cost = 500;
		deflecting = 10;
		model = "\WX_us_M4A2\_Tracer.p3d";
		airLock = 0;
		laserLock = 0;
		irLock = 0;
		explosive = 1;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		DIH_APM[] = {36,450,1500};
	};
	class wx_us_Sh_37mm_M51_AP: wx_us_Sh_37mm_m6
	{
		nvgOnly = 0;
		initTime = 0;
		hit = 160;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalSpeed = 450;
		cost = 500;
		deflecting = 10;
		model = "\WX_US_M4A2\_Tracer.p3d";
		airLock = 0;
		laserLock = 0;
		irLock = 0;
		explosive = 1;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
		DIH_APM[] = {55,450,2250};
	};
};
class CfgMagazines
{
	class VehicleMagazine;
	class wx_us_40Rnd_M63_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "M63 HE";
		ammo = "wx_us_Sh_37mm_M63_HE";
		count = 40;
		initSpeed = 450;
	};
	class wx_us_30Rnd_M74_APC: VehicleMagazine
	{
		scope = 2;
		displayName = "M74 APC";
		ammo = "wx_us_Sh_37mm_M74_APC";
		count = 30;
		initSpeed = 450;
	};
	class wx_us_27Rnd_M51_AP: VehicleMagazine
	{
		scope = 2;
		displayName = "M51 AP";
		ammo = "wx_us_Sh_37mm_M51_AP";
		count = 27;
		initSpeed = 450;
	};
};
class cfgWeapons
{
	class MGun;
	class CannonCore;
	class WX_US_37mm_M6: CannonCore
	{
		scope = 1;
		displayName = "M6 37mm";
		sound[] = {"\wx_us_m5a1\Sound\37mm_Fire01",210,1,1200};
		reloadSound[] = {"\wx_us_m5a1\Sound\Reload",1,1,20};
		magazines[] = {"wx_us_40Rnd_M63_HE","wx_us_30Rnd_M74_APC","wx_us_27Rnd_M51_AP"};
		initSpeed = 450;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 0.5;
		minRange = 1;
		minRangeProbab = 0.1;
		reloadTime = 5;
		magazineReloadTime = 0;
		maxLeadSpeed = 80;
	};
	class WX_US_M1919_tripod;
	class wx_us_m5a1_30cal_1: WX_US_M1919_tripod
	{
		displayName = "303 Browning MG";
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "M1919 Browning";
			autoFire = 1;
			begin1[] = {"\Timo_Sound\Weapons\WX_US_M1919_Vehiclemount\sounds\WX_US_M1919_fire1",1.77828,1,1000};
			soundBegin[] = {"begin1",0.5};
			reloadTime = 0.15;
			dispersion = 0.008;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
	};
	class wx_us_m5a1_30cal_2: wx_us_m5a1_30cal_1{};
	class wx_us_m5a1_30cal_3: wx_us_m5a1_30cal_1{};
};
class CfgPatches
{
	class wx_us_m5a1
	{
		units[] = {"wx_us_m5a1","wx_gb_m5a1"};
		requiredVersion = 1.0;
		VehicleClass = "Armored";
		requiredAddons[] = {"CAWeapons","Timo_Sound","WX_USMarines","WX_brits","CATracked_BAF"};
	};
};
class ViewOptics;
class HitPoints;
class Turrets;
class NewTurret;
class CfgVehicles
{
	class Tank;
	class wx_us_m5a1: Tank
	{
		displayName = "M5A1 Light Tank";
		model = "\wx_us_m5a1\wx_us_m5a1";
		faction = "wx_us";
		vehicleclass = "wx_armored";
		selectionLeftOffset = "pasanimL";
		selectionRightOffset = "pasanimP";
		scope = 2;
		side = 1;
		commanderCanSee = "2+4+8+16";
		gunnerCanSee = "2+4+8+16";
		driverCanSee = "2+4+8+16";
		proxyType = "CPDriver";
		proxyIndex = 1;
		commanding = 0;
		crew = "WX_USMarines_Thompson";
		typicalCargo[] = {"WX_USMarines_Thompson","WX_USMarines_Thompson","WX_USMarines_Thompson","WX_USMarines_Thompson"};
		accuracy = 0.7;
		picture = "\wx_us_m5a1\data\wx_us_m5a1_picture.paa";
		Icon = "\wx_us_m5a1\data\wx_us_m5a1_icon.paa";
		mapSize = 11;
		armor = 200;
		minimalHit = 0.08;
		maxSpeed = 39;
		wheelCircumference = 2.312;
		tracksSpeed = 1.1;
		forceHideGunner = 0;
		class TransportMagazines{};
		transportAmmo = 0;
		supplyRadius = 1.7;
		canFloat = 0;
		threat[] = {0.45,0.4,0.1};
		cost = 1000000;
		getInAction = "GetInMedium";
		getOutAction = "GetOutLow";
		driverAction = "BMP2_DriverOut";
		driverInAction = "datsun_driver";
		animationSourceHatch = "HatchDriver";
		preferRoads = 0;
		memoryPointTrack1L = "Stopa ll";
		memoryPointTrack1R = "Stopa lr";
		memoryPointTrack2L = "Stopa rl";
		memoryPointTrack2R = "Stopa rr";
		driverForceOptics = 1;
		driverOpticsModel = "\wx_us_m4a2\Optics\M6_Periscope";
		driverOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
		forceHidedriver = 0;
		memoryPointDriverOutOptics = "driverview";
		damperSize = 0.3;
		damperForce = 0.5;
		damperDamping = 0.5;
		steerAheadSimul = 0.6;
		steerAheadPlan = 0.9;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		brakeDistance = 1.1;
		insideSoundCoef = 0.9;
		outsideSoundFilter = 1;
		occludeSoundsWhenIn = 0.01;
		obstructSoundsWhenIn = 0.177828;
		class ViewOptics: ViewOptics
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
		};
		extCameraPosition[] = {0,2,-10};
		groupCameraPosition[] = {0,5,-20};
		class AnimationSources
		{
			class gun_1_recoil_cannon
			{
				source = "reload";
				weapon = "wx_us_37mm_m6";
			};
			class gun_1_recoil_MG
			{
				source = "reload";
				weapon = "wx_us_m5a1_30cal_1";
			};
			class gun_2_recoil
			{
				source = "reload";
				weapon = "wx_us_m5a1_30cal_2";
			};
			class gun_3_recoil
			{
				source = "reload";
				weapon = "wx_us_m5a1_30cal_3";
			};
			class windshield
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		actionBegin1 = "PutUp_Windshield";
		actionEnd1 = "Lower_Windshield";
		class UserActions
		{
			class PutUp_Windshield
			{
				showWindow = 0;
				priority = 4.8;
				displayName = "Put Up Windshield";
				position = "windshield_axis";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Windshield"" < 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Windshield"", 1]";
			};
			class Lower_Windshield
			{
				showWindow = 0;
				priority = 4.8;
				displayName = "Lower Windshield";
				position = "windshield_axis";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Windshield"" > 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Windshield"", 0]";
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "Hull";
				visual = "Hull";
				passThrough = 1;
				minimalHit = 0.08;
			};
			class HitEngine
			{
				armor = 0.3;
				material = -1;
				name = "motor";
				visual = "motor";
				passThrough = 0.8;
				minimalHit = 0.08;
			};
			class HitLTrack
			{
				armor = 0.3;
				material = -1;
				name = "Track_L";
				visual = "Track_L";
				passThrough = 0.1;
				minimalHit = 0.08;
			};
			class HitRTrack
			{
				armor = 0.3;
				material = -1;
				name = "Track_R";
				visual = "Track_R";
				passThrough = 0.1;
				minimalHit = 0.08;
			};
		};
		soundGear[] = {"",5.62341e-005,1};
		soundGetIn[] = {"\wx_us_m5a1\Sound\Get_In",0.562341,1};
		soundGetOut[] = {"\wx_us_m5a1\Sound\Get_Out",0.562341,1,35};
		soundEngineOnInt[] = {"\wx_us_m5a1\Sound\Engine_On",1,1};
		soundEngineOnExt[] = {"\wx_us_m5a1\Sound\Engine_On",2.51189,1,35};
		soundEngineOffInt[] = {"\wx_us_m5a1\Sound\Engine_Off",1,1};
		soundEngineOffExt[] = {"\wx_us_m5a1\Sound\Engine_Off",1,0.8,35};
		buildCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_building_01",0.707946,1,150};
		buildCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_building_02",0.707946,1,150};
		buildCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_building_03",0.707946,1,150};
		buildCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_building_04",0.707946,1,150};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_wood_01",0.707946,1,150};
		WoodCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_wood_02",0.707946,1,150};
		WoodCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_wood_03",0.707946,1,150};
		WoodCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_wood_04",0.707946,1,150};
		soundWoodCrash[] = {"woodCrash0",0.25,"woodCrash1",0.25,"woodCrash2",0.25,"woodCrash3",0.25};
		ArmorCrash0[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_01",0.707946,1,150};
		ArmorCrash1[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_02",0.707946,1,150};
		ArmorCrash2[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_03",0.707946,1,150};
		ArmorCrash3[] = {"Ca\sounds\Vehicles\Crash\tank_vehicle_04",0.707946,1,150};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext-tank-diesel-acceleration-1",1.77828,20};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext-tank-diesel-acceleration-1",1.77828,1,35};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\wx_us_m5a1\Sound\Stuart_Engine01",2.2,1,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"\wx_us_m4a2\Sound\Sherman_EngineIdle02",0.4,1,400};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\noise2",1,1,100};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_01",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_02",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_03",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_04",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_05",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_01",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_02",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_03",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_04",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_05",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
			{
				sound[] = {"",1,1};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"\wx_us_m4a2\Sound\Sherman_Engine04_in",1,1};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"\wx_us_m4a2\Sound\Sherman_EngineIdle02_in",0.2,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\noise2",0.158489,1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_01",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_02",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_03",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_04",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_05",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_01",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_02",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_03",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_04",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_05",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
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
			libTextDesc = "M5A1 Light Tank";
		};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		class Damage
		{
			tex[] = {};
			mat[] = {"wx_us_m5a1\data\wx_us_m5a1.rvmat","wx_us_m5a1\data\wx_us_m5a1_damage.rvmat","wx_us_m5a1\data\wx_us_m5a1_destruct.rvmat","wx_us_m5a1\data\tracks.rvmat","wx_us_m5a1\data\tracks_damage.rvmat","wx_us_m5a1\data\tracks_destruct.rvmat","wx_us_m5a1\data\wheels.rvmat","wx_us_m5a1\data\wheels_damage.rvmat","wx_us_m5a1\data\wheels_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class Turret_1: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "Turret";
						visual = "Turret";
						passThrough = 0.8;
						minimalHit = 0.08;
					};
					class HitGun
					{
						armor = 0.8;
						material = -1;
						name = "Gun_1";
						visual = "Gun_1";
						passThrough = 0;
						minimalHit = 0.08;
					};
				};
				startEngine = 0;
				proxyIndex = 1;
				proxyType = "CPGunner";
				gunnerName = "gunner 37mm M6 with Coaxial MG";
				primaryGunner = 1;
				primaryObserver = 0;
				commanding = 2;
				viewGunnerInExternal = 0;
				forceHidedriver = 1;
				hasGunner = 1;
				gunnerAction = "D30_Commander";
				gunnerInAction = "Truck_Cargo01";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutLow";
				body = "turret_1";
				gun = "Gun_1";
				animationSourceBody = "turret_1";
				animationSourceGun = "Gun_1";
				animationSourceHatch = "HatchGunner";
				gunBeg = "gunBeg_1";
				gunEnd = "gunEnd_1";
				memoryPointGun = "Gun_1_muzzle";
				memoryPointGunnerOptics = "Gunnerview_1";
				memoryPointGunnerOutOptics = "GunnerviewOut_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				selectionFireAnim = "MuzzleFlash01";
				weapons[] = {"wx_us_37mm_m6","wx_us_m5a1_30cal_1"};
				magazines[] = {"wx_us_40Rnd_M63_HE","wx_us_30Rnd_M74_APC","wx_us_27Rnd_M51_AP","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919"};
				soundServo[] = {"\wx_us_m4a2\Sound\TurretMotoriek",0.00316228,1.0};
				GunnerForceOptics = 1;
				gunnerOpticsModel = "\wx_us_m4a2\Optics\M70Fx3";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				visionMode[] = {"Normal"};
				discreteInitIndex = 0;
				discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				maxHorizontalRotSpeed = 0.2;
				maxVerticalRotSpeed = 0.2;
				minElev = -9;
				maxElev = 20;
				initElev = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.1;
					maxFov = 0.3;
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
				};
				class Turrets: Turrets
				{
					class Turret_2: NewTurret
					{
						proxyIndex = 1;
						proxyType = "CPCommander";
						gunnerName = "commander";
						primaryGunner = 0;
						primaryObserver = 1;
						commanding = 3;
						viewGunnerInExternal = 0;
						forceHideGunner = 0;
						forceHideCommander = 0;
						hasGunner = 1;
						body = "turret_2";
						gun = "Gun_2";
						animationSourceBody = "turret_2";
						animationSourceGun = "Gun_2";
						animationSourceHatch = "HatchCommander";
						gunBeg = "gunBeg_2";
						gunEnd = "gunEnd_2";
						memoryPointGun = "Gun_2_muzzle";
						memoryPointGunnerOptics = "Gunnerview_2";
						memoryPointGunnerOutOptics = "GunnerviewOut_2";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						selectionFireAnim = "muzzleflash02";
						gunnerInAction = "Landrover_Gunner";
						gunnerAction = "ZSU_CommanderOut";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\wx_us_m4a2\optics\M6_Periscope";
						gunnerOutOpticsModel = "";
						GunnerForceOptics = 1;
						memoryPointCamera = "zamerny";
						extCameraPosition[] = {0,2,-10};
						groupCameraPosition[] = {0,5,-20};
						minElev = -10;
						maxElev = 20;
						initElev = 0;
						minTurn = -70;
						maxTurn = 70;
						initTurn = 0;
						weapons[] = {"FakeWeapon"};
						magazines[] = {};
						startEngine = 0;
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -20;
							maxAngleX = 20;
							initAngleY = 0;
							minAngleY = -100;
							maxAngleY = 100;
							initFov = 0.2;
							minFov = 0.1;
							maxFov = 0.3;
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
						};
					};
				};
			};
			class Turret_3: NewTurret
			{
				proxyIndex = 2;
				proxyType = "CPGunner";
				gunnerName = "hull gunner radio operator";
				commanding = 1;
				primaryGunner = 0;
				primaryObserver = 0;
				viewGunnerInExternal = 0;
				forceHideGunner = 0;
				hasGunner = 1;
				gunnerAction = "BMP2_DriverOut";
				gunnerInAction = "Hilux_Cargo01";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutLow";
				body = "Turret_3";
				gun = "Gun_3";
				animationSourceBody = "Turret_3";
				animationSourceGun = "Gun_3";
				animationSourceHatch = "HatchHullGunner";
				gunBeg = "gunbeg_3";
				gunEnd = "gunend_3";
				memoryPointGun = "Gun_3_muzzle";
				memoryPointGunnerOptics = "Gunnerview_3";
				memoryPointGunnerOutOptics = "GunnerviewOut_3";
				selectionFireAnim = "muzzleflash03";
				soundServo[] = {};
				lockWhenDriverOut = 0;
				startEngine = 0;
				memoryPointsGetInGunner = "pos hullgunner";
				memoryPointsGetInGunnerDir = "pos hullgunner dir";
				gunnerForceOptics = 1;
				gunnerOutForceOptics = 0;
				maxHorizontalRotSpeed = 1.5;
				maxVerticalRotSpeed = 1.5;
				minElev = -20;
				maxElev = 20;
				initElev = 0;
				minTurn = -25;
				maxTurn = 25;
				initTurn = 0;
				weapons[] = {"wx_us_m5a1_30cal_3"};
				magazines[] = {"WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919"};
				visionMode[] = {"Normal"};
				discreteInitIndex = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				gunnerOpticsModel = "\wx_us_m4a2\Optics\M6_Periscope";
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.2;
					minFov = 0.1;
					maxFov = 0.3;
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
				};
			};
		};
	};
	class wx_gb_m5a1: wx_us_m5a1
	{
		faction = "wx_gb";
		crew = "wx_gb_sten";
	};
};
//};
