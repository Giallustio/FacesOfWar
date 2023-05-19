	class fow_w_ithaca37 : fow_shotgun_base {
		scope = 2;
		displayName = "[US] Ithaca 37";
		picture = "\fow\fow_weapons\ithaca\data\ui\w_ithaca_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_m12.rtm"};
		
		model = "fow\fow_weapons\ithaca\hls_ithaca";
		magazines[] = {"fow_5Rnd_12G_Pellets"};
		 // Reloading sound is in sync with anim, loading 8 rounds instead of only 5.
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\shotgun\reload_metal.wav",+1db ,1 , 25};
		drySound[] = {"fow\fow_sounds\weapons\shotgun\dry.wav",1.1 ,1 , 10};
		aimTransitionSpeed = 1 ;
		inertia = 0.5;
		class fow_BoltAction {
			param[] = {"fow_gesture_shotgun_pump",0.75,"fow_cartridge_slug",0.4,0.085,-0.235,0.1};
			sounds[] = {"fow_sound_pumpAction_M37"};
		};		
		selectionFireAnim = "zasleh";
		reloadAction = "GestureReloadM4SSAS";
		modes[] = {"Single"};
		
		class Single: Mode_SemiAuto
		{
			dispersion = 0.00018;
			soundContinuous = 0;
			reloadTime = 1.2;
			recoil = "recoil_single_gm6";
			recoilProne = "recoil_single_prone_gm6";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType	{};
			class StandardSound: BaseSoundModeType
			{
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
		
		class Library {
			libTextDesc = "The Ithaca 37 is a pump-action shotgun made in large numbers for the civilian, military, and police markets. It utilizes a novel combination ejection/loading port on the bottom of the gun which leaves the sides closed to the elements. Since shotshells load and eject from the bottom, operation of the gun is equally convenient for both right and left hand shooters. This makes the gun popular with left-handed shooters. The model 37 is considered one of the most durable and reliable shotguns ever produced.";
		};
		
		descriptionShort = "Ithaca 37";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {};
		discreteDistanceInitIndex = 0;
		aiDispersionCoefY = 8.0;
		aiDispersionCoefX = 9.0;

		class GunParticles {
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_rifle";
			};
		};	
	};
