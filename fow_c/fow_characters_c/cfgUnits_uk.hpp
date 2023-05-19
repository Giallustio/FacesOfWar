
	class fow_s_uk_reg_essex : fow_s_uk_base {
		editorSubcategory = "fow_s_uk_reg_essex";
	};
	class fow_s_uk_para : fow_s_uk_base {
		editorSubcategory = "fow_s_uk_para";
	};
	class fow_s_uk_commando : fow_s_uk_base {
		editorSubcategory = "fow_s_uk_commando";
	};

	//CREW	
	class fow_s_uk_crewman : fow_s_uk_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Crewman";
		editorSubcategory = "fow_s_crew";
		uniformClass = "fow_u_us_pilot_01";	
		model = "fow\fow_characters\us\pilot_overall.p3d";

		weapons[] = {"fow_w_sten_mk2","fow_w_m1911","Throw","Put"};
		respawnWeapons[] = {"fow_w_sten_mk2","fow_w_m1911","Throw","Put"};
		
		linkedItems[] = {"fow_h_uk_beret_rtr","fow_v_us_45","ItemMap","ItemCompass","ItemWatch","Item_Binocular"};
		respawnLinkedItems[] = {"fow_h_uk_beret_rtr","fow_v_us_45","ItemMap","ItemCompass","ItemWatch","Item_Binocular"};
				
		magazines[] = 		{
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_7Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_32Rnd_9x19_sten",
			"fow_7Rnd_45acp"
		};
	};			

	
	class fow_s_uk_officer : fow_s_uk_reg_essex {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Officer";
		uniformClass = "fow_u_uk_bd40_01_lieutenant";	

		weapons[] = {"fow_w_sten_mk2","Throw","Put"};
		respawnWeapons[] = {"fow_w_sten_mk2","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_section_commander : fow_s_uk_reg_essex {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Section commander";
		uniformClass = "fow_u_uk_bd40_01_sergeant";	

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
	class fow_s_uk_teamleader : fow_s_uk_reg_essex {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Team Leader";
		uniformClass = "fow_u_uk_bd40_01_corporal";	

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
	class fow_s_uk_rifleman : fow_s_uk_reg_essex {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman";
		uniformClass = "fow_u_uk_bd40_01_private";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_uk_p37";
		
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
	class fow_s_uk_bren_gunner : fow_s_uk_reg_essex {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine gunner (Bren)";
		uniformClass = "fow_u_uk_bd40_01_lance_corporal";	

		weapons[] = {"fow_w_bren","Throw","Put"};
		respawnWeapons[] = {"fow_w_bren","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_bren_asst : fow_s_uk_reg_essex {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. Bren gunner";
		uniformClass = "fow_u_uk_bd40_01_private";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_medic : fow_s_uk_reg_essex {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Medic";
		uniformClass = "fow_u_uk_bd40_01_private";
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_radio_operator : fow_s_uk_rifleman {
		dlc = "fow_mod";
		displayName = "Radio Operator";

		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		backpack = "fow_b_uk_p37_radio_blanco";
	};
	class fow_s_uk_at : fow_s_uk_reg_essex {
		dlc = "fow_mod";
		scope = 2;
		displayName = "AT gunner";
		uniformClass = "fow_u_uk_bd40_01_private";	

		weapons[] = {"fow_w_webley","fow_w_piat","Throw","Put"};
		respawnWeapons[] = {"fow_w_webley","fow_w_piat","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_at_asst : fow_s_uk_reg_essex {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. AT gunner";
		uniformClass = "fow_u_uk_bd40_01_private";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		
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

	//PIB
	class fow_s_uk_pib_officer : fow_s_uk_officer {
		editorSubcategory = "fow_s_uk_pib";
		uniformClass = "fow_u_uk_bd40_pib_01_lieutenant";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_pib_section_commander : fow_s_uk_section_commander {
		editorSubcategory = "fow_s_uk_pib";
		uniformClass = "fow_u_uk_bd40_pib_01_sergeant";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_pib_teamleader : fow_s_uk_teamleader {
		editorSubcategory = "fow_s_uk_pib";
		uniformClass = "fow_u_uk_bd40_pib_01_corporal";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_pib_rifleman : fow_s_uk_rifleman {
		editorSubcategory = "fow_s_uk_pib";
		uniformClass = "fow_u_uk_bd40_pib_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_pib_bren_gunner : fow_s_uk_bren_gunner {
		editorSubcategory = "fow_s_uk_pib";
		uniformClass = "fow_u_uk_bd40_pib_01_lance_corporal";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_pib_bren_asst : fow_s_uk_bren_asst {
		editorSubcategory = "fow_s_uk_pib";
		uniformClass = "fow_u_uk_bd40_pib_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_pib_medic : fow_s_uk_medic {
		editorSubcategory = "fow_s_uk_pib";
		uniformClass = "fow_u_uk_bd40_pib_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_pib_radio_operator : fow_s_uk_radio_operator {
		editorSubcategory = "fow_s_uk_pib";
		uniformClass = "fow_u_uk_bd40_pib_01_private";
	};
	class fow_s_uk_pib_at : fow_s_uk_at {
		editorSubcategory = "fow_s_uk_pib";
		uniformClass = "fow_u_uk_bd40_pib_01_private";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pib_at_asst : fow_s_uk_at_asst {
		editorSubcategory = "fow_s_uk_pib";
		uniformClass = "fow_u_uk_bd40_pib_01_private";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	//BP
	class fow_s_uk_bp_officer : fow_s_uk_officer {
		editorSubcategory = "fow_s_uk_bp";
		uniformClass = "fow_u_uk_bd40_bp_01_lieutenant";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_bp_section_commander : fow_s_uk_section_commander {
		editorSubcategory = "fow_s_uk_bp";
		uniformClass = "fow_u_uk_bd40_bp_01_sergeant";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_bp_teamleader : fow_s_uk_teamleader {
		editorSubcategory = "fow_s_uk_bp";
		uniformClass = "fow_u_uk_bd40_bp_01_corporal";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_bp_rifleman : fow_s_uk_rifleman {
		editorSubcategory = "fow_s_uk_bp";
		uniformClass = "fow_u_uk_bd40_bp_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_bp_bren_gunner : fow_s_uk_bren_gunner {
		editorSubcategory = "fow_s_uk_bp";
		uniformClass = "fow_u_uk_bd40_bp_01_lance_corporal";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_bp_bren_asst : fow_s_uk_bren_asst {
		editorSubcategory = "fow_s_uk_bp";
		uniformClass = "fow_u_uk_bd40_bp_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_bp_medic : fow_s_uk_medic {
		editorSubcategory = "fow_s_uk_bp";
		uniformClass = "fow_u_uk_bd40_bp_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_bp_radio_operator : fow_s_uk_radio_operator {
		editorSubcategory = "fow_s_uk_bp";
		uniformClass = "fow_u_uk_bd40_bp_01_private";
	};
	class fow_s_uk_bp_at : fow_s_uk_at {
		editorSubcategory = "fow_s_uk_bp";
		uniformClass = "fow_u_uk_bd40_bp_01_private";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_bp_at_asst : fow_s_uk_at_asst {
		editorSubcategory = "fow_s_uk_bp";
		uniformClass = "fow_u_uk_bd40_bp_01_private";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};		
	};

	//SEAC
	class fow_s_uk_seac_officer: fow_s_uk_officer {
		editorSubcategory = "fow_s_uk_SEAC";
		uniformClass = "fow_u_uk_bd40_seac_01_lieutenant";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_section_commander: fow_s_uk_section_commander {
		editorSubcategory = "fow_s_uk_SEAC";
		uniformClass = "fow_u_uk_bd40_seac_02_sergeant";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_teamleader: fow_s_uk_teamleader	{
		editorSubcategory = "fow_s_uk_SEAC";
		uniformClass = "fow_u_uk_bd40_seac_02_corporal";
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_rifleman: fow_s_uk_rifleman	{
		editorSubcategory = "fow_s_uk_SEAC";
		uniformClass = "fow_u_uk_bd40_seac_02_private";
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_bren_gunner: fow_s_uk_bren_gunner {
		editorSubcategory = "fow_s_uk_SEAC";
		uniformClass = "fow_u_uk_bd40_seac_02_lance_corporal";
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_bren_asst: fow_s_uk_bren_asst {
		editorSubcategory = "fow_s_uk_SEAC";
		uniformClass = "fow_u_uk_bd40_seac_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_medic: fow_s_uk_medic {
		editorSubcategory = "fow_s_uk_SEAC";
		uniformClass = "fow_u_uk_bd40_seac_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_radio_operator : fow_s_uk_radio_operator {
		editorSubcategory = "fow_s_uk_SEAC";
		uniformClass = "fow_u_uk_bd40_seac_01_private";
	};
	class fow_s_uk_seac_at: fow_s_uk_at {
		editorSubcategory = "fow_s_uk_SEAC";
		uniformClass = "fow_u_uk_bd40_seac_02_private";
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_at_asst: fow_s_uk_at_asst {
		editorSubcategory = "fow_s_uk_SEAC";
		uniformClass = "fow_u_uk_bd40_seac_02_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};

	class fow_s_uk_seac_officer_l: fow_s_uk_seac_officer {
		displayName = "Officer (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_section_commander_l: fow_s_uk_seac_section_commander {
		displayName = "Section commander (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_teamleader_l: fow_s_uk_seac_teamleader {
		displayName = "Team Leader (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_rifleman_l: fow_s_uk_seac_rifleman {
		displayName = "Rifleman (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_bren_gunner_l: fow_s_uk_seac_bren_gunner {
		displayName = "Machine gunner (Bren, light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_bren_asst_l: fow_s_uk_seac_bren_asst {
		displayName = "Asst. Bren gunner (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_medic_l: fow_s_uk_seac_medic {
		displayName = "Medic (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_radio_operator_l : fow_s_uk_seac_radio_operator {
		displayName = "Radio Operator (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_01","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_at_l: fow_s_uk_seac_at {
		displayName = "AT gunner (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_seac_at_asst_l: fow_s_uk_seac_at_asst {
		displayName = "Asst. AT gunner (light)";
		linkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_jungle_hat_02","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};	
	
	//CAN
	class fow_s_uk_can_01_officer : fow_s_uk_officer {
		editorSubcategory = "fow_s_uk_can_01";
		uniformClass = "fow_u_uk_bd40_can_01_lieutenant";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_can_01_section_commander : fow_s_uk_section_commander {
		editorSubcategory = "fow_s_uk_can_01";
		uniformClass = "fow_u_uk_bd40_can_01_sergeant";
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_can_01_teamleader : fow_s_uk_teamleader {
		editorSubcategory = "fow_s_uk_can_01";
		uniformClass = "fow_u_uk_bd40_can_01_corporal";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_can_01_rifleman : fow_s_uk_rifleman {
		editorSubcategory = "fow_s_uk_can_01";
		uniformClass = "fow_u_uk_bd40_can_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_can_01_bren_gunner : fow_s_uk_bren_gunner {
		editorSubcategory = "fow_s_uk_can_01";
		uniformClass = "fow_u_uk_bd40_can_01_lance_corporal";
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_can_01_bren_asst : fow_s_uk_bren_asst {
		editorSubcategory = "fow_s_uk_can_01";
		uniformClass = "fow_u_uk_bd40_can_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_can_01_medic : fow_s_uk_medic {
		editorSubcategory = "fow_s_uk_can_01";
		uniformClass = "fow_u_uk_bd40_can_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_can_01_radio_operator : fow_s_uk_radio_operator {
		editorSubcategory = "fow_s_uk_can_01";
		uniformClass = "fow_u_uk_bd40_can_01_private";
	};
	class fow_s_uk_can_01_at : fow_s_uk_at {
		editorSubcategory = "fow_s_uk_can_01";
		uniformClass = "fow_u_uk_bd40_can_01_private";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_can_01_at_asst : fow_s_uk_at_asst {
		editorSubcategory = "fow_s_uk_can_01";
		uniformClass = "fow_u_uk_bd40_can_01_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};		
	};	
	class fow_s_uk_can_02_officer : fow_s_uk_officer {
		editorSubcategory = "fow_s_uk_can_02";
		uniformClass = "fow_u_uk_bd40_can_02_lieutenant";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_can_02_section_commander : fow_s_uk_section_commander {
		editorSubcategory = "fow_s_uk_can_02";
		uniformClass = "fow_u_uk_bd40_can_02_sergeant";
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_can_02_teamleader : fow_s_uk_teamleader {
		editorSubcategory = "fow_s_uk_can_02";
		uniformClass = "fow_u_uk_bd40_can_02_corporal";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_can_02_rifleman : fow_s_uk_rifleman {
		editorSubcategory = "fow_s_uk_can_02";
		uniformClass = "fow_u_uk_bd40_can_02_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_can_02_bren_gunner : fow_s_uk_bren_gunner {
		editorSubcategory = "fow_s_uk_can_02";
		uniformClass = "fow_u_uk_bd40_can_02_lance_corporal";
		linkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net_camo","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_can_02_bren_asst : fow_s_uk_bren_asst {
		editorSubcategory = "fow_s_uk_can_02";
		uniformClass = "fow_u_uk_bd40_can_02_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};	
	};
	class fow_s_uk_can_02_medic : fow_s_uk_medic {
		editorSubcategory = "fow_s_uk_can_02";
		uniformClass = "fow_u_uk_bd40_can_02_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};		
	};
	class fow_s_uk_can_02_radio_operator : fow_s_uk_radio_operator {
		editorSubcategory = "fow_s_uk_can_02";
		uniformClass = "fow_u_uk_bd40_can_02_private";
	};
	class fow_s_uk_can_02_at : fow_s_uk_at {
		editorSubcategory = "fow_s_uk_can_02";
		uniformClass = "fow_u_uk_bd40_can_02_private";
		linkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_can_02_at_asst : fow_s_uk_at_asst {
		editorSubcategory = "fow_s_uk_can_02";
		uniformClass = "fow_u_uk_bd40_can_02_private";
		linkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_net","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};		
	};	
	//PARA
	class fow_s_uk_para_officer : fow_s_uk_para {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Para) Officer";
		uniformClass = "fow_u_uk_parasmock";	

		weapons[] = {"fow_w_sten_mk5","Throw","Put"};
		respawnWeapons[] = {"fow_w_sten_mk5","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_para_section_commander : fow_s_uk_para {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Para) Section commander";
		uniformClass = "fow_u_uk_parasmock";	

		weapons[] = {"fow_w_sten_mk5","Throw","Put"};
		respawnWeapons[] = {"fow_w_sten_mk5","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_para_teamleader : fow_s_uk_para {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Para) Team Leader";
		uniformClass = "fow_u_uk_parasmock";	

		weapons[] = {"fow_w_sten_mk5","Throw","Put"};
		respawnWeapons[] = {"fow_w_sten_mk5","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_para_rifleman : fow_s_uk_para {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Para) Rifleman";
		uniformClass = "fow_u_uk_parasmock";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_uk_bergenpack";
		
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
	class fow_s_uk_para_bren_gunner : fow_s_uk_para {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Para) Machine gunner (Bren)";
		uniformClass = "fow_u_uk_parasmock";	

		weapons[] = {"fow_w_bren","Throw","Put"};
		respawnWeapons[] = {"fow_w_bren","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_uk_bergenpack";
		
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
	class fow_s_uk_para_bren_asst : fow_s_uk_para {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Para) Asst. Bren gunner";
		uniformClass = "fow_u_uk_parasmock";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_uk_bergenpack";
		
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
	class fow_s_uk_para_medic : fow_s_uk_para {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Para) Medic";
		uniformClass = "fow_u_uk_parasmock";
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_uk_bergenpack_medic";
		
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
	class fow_s_uk_para_radio_operator : fow_s_uk_para_rifleman {
		dlc = "fow_mod";
		displayName = "(Para) Radio Operator";

		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		backpack = "fow_b_uk_p37_radio_blanco";
	};
	class fow_s_uk_para_at : fow_s_uk_para {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Para) AT gunner";
		uniformClass = "fow_u_uk_parasmock";	

		weapons[] = {"fow_w_webley","fow_w_piat","Throw","Put"};
		respawnWeapons[] = {"fow_w_webley","fow_w_piat","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_para_at_asst : fow_s_uk_para {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Para) Asst. AT gunner";
		uniformClass = "fow_u_uk_parasmock";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		
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

	//PARA - Poland
	class fow_s_uk_pol_para_officer : fow_s_uk_para_officer {
		editorSubcategory = "fow_s_uk_para_pol";
		uniformClass = "fow_u_uk_pol_parasmock";	

		linkedItems[] = {"fow_h_uk_pol_mk2_para","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_pol_mk2_para","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};		
	class fow_s_uk_pol_para_section_commander : fow_s_uk_para_section_commander {
		editorSubcategory = "fow_s_uk_para_pol";
		uniformClass = "fow_u_uk_pol_parasmock";	

		linkedItems[] = {"fow_h_uk_pol_mk2_para_camo","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_pol_mk2_para_camo","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_para_teamleader : fow_s_uk_para_teamleader {
		editorSubcategory = "fow_s_uk_para_pol";
		uniformClass = "fow_u_uk_pol_parasmock";	

		linkedItems[] = {"fow_h_uk_pol_mk2_para_camo","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_pol_mk2_para_camo","fow_v_uk_para_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};		
	class fow_s_uk_pol_para_rifleman : fow_s_uk_para_rifleman {
		editorSubcategory = "fow_s_uk_para_pol";
		uniformClass = "fow_u_uk_parasmock";	

		linkedItems[] = {"fow_h_uk_mk2_para_camo","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para_camo","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_para_bren_gunner : fow_s_uk_para_bren_gunner {
		editorSubcategory = "fow_s_uk_para_pol";

		linkedItems[] = {"fow_h_uk_mk2_para_camo","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para_camo","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_para_bren_asst : fow_s_uk_para_bren_asst {
		editorSubcategory = "fow_s_uk_para_pol";
		uniformClass = "fow_u_uk_pol_parasmock";	

		linkedItems[] = {"fow_h_uk_mk2_para_camo","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para_camo","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};	
	class fow_s_uk_pol_para_medic : fow_s_uk_para_medic {
		editorSubcategory = "fow_s_uk_para_pol";

		linkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_para_radio_operator : fow_s_uk_para_radio_operator {
		editorSubcategory = "fow_s_uk_para_pol";
		
		linkedItems[] = {"fow_h_uk_mk2_para_camo","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para_camo","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_para_at : fow_s_uk_para_at {
		editorSubcategory = "fow_s_uk_para_pol";

		linkedItems[] = {"fow_h_uk_pol_mk2_para_camo","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_pol_mk2_para_camo","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_para_at_asst : fow_s_uk_para_at_asst {
		editorSubcategory = "fow_s_uk_para_pol";	

		linkedItems[] = {"fow_h_uk_mk2_para_camo","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_mk2_para_camo","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};	

	//Commandos
	class fow_s_uk_cdo_officer : fow_s_uk_commando {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(CDO) Officer";
		uniformClass = "fow_u_uk_bd40_commando_01_private";	

		backpack = "fow_b_uk_bergenpack_thompson";
		
		weapons[] = {"fow_w_m1_thompson","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_thompson","Throw","Put"};
		linkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_e_no36mk1",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_e_no36mk1",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
	};
	class fow_s_uk_cdo_section_commander : fow_s_uk_commando {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(CDO) Section commander";
		uniformClass = "fow_u_uk_bd40_commando_01_private";	

		backpack = "fow_b_uk_bergenpack_thompson";
		
		weapons[] = {"fow_w_m1_thompson","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_thompson","Throw","Put"};
		linkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"smokeShell",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"smokeShell",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
	};
	class fow_s_uk_cdo_teamleader : fow_s_uk_commando {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(CDO) Team Leader";
		uniformClass = "fow_u_uk_bd40_commando_01_private";	

		backpack = "fow_b_uk_bergenpack_thompson";
		
		weapons[] = {"fow_w_m1_thompson","Throw","Put"};
		respawnWeapons[] = {"fow_w_m1_thompson","Throw","Put"};
		linkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"smokeShell",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
		respawnMagazines[] =
		{
			"fow_e_no36mk1",
			"fow_e_no36mk1",
			"smokeShell",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp",
			"fow_30Rnd_45acp"
		};
	};
	class fow_s_uk_cdo_rifleman : fow_s_uk_commando {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(CDO) Rifleman";
		uniformClass = "fow_u_uk_bd40_commando_01_private";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_uk_bergenpack_rifleman";
		
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
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303"
		};
	};
	class fow_s_uk_cdo_bren_gunner : fow_s_uk_commando {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(CDO) Machine gunner (Bren)";
		uniformClass = "fow_u_uk_bd40_commando_01_private";	

		weapons[] = {"fow_w_bren","Throw","Put"};
		respawnWeapons[] = {"fow_w_bren","Throw","Put"};
		linkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_uk_bergenpack_bren";
		
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
	class fow_s_uk_cdo_bren_asst : fow_s_uk_commando {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(CDO) Asst. Bren gunner";
		uniformClass = "fow_u_uk_bd40_commando_01_private";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_uk_bergenpack_bren";
		
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
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_30Rnd_303_bren",
			"fow_30Rnd_303_bren"
		};
	};
	class fow_s_uk_cdo_medic : fow_s_uk_commando {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(CDO) Medic";
		uniformClass = "fow_u_uk_bd40_commando_01_private";
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_uk_bergenpack_medic";
		
		magazines[] = 		{
			"smokeShell",
			"smokeShell",
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
			"smokeShell",
			"smokeShell",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303",
			"fow_10Rnd_303"
		};
	};
	class fow_s_uk_cdo_radio_operator : fow_s_uk_cdo_rifleman {
		dlc = "fow_mod";
		displayName = "(CDO) Radio Operator";

		linkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		backpack = "fow_b_uk_p37_radio_blanco";
	};
	class fow_s_uk_cdo_at : fow_s_uk_commando {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(CDO) AT gunner";
		uniformClass = "fow_u_uk_bd40_commando_01_private";	

		weapons[] = {"fow_w_webley","fow_w_piat","Throw","Put"};
		respawnWeapons[] = {"fow_w_webley","fow_w_piat","Throw","Put"};
		linkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_cdo_at_asst : fow_s_uk_commando {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(CDO) Asst. AT gunner";
		uniformClass = "fow_u_uk_bd40_commando_01_private";	

		weapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		respawnWeapons[] = {"fow_w_leeenfield_no4mk1","Throw","Put"};
		linkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		
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
	class fow_s_uk_cdo_kieffer_officer : fow_s_uk_cdo_officer {
		displayName = "(CDO K) Officer";
		editorSubcategory = "fow_s_uk_commando_kieffer";
		uniformClass = "fow_u_uk_bd40_kieffer_02";	
		linkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_cdo_kieffer_section_commander : fow_s_uk_cdo_section_commander {
		displayName = "(CDO K) Section commander";
		editorSubcategory = "fow_s_uk_commando_kieffer";
		uniformClass = "fow_u_uk_bd40_kieffer_01";	
		linkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_cdo_kieffer_teamleader : fow_s_uk_cdo_teamleader {
		displayName = "(CDO K) Team Leader";
		editorSubcategory = "fow_s_uk_commando_kieffer";
		uniformClass = "fow_u_uk_bd40_kieffer_02";	
		linkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_sten_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_cdo_kieffer_rifleman : fow_s_uk_cdo_rifleman {
		displayName = "(CDO K) Rifleman";
		editorSubcategory = "fow_s_uk_commando_kieffer";
		uniformClass = "fow_u_uk_bd40_kieffer_01";	
		linkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_cdo_kieffer_bren_gunner : fow_s_uk_cdo_bren_gunner {
		displayName = "(CDO K) Machine gunner (Bren)";
		editorSubcategory = "fow_s_uk_commando_kieffer";
		uniformClass = "fow_u_uk_bd40_kieffer_02";	
		linkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_cdo_kieffer_bren_asst : fow_s_uk_cdo_bren_asst {
		displayName = "(CDO K) Asst. Bren gunner";
		editorSubcategory = "fow_s_uk_commando_kieffer";
		uniformClass = "fow_u_uk_bd40_kieffer_01";	
		linkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_bren","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_bren","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_cdo_kieffer_medic : fow_s_uk_cdo_medic {
		displayName = "(CDO K) Medic";
		editorSubcategory = "fow_s_uk_commando_kieffer";
		uniformClass = "fow_u_uk_bd40_kieffer_02";	
		linkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_cdo_kieffer_radio_operator : fow_s_uk_cdo_kieffer_rifleman {
		dlc = "fow_mod";
		displayName = "(CDO K) Radio Operator";

		linkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		backpack = "fow_b_uk_p37_radio_blanco";
	};
	class fow_s_uk_cdo_kieffer_at : fow_s_uk_commando {
		displayName = "(CDO K) AT gunner";
		editorSubcategory = "fow_s_uk_commando_kieffer";
		uniformClass = "fow_u_uk_bd40_kieffer_02";
		linkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_cdo_kieffer_at_asst : fow_s_uk_commando {
		displayName = "(CDO K) Asst. AT gunner";
		editorSubcategory = "fow_s_uk_commando_kieffer";
		uniformClass = "fow_u_uk_bd40_kieffer_02";	
		linkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_kieffer","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	//No.5 Commando Norway
	class fow_s_uk_nor_cdo_officer : fow_s_uk_cdo_officer {
		displayName = "(CDO NOR) Officer";
		editorSubcategory = "fow_s_uk_commando_nor";
		uniformClass = "fow_u_uk_bd40_nor_01_commando_lieutenant";	
		linkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nor_cdo_section_commander : fow_s_uk_cdo_section_commander {
		displayName = "(CDO NOR) Section commander";
		editorSubcategory = "fow_s_uk_commando_nor";
		uniformClass = "fow_u_uk_bd40_nor_01_commando_sergeant";	
		linkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_officer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_officer","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nor_cdo_teamleader : fow_s_uk_cdo_teamleader {
		displayName = "(CDO NOR) Team Leader";
		editorSubcategory = "fow_s_uk_commando_nor";
		uniformClass = "fow_u_uk_bd40_nor_01_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_sten","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_sten","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nor_cdo_rifleman : fow_s_uk_cdo_rifleman {
		displayName = "(CDO NOR) Rifleman";
		editorSubcategory = "fow_s_uk_commando_nor";
		uniformClass = "fow_u_uk_bd40_nor_01_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nor_cdo_bren_gunner : fow_s_uk_cdo_bren_gunner {
		displayName = "(CDO NOR) Machine gunner (Bren)";
		editorSubcategory = "fow_s_uk_commando_nor";
		uniformClass = "fow_u_uk_bd40_nor_02_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_bren","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_bren","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nor_cdo_bren_asst : fow_s_uk_cdo_bren_asst {
		displayName = "(CDO NOR) Asst. Bren gunner";
		editorSubcategory = "fow_s_uk_commando_nor";
		uniformClass = "fow_u_uk_bd40_nor_02_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nor_cdo_medic : fow_s_uk_cdo_medic {
		displayName = "(CDO NOR) Medic";
		editorSubcategory = "fow_s_uk_commando_nor";
		uniformClass = "fow_u_uk_bd40_nor_01_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nor_cdo_radio_operator : fow_s_uk_nor_cdo_rifleman {
		dlc = "fow_mod";
		displayName = "(CDO NOR) Radio Operator";

		linkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		backpack = "fow_b_uk_p37_radio_blanco";
	};
	class fow_s_uk_nor_cdo_at : fow_s_uk_commando {
		displayName = "(CDO NOR) AT gunner";
		editorSubcategory = "fow_s_uk_commando_nor";
		uniformClass = "fow_u_uk_bd40_nor_01_commando_private";
		linkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nor_cdo_at_asst : fow_s_uk_commando {
		displayName = "(CDO NOR) Asst. AT gunner";
		editorSubcategory = "fow_s_uk_commando_nor";
		uniformClass = "fow_u_uk_bd40_nor_02_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nor","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	//No.6 Commando Poland
	class fow_s_uk_pol_cdo_officer : fow_s_uk_cdo_officer {
		displayName = "(CDO POL) Officer";
		editorSubcategory = "fow_s_uk_commando_pol";
		uniformClass = "fow_u_uk_bd40_pol_01_commando_lieutenant";	
		linkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_cdo_section_commander : fow_s_uk_cdo_section_commander {
		displayName = "(CDO POL) Section commander";
		editorSubcategory = "fow_s_uk_commando_pol";
		uniformClass = "fow_u_uk_bd40_pol_01_commando_sergeant";	
		linkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_cdo_teamleader : fow_s_uk_cdo_teamleader {
		displayName = "(CDO POL) Team Leader";
		editorSubcategory = "fow_s_uk_commando_pol";
		uniformClass = "fow_u_uk_bd40_pol_01_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_sten","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_sten","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_cdo_rifleman : fow_s_uk_cdo_rifleman {
		displayName = "(CDO POL) Rifleman";
		editorSubcategory = "fow_s_uk_commando_pol";
		uniformClass = "fow_u_uk_bd40_pol_01_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_cdo_bren_gunner : fow_s_uk_cdo_bren_gunner {
		displayName = "(CDO POL) Machine gunner (Bren)";
		editorSubcategory = "fow_s_uk_commando_pol";
		uniformClass = "fow_u_uk_bd40_pol_02_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_cdo_bren_asst : fow_s_uk_cdo_bren_asst {
		displayName = "(CDO POL) Asst. Bren gunner";
		editorSubcategory = "fow_s_uk_commando_pol";
		uniformClass = "fow_u_uk_bd40_pol_02_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_bren","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_bren","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_cdo_medic : fow_s_uk_cdo_medic {
		displayName = "(CDO POL) Medic";
		editorSubcategory = "fow_s_uk_commando_pol";
		uniformClass = "fow_u_uk_bd40_pol_01_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_cdo_radio_operator : fow_s_uk_pol_cdo_rifleman {
		dlc = "fow_mod";
		displayName = "(CDO POL) Radio Operator";

		linkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		backpack = "fow_b_uk_p37_radio_blanco";
	};
	class fow_s_uk_pol_cdo_at : fow_s_uk_commando {
		displayName = "(CDO POL) AT gunner";
		editorSubcategory = "fow_s_uk_commando_pol";
		uniformClass = "fow_u_uk_bd40_pol_01_commando_private";
		linkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_pol_cdo_at_asst : fow_s_uk_commando {
		displayName = "(CDO POL) Asst. AT gunner";
		editorSubcategory = "fow_s_uk_commando_pol";
		uniformClass = "fow_u_uk_bd40_pol_02_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_pol","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	//No.2 Commando Netherlands
	class fow_s_uk_nl_cdo_officer : fow_s_uk_cdo_officer {
		displayName = "(CDO NL) Officer";
		editorSubcategory = "fow_s_uk_commando_nl";
		uniformClass = "fow_u_uk_bd40_nl_01_commando_lieutenant";	
		linkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_officer_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nl_cdo_section_commander : fow_s_uk_cdo_section_commander {
		displayName = "(CDO NL) Section commander";
		editorSubcategory = "fow_s_uk_commando_nl";
		uniformClass = "fow_u_uk_bd40_nl_01_commando_sergeant";	
		linkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_officer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_officer","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nl_cdo_teamleader : fow_s_uk_cdo_teamleader {
		displayName = "(CDO NL) Team Leader";
		editorSubcategory = "fow_s_uk_commando_nl";
		uniformClass = "fow_u_uk_bd40_nl_01_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_sten","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_sten","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nl_cdo_rifleman : fow_s_uk_cdo_rifleman {
		displayName = "(CDO NL) Rifleman";
		editorSubcategory = "fow_s_uk_commando_nl";
		uniformClass = "fow_u_uk_bd40_nl_01_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nl_cdo_bren_gunner : fow_s_uk_cdo_bren_gunner {
		displayName = "(CDO NL) Machine gunner (Bren)";
		editorSubcategory = "fow_s_uk_commando_nl";
		uniformClass = "fow_u_uk_bd40_nl_02_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_bren","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_bren","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nl_cdo_bren_asst : fow_s_uk_cdo_bren_asst {
		displayName = "(CDO NL) Asst. Bren gunner";
		editorSubcategory = "fow_s_uk_commando_nl";
		uniformClass = "fow_u_uk_bd40_nl_02_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_bren_green","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nl_cdo_medic : fow_s_uk_cdo_medic {
		displayName = "(CDO NL) Medic";
		editorSubcategory = "fow_s_uk_commando_nl";
		uniformClass = "fow_u_uk_bd40_nl_01_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nl_cdo_radio_operator : fow_s_uk_nl_cdo_rifleman {
		dlc = "fow_mod";
		displayName = "(CDO NL) Radio Operator";

		linkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_base_green","ItemMap","ItemCompass","ItemWatch"};
		backpack = "fow_b_uk_p37_radio_blanco";
	};
	class fow_s_uk_nl_cdo_at : fow_s_uk_commando {
		displayName = "(CDO NL) AT gunner";
		editorSubcategory = "fow_s_uk_commando_nl";
		uniformClass = "fow_u_uk_bd40_nl_01_commando_private";
		linkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_base","ItemMap","ItemCompass","ItemWatch"};
	};
	class fow_s_uk_nl_cdo_at_asst : fow_s_uk_commando {
		displayName = "(CDO NL) Asst. AT gunner";
		editorSubcategory = "fow_s_uk_commando_nl";
		uniformClass = "fow_u_uk_bd40_nl_02_commando_private";	
		linkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_uk_beret_commando_nl","fow_v_uk_para_base_green","ItemMap","ItemCompass","ItemWatch"};
	};