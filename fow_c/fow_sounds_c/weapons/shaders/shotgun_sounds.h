
	class FoW_Shotgun_1P {
		samples[] = {{"fow\fow_sounds\weapons\shotgun\shotgun_special1", 1},
					{"fow\fow_sounds\weapons\shotgun\shotgun_special2", 1}
			};
		volume = 1;
		range = 1.5;
		rangeCurve[] = {{0, 0.9}};
		limitation = 0;
	};
	class FoW_Shotgun_Near {
		samples[] = {{"fow\fow_sounds\weapons\shotgun\shotgun_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.5}, {50, 0}};
		limitation = 0;
	};
	
	
	class FoW_Shotgun_Mid {
		samples[] = {{"fow\fow_sounds\weapons\shotgun\shotgun_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.25}, {150, 0}};
		limitation = 0;
	};


	class FoW_Shotgun_Far {
		samples[] = {{"fow\fow_sounds\weapons\shotgun\shotgun_fire_far", 1}};
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {70, 0}, {150, 1.4}, {2700, 0.6}};
		limitation = 0;
	};