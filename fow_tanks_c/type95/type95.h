	class fow_v_type95_HaGo: Tank_F {
		displayName = "Light Tank Ha-Go";
		model = "\fow\fow_tanks\type95\type95_HaGo";
		faction = "fow_ija";
		//vehicleclass = "wx_armored";
		selectionLeftOffset = "pasanimL";
		selectionRightOffset = "pasanimP";
		scope = 1;
		side = 1;
		commanderCanSee = "2+4+8+16";
		gunnerCanSee = "2+4+8+16";
		driverCanSee = "2+4+8+16";
		DriverCompartments = "Compartment1";
		proxyType = "CPDriver";
		proxyIndex = 1;
		commanding = 0;
		forceHideDriver = 1;
		//hideProxyInCombat = 0;
		hiddenSelections[] = {"_Body","_Wheels"};
		hiddenSelectionsTextures[] = {"\fow\fow_tanks\type95\data\Type95_co.paa","\fow\fow_tanks\type95\data\Type95wheels_ca.paa"};
		crew = "fow_s_ija_crewman";
		typicalCargo[] = {"fow_s_ija_rifleman","fow_s_ija_rifleman"};
		//crew = "WX_IJA_crew";
		//typicalCargo[] = {"WX_ija_rifleman","WX_ija_rifleman"};
		accuracy = 0.7;
		//picture = "\fow\fow_tanks\type95\data\Type95_picture.paa";
		//Icon = "\fow\fow_tanks\type95\data\Type95_icon.paa";
		mapSize = 11;
		armor = 200;
		minimalHit = 0.01;/*
		maxSpeed = 25;
		wheelCircumference = 2.312;
		tracksSpeed = 1.1;
		damperSize = 0.3;
		damperForce = 0.5;
		damperDamping = 0.5;
		steerAheadSimul = 0.6;
		steerAheadPlan = 0.9;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		brakeDistance = 1.1;
		turnCoef = 1;
		terrainCoef = 2;*/
		class TransportMagazines{};
		transportAmmo = 0;
		supplyRadius = 1.7;
		canFloat = 0;
		threat[] = {0.45,0.4,0.1};
		cost = 10000;
		startEngine = 0;
		getInAction = "GetInMedium";
		getOutAction = "GetOutLow";
		driverAction = "driver_apctracked3_out";
		driverInAction = "driver_apctracked3_in";
		animationSourceHatch = "HatchDriver";
		preferRoads = 1;
		insideSoundCoef = 1;
		driverForceOptics = 1;
		driverOpticsModel = "\fow\fow_tanks\type95\Optica\Driver.p3d";
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
			initFov = 0.75;
			minFov = 0.75;
			maxFov = 0.75;
		};
		class ViewPilot: ViewPilot
		{
			initFov = 0.75;
			minFov = 0.75;
			maxFov = 0.75;
			initAngleX = 0;
			minAngleX = -80;
			maxAngleX = 80;
			initAngleY = 0;
			minAngleY = -110;
			maxAngleY = 110;
		};
		class HeadLimits: HeadLimits
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
		class AnimationSources: AnimationSources
		{
			class gun_1_recoil
			{
				source = "reload";
				weapon = "fow_w_37mm";
			};
			class gun_2_recoil
			{
				source = "reload";
				weapon = "fow_w_type77_mg_2";
			};
			class gun_3_recoil
			{
				source = "reload";
				weapon = "fow_w_type77_mg_3";
			};
		};
		class HitPoints
		{
			class HitHull
			{
				armor = 0.85;
				material = -1;
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
				passThrough = 0;
			};
			class HitRTrack
			{
				armor = 0.3;
				material = -1;
				name = "Track_R";
				visual = "Track_R";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 1;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0.2;
			};
		};
		soundGear[] = {"",5.62341e-005,1};
		soundGetIn[] = {"\fow\fow_tanks\type95\Sound\_Get_In",0.562341,1};
		soundGetOut[] = {"\fow\fow_tanks\type95\Sound\_Get_Out",0.562341,1,35};
		soundEngineOnInt[] = {"\fow\fow_tanks\type95\Sound\HaGo_Engine_Start",1,1};
		soundEngineOnExt[] = {"\fow\fow_tanks\type95\Sound\HaGo_Engine_Start",2.51189,1,50};
		soundEngineOffInt[] = {"\fow\fow_tanks\type95\Sound\HaGo_Engine_Stop",1,1};
		soundEngineOffExt[] = {"\fow\fow_tanks\type95\Sound\HaGo_Engine_Stop",1,0.8,50};
		/*
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
		*/
		
		#include "sounds.h"
		
		class Exhausts
		{
			class Exhaust1
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
		};
		class Library
		{
			libTextDesc = "Ha-Go";
		};
		smokeLauncherGrenadeCount = 6;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 1;
		smokeLauncherAngle = 120;
		class Damage
		{
			tex[] = {};
			mat[] = {"fow\fow_tanks\type95\data\Type95.rvmat","fow\fow_tanks\type95\data\Type95.rvmat","fow\fow_tanks\type95\data\Type95_destruct.rvmat",/*"fow\fow_tanks\type95\data\Type95wheels.rvmat","fow\fow_tanks\type95\data\Type95wheels.rvmat","fow\fow_tanks\type95\data\Type95Wheels_destruct.rvmat",*/"fow\fow_tanks\type95\data\track.rvmat","fow\fow_tanks\type95\data\track.rvmat","fow\fow_tanks\type95\data\track_destruct.rvmat"};
		};

		class Turrets: Turrets
		{
			class Turret_3: NewTurret
			{
				proxyIndex = 2;
				proxyType = "CPGunner";
				gunnerName = "Hull gunner radio operator";
				commanding = 1;
				primaryGunner = 0;
				primaryObserver = 0;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				hasGunner = 1;
				gunnerCompartments = "Compartment1";
				driverAction = "commander_mbt3_out";
				driverInAction = "commander_mbt3_in";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutLow";
				body = "Turret_3";
				gun = "Gun_3";
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "Turret_3";
						visual = "Turret_3";
						passThrough = 0;
					};
					class HitGun
					{
						armor = 0.3;
						material = -1;
						name = "Gun_3";
						visual = "Gun_3";
						passThrough = 0;
					};
				};
				animationSourceBody = "Turret_3";
				animationSourceGun = "Gun_3";
				animationSourceHatch = "HatchHullGunner";
				gunBeg = "gun_3_beg";
				gunEnd = "gun_3_end";
				memoryPointGun = "Gun_3_muzzle";
				memoryPointGunnerOptics = "Gunnerview_3";
				memoryPointGunnerOutOptics = "GunnerviewOut_3";
				selectionFireAnim = "muzzleflash03";
				soundServo[] = {};
				lockWhenDriverOut = 0;
				startEngine = 0;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerForceOptics = 1;
				maxHorizontalRotSpeed = 0.7;
				maxVerticalRotSpeed = 0.7;
				minElev = -20;
				maxElev = 20;
				initElev = 0;
				minTurn = -25;
				maxTurn = 25;
				initTurn = 0;
				weapons[] = {"fow_w_type77_mg_3"};
				magazines[] = {"fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97"};
				visionMode[] = {"Normal"};
				discreteInitIndex = 1;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 5;
				gunnerOpticsModel = "\fow\fow_tanks\type95\Optica\37mm_Scope.p3d";
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -20;
					maxAngleX = 20;
					initAngleY = 0;
					minAngleY = -30;
					maxAngleY = 30;
					initFov = 0.75;
					minFov = 0.75;
					maxFov = 0.75;
				};
			};
			class Turret_1: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "Turret_1_hit";
						visual = "Turret_1";
						passThrough = 0;
					};
					class HitGun
					{
						armor = 0.3;
						material = -1;
						name = "Gun_1";
						visual = "Gun_1";
						passThrough = 0;
					};
				};
				proxyIndex = 1;
				proxyType = "CPGunner";
				gunnerName = "Commander";
				gunnerCompartments = "Compartment2";
				primaryGunner = 1;
				primaryObserver = 1;
				commanding = 4;
				viewGunnerInExternal = 1;
				forceHideCommandner = 0;
				forceHideGunner = 0;
				hasGunner = 1;
				//gunnerInAction = "Landrover_Gunner";
				//gunnerAction = "ZSU_CommanderOut";
				//gunnerGetInAction = "GetInHigh";
				//gunnerGetOutAction = "GetOutHigh";
				gunnerAction = "commander_mbt3_out";
				gunnerInAction = "commander_mbt3_in";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutLow";
				body = "turret_1";
				gun = "Gun_1";
				animationSourceBody = "turret_1";
				animationSourceGun = "Gun_1";
				animationSourceHatch = "HatchCommander";
				gunBeg = "gun_1_beg";
				gunEnd = "gun_1_end";
				memoryPointGun = "Gun_1_muzzle";
				memoryPointGunnerOptics = "Gunnerview_1";
				memoryPointGunnerOutOptics = "GunnerviewOut_1";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				selectionFireAnim = "muzzleflash01";
				weapons[] = {"fow_w_37mm"};
				magazines[] = {"fow_49Rnd_37mm_APHE","fow_49Rnd_37mm_HE"};
				startEngine = 0;
				soundServo[] = {"fow\fow_sounds\vehicles\222\222_turret",1.3,1,15};
				//soundServo[] = {"\fow\fow_tanks\type95\Sound\_TurretMotoriek",0.00316228,1.0};
				GunnerForceOptics = 1;
				gunnerOpticsModel = "\fow\fow_tanks\type95\Optica\37mm_Scope.p3d";
				gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
				visionMode[] = {"Normal"};
				discreteInitIndex = 0;
				discreteDistance[] = {300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceInitIndex = 2;
				outGunnerMayFire = 0;
				inGunnerMayFire = 1;
				maxHorizontalRotSpeed = 0.5;
				maxVerticalRotSpeed = 0.5;
				minElev = -9;
				maxElev = 20;
				initElev = 0;
				isPersonTurret = 1;
				personTurretAction = "vehicle_turnout_1";
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.75;
					minFov = 0.75;
					maxFov = 0.75;
				};
				class Turrets: Turrets
				{
					class Turret_4: NewTurret
					{
						proxyIndex = 1;
						proxyType = "CPCommander";
						gunnerName = "commander Coupola";
						dontCreateAI = 1;
						gunnerCompartments = "Compartment2";
						primaryGunner = 0;
						primaryObserver = 0;
						commanding = 2;
						viewGunnerInExternal = 1;
						forceHideGunner = 1;
						forceHideCommander = 1;
						hasGunner = 0;
						body = "turret_4";
						gun = "";
						animationSourceBody = "turret_4";
						animationSourceGun = "";
						animationSourceHatch = "HatchCommander";
						gunBeg = " ";
						gunEnd = " ";
						memoryPointGun = " ";
						memoryPointGunnerOptics = "gunnerview_4";
						memoryPointGunnerOutOptics = " ";
						memoryPointsGetInGunner = "pos commander";
						memoryPointsGetInGunnerDir = "pos commander dir";
						selectionFireAnim = "muzzleflash04";
						gunnerAction = "commander_mbt3_out";
						gunnerInAction = "commander_mbt3_in";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						gunnerOpticsModel = "\fow\fow_tanks\type95\Optica\Commander.p3d";
						gunnerOutOpticsModel = "\fow\fow_tanks\type95\Optica\Commander.p3d";
						gunnerOpticsEffect[] = {"TankGunnerOptics2","OpticsBlur1","OpticsCHAbera1"};
						GunnerForceOptics = 1;
						minElev = 0;
						maxElev = 0;
						initElev = 0;
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {"FakeWeapon"};
						magazines[] = {"FakeWeapon"};
						startEngine = 0;
						outGunnerMayFire = 1;
						inGunnerMayFire = 1;
						class ViewOptics: ViewOptics
						{
							initAngleX = -5;
							minAngleX = -30;
							maxAngleX = 30;
							initAngleY = 0;
							minAngleY = -30;
							maxAngleY = 30;
							initFov = 0.75;
							minFov = 0.75;
							maxFov = 0.75;
						};
					};
				};
			};
			class Turret_2: NewTurret
			{
				proxyIndex = 1;
				proxyType = "CPCommander";
				gunnerName = "commander MG";
				gunnerCompartments = "Compartment2";
				stabilizedInAxes = "StabilizedInAxesNone";
				//dontCreateAI = 0;
				primaryGunner = 0;
				primaryObserver = 0;
				commanding = 3;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				forceHideCommander = 1;
				hasGunner = 1;//type95 had 3 slots, but Arma....
				body = "turret_2";
				gun = "Gun_2";
				animationSourceBody = "turret_2";
				animationSourceGun = "Gun_2";
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "Turret_2";
						visual = "Turret_2";
						passThrough = 0;
					};
					class HitGun
					{
						armor = 0.3;
						material = -1;
						name = "Gun_2";
						visual = "Gun_2";
						passThrough = 0;
					};
				};
				animationSourceHatch = "";
				gunBeg = "gun_2_beg";
				gunEnd = "gun_2_end";
				memoryPointGun = "Gun_2_muzzle";
				memoryPointGunnerOptics = "Gunnerview_2";
				memoryPointGunnerOutOptics = "GunnerviewOut_2";
				memoryPointsGetInGunner = "pos gunner2";
				memoryPointsGetInGunnerDir = "pos gunner2 dir";
				selectionFireAnim = "muzzleflash02";
				gunnerAction = "commander_mbt3_out";
				gunnerInAction = "commander_mbt3_in";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutLow";
				Showgunneroptics = 1;
				GunnerForceOptics = 1;
				gunnerOpticsModel = "\fow\fow_tanks\type95\Optica\37mm_Scope.p3d";
				gunnerOutOpticsModel = "\fow\fow_tanks\type95\optica\37mm_Scope.p3d";
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				castGunnerShadow = 0;
				ejectdeadgunner = 0;
				bounding = "Gun_2_muzzle";
				lockWhenDriverOut = 0;
				maxHorizontalRotSpeed = 0.7;
				maxVerticalRotSpeed = 0.7;
				minElev = -25;
				maxElev = 25;
				initElev = 0;
				minTurn = -165;
				initTurn = -140;
				maxTurn = -115;
				weapons[] = {"fow_w_type77_mg_2"};
				magazines[] = {"fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97","fow_20Rnd_77x58_Type97"};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -25;
					maxAngleX = 25;
					initAngleY = 0;
					minAngleY = -30;
					maxAngleY = 30;
					initFov = 0.75;
					minFov = 0.75;
					maxFov = 0.75;
				};
				class ViewPilot: ViewPilot
				{
					initFov = 0.75;
					minFov = 0.75;
					maxFov = 0.75;
					initAngleX = 0;
					minAngleX = -80;
					maxAngleX = 80;
					initAngleY = 0;
					minAngleY = -110;
					maxAngleY = 110;
				};
				class HeadLimits: HeadLimits
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
			};
		};

		class Attributes
		{
			class ObjectTexture
			{
				control = "ObjectTexture";
				data = "ObjectTexture";
				displayName = "Skin";
				tooltip = "Texture and material set applied on the object.";
			};
		};
		class textureSources
		{
			class camo_standard
			{
				displayName = "Camo Standard";
				author = "FOW Team";
				textures[] = {"\fow\fow_tanks\type95\data\Type95_co.paa","\fow\fow_tanks\type95\data\Type95wheels_ca.paa"};
				factions[] = {"fow_ija"};
			};
			class camo_1
			{
				displayName = "Camo - 1";
				author = "FOW Team";
				textures[] = {"\fow\fow_tanks\type95\data\Type95_ca1_co.paa","\fow\fow_tanks\type95\data\Type95wheels_ca1_ca.paa"};
				factions[] = {"fow_ija"};
			};
			class camo_2
			{
				displayName = "Camo - 2";
				author = "FOW Team";
				textures[] = {"\fow\fow_tanks\type95\data\Type95_ca2_co.paa","\fow\fow_tanks\type95\data\Type95wheels_ca2_ca.paa"};
				factions[] = {"fow_ija"};
			};
		};
		textureList[] = {};	
	};
	class fow_ija_type95_HaGo_1_ija: fow_v_type95_HaGo
	{
		scope = 2;
		displayName = "Light Tank Ha-Go 1";
		hiddenSelectionsTextures[] = {"\fow\fow_tanks\type95\data\Type95_co.paa","\fow\fow_tanks\type95\data\Type95wheels_ca.paa"};
	};
	class fow_ija_type95_HaGo_2_ija: fow_v_type95_HaGo
	{
		scope = 2;
		displayName = "Light Tank Ha-Go 2";
		hiddenSelectionsTextures[] = {"\fow\fow_tanks\type95\data\Type95_ca1_co.paa","\fow\fow_tanks\type95\data\Type95wheels_ca1_ca.paa"};
	};
	class fow_ija_type95_HaGo_3_ija: fow_v_type95_HaGo
	{
		scope = 2;
		displayName = "Light Tank Ha-Go 3";
		hiddenSelectionsTextures[] = {"\fow\fow_tanks\type95\data\Type95_ca2_co.paa","\fow\fow_tanks\type95\data\Type95wheels_ca2_ca.paa"};
	};
