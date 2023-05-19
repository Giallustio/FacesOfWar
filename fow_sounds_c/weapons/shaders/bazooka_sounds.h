	class FoW_Bazooka_Near {
		samples[] = {{"fow\fow_sounds\weapons\bazooka\bazooka_fire_near", 1}};
		volume = 1;
		range = 50;
		rangeCurve[] = {{0, 1.5}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_Bazooka_Release_Near {
		samples[] = {{"fow\fow_sounds\weapons\bazooka\bazooka_release", 1}};
		volume = 1;
		range = 50;
		rangeCurve[] = {{0, 0.88}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_Bazooka_Mid {
		samples[] = {{"fow\fow_sounds\weapons\bazooka\bazooka_fire_mid", 1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0, 0}, {50, 1.5}, {450, 1.2}, {1700, 0.4}};
		limitation = 0;
	};


	class FoW_Bazooka_Release_Mid {
		samples[] = {{"fow\fow_sounds\weapons\bazooka\bazooka_release_mid", 1}};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0, 0}, {60, 0.75}, {100, 1.1}, {450, 1}, {1700, 0.1}};
		limitation = 0;
	};
	
	class FoW_Bazooka_Ring {
		samples[] = {{"fow\fow_sounds\weapons\bazooka\bazooka_ring2", 1},
					{"fow\fow_sounds\weapons\bazooka\bazooka_ring1", 1}
			};
		volume = 1;
		range = 20;
		rangeCurve[] = {{0, 0.3}, {20, 0}};
		limitation = 0;
	};
	
