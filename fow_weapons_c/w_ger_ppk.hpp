	
	class fow_w_ppk : Pistol_Base_F {
		scope = 2;
		displayName = "[GER] Walther PPK";
		author = "RedRogueXIII & 4ECHO";
		model = "fow\fow_weapons\ppk\ppk.p3d";
		picture = "\fow\fow_weapons\ppk\data\ui\gear_ppk_x_ca.paa";
		selectionFireAnim = "zasleh";
		magazines[] = {"fow_7Rnd_765x17"};
		//magazineReloadTime = 3;
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction = "GestureReloadPistol";
		drySound[] = {"fow\fow_sounds\weapons\m1911\dry.wav",1.2,1,10};
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\m1911\reload.wav",1.2,1,15};
		recoil = "recoil_pistol_p07";
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
		bullet1[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_01",0.5011872,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_02",0.5011872,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_03",0.5011872,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\9mm\metal_9mm_04",0.5011872,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_01",0.39810717,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_02",0.39810717,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_03",0.39810717,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\9mm\dirt_9mm_04",0.39810717,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_01",0.22387211,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_02",0.22387211,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_03",0.22387211,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\9mm\grass_9mm_04",0.22387211,1,15};
		soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
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