	class fow_w_type99_lmg : fow_rifle_base {		
		scope = 2;
		magazines[] = {"fow_30Rnd_77x58"};
		selectionFireAnim = "muzzleFlash";
		
		reloadAction = "GestureReloadAK12";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",1,1,10};
		//reloadMagazineSound[] = {"fow\fow_sounds\weapons\type99\reload.wav",1.0,1,10};
		drySound[] = {"fow\fow_sounds\weapons\type99\dry.wav",1.2 ,1 ,10 };
		magazineReloadTime = 5;

		aimTransitionSpeed = 0.62 ;
		inertia = 1.2;
		recoil = "fow_w_mg_recoil";

		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_99lmg_hands.rtm"};
		model = "fow\fow_weapons\type99_lmg\wx_ija_type099_lmg";
		displayName = "[IJA] Type 99 LMG";
		nameSound = "Mgun";
		picture = "\fow\fow_weapons\type99_lmg\data\ui\w_type99_lmg_ca.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_mg_CA.paa";
		
        deployedPivot    = "bipod";
        hasBipod         = true;
 		soundBipodDown[] = {"fow\fow_sounds\weapons\bren\bipod_up", "db-2", 1, 10};
		soundBipodUp[] = {"fow\fow_sounds\weapons\bren\bipod_down", "db-2", 1, 10};
		
		class Eventhandlers: Eventhandlers {
			class fow_mgRoF {
				fired = "_this spawn fow_main_fnc_mgRoF;";
			};
		};
		fow_burstLenght = 5;
		
		class Library
		{
			libTextDesc = "Type 99 LMG";
		};
		descriptionShort = "Type 99 LMG";

		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			reloadTime = 0.075; // 800 RPM
			dispersion = 0.0012; // Same as the BREN. In earlier releases it was .008, which means it was really inaccurate.
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType {
				closure1[] = {"", 0.562341, 1, 10};
				closure2[] = {"", 0.562341, 1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
			};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"FoW_Type99_Firing", "FoW_MG_EFX", "FoW_Interior_Reverb"};
			};
			soundContinuous = 0;
			soundBurst = 0;
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-006;	// delay between shots at given distance
			showToPlayer = true;
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
