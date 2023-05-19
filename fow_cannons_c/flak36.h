	class fow_w_flak36_base: StaticCannon
	{
		scope = 1;
		picture = "\fow\fow_cannons\flak36\data\ui\flak36_base_ca.paa";
		Icon = "\fow\fow_cannons\flak36\data\ui\map_flak36_ca.paa";
		UiPicture = "\fow\fow_cannons\flak36\data\ui\flak36_base_ca.paa";
		accuracy = 0.5;
		hascommander = 1;
		castCargoShadow = 1;
		//transportSoldier = 1;
		//cargoAction[] = {"passenger_boat_holdleft2"};
		hideWeaponsCargo = 1;
		
		/*hasDriver = 0;
		proxyType = "CPDriver";
		proxyIndex = 1;
		DriverName = "Loader";
		hideProxyInCombat = 0;
		viewDriverInExternal = 1;
		driverAction = "passenger_boat_holdleft2";
		driverInAction = "passenger_boat_holdleft2";
		driverForceOptics = 0;
		forceHidedriver = 0;
		memoryPointDriverOutOptics = "driverview";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		memoryPointDriverOptics[] = {"driverview"};
		memoryPointsGetInDriver = "pos_driver";
		memoryPointsGetInDriverDir = "pos_driver_dir";*/
	
		fireDustEffect = "FDustEffects";
		
		vehicleclass = "fow_cannons";
		editorSubcategory = "fow_cannons";

		model="\fow\fow_cannons\flak36\flak36.p3d";   				

		faction = "fow_heer";
		crew = "fow_s_ger_heer_rifleman";
		typicalCargo[] = {"fow_s_ger_heer_rifleman"};
		
		ejectDeadGunner = 1;
		ejectDeadCargo = 1;
		ejectDeadDriver = 1;
		ejectDeadCommander = 1;

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner= "pos_gunner";
				memoryPointsGetInGunnerDir= "pos_gunner_dir";
				gunnerAction = "passenger_apc_narrow_generic01";
				gunnergetInAction = "";
				gunnergetOutAction = "";
				weapons[] = {"fow_w_88mm_flak"};		//to be replace with flak36_88		
				magazines[] = {"fow_30Rnd_88mm_AP","fow_30Rnd_88mm_HE"}; //to be replace with correct ammo, see for example http://store.technoframes.com/flak88/
				gunBeg = "gun_muzzle";
				gunEnd = "gun_chamber";
				maxHorizontalRotSpeed = 0.36;//maxHorizontalRotSpeed = "((360/X)/45)"; // 22 secs
				
				soundServo[] = {"fow\fow_sounds\vehicles\flak36\flak36_turning.wav",1.3,1,15};
				soundServoVertical[] = {"fow\fow_sounds\vehicles\flak36\flak36_turning.wav",1.3,1,15};
				
				maxVerticalRotSpeed = 0.2;	
				minElev = -5;
				maxElev = 70;
				initElev = 0;
				minTurn = -360;
				maxTurn = 360;
				initTurn = 0;
				
				GunnerForceOptics = 0;
				gunnerOpticsModel = "";
	 			gunnerOpticsColor[] = {};				
				class ViewOptics
				{
					initAngleX = 0; minAngleX = -5; maxAngleX = +37;
					initAngleY = 0; minAngleY = -27; maxAngleY = +27;
					initFov = 0.3; minFov = 0.3; maxFov = 0.3;
				};
				//turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1400,1600,1800,2000,2200,2400,2600,2800,3000,3200,3400,3600,3800,4000};
				discreteDistanceInitIndex = 3;
				class OpticsIn
				{
					class Wide
					{
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.155;
						minFov = 0.155;
						maxFov = 0.155;
						visionMode[] = {"Normal"};
						thermalMode[] = {0,1};
						gunnerOpticsModel = "\fow\fow_cannons\flak36\flak36_optic.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel = "\fow\fow_cannons\flak36\flak36_optic.p3d";
						initFov = 0.047;
						minFov = 0.047;
						maxFov = 0.047;
					};
				};				
			};
			class Commander: NewTurret
			{
				proxyIndex = 1;
				proxyType = "CPDriver";
				commanderUsesPilotView = 1;
				primaryGunner = 1;
				primaryObserver = 1;
				commanding = 3;
				viewGunnerInExternal = 1;
				hasGunner = 1;
				gunnerName = "Commander";
				gunBeg = "";
				gunEnd = "";
				memoryPointGun = "";
				forceHidegunner = 1;
				GunnerForceOptics = 0;
				gunnerUsesPilotView = 0;
				gunnerOutOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerOutOpticsEffect[] = {};
				gunnerOutOpticsColor[] = {0,0,0,1};
				gunnerOutOpticsShowCursor = 0;
				gunnerOpticsModel = "\a3\weapons_f\Reticle\optics_empty";
				gunnerOpticsEffect[] = {};
				gunnerOpticsColor[] = {0,0,0,1};
				gunnerOpticsShowCursor = 0;
				stabilizedInAxes = "StabilizedInAxesNone";
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				selectionFireAnim = "";
				memoryPointGunnerOptics = "";
				memoryPointGunnerOutOptics = "";
				memoryPointsGetInGunner = "pos_driver";
				memoryPointsGetInGunnerDir = "pos_driver_dir";
				startEngine = 0;
				outGunnerMayFire = 0;
				inGunnerMayFire = 0;
				class ViewOptics//: ViewOptics
				{
					initFov = 0.3;
					minFov = 0.2;
					maxFov = 0.4;
					initAngleX = 0;
					minAngleX = -70;
					maxAngleX = 70;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
				};
				class ViewGunner//: ViewGunner
				{
					initFov = 0.3;
					minFov = 0.2;
					maxFov = 0.4;
					initAngleX = 0;
					minAngleX = -100;
					maxAngleX = 100;
					initAngleY = 0;
					minAngleY = -90;
					maxAngleY = 90;
				};
				class HeadLimits//: HeadLimits
				{
					initAngleX = 5;
					minAngleX = -40;
					maxAngleX = 40;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
				};
				extCameraPosition[] = {0,2,-10};
				groupCameraPosition[] = {0,5,-20};
				weapons[] = {};
				magazines[] = {};
				getInRadius = 1.0;
				gunnerAction = "passenger_boat_holdleft2";
				gunnerInAction = "passenger_boat_holdleft2";
				ejectDeadGunner = 0;
				minTurn = -70;
				maxTurn = 70;
				initTurn = 0;
				minElev = -15;
				maxElev = 45;
				initElev = 0;
				maxHorizontalRotSpeed = 0.8;
				maxVerticalRotSpeed = 0.8;
				soundServo[] = {"",0.00316228,1};
			};		
		};
		class AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "fow_w_88mm_flak"; //to be replace with flak36_88
			};
			class muzzle_hide_cannon
			{
				source = "reload";
				weapon = "fow_w_88mm_flak"; //to be replace with flak36_88
			};
			class muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "fow_w_88mm_flak"; //to be replace with flak36_88
			};
		};
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "CannonFired";
				positionName = "gun_muzzle";
				directionName = "gun_chamber";
			};
		};
	};
	class fow_w_flak36_tan_ger_heer: fow_w_flak36_base
	{
		scope = 2;
		side = 1;
		
		picture = "";
		icon = "";
		mapSize= 6;
		displayName = "Flak 36 (tan)";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\fow\fow_cannons\flak36\data\flak36_tan_co.paa"};
	};
	class fow_w_flak36_green_ger_heer: fow_w_flak36_tan_ger_heer
	{
		displayName = "Flak 36 (green)";
		hiddenSelectionsTextures[] = {"\fow\fow_cannons\flak36\data\flak36_green_co.paa"};
	};
	class fow_w_flak36_gray_ger_heer: fow_w_flak36_tan_ger_heer
	{
		displayName = "Flak 36 (gray)";
		hiddenSelectionsTextures[] = {"\fow\fow_cannons\flak36\data\flak36_gray_co.paa"};
	};
	class fow_w_flak36_camo_ger_heer: fow_w_flak36_tan_ger_heer
	{
		displayName = "Flak 36 (camo)";
		hiddenSelectionsTextures[] = {"\fow\fow_cannons\flak36\data\flak36_camo_co.paa"};
	};
	
	//Backward comp
	
	class fow_ger_flak36_tan : fow_w_flak36_tan_ger_heer {scope = 1;};
	class fow_ger_flak36_green: fow_w_flak36_green_ger_heer {scope = 1;};
	class fow_ger_flak36_gray: fow_w_flak36_gray_ger_heer {scope = 1;};
	class fow_ger_flak36_camo: fow_w_flak36_camo_ger_heer {scope = 1;};