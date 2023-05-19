	// Actual explosions (bang)
	
	class FoW_Grenade_Near {
		samples[] = {{"fow\fow_sounds\explosions\grenade\grenade_punch1", 1},
						{"fow\fow_sounds\explosions\grenade\grenade_punch2", 1}
					};
		volume = 1;
		range = 150;
		rangeCurve[] = {{0, 1.5}, {30, 2}, {55, 1.2}, {75, 0.7}, {115, 0.4}};
		limitation = 0;
	};

	
	
	class FoW_Grenade_Far {
		samples[] = {{"fow\fow_sounds\explosions\grenade\grenade_punch_far3", 1}
					};
		volume = 1;
		range = 2600;
		rangeCurve[] = {{0, 0}, {40, 1.5}, {250, 1.7}, {1600, 1.5}, {2200, 1.15}};
		limitation = 0;
	};
	

	
	// Long trailoff	
		
	class FoW_Grenade_Tail {
		samples[] = {{"fow\fow_sounds\explosions\grenade\grenade_tail1", 1},
					{"fow\fow_sounds\explosions\grenade\grenade_tail2", 1},
					{"fow\fow_sounds\explosions\grenade\grenade_tail3", 1}
					};
		volume = "(1-forest/1.6)*(1-houses/1.4)";
		range = 300;
		rangeCurve[] = {{0, 0.4}, {120, 1.2}, {250, 0.75}};
		limitation = 0;
	};
	
	
	// Release (whoosh) sounds
	
	class FoW_Grenade_Release {
		samples[] = {{"fow\fow_sounds\explosions\grenade\grenade_release_field1", 1},
					{"fow\fow_sounds\explosions\grenade\grenade_release_field2", 1}
					};
		volume = "(1-forest)*(1-houses/1.4)";
		range = 120;
		rangeCurve[] = {{0, 0.5}, {50, 1}, {100, 0.4}};
		limitation = 0;
	};
	
	
	class FoW_Grenade_Release_Far {
		samples[] = {{"fow\fow_sounds\explosions\grenade\grenade_release_far1", 1},
					{"fow\fow_sounds\explosions\grenade\grenade_release_far2", 1},
					{"fow\fow_sounds\explosions\grenade\grenade_release_far3", 1}
					};
		volume = "(1-forest/1.4)";
		range = 1600;
		rangeCurve[] = {{0, 0}, {120, 0.8}, {320, 0.65}, {1200, 0.5}};
		limitation = 0;
	};
	
	class FoW_Grenade_Release_Forest {
		samples[] = {{"fow\fow_sounds\explosions\grenade\grenade_near_forest3", 1},
					{"fow\fow_sounds\explosions\grenade\grenade_near_forest4", 1},
					{"fow\fow_sounds\explosions\grenade\grenade_near_forest5", 1}
							};
		volume = "forest";
		range = 150;
		rangeCurve[] = {{0, 0.65}, {30, 1}, {60, 0.75}, {100, 0.4}};
		limitation = 0;
	};
	
	
	class FoW_Grenade_Release_Houses {
		samples[] = {{"fow\fow_sounds\explosions\grenade\grenade_near_houses5", 1},
					{"fow\fow_sounds\explosions\grenade\grenade_near_houses6", 1},
					{"fow\fow_sounds\explosions\grenade\grenade_near_houses7", 1}
							};
		volume = "houses";
		range = 150;
		rangeCurve[] = {{0, 0.65}, {30, 1}, {60, 0.75}, {100, 0.4}};
		limitation = 0;
	};
	
	class FoW_Grenade_Release_Forest_Far {
		samples[] = {{"fow\fow_sounds\explosions\grenade\grenade_release_forest_far", 1}
					};
		volume = "forest";
		range = 1600;
		rangeCurve[] = {{0, 0}, {100, 1.2}, {320, 0.75}, {1200, 0.5}};
		limitation = 0;
	};
	
	
	class FoW_Grenade_Release_Houses_Far {
		samples[] = {{"fow\fow_sounds\explosions\grenade\grenade_release_houses_far", 1},
					{"fow\fow_sounds\explosions\grenade\grenade_release_houses_far2", 1}
					};
		volume = "houses";
		range = 1600;
		rangeCurve[] = {{0, 0}, {100, 1.2}, {320, 0.75}, {1200, 0.5}};
		limitation = 0;
	};
	
	// Debris and frag layers
	
	class FoW_Grenade_Frag_Debris {
		samples[] = {{"fow\fow_sounds\explosions\debris\shrapnel1", 1},
					{"fow\fow_sounds\explosions\debris\shrapnel2", 1},
					{"fow\fow_sounds\explosions\debris\shrapnel3", 1},
					{"fow\fow_sounds\explosions\debris\shrapnel4", 1},
					{"fow\fow_sounds\explosions\debris\shrapnel5", 1},
					{"fow\fow_sounds\explosions\debris\shrapnel6", 1}
		};
		volume = "houses";
		range = 100;
		rangeCurve[] = {{0, 0.4}, {30, 1.5}, {55, 0.85}, {75, 0.55}, {100, 0}};
		limitation = 0;
	};
	
	
	
	
	
	class FoW_Grenade_Debris_Dirt {
		samples[] = {{"fow\fow_sounds\explosions\debris\debris_dirt_small_close1", 1},
					{"fow\fow_sounds\explosions\debris\debris_dirt_small_close2", 1},
					{"fow\fow_sounds\explosions\debris\debris_dirt_small_close3", 1},
					{"fow\fow_sounds\explosions\debris\debris_dirt_small_close4", 1},
					{"fow\fow_sounds\explosions\debris\debris_dirt_small_close5", 1},
					{"fow\fow_sounds\explosions\debris\debris_dirt_small_close6", 1}
		};
		volume = 1;
		range = 60;
		rangeCurve[] = {{0, 0.4}, {30, 1.2}, {45, 0.5}, {60, 0}};
		limitation = 0;
	};
	
	
	class FoW_Grenade_Debris_Wood {
		samples[] = {{"fow\fow_sounds\explosions\debris\debris_wood_small_close1", 1},
					{"fow\fow_sounds\explosions\debris\debris_wood_small_close2", 1},
					{"fow\fow_sounds\explosions\debris\debris_wood_small_close3", 1},
					{"fow\fow_sounds\explosions\debris\debris_wood_small_close4", 1},
					{"fow\fow_sounds\explosions\debris\debris_wood_small_close5", 1},
					{"fow\fow_sounds\explosions\debris\debris_wood_small_close6", 1}
		};
		volume = "forest";
		range = 60;
		rangeCurve[] = {{0, 0.4}, {30, 1.2}, {45, 0.5}, {60, 0}};
		limitation = 0;
	};
	
	class FoW_Grenade_Whistle_Far {
		samples[] = {{"fow\fow_sounds\explosions\grenade\rico_far1", 1},
					{"fow\fow_sounds\explosions\grenade\rico_far2", 1},
					{"fow\fow_sounds\explosions\grenade\rico_far3", 1},
					{"fow\fow_sounds\explosions\grenade\rico_far4", 1},
					{"fow\fow_sounds\explosions\grenade\rico_far5", 1},
					{"fow\fow_sounds\explosions\grenade\rico_far6", 1}
					};
		volume = 1;
		range = 250;
		rangeCurve[] = {{0, 0}, {100, 1}, {120, 0.75}, {175, 0.65}, {200, 0.35}};
		limitation = 0;
	};
	
	//Different processing for stereo effect
	class FoW_Grenade_Debris_Dirt_Far {
		samples[] = {{"fow\fow_sounds\explosions\debris\debris_dirt_small_far1", 1},
					{"fow\fow_sounds\explosions\debris\debris_dirt_small_far2", 1}
					
		};
		volume = 1;
		range = 200;
		rangeCurve[] = {{0, 0}, {50, 1}, {85, 0.85}, {120, 0.55}, {180, 0.2}};
		limitation = 0;
	};
	
	
