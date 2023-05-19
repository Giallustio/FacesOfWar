	class fow_w_pak40_base: StaticWeapon
	{
		scope = 1;
		side = 1;
		
		faction = "fow_heer";
		
		threat[] = {1,0.9,0.2};
		camouflage = 2;
		
		hasDriver = 1;
		proxyType = "CPDriver";
		proxyIndex = 1;
		DriverName = "Loader";
		hideProxyInCombat = 0;
		viewDriverInExternal = 1;
		castDriverShadow = 1;
		ejectDeadDriver = 1;
		displayName = "Pak 40";
		model = "\fow\fow_cannons\pak40\pak40.p3d";
		vehicleclass = "fow_cannons";
		editorSubcategory = "fow_cannons";
		nameSound = "cannon";
		
		crew = "fow_s_ger_heer_rifleman";
		typicalCargo[] = {"fow_s_ger_heer_rifleman"};
		accuracy = 0.7;
		picture = "\fow\fow_cannons\6pounder\data\ui\pic_6Pounder_ca.paa";
		Icon = "\fow\fow_cannons\6pounder\data\ui\ico_6Pounder_ca.paa";
		
		mapSize = 11;
		armor = 150;
		forceHideGunner = 0;
		cost = 3000;
		weapons[] = {"fakeweapon"};
		class AnimationSources
		{
			class gun_1_recoil_cannon
			{
				source = "reload";
				weapon = "fow_w_75mm_kwk40";
			};			
			class gun_1_reload_animation
			{
				source = "reload";
				weapon = "fow_w_75mm_kwk40";
			};
			class foliage_g {displayName = "Add foliage on barrel";source = "user";animPeriod = 1;initPhase=0;};
			class foliage {displayName = "Add foliage";source = "user";animPeriod = 1;initPhase=0;};
		};
		insideSoundCoef = 1;
		driverAction = "fow_6_pounder_driver";
		driverInAction = "fow_6_pounder_driver";
		driverForceOptics = 0;
		forceHidedriver = 0;
		memoryPointDriverOutOptics = "driverview";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		class Library
		{
			libTextDesc = "The 7.5 cm Pak 40 (7,5 cm Panzerabwehrkanone 40) is a German 75 millimetre anti-tank gun developed in 1939–1941 by Rheinmetall. ";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"fow\fow_cannons\pak40\data\pak40.rvmat","fow\fow_cannons\pak40\data\pak40_damage.rvmat","fow\fow_cannons\pak40\data\pak40_destruct.rvmat"};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				primaryGunner = 1;
				commanding = 1;
				proxyIndex = 1;
				hideProxyInCombat = 0;
				proxyType = "CPGunner";
				viewGunnerInExternal = 1;
				gunnerUsesPilotView = 1;
				gunnerName = "Gunner";
				ejectDeadGunner = 1;
				gunBeg = "gun_1_beg";
				gunEnd = "gun_1_end";
				memoryPointGun = "gun_1_muzzle";
				gunnerAction = "fow_6_pounder_gunner";
				gunnerInAction = "fow_6_pounder_gunner";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				forceHidegunner = 0;
				GunnerForceOptics = 0;
				namesound = "Cannon";
				gunnerOutOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsEffect[] = {};
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsModel = "\fow\fow_cannons\optics\pak40";
				gunnerOpticsEffect[] = {};
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerOpticsShowCursor = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				body = "turret_1";
				gun = "gun_1";
				animationSourceBody = "Turret_1";
				animationSourceGun = "Gun_1";
				selectionFireAnim = "muzzleflash_cannon";
				//memoryPointGunnerOptics = "gunnerview";
				//memoryPointGunnerOutOptics = "gunner_1_weaponview";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				minElev = -5;
				maxElev = 22;
				initElev = 0;
				minTurn = -32.5;
				maxTurn = 32.5;
				initTurn = 0;
				maxHorizontalRotSpeed = 0.16;
				maxVerticalRotSpeed = 0.16;
				weapons[] = {"fow_w_75mm_kwk40"};
				magazines[] = {"fow_30Rnd_75mm_pzgr40_APCR","fow_30Rnd_75mm_pzgr39_APCBC","fow_30Rnd_75mm_sprg34_HE"};
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				class HitPoints
				{
					class HitTurret
					{
						armor = 1;
						material = -1;
						name = "turret_1";
						visual = "turret_1";
						passThrough = 0.8;
						minimalHit = 0.08;
					};
					class HitGun
					{
						armor = 0.8;
						material = -1;
						name = "gun_1";
						visual = "gun_1";
						passThrough = 0;
						minimalHit = 0.08;
					};
				};
				class ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.2;
					minFov = 0.15;
					maxFov = 0.25;
				};
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -360;
					maxAngleY = 360;
					initFov = 0.35;
					minFov = 0.35;
					maxFov = 0.35;
				};
			};
		};
		class HitPoints
		{
			class HitHull
			{
				armor = 1;
				material = -1;
				name = "Hull";
				visual = "Hull";
				passThrough = 1;
				minimalHit = 0.08;
			};
			/*class HitLTrack
			{
				armor = 0.3;
				material = -1;
				name = "track_L";
				visual = "track_L";
				passThrough = 0.1;
				minimalHit = 0.08;
			};
			class HitRTrack
			{
				armor = 0.3;
				material = -1;
				name = "track_R";
				visual = "track_R";
				passThrough = 0.1;
				minimalHit = 0.08;
			};*/
		};	
	

		hiddenSelections[] = {"camo"};	
		hiddenSelectionsTextures[] = {"\fow\fow_cannons\pak40\data\pak40_yellow_co.paa"};
		
		animationList[] =
		{
			"foliage",0,
			"foliage_t",0
		};
		
		class textureSources
		{
			// This texture source will be available for every defined factions
			class Dunkelgelb
			{
				// Display name of the texture
				displayName = "Dunkelgelb";
				// Author of the texture
				author = "FOW Team";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\fow\fow_cannons\pak40\data\pak40_yellow_co.paa"};
				// This source should be available for the following factions
				factions[] = 
				{
					"fow_heer","fow_waffenss"
				};
			};
			class Panzergrau
			{
				// Display name of the texture
				displayName = "Panzergrau";
				// Author of the texture
				author = "FOW Team";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\fow\fow_cannons\pak40\data\pak40_gray_co.paa"};
				// This source should be available for the following factions
				factions[] = 
				{
					"fow_heer","fow_waffenss"
				};
			};
			class Camo
			{
				// Display name of the texture
				displayName = "Camo";
				// Author of the texture
				author = "FOW Team";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\fow\fow_cannons\pak40\data\pak40_camo_co.paa"};
				// This source should be available for the following factions
				factions[] = 
				{
					"fow_heer","fow_waffenss"
				};
			};
		};
	};
	class fow_w_pak40_yellow_ger_heer: fow_w_pak40_base {
		scope = 2;
		displayName = "Pak40 (dunkelgelb)";	
	};
	class fow_w_pak40_gray_ger_heer: fow_w_pak40_base {
		scope = 2;
		displayName = "Pak40 (gray)";	
		hiddenSelectionsTextures[] = {"\fow\fow_cannons\pak40\data\pak40_gray_co.paa"};
	};
	class fow_w_pak40_camo_ger_heer: fow_w_pak40_base {
		scope = 2;
		displayName = "Pak40 (camo)";	
		hiddenSelectionsTextures[] = {"\fow\fow_cannons\pak40\data\pak40_camo_co.paa"};
	};
	class fow_w_pak40_camo_foliage_ger_heer: fow_w_pak40_base {
		scope = 2;
		displayName = "Pak40 (camo - foliage)";	
		hiddenSelectionsTextures[] = {"\fow\fow_cannons\pak40\data\pak40_camo_co.paa"};
		class AnimationSources: AnimationSources
		{
			class foliage {source = "user";animPeriod = 1;initPhase=1;};
			class foliage_g {source = "user";animPeriod = 1;initPhase=1;};
		};
	};
