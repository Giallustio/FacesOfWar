	class FoW_Bar_Action {
		samples[] = {{"fow\fow_sounds\weapons\bar\bar_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.73}, {50, 0.0}};
		limitation = 0;
	};
	class FoW_Bar_1P {
		samples[] = {{"fow\fow_sounds\weapons\bar\bar_special1", 1},
					{"fow\fow_sounds\weapons\bar\bar_special2", 1}
					};
		volume = "(1-interior)";
		range = 4.5;
		rangeCurve[] = {{0, 0.55}, {2.85, 0.35}};
		limitation = 0;
	};
	class FoW_Bar_Near {
		samples[] = {{"fow\fow_sounds\weapons\bar\bar_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_Bar_Mid {
		samples[] = {{"fow\fow_sounds\weapons\bar\bar_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.2}, {150, 0}};
		limitation = 0;
	};
	
	class FoW_BAR_Interior_Near {
		samples[] = {{"fow\fow_sounds\weapons\bar\bar_interior_near", 1}};
		volume = "interior";
		range = 10;
		rangeCurve[] = {{0, 1.5}, {7, 1}};
		limitation = 0;
	};	
	
	class FoW_BAR_Far {
		samples[] = {{"fow\fow_sounds\weapons\bar\bar_fire_far", 1}};	
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {50, 0}, {120, 1.2}, {2700, 0.6}};
		limitation = 0;
	};