	
	class fow_w_welrod_mkii : Pistol_Base_F {
		scope = 2;
		displayName = "[UK] Welrod Mk.II";
		author = "RedRogueXIII";
		model = "\fow\fow_weapons\welrod\welrod_MkII.p3d";
		picture = "\fow\fow_weapons\welrod\data\ui\w_welrod_ca.paa";
		selectionFireAnim = "zasleh";
		magazines[] = {"fow_8Rnd_765x17"};
		//magazineReloadTime = 3;
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		reloadAction = "GestureReloadPistol";
		recoil = "recoil_pistol_p07";
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\fow\fow_weapons\m1911\data\m1911_co.paa"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_01",0.22387211,1,10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Closure_P07_02",0.22387211,1.2,10};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_01",0.56234133,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_02",0.56234133,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_short_03",0.56234133,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\P07\Silencer_P07_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 1.6;
			dispersion = 0.00493;
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
			libTextDesc = "Welrod Mk.II";
		};
		descriptionShort = "Welrod Mk.II";
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