	
	class fow_w_piat : fow_rifle_base {
		scope = 2;
		displayName = "P.I.A.T.";
		model = "\fow\fow_weapons\piat\piat.p3d";
		picture = "\fow\fow_weapons\piat\data\ui\gear_piat_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_garand_hands.rtm"};
		drySound[] = {"fow\fow_sounds\weapons\piat\dry.wav",1.2 ,1 , 25};
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\piat\reload.wav",+1db ,1 , 25};
		reloadAction = "fow_gesture_garand_reload";
		magazines[] = {"fow_1Rnd_piat_HEAT","fow_1Rnd_piat_HE"};
		magazineReloadTime = 3;

		aimTransitionSpeed = 0.5 ;
		inertia = 1.5;
		
		recoil = "fow_w_at_recoil";

		modes[] = {"Single"};
		
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[] = {"FoW_PIAT_Launch", "FoW_Piat_Tails"};
			};
			aiRateOfFire = 7.0;
			aiRateOfFireDistance = 600;
			minRange = 20;
			minRangeProbab = 0.8;
			midRange = 100;
			midRangeProbab = 0.9;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		
		class Library {
			libTextDesc = "P.I.A.T.";
		};
		descriptionShort = "P.I.A.T.";
		
		cameraDir = "look";
		maxZeroing = 110;	
		discreteDistance[] = {110};
		discreteDistanceCameraPoint[] = {"eye"};
		discreteDistanceInitIndex = 0;

		dexterity = 1.7;
		class WeaponSlotsInfo : WeaponSlotsInfo {
			class MuzzleSlot {};
			class CowsSlot {};
			class PointerSlot {};
		};
		class GunParticles {

		};	
	};