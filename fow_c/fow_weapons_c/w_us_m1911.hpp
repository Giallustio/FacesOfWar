	
	class fow_w_m1911 : Pistol_Base_F {
		scope = 2;
		displayName = "[US] M1911";
		model = "fow\fow_weapons\m1911\m1911";
		picture = "\fow\fow_weapons\m1911\data\ui\w_m1911_ca.paa";
		selectionFireAnim = "zasleh";
		magazines[] = {"fow_7Rnd_45acp"};
		magazineReloadTime = 3;
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_pistol_p07";
		hiddenSelections[] = {"camo"};
		drySound[] = {"fow\fow_sounds\weapons\m1911\dry.wav",1.2,1,10};
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\m1911\reload.wav",1.2,1,15};
		hiddenSelectionsTextures[] = {"\fow\fow_weapons\m1911\data\m1911_co.paa"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"FoW_M1911_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_45ACP"};
			};

			recoil = "recoil_pistol_light";
			recoilProne = "recoil_prone_pistol_light";
			reloadTime = 0.08;
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
		//To disable the annoying casing fall sounds
		bullet0[] = {"",0,0,0};
		soundBullet[] = {"bullet0", 1};
		
		class Library
		{
			libTextDesc = "M 1911 Colt";
		};
		descriptionShort = "M 1911 Colt";
		inertia = 0.1;
		aimTransitionSpeed = 1.6;
		dexterity = 1.9;
		initSpeed = 410;
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