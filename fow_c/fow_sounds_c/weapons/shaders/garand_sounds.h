	class FoW_Garand_Action {
		samples[] = {{"fow\fow_sounds\weapons\garand\garand_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.55}, {50, 0.0}};
		limitation = 0;
	};
	class FoW_Garand_1P {
		samples[] = {{"fow\fow_sounds\weapons\garand\garand_special2", 1},
					{"fow\fow_sounds\weapons\garand\garand_special3", 1}
			};
		volume = 1;
		range = 1.2;
		rangeCurve[] = {{0, 0.65}, {0.4, 0.35}, {1, 0.1}};
		limitation = 0;
	};
	class FoW_Garand_Near {
		samples[] = {{"fow\fow_sounds\weapons\garand\garand_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};
	
	
	class FoW_Garand_Mid {
		samples[] = {{"fow\fow_sounds\weapons\garand\garand_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.2}, {150, 0}};
		limitation = 0;
	};

// Ping
	
	class FoW_Garand_Ping_Near {
		samples[] = {{"fow\fow_sounds\weapons\garand\garand_ping", 1},
					{"fow\fow_sounds\weapons\garand\garand_ping2", 1},
					{"fow\fow_sounds\weapons\garand\garand_ping3", 1}
		};
		volume = 1;
		range = 25;
		rangeCurve[] = {{0, 1.5}, {10, 0.75}, {25, 0}};
		limitation = 0;
	};
	class FoW_Garand_Ping_Far {
		samples[] = {{"fow\fow_sounds\weapons\garand\garand_ping_far", 1}};
		volume = 1;
		range = 30;
		rangeCurve[] = {{0, 0}, {20, 0.7}, {30, 0}};
		limitation = 0;
	};
	
