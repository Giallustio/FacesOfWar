	class FoW_BREN_Action {
		samples[] = {{"fow\fow_sounds\weapons\bren\bren_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.69}, {50, 0.0}};
		limitation = 0;
	};
	class FoW_BREN_1P {
		samples[] = {{"fow\fow_sounds\weapons\bren\bren_special3", 1}};
		volume = "(1-interior)";
		range = 1.5;
		rangeCurve[] = {{0, 0.75}, {0.9, 0.5}, {1.2, 0.25}};
		limitation = 0;
	};
	class FoW_BREN_Near {
		samples[] = {{"fow\fow_sounds\weapons\bren\bren_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_BREN_Mid {
		samples[] = {{"fow\fow_sounds\weapons\bren\bren_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.25}, {150, 0}};
		limitation = 0;
	};
	
	class FoW_Bren_Interior_Near {
		samples[] = {{"fow\fow_sounds\weapons\bren\bren_interior_near", 1}};
		volume = "interior";
		range = 10;
		rangeCurve[] = {{0, 1.5}, {7, 1}};
		limitation = 0;
	};
	