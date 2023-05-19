	class FoW_M1919_Action {
		samples[] = {{"fow\fow_sounds\weapons\m1919\m1919_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.65}, {50, 0.0}};
		limitation = 0;
	};

	class FoW_M1919_Near {
		samples[] = {{"fow\fow_sounds\weapons\m1919\m1919_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};

	class FoW_M1919_1P {
		
		samples[] = {{"fow\fow_sounds\weapons\m1919\mg_belt1", 1},
					{"fow\fow_sounds\weapons\m1919\mg_belt2", 1},
					{"fow\fow_sounds\weapons\m1919\mg_belt3", 1},
					{"fow\fow_sounds\weapons\m1919\mg_belt4", 1},
					{"fow\fow_sounds\weapons\m1919\mg_belt5", 1},
					{"fow\fow_sounds\weapons\m1919\mg_belt6", 1}
					};
		volume = "(1-interior)";
		range = 45;
		rangeCurve[] = {{0, 0.6}, {35, 0.25}};
		limitation = 0;
	};
	
	class FoW_M1919_Mid {
		samples[] = {{"fow\fow_sounds\weapons\m1919\m1919_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.2}, {150, 0}};
		limitation = 0;
	};
	
	class FoW_M1919_Far {
		samples[] = {{"fow\fow_sounds\weapons\m1919\m1919_fire_far", 1}};
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {50, 0}, {120, 1.2}, {2700, 0.6}};
		limitation = 0;
	};
	
