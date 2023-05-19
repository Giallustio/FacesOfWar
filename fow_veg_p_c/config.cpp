
class CfgPatches
{
	class fow_veg_p_c
	{
		requiredAddons[] = {"fow_main","fow_veg_p"};
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
	class fow_veg_p
	{
		displayName = "FoW - Pacific vegetation";
	};
};

class CfgVehicleClasses
{
	class fow_veg_trees_p
	{
		displayName = "FoW P Trees";
	};
	class fow_veg_treeTrenches_p
	{
		displayName = "FoW P Tree trenches";
	};
};
class CfgEditorSubcategories
{
	class fow_veg_trees_p
	{
		displayName = "FoW P Trees";
	};
	class fow_veg_treeTrenches_p
	{
		displayName = "FoW P Tree trenches";
	};
};
class CfgVehicles
{
	class Static;
	class fow_veg_trees_p_Baseclass: Static
	{
		vehicleClass = "fow_veg_trees_p";
		editorCategory = "fow_veg_p";
		editorSubcategory = "fow_veg_trees_p";
		simulation = "house";
		icon = "iconObject";
		cost = 0;
		armor = 300;
		placement = "slope";
	};
	class alexandrae_bosket: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alexandrae_bosket";
		model = "fow\fow_veg_p\alexandrae_bosket.p3d";
	};
	class alexandrae01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alexandrae01";
		model = "fow\fow_veg_p\alexandrae01.p3d";
	};
	class alexandrae02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alexandrae02";
		model = "fow\fow_veg_p\alexandrae02.p3d";
	};
	class alexandrae03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alexandrae03";
		model = "fow\fow_veg_p\alexandrae03.p3d";
	};
	class alexandrae04: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alexandrae04";
		model = "fow\fow_veg_p\alexandrae04.p3d";
	};
	class alexandrae05: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alexandrae05";
		model = "fow\fow_veg_p\alexandrae05.p3d";
	};
	class alexandrae06: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alexandrae06";
		model = "fow\fow_veg_p\alexandrae06.p3d";
	};
	class alexandrae07: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alexandrae07";
		model = "fow\fow_veg_p\alexandrae07.p3d";
	};
	class alexandrae09: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alexandrae09";
		model = "fow\fow_veg_p\alexandrae09.p3d";
	};
	class alocasia01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alocasia01";
		model = "fow\fow_veg_p\alocasia01.p3d";
	};
	class alocasia_bosket: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alocasia_bosket";
		model = "fow\fow_veg_p\alocasia_bosket.p3d";
	};
	class alpina_purpura_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "alpina_purpura_01";
		model = "fow\fow_veg_p\alpina_purpura_01.p3d";
	};
	class anthurium_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "anthurium_01 (NO)";
		model = "fow\fow_veg_p\anthurium_01.p3d";
	};
	class anthurium_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "anthurium_02 (NO)";
		model = "fow\fow_veg_p\anthurium_02.p3d";
	};
	class anthurium_03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "anthurium_03 (NO)";
		model = "fow\fow_veg_p\anthurium_03.p3d";
	};
	class asset_palm_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_01";
		model = "fow\fow_veg_p\asset_palm_01.p3d";
	};
	class asset_palm_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_02";
		model = "fow\fow_veg_p\asset_palm_02.p3d";
	};
	class asset_palm_03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_03";
		model = "fow\fow_veg_p\asset_palm_03.p3d";
	};
	class asset_palm_04: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_04";
		model = "fow\fow_veg_p\asset_palm_04.p3d";
	};
	class asset_palm_05: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_05";
		model = "fow\fow_veg_p\asset_palm_05.p3d";
	};
	class asset_palm_06: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_06";
		model = "fow\fow_veg_p\asset_palm_06.p3d";
	};
	class asset_palm_07: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_07";
		model = "fow\fow_veg_p\asset_palm_07.p3d";
	};
	class asset_palm_08: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_08";
		model = "fow\fow_veg_p\asset_palm_08.p3d";
	};
	class asset_palm_09: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_09";
		model = "fow\fow_veg_p\asset_palm_09.p3d";
	};
	class asset_palm_10: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_10";
		model = "fow\fow_veg_p\asset_palm_10.p3d";
	};
	class asset_palm_11: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_11";
		model = "fow\fow_veg_p\asset_palm_11.p3d";
	};
	class asset_palm_12: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_12";
		model = "fow\fow_veg_p\asset_palm_12.p3d";
	};
	class asset_palm_13: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_13";
		model = "fow\fow_veg_p\asset_palm_13.p3d";
	};
	class asset_palm_14: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_14";
		model = "fow\fow_veg_p\asset_palm_14.p3d";
	};
	class asset_palm_15: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_15";
		model = "fow\fow_veg_p\asset_palm_15.p3d";
	};
	class asset_palm_16: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_palm_16";
		model = "fow\fow_veg_p\asset_palm_16.p3d";
	};
	class asset_trench_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "asset_trench_01";
		model = "fow\fow_veg_p\asset_trench_01.p3d";
		vehicleClass = "fow_veg_treeTrenches_p";
		editorSubcategory = "fow_veg_treeTrenches_p";
	};
	class asset_trench_01_beach: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_01_beach";
		model = "fow\fow_veg_p\asset_trench_01_beach.p3d";
	};
	class asset_trench_01_grass: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_01_grass";
		model = "fow\fow_veg_p\asset_trench_01_grass.p3d";
	};
	class asset_trench_01_ground: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_01_ground";
		model = "fow\fow_veg_p\asset_trench_01_ground.p3d";
	};
	class asset_trench_01_jungle: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_01_jungle";
		model = "fow\fow_veg_p\asset_trench_01_jungle.p3d";
	};
	class asset_trench_01_marsh: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_01_marsh";
		model = "fow\fow_veg_p\asset_trench_01_marsh.p3d";
	};
	class asset_trench_02: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_02";
		model = "fow\fow_veg_p\asset_trench_02.p3d";
	};
	class asset_trench_02_beach: asset_trench_02
	{
		scope = 2;
		displayName = "asset_trench_02_beach";
		model = "fow\fow_veg_p\asset_trench_02_beach.p3d";
	};
	class asset_trench_02_grass: asset_trench_02
	{
		scope = 2;
		displayName = "asset_trench_02_grass";
		model = "fow\fow_veg_p\asset_trench_02_grass.p3d";
	};
	class asset_trench_02_ground: asset_trench_02
	{
		scope = 2;
		displayName = "asset_trench_02_ground";
		model = "fow\fow_veg_p\asset_trench_02_ground.p3d";
	};
	class asset_trench_02_jungle: asset_trench_02
	{
		scope = 2;
		displayName = "asset_trench_02_jungle";
		model = "fow\fow_veg_p\asset_trench_02_jungle.p3d";
	};
	class asset_trench_02_marsh: asset_trench_02
	{
		scope = 2;
		displayName = "asset_trench_02_marsh";
		model = "fow\fow_veg_p\asset_trench_02_marsh.p3d";
	};
	class asset_trench_03: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_03";
		model = "fow\fow_veg_p\asset_trench_03.p3d";
	};
	class asset_trench_03_beach: asset_trench_03
	{
		scope = 2;
		displayName = "asset_trench_03_beach";
		model = "fow\fow_veg_p\asset_trench_03_beach.p3d";
	};
	class asset_trench_03_grass: asset_trench_03
	{
		scope = 2;
		displayName = "asset_trench_03_grass";
		model = "fow\fow_veg_p\asset_trench_03_grass.p3d";
	};
	class asset_trench_03_ground: asset_trench_03
	{
		scope = 2;
		displayName = "asset_trench_03_ground";
		model = "fow\fow_veg_p\asset_trench_03_ground.p3d";
	};
	class asset_trench_03_jungle: asset_trench_03
	{
		scope = 2;
		displayName = "asset_trench_03_jungle";
		model = "fow\fow_veg_p\asset_trench_03_jungle.p3d";
	};
	class asset_trench_03_marsh: asset_trench_03
	{
		scope = 2;
		displayName = "asset_trench_03_marsh";
		model = "fow\fow_veg_p\asset_trench_03_marsh.p3d";
	};
	class asset_trench_04: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_04";
		model = "fow\fow_veg_p\asset_trench_04.p3d";
	};
	class asset_trench_05: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_05";
		model = "fow\fow_veg_p\asset_trench_05.p3d";
	};
	class asset_trench_06: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_06";
		model = "fow\fow_veg_p\asset_trench_06.p3d";
	};
	class asset_trench_07: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_07";
		model = "fow\fow_veg_p\asset_trench_07.p3d";
	};
	class asset_trench_08: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_08";
		model = "fow\fow_veg_p\asset_trench_08.p3d";
	};
	class asset_trench_09: asset_trench_01
	{
		scope = 2;
		displayName = "asset_trench_09";
		model = "fow\fow_veg_p\asset_trench_09.p3d";
	};
	class asset_trench_09_beach: asset_trench_09
	{
		scope = 2;
		displayName = "asset_trench_09_beach";
		model = "fow\fow_veg_p\asset_trench_09_beach.p3d";
	};
	class asset_trench_09_grass: asset_trench_09
	{
		scope = 2;
		displayName = "asset_trench_09_grass";
		model = "fow\fow_veg_p\asset_trench_09_grass.p3d";
	};
	class asset_trench_09_ground: asset_trench_09
	{
		scope = 2;
		displayName = "asset_trench_09_ground";
		model = "fow\fow_veg_p\asset_trench_09_ground.p3d";
	};
	class asset_trench_09_jungle: asset_trench_09
	{
		scope = 2;
		displayName = "asset_trench_09_jungle";
		model = "fow\fow_veg_p\asset_trench_09_jungle.p3d";
	};
	class asset_trench_09_marsh: asset_trench_09
	{
		scope = 2;
		displayName = "asset_trench_09_marsh";
		model = "fow\fow_veg_p\asset_trench_09_marsh.p3d";
	};
	class Land_asset_trench_01: asset_trench_01 {scope = 1;};
	class Land_asset_trench_01_beach: asset_trench_01_beach {scope = 1;};
	class Land_asset_trench_01_grass: asset_trench_01_grass {scope = 1;};
	class Land_asset_trench_01_ground: asset_trench_01_ground {scope = 1;};
	class Land_asset_trench_01_jungle: asset_trench_01_jungle {scope = 1;};
	class Land_asset_trench_01_marsh: asset_trench_01_marsh {scope = 1;};
	class Land_asset_trench_02: asset_trench_02 {scope = 1;};
	class Land_asset_trench_02_beach: asset_trench_02_beach {scope = 1;};
	class Land_asset_trench_02_grass: asset_trench_02_grass {scope = 1;};
	class Land_asset_trench_02_ground: asset_trench_02_ground {scope = 1;};
	class Land_asset_trench_02_jungle: asset_trench_02_jungle {scope = 1;};
	class Land_asset_trench_02_marsh: asset_trench_02_marsh {scope = 1;};
	class Land_asset_trench_03: asset_trench_03 {scope = 1;};
	class Land_asset_trench_03_beach: asset_trench_03_beach {scope = 1;};
	class Land_asset_trench_03_grass: asset_trench_03_grass {scope = 1;};
	class Land_asset_trench_03_ground: asset_trench_03_ground {scope = 1;};
	class Land_asset_trench_03_jungle: asset_trench_03_jungle {scope = 1;};
	class Land_asset_trench_03_marsh: asset_trench_03_marsh {scope = 1;};
	class Land_asset_trench_04: asset_trench_04 {scope = 1;};
	class Land_asset_trench_05: asset_trench_05 {scope = 1;};
	class Land_asset_trench_06: asset_trench_06 {scope = 1;};
	class Land_asset_trench_07: asset_trench_07 {scope = 1;};
	class Land_asset_trench_08: asset_trench_08 {scope = 1;};
	class Land_asset_trench_09: asset_trench_09 {scope = 1;};
	class Land_asset_trench_09_beach: asset_trench_09_beach {scope = 1;};
	class Land_asset_trench_09_grass: asset_trench_09_grass {scope = 1;};
	class Land_asset_trench_09_ground: asset_trench_09_ground {scope = 1;};
	class Land_asset_trench_09_jungle: asset_trench_09_jungle {scope = 1;};
	class Land_asset_trench_09_marsh: asset_trench_09_marsh {scope = 1;};
	class banana_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "banana_01 (NO)";
		model = "fow\fow_veg_p\banana_01.p3d";
	};
	class banana_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "banana_02 (NO)";
		model = "fow\fow_veg_p\banana_02.p3d";
	};
	class ceiba_young_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "ceiba_young_01 (NO)";
		model = "fow\fow_veg_p\ceiba_young_01.p3d";
	};
	class ceiba_young_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "ceiba_young_02 (NO)";
		model = "fow\fow_veg_p\ceiba_young_02.p3d";
	};
	class chamadeora_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "chamadeora_01 (NO)";
		model = "fow\fow_veg_p\chamadeora_01.p3d";
	};
	class chamadeora_radi_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "chamadeora_radi_01";
		model = "fow\fow_veg_p\chamadeora_radi_01.p3d";
	};
	class chamadeora_radi_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "chamadeora_radi_02 (NO)";
		model = "fow\fow_veg_p\chamadeora_radi_02.p3d";
	};
	class chamadeora_radi_03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "chamadeora_radi_03 (NO)";
		model = "fow\fow_veg_p\chamadeora_radi_03.p3d";
	};
	class chamaedorea_stolonifera_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "chamaedorea_stolonifera_01 (NO)";
		model = "fow\fow_veg_p\chamaedorea_stolonifera_01.p3d";
	};
	class cyathea01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "cyathea01";
		model = "fow\fow_veg_p\cyathea01.p3d";
	};
	class cyathea02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "cyathea02";
		model = "fow\fow_veg_p\cyathea02.p3d";
	};
	class cyathea05: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "cyathea05";
		model = "fow\fow_veg_p\cyathea05.p3d";
	};
	class cyathea06: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "cyathea06";
		model = "fow\fow_veg_p\cyathea06.p3d";
	};
	class dicksonia_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "dicksonia_01 (NO)";
		model = "fow\fow_veg_p\dicksonia_01.p3d";
	};
	class dicksonia_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "dicksonia_02 (NO)";
		model = "fow\fow_veg_p\dicksonia_02.p3d";
	};
	class dicksonia_03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "dicksonia_03 (NO)";
		model = "fow\fow_veg_p\dicksonia_03.p3d";
	};
	class dicksonia_coat_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "dicksonia_coat_01 (NO)";
		model = "fow\fow_veg_p\dicksonia_coat_01.p3d";
	};
	class dicksonia_coat_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "dicksonia_coat_02 (NO)";
		model = "fow\fow_veg_p\dicksonia_coat_02.p3d";
	};
	class dicksonia_young_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "dicksonia_young_01 (NO)";
		model = "fow\fow_veg_p\dicksonia_young_01.p3d";
	};
	class dicksonia_young_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "dicksonia_young_02 (NO)";
		model = "fow\fow_veg_p\dicksonia_young_02.p3d";
	};
	class licuala01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "licuala01";
		model = "fow\fow_veg_p\licuala01.p3d";
	};
	class licuala02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "licuala02";
		model = "fow\fow_veg_p\licuala02.p3d";
	};
	class mariata01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "mariata01";
		model = "fow\fow_veg_p\mariata01.p3d";
	};
	class mariata02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "mariata02";
		model = "fow\fow_veg_p\mariata02.p3d";
	};
	class mariata03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "mariata03";
		model = "fow\fow_veg_p\mariata03.p3d";
	};
	class martiana_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "martiana_01 (NO)";
		model = "fow\fow_veg_p\martiana_01.p3d";
	};
	class martiana_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "martiana_02 (NO)";
		model = "fow\fow_veg_p\martiana_02.p3d";
	};
	class martiana_03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "martiana_02 (NO)";
		model = "fow\fow_veg_p\martiana_02.p3d";
	};
	class martiana_04: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "martiana_04 (NO)";
		model = "fow\fow_veg_p\martiana_04.p3d";
	};
	class mid_tree01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "mid_tree01";
		model = "fow\fow_veg_p\mid_tree01.p3d";
	};
	class mid_tree02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "mid_tree02";
		model = "fow\fow_veg_p\mid_tree02.p3d";
	};
	class mid_tree03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "mid_tree03";
		model = "fow\fow_veg_p\mid_tree03.p3d";
	};
	class monsteria_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "monsteria_01";
		model = "fow\fow_veg_p\monsteria_01.p3d";
	};
	class naupaka02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "naupaka02 (NO)";
		model = "fow\fow_veg_p\naupaka02.p3d";
	};
	class naupaka04: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "naupaka04 (NO)";
		model = "fow\fow_veg_p\naupaka04.p3d";
	};
	class palm_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_01";
		model = "fow\fow_veg_p\palm_01.p3d";
	};
	class palm_01_green: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_01_green";
		model = "fow\fow_veg_p\palm_01_green.p3d";
	};
	class palm_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_02";
		model = "fow\fow_veg_p\palm_02.p3d";
	};
	class palm_02_green: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_02_green";
		model = "fow\fow_veg_p\palm_02_green.p3d";
	};
	class palm_03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_03";
		model = "fow\fow_veg_p\palm_03.p3d";
	};
	class palm_03_green: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_03_green";
		model = "fow\fow_veg_p\palm_03_green.p3d";
	};
	class palm_04: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_04";
		model = "fow\fow_veg_p\palm_04.p3d";
	};
	class palm_04_green: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_04_green";
		model = "fow\fow_veg_p\palm_04_green.p3d";
	};
	class palm_05: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_05";
		model = "fow\fow_veg_p\palm_05.p3d";
	};
	class palm_05_green: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_05_green";
		model = "fow\fow_veg_p\palm_05_green.p3d";
	};
	class palm_06: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_06";
		model = "fow\fow_veg_p\palm_06.p3d";
	};
	class palm_06_green: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "palm_06_green";
		model = "fow\fow_veg_p\palm_06_green.p3d";
	};
	class philodendron_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "philodendron_01 (NO)";
		model = "fow\fow_veg_p\philodendron_01.p3d";
	};
	class philodendron_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "philodendron_02 (NO)";
		model = "fow\fow_veg_p\philodendron_02.p3d";
	};
	class philodendron_03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "philodendron_03 (NO)";
		model = "fow\fow_veg_p\philodendron_03.p3d";
	};
	class pinanga_bosket: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "pinanga_bosket";
		model = "fow\fow_veg_p\pinanga_bosket.p3d";
	};
	class pinanga01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "pinanga01";
		model = "fow\fow_veg_p\pinanga01.p3d";
	};
	class pinanga02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "pinanga02";
		model = "fow\fow_veg_p\pinanga02.p3d";
	};
	class pinanga03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "pinanga03";
		model = "fow\fow_veg_p\pinanga03.p3d";
	};
	class pinanga04: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "pinanga04";
		model = "fow\fow_veg_p\pinanga04.p3d";
	};
	class plant_lanceole_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "plant_lanceole_01 (NO)";
		model = "fow\fow_veg_p\plant_lanceole_01.p3d";
	};
	class young_palm_01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_palm_01";
		model = "fow\fow_veg_p\young_palm_01.p3d";
	};
	class young_palm_01_green: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_palm_01_green";
		model = "fow\fow_veg_p\young_palm_01_green.p3d";
	};
	class young_palm_02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_palm_02";
		model = "fow\fow_veg_p\young_palm_02.p3d";
	};
	class young_palm_02_green: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_palm_02_green";
		model = "fow\fow_veg_p\young_palm_02_green.p3d";
	};
	class young_palm_03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_palm_03";
		model = "fow\fow_veg_p\young_palm_03.p3d";
	};
	class young_palm_03_green: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_palm_03_green";
		model = "fow\fow_veg_p\young_palm_03_green.p3d";
	};
	class young_tree_bosket: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_tree_bosket";
		model = "fow\fow_veg_p\young_tree_bosket.p3d";
	};
	class young_tree01: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_tree01";
		model = "fow\fow_veg_p\young_tree01.p3d";
	};
	class young_tree02: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_tree02";
		model = "fow\fow_veg_p\young_tree02.p3d";
	};
	class young_tree03: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_tree03";
		model = "fow\fow_veg_p\young_tree03.p3d";
	};
	class young_tree04: fow_veg_trees_p_Baseclass
	{
		scope = 2;
		displayName = "young_tree04";
		model = "fow\fow_veg_p\young_tree04.p3d";
	};
};

