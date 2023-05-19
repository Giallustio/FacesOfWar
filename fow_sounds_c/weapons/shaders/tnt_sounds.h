	// Actual explosions (bang)
	
	class FoW_TNT_Near {
		samples[] = {{"fow\fow_sounds\explosions\tnt\tnt_explode_near", 1}
					};
		volume = 1;
		range = 150;
		rangeCurve[] = {{0, 1.5}, {30, 2}, {55, 1.2}, {75, 0.7}, {115, 0.4}};
		limitation = 0;
	};

	
	class FoW_TNT_Medium {
		samples[] = {{"fow\fow_sounds\explosions\tnt\tnt_explode_mid", 1}
					};
		volume = 1;
		range = 2600;
		rangeCurve[] = {{0, 0}, {40, 1.4}, {250, 1.7}, {1600, 1.3}, {2200, 1}};
		limitation = 0;
	};

	
	// Release (whoosh) sounds
	
	class FoW_TNT_Release {
		samples[] = {{"fow\fow_sounds\explosions\tnt\tnt_release_near", 1},
					{"fow\fow_sounds\explosions\tnt\tnt_release_near2", 1}
					};
		volume = "(1-forest)*(1-houses/1.4)";
		range = 120;
		rangeCurve[] = {{0, 0.65}, {50, 1}, {100, 0.4}};
		limitation = 0;
	};
	
	
