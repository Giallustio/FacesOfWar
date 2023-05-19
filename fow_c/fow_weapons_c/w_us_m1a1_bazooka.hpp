	class fow_w_m1a1_bazooka: Launcher_Base_F
	{
		scope = 2;
		displayName = "M1A1 Bazooka";
		model = "\fow\fow_weapons\m1a1_bazooka\m1a1_bazooka_empty.p3d";
		picture = "\fow\fow_weapons\m1a1_bazooka\data\ui\gear_bazooka_x_ca.paa";
		//UiPicture = "\A3\Weapons_F\Data\UI\icon_at_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_bazooka_hands.rtm"};
		reloadAction = "ReloadRPG";
		recoil = "recoil_rpg";
		magazines[] = {"fow_1Rnd_m6a1"};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType {};

			class StandardSound: BaseSoundModeType {

				begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1.9952624,1,1800};
				soundBegin[] = {"begin1",1};
			};
			recoil = "recoil_single_nlaw";
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.8;
			midRange = 800;
			midRangeProbab = 0.9;
			maxRange = 1000;
			maxRangeProbab = 0.2;
		};
		drySound[] = {"fow\fow_sounds\weapons\bazooka\dry.wav",1.2 ,1 , 25};
		//reloadMagazineSound[] = {"fow\fow_sounds\weapons\bazooka\reload.wav",+1db ,1 , 25};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\Reload_NLAW",1.0,1,10};
		soundFly[] = {"fow\fow_sounds\weapons\bazooka\rocket_fly.wav",+3db ,1 ,30};
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
		
		discreteDistance[]={100,200,300};
		discreteDistanceCameraPoint[] = {"eye_100","eye_200","eye_300"};
		discreteDistanceInitIndex=0;
		cameraDir="look";
		maxZeroing = 300;
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
		descriptionShort = "M1A1 Bazooka";
		class Library
		{
			libTextDesc = "M1A1 Bazooka";
		};
	};
