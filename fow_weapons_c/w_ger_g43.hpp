	
	class fow_w_g43 : fow_rifle_base {
		scope = 2;
		displayName = "[GER] G43";
		model = "fow\fow_weapons\g43\lodu_g43.p3d";
		picture = "\fow\fow_weapons\m1_carbine\data\ui\w_m1carbine_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_g43_hands.rtm"};
		
		reloadAction = "GestureReloadMk20";
		reloadMagazineSound[] = {"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR_04_reload",0.251189,1,10};
		//reloadMagazineSound[] = {"fow\fow_sounds\weapons\g43\reload.wav",1.0,1,10};
		drySound[] = {"fow\fow_sounds\weapons\garand\dry.wav",1.2,1,10};
		magazines[] = {"fow_10nd_792x57"};
		magazineReloadTime = 3;

		aimTransitionSpeed = 0.95;
		inertia = 0.56;
		
		recoil = "fow_w_rifle_recoil";
		
		selectionFireAnim = "muzzleFlash";
		modes[] = {"Single", "Far", "Medium", "Short"};
		class Single : Mode_SemiAuto {
			
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"FoW_G43_Firing", "FoW_Rifle_EFX", "FoW_Interior_Reverb"};
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
			dispersion = 0.0008;
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
			libTextDesc = "G43";
		};
		descriptionShort = "G43";
		weaponInfoType = "RscWeaponZeroing";
		maxZeroing = 1200;	
		discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200};
		discreteDistanceInitIndex = 1;

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
				effectName = "fow_w_effect_cartridge_762";
			};
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_rifle";
			};
		};	
	};	
