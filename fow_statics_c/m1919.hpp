	class fow_w_m1919_tripod: StaticMGWeapon {
		scope = 1;//change it
		side = 2;
		faction = "fow_usa";
		editorSubcategory = "fow_statics";
		crew = "fow_s_us_rifleman";
		
		simulation = "tankX";
		
		armor = 40;
		
		displayName = "M1919 tripod";

		model = "\fow\fow_statics\m1919\m1919a4_m2_tripod.p3d";
		threat[] = {1,0.3,0.3};
		cost = 150000;

		class SimpleObject
		{
			animate[] = {};
			hide[] = {};
			verticalOffset = 0;
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				optics=1;
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 2;
				
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				gunnergetInAction = "Lying"; //"GetInLow";
				gunnergetOutAction = "Lying";//"GetOutLow";

				selectionFireAnim="muzzleFlash";
				displayName = "";
				memoryPointGun = "usti hlavne";
				bounding = "usti hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				body = "mainTurret";
				animationSourceGun = "mainGun";
				gun = "mainGun";
				weapons[] = {"fow_w_m1919a4_static"};
				magazines[] = {"fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919","fow_250Rnd_M1919"};
				gunnerAction = "fow_m1919_gunner";
				ejectDeadGunner = 1;
				gunnerForceOptics = 0;
				minTurn = -30;
				maxTurn = 30;
				initTurn = 0;
				minElev = -10;
				maxElev = 10;
				initElev = 0;
				maxHorizontalRotSpeed = 0.8;
				maxVerticalRotSpeed = 0.8;
				soundServo[] = {"",0.00316228,1};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = "0.25 / 1";
					maxFov = "0.25 / 0.25";
					initFov = "0.25 / 0.7";
				};
				gunnerRightHandAnimName = "gun";
				gunnerLeftHandAnimName = "gun";
			};
		};


		class AnimationSources
		{
			class reloadanim
			{
	   			source = "reload";
				weapon = "fow_w_m1919a4_static";
			};
			class reloadmagazine
			{
				source = "reloadmagazine";
				weapon = "fow_w_m1919a4_static";
			};
			class revolving
			{
				source = "revolving";
				weapon = "fow_w_m1919a4_static";
			};
		};

		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"fow\fow_weapons\m1919\data\m1919a6.rvmat",
				"fow\fow_statics\m1919\data\m1919a6_damage.rvmat",
				"fow\fow_statics\m1919\data\m1919a6_destruct.rvmat",

				"fow\fow_statics\m1919\data\m2_tripod.rvmat",
				"fow\fow_statics\m1919\data\m2_tripod_damage.rvmat",
				"fow\fow_statics\m1919\data\m2_tripod_destruct.rvmat"
			};
		};
		
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"fow_b_usa_m1919_support","fow_b_usa_m1919_weapon"};
			displayName = "";
		};
		class Library
		{
			libTextDesc = "M1919";
		};
		soundGetOut[] = {"A3\sounds_f\dummysound",0.0009999999,1,5};
		soundGetIn[] = {"A3\sounds_f\dummysound",0.00031622773,1,5};
		
		class EventHandlers
		{
			getOut = "params ['_vehicle', '_role', '_unit', '_turret'];_dir = getDir _unit;_unit setDir (_dir + 180);_unit setPos (_vehicle modelToWorld [0, -2.1, 0]);";
		};	
		
		class UserActions
		{
			class fow_reload_MG
			{
				displayName = "Reload M1919";
				position = "";
				radius = 2;
				onlyForplayer = 1;
				condition = "[this] call fow_statics_fnc_canReload";
				statement = "[this] spawn fow_statics_fnc_reload;";
			};
		};
        class ACE_Actions {//: ACE_Actions
            class loadActions {
                displayName = "Reload M1919";
                distance = 2;
                condition = "[this] call fow_statics_fnc_canReload";//QUOTE([ARR_2(_target,_player)] call FUNC(canLoadMagazine));
                statement = "";
                icon = "";
                selection = "nabojniceend";
                class load_250 {
                    displayName = "Reload";
                    condition = "[this] call fow_statics_fnc_canReload";
                    statement = "[this] spawn fow_statics_fnc_reload;";
                    icon = "";
                };
            };
        };	
        /*class ACE_SelfActions {//: ACE_SelfActions
            class loadActions {
                displayName = "Load mortar";
                distance = 2;
                condition = "[this,""fow_1Rnd_60mm_m2_HE""] call fow_mortars_fnc_canReload || [this,""fow_1Rnd_60mm_m2_ILL""] call fow_mortars_fnc_canReload || [this,""fow_1Rnd_60mm_m2_SMOKE""] call fow_mortars_fnc_canReload";//QUOTE([ARR_2(_target,_player)] call FUNC(canLoadMagazine));
                statement = "";
                icon = "";
                selection = "usti hlavne";
                class load_HE {
                    displayName = "HE round";
                    condition = "[this,""fow_1Rnd_60mm_m2_HE""] call fow_mortars_fnc_canReload";
                    statement = "[this,""fow_1Rnd_60mm_m2_HE""] spawn fow_mortars_fnc_reload;";
                    icon = "";
                };
                class load_ILL {
                    displayName = "ILL round";
                    condition = "[this,""fow_1Rnd_60mm_m2_ILL""] call fow_mortars_fnc_canReload";
                    statement = "[this,""fow_1Rnd_60mm_m2_ILL""] spawn fow_mortars_fnc_reload;";
                    icon = "";
                };
                class load_SMOKE {
                    displayName = "SMOKE round";
                    condition = "[this,""fow_1Rnd_60mm_m2_SMOKE""] call fow_mortars_fnc_canReload";
                    statement = "[this,""fow_1Rnd_60mm_m2_SMOKE""] spawn fow_mortars_fnc_reload;";
                    icon = "";
                };
            };
        };	*/
	};
	
	class fow_b_usa_m1919_support: Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[US] M1919A4 (Bag)";
		model = "\fow\fow_statics\m1919\m1919a4_m2_support";
		//picture = "\.paa";
		class assembleInfo
		{
			base = "";
			primary = 0;
			displayName = "";
			assembleTo = "";
			dissasembleTo[] = {};
		};
		mass = 380;
	};
	class fow_b_usa_m1919_weapon: Weapon_Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[US] M1919A4 (Weapon Bag)";
		model = "\fow\fow_statics\m1919\m1919a4_m2_weapon_bag";
		//picture = "\.paa";
		class assembleInfo: assembleInfo
		{
			primary = 1;
			displayName = "M1919A4";
			assembleTo = "fow_w_m1919_tripod";
			base[] = {"fow_b_usa_m1919_support"};
		};
		mass = 250;
	};		
	class fow_w_m1919_tripod_usa_m41: fow_w_m1919_tripod {
		scope = 2;
		//faction = "fow_usa";
		//crew = "fow_s_us_rifleman";
	};
	class fow_w_m1919_tripod_usa_m37: fow_w_m1919_tripod {
		scope = 2;
		//faction = "fow_usa";
		crew = "fow_s_us_m37_rifleman";
	};
	class fow_w_m1919_tripod_usa_p: fow_w_m1919_tripod {
		scope = 2;
		faction = "fow_usa_p";
		crew = "fow_s_us_p_rifleman";
	};
	class fow_w_m1919_tripod_usa_mm: fow_w_m1919_tripod {
		scope = 2;
		faction = "fow_usa_p";
		crew = "fow_s_us_mm_rifleman";
	};
	class fow_w_m1919_tripod_usmc: fow_w_m1919_tripod {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_rifleman";
	};
	class fow_w_m1919_tripod_usmc_camo01: fow_w_m1919_tripod {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_camo01_rifleman";
	};
	class fow_w_m1919_tripod_usmc_camo02: fow_w_m1919_tripod {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_camo02_rifleman";
	};
	
	class fow_w_m1919a6_deployed: fow_w_m1919_tripod {
		displayName = "M1919A6 Deployed (low)";

		model = "\fow\fow_statics\m1919\m1919a6_deployed.p3d";		

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "fow_mg42_gunner_low";//
				magazines[] = {"fow_50Rnd_M1919","fow_50Rnd_M1919","fow_50Rnd_M1919","fow_50Rnd_M1919","fow_50Rnd_M1919","fow_50Rnd_M1919","fow_50Rnd_M1919"};				
			};
		};
		
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {};
			displayName = "";
		};
		
		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"fow\fow_weapons\m1919\data\m1919a6.rvmat",
				"fow\fow_statics\m1919\data\m1919a6_damage.rvmat",
				"fow\fow_statics\m1919\data\m1919a6_destruct.rvmat"
			};
		};		
	};
	class fow_w_m1919a6_deployed_high: fow_w_m1919a6_deployed {
		displayName = "M1919A6 Deployed (high)";

		model = "\fow\fow_statics\m1919\m1919a6_deployed_high.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "fow_mg42_gunner_high";
				gunnergetInAction = ""; //"GetInLow";
				gunnergetOutAction = "";//"GetOutLow";
			};
		};
		class EventHandlers
		{
			getOut = "params ['_vehicle', '_role', '_unit', '_turret'];_dir = getDir _unit;_unit setDir (_dir + 180);";
		};	
	};
	class fow_w_m1919a6_deployed_middle: fow_w_m1919a6_deployed {
		displayName = "M1919A6 Deployed (middle)";

		model = "\fow\fow_statics\m1919\m1919a6_deployed_middle.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{			
				gunnerAction = "fow_mg42_gunner_middle";//	
				gunnergetInAction = "Crouch"; //"GetInLow";
				gunnergetOutAction = "Crouch";//"GetOutLow";
			};
		};
		class EventHandlers
		{
			getOut = "params ['_vehicle', '_role', '_unit', '_turret'];_dir = getDir _unit;_unit setDir (_dir + 180);";
		};	
	};
	
	class fow_w_m1919a6_deployed_usa_m41: fow_w_m1919a6_deployed {
		scope = 2;
		//faction = "fow_usa";
		//crew = "fow_s_us_rifleman";
	};
	class fow_w_m1919a6_deployed_usa_m37: fow_w_m1919a6_deployed {
		scope = 2;
		//faction = "fow_usa";
		crew = "fow_s_us_m37_rifleman";
	};
	class fow_w_m1919a6_deployed_usa_p: fow_w_m1919a6_deployed {
		scope = 2;
		faction = "fow_usa_p";
		crew = "fow_s_us_p_rifleman";
	};
	class fow_w_m1919a6_deployed_usa_mm: fow_w_m1919a6_deployed {
		scope = 2;
		faction = "fow_usa_p";
		crew = "fow_s_us_mm_rifleman";
	};
	class fow_w_m1919a6_deployed_usmc: fow_w_m1919a6_deployed {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_rifleman";
	};
	class fow_w_m1919a6_deployed_usmc_camo01: fow_w_m1919a6_deployed {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_camo01_rifleman";
	};
	class fow_w_m1919a6_deployed_usmc_camo02: fow_w_m1919a6_deployed {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_camo02_rifleman";
	};
	//
	class fow_w_m1919a6_deployed_high_usa_m41: fow_w_m1919a6_deployed_high {
		scope = 2;
		//faction = "fow_usa";
		//crew = "fow_s_us_rifleman";
	};
	class fow_w_m1919a6_deployed_high_usa_m37: fow_w_m1919a6_deployed_high {
		scope = 2;
		//faction = "fow_usa";
		crew = "fow_s_us_m37_rifleman";
	};
	class fow_w_m1919a6_deployed_high_usa_p: fow_w_m1919a6_deployed_high {
		scope = 2;
		faction = "fow_usa_p";
		crew = "fow_s_us_p_rifleman";
	};
	class fow_w_m1919a6_deployed_high_usa_mm: fow_w_m1919a6_deployed_high {
		scope = 2;
		faction = "fow_usa_p";
		crew = "fow_s_us_mm_rifleman";
	};
	class fow_w_m1919a6_deployed_high_usmc: fow_w_m1919a6_deployed_high {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_rifleman";
	};
	class fow_w_m1919a6_deployed_high_usmc_camo01: fow_w_m1919a6_deployed_high {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_camo01_rifleman";
	};
	class fow_w_m1919a6_deployed_high_usmc_camo02: fow_w_m1919a6_deployed_high {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_camo02_rifleman";
	};
	//
	class fow_w_m1919a6_deployed_middle_usa_m41: fow_w_m1919a6_deployed_middle {
		scope = 2;
		//faction = "fow_usa";
		//crew = "fow_s_us_rifleman";
	};
	class fow_w_m1919a6_deployed_middle_usa_m37: fow_w_m1919a6_deployed_middle {
		scope = 2;
		//faction = "fow_usa";
		crew = "fow_s_us_m37_rifleman";
	};
	class fow_w_m1919a6_deployed_middle_usa_p: fow_w_m1919a6_deployed_middle {
		scope = 2;
		faction = "fow_usa_p";
		crew = "fow_s_us_p_rifleman";
	};
	class fow_w_m1919a6_deployed_middle_usa_mm: fow_w_m1919a6_deployed_middle {
		scope = 2;
		faction = "fow_usa_p";
		crew = "fow_s_us_mm_rifleman";
	};
	class fow_w_m1919a6_deployed_middle_usmc: fow_w_m1919a6_deployed_middle {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_rifleman";
	};
	class fow_w_m1919a6_deployed_middle_usmc_camo01: fow_w_m1919a6_deployed_middle {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_camo01_rifleman";
	};
	class fow_w_m1919a6_deployed_middle_usmc_camo02: fow_w_m1919a6_deployed_middle {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_camo02_rifleman";
	};
	