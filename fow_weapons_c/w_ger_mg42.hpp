	class fow_w_mg42 : fow_rifle_base {		
		scope = 2;
		displayName = "[GER] MG42";
		model = "fow\fow_weapons\mg42\lodu_mg42";
		picture = "\fow\fow_weapons\mg42\data\ui\w_mg42_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_mg42_hands.rtm"};
		
		//reloadAction = "fow_gesture_mg42_reload";
		reloadAction = "GestureReloadM200";		
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\mg42\reload.wav",1,1,25};
		//reloadMagazineSound[] = {"fow\fow_sounds\weapons\mg42\reload.wav",1.0,1,10};
		drySound[] = {"fow\fow_sounds\weapons\mg42\dry.wav",1,1,20};
		magazines[] = {"fow_50Rnd_792x57"};
		magazineReloadTime = 10;
		magazineReloadSwitchPhase = 0.541;
		
		aimTransitionSpeed = 0.38 ;
		inertia = 1.5;
		
		weaponInfoType = "fow_deployedAnim";
		fow_deployedAnimGesture = "fow_gesture_mgDeployed";
		fow_burstLenght = 7;

		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
		discreteDistanceInitIndex = 1;			

		recoil = "fow_w_mg_recoil";
		selectionFireAnim = "muzzleFlash";			
		
		nameSound = "Mgun";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		
        deployedPivot    = "bipod";
        hasBipod         = true;
 		soundBipodDown[] = {"fow\fow_sounds\weapons\mg42\bipod_up", "db-2", 1, 10};
		soundBipodUp[] = {"fow\fow_sounds\weapons\mg42\bipod_down", "db-2", 1, 10};
		
		class Eventhandlers: Eventhandlers {
			class fow_mgRoF {
				fired = "_this spawn fow_main_fnc_mgRoF;";
			};
		};
		
		class Library
		{
			libTextDesc = "MG 42";
		};
		descriptionShort = "MG 42";
		cursor = "mg";
		cursorAim = "EmptyCursor";

		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
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
				soundSetShot[] = {"FoW_MG42_Firing", "FoW_MG_EFX", "FoW_Interior_Reverb_MG42"};
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
			burst = 20;
			aiRateOfFire = 0.01;
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
			burst = 15;
			aiRateOfFire = 0.2;
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
			burst = 15;
			aiRateOfFire = 0.25;
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
