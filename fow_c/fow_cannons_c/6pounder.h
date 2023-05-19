	class fow_w_6Pounder: StaticWeapon
	{
		scope = 1;
		side = 2;
		
		faction = "fow_uk";
		
		threat[] = {1,0.9,0.2};
		camouflage = 2;
		
		hasDriver = 1;
		proxyType = "CPDriver";
		proxyIndex = 1;
		DriverName = "Loader";
		hideProxyInCombat = 0;
		viewDriverInExternal = 1;
		castDriverShadow = 1;
		ejectDeadDriver = 1;
		displayName = "6 Pounder";
		model = "\fow\fow_cannons\6pounder\6pounder.p3d";
		vehicleclass = "fow_cannons";
		editorSubcategory = "fow_cannons";
		nameSound = "cannon";
		
		crew = "fow_s_uk_rifleman";
		typicalCargo[] = {"fow_s_uk_rifleman","fow_s_uk_rifleman"};
		accuracy = 0.7;
		picture = "\fow\fow_cannons\6pounder\data\ui\pic_6Pounder_ca.paa";
		Icon = "\fow\fow_cannons\6pounder\data\ui\ico_6Pounder_ca.paa";
		
		mapSize = 11;
		armor = 150;
		forceHideGunner = 0;
		cost = 3000;
		weapons[] = {"fakeweapon"};
		class AnimationSources
		{
			class gun_1_recoil_cannon
			{
				source = "reload";
				weapon = "fow_w_57mm_6Pdr";
			};
		};
		insideSoundCoef = 1;
		driverAction = "fow_6_pounder_driver";
		driverInAction = "fow_6_pounder_driver";
		driverForceOptics = 0;
		forceHidedriver = 0;
		memoryPointDriverOutOptics = "driverview";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		class Library
		{
			libTextDesc = "The Ordnance, Quick Firing 6-Pounder 7cwt Gun (57mm), with no.22c sights";
		};
		/*class Damage
		{
			tex[] = {};
			mat[] = {"wx_GB_6pounder\data\wx_GB_6pounder.rvmat","wx_GB_6pounder\data\wx_GB_6pounder.rvmat","wx_GB_6pounder\data\wx_GB_6pounder_Destruct.rvmat"};
		};*/
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				primaryGunner = 1;
				commanding = 1;
				proxyIndex = 1;
				hideProxyInCombat = 0;
				proxyType = "CPGunner";
				viewGunnerInExternal = 1;
				gunnerUsesPilotView = 1;
				gunnerName = "Gunner";
				ejectDeadGunner = 1;
				gunBeg = "gun_1_beg";
				gunEnd = "gun_1_end";
				memoryPointGun = "gun_1_muzzle";
				gunnerAction = "fow_6_pounder_gunner";
				gunnerInAction = "fow_6_pounder_gunner";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				forceHidegunner = 0;
				GunnerForceOptics = 0;
				namesound = "Cannon";
				gunnerOutOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsEffect[] = {};
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsModel = "\fow\fow_cannons\optics\No22C";
				gunnerOpticsEffect[] = {};
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerOpticsShowCursor = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				body = "turret_1";
				gun = "gun_1";
				animationSourceBody = "Turret_1";
				animationSourceGun = "Gun_1";
				selectionFireAnim = "zasleh_1";
				memoryPointGunnerOptics = "gunner_1_view";
				memoryPointGunnerOutOptics = "gunner_1_weaponview";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				minElev = -25;
				maxElev = 60;
				initElev = 0;
				minTurn = -35;
				maxTurn = 35;
				initTurn = 0;
				maxHorizontalRotSpeed = 0.16;
				maxVerticalRotSpeed = 0.16;
				weapons[] = {"fow_w_57mm_6Pdr"};
				magazines[] = {"fow_10Rnd_57mm_APCR","fow_10Rnd_57mm_APCBC","fow_20Rnd_57mm_AP","fow_10Rnd_57mm_APDS","fow_30Rnd_57mm_HE"};
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "turret_1";
						visual = "turret_1";
						passThrough = 0.8;
						minimalHit = 0.08;
					};
					class HitGun
					{
						armor = 0.8;
						material = -1;
						name = "gun_1";
						visual = "gun_1";
						passThrough = 0;
						minimalHit = 0.08;
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.15;
					maxFov = 0.25;
				};
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.35;
					minFov = 0.35;
					maxFov = 0.35;
				};
			};
		};
		class HitPoints
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
			class HitLTrack
			{
				armor = 0.3;
				material = -1;
				name = "track_L";
				visual = "track_L";
				passThrough = 0.1;
				minimalHit = 0.08;
			};
			class HitRTrack
			{
				armor = 0.3;
				material = -1;
				name = "track_R";
				visual = "track_R";
				passThrough = 0.1;
				minimalHit = 0.08;
			};
		};	
	
	
	};
	class fow_w_6Pounder_uk: fow_w_6Pounder {scope = 2;};
	class fow_w_6Pounder_usa: fow_w_6Pounder {
		scope = 2;
		displayName = "M1 Antitank gun 57 mm";
		faction = "fow_usa";
		crew = "fow_s_us_rifleman";		
	};
	class fow_w_6Pounder_usmc: fow_w_6Pounder {
		scope = 2;
		displayName = "M1 Antitank gun 57 mm";
		faction = "fow_usmc";
		crew = "fow_s_usmc_rifleman";		
	};
	class fow_w_6Pounder_ija: fow_w_6Pounder {
		scope = 2;
		side = 1;
		displayName = "6 Pounder (captured)";
		faction = "fow_ija";
		crew = "fow_s_ija_rifleman";		
	};
	
	//Bacward comp
	
	class fow_uk_6Pounder: fow_w_6Pounder {};
	/*
	class fow_uk_6Pounder_adv: Tank_F
	{
		displayName = "6 Pounder (ADV)";
		model = "\fow\fow_cannons\6pounder\6pounder.p3d";
		faction = "fow_uk";
		
		scope = 2;
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
		picture = "\fow\fow_cannons\6pounder\data\ui\pic_6Pounder_ca.paa";
		Icon = "\fow\fow_cannons\6pounder\data\ui\ico_6Pounder_ca.paa";
		mapSize = 11;

		
		#include "physX.hpp"
		//#include "sounds.hpp"

		class TransportMagazines{};
		transportAmmo = 0;
		crew = "fow_s_uk_rifleman";
		transportSoldier = 0;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		driverAction = "fow_6_pounder_driver";
		//driverInAction = "AH1Z_Pilot";
		supplyRadius = 1.7;
		animationSourceHatch = "";
		LeftDustEffect = "LDustEffects";
		RightDustEffect = "RDustEffects";
		driverForceOptics = 0;
		memoryPointDriverOutOptics = "driverview";
		class AnimationSources
		{

			class gun_1_recoil_cannon
			{
				source = "reload";
				weapon = "fow_w_57mm_6Pdr";
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

		};
		class Library
		{
			libTextDesc = "6 Pounder";
		};
		smokeLauncherGrenadeCount = 0;
		smokeLauncherVelocity = 0;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 120;

		class Turrets: Turrets
		{
			class Turret_1: NewTurret
			{
				primaryGunner = 1;
				commanding = 1;
				proxyIndex = 1;
				hideProxyInCombat = 0;
				proxyType = "CPGunner";
				viewGunnerInExternal = 1;
				gunnerUsesPilotView = 1;
				gunnerName = "Gunner";
				ejectDeadGunner = 1;
				gunBeg = "gun_1_beg";
				gunEnd = "gun_1_end";
				memoryPointGun = "gun_1_muzzle";
				gunnerAction = "fow_6_pounder_gunner";
				gunnerInAction = "fow_6_pounder_gunner";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				forceHidegunner = 0;
				GunnerForceOptics = 0;
				namesound = "Cannon";
				gunnerOutOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsEffect[] = {};
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsModel = "\fow\fow_cannons\optics\No22C";
				gunnerOpticsEffect[] = {};
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerOpticsShowCursor = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				body = "turret_1";
				gun = "gun_1";
				animationSourceBody = "Turret_1";
				animationSourceGun = "Gun_1";
				selectionFireAnim = "zasleh_1";
				memoryPointGunnerOptics = "gunner_1_view";
				memoryPointGunnerOutOptics = "gunner_1_weaponview";
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				minElev = -25;
				maxElev = 60;
				initElev = 0;
				minTurn = -50;
				maxTurn = 50;
				initTurn = 0;
				maxHorizontalRotSpeed = 0.16;
				maxVerticalRotSpeed = 0.16;
				weapons[] = {"fow_w_57mm_6Pdr"};
				magazines[] = {"fow_10Rnd_57mm_APCR","fow_10Rnd_57mm_APCBC","fow_20Rnd_57mm_AP","fow_10Rnd_57mm_APDS","fow_30Rnd_57mm_HE"};
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.15;
					maxFov = 0.25;
				};
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.35;
					minFov = 0.35;
					maxFov = 0.35;
				};
			};
		};
	};*/
