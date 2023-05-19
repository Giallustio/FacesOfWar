	
	class fow_w_p08 : Pistol_Base_F {
		scope = 2;
		displayName = "[GER] P08";
		model = "fow\fow_weapons\p08\p08";
		picture = "\fow\fow_weapons\p08\data\ui\w_p08_ca.paa";
		selectionFireAnim = "zasleh";
		magazines[] = {"fow_8Rnd_9x19"};
		//magazineReloadTime = 3;
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_pistol_p07";
		drySound[] = {"fow\fow_sounds\weapons\m1911\dry.wav",1.2,1,10};
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\m1911\reload.wav",1.2,1,15};
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\fow\fow_weapons\m1911\data\m1911_co.paa"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"FoW_Luger_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
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
		bullet0[] = {""};
		soundBullet[] = {"bullet0",1};
		class Library
		{
			libTextDesc = "P08 Luger";
		};
		descriptionShort = "P08";
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