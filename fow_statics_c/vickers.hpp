	class fow_w_vickers: StaticMGWeapon
	{
		scope = 1;
		side = 2;
		faction = "fow_uk";
		editorSubcategory = "fow_statics";
		crew = "fow_s_uk_rifleman";

		displayName = "Vickers MG";

		model = "\fow\fow_statics\vickers\fow_vickers.p3d";
		armor = 50;
		//getInAction = "GetInLow";
		//getOutAction = "GetOutLow";

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
				bounding = "usti hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				body = "mainTurret";
				animationSourceGun = "mainGun";
				gun = "mainGun";
				weapons[] = {"fow_w_vickers_mounted"};
				magazines[] = {"fow_250Rnd_vickers","fow_250Rnd_vickers"};
				gunnerAction = "fow_vickers_gunner";//
				ejectDeadGunner = 1;
				gunnerForceOptics = 0;
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
				gunnerRightHandAnimName = "gun";
				gunnerLeftHandAnimName = "gun";
			};
		};


		class AnimationSources
		{
			class reloadanim
			{
	   			source = "reload";
				weapon = "fow_w_vickers_mounted";
			};
			class reloadmagazine
			{
				source = "reloadmagazine";
				weapon = "fow_w_vickers_mounted";
			};
			class revolving
			{
				source = "revolving";
				weapon = "fow_w_vickers_mounted";
			};
			/*class user
			{
				source = "user";
				weapon = "fow_w_vickers_mounted";
				animPeriod = 1;
				initPhase=1;
			};*/
		};

		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"fow\fow_statics\vickers\data\vickers_fut.rvmat",
				"fow\fow_statics\vickers\data\vickers_fut_damage.rvmat",
				"fow\fow_statics\vickers\data\vickers_destruct.rvmat",

				"fow\fow_statics\vickers\data\vickers_trepied.rvmat",
				"fow\fow_statics\vickers\data\vickers_trepied_damage.rvmat",
				"fow\fow_statics\vickers\data\vickers_destruct.rvmat"
			};
		};
		
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"fow_b_uk_vickers_support","fow_b_uk_vickers_weapon"};
			displayName = "";
		};
		class Library
		{
			libTextDesc = "Vickers";
		};
		soundGetOut[] = {"A3\sounds_f\dummysound",0.0009999999,1,5};
		soundGetIn[] = {"A3\sounds_f\dummysound",0.00031622773,1,5};
		
		class UserActions
		{
			class fow_reload_MG
			{
				displayName = "Reload Vickers";
				position = "";
				radius = 2;
				onlyForplayer = 1;
				condition = "[this] call fow_statics_fnc_canReload";
				statement = "[this] spawn fow_statics_fnc_reload;";
			};
		};
        class ACE_Actions {//: ACE_Actions
            class loadActions {
                displayName = "Reload Vickers";
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
	class fow_w_vickers_uk: fow_w_vickers {scope = 2;};
	
	//Backward comp
	class fow_w_uk_vickers: fow_w_vickers {};
	////////
	
	class fow_b_uk_vickers_support: Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[UK] Vickers (Bag)";
		model = "\fow\fow_statics\vickers\fow_vickers_support";
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
	class fow_b_uk_vickers_weapon: Weapon_Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[UK] Vickers (Weapon Bag)";
		model = "\fow\fow_statics\vickers\fow_vickers_weapon_bag";
		//picture = "\.paa";
		class assembleInfo: assembleInfo
		{
			primary = 1;
			displayName = "Vickers";
			assembleTo = "fow_w_uk_vickers";
			base[] = {"fow_b_uk_vickers_support"};
		};
		mass = 250;
	};		