
	class FoW_M1911_Action {
		samples[] = {{"fow\fow_sounds\weapons\m1911\m1911_action", 1}
				};
		volume = "(1-interior)";
		range = 30;
		rangeCurve[] = {{0, 0.73}, {15, 0.4}, {28, 0.1}};
		limitation = 0;
	};
	class FoW_M1911_Near {
		samples[] = {{"fow\fow_sounds\weapons\m1911\m1911_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.6}, {20, 1.15}, {40, 0.25}};
		limitation = 0;
	};
	
/*	class FoW_45ACP_Far { MID KELL IDE
		samples[] = {{"fow\fow_sounds\weapons\m1911\45acp_far", 1}};
		volume = "(1-interior)";
		range = 450;
		rangeCurve[] = {{0, 0}, {15, 0}, {30, 1.05}, {100, 0.8}, {200, 0.65}, {400, 0.25}};
		limitation = 0;
	};*/
	
	class FoW_M1911_Interior_Near {
		samples[] = {{"fow\fow_sounds\weapons\m1911\m1911_interior_near", 1}};
		volume = "interior";
		range = 10;
		rangeCurve[] = {{0, 1.5}, {7, 1}};
		limitation = 0;
		};