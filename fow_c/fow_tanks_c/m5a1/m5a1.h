
	class fow_v_m5a1: Tank_F {
		displayName = "M5A1 Stuart";
		model = "\fow\fow_tanks\m5a1\m5a1";
		faction = "fow_usa";
		//vehicleclass = "wx_armored";
		selectionLeftOffset = "pasanimL";
		selectionRightOffset = "pasanimP";
		scope = 1;
		side = 2;
		commanderCanSee = "2+4+8+16";
		gunnerCanSee = "2+4+8+16";
		driverCanSee = "2+4+8+16";
		proxyType = "CPDriver";
		proxyIndex = 1;
		commanding = 0;
		//forceHidedriver = 0;
		//hideProxyInCombat = 1;//driver visible
		crew = "fow_s_us_crewman";
		typicalCargo[] = {};
		accuracy = 0.7;
		picture = "\fow\fow_tanks\m4a2\data\wx_us_m4a2_picture.paa";
		Icon = "\fow\fow_tanks\m4a2\data\wx_us_m4a2_icon.paa";
		mapSize = 11;
		armor = 320;
		minimalHit = 0.08;
		//forceHideGunner = 0;
		class TransportMagazines{};
		transportAmmo = 0;
		supplyRadius = 1.7;
		canFloat = 0;
		threat[] = {0.45,0.4,0.1};
		cost = 1000000;
		getInAction = "GetInMedium";
		getOutAction = "GetOutLow";
		driverAction = "driver_apctracked3_out";
		driverInAction = "driver_apctracked3_in";
		animationSourceHatch = "HatchDriver";
		preferRoads = 0;
		insideSoundCoef = 0.9;
		outsideSoundFilter = 1;
		occludeSoundsWhenIn = 0.01;
		obstructSoundsWhenIn = 0.177828;
		memoryPointTrack1L = "Stopa LL";
		memoryPointTrack1R = "Stopa LR";
		memoryPointTrack2L = "Stopa RL";
		memoryPointTrack2R = "Stopa RR";
		driverForceOptics = 1;
		driverOpticsModel = "\fow\fow_tanks\m4a2\Optics\M6_Periscope";
		driverOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
		memoryPointDriverOutOptics = "driverview";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_tanks\m5a1\data\wx_us_m5a1_co.paa"};
		
		turnCoef = 2;
		#include "physX.h"
	
		class ViewOptics: ViewOptics
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
					minFov = 0.75;
					maxFov = 0.75;
					initFov = 0.75;
		};
		class ViewPilot
		{
					minFov = 0.75;
					maxFov = 0.75;
					initFov = 0.75;
			initAngleX = 0;
			minAngleX = -80;
			maxAngleX = 80;
			initAngleY = 0;
			minAngleY = -110;
			maxAngleY = 110;
		};
		extCameraPosition[] = {0,2,-10};
		groupCameraPosition[] = {0,5,-20};

		class AnimationSources
		{
			class gun_1_recoil_cannon {source = "reload";weapon = "fow_w_37mm_M6";};
			class gun_1_recoil_MG {source = "reload";weapon = "fow_w_m1919a4_mounted";};
			class gun_2_recoil {source = "reload";weapon = "fow_w_m1919a4_mounted";};
			class gun_3_recoil {source = "reload";weapon = "fow_w_m1919a4_mounted";};
			class gun_1_muzzle {source = "ammorandom"; weapon = "fow_w_37mm_M6";};
			class gun_2_muzzle {source = "ammorandom"; weapon = "fow_w_m1919a4_mounted";};
			class gun_3_muzzleG {source = "ammorandom"; weapon = "fow_w_m1919a4_mounted_m4a2_3";};
		};
		class HitPoints: HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "hull";
				visual = "zbytek";
				passThrough = 1;
				minimalHit = 0.15;
				explosionShielding = 0.2;
				radius = 0.2;
			};
			class HitEngine
			{
				armor = 0.3;
				material = -1;
				name = "engine";
				visual = "engine";
				passThrough = 0.5;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.2;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "fuel";
				visual = "fuel";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.2;
			};
			class HitAmmo
			{
				armor = 1;
				material = -1;
				name = "ammo";
				visual = "ammo";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.2;
			};
			class HitLTrack
			{
				armor = 0.3;
				material = -1;
				name = "track_l";
				visual = "track_l";
				passThrough = 0.1;
				minimalHit = 0.25;
				explosionShielding = 0.25;
				radius = 0.2;
			};
			class HitRTrack
			{
				armor = 0.3;
				material = -1;
				name = "track_r";
				visual = "track_r";
				passThrough = 0.1;
				minimalHit = 0.2;
				explosionShielding = 0.25;
				radius = 0.2;
			};
		};
	
		soundGear[] = {"",5.62341e-005,1};
		soundGetIn[] = {"\fow\fow_tanks\m4a2\Sound\Get_In",0.562341,1};
		soundGetOut[] = {"\fow\fow_tanks\m4a2\Sound\Get_Out",0.562341,1,35};
		soundEngineOnInt[] = {"\fow\fow_tanks\m4a2\Sound\Engine_On",1,1};
		soundEngineOnExt[] = {"\fow\fow_tanks\m4a2\Sound\Engine_On",2.51189,1,35};
		soundEngineOffInt[] = {"\fow\fow_tanks\m4a2\Sound\Engine_Off",1,1};
		soundEngineOffExt[] = {"\fow\fow_tanks\m4a2\Sound\Engine_Off",1,0.8,35};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1.0, 1, 200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		
		#include "sounds.h"
		
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

		class Library
		{
			libTextDesc = "M5A1 Medium Tank";
		};
		smokeLauncherGrenadeCount = 0;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		class Damage
		{
			tex[] = {};
			mat[] = {"fow\fow_tanks\m4a2\data\wx_us_m4a2.rvmat","fow\fow_tanks\m4a2\data\wx_us_m4a2_damage.rvmat","fow\fow_tanks\m4a2\data\wx_us_m4a2_destruct.rvmat","fow\fow_tanks\m4a2\data\tracks.rvmat","fow\fow_tanks\m4a2\data\tracks_damage.rvmat","fow\fow_tanks\m4a2\data\tracks_destruct.rvmat","fow\fow_tanks\m4a2\data\sprocket.rvmat","fow\fow_tanks\m4a2\data\sprocket_damage.rvmat","fow\fow_tanks\m4a2\data\sprocket_destruct.rvmat","fow\fow_tanks\m4a2\data\wheel.rvmat","fow\fow_tanks\m4a2\data\wheel_damage.rvmat","fow\fow_tanks\m4a2\data\wheel_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						animationSourceHatch = "HatchCommander";
						memoryPointGunnerOptics = "Gunnerview_2";
						memoryPointGunnerOutOptics = "GunnerviewOut_2";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						gunnerOpticsModel = "\fow\fow_tanks\m4a2\optics\M6_Periscope";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						GunnerForceOptics = 1;
						//gunBeg = "Usti hlavne2";
						//gunEnd = "Konec hlavne2";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {};
						magazines[] = {};
						//soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",1.0,1,30};
						//soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_comm",1.0,1,30};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						gunnerAction = "commander_mbt3_out";
						gunnerInAction = "commander_mbt3_in";
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						//discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						//discreteDistanceInitIndex = 2;
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						class dynamicViewLimits
						{
							MainTurret[] = {-135,75};
						};
						minOutElev = -10;
						maxOutElev = 15;
						initOutElev = 0;
						minOutTurn = -135;
						maxOutTurn = 90;
						initOutTurn = 0;
						class ViewGunner: ViewCargo{};
						class ViewOptics: ViewOptics
						{
							initAngleX = 0;
							minAngleX = -70;
							maxAngleX = 90;
							initAngleY = 0;
							minAngleY = -360;
							maxAngleY = 360;
							minFov = 0.75;
							maxFov = 0.75;
							initFov = 0.75;
							visionMode[] = {"Normal"};
							//thermalMode[] = {2,3};
						};
						/*class OpticsIn: Optics_Commander_02
						{
							class Wide: Wide{};
							class Medium: Medium{};
							class Narrow: Narrow{};
						};*/
						//turretInfoType = "RscOptics_APC_Wheeled_03_commander";
						showCrewAim = 1;
						startEngine = 0;
						gunnerHasFlares = 1;
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						viewGunnerInExternal = 1;
					};
					class HullGunner: CommanderOptics
					{
						proxyIndex = 2;
						proxyType = "CPGunner";
						gunnerName = "Hull gunner radio operator";
						commanding = 1;
						primaryGunner = 0;
						primaryObserver = 0;
						viewGunnerInExternal = 1;
						forceHideGunner = 0;
						hasGunner = 1;
						driverAction = "driver_apctracked3_out";
						driverInAction = "driver_apctracked3_in";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutLow";
						body = "Turret_3";
						gun = "Gun_3";
						animationSourceBody = "Turret_3";
						animationSourceGun = "Gun_3";
						animationSourceHatch = "HatchHGunner";
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
						maxHorizontalRotSpeed = 1.5;
						maxVerticalRotSpeed = 1.5;
						minElev = -20;
						maxElev = 20;
						initElev = 0;
						minTurn = -25;
						maxTurn = 25;
						initTurn = 0;
						weapons[] = {"fow_w_m1919a4_mounted_m4a2_3"};
						magazines[] = {"fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919"};
						visionMode[] = {"Normal"};
						discreteInitIndex = 1;
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
						discreteDistanceInitIndex = 5;
						gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M6_Periscope";
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						isPersonTurret = 0;
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -100;
							maxAngleX = 100;
							initAngleY = 0;
							minAngleY = -360;
							maxAngleY = 360;
							minFov = 0.75;
							maxFov = 0.75;
							initFov = 0.75;
						};
					};
				};
				// Main gun
				gunBeg = "gunbeg_1";
				gunEnd = "gunend_1";
				gun = "Gun_1";
				body = "Turret_1";
				// Coaxial gun
				memoryPointGun = "Gun_1_muzzle";
				selectionFireAnim = "muzzleflash01";
				
				memoryPointGunnerOptics = "Gunnerview_1";
				memoryPointGunnerOutOptics = "GunnerviewOut_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				
				maxHorizontalRotSpeed = 0.8;//maxHorizontalRotSpeed = "((360/X)/45)";//36 degree/s
				maxVerticalRotSpeed = 0.2;				
				
				gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M70Fx3";
				visionMode[] = {"Normal"};
				gunnerAction = "driver_apctracked3_out";
				gunnerInAction = "driver_apctracked3_in";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				weapons[] = {"fow_w_37mm_M6","fow_w_m1919a4_mounted_m4a2_2"};
				magazines[] = {"fow_40Rnd_37mm_M63_HE","fow_30Rnd_37mm_M74_AP","fow_27Rnd_37mm_M51_APC","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919"};
				soundServo[] = {"\fow\fow_tanks\m4a2\Sound\TurretMotoriek",0.56234133,1.0,50};
				soundServoVertical[] = {"\fow\fow_tanks\m4a2\Sound\TurretMotoriek",0.56234133,1.0,50};
				forceHideGunner = 0;//1
				discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				minElev = -9;
				maxElev = 20;
				initElev = 10;
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;
				inGunnerMayFire = 1;
				viewGunnerInExternal = 1;
				animationSourceBody = "turret_1";
				animationSourceGun = "gun_1";
				animationSourceHatch = "HatchGunner";//HatchGunner
				//isPersonTurret = 0;
				//personTurretAction = "vehicle_turnout_1";
				class dynamicViewLimits
				{
					CommanderOptics[] = {-65,90};
				};
				minOutElev = -10;
				maxOutElev = 15;
				initOutElev = 0;
				minOutTurn = -135;
				maxOutTurn = 90;
				initOutTurn = 0;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					minFov = 0.75;
					maxFov = 0.75;
					initFov = 0.75;
				};
				/*class OpticsIn: Optics_Gunner_MBT_03
				{
					class Wide: Wide{};
					class Medium: Medium{};
					class Narrow: Narrow{};
				};*/
				//turretInfoType = "RscOptics_MBT_03_gunner";
				showCrewAim = 2;
				/*class TurnOut
				{
					limitsArrayTop[] = {{20.1126,-107.5349},{19.8932,99.3177}};
					limitsArrayBottom[] = {{-9.1273,-108.1836},{-7.1046,-44.255},{-9.1675,31.4978},{-9.0505,102.8447}};
				};
				class TurnIn: TurnOut
				{
					limitsArrayTop[] = {{19.9995,-180.0},{19.9985,180.0}};
					limitsArrayBottom[] = {{-2.0,-180.0},{-1.0,-154.4525},{-5.8805,-82.7116},{-4.582,20.7562},{-4.582,-20.7562},{-5.8805,82.7116},{-1.0,153.1266},{-2.0,180.0}};
				};*/
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "turret_1";
						visual = "turret_1";
						passThrough = 0.8;
						minimalHit = 0.2;
						radius = 0.2;
					};
					class HitGun
					{
						armor = 0.8;
						material = -1;
						name = "gun_1";
						visual = "gun_1";
						passThrough = 0;
						minimalHit = 0.2;
						radius = 0.1;
					};
				};
			};
		};
		
		
		
		
	};

	class fow_v_m5a1_usmc: fow_v_m5a1 {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_crewman";
		hiddenSelectionsTextures[] = {"\fow\fow_tanks\m5a1\data\wx_us_m5a1_usmc_co.paa"};
	};
	class fow_v_m5a1_usa: fow_v_m5a1 {
		scope = 2;
	};