// AT Rocket & PIAT Bomb
	class FoW_Rocket_AT_Explode_Near {
		samples[] = {{"fow\fow_sounds\explosions\rocket\rocket_at_explode_near", 1}
					};
		volume = 1;
		range = 150;
		rangeCurve[] = {{0, 1.7}, {30, 2}, {55, 1.2}, {75, 0.7}, {115, 0.4}};
		limitation = 0;
	};
		class FoW_Rocket_AT_Release_Near {
		samples[] = {{"fow\fow_sounds\explosions\rocket\rocket_at_release_near", 1}
					};
		volume = 1;
		range = 120;
		rangeCurve[] = {{0, 0.5}, {50, 1}, {100, 0.4}};
		limitation = 0;
	};
	
	class FoW_Rocket_AT_Explode_Mid {
		samples[] = {{"fow\fow_sounds\explosions\rocket\rocket_at_explode_mid", 1},
						{"fow\fow_sounds\explosions\rocket\rocket_at_explode_mid2", 1}
					};
		volume = 1;
		range = 1800;
		rangeCurve[] = {{0, 0}, {50, 1.4}, {300, 1.7}, {1100, 1}, {1800, 0}};
		limitation = 0;
	};
	
	class FoW_Rocket_AT_Release_Mid {
		samples[] = {{"fow\fow_sounds\explosions\rocket\rocket_at_release_mid", 1}
					};
		volume = 1;
		range = 2000;
		rangeCurve[] = {{0, 0}, {50, 1.2}, {300, 1.4}, {1100, 0.75}, {2000, 0}};
		limitation = 0;
	};
	
	class FoW_Rocket_AT_Explode_Far {
		samples[] = {{"fow\fow_sounds\explosions\rocket\rocket_at_explode_far", 1}
					};
		volume = 1;
		range = 2800;
		rangeCurve[] = {{0, 0}, {800, 0}, {1100, 1.4}, {1800, 1.9}, {2800, 0}};
		limitation = 0;
	};
	
	class FoW_Rocket_AT_Release_Far {
		samples[] = {{"fow\fow_sounds\explosions\rocket\rocket_at_release_far", 1}
					};
		volume = 1;
		range = 3000;
		rangeCurve[] = {{0, 0}, {800, 0}, {1300, 1.25}, {1800, 1}, {3000, 0}};
		limitation = 0;
	};
	
	
	class FoW_Rocket_Tail {
		samples[] = {{"fow\fow_sounds\explosions\rocket\rocket_tail1", 1},
					{"fow\fow_sounds\explosions\rocket\rocket_tail2", 1}
					};
		volume = "(1-forest/1.6)*(1-houses/1.4)";
		range = 350;
		rangeCurve[] = {{0, 0.4}, {120, 1.2}, {250, 0.75}};
		limitation = 0;
	};