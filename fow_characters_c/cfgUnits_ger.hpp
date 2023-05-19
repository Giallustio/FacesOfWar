/* German Base classes */


	class fow_s_ger_heer : fow_s_ger_base {
		faction = "fow_heer";
		editorSubcategory = "fow_s_ger_inf";
	};
	
	class fow_s_ger_fall : fow_s_ger_base {
		faction = "fow_luftwaffe";
		editorSubcategory = "fow_s_ger_fall";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_base_co.paa"};	
	};
	
	class fow_s_ger_ss : fow_s_ger_base {
		faction = "fow_waffenss";
		editorSubcategory = "fow_s_ger_ss";
		model = "\fow\fow_characters\ger\lodu_heer_soldier02_private.p3d";
		uniformClass = "fow_u_ger_m43_peadot_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_peadot_vest_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_peadot44_soldier.rvmat"};
	};

/* German classes */
	
	class fow_s_ger_heer_nco_mp40: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "NCO (MP40)";
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_corporal.p3d";
		uniformClass = "fow_u_ger_m43_01_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};	

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";		

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_02","fow_v_heer_mp40_nco","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_02","fow_v_heer_mp40_nco","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	/*
	class fow_heer_nco_g43: fow_heer_nco_mp40
	{
		displayName = "NCO (G43)";
		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		magazines[] = 		{

			"fow_e_m24",
			"fow_e_m24"
		};
		respawnMagazines[] =
		{

			"fow_e_m24",
			"fow_e_m24"
		};
	};*/
	class fow_s_ger_heer_tl_mp40: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Gruppe Leader (MP40)";
		model = "\fow\fow_characters\ger\lodu_heer_soldier02_corporal.p3d";
		uniformClass = "fow_u_ger_m43_02_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_co.paa"};			

		cost = 500000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_mp40","fow_i_whistle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_mp40","fow_i_whistle","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	class fow_s_ger_heer_tl_stg: fow_s_ger_heer_tl_mp40 {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Gruppe Leader (STG44)";
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_corporal.p3d";
		uniformClass = "fow_u_ger_m43_01_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};			

		weapons[] = {"fow_w_stg44","Throw","Put"};
		respawnWeapons[] = {"fow_w_stg44","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_mp44","fow_i_whistle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_mp44","fow_i_whistle","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33"
		};
	};
	/*
	class fow_heer_tl_g43: fow_heer_tl_mp40
	{
		displayName = "NCO (G43)";
		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		magazines[] = 		{

			"fow_e_m24",
			"fow_e_m24"
		};
		respawnMagazines[] =
		{

			"fow_e_m24",
			"fow_e_m24"
		};
	};*/

	class fow_s_ger_heer_tl_asst: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Gruppe Leader Asst. (MP40)";
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_private.p3d";
		uniformClass = "fow_u_ger_m43_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};			

		cost = 450000;
		camouflage = 1.4;
		sensitivity = 3.3;
		icon = "iconManLeader";

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};

	class fow_s_ger_heer_rifleman: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman";
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_private.p3d";
		uniformClass = "fow_u_ger_m43_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};			

		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"
		};
	};
	class fow_s_ger_heer_rifleman_g43: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (G43)";
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_private.p3d";
		uniformClass = "fow_u_ger_m43_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};			

		weapons[] = {"fow_w_g43","Throw","Put"};
		respawnWeapons[] = {"fow_w_g43","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_g43","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_g43","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57"
		};
	};

	class fow_s_ger_heer_rifleman_mp40: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (MP40)";
		model = "\fow\fow_characters\ger\lodu_heer_soldier011_private.p3d";
		uniformClass = "fow_u_ger_m43_01_frag_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};			

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_02","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_02","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",	
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",	
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	class fow_s_ger_heer_rifleman_mp40_pzf: fow_s_ger_heer_rifleman_mp40 {
		displayName = "Rifleman (MP40 + PZF)";
		weapons[] = {"fow_w_mp40","fow_w_pzfaust_60","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","fow_w_pzfaust_60","Throw","Put"};
	};
	class fow_s_ger_heer_mg42_gunner: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine Gunner (MG42)";
		
		model = "\fow\fow_characters\ger\lodu_heer_soldier02_lance_corporal.p3d";
		uniformClass = "fow_u_ger_m43_02_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_co.paa"};	

		weapons[] = {"fow_w_mg42","Throw","Put"};
		respawnWeapons[] = {"fow_w_mg42","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_02","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_02","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_heer_mg42_asst: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. MG42";
		model = "\fow\fow_characters\ger\lodu_heer_soldier011_private.p3d";
		uniformClass = "fow_u_ger_m43_01_frag_private";
		
		backpack = "fow_b_ammoboxes";
		
		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_heer_mg42_sparebarrel: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. MG42 (Spare barrel)";
		model = "\fow\fow_characters\ger\lodu_heer_soldier011_private.p3d";
		uniformClass = "fow_u_ger_m43_01_frag_private";
		
		backpack = "fow_b_ammoboxes_mg34_42";
		
		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98_ass","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98_ass","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_heer_mg34_gunner: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine Gunner (MG34)";
		
		model = "\fow\fow_characters\ger\lodu_heer_soldier02_lance_corporal.p3d";
		uniformClass = "fow_u_ger_m43_02_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_co.paa"};	

		weapons[] = {"fow_w_mg34","Throw","Put"};
		respawnWeapons[] = {"fow_w_mg34","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_02","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_02","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_heer_medic: fow_s_ger_heer {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Medic";
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_private.p3d";
		uniformClass = "fow_u_ger_m43_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};			

		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		backpack = "fow_b_tornister_medic";//WIP
		
		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_heer_02","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_02","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"
		};
	};
	class fow_s_ger_heer_radio_operator: fow_s_ger_heer_rifleman {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Radio Operator";

		backpack = "fow_b_torn_radio";		
		linkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98_light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_01","fow_v_heer_k98_light","ItemMap","ItemCompass","ItemWatch"};
	};

	//Panzer Lehr
	class fow_s_ger_heer_pzlehr_nco_mp40: fow_s_ger_heer_nco_mp40 {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_2nd_leutnant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "", "", "", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa","\fow\fow_characters\ger\data\panzer_grenadier01_co.paa"};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat","\fow\fow_characters\ger\data\panzer_grenadier01.rvmat"};	
		
		linkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_mp40_nco","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_mp40_nco","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};

	};
	class fow_s_ger_heer_pzlehr_tl_mp40: fow_s_ger_heer_tl_mp40 {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_unteroffizier";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier02_co.paa", "", "", "", "\fow\fow_characters\ger\data\panzer_grenadier02_co.paa", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "",""};		
		
		linkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_mp40","fow_i_whistle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_mp40","fow_i_whistle","ItemMap","ItemCompass","ItemWatch"};

	};
	class fow_s_ger_heer_pzlehr_tl_stg: fow_s_ger_heer_tl_stg {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_gefreiter";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "",""};			

		linkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_mp44","fow_i_whistle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_mp44","fow_i_whistle","ItemMap","ItemCompass","ItemWatch"};
	};

	class fow_s_ger_heer_pzlehr_tl_asst: fow_s_ger_heer_tl_asst {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_obergefreiter";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "",""};			
		
		linkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
	};

	class fow_s_ger_heer_pzlehr_rifleman: fow_s_ger_heer_rifleman {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_shutz";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier02_co.paa", "\fow\fow_characters\ger\data\panzer_grenadier02_co.paa","", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "",""};			
		
		linkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_ger_heer_pzlehr_rifleman_g43: fow_s_ger_heer_rifleman_g43 {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_shutz";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa","", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "",""};			
		
		linkedItems[] = {"fow_h_ger_m40_heer_01_net","fow_v_heer_g43","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_01_net","fow_v_heer_g43","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_ger_heer_pzlehr_rifleman_mp40: fow_s_ger_heer_rifleman_mp40 {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_shutz";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa","", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "",""};			
		
		linkedItems[] = {"fow_h_ger_m42_heer_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m42_heer_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_ger_heer_pzlehr_rifleman_mp40_pzf: fow_s_ger_heer_pzlehr_rifleman_mp40 {
		displayName = "Rifleman (MP40 + PZF)";
		weapons[] = {"fow_w_mp40","fow_w_pzfaust_60","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","fow_w_pzfaust_60","Throw","Put"};
	};
	class fow_s_ger_heer_pzlehr_mg42_gunner: fow_s_ger_heer_mg42_gunner {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_gefreiter";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "",""};	
		
		linkedItems[] = {"fow_h_ger_m42_heer_01","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m42_heer_01","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_ger_heer_pzlehr_mg42_asst: fow_s_ger_heer_mg42_asst {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_shutz";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa","", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "",""};
		
		linkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_ger_heer_pzlehr_mg42_sparebarrel: fow_s_ger_heer_mg42_sparebarrel {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_shutz";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier02_co.paa", "\fow\fow_characters\ger\data\panzer_grenadier02_co.paa","", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "",""};
		
		linkedItems[] = {"fow_h_ger_m40_heer_01_net","fow_v_heer_k98_ass","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_01_net","fow_v_heer_k98_ass","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_ger_heer_pzlehr_mg34_gunner: fow_s_ger_heer_mg34_gunner {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_gefreiter";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "",""};	
		
		linkedItems[] = {"fow_h_ger_m42_heer_01","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m42_heer_01","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_ger_heer_pzlehr_medic: fow_s_ger_heer_medic {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_pzlehr_01_shutz";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier02_co.paa", "\fow\fow_characters\ger\data\panzer_grenadier02_co.paa","", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "",""};			

		linkedItems[] = {"fow_h_ger_m42_heer_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m42_heer_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_ger_heer_pzlehr_radio_operator: fow_s_ger_heer_pzlehr_rifleman {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_ger_pzlehr";
		displayName = "Radio Operator";
		backpack = "fow_b_torn_radio";		
		linkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_k98_light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_heer_camo","fow_v_heer_k98_light","ItemMap","ItemCompass","ItemWatch"};
	};

	
	//Fallschirmjäger
	class fow_s_ger_luft_nco_mp40: fow_s_ger_fall	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "NCO (MP40)";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_sergeant.p3d";
		uniformClass = "fow_u_ger_fall_01_sergeant";		

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_heer_mp40_nco","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_heer_mp40_nco","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	class fow_s_ger_luft_tl_mp40: fow_s_ger_fall	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Team Leader (MP40)";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_corporal.p3d";
		uniformClass = "fow_u_ger_fall_01_corporal";		

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	class fow_s_ger_luft_tl_stg: fow_s_ger_fall	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Team Leader (STG44)";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_corporal.p3d";
		uniformClass = "fow_u_ger_fall_01_corporal";		

		weapons[] = {"fow_w_stg44","Throw","Put"};
		respawnWeapons[] = {"fow_w_stg44","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01","fow_v_heer_mp44","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01","fow_v_heer_mp44","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33"
		};
	};
	class fow_s_ger_luft_rifleman: fow_s_ger_fall	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_private.p3d";
		uniformClass = "fow_u_ger_fall_01_private";		

		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_fall_bandoleer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_fall_bandoleer","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"
		};
	};
	class fow_s_ger_luft_rifleman_g43: fow_s_ger_fall	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (G43)";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_private.p3d";
		uniformClass = "fow_u_ger_fall_01_private";		

		weapons[] = {"fow_w_g43","Throw","Put"};
		respawnWeapons[] = {"fow_w_g43","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_fall_bandoleer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_fall_bandoleer","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57"
		};
	};
	class fow_s_ger_luft_rifleman_fg42: fow_s_ger_fall	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (FG42)";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_private.p3d";
		uniformClass = "fow_u_ger_fall_01_private";		

		weapons[] = {"fow_w_fg42","Throw","Put"};
		respawnWeapons[] = {"fow_w_fg42","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_fall_bandoleer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_fall_bandoleer","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57",
			"fow_20Rnd_792x57"
		};
	};
	class fow_s_ger_luft_rifleman_mp40: fow_s_ger_fall	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (MP40)";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_private.p3d";
		uniformClass = "fow_u_ger_fall_01_private";		

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",	
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",	
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	class fow_s_ger_luft_mg42_gunner: fow_s_ger_fall	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine Gunner (MG42)";
		
		model = "\fow\fow_characters\ger\lodu_luft_fall01_lance_corporal.p3d";
		uniformClass = "fow_u_ger_fall_01_lance_corporal";
		
		weapons[] = {"fow_w_mg42","Throw","Put"};
		respawnWeapons[] = {"fow_w_mg42","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_luft_mg42_asst: fow_s_ger_fall	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. MG42";	
		
		model = "\fow\fow_characters\ger\lodu_luft_fall01_private.p3d";
		uniformClass = "fow_u_ger_fall_01_private";
		
		backpack = "fow_b_ammoboxes";
		
		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_luft_mg42_sparebarrel: fow_s_ger_fall {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. MG42 (Spare barrel)";	
		
		model = "\fow\fow_characters\ger\lodu_luft_fall01_private.p3d";
		uniformClass = "fow_u_ger_fall_01_private";
		
		backpack = "fow_b_ammoboxes_mg34_42";
		
		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01","fow_v_heer_k98_ass","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01","fow_v_heer_k98_ass","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_luft_mg34_gunner: fow_s_ger_fall {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine Gunner (MG34)";
		
		model = "\fow\fow_characters\ger\lodu_luft_fall01_lance_corporal.p3d";
		uniformClass = "fow_u_ger_fall_01_lance_corporal";
		
		weapons[] = {"fow_w_mg34","Throw","Put"};
		respawnWeapons[] = {"fow_w_mg34","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};

	class fow_s_ger_luft_medic: fow_s_ger_fall	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Medic";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_private.p3d";
		uniformClass = "fow_u_ger_fall_01_private";	
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		backpack = "fow_b_tornister_medic";//WIP
		
		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_fall_bandoleer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_fall_bandoleer","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze","FirstAidKit"};
		
		magazines[] = 		{
			"smokeShell",
			"smokeShell",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"

		};
		respawnMagazines[] =
		{
			"smokeShell",
			"smokeShell",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"
		};
	};
	class fow_s_ger_luft_radio_operator: fow_s_ger_luft_rifleman	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Radio Operator";
	
		backpack = "fow_b_torn_radio";	
		linkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_heer_k98_light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_fall_01_camo","fow_v_heer_k98_light","ItemMap","ItemCompass","ItemWatch"};
	};
	
	//Fallschirmjäger-Italy
	class fow_s_ger_luft_italy_nco_mp40: fow_s_ger_luft_nco_mp40	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_tl_mp40: fow_s_ger_luft_tl_mp40	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_tl_stg: fow_s_ger_luft_tl_stg	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_rifleman: fow_s_ger_luft_rifleman	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_rifleman_g43: fow_s_ger_luft_rifleman_g43	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_rifleman_fg42: fow_s_ger_luft_rifleman_fg42	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_rifleman_mp40: fow_s_ger_luft_rifleman_mp40	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_mg42_gunner: fow_s_ger_luft_mg42_gunner	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_mg42_asst: fow_s_ger_luft_mg42_asst	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_mg42_sparebarrel: fow_s_ger_luft_mg42_sparebarrel	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_mg34_gunner: fow_s_ger_luft_mg34_gunner	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_medic: fow_s_ger_luft_medic	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
	};
	class fow_s_ger_luft_italy_radio_operator: fow_s_ger_luft_radio_operator	{
		editorSubcategory = "fow_s_ger_fall_italy";
		uniformClass = "fow_u_ger_fall_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};
	};
	//Fallschirmjäger - Camo Splintertarn
	class fow_s_ger_luft_camo_nco_mp40: fow_s_ger_luft_nco_mp40	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	

	};
	class fow_s_ger_luft_camo_tl_mp40: fow_s_ger_luft_tl_mp40	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	
	};
	class fow_s_ger_luft_camo_tl_stg: fow_s_ger_luft_tl_stg	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	
	};
	class fow_s_ger_luft_camo_rifleman: fow_s_ger_luft_rifleman	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	
	};
	class fow_s_ger_luft_camo_rifleman_g43: fow_s_ger_luft_rifleman_g43	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	
	};
	class fow_s_ger_luft_camo_rifleman_fg42: fow_s_ger_luft_rifleman_fg42	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	
	};
	class fow_s_ger_luft_camo_rifleman_mp40: fow_s_ger_luft_rifleman_mp40	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	
	};
	class fow_s_ger_luft_camo_mg42_gunner: fow_s_ger_luft_mg42_gunner	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	
	};
	class fow_s_ger_luft_camo_mg42_asst: fow_s_ger_luft_mg42_asst	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	
	};
	class fow_s_ger_luft_camo_mg42_sparebarrel: fow_s_ger_luft_mg42_sparebarrel	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	
	};
	class fow_s_ger_luft_camo_mg34_gunner: fow_s_ger_luft_mg42_gunner	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};	
	};
	class fow_s_ger_luft_camo_medic: fow_s_ger_luft_medic	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};
	};
	class fow_s_ger_luft_camo_radio_operator: fow_s_ger_luft_radio_operator	{
		editorSubcategory = "fow_s_ger_fall_camo";
		uniformClass = "fow_u_ger_fall_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};
	};
	//Fallschirmjäger - Camo Sumpftarn
	class fow_s_ger_luft_camo2_nco_mp40: fow_s_ger_luft_nco_mp40	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_tl_mp40: fow_s_ger_luft_tl_mp40	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_tl_stg: fow_s_ger_luft_tl_stg	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_rifleman: fow_s_ger_luft_rifleman	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_rifleman_g43: fow_s_ger_luft_rifleman_g43	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_rifleman_fg42: fow_s_ger_luft_rifleman_fg42	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_rifleman_mp40: fow_s_ger_luft_rifleman_mp40	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_mg42_gunner: fow_s_ger_luft_mg42_gunner	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_mg42_asst: fow_s_ger_luft_mg42_asst	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_mg42_sparebarrel: fow_s_ger_luft_mg42_sparebarrel	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_mg34_gunner: fow_s_ger_luft_mg42_gunner	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};	
	};
	class fow_s_ger_luft_camo2_medic: fow_s_ger_luft_medic	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};
	};
	class fow_s_ger_luft_camo2_radio_operator: fow_s_ger_luft_radio_operator	{
		editorSubcategory = "fow_s_ger_fall_camo2";
		uniformClass = "fow_u_ger_fall_04_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};
	};
	
	//SS
	class fow_s_ger_ss_nco_mp40: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "NCO (MP40)";
		uniformClass = "fow_u_ger_m43_peadot_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_peadot_vest_co.paa"};		

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_mp40_nco","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_mp40_nco","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	class fow_s_ger_ss_tl_mp40: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Team Leader (MP40)";		

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	class fow_s_ger_ss_tl_stg: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Team Leader (STG44)";			

		weapons[] = {"fow_w_stg44","Throw","Put"};
		respawnWeapons[] = {"fow_w_stg44","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_mp44","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_mp44","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33",
			"fow_30Rnd_792x33"
		};
	};
	class fow_s_ger_ss_rifleman: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman";			

		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"
		};
	};
	class fow_s_ger_ss_rifleman_g43: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (G43)";			

		weapons[] = {"fow_w_g43","Throw","Put"};
		respawnWeapons[] = {"fow_w_g43","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_g43","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_g43","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57",
			"fow_10nd_792x57"
		};
	};
	class fow_s_ger_ss_rifleman_mp40: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (MP40)";
		uniformClass = "fow_u_ger_m43_peadot_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_peadot44_co.paa"};		

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_mp40","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",	
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",	
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	class fow_s_ger_ss_mg42_gunner: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine Gunner (MG42)";	

		weapons[] = {"fow_w_mg42","Throw","Put"};
		respawnWeapons[] = {"fow_w_mg42","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_ss_mg42_asst: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. MG42";
		uniformClass = "fow_u_ger_m43_peadot_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_peadot44_co.paa"};
		
		backpack = "fow_b_ammoboxes";
		
		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_ss_mg42_sparebarrel: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. MG42 (Spare barrel)";
		uniformClass = "fow_u_ger_m43_peadot_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_peadot44_co.paa"};
		
		backpack = "fow_b_ammoboxes_mg34_42";
		
		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_k98_ass","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_01","fow_v_heer_k98_ass","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_ss_mg34_gunner: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine Gunner (MG34)";	

		weapons[] = {"fow_w_mg34","Throw","Put"};
		respawnWeapons[] = {"fow_w_mg34","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_mg","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57",
			"fow_50Rnd_792x57"
		};
	};
	class fow_s_ger_ss_medic: fow_s_ger_ss
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Medic";		

		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";
		
		backpack = "fow_b_tornister_medic";//WIP
		
		weapons[] = {"fow_w_k98","Throw","Put"};
		respawnWeapons[] = {"fow_w_k98","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_k98","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		RespawnItems[] = {"fow_h_feldmutze_ss","FirstAidKit"};
		
		magazines[] = 		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"

		};
		respawnMagazines[] =
		{
			"fow_e_m24",
			"fow_e_m24",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57",
			"fow_5Rnd_792x57"
		};
	};
	class fow_s_ger_ss_radio_operator: fow_s_ger_ss_rifleman
	{
		dlc = "fow_mod";
		scope = 2;
		displayName = "Radio Operator";
	
		backpack = "fow_b_torn_radio";	
		linkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_k98_light","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_m40_ss_02","fow_v_heer_k98_light","ItemMap","ItemCompass","ItemWatch"};
	};
	