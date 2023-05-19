	class FoW_Rifle_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\distant_fire\rifle_fire_far1", 1},
					{"fow\fow_sounds\weapons\common\distant_fire\rifle_fire_far2", 1},
					{"fow\fow_sounds\weapons\common\distant_fire\rifle_fire_far3", 1}
					};
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {70, 0}, {150, 1.2}, {2700, 0.6}};
		limitation = 0;
	};
	
	class FoW_MG_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\distant_fire\mg_fire_far1", 1}
					};
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {70, 0}, {150, 1.2}, {2700, 0.6}};
		limitation = 0;
	};
	
	class FoW_MG_Far2 {
		samples[] = {{"fow\fow_sounds\weapons\common\distant_fire\mg_fire_far2", 1}				
					};
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {70, 0}, {150, 1.2}, {2700, 0.6}};
		limitation = 0;
	};
	
	class FoW_MG_Far3 {
		samples[] = {{"fow\fow_sounds\weapons\common\distant_fire\mg_fire_far3", 1}
					};
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {70, 0}, {150, 1.2}, {2700, 0.6}};
		limitation = 0;
	};
	
	class FoW_9mm_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\distant_fire\9mm_fire_far", 1}
		};
		volume = "(1-interior)";
		range = 2800;
		rangeCurve[] = {{0, 0}, {70, 0}, {150, 1.15}, {2700, 0.58}};
		limitation = 0;
	};
	
	class FoW_45ACP_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\distant_fire\45acp_fire_far", 1}
		};
		volume = "(1-interior)";
		range = 2800;
		rangeCurve[] = {{0, 0}, {70, 0}, {150, 1.12}, {2700, 0.54}};
		limitation = 0;
	};
	
	
	class FoW_Carbine_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\distant_fire\carbine_fire_far", 1}
					 };
		volume = "(1-interior)";
		range = 3000;
		rangeCurve[] = {{0, 0}, {70, 0}, {150, 1.2}, {2700, 0.55}};
		limitation = 0;
	};
	// This is basically a sweetener (makes the sound "cooler", more dynamic) for the Bolt-Action Rifles
	class FoW_DarkTails {
		samples[] = {{"fow\fow_sounds\weapons\common\tail\dark_tail1", 1},
					{"fow\fow_sounds\weapons\common\tail\dark_tail2", 1}
						};
		volume = "(1-interior)";
		range = 30;
		rangeCurve[] = {{0, 0.13}, {30, 0.0}};
		limitation = 0;
	};
	
	
	class FoW_Crackle {
		samples[] = {{"fow\fow_sounds\bullet\air\crackle1", 1},
					//{"fow\fow_sounds\bullet\air\n0", 1},
					{"fow\fow_sounds\bullet\air\crackle3", 1},
					{"fow\fow_sounds\bullet\air\crackle2", 1},
					{"fow\fow_sounds\bullet\air\crackle4", 1},
					{"fow\fow_sounds\bullet\air\crackle5", 1},
					{"fow\fow_sounds\bullet\air\crackle_mg3", 1},
					{"fow\fow_sounds\bullet\air\crackle_mg2", 1},
					{"fow\fow_sounds\bullet\air\crackle_mg4", 1},
					{"fow\fow_sounds\bullet\air\crackle_mg5", 1},
					{"fow\fow_sounds\bullet\air\crackle_mg1", 1},
					{"fow\fow_sounds\bullet\air\crackle_mg6", 1},
					{"fow\fow_sounds\bullet\air\crackle6", 1}
					};
		volume = "(1-interior)";
		range = 700;
		rangeCurve[] = {{0, 0}, {200, 0}, {350, 1}, {500, 0.74}};
		limitation = 0;
	};

	