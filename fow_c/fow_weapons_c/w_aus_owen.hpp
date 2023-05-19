	class fow_w_owen : fow_rifle_base {
		scope = 2;
		displayName = "[AUS] Owen smg";
		picture = "\fow\fow_weapons\owen\data\ui\w_owen_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_mp40_hands.rtm"};
		model = "fow\fow_weapons\owen\tiggis_owen_smg";
		magazines[] = {"fow_33Rnd_9x19_owen"};
		selectionFireAnim = "muzzleFlash";
		
		reloadAction = "fow_gesture_mp40_reload";
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\mp40\reload.wav",1.0,1,20};
		drySound[] = {"fow\fow_sounds\weapons\mp40\dry.wav",1.1,1,10};
		magazineReloadTime = 4.8;
		
		aimTransitionSpeed = 1 ;
		inertia = 0.5;		
		recoil = "fow_w_smg_recoil";
		
		modes[] = {"Full", "Single", "Burst_AI"};
		class Full : Mode_FullAuto {

			reloadTime = 0.085;
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
				soundSetShot[] = {"FoW_MP40_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
			};
		};
		class Single: Mode_SemiAuto	{	
		
			reloadTime = 0.085;
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
				soundSetShot[] = {"FoW_MP40_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
			};
		};
		class Burst_AI: Mode_Burst {

			reloadTime = 0.085;
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
				soundSetShot[] = {"FoW_MP40_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
			};
		};
		class Library {
			libTextDesc = "Owen SMG";
		};
		descriptionShort = "Owen SMG";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200};
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
