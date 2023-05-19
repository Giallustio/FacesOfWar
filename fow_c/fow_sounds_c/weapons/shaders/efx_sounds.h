	// Rifle
	class FoW_Rifle_Tail {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\rifle_near_field1", 1},
					{"fow\fow_sounds\weapons\common\tail\rifle_near_field2", 1},
					{"fow\fow_sounds\weapons\common\tail\rifle_near_field3", 1}
					};
		volume = "(1-trees)*(1-houses)";
		range = 1800;
		rangeCurve[] = {{0, 0.4}, {20, 0.5}, {500, 0.6}, {1200, 0.35}, {1500, 0.25}};
		limitation = 0;
	};
	
	
	class FoW_Rifle_Tail_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\tail_field_distant_layer1", 1},
					{"fow\fow_sounds\weapons\common\tail\tail_field_distant_layer2", 1},
					{"fow\fow_sounds\weapons\common\tail\tail_field_distant_layer3", 1},
					{"fow\fow_sounds\weapons\common\tail\tail_field_distant_layer4", 1},
					{"fow\fow_sounds\weapons\common\tail\tail_field_distant_layer5", 1}
					
					};
		volume = "(1-interior)*(1-houses/1.2)*(1-forest)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {75, 0.15}, {150, 0.25}, {450, 0.32}, {1200, 0.16}, {2400, 0.1}};
		limitation = 0;
	};
	
	// MG
	class FoW_MG_Tail {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\lmg_near_field1", 1},
					{"fow\fow_sounds\weapons\common\tail\lmg_near_field2", 1},
					{"fow\fow_sounds\weapons\common\tail\lmg_near_field3", 1}
					};
		volume = "(1-trees)*(1-houses)";
		range = 1800;
		rangeCurve[] = {{0, 0.5}, {20, 0.55}, {500, 0.6}, {1200, 0.35}, {1500, 0.25}};
		limitation = 0;
	};
	//Pistol caliber (includes SMGs)
	
	class FoW_Pistol_Tail {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\pistol_near_field1", 1},
					{"fow\fow_sounds\weapons\common\tail\pistol_near_field2", 1},
					{"fow\fow_sounds\weapons\common\tail\pistol_near_field3", 1}
					};
		volume = "(1-trees)*(1-houses)";
		range = 1800;
		rangeCurve[] = {{0, 0.55}, {20, 0.65}, {500, 0.5}, {1200, 0.30}, {1500, 0.25}};
		limitation = 0;
	};

	// R. F. Near
	
	class FoW_Rifle_Near_Forest {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\rifle_near_forest3", 1},
					{"fow\fow_sounds\weapons\common\tail\rifle_near_forest2", 1},
					{"fow\fow_sounds\weapons\common\tail\rifle_near_forest3", 1}
					};
		volume = "forest*(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.9}, {50, 0}};
		limitation = 0;
	};

	
	class FoW_Rifle_Near_Forest_Ringoff {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\forest_ringoff1", 1},
					{"fow\fow_sounds\weapons\common\tail\forest_ringoff2", 1}
					};
		volume = "forest*(1-interior)";
		range = 75;
		rangeCurve[] = {{0, 0.75}, {75, 0}};
		limitation = 0;
	};

	
		// R. F. Far
	class FoW_Rifle_Far_Forest {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\tail_far_forest1", 1},
					{"fow\fow_sounds\weapons\common\tail\tail_far_forest2", 1},
					{"fow\fow_sounds\weapons\common\tail\tail_far_forest3", 1},
					{"fow\fow_sounds\weapons\common\tail\tail_far_forest4", 1}
					};
		volume = "forest*(1-interior)";
		range = 2400;
		rangeCurve[] = {{0, 0}, {20, 1.1}, {45, 1.6}, {150, 1.3}, {1200, 1}, {1800, 0.5}};
		limitation = 0;
	};
	
	class FoW_Rifle_Near_Houses {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\rifle_near_houses1", 1},
					{"fow\fow_sounds\weapons\common\tail\rifle_near_houses3", 1},
					{"fow\fow_sounds\weapons\common\tail\rifle_near_houses2", 1}
					};
		volume = "houses*(1-interior)";
		range = 40;
		rangeCurve[] = {{0, 0.99}, {40, 0}};
		limitation = 0;
	};
		// R. F. Houses
	class FoW_Rifle_Mid_Houses {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\rifle_mid_houses1", 1},
					{"fow\fow_sounds\weapons\common\tail\rifle_mid_houses2", 1},
					{"fow\fow_sounds\weapons\common\tail\rifle_mid_houses3", 1},
					{"fow\fow_sounds\weapons\common\tail\rifle_mid_houses4", 1},
					{"fow\fow_sounds\weapons\common\tail\rifle_mid_houses5", 1}
						};
		volume = "houses*(1-interior)";
		range = 350;
		rangeCurve[] = {{0, 0}, {20, 1}, {75, 1.2}, {180, 0.75}, {250, 0.65}};
		limitation = 0;
	};
	
	
	// SMG and Pistol
	
	
	class FoW_Pistol_Near_Forest {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\pistol_near_forest1", 1},
					{"fow\fow_sounds\weapons\common\tail\pistol_near_forest2", 1},
					{"fow\fow_sounds\weapons\common\tail\pistol_near_forest3", 1}
					};
		volume = "forest*(1-interior)";
		range = 30;
		rangeCurve[] = {{0, 0.9}, {25, 0.1}};
		limitation = 0;
	};
	class FoW_Pistol_Near_Houses {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\pistol_near_houses1", 1},
					{"fow\fow_sounds\weapons\common\tail\pistol_near_houses3", 1},
					{"fow\fow_sounds\weapons\common\tail\pistol_near_houses2", 1}
					};
		volume = "houses*(1-interior)";
		range = 25;
		rangeCurve[] = {{0, 0.99}, {25, 0}};
		limitation = 0;
	};
	
		class FoW_Pistol_Mid_Houses {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\pistol_mid_houses1", 1},
					{"fow\fow_sounds\weapons\common\tail\pistol_mid_houses2", 1},
					{"fow\fow_sounds\weapons\common\tail\pistol_mid_houses3", 1}
						};
		volume = "houses*(1-interior)";
		range = 300;
		rangeCurve[] = {{0, 0}, {22, 1}, {75, 1.2}, {180, 0.75}, {220, 0.45}};
		limitation = 0;
	};
	
	class FoW_Grenade_Tail_Far {
		samples[] = {{"fow\fow_sounds\explosions\grenade\grenade_tail_far1", 1}
					};
		volume = "(1-houses/1.3)*(1-forest/1.4)";
		range = 450;
		rangeCurve[] = {{0, 0}, {40, 0.5}, {100, 0.75}, {250, 0.5}, {400, 0.3}};
		limitation = 0;
	};

