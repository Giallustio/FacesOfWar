	class fow_w_rpzb: Launcher_Base_F
	{
		scope = 2;
		displayName = "RPzB";
		model = "\fow\fow_weapons\rpzb\rpzb.p3d";
		picture = "\fow\fow_weapons\rpzb\data\ui\w_rpzb_ca.paa";
		//UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_bazooka_hands.rtm"};
		reloadAction = "ReloadRPG";
		recoil = "recoil_nlaw";
		magazines[] = {"fow_1Rnd_rpzb"};
		cursorAim = "EmptyCursor";
		cursor = "rocket";
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1.9952624,1,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_single_nlaw";
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 150;
			minRange = 10;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.9;
			maxRange = 200;
			maxRangeProbab = 0.3;
		};		
		aiDispersionCoefX = 2;
		aiDispersionCoefY = 2;
		
		//weaponInfoType = "RscWeaponZeroing";
		//discreteDistance[]={150};
		//discreteDistanceCameraPoint[] = {"eye"};
		//discreteDistanceInitIndex=0;
		//cameraDir="look";
		//maxZeroing = 150;		
		
		
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",0.17782794,1,15};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Reload_NLAW",1.0,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",0.56234133,1.5,700};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locking_NLAW",0.31622776,1};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locked_NLAW",0.31622776,2.5};
		changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.56234133,1,20};
		modelOptics = "-";
		//opticsZoomMin = 0.0623;
		//opticsZoomMax = 0.0623;
		//opticsZoomInit = 0.0623;
		//cameraDir = "look";
		value = 20;
		canLock = 0;
		lockAcquire = 0;
		inertia = 1.8;
		dexterity = 0.5;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 240;
		};
		class ItemInfo
		{
			priority = 3;
		};
		descriptionShort = "RPzB";
		class Library
		{
			libTextDesc = "RPzB";
		};
	};
