	class FoW_MP40_Action {
		samples[] = {{"fow\fow_sounds\weapons\mp40\mp40_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.72}, {50, 0.0}};
		limitation = 0;
	};
	class FoW_MP40_1P {
		samples[] = {{"fow\fow_sounds\weapons\mp40\mp40_special1", 1}};
		volume = "(1-interior)";
		range = 1.0;
		rangeCurve[] = {{0, 0.65}, {1, 0.0}};
		limitation = 0;
	};
	class FoW_MP40_Near {
		samples[] = {{"fow\fow_sounds\weapons\mp40\mp40_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.55}, {40, 0}};
		limitation = 0;
	};
	
	class FoW_MP40_Mid {
		samples[] = {{"fow\fow_sounds\weapons\mp40\mp40_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.27}, {150, 0}};
		limitation = 0;
	};
