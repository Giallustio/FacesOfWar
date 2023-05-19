	
	class fow_w_m1_garand : fow_rifle_base {
		scope = 2;
		displayName = "[US] M1 Garand";
		model = "fow\fow_weapons\garand\babylon_garand";
		picture = "\fow\fow_weapons\garand\data\ui\w_garand_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_garand_hands.rtm"};
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\fow\fow_weapons\garand\data\lodu_garand2_co.paa","\fow\fow_weapons\garand\data\lodu_garand2_co.paa"};
		
		reloadAction = "fow_gesture_garand_reload";		
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\garand\reload.wav",1.0,1,25};
		drySound[] = {"fow\fow_sounds\weapons\garand\dry.wav",1.2,1,10};

		magazines[] = {"fow_8Rnd_762x63"};
		magazineReloadTime = 3;

		aimTransitionSpeed = 0.77 ;
		inertia = 0.74;
		recoil = "fow_w_rifle_recoil";
		
		class Eventhandlers: Eventhandlers
		{
			class fow_BoltAction
			{
				fired = "[(_this select 0),(_this select 2),""fow_cartridge_m1_clip"",{},0.065,- 0.18,0.1] call fow_main_fnc_ping;";
			};
		};
		
		class fow_w_m7_gl: UGL_F /// Some grenade launcher to have some more fun
		{
			displayName = "M7 grenade launcher";
			descriptionShort = "M7 GL";
			useModelOptics = false;
			useExternalOptic = false; /// Doesn't use optics from the attachment, has it's own
			magazines[] = {"fow_1Rnd_m9a1"};
			cameraDir = "OP_look";
			discreteDistance[] = {65, 80, 110, 140, 165};
			discreteDistanceCameraPoint[] = {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4", "OP_eye5"}; /// the angle of gun changes with zeroing
			discreteDistanceInitIndex = 0; /// 200 is the default zero
			changeFiremodeSound[] = {"fow\fow_sounds\weapons\garand\gl_on",1,1,10};
			class Single: Mode_SemiAuto
			{	
				sounds[] = {"StandardSound"};
				class BaseSoundModeType;
				class StandardSound: BaseSoundModeType
				{
					soundSetShot[] = {"FoW_GL_Allied","FoW_GL_EFX"};
				};
			};
		};
		muzzles[] = {this, fow_w_m7_gl};
		
		selectionFireAnim = "muzzleFlash";
		modes[] = {"Single", "Far", "Medium", "Short"};
		class Single : Mode_SemiAuto {
			
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"FoW_Garand_Firing", "FoW_Rifle_EFX", "FoW_Interior_Reverb"};
			};

			soundContinuous = 0;
			reloadTime = 0.08;
			ffCount = 1;
			aiRateOfFire = 0.001;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			dispersion = 0.0008;
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
			libTextDesc = "M1 Garand";
		};
		descriptionShort = "M1 Garand";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
		discreteDistanceInitIndex = 0;

		dexterity = 1.7;
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot {
				iconPosition[] = {0.3,0.7};
				iconScale = 0.25;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"fow_w_acc_m1_bayo"};
			};
			class CowsSlot {
			};
			class PointerSlot {
			};
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
	class fow_w_m1_garand_l : fow_w_m1_garand {
		displayName = "[US] M1 Garand (light wood)";
		hiddenSelectionsTextures[] = {"\fow\fow_weapons\garand\data\lodu_garand_co.paa","\fow\fow_weapons\garand\data\lodu_garand_co.paa"};
	};
	class fow_w_m1_garand_2 : fow_w_m1_garand {
		displayName = "[US] M1 Garand (dark wood)";
		hiddenSelectionsTextures[] = {"\fow\fow_weapons\garand\data\lodu_garand3_co.paa","\fow\fow_weapons\garand\data\lodu_garand3_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_weapons\garand\data\lodu_garand_acier3.rvmat","\fow\fow_weapons\garand\data\lodu_garand_bois3.rvmat"};
	};
	/*class fow_w_m1_garand_late : fow_w_m1_garand {
		displayName = "[US] M1 Garand (late)";
		model = "fow\fow_weapons\garand\babylon_garand_late";
	};*/