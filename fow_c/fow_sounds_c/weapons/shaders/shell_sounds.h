	// Mortars (81 and 60 mm are the same for now)
	// Actual explosions (bang)
	
	class FoW_Mortar_Explode_Near {
		samples[] = {{"fow\fow_sounds\explosions\arty\mortar_explode_near1", 1},
					{"fow\fow_sounds\explosions\arty\mortar_explode_near2", 1},
					{"fow\fow_sounds\explosions\arty\mortar_explode_near3", 1}
					};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0, 2.0}, {15, 1.55}, {50, 1.45}, {100, 0.85}, {150, 0.65}, {180, 0.35}};
		limitation = 0;
	};

	
	class FoW_Mortar_Explode_Far {
		samples[] = {{"fow\fow_sounds\explosions\arty\mortar_explode_far", 1}
					};
		volume = 1;
		range = 4000;
		rangeCurve[] = {{0, 0}, {150, 1.6}, {450, 1.35}, {1300, 1}, {2600, 0.75}, {3400, 0.25}};
		limitation = 0;
	};

	// Release (whoosh) sounds
	
	class FoW_Mortar_Release_Near {
		samples[] = {{"fow\fow_sounds\explosions\arty\mortar_release_near1", 1},
					{"fow\fow_sounds\explosions\arty\mortar_release_near2", 1},
					{"fow\fow_sounds\explosions\arty\mortar_release_near4", 1},
					{"fow\fow_sounds\explosions\arty\mortar_release_near5", 1}
					};
		volume = "(1-forest/1.4)*(1-houses/1.4)";
		range = 250;
		rangeCurve[] = {{0, 0.75}, {150, 0.55}, {220, 0.25}};
		limitation = 0;
	};
	
	class FoW_Mortar_Release_Near_Forest {
		samples[] = {{"fow\fow_sounds\explosions\arty\mortar_release_near_forest2", 1},
					{"fow\fow_sounds\explosions\arty\mortar_release_near_forest1", 1},
					{"fow\fow_sounds\explosions\arty\mortar_release_near_forest4", 1},
					{"fow\fow_sounds\explosions\arty\mortar_release_near_forest3", 1}
					};
		volume = "forest";
		range = 350;
		rangeCurve[] = {{0, 0.85}, {150, 0.75}, {250, 0.55}};
		limitation = 0;
	};
	
	class FoW_Mortar_Release_Far {
		samples[] = {{"fow\fow_sounds\explosions\arty\mortar_release_far1", 1},
					{"fow\fow_sounds\explosions\arty\mortar_release_far2", 1},
					{"fow\fow_sounds\explosions\arty\mortar_release_far3", 1}
					};
		volume = "(1-forest/1.4)*(1-houses/1.4)";
		range = 3600;
		rangeCurve[] = {{0, 0}, {100, 0.7}, {500, 0.65}, {1400, 0.35}, {3600, 0}};
		limitation = 0;
	};
	
	
	class FoW_Mortar_Release_Far_Forest {
		samples[] = {{"fow\fow_sounds\explosions\arty\mortar_release_far_forest1", 1},
					{"fow\fow_sounds\explosions\arty\mortar_release_far_forest2", 1}
					};
		volume = "forest";
		range = 3600;
		rangeCurve[] = {{0, 0}, {100, 0.7}, {500, 0.65}, {1400, 0.35}, {3600, 0}};
		limitation = 0;
	};
	
	
	// Debris and frag layers
	
	class FoW_Mortar_Frag_Debris {
		samples[] = {{"fow\fow_sounds\explosions\shrapnel\frag_near1", 1},
					{"fow\fow_sounds\explosions\shrapnel\frag_near2", 1},
					{"fow\fow_sounds\explosions\shrapnel\frag_near3", 1},
					{"fow\fow_sounds\explosions\shrapnel\frag_near4", 1},
					{"fow\fow_sounds\explosions\shrapnel\frag_near5", 1}
		};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0, 0.65}, {250, 0}};
		limitation = 0;
	};
	
	class FoW_Mortar_Frag_Far {
		samples[] = {{"fow\fow_sounds\explosions\shrapnel\rico_far1", 1},
					{"fow\fow_sounds\explosions\shrapnel\rico_far2", 1},
					{"fow\fow_sounds\explosions\shrapnel\rico_far3", 1},
					{"fow\fow_sounds\explosions\shrapnel\rico_far4", 1},
					{"fow\fow_sounds\explosions\shrapnel\rico_far5", 1},
					{"fow\fow_sounds\explosions\shrapnel\rico_far6", 1},
					{"fow\fow_sounds\explosions\shrapnel\rico_far7", 1},
					{"fow\fow_sounds\explosions\shrapnel\rico_far8", 1}
					};
		volume = 1;
		range = 1200;
		rangeCurve[] = {{0, 0}, {300, 0.85}, {650, 0.65}, {900, 0.4}, {1200, 0}};
		limitation = 0;
	};
	
	
	class FoW_Mortar_Tail {
		samples[] = {{"fow\fow_sounds\explosions\arty\mortar_tail1", 1},
					{"fow\fow_sounds\explosions\arty\mortar_tail2", 1},
					{"fow\fow_sounds\explosions\arty\mortar_tail3", 1}
					};
		volume = "(1-forest/1.6)*(1-houses/1.4)";
		range = 1600;
		rangeCurve[] = {{0, 0.35}, {250, 1.25}, {1000, 0.4}};
		limitation = 0;
	};
