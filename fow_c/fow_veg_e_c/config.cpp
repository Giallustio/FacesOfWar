
class CfgPatches
{
	class fow_veg_e_c
	{
		requiredAddons[] = {"fow_main","fow_veg_e"};
		units[] = {
			"alexandrae_bosket","alexandrae01","alexandrae02","alexandrae03","alexandrae04","alexandrae05","alexandrae06","alexandrae07","alexandrae09","alocasia01","alocasia_bosket","alpina_purpura_01",
			"anthurium_01","anthurium_02","anthurium_03",
			"asset_palm_01","asset_palm_02","asset_palm_03","asset_palm_04","asset_palm_05","asset_palm_06","asset_palm_07","asset_palm_08","asset_palm_09","asset_palm_10","asset_palm_11","asset_palm_12","asset_palm_13","asset_palm_14","asset_palm_15","asset_palm_16",
			"asset_trench_01","asset_trench_01_beach","asset_trench_01_grass","asset_trench_01_ground","asset_trench_01_jungle","asset_trench_01_marsh","asset_trench_02","asset_trench_02_beach","asset_trench_02_grass","asset_trench_02_ground","asset_trench_02_jungle","asset_trench_02_marsh","asset_trench_03","asset_trench_03_beach","asset_trench_03_grass","asset_trench_03_ground","asset_trench_03_jungle","asset_trench_03_marsh","asset_trench_04","asset_trench_05","asset_trench_06","asset_trench_07","asset_trench_08","asset_trench_09","asset_trench_09_beach","asset_trench_09_grass","asset_trench_09_ground","asset_trench_09_jungle","asset_trench_09_marsh","banana_01","banana_02","ceiba_young_01","ceiba_young_02","chamadeora_01","chamadeora_radi_01","chamadeora_radi_02","chamadeora_radi_03","chamaedorea_stolonifera_01","cyathea01","cyathea02","cyathea05","cyathea06","dicksonia_01","dicksonia_02","dicksonia_03","dicksonia_coat_01","dicksonia_coat_02","dicksonia_young_01","dicksonia_young_02","licuala01","licuala02","mariata01","mariata02","mariata03","martiana_01","martiana_02","martiana_03","martiana_04","monsteria_01","naupaka02","naupaka04","palm_01","palm_01_green","palm_02","palm_02_green","palm_03","palm_03_green","palm_04","palm_04_green","palm_05","palm_05_green","palm_06","palm_06_green","philodendron_01","philodendron_02","philodendron_03","pinanga_bosket","pinanga01","pinanga02","pinanga03","pinanga04","plant_lanceole_01","young_palm_01","young_palm_01_green","young_palm_02","young_palm_02_green","young_palm_03","young_palm_03_green","young_tree_bosket","young_tree01","young_tree02","young_tree03","young_tree04"
		};
		weapons[] = {};
	};
};

class CfgEditorCategories
{
	class fow_veg_e
	{
		displayName = "FoW - European vegetation";
	};
};

class CfgVehicleClasses
{
	class fow_veg_trees_e
	{
		displayName = "FoW E Trees";
	};
};
class CfgEditorSubcategories
{
	class fow_veg_trees_e
	{
		displayName = "FoW E Trees";
	};
};
class CfgVehicles
{
	class Static;
	class fow_veg_trees_e_Baseclass: Static
	{
		vehicleClass = "fow_veg_trees_e";
		editorCategory = "fow_veg_e";
		editorSubcategory = "fow_veg_trees_e";
		simulation = "house";
		icon = "iconObject";
		cost = 0;
		armor = 3000;
		placement = "slope";
	};
	class bush01: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "bush01";
		model = "fow\fow_veg_e\bush01.p3d";
	};
	class bush02: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "bush02";
		model = "fow\fow_veg_e\bush02.p3d";
	};
	class fir01: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "fir01";
		model = "fow\fow_veg_e\fir01.p3d";
	};
	class fir02: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "fir02";
		model = "fow\fow_veg_e\fir02.p3d";
	};
	class fir02_young: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "fir02_young";
		model = "fow\fow_veg_e\fir02_young.p3d";
	};
	class fir03: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "fir03";
		model = "fow\fow_veg_e\fir03.p3d";
	};
	class fir03_young: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "fir03_young";
		model = "fow\fow_veg_e\fir03_young.p3d";
	};
	class hedgerow01: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "hedgerow01";
		model = "fow\fow_veg_e\hedgerow01.p3d";
	};
	class hedgerow02: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "hedgerow02";
		model = "fow\fow_veg_e\hedgerow02.p3d";
	};
	class noisetier01: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "noisetier01";
		model = "fow\fow_veg_e\noisetier01.p3d";
	};
	class noisetier03: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "noisetier03";
		model = "fow\fow_veg_e\noisetier03.p3d";
	};
	class oak_medium01: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "oak_medium01";
		model = "fow\fow_veg_e\oak_medium01.p3d";
	};
	class oak_medium01_ivy: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "oak_medium01_ivy";
		model = "fow\fow_veg_e\oak_medium01_ivy.p3d";
	};
	class oak_sessile_medium01: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "oak_sessile_medium01";
		model = "fow\fow_veg_e\oak_sessile_medium01.p3d";
	};
	class oak_young01: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "oak_young01";
		model = "fow\fow_veg_e\oak_young01.p3d";
	};
	class picea_broken01: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "picea_broken01";
		model = "fow\fow_veg_e\picea_broken01.p3d";
	};
	class picea_broken01_2: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "picea_broken01_2";
		model = "fow\fow_veg_e\picea_broken01_2.p3d";
	};
	class picea_broken02: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "picea_broken02";
		model = "fow\fow_veg_e\picea_broken02.p3d";
	};
	class picea01: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "picea01";
		model = "fow\fow_veg_e\picea01.p3d";
	};
	class picea02: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "picea02";
		model = "fow\fow_veg_e\picea02.p3d";
	};
	class picea03: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "picea03";
		model = "fow\fow_veg_e\picea03.p3d";
	};
	class picea04: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "picea04";
		model = "fow\fow_veg_e\picea04.p3d";
	};
	class picea05: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "picea05";
		model = "fow\fow_veg_e\picea05.p3d";
	};
	class roots_base01: fow_veg_trees_e_Baseclass
	{
		scope = 2;
		displayName = "roots_base01";
		model = "fow\fow_veg_e\roots_base01.p3d";
	};
};
//};
