	class FoW_Type92_Action {
		samples[] = {{"fow\fow_sounds\weapons\type92\type92_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.65}, {50, 0.0}};
		limitation = 0;
	};
	// ring goes here
	class FoW_Type92_Ring {
		samples[] = {{"fow\fow_sounds\weapons\type92\type92_ring1", 1},
					{"fow\fow_sounds\weapons\type92\type92_ring2", 1}
					};
		volume = 1;
		range = 5;
		rangeCurve[] = {{0, 0.35}, {4, 0.2}};
		limitation = 0;
	};
	class FoW_Type92_Near {
		samples[] = {{"fow\fow_sounds\weapons\type92\type92_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.53}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_Type92_Mid {
		samples[] = {{"fow\fow_sounds\weapons\type92\type92_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.2}, {150, 0}};
		limitation = 0;
	};

	class FoW_Type92_Action_Far {
		samples[] = {{"fow\fow_sounds\weapons\type92\type92_action_far", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 0.3}, {150, 0}};
		limitation = 0;
	};
	
	class FoW_Type92_Far {
		samples[] = {{"fow\fow_sounds\weapons\type92\type92_fire_far", 1}				
					};
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {70, 0}, {150, 1.2}, {2700, 0.6}};
		limitation = 0;
	};
