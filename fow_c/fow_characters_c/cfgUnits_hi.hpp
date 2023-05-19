//Horizon Island Army
	class fow_s_hi_officer : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Officer";
		uniformClass = "fow_u_hi_35_02_private";	

		class SpeechVariants
		{
			class Default
			{
				speechSingular[] = {"veh_infantry_officer_s"};
				speechPlural[] = {"veh_infantry_officer_p"};
			};
		};
		textSingular = "$STR_A3_nameSound_veh_infantry_officer_s";
		textPlural = "$STR_A3_nameSound_veh_infantry_officer_p";
		nameSound = "veh_infantry_officer_s";

		cost = 600000;
		camouflage = 1.6;
		sensitivity = 3;
		icon = "iconManOfficer";

		weapons[] = {"fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1911","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_ija_bayonet","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_ija_bayonet","ItemMap","ItemCompass","ItemWatch"};

		magazines[] = 		{
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};		
	class fow_s_hi_nco : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "NCO";
		uniformClass = "fow_u_hi_35_01_private";	

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		weapons[] = {"fow_w_m55_reising","Throw","Put"};
		respawnWeapons[] = {"fow_w_m55_reising","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"Smokeshell"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"Smokeshell"
		};
	};
	class fow_s_hi_teamleader : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Squad Leader";
		uniformClass = "fow_u_hi_35_01_private";	

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		weapons[] = {"fow_w_m1903A1","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1","Throw","Put"};

		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_ija_officer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_ija_officer","ItemMap","ItemCompass","ItemWatch"};
		
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
			"fow_5Rnd_762x63",
			"Smokeshell"
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
			"Smokeshell"
		};
	};

	class fow_s_hi_teamleader_asst : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Squad Leader Asst.";
		uniformClass = "fow_u_hi_35_02_private";	

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		weapons[] = {"fow_w_m1903A1","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1","fow_w_m1911","Throw","Put"};
		
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		
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
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"Smokeshell",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
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
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"Smokeshell",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};	

	class fow_s_hi_rifleman : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman";
		uniformClass = "fow_u_hi_35_01_private";	

		weapons[] = {"fow_w_m1903A1","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
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
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63"
		};
	};
	class fow_s_hi_rifleman_scout : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (Scout)";
		uniformClass = "fow_u_hi_35_03_private";	

		weapons[] = {"fow_w_m1903A1","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_mortar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_mortar","ItemMap","ItemCompass","ItemWatch"};

		backpack = "fow_b_uk_bergenpack";

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
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63"
		};
	};
	class fow_s_hi_rifleman_m1912 : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (M1912)";
		uniformClass = "fow_u_hi_35_02_private";	

		weapons[] = {"fow_w_M1912","Throw","Put"};
		respawnWeapons[] = {"fow_w_M1912","Throw","Put"};
		
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_ija_grenadier","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_ija_grenadier","ItemMap","ItemCompass","ItemWatch"};
		
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
		respawnMagazines[] =
		{
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
	class fow_s_hi_smg_m55 : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Submachine Gunner (M55)";
		uniformClass = "fow_u_hi_35_01_private";	

		weapons[] = {"fow_w_m55_reising","Throw","Put"};
		respawnWeapons[] = {"fow_w_m55_reising","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};

		magazines[] = 		
		{
			"fow_e_mk2",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp",
			"fow_20Rnd_45acp"
		};
	};
	class fow_s_hi_bar_gunner : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine gunner (B.A.R.)";
		uniformClass = "fow_u_hi_35_02_private";	

		weapons[] = {"fow_w_m1918a2_acc","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1918a2_acc","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		
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
	class fow_s_hi_bar_asst : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Machine gunner (B.A.R.)";
		uniformClass = "fow_u_hi_35_01_private";	

		weapons[] = {"fow_w_m1903A1","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1","fow_w_m1911","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_m1944_asst_bar";
		
		magazines[] = 		
		{
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
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
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
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};	
	class fow_s_hi_m1919a6_gunner : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine gunner (M1919A6)";
		uniformClass = "fow_u_hi_35_01_private";	

		weapons[] = {"fow_w_m1919a6","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1919a6","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_us_m1928";
		
		magazines[] = 		
		{
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
	class fow_s_hi_m1919a6_asst : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Machine gunner (M1919A6)";
		uniformClass = "fow_u_hi_35_02_private";	

		weapons[] = {"fow_w_m1903A1","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1","fow_w_m1911","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_m1944_asst_m1919";
		
		magazines[] = 		
		{
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
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",	
			"fow_50Rnd_762x63",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
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
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",		
			"fow_5Rnd_762x63",	
			"fow_50Rnd_762x63",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};	
	class fow_s_hi_at : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Bazooka gunner";
		uniformClass = "fow_u_hi_35_01_private";	

		weapons[] = {"fow_w_m1911","fow_w_m1a1_bazooka","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1911","fow_w_m1a1_bazooka","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_rocket_bag_at";
		
		magazines[] = 		
		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
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
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};	
	class fow_s_hi_at_asst : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Bazooka gunner";
		uniformClass = "fow_u_hi_35_02_private";	

		weapons[] = {"fow_w_m1903A1","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_rocket_bag_at";
		
		magazines[] = 		
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
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63"
		};
	};
	class fow_s_hi_medic : fow_s_hi_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Medic";
		uniformClass = "fow_u_hi_35_02_private";
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		weapons[] = {"fow_w_m1903A1","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_ija_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_ija_medic","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_m1944_medic";
		
		magazines[] = 		
		{
			"Smokeshell",
			"Smokeshell",
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
			"Smokeshell",
			"Smokeshell",
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
	class fow_s_hi_sniper_m1903a1 : fow_s_hi_rifleman {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Sniper";
		uniformClass = "fow_u_hi_35_03_private";
		
		weapons[] = {"fow_w_m1903A1_sniper","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1_sniper","fow_w_m1911","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};

		backpack = "";
		
		magazines[] = 		
		{
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_5Rnd_762x63",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};
	class fow_s_hi_radio_operator : fow_s_hi_rifleman {
		displayName = "Radio Operator";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};

		backpack = "fow_b_us_radio";
	};
	class fow_s_hi_crewman : fow_s_hi_rifleman {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Crewman";
		editorSubcategory = "fow_s_crew";
		uniformClass = "fow_u_us_pilot_02";	
		
		weapons[] = {"fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1911","Throw","Put"};		
		linkedItems[] = {"fow_h_hi_beret_headset","fow_v_us_45","ItemMap","ItemCompass","ItemWatch","Item_Binocular"};
		respawnLinkedItems[] = {"fow_h_hi_beret_headset","fow_v_us_45","ItemMap","ItemCompass","ItemWatch","Item_Binocular"};

		magazines[] = 		{
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};

	
//Horizon Island Army - Light
	class fow_s_hi_officer_l: fow_s_hi_officer {
		displayName = "Officer (light)";
		linkedItems[] = {"fow_h_hi_officer_cap","fow_v_ija_bayonet","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_hi_officer_cap","fow_v_ija_bayonet","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_nco_l : fow_s_hi_nco {
		displayName = "NCO (light)";
		linkedItems[] = {"fow_h_hi_beret","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_hi_beret","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_teamleader_l : fow_s_hi_teamleader {
		displayName = "Squad Leader (light)";
		linkedItems[] = {"fow_h_hi_beret","fow_v_ija_officer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_hi_beret","fow_v_ija_officer","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_teamleader_asst_l : fow_s_hi_teamleader_asst {
		displayName = "Squad Leader Asst. (light)";
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_rifleman_l : fow_s_hi_rifleman {
		displayName = "Rifleman (light)";
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_rifleman_scout_l : fow_s_hi_rifleman_scout {
		displayName = "Rifleman (Scout, light)";
		linkedItems[] = {"fow_h_uk_woolen_hat02","fow_v_ija_mortar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_woolen_hat02","fow_v_ija_mortar","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_rifleman_m1912_l : fow_s_hi_rifleman_m1912 {
		displayName = "Rifleman (M1912, light)";
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_grenadier","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_grenadier","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_smg_m55_l : fow_s_hi_smg_m55 {
		displayName = "Submachine Gunner (M55, light)";
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_bar_gunner_l : fow_s_hi_bar_gunner {
		displayName = "Machine gunner (B.A.R., light)";
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_bar_asst_l : fow_s_hi_bar_asst {
		displayName = "Asst. Machine gunner (B.A.R., light)";
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_hi_m1919a6_gunner_l : fow_s_hi_m1919a6_gunner {
		displayName = "Machine gunner (M1919A6, light)";
		uniformClass = "fow_u_hi_35_01_private";	
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_m1919a6_asst_l : fow_s_hi_m1919a6_asst {
		displayName = "Asst. Machine gunner (M1919A6, light)";
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_at_l : fow_s_hi_at {
		displayName = "Bazooka gunner (light)";
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_hi_at_asst_l : fow_s_hi_at_asst {
		displayName = "Asst. Bazooka gunner (light)";
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_medic_l : fow_s_hi_medic {
		displayName = "Medic (light)";
		linkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_hat_safari_olive_f","fow_v_ija_medic","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_sniper_m1903a1_l : fow_s_hi_sniper_m1903a1 {
		displayName = "Sniper (light)";
		linkedItems[] = {"h_bandanna_khk","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"h_bandanna_khk","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_hi_radio_operator_l : fow_s_hi_rifleman_l {
		displayName = "Radio Operator (light)";
		backpack = "fow_b_us_radio";
	};	
	
