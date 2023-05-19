

class CfgPatches {
	class fow_mortars_c {
		units[] = {};
		weapons[] = {"fow_i_rangeTables_type97","fow_i_rangeTables_m2"};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_mortars"};
	};
};

class CfgVehicles 
{
	//ACE Support
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class fow_mortars_c_openRangeTable_type97 {
                    displayName = "Open range table (type 97)";
                    condition = "(['fow_i_rangeTables_type97'] call fow_mortars_fnc_canOpenRangeTable)";
                    statement = "['fow_w_type97_mortar'] call fow_mortars_fnc_openRangeTable";
                    priority = 0;
                    icon = "\fow\fow_mortars_c\ui\rangeTables_ca.paa";
                    exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
                };
                class fow_mortars_c_openRangeTable_m2 {
                    displayName = "Open range table (M2)";
                    condition = "(['fow_i_rangeTables_m2'] call fow_mortars_fnc_canOpenRangeTable)";
                    statement = "['fow_w_m2_mortar'] call fow_mortars_fnc_openRangeTable";
                    priority = 0;
                    icon = "\fow\fow_mortars_c\ui\rangeTables_ca.paa";
                    exceptions[] = {"notOnMap", "isNotInside", "isNotSitting"};
                };
            };
        };
    };


	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
	};
	class StaticMortar: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {
				class ViewOptics;
			};
		};
	};
	
	class fow_w_mortar_base: StaticMortar
	{
		author = "FOW team";

		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;

		displayName = "Mortar";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		transportSoldier = 1;
		accuracy = 0.5;
		getInAction = "";
		getOutAction = "";
		cargoAction[] = {"Mortar_Gunner"};
		mapSize = 3;
		type = 0;
		simulation = "tank";

		driverCanSee = "2+8+16+32";
		gunnerCanSee = "2+4+8+16+32";
		commanderCanSee = "2+4+8+16+32";
		irScanGround = 2;
		allowTabLock = 0;
		canUseScanners = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				memoryPointsGetInGunner = "pos_gunner";//"pos_gunner_dir";
				memoryPointsGetInGunnerDir = "pos_gunner_dir";//"pos_gunner";
				gunnerAction = "Mortar_Gunner";
				ejectDeadGunner = 1;
				gunnerGetInAction = "";
				gunnerGetOutAction = "";
				gunnerCanSee = "2+4+8+16+32";
				weapons[] = {};
				magazines[] = {};
				minElev = -10;
				maxElev = 30;
				maxTurn = 180;
				minTurn = -180;
				elevationMode = 3;//Pag-up/down only
				
				soundServo[] = {"fow\fow_sounds\vehicles\mortar\mortar_turn.wav",1.3,1,15};
				soundServoVertical[] = {"fow\fow_sounds\vehicles\mortar\mortar_turn.wav",1.3,1,15};

				allowTabLock = 0;
				canUseScanners = 0;
				
				turretInfoType = "fow_mortar_RscWeaponRangeArtillery";
				cameraDir = "look";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "gunneroutview";
				gunnerOpticsModel = "\a3\weapons_f\Reticle\optics_empty.p3d";
				gunnerForceOptics = 0;
				class ViewGunner
				{
					initAngleX = 0;
					minAngleX = -85;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initFov = 0.7;
					minFov = 0.4;
					maxFov = 0.85;
				};
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					initFov = 0.174;
					minFov = 0.0077778;
					maxFov = 0.14;
					visionMode[] = {"Normal"};
				};
			};
		};
		artilleryScanner = 1;
		availableForSupportTypes[] = {"Artillery"};
		ARTY_IsArtyVehicle = 0;
		class Damage
		{
			mat[] = {};
			tex[] = {};
		};
		class Library {};
	};	
	
	
	class fow_w_type97_mortar_ija: fow_w_mortar_base
	{
		author = "FOW team";
		dlc = "fow_mod";
		scope = 2;
		side = 1;
		faction = "fow_ija";
		displayname = "Type 97 mortar";
		editorSubcategory = "fow_mortars";
		crew = "fow_s_ija_rifleman";
		model = "\fow\fow_mortars\type97_mortar";
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {".paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -4.2;
				maxElev = 36;				
				weapons[] = {"fow_w_type97_mortar"};
				magazines[] = {"fow_8Rnd_81mm_type97_HE","fow_8Rnd_81mm_type97_HE","fow_8Rnd_81mm_type97_HE"};
				gunnerOpticsModel = "\fow\fow_mortars\optics\mortar_scope.p3d";
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"fow_b_ija_type97_mortar_support","fow_b_ija_type97_mortar_weapon"};
			displayName = "";
		};
		class Library
		{
			libTextDesc = "Type 97 mortar";
		};
	};
	class fow_w_type97_mortar_adv_ija: fow_w_type97_mortar_ija
	{
		author = "FOW team";
		dlc = "fow_mod";
		displayname = "Type 97 mortar (ADV)";
		artilleryScanner = 0;
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {".paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"fow_w_type97_mortar"};
				magazines[] = {};
				gunnerOpticsModel = "\fow\fow_mortars\optics\mortar_scope.p3d";
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"fow_b_ija_type97_mortar_support","fow_b_ija_type97_mortar_adv_weapon"};
			displayName = "";
		};
		class UserActions
		{
			class fow_reload_HE
			{
				displayName = "Reload HE";
				position = "";
				radius = 1.5;
				onlyForplayer = 1;
				condition = "[this,""fow_1Rnd_81mm_type97_HE""] call fow_mortars_fnc_canReload";
				statement = "[this,""fow_1Rnd_81mm_type97_HE""] spawn fow_mortars_fnc_reload;";
			};
			class fow_reload_ILL
			{
				displayName = "Reload ILL";
				position = "";
				radius = 1.5;
				onlyForplayer = 1;
				condition = "[this,""fow_1Rnd_81mm_type97_ILL""] call fow_mortars_fnc_canReload";
				statement = "[this,""fow_1Rnd_81mm_type97_ILL""] spawn fow_mortars_fnc_reload;";
			};
			class fow_reload_SMOKE
			{
				displayName = "Reload SMOKE";
				position = "";
				radius = 1.5;
				onlyForplayer = 1;
				condition = "[this,""fow_1Rnd_81mm_type97_SMOKE""] call fow_mortars_fnc_canReload";
				statement = "[this,""fow_1Rnd_81mm_type97_SMOKE""] spawn fow_mortars_fnc_reload;";
			};
		};
		//ACE Support
        class ACE_Actions {//: ACE_Actions
            class loadActions {
                displayName = "Load mortar";
                distance = 2;
                condition = "[this,""fow_1Rnd_81mm_type97_HE""] call fow_mortars_fnc_canReload || [this,""fow_1Rnd_81mm_type97_ILL""] call fow_mortars_fnc_canReload || [this,""fow_1Rnd_81mm_type97_SMOKE""] call fow_mortars_fnc_canReload";//QUOTE([ARR_2(_target,_player)] call FUNC(canLoadMagazine));
                statement = "";
                icon = "";
                selection = "usti hlavne";
                class load_HE {
                    displayName = "HE round";
                    condition = "[this,""fow_1Rnd_81mm_type97_HE""] call fow_mortars_fnc_canReload";
                    statement = "[this,""fow_1Rnd_81mm_type97_HE""] spawn fow_mortars_fnc_reload;";
                    icon = "";
                };
                class load_ILL {
                    displayName = "ILL round";
                    condition = "[this,""fow_1Rnd_81mm_type97_ILL""] call fow_mortars_fnc_canReload";
                    statement = "[this,""fow_1Rnd_81mm_type97_ILL""] spawn fow_mortars_fnc_reload;";
                    icon = "";
                };
                class load_SMOKE {
                    displayName = "SMOKE round";
                    condition = "[this,""fow_1Rnd_81mm_type97_SMOKE""] call fow_mortars_fnc_canReload";
                    statement = "[this,""fow_1Rnd_81mm_type97_SMOKE""] spawn fow_mortars_fnc_reload;";
                    icon = "";
                };
            };
        };	
        class ACE_SelfActions {//: ACE_SelfActions
            class loadActions {
                displayName = "Load mortar";
                distance = 2;
                condition = "[this,""fow_1Rnd_81mm_type97_HE""] call fow_mortars_fnc_canReload || [this,""fow_1Rnd_81mm_type97_ILL""] call fow_mortars_fnc_canReload || [this,""fow_1Rnd_81mm_type97_SMOKE""] call fow_mortars_fnc_canReload";//QUOTE([ARR_2(_target,_player)] call FUNC(canLoadMagazine));
                statement = "";
                icon = "";
                selection = "usti hlavne";
                class load_HE {
                    displayName = "HE round";
                    condition = "[this,""fow_1Rnd_81mm_type97_HE""] call fow_mortars_fnc_canReload";
                    statement = "[this,""fow_1Rnd_81mm_type97_HE""] spawn fow_mortars_fnc_reload;";
                    icon = "";
                };
                class load_ILL {
                    displayName = "ILL round";
                    condition = "[this,""fow_1Rnd_81mm_type97_ILL""] call fow_mortars_fnc_canReload";
                    statement = "[this,""fow_1Rnd_81mm_type97_ILL""] spawn fow_mortars_fnc_reload;";
                    icon = "";
                };
                class load_SMOKE {
                    displayName = "SMOKE round";
                    condition = "[this,""fow_1Rnd_81mm_type97_SMOKE""] call fow_mortars_fnc_canReload";
                    statement = "[this,""fow_1Rnd_81mm_type97_SMOKE""] spawn fow_mortars_fnc_reload;";
                    icon = "";
                };
            };
        };		
	};
	class fow_w_m2_mortar_usmc: fow_w_mortar_base
	{
		author = "FOW team";
		dlc = "fow_mod";
		scope = 2;
		side = 2;
		faction = "fow_usmc";
		displayname = "M2 mortar";
		editorSubcategory = "fow_mortars";
		crew = "fow_s_usmc_rifleman";
		model = "\fow\fow_mortars\m2_mortar";
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {".paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				minElev = -23.76;
				maxElev = 21.24;				
				weapons[] = {"fow_w_m2_mortar"};
				magazines[] = {"fow_8Rnd_60mm_m2_HE","fow_8Rnd_60mm_m2_HE","fow_8Rnd_60mm_m2_HE"};
				gunnerOpticsModel = "\fow\fow_mortars\optics\mortar_scope.p3d";
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"fow_b_us_m2_mortar_support","fow_b_us_m2_mortar_weapon"};
			displayName = "";
		};
		class Library
		{
			libTextDesc = "M2 mortar";
		};
	};
	class fow_w_m2_mortar_usa: fow_w_m2_mortar_usmc {
		faction = "fow_usa";
		crew = "fow_s_us_rifleman";
	};
	class fow_w_m2_mortar_adv_usmc: fow_w_m2_mortar_usmc
	{
		author = "FOW team";
		dlc = "fow_mod";
		displayname = "M2 mortar (ADV)";
		artilleryScanner = 0;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = {"fow_w_m2_mortar"};
				magazines[] = {};
			};
		};
		class assembleInfo
		{
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"fow_b_us_m2_mortar_support","fow_b_us_m2_mortar_adv_weapon"};
			displayName = "";
		};
		class UserActions
		{
			class fow_reload_HE
			{
				displayName = "Reload HE";
				position = "";
				radius = 1.5;
				onlyForplayer = 1;
				condition = "[this,""fow_1Rnd_60mm_m2_HE""] call fow_mortars_fnc_canReload";
				statement = "[this,""fow_1Rnd_60mm_m2_HE""] spawn fow_mortars_fnc_reload;";
			};
			class fow_reload_ILL
			{
				displayName = "Reload ILL";
				position = "";
				radius = 1.5;
				onlyForplayer = 1;
				condition = "[this,""fow_1Rnd_60mm_m2_ILL""] call fow_mortars_fnc_canReload";
				statement = "[this,""fow_1Rnd_60mm_m2_ILL""] spawn fow_mortars_fnc_reload;";
			};
			class fow_reload_SMOKE
			{
				displayName = "Reload SMOKE";
				position = "";
				radius = 1.5;
				onlyForplayer = 1;
				condition = "[this,""fow_1Rnd_60mm_m2_SMOKE""] call fow_mortars_fnc_canReload";
				statement = "[this,""fow_1Rnd_60mm_m2_SMOKE""] spawn fow_mortars_fnc_reload;";
			};
		};
        class ACE_Actions {//: ACE_Actions
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
        };	
        class ACE_SelfActions {//: ACE_SelfActions
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
        };	
	};
	class fow_w_m2_mortar_adv_usa: fow_w_m2_mortar_adv_usmc {
		faction = "fow_usa";
		crew = "fow_s_us_rifleman";
	};

	//Backward comp
	class fow_w_ija_type97_mortar: fow_w_type97_mortar_ija {scope = 1;};
	class fow_w_ija_type97_mortar_adv: fow_w_type97_mortar_adv_ija {scope = 1;};
	class fow_w_usmc_m2_mortar: fow_w_m2_mortar_usmc {scope = 1;};
	class fow_w_us_m2_mortar: fow_w_m2_mortar_usa {scope = 1;};
	class fow_w_usmc_m2_mortar_adv: fow_w_m2_mortar_adv_usmc {scope = 1;};
	class fow_w_us_m2_mortar_adv: fow_w_m2_mortar_adv_usa {scope = 1;};
	///////////////////////
	
	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base
	{
		class assembleInfo{};
	};
	
	class fow_b_us_m2_mortar_support: Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[US] M2 mortar (Bag)";
		model = "\fow\fow_mortars\m2_mortar_support";
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
	class fow_b_us_m2_mortar_weapon: Weapon_Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[US] M2 mortar (Weapon Bag)";
		model = "\fow\fow_mortars\m2_mortar_weapon_bag";
		//picture = "\.paa";
		class assembleInfo: assembleInfo
		{
			primary = 1;
			displayName = "[US] M2 mortar";
			assembleTo = "fow_w_us_m2_mortar";
			base[] = {"fow_b_us_m2_mortar_support"};
		};
		mass = 250;
	};		
	class fow_b_us_m2_mortar_adv_weapon: Weapon_Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[US] M2 mortar ADV (Weapon Bag)";
		model = "\fow\fow_mortars\m2_mortar_weapon_bag";
		//picture = "\.paa";
		class assembleInfo: assembleInfo
		{
			primary = 1;
			displayName = "[US] M2 mortar";
			assembleTo = "fow_w_us_m2_mortar_adv";
			base[] = {"fow_b_us_m2_mortar_support"};
		};
		mass = 250;
	};	
	class fow_b_ija_type97_mortar_support: Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[IJA] Type 97 mortar (Bag)";
		model = "\fow\fow_mortars\type97_mortar_support";
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
	class fow_b_ija_type97_mortar_weapon: Weapon_Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[IJA] Type 97 mortar (Weapon Bag)";
		model = "\fow\fow_mortars\type97_mortar_weapon_bag";
		//picture = "\.paa";
		class assembleInfo: assembleInfo
		{
			primary = 1;
			displayName = "[IJA] Type 97 mortar";
			assembleTo = "fow_w_ija_type97_mortar";
			base[] = {"fow_b_ija_type97_mortar_support"};
		};
		mass = 250;
	};		
	class fow_b_ija_type97_mortar_adv_weapon: Weapon_Bag_Base
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[IJA] Type 97 mortar ADV (Weapon Bag)";
		model = "\fow\fow_mortars\type97_mortar_weapon_bag";
		//picture = "\.paa";
		class assembleInfo: assembleInfo
		{
			primary = 1;
			displayName = "[IJA] Type 97 mortar";
			assembleTo = "fow_w_ija_type97_mortar_adv";
			base[] = {"fow_b_ija_type97_mortar_support"};
		};
		mass = 250;
	};	
	
	//Ammobox
	class IND_Box_Base;
	class fow_ab_mortars: IND_Box_Base {
		editorCategory = "fow_munitions_container";
		editorSubcategory = "fow_ammo_mortars";
		maximumLoad = 300;
	};
	class fow_ab_ija_81mm_type97_HE: fow_ab_mortars
	{
		author = "FOW Team";
		mapSize = 1.81;
		editorPreview = "";
		editorCategory = "fow_munitions_container";
		editorSubcategory = "FOW_Munitions_Container_IJA";
		scope = 2;
		displayName = "Ammo crate 81mm type97 (HE)";
		model = "\fow\fow_munitions\generic\ammoboxwood01";
		icon = "iconCrateWpns";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class TransportMagazines
		{
			class _xx_fow_1Rnd_81mm_type97_HE
			{
				magazine = "fow_1Rnd_81mm_type97_HE";
				count = 8;
			};
		};
		class TransportWeapons {};
		class TransportItems {
			class _xx_fow_i_rangeTables_type97
			{
				name = "fow_i_rangeTables_type97";
				count = 5;
			};			
		};
	};
	class fow_ija_ammo_81mm_type97_HE : fow_ab_ija_81mm_type97_HE {scope = 1;};
	class fow_ab_ija_81mm_type97_SMOKE: fow_ab_mortars
	{
		author = "FOW Team";
		editorSubcategory = "FOW_Munitions_Container_IJA";
		mapSize = 1.81;
		editorPreview = "";
		scope = 2;
		displayName = "Ammo crate 81mm type97 (SMOKE)";
		model = "\fow\fow_munitions\generic\ammoboxwood01";
		icon = "iconCrateWpns";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class TransportMagazines
		{
			class _xx_fow_1Rnd_81mm_type97_HE
			{
				magazine = "fow_1Rnd_81mm_type97_SMOKE";
				count = 8;
			};
		};
		class TransportWeapons {};
		class TransportItems {
			class _xx_fow_i_rangeTables_type97
			{
				name = "fow_i_rangeTables_type97";
				count = 5;
			};			
		};
	};
	class fow_ija_ammo_81mm_type97_SMOKE : fow_ab_ija_81mm_type97_SMOKE {scope = 1;};
	class fow_ab_ija_81mm_type97_ILL: fow_ab_mortars
	{
		author = "FOW Team";
		editorSubcategory = "FOW_Munitions_Container_IJA";
		mapSize = 1.81;
		editorPreview = "";
		scope = 2;
		displayName = "Ammo crate 81mm type97 (ILL)";
		model = "\fow\fow_munitions\generic\ammoboxwood01";
		icon = "iconCrateWpns";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class TransportMagazines
		{
			class _xx_fow_1Rnd_81mm_type97_ILL
			{
				magazine = "fow_1Rnd_81mm_type97_ILL";
				count = 8;
			};
		};
		class TransportWeapons {};
		class TransportItems {
			class _xx_fow_i_rangeTables_type97
			{
				name = "fow_i_rangeTables_type97";
				count = 5;
			};			
		};
	};	
	class fow_ija_ammo_81mm_type97_ILL : fow_ab_ija_81mm_type97_ILL {scope = 1;};
	class fow_ab_us_60mm_m2_HE: fow_ab_mortars
	{
		author = "FOW Team";
		editorSubcategory = "FOW_Munitions_Container_US";
		mapSize = 1.81;
		editorPreview = "";
		scope = 2;
		displayName = "Ammo crate 60mm M2 (HE)";
		model = "\fow\fow_munitions\generic\ammoboxwood01";
		icon = "iconCrateWpns";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class TransportMagazines
		{
			class _xx_fow_1Rnd_81mm_type97_HE
			{
				magazine = "fow_1Rnd_60mm_m2_HE";
				count = 8;
			};
		};
		class TransportWeapons {};
		class TransportItems {
			class _xx_fow_i_rangeTables_m2
			{
				name = "fow_i_rangeTables_m2";
				count = 5;
			};			
		};
	};
	class fow_us_ammo_60mm_m2_HE : fow_ab_us_60mm_m2_HE {scope = 1;};
	class fow_ab_us_60mm_m2_SMOKE: fow_ab_mortars
	{
		author = "FOW Team";
		editorSubcategory = "FOW_Munitions_Container_US";
		mapSize = 1.81;
		editorPreview = "";
		scope = 2;
		displayName = "Ammo crate 60mm M2 (SMOKE)";
		model = "\fow\fow_munitions\generic\ammoboxwood01";
		icon = "iconCrateWpns";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class TransportMagazines
		{
			class _xx_fow_1Rnd_60mm_m2_SMOKE
			{
				magazine = "fow_1Rnd_60mm_m2_SMOKE";
				count = 8;
			};
		};
		class TransportWeapons {};
		class TransportItems {
			class _xx_fow_i_rangeTables_m2
			{
				name = "fow_i_rangeTables_m2";
				count = 5;
			};			
		};
	};
	class fow_us_ammo_60mm_m2_SMOKE : fow_ab_us_60mm_m2_SMOKE {scope = 1;};
	class fow_ab_us_60mm_m2_ILL: fow_ab_mortars
	{
		author = "FOW Team";
		editorSubcategory = "FOW_Munitions_Container_US";
		mapSize = 1.81;
		editorPreview = "";
		scope = 2;
		displayName = "Ammo crate 60mm M2 (ILL)";
		model = "\fow\fow_munitions\generic\ammoboxwood01";
		icon = "iconCrateWpns";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class TransportMagazines
		{
			class _xx_fow_1Rnd_60mm_m2_ILL
			{
				magazine = "fow_1Rnd_60mm_m2_ILL";
				count = 8;
			};
		};
		class TransportWeapons {};
		class TransportItems {
			class _xx_fow_i_rangeTables_m2
			{
				name = "fow_i_rangeTables_m2";
				count = 5;
			};			
		};
	};	
	class fow_us_ammo_60mm_m2_ILL : fow_ab_us_60mm_m2_ILL {scope = 1;};
};

