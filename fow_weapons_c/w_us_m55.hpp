	class fow_w_m55_reising : fow_rifle_base {
		scope = 2;
		displayName = "[US] M55 Reising";
		picture = "\fow\fow_weapons\m55\data\ui\w_m55_x_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_m55_hands.rtm"};
		
		model = "fow\fow_weapons\m55\m55.p3d";
		magazines[] = {"fow_20Rnd_45acp"};
		
		reloadAction = "GestureReloadSMG_02";
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Sting\reload_sting",1,1,10};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\SMG\Vermin\Dry_Vermin",0.5011872,1,10};
		//reloadMagazineSound[] = {"fow\fow_sounds\weapons\m55\reload.wav",1.0,1,10};
		//drySound[] = {"fow\fow_sounds\weapons\m55\dry.wav",0.5011872,1,10};
		//changeFiremodeSound[] = {"fow\fow_sounds\weapons\m55\firemode.wav",0.35397288,1,10};
		
		aimTransitionSpeed = 1 ;
		inertia = 0.5;
		
		selectionFireAnim = "zasleh";		
		
		modes[] = {"Full", "Single", "Burst_AI"};
		class Single: Mode_SemiAuto	{
			
			reloadTime = 0.075;
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

			reloadTime = 0.075;
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

			reloadTime = 0.075;
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
			libTextDesc = "Sten mk2";
		};
		descriptionShort = "Sten mk2";
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
