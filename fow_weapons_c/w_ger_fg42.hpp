
	class fow_w_fg42 : fow_rifle_base {
		scope = 2;
		model = "\fow\fow_weapons\fg42\fg42.p3d";
  		picture = "\fow\fow_weapons\fg42\data\ui\w_fg42_ca.paa";
		dexterity = 1.61;
		displayName = "[GER] FG 42";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_fg42_hands.rtm"};
		
		aiDispersionCoefY = 7.0;
		aiDispersionCoefX = 7.0;
		reloadTime = 2;
		reloadAction = "GestureReloadDMR04";
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_reload",0.251189,1,10};
		//reloadMagazineSound[] = {"fow\fow_sounds\weapons\fg42\reload.wav",1.0,1,10};
		drySound[] = {"fow\fow_sounds\weapons\fg42\dry.wav",1.2 ,1 , 10};
		changeFiremodeSound[] = {"fow\fow_sounds\weapons\fg42\fireselector.wav",1.2 ,1 ,10};

		backgroundReload = true;
		weaponInfoType = "RscWeaponZeroing";
		maxZeroing = 1200;
		magazines[] = {"fow_20Rnd_792x57"};

           	deployedPivot    = "bipod";       /// what point should be used to be on surface while unfolded
           	hasBipod         = true;          /// a weapon with bipod obviously has a bipod
           	soundBipodDown[] = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_down",db-3, 1, 20}; /// sound of unfolding the bipod
           	soundBipodUp[]   = {"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_AAF_up",db-3, 1, 20}; /// sound of folding the bipod
			
		recoil = "fow_w_smg_recoil";

		modes[] = {"Single", "Full"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"FoW_FG42_Firing", "FoW_Rifle_EFX", "FoW_Interior_Reverb"};
			};

			soundContinuous = 0;
			ffCount = 1;
			aiRateOfFire = 0.001;
			dispersion = 0.00045;
			reloadTime= 0.08;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 275;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
		};

		class Full: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType	{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"FoW_FG42_Firing", "FoW_Rifle_EFX", "FoW_Interior_Reverb"};

			};

			soundBurst = 0;
			dispersion = 0.00025;
			reloadTime= 0.08;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
		};

		class OpticsModes {
			class Ironsights {
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.1;
				opticsZoomInit = 0.5;
				memoryPointCamera = "eye";
				visionMode[] = {"Normal"};
				opticsFlare = true;
				opticsDisablePeripherialVision = true;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
				discreteDistanceCameraPoint[] = {"eye","eye_200","eye_300","eye_400","eye_500","eye_600","eye_700","eye_800","eye_900","eye_1000","eye_1100","eye_1200"};
				discreteDistanceInitIndex = 0;
				cameraDir = "eye_look";
			};
		};
		class WeaponSlotsInfo
		{
			class MuzzleSlot
			{
				iconPosition[] = {0.2,0.8};
				iconScale = 0.3;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Bayonet Slot";
				compatibleItems[] = {"fow_w_acc_fg42_bayo"};
			};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
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
				effectName = "fow_w_effect_rifle";
			};
		};	
	};

