
	class fow_s_usmc_officer : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Officer";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1a1_thompson","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1a1_thompson","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_officer","fow_v_usmc_45","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_officer","fow_v_usmc_45","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
	};		
	class fow_s_usmc_nco : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "NCO";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1a1_thompson","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1a1_thompson","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"Smokeshell"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"Smokeshell"
		};
	};	
	class fow_s_usmc_teamleader : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Team Leader";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1a1_thompson","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1a1_thompson","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"Smokeshell"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"Smokeshell"
		};
	};	
	class fow_s_usmc_rifleman : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (M1)";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1_garand","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_garand","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_usmc_m1928_rifleman";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63"

		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63"
		};
	};
	class fow_s_usmc_rifleman_m1_carbine : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (M1 Carbine)";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1_carbine","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_carbine","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_carbine","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_carbine","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_usmc_m1928_rifleman";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33"

		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33"
		};
	};
	class fow_s_usmc_radio_operator : fow_s_usmc_rifleman_m1_carbine {
		displayName = "Radio Operator";
		backpack = "fow_b_us_radio";
	};
	class fow_s_usmc_rifleman_m1903 : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (M1903)";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1903A1","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1","Throw","Put"};

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_usmc_m1928_rifleman";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63"

		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63"
		};
	};
	class fow_s_usmc_rifleman_m1912 : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (M1912)";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_M1912","Throw","Put"};
		respawnWeapons[] = {"fow_w_M1912","Throw","Put"};

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_usmc_m1928_rifleman";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets"

		};
		respawnMagazines[] = {
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets",
			"fow_6Rnd_12G_Pellets"
		};
	};
	class fow_s_usmc_rifleman_ithaca37 : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (Ithaca 37)";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_ithaca37","Throw","Put"};
		respawnWeapons[] = {"fow_w_ithaca37","Throw","Put"};

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_usmc_m1928_rifleman";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets"

		};
		respawnMagazines[] = {
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets",
			"fow_5Rnd_12G_Pellets"
		};
	};
	class fow_s_usmc_bar_gunner : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine gunner (B.A.R.)";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1918a2_acc","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1918a2_acc","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_usmc_m1928_asst_bar";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63"
		};
	};
	class fow_s_usmc_bar_asst : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Machine gunner (B.A.R.)";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1_garand","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_garand","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_bandoleer";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",	
			"fow_8Rnd_762x63",	
			"fow_8Rnd_762x63",	
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",	
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",	
			"fow_8Rnd_762x63",	
			"fow_8Rnd_762x63",	
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",	
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63"
		};
	};	
	class fow_s_usmc_m1919a6_gunner : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine gunner (M1919A6)";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1919a6","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1919a6","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_usmc_m1928_asst_bar";
		
		magazines[] = 		{
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63"
		};
		respawnMagazines[] =
		{
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63"
		};
	};
	class fow_s_usmc_m1919a6_asst : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Machine gunner (M1919A6)";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1_garand","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_garand","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_bandoleer";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",	
			"fow_8Rnd_762x63",	
			"fow_8Rnd_762x63",	
			"fow_8Rnd_762x63",	
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",	
			"fow_8Rnd_762x63",	
			"fow_8Rnd_762x63",	
			"fow_8Rnd_762x63",	
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63",
			"fow_50Rnd_762x63"
		};
	};	
	class fow_s_usmc_at : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Bazooka gunner";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1911","fow_w_m1a1_bazooka","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1911","fow_w_m1a1_bazooka","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_rocket_bag_at";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};	
	class fow_s_usmc_at_asst : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Bazooka gunner";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m1_garand","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_garand","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_rocket_bag_at";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63"
		};
	};	
	class fow_s_usmc_medic : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Medic";
		uniformClass = "fow_u_usmc_p41_02_private";
		
		attendant = 1;

		weapons[] = {"fow_w_m1_garand","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_garand","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_usmc_m1928_medic";
		
		magazines[] = 		{
			"Smokeshell",
			"Smokeshell",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63"
		};
		respawnMagazines[] =
		{
			"Smokeshell",
			"Smokeshell",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63"
		};
	};
	class fow_s_usmc_coxswain : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Coxswain";
		editorSubcategory = "fow_s_crew";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m3","Throw","Put"};
		respawnWeapons[] = {"fow_w_m3","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_usmc_m1928";
		
		magazines[] = 		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
	};
	class fow_s_usmc_crewman : fow_s_usmc_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Crewman";
		editorSubcategory = "fow_s_crew";
		uniformClass = "fow_u_usmc_p41_01_private";	

		weapons[] = {"fow_w_m3","Throw","Put"};
		respawnWeapons[] = {"fow_w_m3","Throw","Put"};
		linkedItems[] = {"fow_h_usmc_m1","ItemMap","ItemCompass","ItemWatch","Item_Binocular"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","ItemMap","ItemCompass","ItemWatch","Item_Binocular"};
		
		//backpack = "fow_b_usmc_m1928";
		
		magazines[] = 		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
	};

	//CAMO 01
	class fow_s_usmc_camo01_officer : fow_s_usmc_officer {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_1_private";	

		linkedItems[] = {"fow_h_us_m1_officer","fow_v_usmc_45","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_officer","fow_v_usmc_45","ItemMap","ItemCompass","ItemWatch"};
	};		
	class fow_s_usmc_camo01_nco : fow_s_usmc_nco {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_2_private";	
		
		linkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_usmc_camo01_teamleader : fow_s_usmc_teamleader {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_3_private";	

		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_usmc_camo01_rifleman : fow_s_usmc_rifleman {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_1_private";	

		linkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo01_rifleman_m1_carbine : fow_s_usmc_rifleman_m1_carbine {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_1_private";	

		linkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo01_radio_operator : fow_s_usmc_camo01_rifleman_m1_carbine {
		displayName = "Radio Operator";
		backpack = "fow_b_us_radio";
	};	
	class fow_s_usmc_camo01_rifleman_m1903 : fow_s_usmc_rifleman_m1903 {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_2_private";	

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo01_rifleman_m1912 : fow_s_usmc_rifleman_m1912 {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_2_private";	

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo01_rifleman_ithaca37 : fow_s_usmc_rifleman_ithaca37 {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_2_private";	

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo01_bar_gunner : fow_s_usmc_bar_gunner {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_3_private";	

		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo01_bar_asst : fow_s_usmc_bar_asst {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_2_private";	

		linkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_usmc_camo01_m1919a6_gunner : fow_s_usmc_m1919a6_gunner {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_1_private";	

		linkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};

	};
	class fow_s_usmc_camo01_m1919a6_asst : fow_s_usmc_m1919a6_asst {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_2_private";	

		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};

	};	
	class fow_s_usmc_camo01_at : fow_s_usmc_at {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_3_private";	

		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};

	};	
	class fow_s_usmc_camo01_at_asst : fow_s_usmc_at_asst {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_2_private";	

		linkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};

	};	
	class fow_s_usmc_camo01_medic : fow_s_usmc_medic {

		editorSubcategory = "fow_s_usmc_inf_camo01";
		uniformClass = "fow_u_usmc_p42_01_camo01_1_private";

		linkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_01","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};

	};
	//CAMO 02
	class fow_s_usmc_camo02_officer : fow_s_usmc_officer {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_1_private";	

		linkedItems[] = {"fow_h_us_m1_officer","fow_v_usmc_45","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_officer","fow_v_usmc_45","ItemMap","ItemCompass","ItemWatch"};
	};		
	class fow_s_usmc_camo02_nco : fow_s_usmc_nco {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_2_private";	
		
		linkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_usmc_camo02_teamleader : fow_s_usmc_teamleader {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_3_private";	

		linkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1","fow_v_usmc_thompson","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_usmc_camo02_rifleman : fow_s_usmc_rifleman {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_1_private";	

		linkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo02_rifleman_m1_carbine : fow_s_usmc_rifleman_m1_carbine {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_1_private";	

		linkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo02_radio_operator : fow_s_usmc_camo02_rifleman_m1_carbine {
		displayName = "Radio Operator";
		backpack = "fow_b_us_radio";
	};		
	class fow_s_usmc_camo02_rifleman_m1903 : fow_s_usmc_rifleman_m1903 {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_2_private";	

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo02_rifleman_m1912 : fow_s_usmc_rifleman_m1912 {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_2_private";	

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo02_rifleman_ithaca37 : fow_s_usmc_rifleman_ithaca37 {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_2_private";	

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo02_bar_gunner : fow_s_usmc_bar_gunner {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_3_private";	

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_usmc_camo02_bar_asst : fow_s_usmc_bar_asst {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_2_private";	

		linkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_usmc_camo02_m1919a6_gunner : fow_s_usmc_m1919a6_gunner {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_1_private";	

		linkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};

	};
	class fow_s_usmc_camo02_m1919a6_asst : fow_s_usmc_m1919a6_asst {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_2_private";	

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_bar","ItemMap","ItemCompass","ItemWatch"};

	};	
	class fow_s_usmc_camo02_at : fow_s_usmc_at {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_3_private";	

		linkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};

	};	
	class fow_s_usmc_camo02_at_asst : fow_s_usmc_at_asst {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_2_private";	

		linkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};

	};	
	class fow_s_usmc_camo02_medic : fow_s_usmc_medic {

		editorSubcategory = "fow_s_usmc_inf_camo02";
		uniformClass = "fow_u_usmc_p42_01_camo02_1_private";

		linkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_usmc_m1_camo_02","fow_v_usmc_garand","ItemMap","ItemCompass","ItemWatch"};

	};
