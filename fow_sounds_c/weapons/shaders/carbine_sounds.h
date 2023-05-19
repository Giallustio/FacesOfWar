	class FoW_Carbine_Action {
		samples[] = {{"fow\fow_sounds\weapons\carbine\carbine_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.73}, {50, 0.0}};
		limitation = 0;
	};
	
	class FoW_Carbine_1P {
		samples[] = {
						{"fow\fow_sounds\weapons\carbine\carbine_special1", 1}
					};
					
		volume = "(1-interior)";
		range = 1;
		rangeCurve[] = {{0, 0.7}, {1, 0}};
		limitation = 0;
	};
	class FoW_Carbine_Near {
		samples[] = {{"fow\fow_sounds\weapons\carbine\carbine_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.5}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_Carbine_Mid {
		samples[] = {{"fow\fow_sounds\weapons\carbine\carbine_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.112}, {150, 0}};
		limitation = 0;
	};
	// Int
	class FoW_Carbine_Interior_Near {
		samples[] = {{"fow\fow_sounds\weapons\carbine\carbine_interior_near", 1}};
		volume = "interior";
		range = 10;
		rangeCurve[] = {{0, 1.5}, {7, 1}};
		limitation = 0;
	};	