class Mode_SemiAuto;
class Mode_Burst;

class CfgWeapons {
	
	class ItemCore;
	class fow_itemBase: ItemCore {
		class ItemInfo;
	};
    class fow_i_rangeTables_type97: fow_itemBase {
        author = "FOW Team";
        scope = 2;
        displayName = "Type 97 range tables";
        descriptionShort = "Type 97 range tables";
        picture = "\fow\fow_mortars_c\ui\rangeTables_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 0.1;
		};
    };	
    class fow_i_rangeTables_m2: fow_itemBase {
        author = "FOW Team";
        scope = 2;
        displayName = "M2 range tables";
        descriptionShort = "M2 range tables";
        picture = "\fow\fow_mortars_c\ui\rangeTables_ca.paa";
		class ItemInfo: ItemInfo
		{
			mass = 0.1;
		};
    };	
	
	class CannonCore;
	class fow_w_type97_mortar: CannonCore
	{
		scope = 1;
		displayname = "Type 97 81mm mortar";
		nameSound = "CannonCore";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1.0,1,20};
		soundServo[] = {"",0.0001,1.0};
		minRange = 80;
		minRangeProbab = 0.7;
		midRange = 2000;
		midRangeProbab = 0.7;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		reloadTime = 0.75;
		magazineReloadTime = 5;
		maxLeadSpeed = 100;
		autoReload = 1;
		canLock = 0;
		magazines[] = {"fow_1Rnd_81mm_type97_HE","fow_8Rnd_81mm_type97_HE","fow_8Rnd_81mm_type97_SMOKE","fow_1Rnd_81mm_type97_SMOKE","fow_8Rnd_81mm_type97_ILL","fow_1Rnd_81mm_type97_ILL"};
		ballisticsComputer = 2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MortarFired";
				positionName = "Usti Hlavne";
				directionName = "Konec Hlavne";
			};
		};
		modes[] = {"charge_1","charge_2","Burst1","Burst2"};
		class charge_1: Mode_SemiAuto
		{
			displayName = "Charge 1";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
			soundServo[] = {"",0.0001,1.0};
			reloadTime = 0.75;
			magazineReloadTime = 5;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 0.7;
			artilleryCharge = 0.6;
		};
		class charge_2: charge_1
		{
			displayName = "Charge 2";
			artilleryCharge = 0.85;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "Burst (close)";
			burst = 4;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
			soundBurst = 0;
			reloadTime = 0.75;
			minRange = 240;
			minRangeProbab = 0.5;
			midRange = 700;
			midRangeProbab = 0.7;
			maxRange = 1300;
			maxRangeProbab = 0.5;
			artilleryDispersion = 0.7;
			artilleryCharge = 0.6;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (medium)";
			minRange = 480;
			minRangeProbab = 0.4;
			midRange = 1600;
			midRangeProbab = 0.6;
			maxRange = 2800;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.85;
		};
	};	
	class fow_w_m2_mortar: CannonCore
	{
		scope = 1;
		displayname = "M2 60mm mortar";
		nameSound = "CannonCore";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
			begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
			soundBegin[] = {"begin1",0.5,"begin2",0.5};
		};
		reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_magazine_Mortar",1.0,1,20};
		soundServo[] = {"",0.0001,1.0};
		minRange = 80;
		minRangeProbab = 0.7;
		midRange = 2000;
		midRangeProbab = 0.7;
		maxRange = 4000;
		maxRangeProbab = 0.1;
		reloadTime = 0.75;
		magazineReloadTime = 5;
		maxLeadSpeed = 100;
		autoReload = 1;
		canLock = 0;
		magazines[] = {"fow_1Rnd_60mm_m2_HE","fow_8Rnd_60mm_m2_HE","fow_8Rnd_60mm_m2_SMOKE","fow_1Rnd_60mm_m2_SMOKE","fow_8Rnd_60mm_m2_ILL","fow_1Rnd_60mm_m2_ILL"};
		ballisticsComputer = 2;
		class GunParticles
		{
			class FirstEffect
			{
				effectName = "MortarFired";
				positionName = "Usti Hlavne";
				directionName = "Konec Hlavne";
			};
		};
		modes[] = {"charge_1","charge_2","charge_3","charge_4","Burst1","Burst2","Burst3"};
		class charge_1: Mode_SemiAuto
		{
			displayName = "Charge 1";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
			soundServo[] = {"",0.0001,1.0};
			reloadTime = 0.75;
			magazineReloadTime = 5;
			minRange = 0;
			midRange = 0;
			maxRange = 0;
			artilleryDispersion = 0.7;
			artilleryCharge = 0.675;
		};
		class charge_2: charge_1
		{
			displayName = "Charge 2";
			artilleryCharge = 0.731;
		};
		class charge_3: charge_1
		{
			displayName = "Charge 3";
			artilleryCharge = 0.787;
		};
		class charge_4: charge_1
		{
			displayName = "Charge 4";
			artilleryCharge = 0.845;
		};
		class Burst1: Mode_Burst
		{
			showToPlayer = 0;
			displayName = "Burst (close)";
			burst = 4;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_01",1.2589254,1,250};
				begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\mortar_02",1.2589254,1,250};
				soundBegin[] = {"begin1",0.5,"begin2",0.5};
			};
			reloadSound[] = {"A3\Sounds_F\arsenal\weapons_static\Mortar\reload_mortar",1.0,1,20};
			soundBurst = 0;
			reloadTime = 3;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 1150;
			maxRangeProbab = 0.5;
			artilleryDispersion = 0.7;
			artilleryCharge = 0.675;
		};
		class Burst2: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (medium)";
			minRange = 290;
			minRangeProbab = 0.4;
			midRange = 700;
			midRangeProbab = 0.6;
			maxRange = 1500;
			maxRangeProbab = 0.4;
			artilleryCharge = 0.787;
		};
		class Burst3: Burst1
		{
			showToPlayer = 0;
			displayName = "Burst (far)";
			minRange = 320;
			minRangeProbab = 0.3;
			midRange = 900;
			midRangeProbab = 0.4;
			maxRange = 1800;
			maxRangeProbab = 0.3;
			artilleryCharge = 0.845;
		};
	};	
};

