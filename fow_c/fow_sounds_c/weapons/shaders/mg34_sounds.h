	class FoW_MG34_Action {
		samples[] = {{"fow\fow_sounds\weapons\mg34\mg34_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.7}, {50, 0.0}};
		limitation = 0;
	};

	class FoW_MG34_Near {
		samples[] = {{"fow\fow_sounds\weapons\mg34\mg34_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};

	class FoW_MG34_Mid {
		samples[] = {{"fow\fow_sounds\weapons\mg34\mg34_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.27}, {150, 0.3}};
		limitation = 0;
	};
	
	class FoW_MG34_Far {
		samples[] = {{"fow\fow_sounds\weapons\mg42\mg42_fire_far2", 1}
					};
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {75, 0}, {150, 1.2}, {2700, 0.75}};
		limitation = 0;
	};

