	
	class fow_s_ija_officer : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Officer";
		uniformClass = "fow_u_ija_type98_short";	

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

		weapons[] = {"fow_w_type100","Throw","Put"};
		respawnWeapons[] = {"fow_w_type100","Throw","Put"};
		linkedItems[] = {"fow_h_ija_fieldcap","fow_v_ija_officer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_fieldcap","fow_v_ija_officer","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_e_type97",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_e_type97",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class fow_s_ija_nco : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "NCO";
		uniformClass = "fow_u_ija_type98_short";	

		weapons[] = {"fow_w_type100","Throw","Put"};
		respawnWeapons[] = {"fow_w_type100","Throw","Put"};
		linkedItems[] = {"fow_h_ija_fieldcap_neck","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_fieldcap_neck","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_e_type97",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_e_type97",
			"SmokeShell",
			"SmokeShell"
		};
	};		
	
	class fow_s_ija_rifleman : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman";
		uniformClass = "fow_u_ija_type98";	

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_ija_backpack_rifleman";
		
		magazines[] = 		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_e_type97",
			"fow_e_type97"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_e_type97",
			"fow_e_type97"
		};
	};
	class fow_s_ija_radio_operator: fow_s_ija_rifleman {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Radio Operator";

		backpack = "fow_b_ija_radio";		
	};	
	class fow_s_ija_rifleman_at : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Rifleman (AT)";
		uniformClass = "fow_u_ija_type98";	

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_ija_backpack_rifleman";
		
		magazines[] = 		{
			"fow_e_type99_at",
			"fow_e_type99_at",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58"
		};
		respawnMagazines[] =
		{
			"fow_e_type99_at",
			"fow_e_type99_at",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58"
		};
	};
	class fow_s_ija_type99_gunner : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Machine gunner (Type 99 LMG)";
		uniformClass = "fow_u_ija_type98";	

		weapons[] = {"fow_w_type99_lmg","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99_lmg","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};

		//backpack = "fow_b_ija_backpack_asst_type99";
		
		magazines[] = 		{
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
		respawnMagazines[] =
		{
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
	};
	class fow_s_ija_type99_asst : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Asst. gunner (Type 99 LMG)";
		uniformClass = "fow_u_ija_type98";	

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_ija_backpack_asst_type99";
		
		magazines[] = 		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
	};	
	class fow_s_ija_medic : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Medic";
		uniformClass = "fow_u_ija_type98";
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90","fow_v_ija_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90","fow_v_ija_medic","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_ija_backpack_medic";
		
		magazines[] = 		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"SmokeShell",
			"SmokeShell"
		};
	};
	
	//Foliage
	class fow_s_ija_f_officer : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Foliage) Officer";
		uniformClass = "fow_u_ija_type98_foliage";	

		weapons[] = {"fow_w_type100","Throw","Put"};
		respawnWeapons[] = {"fow_w_type100","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_officer","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_officer","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_e_type97",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_e_type97",
			"SmokeShell",
			"SmokeShell"
		};
	};
	class fow_s_ija_f_nco : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Foliage) NCO";
		uniformClass = "fow_u_ija_type98_foliage";	

		weapons[] = {"fow_w_type100","Throw","Put"};
		respawnWeapons[] = {"fow_w_type100","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_e_type97",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_e_type97",
			"SmokeShell",
			"SmokeShell"
		};
	};		
	class fow_s_ija_f_rifleman : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Foliage) Rifleman";
		uniformClass = "fow_u_ija_type98_foliage";	

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_ija_backpack_rifleman";
		
		magazines[] = 		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_e_type97",
			"fow_e_type97"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_e_type97",
			"fow_e_type97"
		};
	};
	class fow_s_ija_f_radio_operator: fow_s_ija_f_rifleman {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Foliage) Radio Operator";

		backpack = "fow_b_ija_radio";		
	};	
	class fow_s_ija_f_rifleman_at : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Foliage) Rifleman (AT)";
		uniformClass = "fow_u_ija_type98_foliage";	

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_ija_backpack_rifleman";
		
		magazines[] = 		{
			"fow_e_type99_at",
			"fow_e_type99_at",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58"
		};
		respawnMagazines[] =
		{
			"fow_e_type99_at",
			"fow_e_type99_at",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58"
		};
	};
	class fow_s_ija_f_type99_gunner : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Foliage) Machine gunner (Type 99 LMG)";
		uniformClass = "fow_u_ija_type98_foliage";	

		weapons[] = {"fow_w_type99_lmg","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99_lmg","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};

		//backpack = "fow_b_ija_backpack_asst_type99";
		
		magazines[] = 		{
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
		respawnMagazines[] =
		{
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
	};
	class fow_s_ija_f_type99_asst : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Foliage) Asst. gunner (Type 99 LMG)";
		uniformClass = "fow_u_ija_type98_foliage";	

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_ija_backpack_asst_type99";
		
		magazines[] = 		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
	};	
	class fow_s_ija_f_medic : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(Foliage) Medic";
		uniformClass = "fow_u_ija_type98_foliage";
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_foliage","fow_v_ija_medic","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_ija_backpack_foliage_medic";
		
		magazines[] = 		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"SmokeShell",
			"SmokeShell"
		};
	};
	
	//SNLF
	class fow_s_ija_snlf_nco : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(SNLF) NCO";
		uniformClass = "fow_u_ija_type98_snlf";	

		weapons[] = {"fow_w_type100","Throw","Put"};
		respawnWeapons[] = {"fow_w_type100","Throw","Put"};
		linkedItems[] = {"fow_h_ija_fieldcap_marine_neck","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_fieldcap_marine_neck","fow_v_ija_nco","ItemMap","ItemCompass","ItemWatch"};
		
		magazines[] = 		{
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_e_type97",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_32Rnd_8x22",
			"fow_e_type97",
			"SmokeShell",
			"SmokeShell"
		};
	};		
	class fow_s_ija_snlf_rifleman : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(SNLF) Rifleman";
		uniformClass = "fow_u_ija_type98_snlf";	

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_snlf","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_snlf","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_ija_backpack_rifleman";
		
		magazines[] = 		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_e_type97",
			"fow_e_type97"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_e_type97",
			"fow_e_type97"
		};
	};
	class fow_s_ija_snlf_radio_operator: fow_s_ija_snlf_rifleman {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(SNLF) Radio Operator";

		backpack = "fow_b_ija_radio";		
	};		
	class fow_s_ija_snlf_rifleman_at : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(SNLF) Rifleman (AT)";
		uniformClass = "fow_u_ija_type98_snlf";	

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_snlf","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_snlf","fow_v_ija_rifle","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_ija_backpack_rifleman";
		
		magazines[] = 		{
			"fow_e_type99_at",
			"fow_e_type99_at",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58"
		};
		respawnMagazines[] =
		{
			"fow_e_type99_at",
			"fow_e_type99_at",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58"
		};
	};
	class fow_s_ija_snlf_type99_gunner : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(SNLF) Machine gunner (Type 99 LMG)";
		uniformClass = "fow_u_ija_type98_snlf";	

		weapons[] = {"fow_w_type99_lmg","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99_lmg","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_snlf","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_snlf","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};

		//backpack = "fow_b_ija_backpack_asst_type99";
		
		magazines[] = 		{
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
		respawnMagazines[] =
		{
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
	};
	class fow_s_ija_snlf_type99_asst : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(SNLF) Asst. gunner (Type 99 LMG)";
		uniformClass = "fow_u_ija_type98_snlf";	

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_snlf","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_snlf","fow_v_ija_mg","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_ija_backpack_asst_type99";
		
		magazines[] = 		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58",
			"fow_30Rnd_77x58"
		};
	};	
	class fow_s_ija_snlf_medic : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "(SNLF) Medic";
		uniformClass = "fow_u_ija_type98_snlf";
		
		attendant =1;
		icon="iconManMedic";
		picture="pictureHeal";

		weapons[] = {"fow_w_type99","Throw","Put"};
		respawnWeapons[] = {"fow_w_type99","Throw","Put"};
		linkedItems[] = {"fow_h_ija_type90_snlf","fow_v_ija_medic","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_type90_snlf","fow_v_ija_medic","ItemMap","ItemCompass","ItemWatch"};
		
		backpack = "fow_b_ija_backpack_medic";
		
		magazines[] = 		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"SmokeShell",
			"SmokeShell"
		};
		respawnMagazines[] =
		{
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"fow_5Rnd_77x58",
			"SmokeShell",
			"SmokeShell"
		};
	};
	
	
	class fow_s_ija_crewman : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Crewman";
		editorSubcategory = "fow_s_crew";
		uniformClass = "fow_u_ija_type98_short";	

		weapons[] = {"fow_w_type14","Throw","Put"};
		respawnWeapons[] = {"fow_w_type14","Throw","Put"};
		linkedItems[] = {"fow_h_ija_tank_helmet","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_tank_helmet","ItemMap","ItemCompass","ItemWatch"};
		
		//backpack = "fow_b_ija_backpack_rifleman";
		
		magazines[] = 		{
			"fow_8Rnd_8x22",
			"fow_8Rnd_8x22",
			"fow_8Rnd_8x22",
			"fow_8Rnd_8x22",
			"fow_8Rnd_8x22"
		};
		respawnMagazines[] =
		{
			"fow_8Rnd_8x22",
			"fow_8Rnd_8x22",
			"fow_8Rnd_8x22",
			"fow_8Rnd_8x22",
			"fow_8Rnd_8x22"
		};
	};
	class fow_s_ija_pilot : fow_s_ija_base {
		dlc = "fow_mod";
		scope = 2;
		displayName = "Pilot";
		editorSubcategory = "fow_s_crew";
		uniformClass = "fow_u_ija_pilot";
        model = "fow\fow_characters\us\pilot_overall.p3d";

		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		linkedItems[] = {"fow_h_ija_flight_helmet","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ija_flight_helmet","ItemMap","ItemCompass","ItemWatch"};

		
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
		hiddenSelectionsTextures[] = {"fow\fow_characters\us\data\pilot_overall_2_co.paa", "fow\fow_characters\us\data\gloves_leather2_co.paa", "fow\fow_characters\us\data\gloves_leather2_co.paa"};
		hiddenSelectionsMaterials[] = {"fow\fow_characters\us\data\pilot_overall.rvmat", "fow\fow_characters\us\data\gloves_leather.rvmat", "fow\fow_characters\us\data\gloves_leather.rvmat"};
	};
