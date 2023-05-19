//AUS Army - Pacific

	class fow_s_aus_officer : fow_s_aus_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Officer";
		uniformClass = "fow_u_aus_m37_02_private";	

		weapons[] = {"fow_w_sten_mk2","Throw","Put"};
		respawnWeapons[] = {"fow_w_sten_mk2","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_officer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_officer","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten"
		};
		respawnMagazines[] =
		{
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten"
		};
	};
	class fow_s_aus_section_commander : fow_s_aus_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Section commander";
		uniformClass = "fow_u_aus_m37_03_private";	

		weapons[] = {"fow_w_sten_mk2","Throw","Put"};
		respawnWeapons[] = {"fow_w_sten_mk2","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten"
		};
		respawnMagazines[] =
		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten"
		};
	};
	class fow_s_aus_teamleader : fow_s_aus_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Team Leader";
		uniformClass = "fow_u_aus_m37_03_private";	

		weapons[] = {"fow_w_sten_mk2","Throw","Put"};
		respawnWeapons[] = {"fow_w_sten_mk2","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_para_sten","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_para_sten","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten"
		};
		respawnMagazines[] =
		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten"
		};
	};		
	class fow_s_aus_rifleman : fow_s_aus_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman";
		uniformClass = "fow_u_aus_m37_03_private";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_uk_p37";
		
		magazines[] = 		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren"
		};
		respawnMagazines[] =
		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren"
		};
	};
	class fow_s_aus_bren_gunner : fow_s_aus_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine gunner (Bren)";
		uniformClass = "fow_u_aus_m37_03_private";	

		weapons[] = {"fow_w_bren","Throw","Put"};
		respawnWeapons[] = {"fow_w_bren","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_uk_p37";
		
		magazines[] = 		{
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren"
		};
		respawnMagazines[] =
		{
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren"
		};
	};
	class fow_s_aus_bren_asst : fow_s_aus_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Bren gunner";
		uniformClass = "fow_u_aus_m37_02_private";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_uk_p37";
		
		magazines[] = 		{
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren"
		};
		respawnMagazines[] =
		{
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren"
		};
	};
	class fow_s_aus_medic : fow_s_aus_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Medic";
		uniformClass = "fow_u_aus_m37_01_private";
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_us_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_us_medic","ItemMap","ItemCompass","ItemWatch"};

		backpack = "fow_b_uk_p37_medic";
		
		magazines[] = 		{
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303"
		};
		respawnMagazines[] =
		{
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303"
		};
	};
	class fow_s_aus_at : fow_s_aus_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "AT gunner";
		uniformClass = "fow_u_aus_m37_03_private";	

		weapons[] = {"fow_w_webley","fow_w_piat","Throw","Put"};
		respawnWeapons[] = {"fow_w_webley","fow_w_piat","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_uk_piat_at";
		
		magazines[] = 		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"fow_6Rnd_455",
			"fow_6Rnd_455",
			"fow_6Rnd_455",
			"fow_6Rnd_455",
			"fow_6Rnd_455",
			"fow_6Rnd_455"
		};
		respawnMagazines[] =
		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"fow_6Rnd_455",
			"fow_6Rnd_455",
			"fow_6Rnd_455",
			"fow_6Rnd_455",
			"fow_6Rnd_455",
			"fow_6Rnd_455"
		};
	};
	class fow_s_aus_at_asst : fow_s_aus_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. AT gunner";
		uniformClass = "fow_u_aus_m37_01_private";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_uk_piat_at";
		
		magazines[] = 		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303"
		};
		respawnMagazines[] =
		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303"
		};
	};

//AUS Army - Pacific - Light
	class fow_s_aus_officer_l: fow_s_aus_officer {
		displayName = "Officer (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_officer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_officer","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_aus_section_commander_l: fow_s_aus_section_commander {
		displayName = "Section commander (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_aus_teamleader_l: fow_s_aus_teamleader {
		displayName = "Team Leader (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_para_sten","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_para_sten","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_aus_rifleman_l: fow_s_aus_rifleman {
		displayName = "Rifleman (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_aus_bren_gunner_l: fow_s_aus_bren_gunner {
		displayName = "Machine gunner (Bren, light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_aus_bren_asst_l: fow_s_aus_bren_asst {
		displayName = "Asst. Bren gunner (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_bren","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_bren","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_aus_medic_l: fow_s_aus_medic {
		displayName = "Medic (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_us_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_us_medic","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_aus_at_l: fow_s_aus_at {
		displayName = "AT gunner (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_aus_at_asst_l: fow_s_aus_at_asst {
		displayName = "Asst. AT gunner (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_us_garand","ItemMap","ItemCompass","ItemWatch"};
	};
