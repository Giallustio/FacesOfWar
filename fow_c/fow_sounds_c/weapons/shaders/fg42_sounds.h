	class FoW_FG42_Action {
		samples[] = {{"fow\fow_sounds\weapons\fg42\fg42_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.67}, {50, 0.0}};
		limitation = 0;
	};
	class FoW_FG42_1P {
		samples[] = {{"fow\fow_sounds\weapons\fg42\fg42_special1", 1}};
		volume = 1;
		range = 1.2;
		rangeCurve[] = {{0, 0.65}, {0.5, 0.4}, {1, 0.2}};
		limitation = 0;
	};
	
	class FoW_FG42_Mid {
		samples[] = {{"fow\fow_sounds\weapons\bar\bar_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.2}, {150, 0.3}};
		limitation = 0;
	};
	
	class FoW_FG42_Near {
		samples[] = {{"fow\fow_sounds\weapons\fg42\fg42_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};
	
	
