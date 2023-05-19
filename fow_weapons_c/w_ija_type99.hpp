	
	class fow_w_type99 : fow_rifleBolt_base {
		scope = 2;
		displayName = "[IJA] Type 99";
		model = "fow\fow_weapons\type99\type99";
		picture = "\fow\fow_weapons\type99\data\ui\w_type99_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_type99_hands.rtm"};
		
		reloadAction = "fow_gesture_type99_reload";
		magazines[] = {"fow_5Rnd_77x58"};
		magazineReloadTime = 6.8;
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\arisaka\reload.wav",1.0,1,10};
		drySound[] = {"fow\fow_sounds\weapons\arisaka\dry.wav",1.1,1,10};
		
		aimTransitionSpeed = 0.8;
		inertia = 0.7;
		
		class fow_BoltAction {
			param[] = {"fow_gesture_type99_bolt",0.75,"FxCartridge_762",0.6,0.065,- 0.18,0.1};
			sounds[] = {"fow_sound_boltAction_Arisaka"};
		};		
		
		class fow_w_type2_gl: UGL_F /// Some grenade launcher to have some more fun
		{
			displayName = "Type 2 grenade launcher";
			descriptionShort = "Type 2 GL";
			useModelOptics = false;
			useExternalOptic = false; /// Doesn't use optics from the attachment, has it's own
			magazines[] = {"fow_1Rnd_type2_40"};
			cameraDir = "OP_look";
			discreteDistance[] = {65, 80, 110, 140, 165};
			discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4", "OP_eye5"}; /// the angle of gun changes with zeroing
			discreteDistanceInitIndex = 0; /// 200 is the default zero
			changeFiremodeSound[] = {"fow\fow_sounds\weapons\arisaka\gl_on",1,1,10};
			class Single: Mode_SemiAuto
			{	
				sounds[] = {"StandardSound"};
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"FoW_GL_Axis","FoW_GL_EFX"};
				};
			};
		};
		muzzles[] = {this, fow_w_type2_gl};
		
		recoil = "fow_w_rifle_recoil";
		
		selectionFireAnim = "muzzleFlash";
		
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
		discreteDistanceInitIndex = 1;		
		
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
                soundSetShot[] = {"FoW_Arisaka_Firing", "FoW_Rifle_EFX", "FoW_Interior_Reverb"};
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
			libTextDesc = "Type 99 Arisaka";
		};
		descriptionShort = "Type 99 Arisaka";

		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot {
				iconPosition[] = {0.3,0.7};
				iconScale = 0.25;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"fow_w_acc_type30_bayo"};
			};
			class CowsSlot {
			};
			class PointerSlot {
			};
		};
	};
	class fow_w_type99_sniper : fow_w_type99 {

		displayName = "[IJA] Type 99 Sniper";
		model = "fow\fow_weapons\type99\type99_sniper";
		modelOptics = "\fow\fow_weapons\type99\type97_scope.p3d";
		optics = 1;
		
		class OpticsModes
		{
			class Scope
			{
				OpticsID = 1;
				UseModelOptics = 1;
				MemoryPointCamera = "Eye";
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
				OpticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				opticsZoomMin = 0.0595;
				opticsZoomInit = 0.0595;
				opticsZoomMax = 0.0595;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000};
				discreteDistanceInitIndex = 2;
				VisionMode[] = {"Normal"};
				CameraDir = "";
			};
			class Ironsights
			{
				OpticsID = 2;
				UseModelOptics = 0;
				MemoryPointCamera = "Eye";
				OpticsPPEffects[] = {};
				OpticsFlare = 0;
				OpticsDisablePeripherialVision = 0;
				OpticsZoomMin = 0.25;
				OpticsZoomInit = 0.5;
				OpticsZoomMax = 1.1;
				DistanceZoomMin = 200;
				DistanceZoomMax = 200;
				VisionMode[] = {};
				CameraDir = "";
			};
		};
		class Far: Single {
			showToPlayer = 0;
			aiRateOfFireDistance = 700;
			aiRateOfFire = 10;
			minRange = 500;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.5;
			maxRange = 700;
			maxRangeProbab = 0.04;
		};
		class Medium: Single {
			showToPlayer = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 500;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class Short: Single	{
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 300;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		
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