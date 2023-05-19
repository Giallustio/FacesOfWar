class CfgPatches
{
	class fow_veh_weapons_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_weapons_c"};
	};
};

#include "cfgAmmo.h"

class CfgMagazines {
	class VehicleMagazine;

//IJA
	
	class fow_49Rnd_37mm_APHE: VehicleMagazine
	{
		scope = 2;
		displayName = "37mm APHE";
		ammo = "fow_Sh_37mm_APHE";
		count = 49;
		initSpeed = 575;
	};
	class fow_49Rnd_37mm_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "37mm HE";
		ammo = "fow_Sh_37mm_HE";
		count = 49;
		initSpeed = 560;
	};
	class fow_20Rnd_77x58_Type97: VehicleMagazine
	{
		scope = 2;
		ammo = "fow_B_77x58_Ball";
		displayName = "20Rnd Type 97 Magazine";
		//picture = "\CA\weapons\data\equip\m_m240_ca.paa";
	};
	class fow_30Rnd_77x58_Type92: VehicleMagazine
	{
		scope = 2;
		model = "\fow\fow_statics\type92\WX_Type092_HMG_AmmoStrip";
		displayName = "30Rnd Type 92 AmmoStrip";
		picture="\fow\fow_statics\type92\data\ui\m_type92_ca.paa";
		initSpeed = 750;
		ammo = "fow_B_77x58_Ball";
		count = 30;
		tracersEvery = 3;
		descriptionShort = "30Rnd 77x58. Used in Type 92 HMG";
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 10;
	};
//US
	class fow_40Rnd_75mm_M48_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "M48 HE";
		ammo = "fow_Sh_75mm_M48_HE";
		count = 40;
		initSpeed = 463;
		maxLeadSpeed = 300;
		tracersEvery = 0;
		nameSound = "cannon";
	};
	class fow_30Rnd_75mm_M61_APCBC: VehicleMagazine
	{
		scope = 2;
		displayName = "M61 APCBC";
		ammo = "fow_Sh_75mm_M61_APCBC";
		count = 30;
		initSpeed = 619;
		maxLeadSpeed = 300;
		nameSound = "cannon";
	};
	class fow_27Rnd_75mm_M72_AP: VehicleMagazine
	{
		scope = 2;
		displayName = "M72 AP";
		ammo = "fow_Sh_75mm_M72_AP";
		count = 27;
		initSpeed = 619;
		maxLeadSpeed = 300;
		nameSound = "cannon";
	};
	class fow_40Rnd_37mm_M63_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "M63 HE";
		ammo = "fow_Sh_37mm_M63_HE";
		count = 40;
		initSpeed = 800;
	};
	class fow_30Rnd_37mm_M74_AP: VehicleMagazine
	{
		scope = 2;
		displayName = "M74 APC";
		ammo = "fow_Sh_37mm_M74_AP";
		count = 30;
		initSpeed = 880;
	};
	class fow_27Rnd_37mm_M51_APC: VehicleMagazine
	{
		scope = 2;
		displayName = "M51 AP";
		ammo = "fow_Sh_37mm_M51_APC";
		count = 27;
		initSpeed = 880;
	};
	class fow_50Rnd_M1919: VehicleMagazine
	{
		scope = 2;
		ammo = "fow_B_303_Ball";
		displayName = "50Rnd 30Cal Ammobox";
		picture = "\fow\fow_statics\vickers\data\ui\m_vickers_ca.paa";
		initSpeed = 750;
		count = 50;
		tracersEvery = 5;
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 20;
		model = "fow\fow_statics\vickers\fow_vickers_ammobox";
	};
	/* class WX_US_100Rnd_M1919: WX_US_50Rnd_M1919
	 {
	  displayName = "100Rnd 30Cal Ammobox";
	  count = 100;
	 };
	 class WX_US_150Rnd_M1919: WX_US_50Rnd_M1919
	 {
	  displayName = "150Rnd 30Cal Ammobox";
	  count = 150;
	 };
	 class WX_US_200Rnd_M1919: WX_US_50Rnd_M1919
	 {
	  displayName = "200Rnd 30Cal Ammobox";
	  count = 200;
	 };
*/
	class fow_250Rnd_M1919: fow_50Rnd_M1919
	{
		displayName = "250Rnd 30Cal Ammobox";
		picture = "\fow\fow_statics\vickers\data\ui\m_vickers_ca.paa";
		count = 250;
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 40;
		model = "fow\fow_statics\vickers\fow_vickers_ammobox";
	};
