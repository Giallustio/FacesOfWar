	class fow_w_type93_AA: StaticMGWeapon
	{
		scope = 1;
		side = 1;
		faction = "fow_ija";
		//editorCategory = "fow_structures_p";
		editorSubcategory = "fow_statics";
		crew = "fow_s_ija_rifleman";

		displayName = "Type 93 AA";

		model = "\fow\fow_statics\type93\type93_AA.p3d";
		threat[] = {1,0.3,0.3};
		cost = 150000;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";

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
				memoryPointGun = "kulas";
				bounding = "usti hlavne";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				animationSourceBody = "mainTurret";
				body = "mainTurret";
				animationSourceGun = "mainGun";
				gun = "mainGun";
				weapons[] = {"fow_w_type92"};
				magazines[] = {"fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92","fow_30Rnd_77x58_Type92"};
				gunnerAction = "gunner_standup01";
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
			class user
			{
				source = "user";
				weapon = "fow_w_type92";
				animPeriod = 1;
				initPhase=1;
			};
		};

		class Damage
		{
			tex[] = {};
			mat[] =
			{
				"fow\fow_statics\type92\data\WX_IJA_Type092_HMG.rvmat",
				"fow\fow_statics\type92\data\WX_IJA_Type092_HMG.rvmat",
				"fow\fow_statics\type92\data\WX_IJA_Type092_HMG_destruct.rvmat"
			};
		};
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
				statement="[this] execVM '\WX_Ija_CFG\WX_Ija_Type092_HMG_cfg\scripts\DIH_hw_reload.sqf';";
			};
		};
*/
		soundGetOut[] = {"A3\sounds_f\dummysound",0.0009999999,1,5};
		soundGetIn[] = {"A3\sounds_f\dummysound",0.00031622773,1,5};
	};

	class fow_w_type93_AA_ija : fow_w_type93_AA {scope = 2;};