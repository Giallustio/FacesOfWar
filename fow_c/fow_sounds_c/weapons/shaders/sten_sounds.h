	class FoW_Sten_1P {
		samples[] = {{"fow\fow_sounds\weapons\sten\sten_special1", 1}, {"fow\fow_sounds\weapons\sten\sten_special2", 1}};
		volume = "(1-interior)";
		range = 0.8;
		rangeCurve[] = {{0, 0.78}, {0.29, 0.48}, {0.5, 0.35}};
		limitation = 0;
	};
	
	class FoW_Sten_Action {
		samples[] = {{"fow\fow_sounds\weapons\sten\sten_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.75}, {30, 0.25}, {50, 0.0}};
		limitation = 0;
	};

	class FoW_Sten_Near {
		samples[] = {{"fow\fow_sounds\weapons\sten\sten_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.55}, {50, 0}};
		limitation = 0;
	};