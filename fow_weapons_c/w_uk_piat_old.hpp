	class fow_w_piat: Launcher_Base_F
	{
		scope = 2;
		displayName = "P.I.A.T.";
		model = "\fow\fow_weapons\piat\piat.p3d";
		picture = "\fow\fow_weapons\piat\data\ui\gear_piat_x_ca.paa";
		//UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_piat_hands.rtm"};
		reloadAction = "ReloadRPG";
		recoil = "recoil_rpg";
		magazines[] = {"fow_1Rnd_piat","fow_1Rnd_piat_HE"};
		modes[] = {"Single"};
		
		aimTransitionSpeed = 0.5 ;
		inertia = 1.5;
		
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"FoW_PIAT_Launch", "FoW_Piat_Tails"};
			};
			recoil = "recoil_single_nlaw";
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.8;
			midRange = 800;
			midRangeProbab = 0.9;
			maxRange = 1000;
			maxRangeProbab = 0.2;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",0.17782794,1,15};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Reload_NLAW",1.0,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",0.56234133,1.5,700};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locking_NLAW",0.31622776,1};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locked_NLAW",0.31622776,2.5};
		changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.56234133,1,20};
/*		modelOptics = "-";
		opticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		opticsZoomInit = 0.0623;
		cameraDir = "look";
		value = 20;
		canLock = 0;
		inertia = 1.0;
		dexterity = 1.0;*/
		modelOptics = "-";
		maxZeroing = 300;
		//weaponInfoType = "RscWeaponZeroing";
		weaponInfoType = "RscWeaponEmpty";
		/*
		discreteDistance[]={100,200,300};
		discreteDistanceCameraPoint[] = {"eye","eye","eye"};
		discreteDistanceInitIndex=0;
		cameraDir="look";*/
		/*class OpticsModes 
		{
			class irons
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				discreteDistance[] = {100, 200, 300};
				discreteDistanceInitIndex = 0;
				discreteDistanceCameraPoint[] = {"eye", "eye", "eye"};//"eye_100", "eye_200", "eye_300"
			};
		};	*/	
		class GunParticles
		{
			/*class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPG7";
			};*/
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 120;
		};
		class ItemInfo
		{
			priority = 3;
		};
		descriptionShort = "P.I.A.T.";
		class Library
		{
			libTextDesc = "P.I.A.T.";
		};
	};
	
/*	class fow_w_piat_test : fow_rifleBolt_base {
		scope = 2;
		displayName = "[UK] PIAT test";
		model = "fow\fow_weapons\piat\piat_test";
		picture = "\fow\fow_weapons\lee_enfield\data\ui\w_enfield_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_stg44_hands.rtm"};
		
		//reloadAction = "gestureReloadK98Magazine";
		magazines[] = {};//"fow_1Rnd_piat_test"
		magazineReloadTime = 3;
		//reloadSound[] = {""}; //after each shot
		//reloadMagazineSound[] = {"\LIB\weapons\data\sounds\weapons\K98\k98_loadmagazine.wss", 0.501187, 1, 10};
		
		dexterity = 1.7;
		inertia = 0.55;
		
		recoil = "fow_w_rifle_recoil";
		
		selectionFireAnim = "muzzleFlash";
		
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300};
		discreteDistanceInitIndex = 0;
		
		class fow_w_piat: UGL_F /// Some grenade launcher to have some more fun
		{
			displayName = "M7 grenade launcher";
			descriptionShort = "M7 GL";
			useModelOptics = false;
			useExternalOptic = false; /// Doesn't use optics from the attachment, has it's own
			magazines[] = {"1Rnd_HE_Grenade_shell"};
			cameraDir = "OP_look";
			discreteDistance[] = {100, 200, 300};
			//discreteDistanceCameraPoint[] = {"eye", "OP_eye2", "OP_eye3", "OP_eye4", "OP_eye5"}; /// the angle of gun changes with zeroing
			discreteDistanceInitIndex = 0; /// 200 is the default zero
		};
		
		muzzles[] = {fow_w_piat};	
		
		modes[] = {"Single", "Far", "Medium", "Short"};
		class Single : Mode_SemiAuto {
			reloadTime = 1;
			dispersion = 0.0008;
			aiDispersionCoefX = 7;
			aiDispersionCoefY = 7;
			aiRateOfFire = 0.001;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"FoW_SMLE_Firing", "FoW_Rifle_EFX"};
            };

		};
		class Far : Single {
			showToPlayer = 0;
			aiRateOfFireDistance = 500;
			aiRateOfFire = 10;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class Medium : Single {
			showToPlayer = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 300;
			minRange = 100;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class Short : Single {
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 50;
			midRangeProbab = 0.5;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};

		class Library {
			libTextDesc = "Lee-Enfield No.4 Mk1";
		};
		descriptionShort = "Lee-Enfield No.4 Mk1";
		
		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_rifle";
			};
		};	
	};*/

