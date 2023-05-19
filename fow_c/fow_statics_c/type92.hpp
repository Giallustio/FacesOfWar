	class fow_w_type92_tripod: StaticMGWeapon
	{
		scope = 1;
		side = 1;
		faction = "fow_ija";
		editorSubcategory = "fow_statics";
		crew = "fow_s_ija_rifleman";

		displayName = "Type 92";
		
		simulation = "tankX";

		model = "\fow\fow_statics\type92\type92_high.p3d";
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

				selectionFireAnim="zasleh";
				displayName = "";
				memoryPointGun = "usti hlavne";
				memoryPointsGetInGunner = "pos_gunner";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";
				//gunnergetInAction = "Lying"; //"GetInLow";
				//gunnergetOutAction = "Lying";//"GetOutLow";
				//memoryPoi﻿ntGunnerOutOp﻿ti﻿cs = "gunnerview_out";
				bounding = "usti hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				body = "mainTurret";
				animationSourceGun = "mainGun";
				gun = "mainGun";
				weapons[] = {"fow_w_type92"};
				magazines[] = {"fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92"};
				gunnerAction = "fow_type92_gunner_stand";
				gunnerForceOptics = 0;
				ejectDeadGunner = 1;
				minTurn = -60;
				maxTurn = 60;
				initTurn = 0;
				minElev = -50;
				maxElev = 60;
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
				gunnerRightHandAnimName = "gun_shake";
				gunnerLeftHandAnimName = "gun_shake";
			};
		};


		class AnimationSources
		{
			class reloadanim
			{
	   			source = "reload";
				weapon = "fow_w_type92";
			};
			class reloadmagazine
			{
				source = "reloadmagazine";
				weapon = "fow_w_type92";
			};
			class revolving
			{
				source = "revolving";
				weapon = "fow_w_type92";
			};
			/*class user
			{
				source = "user";
				weapon = "fow_w_type92";
				animPeriod = 1;
				initPhase=1;
			};*/
		};

		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"fow\fow_statics\type92\data\type92_1.rvmat",
				"fow\fow_statics\type92\data\type92_1_damage.rvmat",
				"fow\fow_statics\type92\data\type92_1_destruct.rvmat",
				
				"fow\fow_statics\type92\data\type92_2.rvmat",
				"fow\fow_statics\type92\data\type92_2_damage.rvmat",
				"fow\fow_statics\type92\data\type92_2_destruct.rvmat",
				
				"fow\fow_statics\type92\data\type92_3.rvmat",
				"fow\fow_statics\type92\data\type92_3_damage.rvmat",
				"fow\fow_statics\type92\data\type92_3_destruct.rvmat"
			};
		};
		
		/*class EventHandlers
		{
			getOut = "params ['_vehicle', '_role', '_unit', '_turret'];_dir = getDir _unit;_unit setDir (_dir + 180);_unit setPos (_vehicle modelToWorld [0, -1.5, 0]);_true";
		};		*/
/*
		class UserActions
		{
			class DIH_HW_Reload
			{
				displayName="Reload MG";
				position="camera";
				radius=1.7500000;
				onlyForplayer=1;
				showWindow=0;
				hideOnUse=1;
				condition="(true)";
				statement="hint 'hi';";
			};
		};
*/
		soundGetOut[] = {"A3\sounds_f\dummysound",0.0009999999,1,5};
		soundGetIn[] = {"A3\sounds_f\dummysound",0.00031622773,1,5};
		
		class UserActions
		{
			class fow_reload_MG
			{
				displayName = "Reload Type92";
				position = "";
				radius = 2;
				onlyForplayer = 1;
				condition = "[this] call fow_statics_fnc_canReload";
				statement = "[this] spawn fow_statics_fnc_reload;";
			};
		};
        class ACE_Actions {//: ACE_Actions
            class loadActions {
                displayName = "Reload Type92";
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
	};
	
	class fow_w_type92_tripod_ija: fow_w_type92_tripod {
		scope = 2;
		class EventHandlers
		{
			getOut = "params ['_vehicle', '_role', '_unit', '_turret'];_dir = getDir _unit;_unit setDir (_dir + 180);";
		};
	};
	class fow_w_type92_tripod_low_ija: fow_w_type92_tripod_ija
	{
		displayName = "Type 92 (Low)";

		model = "\fow\fow_statics\type92\type92.p3d";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "fow_type92_gunner_prone";				
				gunnergetInAction = "Lying"; //"GetInLow";
				gunnergetOutAction = "Lying";//"GetOutLow";
				//memoryPointsGetInGunner = "pos_gunner_dir";
				//memoryPointsGetInGunnerDir = "pos_gunner";
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"fow_b_ija_type92_support","fow_b_ija_type92_weapon"};
			displayName = "";
		};
	};
	class fow_w_type92_tripod_low_s_ija: fow_w_type92_tripod_low_ija
	{
		displayName = "Type 92 (Low with sandbags)";

		model = "\fow\fow_statics\type92\type92_s.p3d";

	};

	class fow_w_type92_tripod_middle_ija: fow_w_type92_tripod_ija
	{
		displayName = "Type 92 (Middle)";
		
		model = "\fow\fow_statics\type92\type92_t_middle.p3d";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "fow_type92_gunner_middle";			
				gunnergetInAction = "Crouch"; //"GetInLow";
				gunnergetOutAction = "Crouch";//"GetOutLow";
			};
		};
		class EventHandlers
		{
			getOut = "params ['_vehicle', '_role', '_unit', '_turret'];_dir = getDir _unit;_unit setDir (_dir + 180);";
		};
	};

	class fow_w_type92_tripod_high_ija: fow_w_type92_tripod_ija
	{
		displayName = "Type 92 (High)";

		model = "\fow\fow_statics\type92\type92_t_high.p3d";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "fow_type92_gunner_stand";
			};
		};
		class EventHandlers
		{
			getOut = "params ['_vehicle', '_role', '_unit', '_turret'];_dir = getDir _unit;_unit setDir (_dir + 180);";
		};
	};
/*	
	class fow_w_type92_tripod_high_fixed_ija: fow_w_type92_tripod_ija
	{
		displayName = "Type 92 (High-fixed)";
		
		simulation = "tank";

		model = "\fow\fow_statics\type92\type92_high.p3d";

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerAction = "gunner_standup01";
			};
		};
	};
*/	
	class fow_b_ija_type92_support: Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[IJA] Type92 (Bag)";
		model = "\fow\fow_statics\type92\type92_support";
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
	class fow_b_ija_type92_weapon: Weapon_Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[IJA] Type92 (Weapon Bag)";
		model = "\fow\fow_statics\type92\type92_weapon_bag";
		//picture = "\.paa";
		class assembleInfo: assembleInfo
		{
			primary = 1;
			displayName = "Type92";
			assembleTo = "fow_w_type92_tripod_ija";
			base[] = {"fow_b_ija_type92_support"};
		};
		mass = 250;
	};			
	
	//Backward comp
	
	class fow_w_ija_type92_tripod : fow_w_type92_tripod_ija {scope = 1;};
	class fow_w_ija_type92_tripod_low : fow_w_type92_tripod_low_ija {scope = 1;};
	class fow_w_ija_type92_tripod_low_s : fow_w_type92_tripod_low_s_ija {scope = 1;};