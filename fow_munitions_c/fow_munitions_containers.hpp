	class FOW_AB_US_Crate_Generic: IND_Box_Base {
		_generalMacro = "FOW_AB_US_Crate_Generic";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\us\data\HLS_US_Case_Generic_co.paa"};
		displayName = "Small Arms Crate";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\us\HLS_US_Case_Generic.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_US";
		vehicleClass = "FOW_Munitions_Container_US";
		maximumLoad = 180;
			class TransportMagazines {};
		author = "FOW Development Team";
	};	
	class FOW_AB_US_Carton_45: IND_Box_Base {
		_generalMacro = "FOW_AB_US_Carton_45";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\us\data\HLS_US_Package_45ACP_B_co.paa"};
		displayName = "M1911A1 .45 Carton";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\us\HLS_US_Package_45ACP.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_US";
		vehicleClass = "FOW_Munitions_Container_US";
		maximumLoad = 20;
			class TransportMagazines {
				class _xx_fow_7Rnd_45acp {
					magazine = "fow_7Rnd_45acp";
						count = 6;};
						};
		author = "FOW Development Team";
	};
	class FOW_AB_US_Carton_45_SMG: IND_Box_Base {
		_generalMacro = "FOW_AB_US_Carton_45_SMG";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\us\data\HLS_US_Package_45ACP_A_co.paa"};
		displayName = "M1A1 .45 Carton";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\us\HLS_US_Package_45ACP.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_US";
		vehicleClass = "FOW_Munitions_Container_US";
		maximumLoad = 20;
			class TransportMagazines {
				class _xx_fow_30Rnd_45acp {
					magazine = "fow_30Rnd_45acp";
						count = 2;};
						};
		author = "FOW Development Team";
	};
	class FOW_AB_US_Carton_3006: IND_Box_Base {
		_generalMacro = "FOW_AB_US_Carton_3006";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\us\data\HLS_US_Package_3006_A_co.paa"};
		displayName = "30M2 Ball Carton";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\us\HLS_US_Package_3006_A.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_US";
		vehicleClass = "FOW_Munitions_Container_US";
		maximumLoad = 20;
			class TransportMagazines {
				class _xx_fow_8Rnd_762x63 {
					magazine = "fow_8Rnd_762x63";
						count = 3;};
						};
		author = "FOW Development Team";
	};
	class FOW_AB_US_Carton_3006_AP: IND_Box_Base {
		_generalMacro = "FOW_AB_US_Carton_3006_AP";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\us\data\HLS_US_Package_3006_A_co.paa"};
		displayName = "30M2 Armor Piercing Carton";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\us\HLS_US_Package_3006_B.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_US";
		vehicleClass = "FOW_Munitions_Container_US";
		maximumLoad = 20;
			class TransportMagazines {
				class _xx_fow_8Rnd_762x63 {
					magazine = "fow_8Rnd_762x63";
						count = 3;};
						};
		author = "FOW Development Team";
	};
	class FOW_AB_US_Carton_3006_T: IND_Box_Base {
		_generalMacro = "FOW_AB_US_Carton_3006_T";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\us\data\HLS_US_Package_3006_B_co.paa"};
		displayName = "30M1 Tracer Carton";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\us\HLS_US_Package_3006_A.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_US";
		vehicleClass = "FOW_Munitions_Container_US";
		maximumLoad = 20;
			class TransportMagazines {
				class _xx_fow_8Rnd_762x63_T {
					magazine = "fow_8Rnd_762x63_T";
						count = 3;};
						};
		author = "FOW Development Team";
	};
	class FOW_AB_US_Carton_3006_RG: IND_Box_Base {
		_generalMacro = "FOW_AB_US_Carton_3006_RG";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\us\data\HLS_US_Package_3006_B_co.paa"};
		displayName = "30M3 Rifle Grenade Cartridges Carton";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\us\HLS_US_Package_3006_B.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_US";
		vehicleClass = "FOW_Munitions_Container_US";
		maximumLoad = 20;
			class TransportMagazines {
				class _xx_fow_8Rnd_762x63 {
					magazine = "fow_8Rnd_762x63";
						count = 3;};
						};
		author = "FOW Development Team";
	};

	class FOW_AB_UK_Carton_303: IND_Box_Base {
		_generalMacro = "FOW_AB_UK_Carton_303";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\uk\data\HLS_UK_Package_303_co.paa"};
		displayName = ".303 Ball Carton";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\uk\HLS_UK_Package_303.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_UK";
		vehicleClass = "FOW_Munitions_Container_UK";
		maximumLoad = 30;
			class TransportMagazines {
				class _xx_fow_10Rnd_303 {
					magazine = "fow_10Rnd_303";
						count = 5;};
						};
		author = "FOW Development Team";
	};
	class FOW_AB_UK_Carton_303_T: IND_Box_Base {
		_generalMacro = "FOW_AB_UK_Carton_303_T";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\uk\data\HLS_UK_Package_303_co.paa"};
		displayName = ".303 Tracer Carton";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\uk\HLS_UK_Package_303_T.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_UK";
		vehicleClass = "FOW_Munitions_Container_UK";
		maximumLoad = 30;
			class TransportMagazines {
				class _xx_fow_10Rnd_303 {
					magazine = "fow_10Rnd_303";
						count = 5;};
						};
		author = "FOW Development Team";
	};
	class FOW_AB_UK_Carton_303_AP: IND_Box_Base {
		_generalMacro = "FOW_AB_UK_Carton_303_AP";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\uk\data\HLS_UK_Package_303_co.paa"};
		displayName = ".303 Armor Piercing Carton";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\uk\HLS_UK_Package_303_AP.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_UK";
		vehicleClass = "FOW_Munitions_Container_UK";
		maximumLoad = 30;
			class TransportMagazines {
				class _xx_fow_10Rnd_303 {
					magazine = "fow_10Rnd_303";
						count = 5;};
						};
		author = "FOW Development Team";
	};

	class FOW_AB_IJA_Crate_Generic: IND_Box_Base {
		_generalMacro = "FOW_AB_IJA_Crate_Generic";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\ija\data\HLS_IJA_Case_Generic_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_munitions\ija\data\HLS_IJA_Case_Generic.rvmat"};
		displayName = "Small Arms Crate";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\ija\HLS_IJA_Case_Generic.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_IJA";
		vehicleClass = "FOW_Munitions_Container_IJA";
		maximumLoad = 150;
			class TransportMagazines {};
		author = "FOW Development Team";
	};
	class FOW_AB_IJA_Crate_Generic_P: IND_Box_Base {
		_generalMacro = "FOW_AB_IJA_Crate_Generic_P";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\ija\data\HLS_IJA_Case_Generic_Painted_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_munitions\ija\data\HLS_IJA_Case_Generic_Painted.rvmat"};
		displayName = "Small Arms Crate (Painted)";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\ija\HLS_IJA_Case_Generic.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_IJA";
		vehicleClass = "FOW_Munitions_Container_IJA";
		maximumLoad = 150;
			class TransportMagazines {};
		author = "FOW Development Team";
	};
	class FOW_AB_IJA_Crate_20mm: IND_Box_Base {
		_generalMacro = "FOW_AB_IJA_Crate_20mm";
		DLC = "fow_mod";
		scope = 2;
		scopeCurator = 2;
		icon = "iconObject_1x3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_munitions\ija\data\HLS_IJA_Case_20mm_co.paa"};
		displayName = "20mm Magazine Crate";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_Ammobox_rounds_F.jpg"; // TODO
		model = "\fow\fow_munitions\ija\HLS_IJA_Case_20mm.p3d";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_IJA";
		vehicleClass = "FOW_Munitions_Container_IJA";
		maximumLoad = 500;
			class TransportMagazines {};
		author = "FOW Development Team";
	};
	
	class fow_ab_ger_dropcanister: IND_Box_Base
	{
		scope = 2;
		author = "FOW Team";
		displayName = "Dropcanister";
		model = "fow\fow_munitions\ger\ammo_dc.p3d";
		icon = "fow\fow_munitions\ger\data\ui\dc_ico_ca.paa";
		editorCategory = "FOW_Munitions_Container";
		editorSubcategory = "FOW_Munitions_Container_GER";
		class TransportMagazines
		{
			class _xx_fow_5Rnd_792x57
			{
				magazine = "fow_5Rnd_792x57";
				count = 20;
			};
		};
		class TransportWeapons
		{
			class _xx_fow_w_k98
			{
				weapon = "fow_w_k98";
				count = 2;
			};
		};
		/*class TransportItems
		{
			class _xx_LEN_ACC_No4_Bayo
			{
				name = "Len_ACC_No4_Bayo";
				count = 4;
			};			
		};*/

		class AnimationSources: AnimationSources
		{
			class  anim_cover
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		class UserActions
		{
			class Open_Cover
			{
				displayName = "Open drop canister";
				position = "cover_axis";
				onlyforplayer = 0;
				radius = 5;
				condition = "(this animationPhase 'anim_cover' == 0)";
				statement = "this animate ['anim_cover',1];";
			};
			class Close_Cover
			{
				displayName = "Close drop canister";
				position = "cover_axis";
				onlyforplayer = 0;
				radius = 5;
				condition = "(this animationPhase 'anim_cover' == 1)";
				statement = "this animate ['anim_cover',0];";
			};
		};
	};	
