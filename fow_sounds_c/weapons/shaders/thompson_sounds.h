	class FoW_Thompson_Action {
		samples[] = {{"fow\fow_sounds\weapons\thompson\thompson_action", 1}};
		volume = "(1-interior)";
		range = 30;
		rangeCurve[] = {{0, 0.78}, {30, 0.0}};
		limitation = 0;
	};
	class FoW_Thompson_1P {
		samples[] = {
					{"fow\fow_sounds\weapons\thompson\thompson_special1", 1},
					{"fow\fow_sounds\weapons\thompson\thompson_special2", 1},		
					{"fow\fow_sounds\weapons\thompson\thompson_special3", 1}		
					};
		volume = "(1-interior)";
		range = 1;
		rangeCurve[] = {{0, 0.4}, {1, 0}};
		limitation = 0;
	};
	class FoW_Thompson_Near {
		samples[] = {{"fow\fow_sounds\weapons\thompson\thompson_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_Thompson_Mid {
		samples[] = {{"fow\fow_sounds\weapons\thompson\thompson_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		SHOT_MID;
		limitation = 0;
	};