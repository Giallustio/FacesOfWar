	class fow_w_m1a1_thompson : fow_rifle_base {
		scope = 2;
		displayName = "[US] M1A1 Thompson";
		picture = "\fow\fow_weapons\m1a1\data\ui\w_m1a1_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_thompson_hands.rtm"};
		
		reloadAction = "fow_gesture_thompson_reload";
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\thompson\reload.wav",1 ,1 , 25};
		drySound[] = {"fow\fow_sounds\weapons\thompson\dry.wav",1.2, 1, 10};
		changeFiremodeSound[] = {"fow\fow_sounds\weapons\thompson\fireselector.wav",1.2 ,1 ,10};

		
		model = "fow\fow_weapons\m1a1\wx_thompson_m1a1";
		magazines[] = {"fow_30Rnd_45acp","fow_30Rnd_45acp_T"};
		
		selectionFireAnim = "muzzleFlash";
		magazineReloadTime = 5;
		
		aimTransitionSpeed = 0.93;
		inertia = 0.55;
		recoil = "fow_w_smg_recoil";
		
		modes[] = {"Full", "Single", "Burst_AI"};
		class Single: Mode_SemiAuto	{
			
			reloadTime = 0.08;
			dispersion = 0.00131;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.05;
			aiRateOfFireDistance = 500;
			
			sounds[] = {"StandardSound"};
			class StandardSound {
				soundSetShot[] = {"FoW_Thompson_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_45ACP"};
			};
		};
		class Full : Mode_FullAuto {
			
			reloadTime = 0.08;
			dispersion = 0.00131;

			minRange = 1;
			minRangeProbab = 1;
			midRange = 10;
			midRangeProbab = 1;
			maxRange = 20;
			maxRangeProbab = 1;
			aiRateOfFire = 0;
			aiRateOfFireDistance = 600;
		
			sounds[] = {"StandardSound"};
			class StandardSound {
				soundSetShot[] = {"FoW_Thompson_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_45ACP"};
			};
		};
		class Burst_AI: Mode_Burst {

			reloadTime = 0.08;
			dispersion = 0.00131;
			
			showToPlayer = 0;
			soundBurst = 0;
			textureType = "dual";
			burst = 5;
			burstRangeMax = 10;
			aiBurstTerminable = 1;
			
			minRange = 20;
			minRangeProbab = 1.5;
			midRange = 200;
			midRangeProbab = 1;
			maxRange = 400;
			maxRangeProbab = 1;
			aiRateOfFire = 1.0;
			aiRateOfFireDistance = 100;
			
			sounds[] = {"StandardSound"};
			class StandardSound {
				soundSetShot[] = {"FoW_Thompson_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_45ACP"};
			};
		};
		
		class Library {
			libTextDesc = "M1A1 Thompson";
		};
		descriptionShort = "M1A1 Thompson";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,250};
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
	class fow_w_m1_thompson : fow_w_m1a1_thompson {
		displayName = "[US] M1 Thompson";
		picture = "\fow\fow_weapons\m1a1\data\ui\w_m1_ca.paa";
		model = "fow\fow_weapons\m1a1\wx_thompson_m1";
	};
/*	class fow_w_m1928_thompson : fow_w_m1a1_thompson {
		displayName = "[US] M1928 Thompson";
		picture = "\fow\fow_weapons\m1a1\data\ui\w_m1928_ca.paa";
		model = "fow\fow_weapons\m1a1\thompson_1928";
		magazines[] = {"fow_50Rnd_45acp","fow_50Rnd_45acp_T"};
		
		//handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_thompson_hands.rtm"};
		//reloadAction = "fow_gesture_thompson_reload";	
		
		descriptionShort = "M1928 Thompson";
		class Library {
			libTextDesc = "M1928 Thompson";
		};
	};
*/
