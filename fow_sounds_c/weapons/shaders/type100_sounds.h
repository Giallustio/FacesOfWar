	class FoW_Type100_Action {
		samples[] = {{"fow\fow_sounds\weapons\type100\type100_action", 1}};
		volume = "(1-interior)";
		range = 30;
		rangeCurve[] = {{0, 0.64}, {30, 0.0}};
		limitation = 0;
	};
	class FoW_Type100_1P {
		samples[] = {{"fow\fow_sounds\weapons\type100\type100_special1", 1}};
		volume = "(1-interior)";
		range = 1;
		rangeCurve[] = {{0, 0.0}, {1, 0}};
		limitation = 0;
	};
	class FoW_Type100_Near {
		samples[] = {{"fow\fow_sounds\weapons\type100\type100_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.53}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_Type100_Mid {
		samples[] = {{"fow\fow_sounds\weapons\type100\type100_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.25}, {150, 0}};
		limitation = 0;
	};
