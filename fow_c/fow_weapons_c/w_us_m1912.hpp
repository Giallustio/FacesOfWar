
	
	class fow_w_M1912 : fow_shotgun_base {
		scope = 2;
		displayName = "[US] Winchester M1912";
		picture = "\fow\fow_weapons\m1912\data\ui\w_m1912_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_m12.rtm"};
		reloadAction = "GestureReloadM4SSAS";	 												// @Nytech please add
		 // Reloading sound is in sync with anim, loading 8 rounds instead of only 6.
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\shotgun\reload_metal.wav",+1db ,1 , 25};
		drySound[] = {"fow\fow_sounds\weapons\shotgun\dry.wav",1.1 ,1 , 10};
		model="\fow\fow_weapons\m1912\M1912";
		magazines[] = {"fow_6Rnd_12G_Pellets", "fow_6Rnd_12G_Slug"};
		weaponInfoType = "RscWeaponZeroing";
		modes[] = {"Single"};

		class fow_BoltAction {
			param[] = {"fow_gesture_shotgun_pump",0.75,"fow_cartridge_slug",0.4,0.085,-0.235,0.1};
			sounds[] = {"fow_sound_pumpAction_M1912"};
		};		
		
		class OpticsModes
		{
			class Ironsights
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsFlare = 0;
				opticsPPEffects[]={"OpticsCHAbera1","OpticsBlur1"};
				opticsZoomMax=1.1; 
				opticsZoomMin=0.25; 
				discreteDistance[] = {50,100,200};
				discreteDistanceInitIndex = 0;
				distanceZoomMax=300;
				distanceZoomMin=300;
				opticsZoomInit=0.5;
				memoryPointCamera = "eye";
				visionMode[] = {};
				opticsDisablePeripherialVision = 0;
				cameraDir = "";
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
				compatibleItems[] = {"fow_w_acc_M1897_bayo"};
			};
			class CowsSlot{};
			class PointerSlot{};
			class UnderBarrelSlot{};
		};

		class Single: Mode_SemiAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 1.2;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {};

			class StandardSound: BaseSoundModeType {

				soundSetShot[] = {"FoW_Shotgun_Firing", "FoW_Shotgun_EFX", "FoW_Interior_Reverb"};
			};
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
	
		};

		class GunParticles {
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_rifle";
			};
		};	
	};