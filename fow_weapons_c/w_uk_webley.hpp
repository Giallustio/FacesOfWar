	
	class fow_w_webley : Pistol_Base_F {
		scope = 2;
		displayName = "[UK] Webley";
		model = "fow\fow_weapons\webley\webley";
		picture = "\fow\fow_weapons\webley\data\ui\w_webley_ca.paa";
		selectionFireAnim = "zasleh";
		magazines[] = {"fow_6Rnd_455"};
		magazineReloadTime = 3;
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_pistol_p07";
		
		inertia = 0.1;
		aimTransitionSpeed = 1.6;
		dexterity = 1.9;
		drySound[] = {"fow\fow_sounds\weapons\webley\dry.wav",1.1 ,1 , 10};
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_weapons\webley\data\webley_co.paa"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
				soundSetShot[] = {"FoW_Webley_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_45ACP"};
			};
			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.12;
			dispersion = 0.0029;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
		};

		nobullet[] = {"",0,1,1};
		soundBullet[] = {"nobullet",1};

		class Library
		{
			libTextDesc = "Webley Revolver";
		};
		descriptionShort = "Webley";
		//initSpeed = 410;
		maxZeroing = 100;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 20;
			class CowsSlot{};
			class MuzzleSlot{};
		};
		class ItemInfo
		{
			priority = 2;
		};
	};