	class fow_w_m1918a2 : fow_rifle_base {		
		scope = 2;
		magazines[] = {"fow_20Rnd_762x63"};
		selectionFireAnim = "muzzleFlash";
		
		reloadAction = "GestureReloadMk20";
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\bar\reload.wav",1 , 1, 25};
		drySound[] = {"fow\fow_sounds\weapons\bar\dry.wav",1.2 ,1 , 10};
		changeFiremodeSound[] = {"fow\fow_sounds\weapons\bar\fireselector.wav",1.2 ,1 ,10};


		aimTransitionSpeed = 0.62 ;
		inertia = 1.2;
		recoil = "fow_w_mg_recoil";
		
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_bar_hands.rtm"};
		model = "fow\fow_weapons\bar\bar";
		displayName = "[US] M1918A2 B.A.R.";
		nameSound = "Mgun";
		picture = "\fow\fow_weapons\bar\data\ui\gear_m1918a2_X_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		
        deployedPivot    = "bipod";
        hasBipod         = 0;
		soundBipodDown[] = {"fow\fow_sounds\weapons\bar\bipod_down.wav",1 ,1 , 15};
        soundBipodUp[]   = {"fow\fow_sounds\weapons\bar\bipod_up.wav",1 ,1 , 15};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_weapons\bar\data\bar_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_weapons\bar\data\bar.rvmat"};	
		
		class Eventhandlers: Eventhandlers {
			class fow_mgRoF {
				fired = "_this spawn fow_main_fnc_mgRoF;";
			};
		};
		fow_burstLenght = 4;
		
		cameraDir = "eye_dir";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
		discreteDistanceCameraPoint[] = {"eye","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000"};
		discreteDistanceInitIndex = 0;
		maxZeroing = 1000;	
		
		class Library
		{
			libTextDesc = "M1918A2 B.A.R.";
		};
		descriptionShort = "M1918A2 B.A.R.";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		magazineReloadSwitchPhase = 0.541;
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 194;
			class MuzzleSlot{};
			class CowsSlot{};
			class PointerSlot{
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				compatibleItems[] = {"fow_w_acc_m1918a2_handle"};		
			};
			class UnderBarrelSlot
			{
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
				linkProxy = "\A3\data_f_mark\proxies\weapon_slots\underbarrel";
				compatibleItems[] = {"fow_w_acc_m1918a2_bipod"};
			};
		};
		
		modes[] = {"FullAuto_300","FullAuto_650","close","short","medium","far_optic1","far_optic2"};
		class FullAuto_300: Mode_FullAuto {
			displayName = "Full (300)";
			textureType = "burst";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				closure1[] = {"", 0, 1, 0};
				closure2[] = {"", 0, 1, 0};
				soundClosure[] = {"closure1", 0, "closure2", 0};
			};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"FoW_Bar_Firing", "FoW_MG_EFX", "FoW_Interior_Reverb"};
			};
			
			reloadTime = 0.2; /// 60/rounds
			dispersion = 0.00127; /// A bit less than 3 MOA
			
			minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 400; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};
		class FullAuto_650: Mode_FullAuto  {
			displayName = "Full (650)";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				closure1[] = {"", 0, 1, 0};
				closure2[] = {"", 0, 1, 0};
				soundClosure[] = {"closure1", 0, "closure2", 0};
			};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"FoW_Bar_Firing", "FoW_MG_EFX", "FoW_Interior_Reverb"};
			};
			reloadTime = 0.095; // ~630 RPM
			dispersion = 0.00187;
			
			recoil = "recoil_single_ebr";
			recoilProne = "recoil_single_prone_ebr";

			minRange = 2; minRangeProbab = 0.5; 	/// Task Force Balance black magic - this is the probability which AI thinks it would hit target at set range with
			midRange = 200; midRangeProbab = 0.7; 	/// it is no real probability of hit, just used for AI to compute if the shot is worth to take - AI chooses highest
			maxRange = 400; maxRangeProbab = 0.3; 	/// probability of the weapon, does some calculation and compares it with calculated probability of other weapons
		};
		class close: FullAuto_300 {

			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
		class far_optic1: close
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 9;
			aiRateOfFireDistance = 900;
			minRange = 350;
			minRangeProbab = 0.04;
			midRange = 550;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.01;
		};
		class far_optic2: far_optic1
		{
			requiredOpticType = 2;
			autoFire = 0;
			burst = 1;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.5;
			maxRange = 1000;
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
	class fow_w_m1918a2_bak : fow_w_m1918a2 {		

		displayName = "[US] M1918A2 B.A.R. (BAK)";
		nameSound = "Mgun";
		picture = "\fow\fow_weapons\bar\data\ui\gear_m1918a2_bak_X_ca.paa";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_weapons\bar\data\bar_bak_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_weapons\bar\data\bar_bak.rvmat"};	
	};
	class fow_w_m1918a2_acc : fow_w_m1918a2 {	
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "fow_w_acc_m1918a2_bipod";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "fow_w_acc_m1918a2_handle";
			};
		};
	};
	class fow_w_m1918a2_bak_acc : fow_w_m1918a2_bak {		
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot = "UnderBarrelSlot";
				item = "fow_w_acc_m1918a2_bipod";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "fow_w_acc_m1918a2_handle";
			};
		};
	};