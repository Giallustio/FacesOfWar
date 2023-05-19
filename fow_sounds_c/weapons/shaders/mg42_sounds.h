	class FoW_MG42_Action {
		samples[] = {{"fow\fow_sounds\weapons\mg42\mg42_action", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 0.6}, {50, 0.0}};
		limitation = 0;
	};

	class FoW_MG42_1P {
		samples[] = {{"fow\fow_sounds\weapons\mg42\mg42_special1", 1},
					{"fow\fow_sounds\weapons\mg42\mg42_special2", 1},
					{"fow\fow_sounds\weapons\mg42\mg42_special3", 1}
					};
		volume = "(1-interior)";
		range = 15;
		rangeCurve[] = {{0, 0.5}};
		limitation = 0;
	};
	class FoW_MG42_Near {
		samples[] = {{"fow\fow_sounds\weapons\mg42\mg42_fire_near", 1}};
		volume = "(1-interior)";
		range = 50;
		rangeCurve[] = {{0, 1.52}, {50, 0}};
		limitation = 0;
	};

	class FoW_MG42_Mid {
		samples[] = {{"fow\fow_sounds\weapons\mg42\mg42_fire_mid", 1}};
		volume = "(1-interior)";
		range = 150;
		rangeCurve[] = {{0, 0}, {25, 1.27}, {150, 0.3}};
		limitation = 0;
	};

	
	class FoW_MG42_Far {
		samples[] = {{"fow\fow_sounds\weapons\mg42\mg42_fire_far1", 1},
					{"fow\fow_sounds\weapons\mg42\mg42_fire_far2", 1},
					{"fow\fow_sounds\weapons\mg42\mg42_fire_far3", 1}
					};
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {75, 0}, {150, 1.2}, {2700, 0.75}};
		limitation = 0;
	};


	
	class FoW_MG42_Interior_Near {
		samples[] = {{"fow\fow_sounds\weapons\mg42\mg42_interior", 1}};
		volume = "interior";
		range = 10;
		rangeCurve[] = {{0, 1.5}, {7, 1}};
		limitation = 0;
	};	
	
	class FoW_MG42_Reverb_In {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\mg42_interior_reverb1", 1},
					{"fow\fow_sounds\weapons\common\interior\mg42_interior_reverb2", 1}};
		volume = "interior";
		range = 120;
		rangeCurve[] = {{0, 0.8}, {10, 0.5}, {100, 0.2}};
		limitation = 0;
	};
	
	class FoW_MG42_Reverb_In_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\mg42_interior_far_tail", 1}};
		volume = "interior";
		range = 2500;
		rangeCurve[] = {{0, 0}, {50, 0}, {75, 0.7}, {300, 0.5}, {2000, 0.3}};
		limitation = 0;
	};
	
	class FoW_MG42_Interior_Attack {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\mg42_attack", 1}};
		volume = "interior";
		range = 120;
		rangeCurve[] = {{0,0}, {3, 0}, {5, 1.35}, {100, 0}};
		limitation = 0;
	};
	
	class FoW_MG42_Interior_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\mg42_interior_pop1", 1},
		{"fow\fow_sounds\weapons\common\interior\mg42_interior_pop2", 1}};
		volume = "interior";
		range = 3000;
		rangeCurve[] = {{0, 0}, {40, 0}, {80, 1.3}, {3000, 0.75}};
		limitation = 0;
	};
	
	class FoW_MG42_Interior_Chain {
			samples[] = {{"fow\fow_sounds\weapons\mg42\casing_room1", 1},
					{"fow\fow_sounds\weapons\mg42\casing_room2", 1},
					{"fow\fow_sounds\weapons\mg42\casing_room3", 1},
					{"fow\fow_sounds\weapons\mg42\chain_interior1", 1},
					{"fow\fow_sounds\weapons\mg42\chain_interior2", 1},
					{"fow\fow_sounds\weapons\mg42\chain_interior3", 1}
					};
		volume = "interior";
		range = 8;
		rangeCurve[] = {{0, 0.6}, {7, 0}};
		limitation = 0;
	};