class CfgMagazines {
	class VehicleMagazine;
	class fow_8Rnd_81mm_type97_HE: VehicleMagazine
	{
		scope = 2;
		author = "FOW Team";
		displayName = "Type 97 Mortar 81mm HE Shells";
		displayNameShort = "81mm HE Shells";
		ammo = "fow_Sh_81mm_type97_HE";
		count = 8;
		initSpeed = 196;
		nameSound = "heat";
	};
	class fow_1Rnd_81mm_type97_HE: VehicleMagazine
	{
		scope = 2;
		author = "FOW Team";
		displayName = "Type 97 Mortar 81mm HE Shells";
		displayNameShort = "81mm HE Shells";
		ammo = "fow_Sh_81mm_type97_HE";
		model = "fow\fow_mortars\type97_shell";
        picture = "\fow\fow_mortars_c\ui\m_type97_ca.paa";
		count = 1;
		initSpeed = 196;
		nameSound = "heat";
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 25;
	};
	class fow_8Rnd_81mm_type97_SMOKE: fow_8Rnd_81mm_type97_HE
	{
		scope = 2;
		displayName = "Type 97 Mortar Smoke Shells";
		ammo = "fow_Sh_81mm_type97_SMOKE";
	};
	class fow_1Rnd_81mm_type97_SMOKE: VehicleMagazine
	{
		scope = 2;
		author = "FOW Team";
		displayName = "Type 97 Mortar 81mm SMOKE Shells";
		displayNameShort = "81mm SMOKE Shells";
		ammo = "fow_Sh_81mm_type97_SMOKE";
		model = "fow\fow_mortars\type97_shell";
        picture = "\fow\fow_mortars_c\ui\m_type97_ca.paa";
		count = 1;
		initSpeed = 196;
		nameSound = "heat";
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 25;
	};
	class fow_8Rnd_81mm_type97_ILL: fow_8Rnd_81mm_type97_HE
	{
		scope = 2;
		displayName = "Type 97 Mortar Smoke Shells";
		ammo = "fow_Sh_81mm_type97_SMOKE";
	};
	class fow_1Rnd_81mm_type97_ILL: VehicleMagazine
	{
		scope = 2;
		author = "FOW Team";
		displayName = "Type 97 Mortar 81mm ILLUM Shells";
		displayNameShort = "81mm ILLUM Shells";
		ammo = "fow_Sh_81mm_type97_ILL";
		model = "fow\fow_mortars\type97_shell";
        picture = "\fow\fow_mortars_c\ui\m_type97_ca.paa";
		count = 1;
		initSpeed = 196;
		nameSound = "heat";
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 25;
	};
	//M2
	class fow_8Rnd_60mm_m2_HE: VehicleMagazine
	{
		scope = 2;
		author = "FOW Team";
		displayName = "M2 Mortar 60mm HE Shells";
		displayNameShort = "60mm HE Shells";
		ammo = "fow_Sh_60mm_m2_HE";
		count = 8;
		initSpeed = 158;
		nameSound = "heat";
	};
	class fow_1Rnd_60mm_m2_HE: VehicleMagazine
	{
		scope = 2;
		author = "FOW Team";
		displayName = "M2 Mortar 60mm HE Shells";
		displayNameShort = "60mm HE Shells";
		ammo = "fow_Sh_60mm_m2_HE";
		model = "fow\fow_mortars\m2_shell";
        picture = "\fow\fow_mortars_c\ui\m_m2_ca.paa";
		count = 1;
		initSpeed = 158;
		nameSound = "heat";
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 25;
	};	
	class fow_8Rnd_60mm_m2_SMOKE: fow_8Rnd_60mm_m2_HE
	{
		scope = 2;
		displayName = "M2 Mortar Smoke Shells";
		ammo = "fow_Sh_60mm_m2_SMOKE";
	};
	class fow_1Rnd_60mm_m2_SMOKE: VehicleMagazine
	{
		scope = 2;
		author = "FOW Team";
		displayName = "M2 Mortar 60mm SMOKE Shells";
		displayNameShort = "60mm SMOKE Shells";
		ammo = "fow_Sh_60mm_m2_SMOKE";
		model = "fow\fow_mortars\m2_shell";
        picture = "\fow\fow_mortars_c\ui\m_m2_ca.paa";
		count = 1;
		initSpeed = 158;
		nameSound = "heat";
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 25;
	};
	class fow_8Rnd_60mm_m2_ILL: fow_8Rnd_60mm_m2_HE
	{
		scope = 2;
		displayName = "M2 Mortar Smoke Shells";
		ammo = "fow_Sh_60mm_m2_SMOKE";
	};
	class fow_1Rnd_60mm_m2_ILL: VehicleMagazine
	{
		scope = 2;
		author = "FOW Team";
		displayName = "M2 Mortar 60mm ILLUM Shells";
		displayNameShort = "60mm ILLUM Shells";
		ammo = "fow_Sh_60mm_m2_ILL";
		model = "fow\fow_mortars\m2_shell";
        picture = "\fow\fow_mortars_c\ui\m_m2_ca.paa";
		count = 1;
		initSpeed = 158;
		nameSound = "heat";
		weaponpoolavailable = 1;
		type = "2*		256";
		mass = 25;
	};	
};

