
	class FoW_Webley_Near {
		samples[] = {{"fow\fow_sounds\weapons\webley\webley_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.5}, {20, 1.15}, {40, 0.25}};
		limitation = 0;
	};
	
	class FoW_Webley_Action {
		samples[] = {{"fow\fow_sounds\weapons\webley\webley_action", 1}};
		volume = "(1-interior)";
		range = 5;
		rangeCurve[] = {{0, 0.6}, {3, 0.35}};
		limitation = 0;
	};
	class FoW_Webley_Mid {
		samples[] = {{"fow\fow_sounds\weapons\webley\webley_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		SHOT_MID;
		limitation = 0;
	};
