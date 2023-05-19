	
	class fow_lcm3: Boat_F {
		scope = 1;
		faction = "fow_usmc";
		displayName = "LCM3";
		side = 2;
		model = "\fow\fow_boats\lcm3\wx_lcm3";
		cost		= 20000; /// how likely is the enemy going to target this vehicle
		accuracy	= 0.50; /// knowledge required to recognize this type of target
		crew = "fow_s_usmc_coxswain";
		
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "hull";
				visual = "hull";
				passThrough = 1;
				minimalHit = 0.03;
			};
			class HitFuel {
				armor = 0.8;
				material = -1;
				name = "fuel";
				visual = "fuel";
				passThrough = 0;
			};
			class HitEngine	{
				armor = 1;
				material = -1;
				name = "engine";
				visual = "engine";
				passThrough = 0.2;
			};
			class HitGun {
				armor = 0.6;
				material = 52;
				name = "gun";
				visual = "gun";
				passThrough = 1;
			};
		};

		simulation					= "shipx";  /// all ships should have this simulation
		maxSpeed					= 22;		/// top speed of the vehicle
		overSpeedBrakeCoef			= 0.2;		/// how much does the vehicle itself brake in case it goes faster than maxSpeed
		enginePower					= 500;		/// power of engine in kW
		engineShiftY				= -0.1;		/// relative virtual position of engine for PhysX, affects lateral ship slope during turns
		waterLeakiness				= 1.0;		/// amount of litres per second that leaks into ship if under water, destroyed or turned upside down
		turnCoef 					= 0.75; 	/// how well is the ship able to turn
		thrustDelay 				= 0.2;		/// initial delay to cause lesser slip when on 1st gear - thrust goes from zero to full in this time
		waterLinearDampingCoefY 	= 5;		/// affect how fast does the ship go through waves down - higher values make it drift more on top of waves
		waterLinearDampingCoefX 	= 2.0;		/// affects sliding of the ship in turns
		waterAngularDampingCoef 	= 1.2;		/// increase this for smoother movement, but beware too high values
		waterResistanceCoef 		= 0.015;	/// how much does water slow the ship down
		
		//Turning speed
		rudderForceCoef				= 0.600000;	/// increase this to gain more turning on lower speeds
		rudderForceCoefAtMaxSpeed	= 0.203000;	/// increase this to gain more turning on higher speeds
		idleRpm = 200;							/// revolutions per minute at which the engine idles
		redRpm = 1200;							/// maximum revolutions per minute of the engine
		class complexGearbox
		{
			GearboxRatios[]    = {
				"R1",-0.782,
				"N",0,
				"D1",2.0,
				"D2",1.85,
				"D3",1.75
			};
			TransmissionRatios[] = {"High",1.0}; // Optional: defines transmission ratios (for example, High and Low range as commonly found in offroad vehicles)
			gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
			moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
			driveString        = "D"; // string to display in the HUD for forward gears.
			neutralString      = "N"; // string to display in the HUD for neutral gear.
			reverseString      = "R"; // string to display in the HUD for reverse gears.
		};

		primaryObserver = 2;
		driverName = "Coxswain";
		proxyIndex = 1;
		hideProxyInCombat = "false";
		proxyType = "CPDriver";
		driverAction = "RHIB_Driver";
		driverInAction = "RHIB_Driver";
		cargoAction[] = {"RHIB_Cargo"};
		cargoInAction[] = {"RHIB_Cargo"};
		getInRadius = 10;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		hasGunner = 1;
		castDriverShadow = 1;
		castCargoShadow = 1;
		gunnerHasFlares = 0;
		enableGPS = 0;
		transportSoldier = 60;
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInCargoDir = "pos cargo dir";
		memoryPointsGetInDriverDir = "pos driver dir";
		memoryPointsLeftWaterEffect = "waterEffectL";
		memoryPointsRightWaterEffect = "waterEffectR";
		typicalCargo[] = {};
		supplyRadius = 3;
		extCameraPosition[] = {0,4.0,-28.0};
		armor = 300;
		DriverForceOptics = 0;
		memoryPointDriverOptics = "driverview";
		memoryPointDriverOutOptics = "driveroutview";
		pointPilot = "pilot";
		pointCommander = "velitel";
		class ViewOptics: ViewOptics {
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
			initAngleX = 0;
			minAngleX = -90;
			maxAngleX = 90;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};
		class ViewPilot: ViewPilot {
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
			initAngleX = 0;
			minAngleX = -120;
			maxAngleX = 120;
			initAngleY = 0;
			minAngleY = -89;
			maxAngleY = 89;
		};
		class AnimationSources {
			class Ramp {
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class Ramp_hatch_01
			{
				source="user";
				animPeriod=3;
				initPhase = 0;
			};
			class Reload_Portside {
				source = "reload";
				weapon = "fow_w_m1919a4_mounted";
			};
			class Reload_Starboard {
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
			};
		};
		class UserActions
		{
			class Open_ramp
			{
				showWindow = 0;
				priority = 2;
				displayName = "Lower Ramp";
				position = "steeringwheel_axis";
				radius = 2.0;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Ramp"" < 0.5";
				statement = "this animate [""Ramp"", 1];this say3d ""fow_lcvp_ramp_lower""";
			};
			class Close_ramp
			{
				showWindow = 0;
				priority = 3;
				displayName = "Raise Ramp";
				position = "steeringwheel_axis";
				radius = 2.0;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Ramp"" >= 0.5";
				statement = "this animate [""Ramp"", 0];this say3d ""fow_lcvp_ramp_raise""";
			};
			class Open_hatch
			{
				showWindow = 0;
				priority = 2;
				displayName = "Open Hatch";
				position = "steeringwheel_axis";
				radius = 2.0;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Ramp_hatch_01"" < 0.5";
				statement = "this animate [""Ramp_hatch_01"", 1]";
			};
			class Close_hatch
			{
				showWindow = 0;
				priority = 3;
				displayName = "Close Hatch";
				position = "steeringwheel_axis";
				radius = 2.0;
				onlyForPlayer = 1;
				condition = "this animationPhase ""Ramp_hatch_01"" >= 0.5";
				statement = "this animate [""Ramp_hatch_01"", 0]";
			};
		};
		soundEnviron[] = {"",0.0562341,0.9};
		class SoundEvents{};
		insideSoundCoef = 1;
		/*soundEngineOnInt[] = {"fow\fow_sounds\boats\lcvp\LCVP_Start_In",0.1,1.0};
		soundEngineOnExt[] = {"fow\fow_sounds\boats\lcvp\LCVP_Start_In",1.0,1.0,150};
		soundEngineOffInt[] = {"fow\fow_sounds\boats\lcvp\LCVP_ShutDown_In",0.1,1.0};
		soundEngineOffExt[] = {"fow\fow_sounds\boats\lcvp\LCVP_ShutDown_In",1.0,1.0,150};*/
		class Sounds
		{
			class IdleOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-idle-2",0.5011872,1.0,300};
				frequency = "0.95	+	((rpm/	1200) factor[(100/	1200),(300/	1200)])*0.15";
				volume = "engineOn*(((rpm/	1200) factor[(0/	1200),(30/	1200)])	*	((rpm/	1200) factor[(500/	1200),(300/	1200)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-low-2",0.63095737,1.0,450};
				frequency = "0.95	+	((rpm/	1200) factor[(300/	1200),(600/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(150/	1200),(250/	1200)])	*	((rpm/	1200) factor[(600/	1200),(400/	1200)]))";
			};
			class EngineMidOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-mid-2",0.7943282,1.0,500};
				frequency = "0.95	+		((rpm/	1200) factor[(600/	1200),(900/	1200)])*0.2";
				volume = "engineOn*(((rpm/	1200) factor[(350/	1200),(500/	1200)])	*	((rpm/	1200) factor[(1000/	1200),(700/	1200)]))";
			};
			class EngineMaxOut
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\Boat_Armed_01\Boat_Armed_01-high-2",1.0,1.0,600};
				frequency = "0.95	+	((rpm/	1200) factor[(700/	1200),(1000/	1200)])*0.2";
				volume = "engineOn*((rpm/	1200) factor[(800/	1200),(1200/	1200)])";
			};
			class WaternoiseOutW0
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",0.70794576,1.0,150};
				frequency = "1";
				volume = "(speed factor[4, 1]) * water";
			};
			class WaternoiseOutW1
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",0.7943282,1.0,250};
				frequency = "1";
				volume = "((speed factor[2, 6]) min (speed factor[6, 4]))";
			};
			class WaternoiseOutW2
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1.0,1.0,350};
				frequency = "1";
				volume = "(speed factor[3, 9])";
			};
			class WaternoiseOutW3
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-0-speed1",0.70794576,1.0,150};
				frequency = "1";
				volume = "(speed factor[-4, -1]) * water";
			};
			class WaternoiseOutW4
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",0.7943282,0.9,250};
				frequency = "1";
				volume = "((speed factor[-2, -6]) min (speed factor[-6, -4]))";
			};
			class WaternoiseOutW5
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",1.0,0.9,350};
				frequency = "1";
				volume = "(speed factor[-3, -9])";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\vehicles\boat\noises\boat_land_on_shallow",1.7782794,0.9,100};
				frequency = 1;
				volume = "(scrubLand factor[0.01, 0.20])";
			};
		};
		class Turrets: Turrets
		{
			class M1919_Portside: NewTurret
			{
				primaryGunner = 0;
				primaryObserver = 1;
				proxyIndex = 1;
				hideProxyInCombat = "false";
				proxyType = "CPGunner";
				viewGunnerInExternal = 1;
				gunnerName = "Portside Gunner";
				gunBeg = "M1919_Portside_Beg";
				gunEnd = "M1919_Portside_End";
				memoryPointGun = "M1919_Portside_Muzzle";
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
				body = "M1919_Portside_Traverse";
				gun = "M1919_Portside_Elevation";
				animationSourceBody = "M1919_Portside_Traverse";
				animationSourceGun = "M1919_Portside_Elevation";
				selectionFireAnim = "M1919_Portside_Zasleh";
				memoryPointGunnerOptics = "M1919_Portside_Sight";
				memoryPointGunnerOutOptics = "M1919_Portside_weaponview";
				memoryPointsGetInGunner = "pos gunner portside";
				memoryPointsGetInGunnerDir = "pos gunner portside dir";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				class ViewOptics: ViewOptics
				{
					initFov = 0.3;
					minFov = 0.2;
					maxFov = 0.7;
					initAngleX = 0;
					minAngleX = -70;
					maxAngleX = 70;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
				};
				class ViewGunner: ViewGunner
				{
					initFov = 0.3;
					minFov = 0.2;
					maxFov = 0.7;
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
				weapons[] = {"fow_w_m1919a4_mounted_lcvp_ps"};
				magazines[] = {"fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919"};
				getInRadius = 1.0;
				gunnerAction = "gunner_standup01";
				//gunnerInAction = "RHIB_Gunner";
				ejectDeadGunner = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				minElev = -15;
				maxElev = 45;
				initElev = 0;
				maxHorizontalRotSpeed = 0.8;
				maxVerticalRotSpeed = 0.8;
				soundServo[] = {"",0.00316228,1};
			};
			class M1919_Starboard: NewTurret
			{
				primaryGunner = 0;
				primaryObserver = 0;
				proxyIndex = 2;
				hideProxyInCombat = "false";
				proxyType = "CPGunner";
				viewGunnerInExternal = 1;
				gunnerName = "Starboard Gunner";
				gunBeg = "M1919_Starboard_Beg";
				gunEnd = "M1919_Starboard_End";
				memoryPointGun = "M1919_Starboard_Muzzle";
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
				body = "M1919_Starboard_Traverse";
				gun = "M1919_Starboard_Elevation";
				animationSourceBody = "M1919_Starboard_Traverse";
				animationSourceGun = "M1919_Starboard_Elevation";
				selectionFireAnim = "M1919_starboard_zasleh";
				memoryPointGunnerOptics = "M1919_Starboard_sight";
				memoryPointGunnerOutOptics = "M1919_Starboard_weaponview";
				memoryPointsGetInGunner = "pos gunner starboard";
				memoryPointsGetInGunnerDir = "pos gunner starboard dir";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				class ViewOptics: ViewOptics
				{
					initFov = 0.3;
					minFov = 0.2;
					maxFov = 0.7;
					initAngleX = 0;
					minAngleX = -70;
					maxAngleX = 70;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
				};
				class ViewGunner: ViewGunner
				{
					initFov = 0.3;
					minFov = 0.2;
					maxFov = 0.7;
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
				weapons[] = {"fow_w_m1919a4_mounted_lcvp_sb"};
				magazines[] = {"fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919"};
				getInRadius = 1.0;
				gunnerAction = "gunner_standup01";
				//gunnerInAction = "RHIB_Gunner";
				ejectDeadGunner = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				minElev = -15;
				maxElev = 45;
				initElev = 0;
				maxHorizontalRotSpeed = 0.8;
				maxVerticalRotSpeed = 0.8;
				soundServo[] = {"",0.00316228,1};
			};
		};
		class Library
		{
			libTextDesc = "LCVP";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"fow\fow_boats\lcvp\data\WX_LCVP.rvmat","fow\fow_boats\lcvp\data\WX_LCVP.rvmat","fow\fow_boats\lcvp\data\WX_LCVP_Destruct.rvmat"};
		};
	};
	class fow_usmc_lcm3: fow_lcm3 {
		scope = 2;
	};
	class fow_usa_lcm3: fow_lcm3 {
		scope = 2;
		faction = "fow_usa";
	};