	class FoW_Snap_Close {
		samples[] = {{"fow\fow_sounds\bullet\air\rifle_crack_near1", 1},
					{"fow\fow_sounds\bullet\air\rifle_crack_near2", 1}
					};
		volume = "(1-interior)";
		range = 75;
		rangeCurve[] = {{0, 1.3}, {75, 0}};
		limitation = 0;
	};
	// Pistol cal.
	class FoW_Snap_Small_Close {
		samples[] = {{"fow\fow_sounds\bullet\air\crack_near_short1", 1},
					{"fow\fow_sounds\bullet\air\crack_near_short2", 1},
					{"fow\fow_sounds\bullet\air\crack_near_short3", 1}};
		volume = "(1-interior)";
		range = 15;
		rangeCurve[] = {{0, 1.2}, {30, 1}};
		limitation = 0;
	};
		
	class FoW_Snap_Far {
		samples[] = {{"fow\fow_sounds\bullet\air\rifle_crack_far1", 1},
					{"fow\fow_sounds\bullet\air\rifle_crack_far2", 1},
					{"fow\fow_sounds\bullet\air\rifle_crack_far3", 1}
					};
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {50, 1.5}, {120, 1.2}, {2700, 0.6}};
		limitation = 0;
	};
	
	class FoW_Snap_Dist {
		samples[] = {{"fow\fow_sounds\bullet\air\crack_distant1", 1},
					{"fow\fow_sounds\bullet\air\crack_distant2", 1},
					{"fow\fow_sounds\bullet\air\crack_distant3", 1}
					};
		volume = "(1-interior)";
		range = 4400;
		rangeCurve[] = {{0, 0}, {800, 0}, {2500, 1}, {4000, 0.1}};
		limitation = 0;
	};
	
	// Pistol cal.
	class FoW_Snap_Small_Far {
		samples[] = {{"fow\fow_sounds\bullet\air\smg_crack_far1", 1},
					{"fow\fow_sounds\bullet\air\smg_crack_far2", 1},
					{"fow\fow_sounds\bullet\air\smg_crack_far3", 1}};
		volume = "(1-interior)";
		range = 600;
		rangeCurve[] = {{0,0}, {50, 0}, {51, 1.4}, {600, 0.7}};
		limitation = 0;
	};
	
	class FoW_Snap_Tail {
		samples[] = {{"fow\fow_sounds\bullet\air\crack_tail1", 1}, {"fow\fow_sounds\bullet\air\crack_tail2", 1}, {"fow\fow_sounds\bullet\air\crack_tail3", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.5}, {15, 0.75}, {30, 0.45}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_Snap_Tail_Forest {
		samples[] = {{"fow\fow_sounds\bullet\air\crack_tail_forest1", 1}, {"fow\fow_sounds\bullet\air\crack_tail_forest2", 1}, {"fow\fow_sounds\bullet\air\crack_tail_forest3", 1}};
		volume = "forest*(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.8}, {50, 0}};
		limitation = 0;
	};
	
	class FoW_Snap_Tail_Houses {
		samples[] = {{"fow\fow_sounds\bullet\air\crack_tail_houses1", 1}, {"fow\fow_sounds\bullet\air\crack_tail_houses2", 1}, {"fow\fow_sounds\bullet\air\crack_tail_houses3", 1}};
		volume = "houses*(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.85}, {50, 0}};
		limitation = 0;
	};
	
	
	class FoW_Snap_Far_Tail {
		samples[] = {{"fow\fow_sounds\bullet\air\crack_tail_far1", 1}, {"fow\fow_sounds\bullet\air\crack_tail_far2", 1}, {"fow\fow_sounds\bullet\air\crack_tail_far3", 1}};
		volume = "(1-interior)";
		range = 2400;
		rangeCurve[] = {{0, 0}, {40, 0.65}, {1000, 1.2}, {2400, 0}};
		limitation = 0;
	};
	
	class FoW_Bullet_Pass {
		samples[] = {{"fow\fow_sounds\bullet\air\bullet_whizz_fast1", 1},
					{"fow\fow_sounds\bullet\air\bullet_whizz_fast2", 1},
					{"fow\fow_sounds\bullet\air\bullet_whizz_fast3", 1},
					{"fow\fow_sounds\bullet\air\bullet_whizz_fast4", 1},
					{"fow\fow_sounds\bullet\air\bullet_whizz_fast5", 1},
					{"fow\fow_sounds\bullet\air\bullet_whizz_fast6", 1}
					};
		volume = "(1-interior)";
		range = 30;
		rangeCurve[] = {{0, 1}, {30, 0.5}};
		limitation = 0;
	};
	// Pistol cal.
	class FoW_Bullet_Small_Pass {
		samples[] = {{"fow\fow_sounds\bullet\air\bullet_pass_slow1", 1},
					{"fow\fow_sounds\bullet\air\bullet_pass_slow2", 1},
					{"fow\fow_sounds\bullet\air\bullet_pass_slow3", 1}
					};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.5}, {50, 0}};
		limitation = 0;
	};

	class FoW_Snap_Layers {
		samples[] = {{"fow\fow_sounds\bullet\air\bullet_sine1", 1},
					{"fow\fow_sounds\bullet\air\n0", 1},
					{"fow\fow_sounds\bullet\air\bullet_sine2", 1},
					{"fow\fow_sounds\bullet\air\n0", 1},
					{"fow\fow_sounds\bullet\air\bullet_sine3", 1},
					{"fow\fow_sounds\bullet\air\n0", 1},
					{"fow\fow_sounds\bullet\air\bullet_sine4", 1}
					};
		volume = "(1-interior)";
		range = 70;
		rangeCurve[] = {{0, 0}, {17, 1}, {45, 0.65}};
		limitation = 0;
	};
	// Pistol cal. "scream"
	class FoW_Snap_Layers_Slow {
		samples[] = {{"fow\fow_sounds\bullet\air\n0", 0}
					};
		volume = "(1-interior)";
		range = 10;
		rangeCurve[] = {{0, 0.45}, {10, 0.15}};
		limitation = 0;
	};
	