	class fow_w_pzfaust_base: Launcher_Base_F
	{
		scope = 1;
		displayName = "Panzerfaust 30";
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Klein_Launcher.p3d";
		picture = "\fow\fow_weapons\m1a1_bazooka\data\ui\gear_bazooka_x_ca.paa";
		UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_pzfaust_hands.rtm"};
		reloadAction = "ReloadRPG";
		recoil = "recoil_rpg";
		magazines[] = {"fow_1Rnd_pzfaust_30"};
		modes[] = {"Single"};
		
		lockAcquire = 0;
		
		fow_swapModel = "fow_w_pzfaust_30_used";
		fow_autoLoad = 1;
		
		class Eventhandlers: Eventhandlers {
			class fow_BoltAction {
				fired = "_this spawn fow_main_fnc_ATDisposable;";
			};
		};		
		
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
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.8;
			midRange = 50;
			midRangeProbab = 0.9;
			maxRange = 120;
			maxRangeProbab = 0.7;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Dry_NLAW",0.17782794,1,15};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Reload_NLAW",1.0,1,10};
		soundFly[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Fly_NLAW",0.56234133,1.5,700};
		lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locking_NLAW",0.31622776,1};
		lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\locked_NLAW",0.31622776,2.5};
		changeFiremodeSound[] = {"A3\sounds_f\dummysound",0.56234133,1,20};
/*		modelOptics = "-";
		opticsZoomMin = 0.0623;
		opticsZoomMax = 0.0623;
		opticsZoomInit = 0.0623;
		cameraDir = "look";
		value = 20;
		canLock = 0;
		inertia = 1.0;
		dexterity = 1.0;*/
		modelOptics = "-";
		weaponInfoType = "RscWeaponZeroing";
		
		discreteDistance[]={30};
		discreteDistanceCameraPoint[] = {"eye"};
		discreteDistanceInitIndex=0;
		cameraDir="look";
		//maxZeroing = 30;
		/*class OpticsModes 
		{
			class irons
			{
				opticsID = 1;
				useModelOptics = 0;
				opticsPPEffects[] = {""};
				opticsZoomMin = 0.375;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				visionMode[] = {};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				distanceZoomMin = 100;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				discreteDistance[] = {100, 200, 300};
				discreteDistanceInitIndex = 0;
				discreteDistanceCameraPoint[] = {"eye_100", "eye_200", "eye_300"};
			};
		};	*/	
		class GunParticles
		{
			class effect1
			{
				positionName = "konec hlavne";
				directionName = "usti hlavne";
				effectName = "RocketBackEffectsRPG7";
			};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 120;
		};
		class ItemInfo
		{
			priority = 3;
		};
		descriptionShort = "Panzerfaust";
		class Library
		{
			libTextDesc = "Panzerfaust";
		};
	};
	class fow_w_pzfaust_30_klein: fow_w_pzfaust_base {
		scope = 2;
		displayName = "Panzerfaust 30 Klein";
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Klein_Launcher.p3d";
		picture = "\fow\fow_weapons\m1a1_bazooka\data\ui\gear_bazooka_x_ca.paa";

		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_pzfaust_hands.rtm"};

		magazines[] = {"fow_1Rnd_pzfaust_30_klein"};
		
		fow_swapModel = "fow_w_pzfaust_30_klein_used";
		
		discreteDistance[]={30};
		discreteDistanceCameraPoint[] = {"eye"};
		discreteDistanceInitIndex=0;
		cameraDir="look";
		maxZeroing = 30;
		
		descriptionShort = "Panzerfaust";
		class Library
		{
			libTextDesc = "Panzerfaust";
		};
	};
	class fow_w_pzfaust_30_klein_used: fow_w_pzfaust_30_klein {
		scope = 1;
		displayName = "Panzerfaust 30 Klein (Used)";
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Klein_Launcher_Used.p3d";
		magazines[] = {"fow_fakeLauncherMagazine"};	
		fow_autoLoad = 0;	
	};
	class fow_w_pzfaust_30: fow_w_pzfaust_base {
		scope = 2;
		displayName = "Panzerfaust 30";
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Launcher.p3d";//
		picture = "\fow\fow_weapons\m1a1_bazooka\data\ui\gear_bazooka_x_ca.paa";

		hiddenSelections[] = {"camo30m","camo60m","camo100m"};
		hiddenSelectionsTextures[] = {"\fow\fow_weapons\pzfaust\data\HLS_PanzerFaust_co.paa","",""};
		
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_pzfaust_hands.rtm"};

		magazines[] = {"fow_1Rnd_pzfaust_30"};
		
		fow_swapModel = "fow_w_pzfaust_30_used";
		
		discreteDistance[]={30,60,80};
		discreteDistanceCameraPoint[] = {"eye","eye_2","eye_3"};
		discreteDistanceInitIndex=0;
		cameraDir="look";
		maxZeroing = 80;
		
		descriptionShort = "Panzerfaust 30";
		class Library
		{
			libTextDesc = "Panzerfaust 30";
		};
	};
	class fow_w_pzfaust_60: fow_w_pzfaust_30 {
		displayName = "Panzerfaust 60";
		magazines[] = {"fow_1Rnd_pzfaust_60"};
		hiddenSelectionsTextures[] = {"","\fow\fow_weapons\pzfaust\data\HLS_PanzerFaust_co.paa",""};
		fow_swapModel = "fow_w_pzfaust_60_used";
	};
	class fow_w_pzfaust_100: fow_w_pzfaust_30 {
		displayName = "Panzerfaust 100";
		magazines[] = {"fow_1Rnd_pzfaust_100"};
		hiddenSelectionsTextures[] = {"","","\fow\fow_weapons\pzfaust\data\HLS_PanzerFaust_co.paa"};
		fow_swapModel = "fow_w_pzfaust_100_used";
	};
	class fow_w_pzfaust_30_used: fow_w_pzfaust_30 {
		scope = 1;
		displayName = "Panzerfaust 30 (Used)";
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Launcher_Used.p3d";
		magazines[] = {"fow_fakeLauncherMagazine"};
		fow_autoLoad = 0;
	};
	class fow_w_pzfaust_60_used: fow_w_pzfaust_30_used {
		scope = 1;
		displayName = "Panzerfaust 60 (Used)";	
	};
	class fow_w_pzfaust_100_used: fow_w_pzfaust_30_used {
		scope = 1;
		displayName = "Panzerfaust 100 (Used)";	
	};