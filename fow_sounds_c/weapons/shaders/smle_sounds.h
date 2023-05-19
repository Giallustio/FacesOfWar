
	class FoW_SMLE_Near {
		samples[] = {{"fow\fow_sounds\weapons\smle\smle_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};
	// Placeholder
	class FoW_SMLE_Mid {
		samples[] = {{"fow\fow_sounds\weapons\garand\garand_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.2}, {150, 0.3}};
		limitation = 0;
	};

	class FoW_SMLE_1P {
		samples[] = {{"fow\fow_sounds\weapons\smle\smle_trig", 1}};
		volume = 1;
		range = 1;
		rangeCurve[] = {{0, 0.01}, {0,0}};
		limitation = 0;
	};