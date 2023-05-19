
	class fow_v_panther: Tank_F {
		displayName = "Sd.Kfz. 171 Panther Ausf. G";
		model = "\fow\fow_tanks\panther\panther";
		faction = "fow_heer";
		//vehicleclass = "wx_armored";
		selectionLeftOffset = "pasoffsetL";
		selectionRightOffset = "pasoffsetP";
		scope = 1;
		side = 1;
		commanderCanSee = "2+4+8+16";
		gunnerCanSee = "2+4+8+16";
		driverCanSee = "2+4+8+16";
		proxyType = "CPDriver";
		proxyIndex = 1;
		commanding = 0;
		destrType = "DestructEngine";
		//forceHidedriver = 0;
		//hideProxyInCombat = 1;//driver visible
		crew = "fow_s_ger_heer_tankcrew_01_obergefreiter";
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
		driverAction = "fow_tank_driver_out";
		driverInAction = "fow_tank_driver";
		viewDriverInExternal = 1;
		animationSourceHatch = "HatchDriver";
		preferRoads = 0;
		/*turnCoef = 5;
		accelAidForceCoef = 1;
		accelAidForceSpd = 1.6;
		accelAidForceYOffset = -2;
		steerAheadPlan = 0.4;
		steerAheadSimul = 0.3;*/
		
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

		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fow\fow_tanks\panther\data\panther_caisse_co.paa","\fow\fow_tanks\panther\data\panther_details_co.paa","\fow\fow_tanks\panther\data\panther_turret_co.paa","\fow\fow_tanks\panther\data\panther_wheels_co.paa"};
		
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
			maxFov = 1.75;
			initFov = 0.75;
		};
		class ViewPilot
		{
					minFov = 0.25;
					maxFov = 1.25;
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
		
		class EventHandlers: EventHandlers {
			init = "_this spawn fow_main_fnc_randomizeNumbers";
		};
		
		class AnimationSources
		{
			class gun_1_recoil_cannon {source = "reload";weapon = "fow_w_75mm_kwk42";};
			class gun_1_recoil_mg {source = "reload";weapon = "fow_w_mg34_mounted_t_1";};
			class gun_3_recoil {source = "reload";weapon = "fow_w_mg34_mounted_t_3";};
			class ROT_muzzleflash01 {source = "ammorandom"; weapon = "fow_w_mg34_mounted_t_1";};
			class ROT_muzzleflash03 {source = "ammorandom"; weapon = "fow_w_mg34_mounted_t_3";};
			class foliage {displayName = "Add foliage";source = "user";animPeriod = 1;initPhase=0;};
			class foliage_t {displayName = "Add foliage on turret";source = "user";animPeriod = 1;initPhase=0;};
			class n_1_1 {source = "user";animPeriod = 1;initPhase=0;};
			class n_1_2 {source = "user";animPeriod = 1;initPhase=0;};
			class n_1_3 {source = "user";animPeriod = 1;initPhase=0;};
			class n_1_4 {source = "user";animPeriod = 1;initPhase=0;};
			class n_2_1 {source = "user";animPeriod = 1;initPhase=0;};
			class n_2_2 {source = "user";animPeriod = 1;initPhase=0;};
			class n_2_3 {source = "user";animPeriod = 1;initPhase=0;};
			class n_2_4 {source = "user";animPeriod = 1;initPhase=0;};
			class n_3_1 {source = "user";animPeriod = 1;initPhase=0;};
			class n_3_2 {source = "user";animPeriod = 1;initPhase=0;};
			class n_3_3 {source = "user";animPeriod = 1;initPhase=0;};
			class n_3_4 {source = "user";animPeriod = 1;initPhase=0;};
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
				visual = "";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.2;
			};
			class HitFuel
			{
				armor = 1;
				material = -1;
				name = "fuel";
				visual = "";
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
				visual = "";
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
		};
		class Library
		{
			libTextDesc = "Sd.Kfz. 171 Panther Ausf. G";
		};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		class Damage
		{
			tex[] = {};
			mat[] = {
				"fow\fow_tanks\panther\data\panther_caisse.rvmat",
				"fow\fow_tanks\panther\data\panther_caisse_damage.rvmat",
				"fow\fow_tanks\panther\data\panther_caisse_destruct.rvmat",
				
				"fow\fow_tanks\panther\data\panther_details.rvmat",
				"fow\fow_tanks\panther\data\panther_details_damage.rvmat",
				"fow\fow_tanks\panther\data\panther_details_destruct.rvmat",
				
				"fow\fow_tanks\panther\data\panther_turret.rvmat",
				"fow\fow_tanks\panther\data\panther_turret_damage.rvmat",
				"fow\fow_tanks\panther\data\panther_turret_destruct.rvmat",
				
				"fow\fow_tanks\panther\data\panther_wheels.rvmat",
				"fow\fow_tanks\panther\data\panther_wheels_damage.rvmat",
				"fow\fow_tanks\panther\data\panther_wheels_destruct.rvmat"
				
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						body = "turret_2";
						gun = "gun_2";
						animationSourceBody = "turret_2";
						animationSourceGun = "gun_2";
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
						gunnerAction = "fow_tank_commander_out";
						gunnerInAction = "fow_tank_commander";
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
							initFov = 0.75;
							minFov = 0.75;
							maxFov = 0.75;
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
						gunnerAction = "fow_tank_driver_out";
						gunnerInAction = "fow_tank_driver";
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
						weapons[] = {"fow_w_mg34_mounted_t_3"};
						magazines[] = {"fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57"};
						visionMode[] = {"Normal"};
						discreteInitIndex = 2;
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
						discreteDistanceInitIndex = 2;
						gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M70Fx3";
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
							initFov = 0.75;
							minFov = 0.75;
							maxFov = 0.75;
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
						gunnerAction = "fow_tank_gunner_out";
						gunnerInAction = "fow_tank_gunner";
						gunnerGetInAction = "GetInMedium";
						gunnerGetOutAction = "GetOutLow";	
						body = "turret_4";
						gun = "gun_4";
						animationSourceBody = "turret_4";
						animationSourceGun = "gun_4";
						animationSourceHatch = "HatchLoader";
						gunBeg = "";
						gunEnd = "";
						memoryPointGun = "";
						memoryPointGunnerOptics = "Gunnerview_4";
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
						minTurn = 324;
						maxTurn = 326;
						initTurn = 325;
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
							initFov = 0.75;
							minFov = 0.75;
							maxFov = 0.75;
						};
					};
				};
				// Main gun
				gunBeg = "gunbeg_1";
				gunEnd = "gunend_1";
				gun = "gun_1";
				body = "turret_1";
				// Coaxial gun
				memoryPointGun = "Gun_1_muzzle";
				selectionFireAnim = "muzzleflash01";
				
				memoryPointGunnerOptics = "Gunnerview_1";
				memoryPointGunnerOutOptics = "";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				
				maxHorizontalRotSpeed = 0.13;//maxHorizontalRotSpeed = "((360/X)/45)";//The first Panthers (Ausf D) had a hydraulic motor that could traverse the turret at a maximum rate of one complete revolution in one minute, independent of engine speed. This was improved in the Ausf A model with a hydraulic traverse that varied with engine speed; one full turn taking 46 seconds at an engine speed of 1,000 rpm but only 15 seconds if the engine was running at 3,000 rpm
				maxVerticalRotSpeed = 0.2;				
				
				gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M70Fx3";
				visionMode[] = {"Normal"};
				gunnerAction = "fow_tank_gunner_out";
				gunnerInAction = "fow_tank_gunner";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				weapons[] = {"fow_w_75mm_kwk42","fow_w_mg34_mounted_t_1"};
				magazines[] = {"fow_30Rnd_75mm_pzgr4042_APCR","fow_30Rnd_75mm_pzgr3942_APCBC_HE","fow_30Rnd_75mm_sprg42_HE","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57"};
				soundServo[] = {"fow\fow_sounds\vehicles\panther\panther_turret.wav",1.5,1,15};
				soundServoVertical[] = {"fow\fow_sounds\vehicles\panther\panther_turret.wav",1.5,1,15};
				//soundServo[] = {"\fow\fow_tanks\m4a2\Sound\TurretMotoriek",0.56234133,1.0,50};
				//soundServoVertical[] = {"\fow\fow_tanks\m4a2\Sound\TurretMotoriek",0.56234133,1.0,50};
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
				class OpticsIn
				{
					//2.5x and 5x
					//0.75 = 1x
					//0.75/2 = 2x
					//0.75/3=3x
					class Optic_25
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.3;
						minFov = 0.3;
						maxFov = 0.3;
						visionMode[] = {"Normal"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M70Fx3";
						opticsPPEffects[] = {};
						OpticsFlare = 1;
					};
					class Optic_5: Optic_25
					{
						gunnerOpticsModel = "\fow\fow_tanks\m4a2\Optics\M70Fx3";
						initFov = 0.15;
						minFov = 0.15;
						maxFov = 0.15;
						opticsPPEffects[] = {};
						opticsDisablePeripherialVision = 1;
					};
				};
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
		
		animationList[] =
		{
			"foliage",0,
			"foliage_t",0
		};
		
		class textureSources
		{
			class Dunkelgelb
			{
				// Display name of the texture
				displayName = "Dunkelgelb";
				// Author of the texture
				author = "FOW Team";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\fow\fow_tanks\panther\data\panther_caisse_co.paa","\fow\fow_tanks\panther\data\panther_details_co.paa","\fow\fow_tanks\panther\data\panther_turret_co.paa","\fow\fow_tanks\panther\data\panther_wheels_co.paa"};
				// This source should be available for the following factions
				factions[] = 
				{
					"fow_heer","fow_waffenss"
				};
			};
			class camo
			{
				// Display name of the texture
				displayName = "Camo";
				// Author of the texture
				author = "FOW Team";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\fow\fow_tanks\panther\data\panther_camo01_caisse_co.paa","\fow\fow_tanks\panther\data\panther_details_camo01_co.paa","\fow\fow_tanks\panther\data\panther_turret_camo01_co.paa","\fow\fow_tanks\panther\data\panther_wheels_camo01_co.paa"};
				// This source should be available for the following factions
				factions[] = 
				{
					"fow_heer","fow_waffenss"
				};
			};
		};		
		
		
	};

	class fow_v_panther_camo: fow_v_panther {
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fow\fow_tanks\panther\data\panther_camo01_caisse_co.paa","\fow\fow_tanks\panther\data\panther_details_camo01_co.paa","\fow\fow_tanks\panther\data\panther_turret_camo01_co.paa","\fow\fow_tanks\panther\data\panther_wheels_camo01_co.paa"};
	};
	class fow_v_panther_ger_heer: fow_v_panther {
		scope = 2;
		displayName = "Sd.Kfz. 171 Panther Ausf. G";
	};
	class fow_v_panther_camo_ger_heer: fow_v_panther_camo {
		scope = 2;
		displayName = "Sd.Kfz. 171 Panther Ausf. G (Camo)";
	};
	class fow_v_panther_camo_foliage_ger_heer: fow_v_panther_camo {
		scope = 2;
		displayName = "Sd.Kfz. 171 Panther Ausf. G (Camo - Foliage)";
		class AnimationSources: AnimationSources
		{
			class foliage {source = "user";animPeriod = 1;initPhase=1;};
		};
	};