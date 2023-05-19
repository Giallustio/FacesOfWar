	class fow_w_mg42_deployed: StaticMGWeapon {
		scope = 1;
		side = 1;
		faction = "fow_heer";
		editorSubcategory = "fow_statics";
		crew = "fow_s_ger_heer_rifleman";
		
		armor = 40;
		
		displayName = "MG 42 Deployed (low)";

		model = "\fow\fow_statics\mg42\lodu_mg42_deployed.p3d";

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
				weapons[] = {"fow_w_mg42_mounted_static"};
				magazines[] = {"fow_50Rnd_792x57","fow_50Rnd_792x57","fow_50Rnd_792x57","fow_50Rnd_792x57","fow_50Rnd_792x57","fow_50Rnd_792x57","fow_50Rnd_792x57","fow_50Rnd_792x57"};
				gunnerAction = "fow_mg42_gunner_low";//
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
				weapon = "fow_w_mg42_mounted_static";
			};
			class reloadmagazine
			{
				source = "reloadmagazine";
				weapon = "fow_w_mg42_mounted_static";
			};
			class revolving
			{
				source = "revolving";
				weapon = "fow_w_mg42_mounted_static";
			};
			//class gun_recoil {source = "reload";weapon = "fow_w_mg42_mounted_static";};
			/*class user
			{
				source = "user";
				weapon = "fow_w_mg42_mounted_static";
				animPeriod = 1;
				initPhase=1;
			};*/
		};

		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"fow\fow_weapons\mg42\data\mg_42_01_wood.rvmat",
				"fow\fow_statics\mg42\data\lodu_mg_42_01_damage.rvmat",
				"fow\fow_statics\mg42\data\lodu_mg_42_01_destruct.rvmat",

				"fow\fow_weapons\mg42\data\lodu_mg_42_02.rvmat",
				"fow\fow_statics\mg42\data\lodu_mg_42_02_damage.rvmat",
				"fow\fow_statics\mg42\data\lodu_mg_42_02_destruct.rvmat"
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
		class Library
		{
			libTextDesc = "MG42";
		};
		soundGetOut[] = {"A3\sounds_f\dummysound",0.0009999999,1,5};
		soundGetIn[] = {"A3\sounds_f\dummysound",0.00031622773,1,5};
		
		class EventHandlers
		{
			getOut = "params ['_vehicle', '_role', '_unit', '_turret'];_dir = getDir _unit;_unit setDir (_dir + 180);_unit setPos (_vehicle modelToWorld [0, -2.2, 0]);";
		};	
		class UserActions
		{
			class fow_reload_MG
			{
				displayName = "Reload MG42";
				position = "";
				radius = 2;
				onlyForplayer = 1;
				condition = "[this] call fow_statics_fnc_canReload";
				statement = "[this] spawn fow_statics_fnc_reload;";
			};
		};
        class ACE_Actions {//: ACE_Actions
            class loadActions {
                displayName = "Reload MG42";
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
	class fow_w_mg42_deployed_ger_heer: fow_w_mg42_deployed	{
		scope = 2;
	};		
	class fow_w_mg42_deployed_s_ger_heer: fow_w_mg42_deployed {
		scope = 2;
		displayName = "MG 42 Deployed (low-sandbags)";
		
		//simulation = "tank";

		model = "\fow\fow_statics\mg42\lodu_mg42_deployed_s.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[] = {"fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57","fow_250Rnd_792x57"};
			};
		};
	};	
	class fow_w_mg42_deployed_high_ger_heer: fow_w_mg42_deployed {
		scope = 2;
		displayName = "MG 42 Deployed (high)";
		//simulation = "tank";
		model = "\fow\fow_statics\mg42\lodu_mg42_deployed_high.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{				
				gunnergetInAction = ""; //"GetInLow";
				gunnergetOutAction = "";//"GetOutLow";
				gunnerAction = "fow_mg42_gunner_high";//
			};
		};
		class EventHandlers : EventHandlers
		{
			getOut = "params ['_vehicle', '_role', '_unit', '_turret'];_dir = getDir _unit;_unit setDir (_dir + 180);";
		};	
	};
	class fow_w_mg42_deployed_middle_ger_heer: fow_w_mg42_deployed {
		scope = 2;
		displayName = "MG 42 Deployed (middle)";
		//simulation = "tank";
		model = "\fow\fow_statics\mg42\lodu_mg42_deployed_middle.p3d";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnergetInAction = "Crouch"; //"GetInLow";
				gunnergetOutAction = "Crouch";//"GetOutLow";
				gunnerAction = "fow_mg42_gunner_middle";//
			};
		};

		class EventHandlers : EventHandlers
		{
			getOut = "params ['_vehicle', '_role', '_unit', '_turret'];_dir = getDir _unit;_unit setDir (_dir + 180);";
		};	
	};
	