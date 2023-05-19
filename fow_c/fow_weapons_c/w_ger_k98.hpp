	
	class fow_w_k98 : fow_rifleBolt_base {
		scope = 2;
		displayName = "[GER] K98";
		model = "fow\fow_weapons\k98\lodu_k98";
		picture = "\fow\fow_weapons\k98\data\ui\w_k98_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_k98_hands.rtm"};
		
		reloadAction = "fow_gesture_k98_reload";
		magazineReloadTime = 3;
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_reload",0.251189,1,10};
		//reloadMagazineSound[] = {"fow\fow_sounds\weapons\kar98\reload.wav",1.0,1,10};
		drySound[] = {"fow\fow_sounds\weapons\kar98\dry.wav",1.2,1,10};
		
		aimTransitionSpeed = 0.8 ;
		inertia = 0.7;
		
		magazines[] = {"fow_5Rnd_792x57"};
		
		recoil = "fow_w_rifle_recoil";

		class fow_BoltAction {
			param[] = {"fow_gesture_k98_bolt",0.75,"FxCartridge_762",0.6,0.065,- 0.18,0.1};
			sounds[] = {"fow_sound_boltAction_K98"};
		};
	
		selectionFireAnim = "muzzleFlash";
		modes[] = {"Single","Far","Medium","Short"};
		class Single: Mode_SemiAuto	{
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
                soundSetShot[] = {"fow_Kar_Firing", "FoW_Rifle_EFX", "FoW_Interior_Reverb"};
            };
		};
		class Far: Single {
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
		class Medium: Single {
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
		class Short: Single	{
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
			libTextDesc = "K98";
		};
		descriptionShort = "K98";
		weaponInfoType = "RscWeaponZeroing";
		
		cameraDir = "eye_dir";
		maxZeroing = 1200;	
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
		discreteDistanceCameraPoint[] = {"eye","eye_2","eye_3","eye_4","eye_5","eye_6","eye_7","eye_8","eye_9","eye_10","eye_11","eye_12"};
		discreteDistanceInitIndex = 0;
		
		class GunParticles {
		/*	class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762";
			};*/
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_rifle";
			};
		};	
		
	};
	class fow_w_k98_scoped : fow_w_k98 {
		displayName = "[GER] K98 zf 41";
		model = "fow\fow_weapons\k98\lodu_k98_scoped";
		modeloptics = "\fow\fow_weapons\m1903\fine_reticle";

		class OpticsModes {
			class Optic
			{
				maxZeroing = 1200;	
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discretedistanceinitindex = 3;
				distancezoommax = 1200;
				distancezoommin = 100;
				memorypointcamera = "scope_eye";
				//modeloptics[] = { "\fow\fow_weapons\m1903\fine_reticle" };
				opticsdisableperipherialvision = 1;
				opticsflare = 1;
				opticsid = 1;
				opticsppeffects[] = { "OpticsCHAbera1", "OpticsBlur1" };
				opticszoominit = 0.039385;
				opticszoommax = 0.039385;
				opticszoommin = 0.039385;
				usemodeloptics = 1;
				visionmode[] = { "Normal" };
			};
 			class IronSight: Optic
 			{
 				opticsID = 2;
 				useModelOptics = false;
 				opticsFlare = false;
 				opticsDisablePeripherialVision = false;
 				opticsZoomMin=0.375; 
 				opticsZoomMax=1.1;  
 				opticsZoomInit=0.75;
				
				cameraDir = "eye_dir";
				maxZeroing = 1200;	
				discreteInitIndex = 0;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
				discreteDistanceCameraPoint[] = {"eye","eye_2","eye_3","eye_4","eye_5","eye_6","eye_7","eye_8","eye_9","eye_10","eye_11","eye_12"};
				discreteDistanceInitIndex = 0;
				
 				visionMode[] = {};
 				discretefov[] = {};
 			};	
		};
	};