	class fow_w_m2_flamethrower : fow_rifle_base {
		scope = 2;
		displayName = "[US] M2 Flamethrower";
		picture = "\fow\fow_weapons\m1a1\data\ui\w_m1a1_ca.paa";
		//handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_thompson_hands.rtm"};
		//reloadAction = "fow_gesture_thompson_reload";		
		model = "fow\fow_weapons\m2_ft\m2_flamethrower";
		magazines[] = {"fow_flamefuel"};
		
		selectionFireAnim = "muzzleFlash";
		magazineReloadTime = 3;
		
		recoil = "fow_w_smg_recoil";
		
		modes[] = {"Full", "Single", "Far", "Medium", "Short"};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.02;
			dispersion = 0.00131;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 300;
			
			sounds[] = {"StandardSound"};
			
			class StandardSound {
				soundSetShot[] = {"FoW_Thompson_Firing", "FoW_SMG_EFX"};
			};
		};
		class Full : Mode_FullAuto {

			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 300;
			
			reloadTime = 0.08;
		
			sounds[] = {"StandardSound"};
			class StandardSound {
				soundSetShot[] = {"FoW_Thompson_Firing", "FoW_SMG_EFX"};
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
			libTextDesc = "M2 Flamethrower";
		};
		descriptionShort = "M2 Flamethrower";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {20};
		discreteDistanceInitIndex = 0;
		aiDispersionCoefY = 8.0;
		aiDispersionCoefX = 9.0;
		dexterity = 2.5;
		inertia = 0.4;

		/*class GunParticles {
			class RifleAmmoCloud {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "LIB_RifleAmmoCloud";
			};
			class SmokeEffect {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "LIB_RifleSmokeTrail";
			};
		};*/
	};
