	
	class fow_w_leeenfield_no4mk1 : fow_rifleBolt_base {
		scope = 2;
		displayName = "[UK] Lee Enfield no.4 mk1";
		model = "fow\fow_weapons\lee_enfield\lodu_enfield";
		picture = "\fow\fow_weapons\lee_enfield\data\ui\w_enfield_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","fow\fow_anims\weapons\w_enfield_hands.rtm"};
		
		reloadAction = "fow_gesture_enfield_reload";
		magazines[] = {"fow_10Rnd_303"};
		magazineReloadTime = 8.5;
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\smle\reload.wav",1.0,1,10};
		drySound[] = {"fow\fow_sounds\weapons\smle\dry.wav",0.5011872,1,10};
		
		aimTransitionSpeed = 0.8;
		inertia = 0.7;
		
		class fow_BoltAction {
			param[] = {"fow_gesture_enfield_bolt",0.75,"fow_cartridge_303",0.6,0.065,- 0.18,0.1};
			sounds[] = {"fow_sound_boltAction_SMLE"};
		};		
		
		recoil = "fow_w_rifle_recoil";
		
		selectionFireAnim = "muzzleFlash";
		
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {300,600};
		discreteDistanceInitIndex = 0;
		
		modes[] = {"Single", "Far", "Medium", "Short"};
		class Single : Mode_SemiAuto {
			reloadTime = 1;
			dispersion = 0.0008;
			aiDispersionCoefX = 7;
			aiDispersionCoefY = 7;
			aiRateOfFire = 0.001;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			
			sounds[] = {"StandardSound"};
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"FoW_SMLE_Firing", "FoW_Rifle_EFX", "FoW_Interior_Reverb"};
            };

		};
		class Far : Single {
			showToPlayer = 0;
			aiRateOfFireDistance = 500;
			aiRateOfFire = 10;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.5;
			maxRange = 500;
			maxRangeProbab = 0.04;
		};
		class Medium : Single {
			showToPlayer = 0;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 300;
			minRange = 100;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.5;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class Short : Single {
			showToPlayer = 0;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 100;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 50;
			midRangeProbab = 0.5;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};

		class Library {
			libTextDesc = "Lee-Enfield No.4 Mk1";
		};
		descriptionShort = "Lee-Enfield No.4 Mk1";
		
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot {
				iconPosition[] = {0.3,0.7};
				iconScale = 0.25;
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[] = {"fow_w_acc_no4_bayo"};
			};
			class CowsSlot {
			};
			class PointerSlot {
			};
		};		
		
		class GunParticles {
		/*	class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_303";
			};*/
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_rifle";
			};
		};	
	};
	class fow_w_leeenfield_no4mk1_redwood : fow_w_leeenfield_no4mk1 {
		scope = 2;
		displayName = "[UK] Lee Enfield no.4 mk1 (red wood)";
		model = "fow\fow_weapons\lee_enfield\lodu_enfield_redwood";
	};
	class fow_w_leeenfield_no5mk1_junglecarbine : fow_w_leeenfield_no4mk1 {
		scope = 2;
		displayName = "[UK] Lee Enfield no.5 Mk.I (Jungle carbine)";
		model = "fow\fow_weapons\lee_enfield\lodu_enfield_no5";
		picture = "\fow\fow_weapons\lee_enfield\data\ui\w_enfield_no5_ca.paa";
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot {};
			class CowsSlot {};
			class PointerSlot {};
		};	
	};
