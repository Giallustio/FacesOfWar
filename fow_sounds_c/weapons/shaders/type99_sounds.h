	class FoW_Type99_Action {
		samples[] = {{"fow\fow_sounds\weapons\type99\type99_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.7}, {50, 0.0}};
		limitation = 0;
	};
	class FoW_Type99_1P {
		samples[] = {{"fow\fow_sounds\weapons\type99\type99_special", 1}};
		volume = "(1-interior)";
		range = 1;
		rangeCurve[] = {{0, 0.45}, {1, 0.0}};
		limitation = 0;
	};
	class FoW_Type99_Near {
		samples[] = {{"fow\fow_sounds\weapons\type99\type99_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_Type99_Mid {
		samples[] = {{"fow\fow_sounds\weapons\type99\type99_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.23}, {150, 0}};
		limitation = 0;
	};