	class FoW_Rifle_Interior_Casings {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\rifle_casings1", 1},
					{"fow\fow_sounds\weapons\common\interior\rifle_casings2", 1},
					{"fow\fow_sounds\weapons\common\interior\rifle_casings3", 1},
					{"fow\fow_sounds\weapons\common\interior\rifle_casings4", 1},
					{"fow\fow_sounds\weapons\common\interior\rifle_casings5", 1}
					};
		volume = "interior";
		range = 10;
		rangeCurve[] = {{0, 0.6}, {10, 0}};
		limitation = 0;
	};
	
	
	class FoW_SMG_Interior_Casings {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\smg_casings1", 1},
					{"fow\fow_sounds\weapons\common\interior\smg_casings2", 1},
					{"fow\fow_sounds\weapons\common\interior\smg_casings3", 1},
					{"fow\fow_sounds\weapons\common\interior\smg_casings4", 1},
					{"fow\fow_sounds\weapons\common\interior\smg_casings5", 1}
					};
		volume = "interior";
		range = 10;
		rangeCurve[] = {{0, 0.6}, {10, 0}};
		limitation = 0;
	};
	
	class FoW_Rifle_Interior_Near {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\rifle_near1", 1},
					{"fow\fow_sounds\weapons\common\interior\rifle_near2", 1},
					{"fow\fow_sounds\weapons\common\interior\rifle_near3", 1}
					};
		volume = "interior";
		range = 10;
		rangeCurve[] = {{0, 1.5}, {7, 1}};
		limitation = 0;
	};
	
	
	class FoW_9mm_Interior_Near {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\9mm_interior_near", 1}};
		volume = "interior";
		range = 10;
		rangeCurve[] = {{0, 1.5}, {7, 1}};
		limitation = 0;
		
	};
	
	class FoW_SMG45_Interior_Near {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\45smg_interior_near", 1}};
		volume = "interior";
		range = 10;
		rangeCurve[] = {{0, 1.5}, {7, 1}};
		limitation = 0;
		
	};
	
	class FoW_Rifle_Interior_Attack {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\rifle_attack1", 1}};
		volume = "interior";
		range = 120;
		rangeCurve[] = {{0,0}, {3, 0}, {5, 1.35}, {100, 0}};
		limitation = 0;
	};
	
	class FoW_Rifle_Reverb_In_Mid {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\rifle_reverb1", 1},
					{"fow\fow_sounds\weapons\common\interior\rifle_reverb2", 1}};
		volume = "interior";
		range = 320;
		rangeCurve[] = {{0, 0}, {3, 0}, {5, 0.75}, {250, 0.4}};
		limitation = 0;
	};
	
	class FoW_45ACP_Reverb_In_Mid {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\45acp_reverb1", 1},
					{"fow\fow_sounds\weapons\common\interior\45acp_reverb2", 1}};
		volume = "interior";
		range = 280;
		rangeCurve[] = {{0, 0}, {3, 0}, {5, 0.65}, {220, 0.4}, {280, 0.2}};
		limitation = 0;
	};
	
	class FoW_9mm_Reverb_In_Mid {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\9mm_reverb1", 1},
					{"fow\fow_sounds\weapons\common\interior\9mm_reverb2", 1}};
		volume = "interior";
		range = 280;
		rangeCurve[] = {{0, 0}, {3, 0}, {5, 0.75}, {280, 0.2}};
		limitation = 0;
	};
	
	
	class FoW_Rifle_Reverb_In_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\rifle_reverb_far1", 1},
					{"fow\fow_sounds\weapons\common\interior\rifle_reverb_far2", 1}};
		volume = "interior";
		range = 2500;
		rangeCurve[] = {{0, 0}, {50, 0}, {75, 0.5}, {300, 0.7}, {2000, 0.3}};
		limitation = 0;
	};
	
	class FoW_Rifle_Interior_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\rifle_interior_pop1", 1},
					{"fow\fow_sounds\weapons\common\interior\rifle_interior_pop2", 1},
					{"fow\fow_sounds\weapons\common\interior\rifle_interior_pop3", 1}};
		volume = "interior";
		range = 3000;
		rangeCurve[] = {{0, 0}, {40, 0}, {80, 1.3}, {3000, 0.75}};
		limitation = 0;
	};
	
	class FoW_SMG_Interior_Attack {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\smg_attack", 1}};
		volume = "interior";
		range = 120;
		rangeCurve[] = {{0,0}, {3, 0}, {5, 1.35}, {100, 0}};
		limitation = 0;
	};	

	
	class FoW_9mm_Interior_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\9mm_interior_pop", 1}};
		volume = "interior";
		range = 3000;
		rangeCurve[] = {{0, 0}, {40, 0}, {80, 1.3}, {3000, 0.75}};
		limitation = 0;
	};
	
	class FoW_45ACP_Interior_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\45acp_interior_pop", 1}};
		volume = "interior";
		range = 3000;
		rangeCurve[] = {{0, 0}, {40, 0}, {80, 1.3}, {3000, 0.75}};
		limitation = 0;
	};
	
	class FoW_45ACP_Reverb_In_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\45acp_interior_tail_far1", 1},
					{"fow\fow_sounds\weapons\common\interior\45acp_interior_tail_far2", 1}};
		volume = "interior";
		range = 2500;
		rangeCurve[] = {{0, 0}, {50, 0}, {75, 0.5}, {300, 0.7}, {2000, 0.3}};
		limitation = 0;
	};
	
	class FoW_9mm_Reverb_In_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\9mm_interior_tail_far1", 1},
					{"fow\fow_sounds\weapons\common\interior\9mm_interior_tail_far2", 1}};
		volume = "interior";
		range = 2500;
		rangeCurve[] = {{0, 0}, {50, 0}, {75, 0.5}, {300, 0.7}, {2000, 0.3}};
		limitation = 0;
	};
	
	class FoW_MG_Interior_Far {
		samples[] = {{"fow\fow_sounds\weapons\common\interior\mg_interior_pop1", 1},
						{"fow\fow_sounds\weapons\common\interior\mg_interior_pop2", 1}
		};
		volume = "interior";
		range = 3000;
		rangeCurve[] = {{0, 0}, {3, 0}, {5, 1.35}, {120, 1.2}, {3000, 0.75}};
		limitation = 0;
	};
	