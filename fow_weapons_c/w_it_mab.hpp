	class fow_w_mab38a : fow_rifle_base {
		scope = 2;
		displayName = "[IT] MAB 38 A";
		//picture = "\lib\weapons\mp40\data\equip\w_mp40_ca.paa";
		//handAnim[] = {"OFP2_ManSkeleton","fow\fow_anims\weapons\w_mab_hands.rtm"};
		model = "fow\fow_weapons\mab38a\mab38a";
		magazines[] = {"fow_30Rnd_9x19_mab"};
		selectionFireAnim = "muzzleFlash";
		//reloadAction = "fow_gesture_mp40_reload";
		reloadAction = "GestureReloadMk20";
		
		aimTransitionSpeed = 1 ;
		inertia = 0.5;		
		recoil = "fow_w_smg_recoil";
		
		modes[] = {"Full", "Far", "Medium", "Short"};
		class Full : Mode_FullAuto {

			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 300;
			
			reloadTime = 0.12;
			dispersion = 0.00131;
		
			sounds[] = {"StandardSound"};
			class StandardSound {
				soundSetShot[] = {"FoW_MP40_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
			};
		};
		class Far : Full {
			showToPlayer = 0;
			aiRateOfFireDistance = 200;
			aiRateOfFire = 10;
			minRange = 150;
			minRangeProbab = 0.05;
			midRange = 175;
			midRangeProbab = 0.5;
			maxRange = 200;
			maxRangeProbab = 0.04;
		};
		class Medium : Full {
			showToPlayer = 0;
			ffCount = 3;
			burst = 3;
			autoFire = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 100;
			minRange = 100;
			minRangeProbab = 0.05;
			midRange = 125;
			midRangeProbab = 0.5;
			maxRange = 150;
			maxRangeProbab = 0.04;
		};
		class Short : Medium {
			showToPlayer = 0;
			aiRateOfFire = 0.05;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 50;
			midRangeProbab = 0.5;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",0.5011872,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\reload_vermin",1.0,1,10};
		class Library {
			libTextDesc = "MAB 38 A";
		};
		descriptionShort = "MAB 38 A";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100};
		discreteDistanceInitIndex = 0;
		aiDispersionCoefY = 8.0;
		aiDispersionCoefX = 9.0;

		cartridgePos = "";//"nabojnicestart";
		cartridgeVel = "";//"nabojniceend";
		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_small";
			};
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_smg";
			};
		};	
	};
