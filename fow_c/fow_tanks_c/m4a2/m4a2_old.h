
	class fow_us_m4a2_base: Tank_F {
		displayName = "M4A2 Medium Tank";
		model = "\fow\fow_tanks\wx_us_m4a2";
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
		crew = "fow_s_us_rifleman";
		typicalCargo[] = {"fow_s_us_rifleman"};
		accuracy = 0.7;
		picture = "\fow\fow_tanks\m4a2\data\wx_us_m4a2_picture.paa";
		Icon = "\fow\fow_tanks\m4a2\data\wx_us_m4a2_icon.paa";
		mapSize = 11;
		armor = 320;
		minimalHit = 0.08;
		forceHideGunner = 0;
		class TransportMagazines{};
		transportAmmo = 0;
		supplyRadius = 1.7;
		canFloat = 0;
		threat[] = {0.45,0.4,0.1};
		cost = 1000000;
		getInAction = "GetInMedium";
		getOutAction = "GetOutLow";
		driverAction = "driver_apcwheeled2_out";
		driverInAction = "driver_apcwheeled2_in";
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
		forceHidedriver = 0;
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
		extCameraPosition[] = {0,2,-10};
		groupCameraPosition[] = {0,5,-20};
		class AnimationSources
		{
			class gun_1_recoil_cannon
			{
				source = "reload";
				weapon = "fow_w_75mm_M3";
			};
			class gun_1_recoil_MG
			{
				source = "reload";
				weapon = "fow_w_m1919a4_mounted";
			};
			class gun_2_recoil
			{
				source = "reload";
				weapon = "fow_w_m1919a4_mounted";
			};
			class gun_3_recoil
			{
				source = "reload";
				weapon = "fow_w_m1919a4_mounted";
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
		
		class Reflectors
		{
			class Light
			{
				color[] = {7000, 7500, 10000};
				ambient[] = {70, 75, 100};
				intensity = 7;
				size = 1;
				innerAngle = 15;
				outerAngle = 85;
				coneFadeCoef = 10;
				position = "L svetlo";
				direction = "konec l svetla";
				hitpoint = "svetlo L";
				selection = "L svetlo";
				brightness = 0.5;
		      };
		
		      class Light2
			{
				color[] = {7000, 7500, 10000};
				ambient[] = {70, 75, 100};
				intensity = 7;
				size = 1;
				innerAngle = 15;
				outerAngle = 85;
				coneFadeCoef = 10;
				position = "P svetlo";
				direction = "konec P svetla";
				hitpoint = "svetlo P";
				selection = "P svetlo";
				brightness = 0.5;
			};
		};
		class Library
		{
			libTextDesc = "M4A2 Medium Tank";
		};
		smokeLauncherGrenadeCount = 6;
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
				proxyIndex = 1;
				proxyType = "CPGunner";
				gunnerName = "Gunner";
				primaryGunner = 1;
				primaryObserver = 0;
				commanding = 2;
				viewGunnerInExternal = 0;
				forceHideGunner = 1;
				hasGunner = 1;
				gunnerAction = "driver_apcwheeled2_in";
				gunnerInAction = "driver_apcwheeled2_in";
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
				selectionFireAnim = "muzzleflash01";
				weapons[] = {"fow_w_75mm_M3","fow_w_m1919a4_mounted"};
				magazines[] = {"fow_40Rnd_M48_HE","fow_30Rnd_M61_APC","fow_27Rnd_M72_AP","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919"};
				soundServo[] = {"\fow\fow_tanks\m4a2\Sound\TurretMotoriek",0.00316228,1.0};
				GunnerForceOptics = 1;
				gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M70Fx3";
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
				class Turrets: Turrets
				{
					class Turret_2: NewTurret
					{
						proxyIndex = 1;
						proxyType = "CPCommander";
						gunnerName = "Commander";
						primaryGunner = 0;
						primaryObserver = 1;
						commanding = 3;
						hasGunner = 1;
						viewGunnerInExternal = 0;
						forceHideGunner = 0;
						forceHideCommander = 0;
						animationSourceHatch = "HatchCommander";
						memoryPointGunnerOptics = "Gunnerview_2";
						memoryPointGunnerOutOptics = "GunnerviewOut_2";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						gunnerAction = "mbt1c_slot2_out";
						gunnerInAction = "mbt1c_slot2_in";
						gunnerGetInAction = "GetInLow";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "\fow\fow_tanks\m4a2\optics\M6_Periscope";
						gunnerOutOpticsModel = "";
						gunnerOpticsEffect[] = {};
						GunnerForceOptics = 1;
						minElev = -20;
						maxElev = 60;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						LODTurnedIn = 1;
                        LODTurnedOut = 1;
						minOutElev = -50;
						maxOutElev = 90;
						initOutElev = 0;
						minOutTurn = -360;
						maxOutTurn = 360;
						initOutTurn = 0;
						weapons[] = {"SmokeLauncher"};
						magazines[] = {"SmokeLauncherMag"};
						startEngine = 0;
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						soundAttenuationTurret = "";
				        disableSoundAttenuation = 1;
						class ViewOptics
						{
							initAngleX = 0;
							minAngleX = -70;
							maxAngleX = 90;
							initAngleY = 0;
							minAngleY = -360;
							maxAngleY = 360;
							initFov = 0.2;
							minFov = 0.1;
							maxFov = 0.3;
						};
					};
				};
			};
			class Turret_3: NewTurret
			{
				proxyIndex = 2;
				proxyType = "CPGunner";
				gunnerName = "Hull gunner radio operator";
				commanding = 1;
				primaryGunner = 0;
				primaryObserver = 0;
				viewGunnerInExternal = 0;
				forceHideGunner = 0;
				hasGunner = 1;
				gunnerAction = "driver_apcwheeled2_out";
				gunnerInAction = "driver_apcwheeled2_in";
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
				maxHorizontalRotSpeed = 1.5;
				maxVerticalRotSpeed = 1.5;
				minElev = -20;
				maxElev = 20;
				initElev = 0;
				minTurn = -25;
				maxTurn = 25;
				initTurn = 0;
				weapons[] = {"fow_w_m1919a4_mounted"};
				magazines[] = {"fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919"};
				visionMode[] = {"Normal"};
				discreteInitIndex = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M6_Periscope";
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
			};
		};
			
		
	};

	class fow_usmc_m4a2: fow_us_m4a2_base {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_rifleman";
		typicalCargo[] = {"fow_s_usmc_rifleman"};
	};
	class fow_us_m4a2: fow_us_m4a2_base {
		scope = 2;
	};
	class I_MBT_03_base_F;
	class fow_us_m4a2_test: I_MBT_03_base_F {
		faction = "fow_usa";
		scope = 2;
		displayName = "M4A2 Medium Test";
		model = "\fow\fow_tanks\wx_us_m4a2";
	};