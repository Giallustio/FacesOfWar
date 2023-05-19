	// 7.5 cm KWK
	class FoW_75mm_Near {
		samples[] = {{"fow\fow_sounds\weapons\cannon\75mm_attack", 1}
					};
		volume = 1;
		range = 200;
		rangeCurve[] = {{0, 1.25}, {200, 0}};
		limitation = 0;
	};
	
	
	class FoW_75mm_Release {
		samples[] = {{"fow\fow_sounds\weapons\cannon\75mm_release", 1}
					};
		volume = 1;
		range = 200;
		rangeCurve[] = {{0, 1}, {100, 0.65}, {175, 0.25}};
		limitation = 0;
	};
	
	
	class FoW_Metallic_Ring {
		samples[] = {{"fow\fow_sounds\weapons\cannon\metallic_ring", 1}
					};
		volume = 1;
		range = 30;
		rangeCurve[] = {{0, 0.5}, {30, 0}};
		limitation = 0;
	};
	
	
	class FoW_Pak_Recoil {
		samples[] = {{"fow\fow_sounds\weapons\cannon\pak40_recoil1", 1},
					{"fow\fow_sounds\weapons\cannon\pak40_recoil2", 1}
					};
		volume = 1;
		range = 50;
		rangeCurve[] = {{0, 0.65}, {30, 0}};
		limitation = 0;
	};
	
	// Mortar variant #1
	class FoW_Mortar_Base1 {
		samples[] = {{"fow\fow_sounds\weapons\mortar\set1\mortar_base", 1}
					};
		volume = 1;
		range = 150;
		rangeCurve[] = {{0, 1.15}, {150, 0}};
		limitation = 0;
	};
	
	
	class FoW_Mortar_Shot1 {
		samples[] = {{"fow\fow_sounds\weapons\mortar\set1\mortar_shot", 1}
					};
		volume = 1;
		range = 150;
		rangeCurve[] = {{0, 1.3}, {150, 0}};
		limitation = 0;
	};
	
	class FoW_Mortar_Rattle1 {
		samples[] = {{"fow\fow_sounds\weapons\mortar\set1\mortar_rattle", 1}
					};
		volume = 1;
		range = 150;
		rangeCurve[] = {{0, 0.68}, {150, 0}};
		limitation = 0;
	};
	
	// Mortar variant #2
	class FoW_Mortar_Base2 {
		samples[] = {{"fow\fow_sounds\weapons\mortar\set2\mortar_base", 1}
					};
		volume = 1;
		range = 150;
		rangeCurve[] = {{0, 1.15}, {150, 0}};
		limitation = 0;
	};
	
	
	class FoW_Mortar_Shot2 {
		samples[] = {{"fow\fow_sounds\weapons\mortar\set2\mortar_shot", 1}
					};
		volume = 1;
		range = 150;
		rangeCurve[] = {{0, 1.3}, {150, 0}};
		limitation = 0;
	};
	
	class FoW_Mortar_Rattle2 {
		samples[] = {{"fow\fow_sounds\weapons\mortar\set2\mortar_rattle", 1}
					};
		volume = 1;
		range = 150;
		rangeCurve[] = {{0, 0.68}, {150, 0}};
		limitation = 0;
	};

	
	class FoW_Mortar_Ring {
		samples[] = {{"fow\fow_sounds\weapons\mortar\mortar_ring1", 1},
					{"fow\fow_sounds\weapons\mortar\mortar_ring2", 1},
					{"fow\fow_sounds\weapons\mortar\mortar_ring3", 1}
					};
		volume = 1;
		range = 50;
		rangeCurve[] = {{0, 0.25}, {50, 0}};
		limitation = 0;
	};
	
	// Shell trail
	class FoW_Mortar_Shells_Out {
		samples[] = {{"fow\fow_sounds\weapons\mortar\mortarshell_out1", 1},
					{"fow\fow_sounds\weapons\mortar\mortarshell_out2", 1},
					{"fow\fow_sounds\weapons\mortar\mortarshell_out3", 1}
					};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0, 0}, {75, 1}, {250, 0}};
		limitation = 0;
	};
	
	class FoW_Mortar_Tail {
		samples[] = {{"fow\fow_sounds\weapons\mortar\set1\tail_normal", 1}
					};
		volume = "(1-forest/1.6)*(1-houses/1.4)";
		range = 300;
		rangeCurve[] = {{0, 0.5}, {120, 0.35}, {250, 0.12}};
		limitation = 0;
	};
	
	class FoW_Mortar_Tail_Forest {
		samples[] = {{"fow\fow_sounds\weapons\mortar\set1\tail_forest", 1}
					};
		volume = "forest";
		range = 300;
		rangeCurve[] = {{0, 0.65}, {120, 0.45}, {250, 0.18}};
		limitation = 0;
	};