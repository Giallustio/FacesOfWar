	
	class fow_w_m1_carbine : fow_rifle_base {
		scope = 2;
		displayName = "[US] M1 Carbine";
		model = "fow\fow_weapons\m1_carbine\m1_carbine.p3d";
		picture = "\fow\fow_weapons\m1_carbine\data\ui\w_m1carbine_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_m1carbine_hands.rtm"};
		
		reloadAction = "GestureReloadDMR06";
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\carbine\reload.wav",1.0,1,25};
		drySound[] = {"fow\fow_sounds\weapons\carbine\dry.wav",1.2,1,10};
		magazines[] = {"fow_15Rnd_762x33"};
		magazineReloadTime = 3;

		aimTransitionSpeed = 0.95;
		inertia = 0.56;
		
		selectionFireAnim = "muzzleFlash";
		modes[] = {"Single", "Far", "Medium", "Short"};
		class Single : Mode_SemiAuto {
			
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"FoW_Carbine_Firing", "FoW_Sturmgewehr_EFX", "FoW_Interior_Reverb_9mm"};
            };
			
			soundContinuous = 0;
			reloadTime = 0.07;
			ffCount = 1;
			aiRateOfFire = 0.001;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			dispersion = 0.0014; 
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
		//drySound[] = {"\LIB\weapons\data\sounds\weapons\K98\k98_dry.wss", 1, 1, 10};
		//reloadSound[] = {"\LIB\weapons\data\sounds\weapons\K98\k98_reload_2.wss", 1, 1, 20};
		//reloadMagazineSound[] = {"\LIB\weapons\data\sounds\weapons\K98\k98_loadmagazine.wss", 0.501187, 1, 10};
		
		class Library {
			libTextDesc = "M1 carbine";
		};
		descriptionShort = "M1 carbine";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {150,300};
		discreteDistanceInitIndex = 0;

		dexterity = 1.7;
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot {
			};
			class CowsSlot {
			};
			class PointerSlot {
			};
		};
		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_762x33";
			};
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_rifle";
			};
		};	
	};	
