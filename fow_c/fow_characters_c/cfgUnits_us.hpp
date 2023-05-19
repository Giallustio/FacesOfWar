//US Army Europe
	class fow_s_us_officer : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Officer";
		uniformClass = "fow_u_us_m41_01_private";	

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

		weapons[] = {"fow_w_m1a1_thompson","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1a1_thompson","fow_w_m1911","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_officer","fow_v_us_45","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_officer","fow_v_us_45","ItemMap","ItemCompass","ItemWatch"};

		magazines[] = 		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};		
	class fow_s_us_nco : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "NCO";
		uniformClass = "fow_u_us_m41_02_private";	

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		weapons[] = {"fow_w_m1a1_thompson","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1a1_thompson","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_nco","fow_v_us_thompson_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_nco","fow_v_us_thompson_nco","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_us_teamleader : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Squad Leader";
		uniformClass = "fow_u_us_m41_01_private";	

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		weapons[] = {"fow_w_m1_garand","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_garand","Throw","Put"};

		linkedItems[] = {"fow_h_us_m1_nco","fow_v_us_grenade","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_nco","fow_v_us_grenade","ItemMap","ItemCompass","ItemWatch"};

		backpack = "fow_b_us_bandoleer";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T",
			"Smokeshell"
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
			"Smokeshell"
		};
	};

	class fow_s_us_teamleader_asst : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Squad Leader Asst.";
		uniformClass = "fow_u_us_m41_02_private";	

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		weapons[] = {"fow_w_m1_carbine","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_carbine","fow_w_m1911","Throw","Put"};
		
		linkedItems[] = {"fow_h_us_m1_folded","fow_v_us_carbine_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_folded","fow_v_us_carbine_nco","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		
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
			"fow_15Rnd_762x33",
			"Smokeshell",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
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
			"fow_15Rnd_762x33",
			"Smokeshell",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};	

	class fow_s_us_rifleman : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_m1_garand","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_garand","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_bandoleer";
		
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
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63"
		};
	};
	class fow_s_us_rifleman_gl : fow_s_us_rifleman {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (GL)";

		linkedItems[] = {"fow_h_us_m1_folded","fow_v_us_grenade","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_folded","fow_v_us_grenade","ItemMap","ItemCompass","ItemWatch"};
		
		
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
			"fow_8Rnd_762x63",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1"
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
			"fow_8Rnd_762x63",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1",
			"fow_1Rnd_m9a1"
		};
	};
	class fow_s_us_rifleman_m1_carbine : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (M1 carbine)";
		uniformClass = "fow_u_us_m41_02_private";	

		weapons[] = {"fow_w_m1_carbine","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_carbine","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1","fow_v_us_carbine","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_us_carbine","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_bandoleer_m1carbine";
		
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
	class fow_s_us_rifleman_scout : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (Scout)";
		uniformClass = "fow_u_us_m41_04_private";	

		weapons[] = {"fow_w_m1_garand","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_garand","Throw","Put"};
		
		linkedItems[] = {"fow_h_us_m1_net","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};

		backpack = "fow_b_us_bandoleer";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_e_mk2",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T",
			"fow_8Rnd_762x63_T"
		};
		respawnMagazines[] =
		{
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
	class fow_s_us_rifleman_m1903 : fow_s_us_rifleman {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (M1903a1)";
		
		backpack = "fow_b_us_bandoleer_m1903";

		weapons[] = {"fow_w_m1903A1","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_closed","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_closed","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_us_rifleman_m1912 : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (M1912)";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_M1912","Throw","Put"};
		respawnWeapons[] = {"fow_w_M1912","Throw","Put"};
		
		linkedItems[] = {"fow_h_us_m1_folded","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_folded","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_us_rifleman_ithaca37 : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (Ithaca 37)";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_ithaca37","Throw","Put"};
		respawnWeapons[] = {"fow_w_ithaca37","Throw","Put"};
		
		linkedItems[] = {"fow_h_us_m1_folded","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_folded","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		
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
		respawnMagazines[] =
		{
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

	class fow_s_us_smg_m1a1 : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Submachine Gunner (M1a1)";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_m1a1_thompson","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1a1_thompson","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_folded","fow_v_us_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_folded","fow_v_us_thompson","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		
		{
			"fow_e_mk2",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
	};
	class fow_s_us_smg_m3 : fow_s_us_smg_m1a1 {
		displayName = "Submachine Gunner (M3)";

		weapons[] = {"fow_w_m3","Throw","Put"};
		respawnWeapons[] = {"fow_w_m3","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_us_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_us_thompson","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_bar_gunner : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine gunner (B.A.R.)";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_m1918a2_acc","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1918a2_acc","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_folded","fow_v_us_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_folded","fow_v_us_bar","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_us_m1928";
		
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
	class fow_s_us_bar_asst : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Machine gunner (B.A.R.)";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_m1_carbine","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_carbine","fow_w_m1911","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_closed","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_closed","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_m1928_asst_bar";
		
		magazines[] = 		
		{
			"fow_e_mk2",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_20Rnd_762x63",
			"fow_20Rnd_762x63",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};	
	class fow_s_us_m1919a6_gunner : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine gunner (M1919A6)";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_m1919a6","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1919a6","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1","fow_v_us_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_us_bar","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_us_m1919a6_asst : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Machine gunner (M1919A6)";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_m1_carbine","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_carbine","fow_w_m1911","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_m1928_asst_m1919";
		
		magazines[] = 		
		{
			"fow_e_mk2",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",	
			"fow_50Rnd_762x63",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_e_mk2",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",	
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",		
			"fow_15Rnd_762x33",	
			"fow_50Rnd_762x63",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};	
	class fow_s_us_at : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Bazooka gunner";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_m1911","fow_w_m1a1_bazooka","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1911","fow_w_m1a1_bazooka","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_closed","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_closed","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_us_at_asst : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Bazooka gunner";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_m1_garand","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_garand","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_rocket_bag_at";
		
		magazines[] = 		
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
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63",
			"fow_8Rnd_762x63"
		};
	};
	class fow_s_us_medic : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Medic";
		uniformClass = "fow_u_us_m41_01_private";
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		weapons[] = {"fow_w_m1_garand","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_garand","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1","fow_v_us_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_us_medic","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_us_m1928_medic";
		
		magazines[] = 		
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
			"fow_8Rnd_762x63"
		};
	};
	class fow_s_us_sniper_m1903a1 : fow_s_us_rifleman {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Sniper";

		weapons[] = {"fow_w_m1903A1_sniper","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1903A1_sniper","fow_w_m1911","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1_net","fow_v_us_45","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_net","fow_v_us_45","ItemMap","ItemCompass","ItemWatch"};

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
	class fow_s_us_radio_operator : fow_s_us_rifleman_m1_carbine {
		displayName = "Radio Operator";
		uniformClass = "fow_u_us_m41_02_private";
		linkedItems[] = {"fow_h_us_m1_closed","fow_v_us_carbine","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1_closed","fow_v_us_carbine","ItemMap","ItemCompass","ItemWatch"};

		backpack = "fow_b_us_radio";
	};
	class fow_s_us_engineer : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Engineer";
		uniformClass = "fow_u_us_m41_04_private";

		engineer = 1;
		backpack = "fow_b_us_m1928";
		
		weapons[] = {"fow_w_m1_carbine","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_carbine","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1","fow_v_us_carbine_eng","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","fow_v_us_carbine_eng","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		
		{
			"Smokeshell",
			"fow_e_mk2",
			"fow_e_tnt_halfpound",
			"fow_e_tnt_halfpound",			
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
			"Smokeshell",
			"fow_e_mk2",
			"fow_e_tnt_halfpound",
			"fow_e_tnt_halfpound",			
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

	//US M37
	
	class fow_s_us_m37_officer : fow_s_us_officer {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};		
	class fow_s_us_m37_nco : fow_s_us_nco {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};	
	class fow_s_us_m37_teamleader : fow_s_us_teamleader {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};	

	class fow_s_us_m37_teamleader_asst : fow_s_us_teamleader_asst {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};	

	class fow_s_us_m37_rifleman : fow_s_us_rifleman {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_rifleman_gl : fow_s_us_rifleman_gl {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_rifleman_m1_carbine : fow_s_us_rifleman_m1_carbine {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_rifleman_scout : fow_s_us_rifleman_scout {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_rifleman_m1903 : fow_s_us_rifleman_m1903 {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_rifleman_m1912 : fow_s_us_rifleman_m1912 {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_rifleman_ithaca37 : fow_s_us_rifleman_ithaca37 {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	
	class fow_s_us_m37_smg_m1a1 : fow_s_us_smg_m1a1 {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_smg_m3 : fow_s_us_smg_m3 {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_bar_gunner : fow_s_us_bar_gunner {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_bar_asst : fow_s_us_bar_asst {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};	
	class fow_s_us_m37_m1919a6_gunner : fow_s_us_m1919a6_gunner {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_m1919a6_asst : fow_s_us_m1919a6_asst {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};	
	class fow_s_us_m37_at : fow_s_us_at {
		uniformClass = "fow_u_us_m37_01_private";
		editorSubcategory = "fow_s_us_m37_inf";	
	};	
	class fow_s_us_m37_at_asst : fow_s_us_at_asst {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};	
	class fow_s_us_m37_medic : fow_s_us_medic {
		uniformClass = "fow_u_us_m37_01_private";
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_sniper_m1903a1 : fow_s_us_sniper_m1903a1 {
		uniformClass = "fow_u_us_m37_01_private";
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_radio_operator : fow_s_us_radio_operator {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};
	class fow_s_us_m37_engineer : fow_s_us_engineer {
		uniformClass = "fow_u_us_m37_01_private";	
		editorSubcategory = "fow_s_us_m37_inf";
	};

	class fow_s_us_crewman : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Crewman";
		editorSubcategory = "fow_s_crew";
		uniformClass = "fow_u_us_pilot_01";	
		model = "fow\fow_characters\us\pilot_overall.p3d";

		weapons[] = {"fow_w_m3","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_m3","fow_w_m1911","Throw","Put"};
		
		linkedItems[] = {"fow_h_us_m1_closed","fow_v_us_45","ItemMap","ItemCompass","ItemWatch","Item_Binocular"};
		respawnLinkedItems[] = {"fow_h_us_m1_closed","fow_v_us_45","ItemMap","ItemCompass","ItemWatch","Item_Binocular"};
		
		//backpack = "fow_b_usmc_m1928";
		
		magazines[] = 		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_7Rnd_45acp",
			"fow_7Rnd_45acp"
		};
	};			
	class fow_s_us_coxswain : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Coxswain";
		editorSubcategory = "fow_s_crew";
		uniformClass = "fow_u_us_m41_01_private";	

		weapons[] = {"fow_w_m3","Throw","Put"};
		respawnWeapons[] = {"fow_w_m3","Throw","Put"};
		linkedItems[] = {"fow_h_us_m1","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m1","ItemMap","ItemCompass","ItemWatch"};

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

	class fow_s_us_pilot : fow_s_us_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Pilot (Khaki)";
		editorSubcategory = "fow_s_crew";
		uniformClass = "fow_u_us_pilot_01";	
        model = "fow\fow_characters\us\pilot_overall.p3d";

		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		linkedItems[] = {"fow_h_us_flight_helmet","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_flight_helmet","ItemMap","ItemCompass","ItemWatch"};

		magazines[] = 		{

		};
		respawnMagazines[] =
		{

		};
		
		class Wounds : Wounds
		{
			tex[] = {};
			mat[] = {
				"fow\fow_characters\us\data\pilot_overall.rvmat",
				"fow\fow_characters\us\data\pilot_overall_w1.rvmat",
				"fow\fow_characters\us\data\pilot_overall_w2.rvmat"
			};
		};
		
		hiddenSelections[] = {"camo1","camo2","camo3"}; 
		hiddenSelectionsTextures[] = {"fow\fow_characters\us\data\pilot_overall_1_co.paa", "fow\fow_characters\us\data\gloves_leather1_co.paa", ""};
		hiddenSelectionsMaterials[] = {"fow\fow_characters\us\data\pilot_overall.rvmat", "fow\fow_characters\us\data\gloves_leather.rvmat", ""};
	};			
	class fow_s_us_pilot_green : fow_s_us_pilot {
		dlc = "fow_mod";
		displayName = "Pilot (Green)";
		uniformClass = "fow_u_us_pilot_02";	
		
		hiddenSelectionsTextures[] = {"fow\fow_characters\us\data\pilot_overall_3_co.paa", "fow\fow_characters\us\data\gloves_leather1_co.paa", ""};
		hiddenSelectionsMaterials[] = {"fow\fow_characters\us\data\pilot_overall.rvmat", "fow\fow_characters\us\data\gloves_leather.rvmat", ""};
	};

	//US Airborne
	class fow_s_us_ab_m42_officer : fow_s_us_officer {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_45","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_45","ItemMap","ItemCompass","ItemWatch"};
	};		
	class fow_s_us_ab_m42_nco : fow_s_us_nco {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";

		backpack = "fow_b_us_m1944_nco";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_thompson_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_thompson_nco","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_us_ab_m42_teamleader : fow_s_us_teamleader {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";

		backpack = "fow_b_us_m1944";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_grenade","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_grenade","ItemMap","ItemCompass","ItemWatch"};
	};	

	class fow_s_us_ab_m42_teamleader_asst : fow_s_us_teamleader_asst {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";

		backpack = "fow_b_us_m1944_m1carbine";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine_nco","ItemMap","ItemCompass","ItemWatch"};
	};	

	class fow_s_us_ab_m42_rifleman : fow_s_us_rifleman {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_rifleman_gl : fow_s_us_rifleman_gl {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_net","fow_v_us_ab_grenade","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_net","fow_v_us_ab_grenade","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_rifleman_m1_carbine : fow_s_us_rifleman_m1_carbine {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
				
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
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
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
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
	class fow_s_us_ab_m42_rifleman_scout : fow_s_us_rifleman_scout {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_rifleman_m1903 : fow_s_us_rifleman_m1903 {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_rifleman_m1912 : fow_s_us_rifleman_m1912 {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_asst_mg","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_rifleman_ithaca37 : fow_s_us_rifleman_ithaca37 {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_asst_mg","ItemMap","ItemCompass","ItemWatch"};
	};
	
	class fow_s_us_ab_m42_smg_m1a1 : fow_s_us_smg_m1a1 {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		backpack = "fow_b_us_m1944_nco";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_thompson","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_smg_m3 : fow_s_us_smg_m3 {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_thompson","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_bar_gunner : fow_s_us_bar_gunner {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_bar","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_bar_asst : fow_s_us_bar_asst {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		backpack = "fow_b_us_m1944_asst_bar";
		
		linkedItems[] = {"fow_h_us_m2_net","fow_v_us_ab_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_net","fow_v_us_ab_asst_mg","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_us_ab_m42_m1919a6_gunner : fow_s_us_m1919a6_gunner {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_net","fow_v_us_ab_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_net","fow_v_us_ab_bar","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_m1919a6_asst : fow_s_us_m1919a6_asst {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		backpack = "fow_b_us_m1944_asst_m1919";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_asst_mg","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_us_ab_m42_at : fow_s_us_at {
		uniformClass = "fow_u_us_m42_ab_01_private";
		editorSubcategory = "fow_s_us_ab_inf";	
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_us_ab_m42_at_asst : fow_s_us_at_asst {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_us_ab_m42_medic : fow_s_us_medic {
		uniformClass = "fow_u_us_m42_ab_01_private";
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};//"fow_v_us_ab_medic" -> missing for AB
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_sniper_m1903a1 : fow_s_us_sniper_m1903a1 {
		uniformClass = "fow_u_us_m42_ab_01_private";
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_45","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_45","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_ab_m42_radio_operator : fow_s_us_radio_operator {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine","ItemMap","ItemCompass","ItemWatch"};

		backpack = "fow_b_us_radio";
		
		magazines[] = 		{
			"fow_e_mk2",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
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
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
			"fow_15Rnd_762x33",
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
	/*class fow_s_us_ab_m42_engineer : fow_s_us_engineer {
		uniformClass = "fow_u_us_m42_ab_01_private";	
		editorSubcategory = "fow_s_us_ab_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine_eng","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine_eng","ItemMap","ItemCompass","ItemWatch"};
	};*/

	//82
	class fow_s_us_ab_m42_82_officer : fow_s_us_ab_m42_officer {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};		
	class fow_s_us_ab_m42_82_nco : fow_s_us_ab_m42_nco {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};	
	class fow_s_us_ab_m42_82_teamleader : fow_s_us_ab_m42_teamleader {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};	
	class fow_s_us_ab_m42_82_teamleader_asst : fow_s_us_ab_m42_teamleader_asst {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};	
	class fow_s_us_ab_m42_82_rifleman : fow_s_us_ab_m42_rifleman {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_rifleman_gl : fow_s_us_ab_m42_rifleman_gl {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_rifleman_m1_carbine : fow_s_us_ab_m42_rifleman_m1_carbine {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_rifleman_scout : fow_s_us_ab_m42_rifleman_scout {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_rifleman_m1903 : fow_s_us_ab_m42_rifleman_m1903 {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_rifleman_m1912 : fow_s_us_ab_m42_rifleman_m1912 {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_rifleman_ithaca37 : fow_s_us_ab_m42_rifleman_ithaca37 {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_smg_m1a1 : fow_s_us_ab_m42_smg_m1a1 {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_smg_m3 : fow_s_us_ab_m42_smg_m3 {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_bar_gunner : fow_s_us_ab_m42_bar_gunner {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_bar_asst : fow_s_us_ab_m42_bar_asst {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};	
	class fow_s_us_ab_m42_82_m1919a6_gunner : fow_s_us_ab_m42_m1919a6_gunner {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_m1919a6_asst : fow_s_us_ab_m42_m1919a6_asst {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};	
	class fow_s_us_ab_m42_82_at : fow_s_us_ab_m42_at {
		uniformClass = "fow_u_us_m42_ab_01_82_private";
		editorSubcategory = "fow_s_us_ab_82_inf";	
	};	
	class fow_s_us_ab_m42_82_at_asst : fow_s_us_ab_m42_at_asst {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};	
	class fow_s_us_ab_m42_82_medic : fow_s_us_ab_m42_medic {
		uniformClass = "fow_u_us_m42_ab_01_82_private";
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_sniper_m1903a1 : fow_s_us_ab_m42_sniper_m1903a1 {
		uniformClass = "fow_u_us_m42_ab_01_82_private";
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	class fow_s_us_ab_m42_82_radio_operator : fow_s_us_ab_m42_radio_operator {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
	};
	/*class fow_s_us_ab_m42_82_engineer : fow_s_us_engineer {
		uniformClass = "fow_u_us_m42_ab_01_82_private";	
		editorSubcategory = "fow_s_us_ab_82_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine_eng","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine_eng","ItemMap","ItemCompass","ItemWatch"};
	};*/
	//101
	class fow_s_us_ab_m42_101_officer : fow_s_us_ab_m42_officer {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};		
	class fow_s_us_ab_m42_101_nco : fow_s_us_ab_m42_nco {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};	
	class fow_s_us_ab_m42_101_teamleader : fow_s_us_ab_m42_teamleader {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};	

	class fow_s_us_ab_m42_101_teamleader_asst : fow_s_us_ab_m42_teamleader_asst {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};	

	class fow_s_us_ab_m42_101_rifleman : fow_s_us_ab_m42_rifleman {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_rifleman_gl : fow_s_us_ab_m42_rifleman_gl {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_rifleman_m1_carbine : fow_s_us_ab_m42_rifleman_m1_carbine {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_rifleman_scout : fow_s_us_ab_m42_rifleman_scout {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_rifleman_m1903 : fow_s_us_ab_m42_rifleman_m1903 {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_rifleman_m1912 : fow_s_us_ab_m42_rifleman_m1912 {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_rifleman_ithaca37 : fow_s_us_ab_m42_rifleman_ithaca37 {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	
	class fow_s_us_ab_m42_101_smg_m1a1 : fow_s_us_ab_m42_smg_m1a1 {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_smg_m3 : fow_s_us_ab_m42_smg_m3 {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_bar_gunner : fow_s_us_ab_m42_bar_gunner {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_bar_asst : fow_s_us_ab_m42_bar_asst {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};	
	class fow_s_us_ab_m42_101_m1919a6_gunner : fow_s_us_ab_m42_m1919a6_gunner {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_m1919a6_asst : fow_s_us_ab_m42_m1919a6_asst {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};	
	class fow_s_us_ab_m42_101_at : fow_s_us_ab_m42_at {
		uniformClass = "fow_u_us_m42_ab_01_101_private";
		editorSubcategory = "fow_s_us_ab_101_inf";	
	};	
	class fow_s_us_ab_m42_101_at_asst : fow_s_us_ab_m42_at_asst {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};	
	class fow_s_us_ab_m42_101_medic : fow_s_us_ab_m42_medic {
		uniformClass = "fow_u_us_m42_ab_01_101_private";
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_sniper_m1903a1 : fow_s_us_ab_m42_sniper_m1903a1 {
		uniformClass = "fow_u_us_m42_ab_01_101_private";
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	class fow_s_us_ab_m42_101_radio_operator : fow_s_us_ab_m42_radio_operator {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
	};
	/*class fow_s_us_ab_m42_101_engineer : fow_s_us_engineer {
		uniformClass = "fow_u_us_m42_ab_01_101_private";	
		editorSubcategory = "fow_s_us_ab_101_inf";
		
		linkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine_eng","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_m2_camo","fow_v_us_ab_carbine_eng","ItemMap","ItemCompass","ItemWatch"};
	};*/

//US Army Pacific	
	class fow_s_us_p_officer : fow_s_us_officer {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_nco : fow_s_us_nco {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_02_private";
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_teamleader : fow_s_us_teamleader {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_teamleader_asst : fow_s_us_teamleader_asst {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_02_private";	
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_rifleman : fow_s_us_rifleman {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";	
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_rifleman_m1_carbine : fow_s_us_rifleman_m1_carbine {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";	
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_rifleman_gl : fow_s_us_rifleman_gl {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_02_private";
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_rifleman_scout : fow_s_us_rifleman_scout {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_02_private";
		editorSubcategory = "fow_s_us_p_inf";	
	};
	class fow_s_us_p_rifleman_m1903 : fow_s_us_m37_rifleman_m1903 {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_02_private";
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_rifleman_m1912 : fow_s_us_rifleman_m1912 {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";
		editorSubcategory = "fow_s_us_p_inf";	
	};
	class fow_s_us_p_rifleman_ithaca37 : fow_s_us_rifleman_ithaca37 {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_02_private";
		editorSubcategory = "fow_s_us_p_inf";	
	};
	
	class fow_s_us_p_smg_m1a1 : fow_s_us_m37_smg_m1a1 {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_02_private";
		editorSubcategory = "fow_s_us_p_inf";	
	};
	class fow_s_us_p_smg_m3 : fow_s_us_m37_smg_m3 {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";
		editorSubcategory = "fow_s_us_p_inf";	
	};
	class fow_s_us_p_bar_gunner : fow_s_us_bar_gunner {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";
		editorSubcategory = "fow_s_us_p_inf";	
	};
	class fow_s_us_p_bar_asst : fow_s_us_bar_asst {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";	
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_m1919a6_gunner : fow_s_us_m1919a6_gunner {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";	
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_m1919a6_asst : fow_s_us_m1919a6_asst {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_02_private";	
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_at : fow_s_us_at {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";	
		editorSubcategory = "fow_s_us_p_inf";
	};	
	class fow_s_us_p_at_asst : fow_s_us_at_asst {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_m37_02_private";
		editorSubcategory = "fow_s_us_p_inf";	
	};
	class fow_s_us_p_medic : fow_s_us_medic {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_m37_02_private";
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_sniper_m1903a1 : fow_s_us_sniper_m1903a1 {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_radio_operator : fow_s_us_radio_operator {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_02_private";
		editorSubcategory = "fow_s_us_p_inf";
	};
	class fow_s_us_p_engineer : fow_s_us_engineer {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_hbt_01_private";
		editorSubcategory = "fow_s_us_p_inf";
	};

	class fow_s_us_p_crewman : fow_s_us_crewman {
		dlc = "fow_mod";
		faction = "fow_usa_p";
		uniformClass = "fow_u_us_m37_02_private";	
	};

//US Army Pacific - Merril's Marauders	
	class fow_s_us_mm_officer : fow_s_us_p_officer {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";		
		uniformClass = "fow_u_us_hbt_01_private";

		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_45","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_45","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_nco : fow_s_us_p_nco {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_02_private";

		linkedItems[] = {"fow_h_us_daisy_mae_02","fow_v_us_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_02","fow_v_us_thompson","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_teamleader : fow_s_us_p_teamleader {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_01_private";

		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_grenade","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_grenade","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_teamleader_asst : fow_s_us_p_teamleader_asst {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_02_private";	
		
		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_carbine_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_carbine_nco","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_rifleman : fow_s_us_p_rifleman {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_01_private";	

		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_rifleman_m1_carbine : fow_s_us_p_rifleman_m1_carbine {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_01_private";	

		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_carbine","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_carbine","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_rifleman_gl : fow_s_us_p_rifleman_gl {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_02_private";

		linkedItems[] = {"fow_h_us_daisy_mae_02","fow_v_us_grenade","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_02","fow_v_us_grenade","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_rifleman_scout : fow_s_us_p_rifleman_scout {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_02_private";	
		
		linkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_rifleman_m1903 : fow_s_us_p_rifleman_m1903 {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_02_private";	
		
		linkedItems[] = {"fow_h_us_daisy_mae_02","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_02","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_rifleman_m1912 : fow_s_us_p_rifleman_m1912 {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_02_private";	
		
		linkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_rifleman_ithaca37 : fow_s_us_p_rifleman_ithaca37 {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_02_private";	
		
		linkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
	};

	class fow_s_us_mm_smg_m1a1 : fow_s_us_p_smg_m1a1 {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_01_private";

		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_thompson","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_smg_m3 : fow_s_us_p_smg_m3 {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_02_private";
		
		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_thompson","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_thompson","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_bar_gunner : fow_s_us_p_bar_gunner {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_01_private";	

		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_bar","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_bar_asst : fow_s_us_p_bar_asst {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_01_private";	
		
		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_m1919a6_gunner : fow_s_us_p_m1919a6_gunner {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_01_private";	

		linkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_bar","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_bar","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_us_mm_m1919a6_asst : fow_s_us_p_m1919a6_asst {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_02_private";
		
		linkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_asst_mg","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_at : fow_s_us_p_at {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_01_private";
		
		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_us_mm_at_asst : fow_s_us_p_at_asst {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_m37_02_private";
		
		linkedItems[] = {"fow_h_us_daisy_mae_02","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_02","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_medic : fow_s_us_p_medic {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_m37_02_private";

		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_medic","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_sniper_m1903a1 : fow_s_us_p_sniper_m1903a1 {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_01_private";

		linkedItems[] = {"fow_h_us_daisy_mae_02","fow_v_us_45","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_02","fow_v_us_45","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_radio_operator : fow_s_us_p_radio_operator {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_01_private";

		linkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_carbine","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_01","fow_v_us_carbine","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_us_mm_engineer : fow_s_us_p_engineer {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_us_mm_inf";
		uniformClass = "fow_u_us_hbt_02_private";

		linkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_carbine_eng","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_us_daisy_mae_03","fow_v_us_carbine_eng","ItemMap","ItemCompass","ItemWatch"};
	};