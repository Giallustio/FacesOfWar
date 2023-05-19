
	class fow_w_carcano9138 : fow_rifle_base {
		scope = 2;
		displayName = "[IT] Carcano 91/38";
		model = "fow\fow_weapons\carcano\fow_carcano9138";
		//picture = "\lib\weapons\k98\data\equip\w_k98_ca.paa";
		//handAnim[] = {"OFP2_ManSkeleton","fow\fow\fow_anims\weapons\carcano_hands.rtm"};
		reloadAction = "gestureReloadK98Magazine";
		magazineReloadTime = 6;
		selectionFireAnim = "muzzleFlash";
		modes[] = {"Single", "Far", "Medium", "Short"};
		class Single : Mode_SemiAuto {

			soundContinuous = 0;
			reloadTime = 2;
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
			recoil = "recoil_single_dmr";
			recoilProne = "recoil_single_prone_dmr";
			
			sounds[] = {"StandardSound"};
			
			class BaseSoundModeType;
			class StandardSound : BaseSoundModeType {
                soundSetShot[] = {"fow_smle_Firing", "FoW_Rifle_EFX"};
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
		//drySound[] = {"\LIB\weapons\data\sounds\weapons\K98\k98_dry.wss", 1, 1, 10};
		//reloadSound[] = {"\fow\fow_sounds\sounds\k98_cycle.wss",1.12202,1,30};
		//reloadMagazineSound[] = {"\fow\fow_sounds\sounds\k98_reload.wss",1,1,10};
		magazines[] = {"fow_6Rnd_65x52"};
		class Library {
			libTextDesc = "Carcano 91/38";
		};
		descriptionShort = "Carcano 91/38";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100, 200, 300, 400, 500, 600, 700, 800};
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
	};	
