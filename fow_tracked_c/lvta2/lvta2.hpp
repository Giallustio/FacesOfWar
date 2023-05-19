
	class fow_v_lvta2: Tank_F
	{
		displayName = "LVTA2";
		model = "\fow\fow_tracked\lvta2\fow_us_lvta2";
		faction = "fow_usmc";
		
		editorSubcategory = "fow_tracked";
		
		scope = 1;
		side = 2;
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
		picture = "\fow\fow_tracked\lvta2\data\lvta2_pic.paa";
		Icon = "\fow\fow_tracked\lvta2\data\lvta2_icon.paa";
		mapSize = 11;
		
		attenuationEffectType = "SemiOpenCarAttenuation";
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
		crew = "fow_s_usmc_rifleman";
		transportSoldier = 19;
		//typicalCargo[] = {"WX_USMarines_NCO","WX_USMarines_Garand","WX_USMarines_Garand","WX_USMarines_Medic","WX_USMarines_M1Carbine_AT","WX_USMarines_Greasegun","WX_USMarines_NCO","WX_USMarines_Garand","WX_USMarines_Garand","WX_USMarines_Medic","WX_USMarines_M1Carbine_AT","WX_USMarines_Greasegun","WX_USMarines_NCO","WX_USMarines_Garand","WX_USMarines_Garand","WX_USMarines_Medic","WX_USMarines_M1Carbine_AT","WX_USMarines_Greasegun"};
		cargoAction[] = {"passenger_low01","RHIB_Cargo"};
		cargoInAction[] = {"RHIB_Cargo"};
		//cargoIsCoDriver[] = {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		getInAction = "GetInMedium";
		getOutAction = "GetOutLow";
		driverAction = "driver_offroad01";
		//driverInAction = "AH1Z_Pilot";
		supplyRadius = 1.7;
		animationSourceHatch = "HatchDriver";
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
		
		class HitPoints: HitPoints {
			class HitHull: HitHull {	// Handle internal damage
				armor=0.8;
				material=-1;
				name="hull";
				visual="zbytek";
				passThrough=1;
				minimalHit = 0.14;
				explosionShielding = 2.0;
				radius = 0.2;
			};
			class HitEngine: HitEngine {
				armor=1;
				material=-1;
				name="engine";
				passThrough=0.2;
				minimalHit = 0.24;
				explosionShielding = 1;
				radius = 0.33;
			};
			class HitLTrack: HitLTrack {
				armor=0.5;
				material=-1;
				name="track_l";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack {
				armor=0.5;
				material=-1;
				name="track_r";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
		};		
		
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
			class Top_Hatch_Driver
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Front_Hatch_Driver
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class Top_Hatch_CoDriver
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
			class gun_1_reloadanim
			{
	   			source = "reload";
				weapon = "fow_w_m1919a4_mounted_lvta2_1";
			};
			class gun_1_reloadMagazine
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_mounted_lvta2_1";
			};
			class gun_1_revolving
			{
				source = "revolving";
				weapon = "fow_w_m1919a4_mounted_lvta2_1";
			};
			class gun_1_ammoRandom
			{
				source = "ammoRandom";
				weapon = "fow_w_m1919a4_mounted_lvta2_1";
			};
			class gun_2_reloadanim
			{
	   			source = "reload";
				weapon = "fow_w_m1919a4_mounted_lvta2_2";
			};
			class gun_2_reloadmagazine
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_mounted_lvta2_2";
			};
			class gun_2_revolving
			{
				source = "revolving";
				weapon = "fow_w_m1919a4_mounted_lvta2_2";
			};
			class gun_2_ammoRandom
			{
				source = "ammoRandom";
				weapon = "fow_w_m1919a4_mounted_lvta2_2";
			};
			/*class Reload_Portside
			{
				source = "reload";
				weapon = "fow_w_m1919a4_mounted";
			};
			class Reload_Starboard
			{
				source = "reload";
				weapon = "fow_w_m1919a4_mounted";
			};
			class ReloadMagazine_Portside
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_mounted";
			};
			class ReloadMagazine_Starboard
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_mounted";
			};
			class M1919_Portside_Cover
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_mounted";
			};
			class M1919_Starboard_Cover
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_mounted";
			};
			class M1919_Portside_Ammo_Belt_hide
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_mounted";
			};
			class M1919_Starboard_Ammo_Belt_hide
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_mounted";
			};
			class M1919_Portside_Ammo_Box_hide
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_mounted";
			};
			class M1919_Starboard_Ammo_Box_hide
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_mounted";
			};
			class M1919_Portside_Shake
			{
				source = "reload";
				weapon = "fow_w_m1919a4_mounted";
			};
			class M1919_Starboard_Shake
			{
				source = "reload";
				weapon = "fow_w_m1919a4_mounted";
			};*/
		};
		actionBegin1 = "Open_TopHatch_Driver";
		actionEnd1 = "close_TopHatch_Driver";
		actionBegin2 = "Open_FrontHatch_Driver";
		actionEnd2 = "close_FrontHatch_Driver";
		actionBegin3 = "Open_TopHatch_CoDriver";
		actionEnd3 = "close_TopHatch_CoDriver";
		class UserActions
		{
			class Open_TopHatch_Driver
			{
				showWindow = 0;
				priority = 10;
				displayName = "Open Drivers Top Hatch";
				position = "Top_Hatch_Driver_pos";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Top_Hatch_Driver"" < 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Top_Hatch_Driver"", 1]";
			};
			class Close_TopHatch_Driver
			{
				showWindow = 0;
				priority = 10;
				displayName = "Close Drivers Top Hatch";
				position = "Top_Hatch_Driver_pos";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Top_Hatch_Driver"" > 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Top_Hatch_Driver"", 0]";
			};
			class Open_FrontHatch_Driver
			{
				showWindow = 0;
				priority = 11;
				displayName = "Open Drivers Front Hatch";
				position = "Front_Hatch_Driver_axis";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Front_Hatch_Driver"" < 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Front_Hatch_Driver"", 1]";
			};
			class Close_FrontHatch_Driver
			{
				showWindow = 0;
				priority = 11;
				displayName = "Close Drivers Front Hatch";
				position = "Front_Hatch_Driver_axis";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Front_Hatch_Driver"" > 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""Front_Hatch_Driver"", 0]";
			};
			class Open_TopHatch_CoDriver
			{
				showWindow = 0;
				priority = 9;
				displayName = "Open CoDrivers Top Hatch";
				position = "Hatch_CoDriver_pos";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Top_Hatch_CoDriver"" < 0.5) && (alive this)";
				statement = "this animate [""Top_Hatch_CoDriver"", 1]";
			};
			class Close_TopHatch_CoDriver
			{
				showWindow = 0;
				priority = 9;
				displayName = "Close CoDrivers Top Hatch";
				position = "Top_Hatch_CoDriver_pos";
				radius = 3;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""Top_Hatch_CoDriver"" > 0.5) && (alive this)";
				statement = "this animate [""Top_Hatch_CoDriver"", 0]";
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
			libTextDesc = "LVTA2";
		};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		class Damage
		{
			tex[] = {};
			mat[] = {"fow\fow_tracked\lvta2\data\wx_us_lvta2.rvmat","fow\fow_tracked\lvta2\data\wx_us_lvta2.rvmat","fow\fow_tracked\lvta2\data\wx_us_lvta2_destruct.rvmat","fow\fow_tracked\lvta2\data\wx_us_lvta2_tracks.rvmat","fow\fow_tracked\lvta2\data\wx_us_lvta2_tracks.rvmat","fow\fow_tracked\lvta2\data\wx_us_lvta2_tracks_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class Tuuret_1: NewTurret
			{
				proxyIndex = 1;
				proxyType = "CPCommander";
				commanderUsesPilotView = 1;
				primaryGunner = 1;
				primaryObserver = 1;
				commanding = 3;
				viewGunnerInExternal = 1;
				hasGunner = 1;
				gunnerName = "Portside Gunner";
				gunBeg = "gun_1_beg";
				gunEnd = "gun_1_end";
				memoryPointGun = "gun_1_muzzle";
				forceHidegunner = 1;
				GunnerForceOptics = 0;
				gunnerUsesPilotView = 0;
				gunnerOutOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsEffect[] = {};
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerOpticsEffect[] = {};
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerOpticsShowCursor = 0;
				stabilizedInAxes = "StabilizedInAxesNone";
				body = "turret_1";
				gun = "gun_1";
				animationSourceBody = "turret_1";
				animationSourceGun = "gun_1";
				selectionFireAnim = "gun_1_muzzleFlash";
				memoryPointGunnerOptics = "gunnerview_1";
				memoryPointGunnerOutOptics = "";
				memoryPointsGetInGunner = "pos gunner portside";
				memoryPointsGetInGunnerDir = "pos gunner portside dir";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					initAngleX = 0;
					minAngleX = -70;
					maxAngleX = 70;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
				};
				class ViewGunner: ViewGunner
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
				};
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -40;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
				};
				extCameraPosition[] = {0,2,-10};
				groupCameraPosition[] = {0,5,-20};
				weapons[] = {"fow_w_m1919a4_mounted_lvta2_1"};
				magazines[] = {"fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919"};
				getInRadius = 1.0;
				gunnerAction = "gunner_standup01";
				//gunnerInAction = "RHIB_Gunner";
				ejectDeadGunner = 0;
				minTurn = -30;
				maxTurn = 30;
				initTurn = 0;
				minElev = -15;
				maxElev = 45;
				initElev = 0;
				maxHorizontalRotSpeed = 0.8;
				maxVerticalRotSpeed = 0.8;
				soundServo[] = {"",0.00316228,1};
			};
			class Turret_2: NewTurret
			{
				proxyIndex = 1;
				proxyType = "CPGunner";
				primaryGunner = 0;
				primaryObserver = 0;
				commanding = 2;
				hasGunner = 1;
				hideProxyInCombat = "false";
				viewGunnerInExternal = 1;
				gunnerName = "Starboard Gunner";
				gunBeg = "gun_2_beg";
				gunEnd = "gun_2_end";
				memoryPointGun = "gun_2_muzzle";
				forceHidegunner = 1;
				GunnerForceOptics = 0;
				gunnerUsesPilotView = 1;
				gunnerOutOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsEffect[] = {};
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerOpticsEffect[] = {};
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerOpticsShowCursor = 0;
				stabilizedInAxes = "StabilizedInAxesNone";
				body = "turret_2";
				gun = "gun_2";
				animationSourceBody = "turret_2";
				animationSourceGun = "gun_2";
				selectionFireAnim = "gun_2_muzzleFlash";
				memoryPointGunnerOptics = "gunnerview_2";
				memoryPointGunnerOutOptics = "";
				memoryPointsGetInGunner = "pos gunner starboard";
				memoryPointsGetInGunnerDir = "pos gunner starboard dir";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class ViewGunner: ViewGunner
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class HeadLimits: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -40;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
				};
				extCameraPosition[] = {0,2,-10};
				weapons[] = {"fow_w_m1919a4_mounted_lvta2_2"};
				magazines[] = {"fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919"};
				getInRadius = 1.0;
				gunnerAction = "gunner_standup01";
				//gunnerInAction = "RHIB_Gunner";
				ejectDeadGunner = 0;
				minTurn = -30;
				maxTurn = 30;
				initTurn = 0;
				minElev = -15;
				maxElev = 45;
				initElev = 0;
				maxHorizontalRotSpeed = 0.8;
				maxVerticalRotSpeed = 0.8;
				soundServo[] = {"",0.00316228,1};
			};
		};/*
		class Turrets
		{
			class LVTA2_Turret_Portside: NewTurret
			{
				proxyIndex = 1;
				proxyType = "CPCommander";
				gunnerUsesPilotView = 1;
				commanderUsesPilotView = 1;
				primaryGunner = 1;
				primaryObserver = 1;
				commanding = 3;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				hasGunner = 1;
				gunnerAction = "Landrover_Gunner";
				gunnerInAction = "Landrover_Gunner";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Portside Gunner";
				gunBeg = "M1919_Portside_beg";
				gunEnd = "M1919_Portside_end";
				memoryPointGun = "M1919_Portside_muzzle";
				body = "M1919_Portside_Traverse";
				gun = "M1919_Portside_Elevation";
				animationSourceBody = "M1919_Portside_Traverse";
				animationSourceGun = "M1919_Portside_Elevation";
				selectionFireAnim = "M1919_Portside_Zasleh";
				memoryPointGunnerOptics = "M1919_Portside_Sight";
				memoryPointGunnerOutOptics = "M1919_Portside_weaponview";
				memoryPointsGetInGunner = "pos gunner portside";
				memoryPointsGetInGunnerDir = "pos gunner portside dir";
				weapons[] = {"WX_M1919_Portside"};
				magazines[] = {"WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919"};
				startEngine = 0;
				soundServo[] = {""};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				visionMode[] = {"Normal"};
				discreteInitIndex = 0;
				discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				maxHorizontalRotSpeed = 1;
				maxVerticalRotSpeed = 1;
				minTurn = -40;
				maxTurn = 40;
				minElev = -9;
				maxElev = 40;
				initElev = 0;
				extCameraPosition[] = {0,2,-10};
				groupCameraPosition[] = {0,5,-20};
				class ViewOptics
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
				class ViewGunner
				{
					initFov = 0.3;
					minFov = 0.2;
					maxFov = 0.4;
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
				};
				class HeadLimits
				{
					initAngleX = 5;
					minAngleX = -40;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
				};
			};
			class LVTA2_Turret_Starboard: NewTurret
			{
				proxyIndex = 1;
				proxyType = "CPGunner";
				gunnerUsesPilotView = 1;
				commanderUsesPilotView = 1;
				primaryGunner = 0;
				primaryObserver = 0;
				commanding = 2;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				hasGunner = 1;
				gunnerAction = "Landrover_Gunner";
				gunnerInAction = "Landrover_Gunner";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutLow";
				gunnerName = "Starboard Gunner";
				gunBeg = "M1919_Starboard_beg";
				gunEnd = "M1919_Starboard_end";
				memoryPointGun = "M1919_Starboard_muzzle";
				body = "M1919_Starboard_Traverse";
				gun = "M1919_Starboard_Elevation";
				animationSourceBody = "M1919_Starboard_Traverse";
				animationSourceGun = "M1919_Starboard_Elevation";
				selectionFireAnim = "M1919_Starboard_Zasleh";
				memoryPointGunnerOptics = "M1919_Starboard_Sight";
				memoryPointGunnerOutOptics = "M1919_Starboard_weaponview";
				memoryPointsGetInGunner = "pos gunner Starboard";
				memoryPointsGetInGunnerDir = "pos gunner Starboard dir";
				weapons[] = {"fow_w_m1919a4_mounted"};
				magazines[] = {"WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919","WX_US_250Rnd_M1919"};
				startEngine = 0;
				soundServo[] = {"",1,1};
				gunnerForceOptics = 0;
				gunnerOutForceOptics = 0;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				visionMode[] = {"Normal"};
				discreteInitIndex = 0;
				discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				maxHorizontalRotSpeed = 1;
				maxVerticalRotSpeed = 1;
				minTurn = -40;
				maxTurn = 40;
				minElev = -9;
				maxElev = 40;
				initElev = 0;
				class ViewOptics
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
				class ViewGunner
				{
					initFov = 0.3;
					minFov = 0.2;
					maxFov = 0.4;
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
				};
				class HeadLimits
				{
					initAngleX = 5;
					minAngleX = -40;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
				};
				extCameraPosition[] = {0,2,-10};
				groupCameraPosition[] = {0,5,-20};
			};
		};
	*/
	};

	class fow_v_lvta2_usmc: fow_v_lvta2 {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_rifleman";
		typicalCargo[] = {"fow_s_usmc_rifleman","fow_s_usmc_rifleman"};
	};
	class fow_v_lvta2_usa: fow_v_lvta2 {
		scope = 2;
		faction = "fow_usa";
		crew = "fow_s_us_rifleman";
		typicalCargo[] = {"fow_s_us_rifleman","fow_s_us_rifleman"};
	};
	class fow_v_lvta2_usa_p: fow_v_lvta2 {
		scope = 2;
		faction = "fow_usa_p";
		crew = "fow_s_us_p_rifleman";
		typicalCargo[] = {"fow_s_us_p_rifleman","fow_s_us_p_rifleman"};
	};

