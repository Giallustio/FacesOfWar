	class fow_w_m1919 : fow_rifle_base {		
		scope = 1;
		magazines[] = {"fow_30Rnd_762x63","fow_50Rnd_762x63","fow_100Rnd_762x63"};
		selectionFireAnim = "muzzleFlash";
		
		reloadAction = "GestureReloadM200";

		reloadMagazineSound[] = {"fow\fow_sounds\weapons\mg42\reload.wav",1,1,25};
		//reloadMagazineSound[] = {"fow\fow_sounds\weapons\m1919\reload.wav",1.0,1,10};
		drySound[] = {"fow\fow_sounds\weapons\m1919\dry.wav",1,1,20};
		
		aimTransitionSpeed = 0.38 ;
		inertia = 1.5;
		recoil = "fow_w_mg_recoil";
		
		maxZeroing = 100;
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_m1919_hands.rtm"};
		model = "fow\fow_weapons\m1919\m1919a4";
		displayName = "[US] M1919A4";
		nameSound = "Mgun";
		picture = "\fow\fow_weapons\m1919\data\ui\w_m1919_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		
		class Eventhandlers: Eventhandlers {
			class fow_mgRoF {
				fired = "_this spawn fow_main_fnc_mgRoF;";
			};
		};
		fow_burstLenght = 7;
		
		class Library
		{
			libTextDesc = "M1919A4";
		};
		descriptionShort = "M1919A4";
		cursor = "mg";
		cursorAim = "EmptyCursor";
		magazineReloadSwitchPhase = 0.541;

		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.12;
			dispersion = 0.00102;
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {
				closure1[] = {"", 0, 1, 0};
				closure2[] = {"", 0, 1, 0};
				soundClosure[] = {"closure1", 0, "closure2", 0};
			};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"FoW_M1919_Firing", "FoW_MG_EFX", "FoW_Interior_Reverb"};
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
		class close: FullAuto
		{
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
		
		cartridgePos = "";//"nabojnicestart";
		cartridgeVel = "";//"nabojniceend";
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
	class fow_w_m1919a4 : fow_w_m1919 {
		scope = 2;
		displayName = "[US] M1919A4";		
	};
	class fow_w_m1919a6 : fow_w_m1919 {
		scope = 2;
		model = "fow\fow_weapons\m1919\m1919a6";
		displayName = "[US] M1919A6";	
		
        deployedPivot    = "bipod";
        hasBipod         = true;
        soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20};
        soundBipodUp[]   = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20};	
		
		class Library
		{
			libTextDesc = "M1919A6";
		};
		descriptionShort = "M1919A6";		
		
	};