class CfgAmmo {
	class Sh_82mm_AMOS;
	class ShotDeployBase;
	class FlareCore;
	class fow_Sh_81mm_type97_HE: Sh_82mm_AMOS
	{
		hit = 165;
		indirectHit = 52;
		indirectHitRange = 18;
		typicalSpeed = 196;
		cost = 200;
		muzzleEffect = "";
	};
	class fow_Sh_60mm_m2_HE: fow_Sh_81mm_type97_HE
	{
		hit = 140;
		indirectHit = 35;
		indirectHitRange = 12;
		typicalSpeed = 158;
		cost = 200;
		muzzleEffect = "";
	};
	class fow_Sh_81mm_type97_SMOKE: ShotDeployBase
	{
		model = "\A3\weapons_f\ammo\shell";
		submunitionAmmo = "SmokeShellArty";
	};
	class fow_Sh_60mm_m2_SMOKE: ShotDeployBase
	{
		model = "\A3\weapons_f\ammo\shell";
		submunitionAmmo = "SmokeShellArty";
	};
	class fow_Sh_81mm_type97_ILL: FlareCore
	{
		timeToLive = 50;
		model = "\A3\weapons_f\ammo\shell";
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[] = {30,60,120,180,240,300,360};
		aimAboveDefault = 4;
		triggerTime = -1;
		triggerSpeedCoef = 1;
		lightColor[] = {0.95,0.95,1.0,0.5};
		smokeColor[] = {1.0,1.0,1.0,0.5};
		intensity = 80000;
	};
	class fow_Sh_60mm_m2_ILL: FlareCore
	{
		timeToLive = 50;
		model = "\A3\weapons_f\ammo\shell";
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[] = {30,60,120,180,240,300,360};
		aimAboveDefault = 4;
		triggerTime = -1;
		triggerSpeedCoef = 1;
		lightColor[] = {0.95,0.95,1.0,0.5};
		smokeColor[] = {1.0,1.0,1.0,0.5};
		intensity = 80000;
	};
};

class CfgFunctions {
	class fow_mortars_functions {
		tag = "fow_mortars";
		class fow_functions {
			file = "fow\fow_mortars_c\fnc";
			class addActions;
			class canOpenRangeTable;
			class canReload;
			class buildRangeTables;
			class fillRangeTable;
			class getElevation;
			class getRangeTableData;
			class getRequiredElev;
			class getRequiredElevWithSpeed;
			class postInit {postInit = 1;};
			class mortarTest;
			class openRangeTable;
			class reload;
			class uiHandler;
		};
	};
};

class RscText;
class RscCombo;
class RscControlsGroup;
class RscListNBox;
class RscPicture;
class ScrollBar;

#include "RscRangeTable.hpp"
#include "RscInGameUI.hpp"