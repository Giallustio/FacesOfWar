	class fow_w_stg44 : fow_rifle_base {
		scope = 2;
		displayName = "[GER] STG44";
		picture = "\fow\fow_weapons\stg44\data\ui\w_stg44_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_stg44_hands.rtm"};
		model = "fow\fow_weapons\stg44\stg44";
		magazines[] = {"fow_30Rnd_792x33"};
		selectionFireAnim = "muzzleFlash";
		reloadAction = "GestureReloadAKM";
		reloadMagazineSound[] = {"fow\fow_sounds\weapons\stg44\reload.wav",1,1,25};
		drySound[] = {"fow\fow_sounds\weapons\stg44\dry.wav",1.1,1,10};
		changeFiremodeSound[] = {"fow\fow_sounds\weapons\stg44\fireselector.wav",1,1,10};
		
		aimTransitionSpeed = 0.9;
		inertia = 0.6;		
		recoil = "fow_w_smg_recoil";
		
		modes[] = {"Full", "Single", "Burst_AI"};
		class Single: Mode_SemiAuto	{
			
			reloadTime = 0.11;
			dispersion = 0.0045;
			
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
				soundSetShot[] = {"FoW_Stg_Firing", "FoW_Sturmgewehr_EFX", "FoW_Interior_Reverb"};
			};		
		};
		class Full : Mode_FullAuto {
			
			reloadTime = 0.11;
			dispersion = 0.0021;
			
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
				soundSetShot[] = {"FoW_Stg_Firing", "FoW_Sturmgewehr_EFX", "FoW_Interior_Reverb"};
			};
		};
		class Burst_AI: Mode_Burst {

			reloadTime = 0.11;
			dispersion = 0.0021;
			
			showToPlayer = 0;
			soundBurst = 0;
			textureType = "dual";
			burst = 7;
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
				soundSetShot[] = {"FoW_Stg_Firing", "FoW_Sturmgewehr_EFX", "FoW_Interior_Reverb"};
			};
		};		
		class Library {
			libTextDesc = "STG 44";
		};
		descriptionShort = "STG 44";
		weaponInfoType = "RscWeaponZeroing";
		discreteDistance[] = {100,200,300,400,500,600,700,800};
		discreteDistanceInitIndex = 0;
		aiDispersionCoefY = 8.0;
		aiDispersionCoefX = 9.0;

		cartridgePos = "";//"nabojnicestart";
		cartridgeVel = "";//"nabojniceend";
		class GunParticles {
			class effect_cartridge {
				positionName = "Nabojnicestart";
				directionName = "Nabojniceend";
				effectName = "fow_w_effect_cartridge_797x33";
			};
			class effect_fire {
				positionName = "usti hlavne";
				directionName = "usti hlavne";
				effectName = "fow_w_effect_smg";
			};
		};	
	};
