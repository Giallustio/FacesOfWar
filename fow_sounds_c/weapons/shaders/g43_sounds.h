	class FoW_G43_Action {
		samples[] = {{"fow\fow_sounds\weapons\g43\g43_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.65}, {50, 0.0}};
		limitation = 0;
	};
	class FoW_G43_1P {
		samples[] = {{"fow\fow_sounds\weapons\g43\g43_special1", 1},
					{"fow\fow_sounds\weapons\g43\g43_special2", 1}
					};
		volume = 1;
		range = 1.2;
		rangeCurve[] = {{0, 0.65}, {0.5, 0.3}, {1, 0.15}};
		limitation = 0;
	};
	
	class FoW_G43_Mid {
		samples[] = {{"fow\fow_sounds\weapons\g43\g43_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.2}, {150, 0.3}};
		limitation = 0;
	};
	
	class FoW_G43_Near {
		samples[] = {{"fow\fow_sounds\weapons\kar98\kar98_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};
	
	
