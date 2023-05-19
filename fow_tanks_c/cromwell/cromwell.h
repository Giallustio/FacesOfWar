
	class fow_v_cromwell: Tank_F {
		displayName = "Cromwell";
		model = "\fow\fow_tanks\cromwell\cromwell";
		faction = "fow_uk";
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
		forceHidedriver = 1;
		viewDriverInExternal = 1;
		//hideProxyInCombat = 1;//driver visible
		crew = "fow_s_uk_crewman";
		typicalCargo[] = {};
		accuracy = 0.7;
		//picture = "\fow\fow_tanks\m4a2\data\wx_us_m4a2_picture.paa";
		//Icon = "\fow\fow_tanks\m4a2\data\wx_us_m4a2_icon.paa";
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
		driverAction = "fow_tank_gunner_c_out";
		driverInAction = "fow_tank_gunner_c";
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
			class gun_1_recoil_cannon {source = "reload";weapon = "fow_w_75mm_OQF";};
			class gun_1_recoil_mg {source = "reload";weapon = "fow_w_besa_mg_mounted_2";};
			class gun_3_recoil {source = "reload";weapon = "fow_w_besa_mg_mounted_3";};
			class ROT_muzzleflash01 {source = "ammorandom"; weapon = "fow_w_besa_mg_mounted_2";};
			class ROT_muzzleflash03 {source = "ammorandom"; weapon = "fow_w_besa_mg_mounted_3";};
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
				minimalHit = 0.2;
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
				passThrough = 0;
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
				passThrough = 0;
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
			libTextDesc = "M4A2 Medium Tank";
		};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		/*class Damage
		{
			tex[] = {};
			mat[] = {"fow\fow_tanks\m4a2\data\wx_us_m4a2.rvmat","fow\fow_tanks\m4a2\data\wx_us_m4a2_damage.rvmat","fow\fow_tanks\m4a2\data\wx_us_m4a2_destruct.rvmat","fow\fow_tanks\m4a2\data\tracks.rvmat","fow\fow_tanks\m4a2\data\tracks_damage.rvmat","fow\fow_tanks\m4a2\data\tracks_destruct.rvmat","fow\fow_tanks\m4a2\data\sprocket.rvmat","fow\fow_tanks\m4a2\data\sprocket_damage.rvmat","fow\fow_tanks\m4a2\data\sprocket_destruct.rvmat","fow\fow_tanks\m4a2\data\wheel.rvmat","fow\fow_tanks\m4a2\data\wheel_damage.rvmat","fow\fow_tanks\m4a2\data\wheel_destruct.rvmat"};
		};*/
		class Damage
		{
			tex[] = {};
			mat[] = {};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						animationSourceBody = "Turret_2";
						animationSourceGun = "Gun_2";			
						animationSourceHatch = "HatchCommander";
						
						memoryPointGunnerOptics = "gunnerview_2";
						memoryPointGunnerOutOptics = "";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						
						gunnerOpticsModel = "\fow\fow_tanks\m4a2\optics\M6_Periscope";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						GunnerForceOptics = 1;
						//gunBeg = "Usti hlavne2";
						//gunEnd = "Konec hlavne2";
						minElev = -5;
						maxElev = 20;
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
						gunnerAction = "fow_tank_commander_out";
						gunnerInAction = "fow_tank_commander";
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						//discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						//discreteDistanceInitIndex = 2;
						forceHideGunner = 1;
						isPersonTurret = 0;
						/*isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						class dynamicViewLimits
						{
							MainTurret[] = {-135,75};
						};*/
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
						maxHorizontalRotSpeed = 0.55;//maxHorizontalRotSpeed = "((360/X)/45)";
						maxVerticalRotSpeed = 0.55;
						viewGunnerInExternal = 1;
					};
					class HullGunner: CommanderOptics
					{
						proxyIndex = 2;
						proxyType = "CPGunner";
						gunnerName = "Hull gunner";
						commanding = 1;
						primaryGunner = 0;
						primaryObserver = 0;
						viewGunnerInExternal = 1;
						forceHideGunner = 1;
						hasGunner = 1;
						gunnerAction = "fow_tank_gunner_c_out";
						gunnerInAction = "fow_tank_gunner_c";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutLow";
						body = "turret_3";
						gun = "gun_3";
						animationSourceBody = "turret_3";
						animationSourceGun = "gun_3";
						animationSourceHatch = "HatchHGunner";
						gunBeg = "gunbeg_3";
						gunEnd = "gunend_3";
						memoryPointGun = "gun_3_muzzle";
						memoryPointGunnerOptics = "gunnerview_3";
						memoryPointGunnerOutOptics = "";
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
						weapons[] = {"fow_w_besa_mg_mounted_3"};
						magazines[] = {"fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57"};
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
					class Loader: CommanderOptics
					{
						proxyIndex = 3;
						proxyType = "CPGunner";
						gunnerName = "Loader operator";
						commanding = 0;
						primaryGunner = 0;
						primaryObserver = 0;
						viewGunnerInExternal = 1;
						forceHideGunner = 0;
						hasGunner = 1;
						gunnerAction = "fow_tank_gunner_c_out";
						gunnerInAction = "fow_tank_gunner_c";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutLow";	
						body = "";
						gun = "";
						animationSourceBody = "";
						animationSourceGun = "";
						animationSourceHatch = "HatchLoader";
						gunBeg = "";
						gunEnd = "";
						memoryPointGun = "";
						memoryPointGunnerOptics = "gunnerview_4";
						memoryPointGunnerOutOptics = "";
						selectionFireAnim = "";
						soundServo[] = {};
						lockWhenDriverOut = 0;
						startEngine = 0;
						memoryPointsGetInGunner = "pos hullgunner";
						memoryPointsGetInGunnerDir = "pos hullgunner dir";
						gunnerForceOptics = 1;
						maxHorizontalRotSpeed = 1.5;
						maxVerticalRotSpeed = 1.5;
						minElev = -2;
						maxElev = 15;
						initElev = 0;
						minTurn = 15;
						maxTurn = 15;
						initTurn = 15;
						weapons[] = {};
						magazines[] = {};
						visionMode[] = {"Normal"};
						discreteInitIndex = 0;
						discreteDistance[] = {};
						discreteDistanceInitIndex = 0;
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
				gun = "gun_1";
				body = "turret_1";
				// Coaxial gun
				memoryPointGun = "gun_1_muzzle";
				selectionFireAnim = "muzzleflash01";
				
				memoryPointGunnerOptics = "gunnerview_1";
				memoryPointGunnerOutOptics = "";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				
				maxHorizontalRotSpeed = 0.55;//maxHorizontalRotSpeed = "((360/X)/45)";
				maxVerticalRotSpeed = 0.55;			
				
				gunnerOpticsModel = "\fow\fow_tanks\cromwell\optics\optic_75";
				visionMode[] = {"Normal"};
				gunnerAction = "fow_tank_gunner_out";
				gunnerInAction = "fow_tank_gunner";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				weapons[] = {"fow_w_75mm_OQF","fow_w_besa_mg_mounted_2"};
				magazines[] = {"fow_40Rnd_75mm_M48_HE","fow_30Rnd_75mm_M61_APCBC","fow_27Rnd_75mm_M72_AP","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57"};
				soundServo[] = {"\fow\fow_tanks\m4a2\Sound\TurretMotoriek",0.56234133,1.0,50};
				soundServoVertical[] = {"\fow\fow_tanks\m4a2\Sound\TurretMotoriek",0.56234133,1.0,50};
				forceHideGunner = 1;//1
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
				animationSourceHatch = "";//HatchGunner
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
				class ViewOptics: ViewOptics
				{
					minFov = 0.75;
					maxFov = 0.75;
					initFov = 0.75;
				};
				class ViewGunner: ViewGunner
				{
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

	class fow_v_cromwell_uk: fow_v_cromwell {
		scope = 2;
	};
