	class fow_w_sten_mk2 : fow_rifle_base {
		scope = 2;
		displayName = "[UK] Sten mk2";
		picture = "\fow\fow_weapons\sten\data\ui\w_sten_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_sten_hands.rtm"};
		model = "fow\fow_weapons\sten\lodu_sten_mk2";
		magazines[] = {"fow_32Rnd_9x19_sten"};
		selectionFireAnim = "muzzleFlash";

		reloadAction = "GestureReloadAKM";
		//reloadAction = "fow_gesture_sten_reload";		

		reloadMagazineSound[] = {"fow\fow_sounds\weapons\mp40\reload.wav",1.0,1,20};
		drySound[] = {"fow\fow_sounds\weapons\sten\dry.wav",1,1,10};
		changeFiremodeSound[] = {"fow\fow_sounds\weapons\sten\fireselector.wav",1,1,10};


		aimTransitionSpeed = 1 ;
		inertia = 0.45;
		recoil = "fow_w_smg_recoil";

		modes[] = {"Full", "Single", "Burst_AI"};
		class Single: Mode_SemiAuto	{
			
			reloadTime = 0.10;
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
				soundSetShot[] = {"FoW_Sten_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
			};
		};
		class Full : Mode_FullAuto {

			reloadTime = 0.10; // 600 RPM = 10 rounds per second
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
				soundSetShot[] = {"FoW_Sten_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
			};
		};
		class Burst_AI: Mode_Burst {

			reloadTime = 0.10;
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
				soundSetShot[] = {"FoW_Sten_Firing", "FoW_SMG_EFX", "FoW_Interior_Reverb_9mm"};
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
		dexterity = 2.5;
		
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
	class fow_w_sten_mk5 : fow_w_sten_mk2 {
		scope = 2;
		displayName = "[UK] Sten mk5";
		picture = "\fow\fow_weapons\sten\data\ui\w_sten_ca.paa";
		handAnim[] = {"OFP2_ManSkeleton","\fow\fow_anims\weapons\w_sten_mk5_hands.rtm"};
		model = "fow\fow_weapons\sten\lodu_sten_mk5";
	};