//UK
	class fow_250Rnd_vickers: VehicleMagazine
	{
		scope = 2;
		ammo = "fow_B_303_Ball";
		displayName = "250Rnd .303 Ammobox";
		picture = "\fow\fow_statics\vickers\data\ui\m_vickers_ca.paa";
		initSpeed = 744;
		count = 250;
		tracersEvery = 5;
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 40;
		model = "fow\fow_statics\vickers\fow_vickers_ammobox";
	};
	class fow_30Rnd_303_bren_mounted: VehicleMagazine
	{
		scope = 2;
		displayName = "30Rnd 303 Bren";
		initSpeed = 744;
		ammo = "fow_B_303_Ball";
		count = 30;
	};
	class fow_10Rnd_57mm_APCR: VehicleMagazine
	{
		scope = 2;
		displayName = "57mm 1T APCR";
		ammo = "fow_Sh_57mm_APCR";
		count = 10;
		initSpeed = 400;
	};
	class fow_10Rnd_57mm_APCBC: VehicleMagazine
	{
		scope = 2;
		displayName = "57mm 9T APCBC";
		ammo = "fow_Sh_57mm_APCBC";
		count = 10;
		initSpeed = 380;
	};
	class fow_20Rnd_57mm_AP: VehicleMagazine
	{
		scope = 2;
		displayName = "57mm 7T AP";
		ammo = "fow_Sh_57mm_AP";
		count = 20;
		initSpeed = 350;
	};
	class fow_10Rnd_57mm_APDS: VehicleMagazine
	{
		scope = 2;
		displayName = "57mm 1T APDS";
		ammo = "fow_Sh_57mm_APDS";
		count = 10;
		initSpeed = 450;
	};
	class fow_30Rnd_57mm_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "57mm 10T HE";
		ammo = "fow_Sh_57mm_HE";
		count = 30;
		initSpeed = 350;
	};
	//GER
	class fow_30Rnd_75mm_pzgr4042_APCR: VehicleMagazine
	{
		scope = 2;
		displayName = "75mm Pzgr. 40/42 APCR";
		ammo = "fow_Sh_75mm_pzgr4042_APCR";
		count = 30;
		initSpeed = 1120;
	};
	class fow_30Rnd_75mm_pzgr3942_APCBC_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "75mm Pzgr. 39/42 APCBC-HE";
		ammo = "fow_Sh_75mm_pzgr3942_APCBC_HE";
		count = 30;
		initSpeed = 925;
	};
	class fow_30Rnd_75mm_sprg42_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "75mm Sprg. 42 HE";
		ammo = "fow_Sh_75mm_sprg42_HE";
		count = 30;
		initSpeed = 700;
	};
	class fow_30Rnd_75mm_pzgr40_APCR: VehicleMagazine
	{
		scope = 2;
		displayName = "75mm Pzgr. 40 APCR";
		ammo = "fow_Sh_75mm_pzgr40_APCR";
		count = 30;
		initSpeed = 1120;
		muzzleImpulseFactor[]={0,0};
	};
	class fow_30Rnd_75mm_pzgr39_APCBC: VehicleMagazine
	{
		scope = 2;
		displayName = "75mm Pzgr. 39 APCBC";
		ammo = "fow_Sh_75mm_pzgr39_APCBC";
		count = 30;
		initSpeed = 925;
	};
	class fow_30Rnd_75mm_sprg34_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "75mm Sprg. 34 HE";
		ammo = "fow_Sh_75mm_sprg34_HE";
		count = 30;
		initSpeed = 700;
	};
	class fow_30Rnd_50mm_pzgr39_APCBC: VehicleMagazine
	{
		scope = 2;
		displayName = "50mm PzGr. 39 APCBC";
		ammo = "fow_Sh_50mm_pzgr39_APCBC";
		count = 30;
		initSpeed = 685;
	};
	class fow_20Rnd_50mm_pzgr40_APCR: VehicleMagazine
	{
		scope = 2;
		displayName = "50mm PzGr. 40 APCR";
		ammo = "fow_Sh_50mm_pzgr40_APCR";
		count = 20;
		initSpeed = 1050;
	};
	class fow_34Rnd_50mm_sprg34_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "50mm Sprg. 34 HE";
		ammo = "fow_Sh_50mm_sprg34_HE";
		count = 30;
		initSpeed = 700;
	};
	
	class fow_30Rnd_88mm_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "88mm HE";
		ammo = "fow_Sh_88mm_HE";
		count = 30;
		initSpeed = 820;
	};
	class fow_30Rnd_88mm_AP: VehicleMagazine
	{
		scope = 2;
		displayName = "88mm AP";
		ammo = "fow_Sh_88mm_AP";
		count = 30;
		initSpeed = 810;
	};
	class fow_20Rnd_20mm_AP: VehicleMagazine
	{
		scope = 2;
		displayName = "20mm AP";
		ammo = "fow_B_20mm_AP";
		count = 20;
		initSpeed = 1050;
	};
	class fow_20Rnd_20mm_HE: VehicleMagazine
	{
		scope = 2;
		displayName = "20mm HE";
		ammo = "fow_B_20mm_HE";
		count = 20;
		initSpeed = 900;
	};
	class fow_200Rnd_792x57: VehicleMagazine
	{
		scope = 2;
		ammo = "fow_B_792x57_Ball";
		displayName = "200Rnd 7.92x57mm";
		//picture = "\WX_US_M1919\data\WX_US_M1919_AmmoBox_Pic.paa";
		initSpeed = 760;
		count = 200;
		tracersEvery = 1;
	};
	class fow_250Rnd_792x57: VehicleMagazine
	{
		scope = 2;
		ammo = "fow_B_792x57_Ball";
		displayName = "250Rnd 7.92x57mm";
		picture = "\fow\fow_statics\mg42\data\ui\m_mg42_ca.paa";
		initSpeed = 760;
		count = 250;
		tracersEvery = 1;
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 40;
		model = "fow\fow_statics\mg42\mg42_ammobox_250";
	};
	//PLANES
	class 500Rnd_127x99_mag_Tracer_Red;
	class 1000Rnd_20mm_shells;

	class fow_1600Rnd_127x99_Tracer_Red: 500Rnd_127x99_mag_Tracer_Red
	{
		author = "fow";
		ammo = "fow_B_127x99_Ball_Tracer_Red";
		count = 1600;
		tracersEvery = 1;
	};
	class fow_2400Rnd_127x99_Tracer_Red: fow_1600Rnd_127x99_Tracer_Red
	{
		author = "fow";
		count = 2400;
		tracersEvery = 1;
	};
	class fow_1000Rnd_77x56_Tracer_Yellow: VehicleMagazine
	{
		author = "fow";
		scope = 2;
		ammo = "fow_B_77x56_Ball_Tracer_Yellow";
		displayName = "1000Rnd 7.7x56mm";
		count = 1000;
		initSpeed = 750;
		tracersEvery = 1;
	};
	class fow_450Rnd_20mm_shells: 1000Rnd_20mm_shells
	{
		author = "fow";
		count = 450;
		ammo = "fow_B_20mm_Tracer_Yellow";
	};
	class fow_120Rnd_20mm_shells: 1000Rnd_20mm_shells
	{
		author = "fow";
		count = 120;
		ammo = "fow_B_20mm_Tracer_Yellow";
	};	
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class cfgWeapons {
	class MGun;
	class CannonCore;
	class autocannon_Base_F;
	class HMG_M2;
	//GER
	class fow_w_75mm_kwk42: CannonCore
	{
		scope = 1;
		displayName = "75mm KwK 42";
		//sound[] = {"\fow\fow_tanks\m4a2\Sound\75mm_Fire01"};
		reloadSound[] = {"\fow\fow_tanks\m4a2\Sound\Reload",1,1,20};
		magazines[] = {"fow_30Rnd_75mm_pzgr4042_APCR","fow_30Rnd_75mm_pzgr3942_APCBC_HE","fow_30Rnd_75mm_sprg42_HE"};
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		//initSpeed = 450;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 0.7;
		minRange = 5;
		minRangeProbab = 0.7;
		reloadTime = 5;
		magazineReloadTime = 5;
		class GunParticles {
			class FirstEffect {
				effectName = "CannonFired";
				positionName = "gunbeg_1";
				directionName = "gunend_1";
			};
		};
		modes[] = {"player","close","short","medium","far"};
		class player: Mode_SemiAuto
		{
			aiRateOfFire = 6;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 4.5;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00025;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 15;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 20;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class fow_w_75mm_kwk40: fow_w_75mm_kwk42 {
		displayName = "75mm KwK 40";
		magazines[] = {"fow_30Rnd_75mm_pzgr40_APCR","fow_30Rnd_75mm_pzgr39_APCBC","fow_30Rnd_75mm_sprg34_HE"};
		class GunParticles {
			class FirstEffect {
				effectName = "CannonFired";
				positionName = "gun_1_beg";
				directionName = "gun_1_end";
			};
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_shell_75mm";
			};
		};
	};
	class fow_w_50mm_kwk38_l42: CannonCore
	{
		scope = 1;
		displayName = "50mm KwK 38 L/42";
		//sound[] = {"\fow\fow_tanks\m4a2\Sound\75mm_Fire01"};
		reloadSound[] = {"\fow\fow_tanks\m4a2\Sound\Reload",1,1,20};
		magazines[] = {"fow_30Rnd_50mm_pzgr39_APCBC","fow_20Rnd_50mm_pzgr40_APCR","fow_34Rnd_50mm_sprg34_HE"};
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		//initSpeed = 450;
		maxRange = 1500;
		maxRangeProbab = 0.1;
		midRange = 750;
		midRangeProbab = 0.7;
		minRange = 5;
		minRangeProbab = 0.7;
		reloadTime = 5;
		magazineReloadTime = 5;
		class GunParticles {
			class FirstEffect {
				effectName = "CannonFired";
				positionName = "gunbeg_1";
				directionName = "gunend_1";
			};
		};
		modes[] = {"player","close","short","medium","far"};
		class player: Mode_SemiAuto
		{
			aiRateOfFire = 6;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00025;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 15;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 20;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class fow_w_88mm_flak: CannonCore
	{
		scope = 1;
		displayName = "88mm Flak36";
		//sound[] = {"\Timo_sound\weapons\WX_GB_6Pounder\Sound\_57mmShot01",210,1,1200};
		reloadSound[] = {"\fow\fow_tanks\m4a2\Sound\Reload",1,1,40};
		magazines[] = {"fow_30Rnd_88mm_AP","fow_30Rnd_88mm_HE"};
		//initSpeed = 450;
		reloadTime = 4;
		minRange = 1;
		minRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 1;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		magazineReloadTime = 5.5;
		maxLeadSpeed = 80;
		canLock = 0;
		autoFire = 0;
		modes[] = {"player","close","short","medium","far"};
		class player: Mode_SemiAuto
		{
			aiRateOfFire = 5;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 5;
			magazineReloadTime = 5;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00015;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 8;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 12;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 16;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
		class GunParticles {
			class FirstEffect {
				effectName = "CannonFired";
				positionName = "Usti Hlavne";
				directionName = "Konec Hlavne";
			};
		};
	};
	class fow_w_20mm_kwk38: autocannon_Base_F
	{
		scope = 1;
		displayName = "20mm KwK38";
		//sound[] = {"\Timo_sound\weapons\WX_GB_6Pounder\Sound\_57mmShot01",210,1,1200};
		reloadSound[] = {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",3.1622777,1,50};
		magazines[] = {"fow_20Rnd_20mm_AP","fow_20Rnd_20mm_HE"};
		magazineReloadTime = 8;
		//initSpeed = 450;
		reloadTime = 4;
		/*minRange = 1;
		minRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 1;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		magazineReloadTime = 5.5;
		maxLeadSpeed = 80;*/
		ballisticsComputer = 0;
		canLock = 0;
		modes[] = {"player","close","short","medium","far"};
		class player: Mode_FullAuto
		{
			aiRateOfFire = 0.5;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_01",1.9952624,1,1500};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_02",1.9952624,1,1500};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_30mm\autocannon_30mm_03",1.9952624,1,1500};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
			soundContinuous = 0;
			reloadTime = 0.214;
			magazineReloadTime = 4;
			autoReload = 1;
			autoFire = 1;
			dispersion = 0.0015;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 100;
			midRangeProbab = 0.78;
			maxRange = 200;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
		class GunParticles
		{
			class Effect
			{
				effectName = "AutoCannonFired";
				positionName = "gun_1_beg";
				directionName = "gun_1_end";
			};
		};
	};
	class fow_w_mg34_mounted: HMG_M2//Need to change this
	{
		scope = 1;
		displayName = "MG 34";
		magazines[] = {"fow_200Rnd_792x57"};
		magazineReloadTime = 8;
		
		modes[] = {"manual","close","short","medium","far"};
		
		class manual: MGun
		{
			displayName = "MG 34";
			autoFire = 1;
			class BaseSoundModeType {};			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"fow_MG42_Firing", "fow_Rifle_EFX", "fow_Interior_Reverb_MG42"};
			};
			reloadTime = 0.06;
			dispersion = 0.0015;
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
			burst = 15;
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
			burst = 15;
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
			burst = 15;
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
			burst = 10;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "mg34_beg";
				directionName = "mg34_end";
				effectName = "fow_w_effect_mg";
			};
		};		
	};
	class fow_w_mg34_mounted_t_1: fow_w_mg34_mounted {
		class GunParticles {
			class effect_fire {
				positionName = "gunbeg_2";
				directionName = "gunend_2";
				effectName = "fow_w_effect_mg";
			};
		};			
	};
	class fow_w_mg34_mounted_t_3: fow_w_mg34_mounted {
		class GunParticles {
			class effect_fire {
				positionName = "gunbeg_3";
				directionName = "gunend_3";
				effectName = "fow_w_effect_mg";
			};
		};			
	};
	class fow_w_mg42_mounted: HMG_M2//Need to change this
	{
		scope = 1;
		displayName = "MG42";
		magazines[] = {"fow_50Rnd_792x57","fow_200Rnd_792x57","fow_250Rnd_792x57"};
		magazineReloadTime = 8;
		
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			reloadTime = 0.05;
			dispersion = 0.00102;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				closure1[] = {"", 0, 1, 0};
				closure2[] = {"", 0, 1, 0};
				soundClosure[] = {"closure1", 0, "closure2", 0};
			};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"fow_MG42_Firing", "fow_Rifle_EFX", "fow_Interior_Reverb_MG42"};
			};
			
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;
			showToPlayer = 1;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 15;
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
			burst = 15;
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
			burst = 15;
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
			burst = 10;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		aiDispersionCoefY = 23.0;
		aiDispersionCoefX = 19.0;

		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_mg";
			};
		};	
	};
	class fow_w_mg42_mounted_1: fow_w_mg42_mounted {
		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "gun_1_beg";
				directionName = "gun_1_end";
				effectName = "fow_w_effect_mg";
			};
		};			
	};	
	class fow_w_mg42_mounted_static: fow_w_mg42_mounted {
		/*
		fow_burstLenght = 15;
		class Eventhandlers {
			class fow_mgRoF {
				fired = "_this spawn fow_main_fnc_mgRoFStatic;";
			};
		};		*/
	};
	//IJA
	class fow_w_type92: MGun
	{
		scope = 2;
		displayName = "Type 92";

		//picture = "\WX_IJA_Type092_HMG\data\WX_IJA_Type092_HMG_Weapon_Pic.paa";
		//UiPicture = "\WX_IJA_Type092_HMG\data\WX_IJA_Type092_HMG_Weapon_Pic.paa";
		
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\type92\reload.wav","+3db",1,25};

		magazines[] = {"fow_30Rnd_77x58_Type92"};
		magazineReloadTime = 3;
		/*
		fow_burstLenght = 5;
		class Eventhandlers {
			class fow_mgRoF {
				fired = "_this spawn fow_main_fnc_mgRoFStatic;";
			};
		};		*/
		
		
		modes[] = {"manual","close","short","medium","far"};
		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "mg34_beg";
				directionName = "mg34_end";
				effectName = "fow_w_effect_mg";
			};
		};
		class manual: MGun
		{
			reloadTime = 0.13;
			aiRateOfFire = 1;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				closure1[] = {"", 0.562341, 1, 10};
				closure2[] = {"", 0.562341, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
			};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"fow_Type92_Firing", "fow_Rifle_EFX"};
			};
			soundContinuous = 0;
			soundBurst = 0;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 12;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			burst = 8;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 750;
			midRangeProbab = 0.4;
			maxRange = 1000;
			maxRangeProbab = 0.01;
		};
	};
	class fow_w_37mm: CannonCore
	{
		scope = 1;
		displayName = "37mm Cannon";
		//sound[] = {"\fow\fow_tanks\type95\Sound\37mm_Fire01",210,1,500};
		reloadSound[] = {"\fow\fow_tanks\type95\Sound\Reload01",1,1,40};
		magazines[] = {"fow_49Rnd_37mm_APHE","fow_49Rnd_37mm_HE"};
		memorypointcamera = "eye";
		cameradir = "eye_dir";
		memorypointaimingaxis = "aiming_axis";
		memorypointcameratarget = "zamerny";
		initSpeed = 450;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		//fireDustEffect = "FDustEffects";
		flash = "gunfire";
		flashSize = 0.3;
		//cursor = "Vehicle_W_MG";
		//cursorAim = "\ca\Weapons\Data\clear_empty";
		cursorSize = 0.5;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 0.5;
		minRange = 1;
		minRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 5;
		maxLeadSpeed = 80;
		modes[] = {"player","close","short","medium","far"};
		class GunParticles {
			class FirstEffect {
				effectName = "CannonFired";
				positionName = "gun_1_beg";
				directionName = "gun_1_end";
			};
		};
		class player : Mode_SemiAuto {
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 6;
			magazineReloadTime = 0;
			reloadSound[] = {"\fow\fow_tanks\m4a2\Sound\Reload",1,1,600};
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 15;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 20;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class fow_w_type77_mg: MGun
	{
		scope = 1;
		displayName = "Type97 7.7mm MG";
		sound[] = {"\fow\fow_tanks\type95\Sound\77mg_Fire01",190.0,1,300};
		aiDispersionCoefY = 21;
		aiDispersionCoefX = 21;
		magazines[] = {"fow_20Rnd_77x58_Type97"};
		magazineReloadTime = 3;
		canLock = 0;
		
		memorypointcamera = "eye";
		cameradir = "eye_dir";
		memorypointaimingaxis = "aiming_axis";
		memorypointcameratarget = "zamerny";

		showAimCursorInternal = 1;
		flash = "gunfire";
		flashSize = 0.1;
		recoil = "Empty";
		ffMagnitude = 0.5;
		ffFrequency = 11;
		ffCount = 6;
			
		modes[] = {"manual","close","short","medium","far"};
		
		class manual: MGun
		{
			displayName = "Type97 7.7mm MG";
			autoFire = 1;
			class BaseSoundModeType {};			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"fow_Type92_Firing", "fow_Rifle_EFX"};
			};

			soundContinuous = 0;
			soundBurst = 0;
			reloadTime = 0.09;
			dispersion = 0.0015;
			showToPlayer = 1;
			burst = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 10;
			burstRangeMax = 20;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;	
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 10;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 10;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};

	};
	class fow_w_type77_mg_1: fow_w_type77_mg
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "gun_1_beg";
				directionName = "gun_1_end";
				effectName = "MachineGunCloud";
			};
		};
	};
	class fow_w_type77_mg_2: fow_w_type77_mg
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "gun_2_beg";
				directionName = "gun_2_end";
				effectName = "MachineGunCloud";
			};
		};
	};	
	class fow_w_type77_mg_3: fow_w_type77_mg
	{
		class GunParticles
		{
			class effect1
			{
				positionName = "gun_3_beg";
				directionName = "gun_3_end";
				effectName = "MachineGunCloud";
			};
		};
	};

	//US
	class fow_w_75mm_M3: CannonCore
	{
		scope = 1;
		displayName = "M3 75mm";
		//sound[] = {"\fow\fow_tanks\m4a2\Sound\75mm_Fire01"};
		reloadSound[] = {"\fow\fow_tanks\m4a2\Sound\Reload",1,1,40};
		magazines[] = {"fow_40Rnd_75mm_M48_HE","fow_30Rnd_75mm_M61_APCBC","fow_27Rnd_75mm_M72_AP"};
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		//initSpeed = 450;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 0.7;
		minRange = 5;
		minRangeProbab = 0.7;
		reloadTime = 5;
		magazineReloadTime = 5;
		class GunParticles {
			class FirstEffect {
				effectName = "CannonFired";
				positionName = "gunbeg_1";
				directionName = "gunend_1";
			};
		};
		modes[] = {"player","close","short","medium","far"};
		class player: Mode_SemiAuto
		{
			aiRateOfFire = 6;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00025;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 15;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 20;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class fow_w_37mm_M6: fow_w_75mm_M3
	{
		scope = 1;
		displayName = "M6 37mm";
		//sound[] = {"\fow\fow_tanks\m5a1\sounds\37mm_Fire01",210,1,1200};
		reloadSound[] = {"\fow\fow_tanks\m5a1\sounds\Reload",1,1,40};
		magazines[] = {"fow_40Rnd_37mm_M63_HE","fow_30Rnd_37mm_M74_AP","fow_27Rnd_37mm_M51_APC"};
		//initSpeed = 450;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 0.5;
		minRange = 1;
		minRangeProbab = 0.1;
		reloadTime = 5;
		magazineReloadTime = 5;
		maxLeadSpeed = 80;
		modes[] = {"player","close","short","medium","far"};
		class player: Mode_SemiAuto
		{
			aiRateOfFire = 6;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 6;
			magazineReloadTime = 6;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00025;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 10;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 15;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 20;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
	};
	class fow_w_m1919a4_mounted: MGun//Need to change this
	{
		scope = 1;
		displayName = "M1919 A4";
		magazines[] = {"fow_50Rnd_M1919","fow_250Rnd_M1919"};
		magazineReloadTime = 8;
		
		modes[] = {"manual","close","short","medium","far"};
		aiDispersionCoefY = 3;
		aiDispersionCoefX = 3;
		class manual: MGun
		{
			displayName = "M1919 A4 Browning";
			autoFire = 1;
			class BaseSoundModeType {};			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"fow_M1919_Mounted", "fow_Rifle_EFX"};
			};
			showToPlayer = 1;
			soundContinuous = 0;
			soundBurst = 0;			
			reloadTime = 0.12;
			dispersion = 0.008;
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
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 20;			
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 10;
			burstRangeMax = 12;
			aiRateOfFire = 1;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 10;
			burstRangeMax = 12;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 8;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};
	class fow_w_m1919a4_static: fow_w_m1919a4_mounted
	{
		/*fow_burstLenght = 7;
		class Eventhandlers {
			class fow_mgRoF {
				fired = "_this spawn fow_main_fnc_mgRoFStatic;";
			};
		};	*/

		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "M1919 A4 Browning";
			autoFire = 1;
			class BaseSoundModeType {};			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"fow_M1919_Firing", "fow_Rifle_EFX", "fow_Interior_Reverb"};
			};
			reloadTime = 0.12;
			dispersion = 0.0015;
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
			burst = 12;
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
			burst = 10;
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
			burst = 10;
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
			burst = 8;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};

		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_mg";
			};
		};	
	};
	class fow_w_m1919a4_mounted_lvta2_1: fow_w_m1919a4_static {
		class GunParticles {
			class effect_cartridge {
				positionName = "gun_1_nabojnicestart";
				directionName = "gun_1_nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "gun_1_beg";
				directionName = "gun_1_end";
				effectName = "fow_w_effect_mg";
			};
		};			
	};
	class fow_w_m1919a4_mounted_lvta2_2: fow_w_m1919a4_static {
		class GunParticles {
			class effect_cartridge {
				positionName = "gun_2_nabojnicestart";
				directionName = "gun_2_nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "gun_2_beg";
				directionName = "gun_2_end";
				effectName = "fow_w_effect_mg";
			};
		};			
	};
	//UK
	class fow_w_vickers_mounted: HMG_M2//Need to change this
	{
		scope = 1;
		displayName = "Vickers";
		magazines[] = {"fow_250Rnd_vickers"};
		magazineReloadTime = 8;
		modes[] = {"manual","close","short","medium","far"};
		/*
		fow_burstLenght = 7;
		class Eventhandlers {
			class fow_mgRoF {
				fired = "_this spawn fow_main_fnc_mgRoFStatic;";
			};
		};	*/
		
		class manual: MGun
		{
			displayName = "Vickers";
			autoFire = 1;
			class BaseSoundModeType {};			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"fow_Vickers_Firing", "fow_Rifle_EFX", "fow_Interior_Reverb"};
			};
			reloadTime = 0.12;
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
			burst = 12;
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
			burst = 10;
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
			burst = 10;
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
			burst = 8;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_mg";
			};
		};	
	};
	class fow_w_bren_mounted: HMG_M2//Need to change this
	{
		scope = 1;
		displayName = "Bren Mounted";
		magazineReloadTime = 5;
		magazines[] = {"fow_30Rnd_303_bren_mounted"};
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			displayName = "Bren Mounted";
			autoFire = 1;
			class BaseSoundModeType {};			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"fow_Bren_Firing", "fow_Rifle_EFX", "fow_Interior_Reverb"};
			};
			reloadTime = 0.12;
			dispersion = 0.00102;
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
			burst = 12;
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
			burst = 10;
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
			burst = 10;
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
			burst = 8;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_mg";
			};
		};	
	};
	class fow_w_besa_mg_mounted: HMG_M2//Need to change this
	{
		scope = 1;
		displayName = "Besa MG";
		magazines[] = {"fow_250Rnd_792x57"};
		modes[] = {"slow","fast","close","short","medium","far"};
		class slow: MGun
		{
			displayName = "Besa MG (slow)";
			textureType = "burst";
			autoFire = 1;
			class BaseSoundModeType {};			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"fow_Bren_Firing", "fow_Rifle_EFX", "fow_Interior_Reverb"};
			};
			reloadTime = 0.12;
			dispersion = 0.00102;
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
		class fast: slow
		{
			displayName = "Besa MG (fast)";
			autoFire = 1;
			class BaseSoundModeType {};			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"fow_Bren_Firing", "fow_Rifle_EFX", "fow_Interior_Reverb"};
			};
			reloadTime = 0.075;
			dispersion = 0.00102;
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
		class close: slow
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 12;
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
			burst = 10;
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
			burst = 10;
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
			burst = 8;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 800;
			maxRangeProbab = 0.01;
		};
		class GunParticles {
			/*class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};*/
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_mg";
			};
		};	
	};
	class fow_w_bren_mounted_1: fow_w_bren_mounted {
		class GunParticles
		{
			class effect1
			{
				positionName = "gun_1_beg";
				directionName = "gun_1_end";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "gun_1_nabojnicestart";
				directionName = "gun_1_nabojniceend";
				effectName = "MachineGunEject";
			};
			class effect3
			{
				positionName = "gun_1_nabojnicestart";
				directionName = "gun_1_nabojniceend";
				effectName = "MachineGunCartridge2";
			};
		};		
	};
	class fow_w_bren_mounted_2: fow_w_bren_mounted {
		class GunParticles
		{
			class effect1
			{
				positionName = "gun_2_Beg";
				directionName = "gun_2_End";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "gun_2_nabojnicestart";
				directionName = "gun_2_nabojniceend";
				effectName = "MachineGunEject";
			};
			class effect3
			{
				positionName = "gun_2_nabojnicestart";
				directionName = "gun_2_nabojniceend";
				effectName = "MachineGunCartridge2";
			};
		};		
	};
	class fow_w_57mm_6Pdr: CannonCore
	{
		scope = 1;
		displayName = "57mm 6Pdr";
		//sound[] = {"\Timo_sound\weapons\WX_GB_6Pounder\Sound\_57mmShot01",210,1,1200};
		reloadSound[] = {"\fow\fow_tanks\m4a2\Sound\Reload",1,1,40};
		magazines[] = {"fow_10Rnd_57mm_APCR","fow_10Rnd_57mm_APCBC","fow_20Rnd_57mm_AP","fow_10Rnd_57mm_APDS","fow_30Rnd_57mm_HE"};
		//initSpeed = 450;
		minRange = 1;
		minRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 1;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		reloadTime = 6;
		magazineReloadTime = 5.5;
		maxLeadSpeed = 80;
		canLock = 0;
		autoFire = 0;
		modes[] = {"player","close","short","medium","far"};
		class player: Mode_SemiAuto
		{
			aiRateOfFire = 5;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_105mm\slammer_105mm_distant",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 5;
			magazineReloadTime = 5;
			autoReload = 1;
			autoFire = 0;
			dispersion = 0.00015;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
		class short: close
		{
			aiRateOfFire = 8;
			aiRateOfFireDistance = 300;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1500;
			maxRangeProbab = 0.04;
		};
		class medium: short
		{
			aiRateOfFire = 12;
			aiRateOfFireDistance = 600;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1500;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		class far: medium
		{
			aiRateOfFire = 16;
			aiRateOfFireDistance = 1000;
			minRange = 1500;
			minRangeProbab = 0.05;
			midRange = 2500;
			midRangeProbab = 0.4;
			maxRange = 3000;
			maxRangeProbab = 0.01;
		};
		class GunParticles {
			class FirstEffect {
				effectName = "CannonFired";
				positionName = "gun_1_beg";
				directionName = "gun_1_end";
			};
		};
	};
	class fow_w_75mm_OQF: fow_w_75mm_M3
	{
		scope = 1;
		displayName = "OQF 75 mm";
		//sound[] = {"\fow\fow_tanks\m4a2\Sound\75mm_Fire01"};
		reloadSound[] = {"\fow\fow_tanks\m4a2\Sound\Reload",1,1,40};
		magazines[] = {"fow_40Rnd_75mm_M48_HE","fow_30Rnd_75mm_M61_APCBC","fow_27Rnd_75mm_M72_AP"};
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		//initSpeed = 450;
		maxRange = 2000;
		maxRangeProbab = 0.1;
		midRange = 1000;
		midRangeProbab = 0.7;
		minRange = 5;
		minRangeProbab = 0.7;
		reloadTime = 5;
		magazineReloadTime = 5;
	};
	
	//PLANES
	//US
	class fow_w_m2_mg_4x: HMG_M2 {
		displayName = "4x M2 12.7 mm";
		magazines[] = {"fow_1600Rnd_127x99_Tracer_Red"};
		cursorAim = "mg";
		muzzlePos = "MG_L_Chamber_01";
		muzzleEnd = "MG_L_muzzle_01";
		selectionFireAnim = "wx_us_hellcat_4x50_muzzleflash";
		modes[] = {"LowROF","close","near","short","medium","far"};
		
		class LowROF: Mode_FullAuto
		{
			displayName = "4x M2 12.7 mm";
			reloadTime = 0.018;
			aiRateOfFire = 0.072;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_01", 1.58489, 1, 2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_02", 1.58489, 1, 2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_03", 1.58489, 1, 2100};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10", 0.630957, 1, 20};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11", 0.630957, 1.2, 30};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				soundsetshot[] = {"HMG127mm_shot_SoundSet", "HMG127mm_tail_SoundSet"};
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 8;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.006;
			burst = 4;
			showToPlayer = 1;
		};
		class close: LowROF
		{
			showToPlayer = 0;
			burst = 15;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 150;
			midRangeProbab = 0.88;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class near: close
		{
			showToPlayer = 0;
			burst = 13;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 250;
			midRangeProbab = 0.88;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.88;
			maxRange = 600;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 7;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 700;
			midRangeProbab = 0.78;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.6;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};		
		class gunParticles
		{
			class effect2L_cloud
			{
				positionName = "MG_L_Chamber_02";
				directionName = "MG_L_muzzle_02";
				effectName = "MachineGun1";
			};
			class effect2L_eject
			{
				positionName = "MG_L_muzzle_02_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject";
			};
			class effect2L_cart
			{
				positionName = "MG_L_muzzle_02_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect3L_cloud
			{
				positionName = "MG_L_Chamber_03";
				directionName = "MG_L_muzzle_03";
				effectName = "MachineGun1";
			};
			class effect3L_eject
			{
				positionName = "MG_L_muzzle_03_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject";
			};
			class effect3L_cart
			{
				positionName = "MG_L_muzzle_03_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect2R_cloud
			{
				positionName = "MG_R_Chamber_02";
				directionName = "MG_R_muzzle_02";
				effectName = "MachineGun1";
			};
			class effect2R_eject
			{
				positionName = "MG_R_muzzle_02_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject";
			};
			class effect2R_cart
			{
				positionName = "MG_R_muzzle_02_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect3R_cloud
			{
				positionName = "MG_R_Chamber_03";
				directionName = "MG_R_muzzle_03";
				effectName = "MachineGun1";
			};
			class effect3R_eject
			{
				positionName = "MG_R_muzzle_03_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject";
			};
			class effect3R_cart
			{
				positionName = "MG_R_muzzle_03_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunCartridge2";
			};
		};			
	};
	class fow_w_m2_mg_6x: fow_w_m2_mg_4x {
		displayName = "6x M2 12.7 mm";
		magazines[] = {"fow_2400Rnd_127x99_Tracer_Red"};
		reloadTime = 0.06;
		cursorAim = "mg";
		muzzlePos = "MG_L_Chamber_01";
		muzzleEnd = "MG_L_muzzle_01";
		selectionFireAnim = "wx_us_hellcat_6x50_muzzleflash";
		class LowROF: Mode_FullAuto
		{
			displayName = "6x M2 12.7 mm";
			reloadTime = 0.015;
			aiRateOfFire = 0.08;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_01", 1.58489, 1, 2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_02", 1.58489, 1, 2200};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_03", 1.58489, 1, 2100};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10", 0.630957, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11", 0.630957, 1.2, 20};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				soundsetshot[] = {"HMG127mm_shot_SoundSet", "HMG127mm_tail_SoundSet"};
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 8;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.006;
			burst = 3;
			showToPlayer = 1;
		};
		class gunParticles
		{
			class effect1L_cloud
			{
				positionName = "MG_L_Chamber_01";
				directionName = "MG_L_muzzle_01";
				effectName = "MachineGun1";
			};
			class effect1L_eject
			{
				positionName = "MG_L_muzzle_01_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject";
			};
			class effect1L_cart
			{
				positionName = "MG_L_muzzle_01_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect2L_cloud
			{
				positionName = "MG_L_Chamber_02";
				directionName = "MG_L_muzzle_02";
				effectName = "MachineGun1";
			};
			class effect2L_eject
			{
				positionName = "MG_L_muzzle_02_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject";
			};
			class effect2L_cart
			{
				positionName = "MG_L_muzzle_02_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect3L_cloud
			{
				positionName = "MG_L_Chamber_03";
				directionName = "MG_L_muzzle_03";
				effectName = "MachineGun1";
			};
			class effect3L_eject
			{
				positionName = "MG_L_muzzle_03_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject";
			};
			class effect3L_cart
			{
				positionName = "MG_L_muzzle_03_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect1R_cloud
			{
				positionName = "MG_R_Chamber_01";
				directionName = "MG_R_muzzle_01";
				effectName = "MachineGun1";
			};
			class effect1R_eject
			{
				positionName = "MG_R_muzzle_01_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject";
			};
			class effect1R_cart
			{
				positionName = "MG_R_muzzle_01_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunCartridge2";
			};
			class effect2R_cloud
			{
				positionName = "MG_R_Chamber_02";
				directionName = "MG_R_muzzle_02";
				effectName = "MachineGun1";
			};
			class effect2R_eject
			{
				positionName = "MG_R_muzzle_02_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject";
			};
			class effect2R_cart
			{
				positionName = "MG_R_muzzle_02_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunCartridge";
			};
			class effect3R_cloud
			{
				positionName = "MG_R_Chamber_03";
				directionName = "MG_R_muzzle_03";
				effectName = "MachineGun1";
			};
			class effect3R_eject
			{
				positionName = "MG_R_muzzle_03_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject";
			};
			class effect3R_cart
			{
				positionName = "MG_R_muzzle_03_shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunCartridge";
			};				
		};			
	};
	class fow_w_m2_cannon_2x: CannonCore {
		scope = 1;
		displayName = "2x AN/M2 20 mm";
		magazines[] = {"fow_450Rnd_20mm_shells"};
		autoFire = 1;
		ballisticsComputer = 0;
		canLock = 0;
		burst = 2;
		reloadTime = 0.13;
		cursorAim = "cannon";
		nameSound = "cannon";
		muzzlePos = "Cannon_L_Chamber";
		muzzleEnd = "Cannon_L_Muzzle";
		selectionFireAnim = "wx_us_hellcat_2x20_muzzleflash";
		shotFromTurret = 0;
		showAimCursorInternal = 0;
		modes[] = {"LowROF","close","near","short","medium","far"};
		class LowROF: Mode_FullAuto
		{
			displayName = "2x AN/M2 20 mm";
			reloadTime = 0.043;
			aiRateOfFire = 0.086;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_01", 1.8489, 0.4, 2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_02", 1.8489, 0.35, 2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\HMG_127mm\HMG_127mm_03", 1.8489, 0.375, 2100};
				soundBegin[] = {"begin1", 0.33, "begin2", 0.33, "begin3", 0.34};
				closure1[] = {"A3\Sounds_F\weapons\Closure\sfx10", 0.630957, 1, 30};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx11", 0.630957, 1.2, 40};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				soundsetshot[] = {"HMG127mm_shot_SoundSet", "HMG127mm_tail_SoundSet"};
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 8;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.006;
			burst = 2;
			showToPlayer = 1;
		};		
		class close: LowROF
		{
			showToPlayer = 0;
			burst = 15;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 150;
			midRangeProbab = 0.88;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class near: close
		{
			showToPlayer = 0;
			burst = 13;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 250;
			midRangeProbab = 0.88;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.88;
			maxRange = 600;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 7;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 700;
			midRangeProbab = 0.78;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.6;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class gunParticles
		{
			class effect1L
			{
				positionName = "Cannon_L_Chamber";
				directionName = "Cannon_L_Muzzle";
				effectName = "AutoCannonFired";
			};
			class effect1R
			{
				positionName = "Cannon_R_Chamber";
				directionName = "Cannon_R_Muzzle";
				effectName = "AutoCannonFired";
			};				
		};
	};
	//IJA
	class fow_w_type77a_mg_2x: HMG_M2 {
		displayName = "2x Type 97 7.7x56 mm";
		magazines[] = {"fow_1000Rnd_77x56_Tracer_Yellow"};
		cursorAim = "mg";
		muzzlePos = "MG_L_Chamber_01";
		muzzleEnd = "MG_L_muzzle_01";
		selectionFireAnim = "wx_zero_mg_muzzleflash";
		modes[] = {"LowROF","close","near","short","medium","far"};
		
		class LowROF: Mode_FullAuto
		{
			displayName = "2x Type 97 7.7 mm";
			reloadTime = 0.034;
			aiRateOfFire = 0.072;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				closure1[] = {"A3\sounds_f\weapons\closure\sfx7", 0.562341, 1, 40};
				closure2[] = {"A3\sounds_f\weapons\closure\sfx8", 0.562341, 1, 40};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_01", 1, 1, 2100};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_02", 1, 1, 2100};
				begin3[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_65mm\LMG_65mm_turret_03", 1, 1, 2100};
				soundBegin[] = {"begin1", 0.34, "begin2", 0.33, "begin3", 0.33};
				soundsetshot[] = {"LMG65mmTurret_Shot_SoundSet", "LMG65mmTurret_Tail_SoundSet"};
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 8;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 1;
			minRangeProbab = 0.06;
			midRange = 2;
			midRangeProbab = 0.06;
			maxRange = 3;
			maxRangeProbab = 0.004;
			dispersion = 0.006;
			burst = 2;
			showToPlayer = 1;
		};
		class close: LowROF
		{
			showToPlayer = 0;
			burst = 15;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 150;
			midRangeProbab = 0.88;
			maxRange = 300;
			maxRangeProbab = 0.3;
		};
		class near: close
		{
			showToPlayer = 0;
			burst = 13;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.25;
			aiRateOfFireDistance = 400;
			minRange = 1;
			minRangeProbab = 0.35;
			midRange = 250;
			midRangeProbab = 0.88;
			maxRange = 400;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 10;
			aiBurstTerminable = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.88;
			maxRange = 600;
			maxRangeProbab = 0.3;
		};
		class medium: close
		{
			burst = 7;
			aiBurstTerminable = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 900;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 700;
			midRangeProbab = 0.78;
			maxRange = 900;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			burst = 5;
			aiBurstTerminable = 1;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 1500;
			minRange = 800;
			minRangeProbab = 0.2;
			midRange = 1000;
			midRangeProbab = 0.6;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};		
		class gunParticles
		{
			class effectL_cloud
			{
				positionName = "MG_L_Chamber";
				directionName = "MG_L_Muzzle";
				effectName = "MachineGun1";
			};
			class effectR_cloud
			{
				positionName = "MG_R_Chamber";
				directionName = "MG_R_Muzzle";
				effectName = "MachineGun1";
			};
		};		
	};

	class fow_w_type99_cannon_2x: fow_w_m2_cannon_2x
	{
		displayName = "2x Type 99-1 20 mm";
		magazines[] = {"fow_120Rnd_20mm_shells"};
		burst = 2;
		cursorAim = "cannon";
		muzzlePos = "Cannon_L_Chamber";
		muzzleEnd = "Cannon_L_Muzzle";
		selectionFireAnim = "wx_zero_cannon_muzzleflash";
		
		class gunParticles
		{
			class effect1L
			{
				positionName = "Cannon_L_Chamber";
				directionName = "Cannon_L_Muzzle";
				effectName = "AutoCannonFired";
			};
			class effect1L_eject
			{
				positionName = "Cannon_L_muzzle_Shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject2";
			};
			class effect1L_cart
			{
				positionName = "Cannon_L_muzzle_Shell";
				directionName = "MG_ammo_dir";
				effectName = "HeavyGunCartridge1";
			};
			class effect1R
			{
				positionName = "Cannon_R_Chamber";
				directionName = "Cannon_R_Muzzle";
				effectName = "AutoCannonFired";
			};
			class effect1R_eject
			{
				positionName = "Cannon_R_muzzle_Shell";
				directionName = "MG_ammo_dir";
				effectName = "MachineGunEject2";
			};
			class effect1R_cart
			{
				positionName = "Cannon_R_muzzle_Shell";
				directionName = "MG_ammo_dir";
				effectName = "HeavyGunCartridge1";
			};
			
		};		
	};
	
};