	class fow_w_type100 : fow_rifle_base {
		scope = 2;
		displayName = "[IJA] Type 100 SMG";
		picture = "\fow\fow_weapons\type100\data\ui\w_type100_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_type100_hands.rtm"};
		model = "\fow\fow_weapons\type100\wx_ija_type100_smg";
		magazines[] = {"fow_32Rnd_8x22"};
		selectionFireAnim = "muzzleFlash";
		
		reloadAction = "GestureReloadAKM";
		reloadMagazineSound[] = {"A3\Sounds_F_Exp\arsenal\weapons\Rifles\Rifle_AK47\AK47_reload",1,1,10};
		drySound[] = {"fow\fow_sounds\weapons\type100\dry.wav",1.1,1,10};
		//reloadMagazineSound[] = {"fow\fow_sounds\weapons\type100\reload.wav",1.0,1,10};
		//drySound[] = {"fow\fow_sounds\weapons\type100\dry.wav",0.5011872,1,10};
		//changeFiremodeSound[] = {"fow\fow_sounds\weapons\type100\firemode.wav",0.35397288,1,10};

		aimTransitionSpeed = 1;
		inertia = 0.47;
		recoil = "fow_w_smg_recoil";
		recoilProne = "fow_w_smg_recoil_prone";

		modes[] = {"Full", "Single", "Burst_AI"};
		class Single: Mode_SemiAuto	{
			
			reloadTime = 0.09; // 600 RPM = 10 rounds per second
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
				soundSetShot[] = {"FoW_Type100_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
			};
		};
		class Full : Mode_FullAuto {

			reloadTime = 0.09; // 600 RPM = 10 rounds per second
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
				soundSetShot[] = {"FoW_Type100_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
			};
		};
		class Burst_AI: Mode_Burst {

			reloadTime = 0.09; // 600 RPM = 10 rounds per second
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
				soundSetShot[] = {"FoW_Type100_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
			};
		};
		
		class Library {
			libTextDesc = "Type 100";
		};
		
		descriptionShort = "Type 100";
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
