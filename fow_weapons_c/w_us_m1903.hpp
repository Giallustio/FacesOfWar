	
	class fow_w_m1903A1 : fow_rifleBolt_base {
		scope = 2;
		displayName = "[US] M1903A1 Springfield";
		model = "fow\fow_weapons\m1903\m1903A1";
		picture = "\fow\fow_weapons\m1903\data\ui\gear_M1903_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","fow\fow_anims\weapons\w_m1903_hands.rtm"};
		
		reloadAction = "fow_gesture_m1903_reload";
		magazines[] = {"fow_5Rnd_762x63"};
		//magazineReloadTime = 3;
		magazineReloadSwitchPhase = 0.35;
		
		deployedPivot = "deploypoint";
		
		//reloadSound[] = {""}; //after each shot

		reloadMagazineSound[] = {"fow\fow_sounds\weapons\springfield\reload_stripperclip.wav",1.0,1,25}; // Sniper variant has a different reloading sound
		drySound[] = {"fow\fow_sounds\weapons\springfield\dry.wav",1.2,1,10};
		
		aimTransitionSpeed = 0.8;
		inertia = 0.7;
		
		class fow_BoltAction {
			param[] = {"fow_gesture_m1903_bolt",0.75,"fow_cartridge_303",0.6,0.065,- 0.18,0.1};
			sounds[] = {"fow_sound_boltAction_m1903"};
		};		
		
		recoil = "fow_w_rifle_recoil";
		
		//selectionFireAnim = "muzzleFlash";
		
		weaponInfoType = "RscWeaponZeroing";
		discretedistance[] = { 90, 180, 270, 360, 450, 540, 630, 720, 810, 900, 990, 1010, 1180, 1280, 1370, 1460, 1550, 1640, 1740, 1810 };
		discretedistanceinitindex = 2;
		
		modes[] = {"Single", "Far", "Medium", "Short"};
		class Single : Mode_SemiAuto {
			reloadTime = 1.6666666666666666666666666666667;
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
                soundSetShot[] = {"FoW_SMLE_Firing", "FoW_Rifle_EFX", "FoW_Interior_Reverb"};
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
			libTextDesc = "M1903A1 Springfield";
		};
		descriptionShort = "M1903A1 Springfield";
		
		class GunParticles {
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_rifle";
			};
		};	
	};
	class fow_w_m1903A1_sniper : fow_w_m1903A1 {

		displayName = "[US] M1903A1 Springfield Sniper";
		model = "fow\fow_weapons\m1903\m1903A1_scope";
		modeloptics = "\fow\fow_weapons\m1903\m1903_optics.p3d";
		reloadAction = "fow_gesture_m1903_scope_reload";
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\springfield\reload.wav",1.0,1,25};
		class OpticsModes {
			class Snip
			{
				discretedistance[] = { 90, 180, 270, 360, 450, 540, 630, 720, 810, 900, 990, 1010, 1180, 1280, 1370, 1460, 1550, 1640, 1740, 1810 };
				discretedistanceinitindex = 2;
				distancezoommax = 1810;
				distancezoommin = 90;
				memorypointcamera = "scope_eye";
				opticsdisableperipherialvision = 1;
				opticsflare = 1;
				opticsid = 1;
				opticsPPEffects[] = {"OpticsCHAbera3","OpticsBlur3"};
				opticsZoomMin = 0.09375;
				opticsZoomInit = 0.09375;
				opticsZoomMax = 0.09375;
				usemodeloptics = 1;
				visionmode[] = { "Normal" };
			};
			class Ironsights
			{
				OpticsID = 2;
				UseModelOptics = 0;
				MemoryPointCamera = "eye";
				OpticsPPEffects[] = {};
				OpticsFlare = 0;
				OpticsDisablePeripherialVision = 0;
				OpticsZoomMin = 0.75;
				OpticsZoomInit = 0.75;
				OpticsZoomMax = 0.75;
				DistanceZoomMin = 100;
				DistanceZoomMax = 100;
				VisionMode[] = {};
				CameraDir = "";
			};
		};
	};
