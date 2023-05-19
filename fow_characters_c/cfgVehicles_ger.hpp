	
	class fow_s_ger_heer_01_corporal: fow_s_ger_base
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Heer soldier 01 corporal";
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_corporal.p3d";
		uniformClass = "fow_u_ger_m43_01_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};		
	
	};
	class fow_s_ger_heer_01_lance_corporal: fow_s_ger_heer_01_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Heer soldier 01 lance corporal";
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_lance_corporal.p3d";
		uniformClass = "fow_u_ger_m43_01_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};	
	};
	class fow_s_ger_heer_01_private: fow_s_ger_heer_01_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Heer soldier 01 private";
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_private.p3d";
		uniformClass = "fow_u_ger_m43_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};	
	};
	class fow_s_ger_heer_01_frag_private: fow_s_ger_heer_01_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Heer soldier 01 (frag) private";
		model = "\fow\fow_characters\ger\lodu_heer_soldier011_private.p3d";
		uniformClass = "fow_u_ger_m43_01_frag_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};	
	};
	class fow_s_ger_heer_02_corporal: fow_s_ger_base
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Heer soldier 02 corporal";
		model = "\fow\fow_characters\ger\lodu_heer_soldier02_corporal.p3d";
		uniformClass = "fow_u_ger_m43_02_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_co.paa"};	

		
		class Wounds {
			tex[] = {};
			mat[] = {
				"fow\fow_characters\ger\data\lodu_heer_soldier02.rvmat",
				"fow\fow_characters\ger\data\lodu_heer_soldier02_w1.rvmat", 
				"fow\fow_characters\ger\data\lodu_heer_soldier02_w2.rvmat", 
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\m_white_01.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};
	};
	class fow_s_ger_heer_02_lance_corporal: fow_s_ger_heer_02_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Heer soldier 02 lance corporal";
		model = "\fow\fow_characters\ger\lodu_heer_soldier02_lance_corporal.p3d";
		uniformClass = "fow_u_ger_m43_02_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_co.paa"};
	};
	class fow_s_ger_heer_02_private: fow_s_ger_heer_02_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Heer soldier 02 private";
		model = "\fow\fow_characters\ger\lodu_heer_soldier02_private.p3d";
		uniformClass = "fow_u_ger_m43_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_co.paa"};
	};
	class fow_s_ger_heer_03_private: fow_s_ger_heer_02_private
	{//Herringbone
		dlc = "fow_mod";
		scope = 1;
		displayName = "Heer soldier 03 private";
		model = "\fow\fow_characters\ger\lodu_heer_soldier02_private.p3d";
		uniformClass = "fow_u_ger_m43_hbt_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_herringbone_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_herringbone.rvmat"};
	};
	
	class fow_s_ger_heer_tankcrew_01: fow_s_ger_base {
		dlc = "fow_mod";
		editorSubcategory = "fow_s_crew";
		scope = 1;
		displayName = "Tank crew 01";
		model = "\fow\fow_characters\ger\lodu_tank_crew01.p3d";
		uniformClass = "fow_u_ger_tankcrew_01";
		hiddenSelections[] = {"camo", "camo_shutz","camo_gefreiter", "camo_obergefreiter", "camo_unteroffizier", "camo_2nd_leutnant","camo_iron_cross"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black01_co.paa", "", "", "", "", "",""};
		
		weapons[] = {"fow_w_p08","Throw","Put"};
		respawnWeapons[] = {"fow_w_p08","Throw","Put"};
		
		linkedItems[] = {"fow_h_ger_feldmutze_panzer","fow_v_heer_tankcrew_p38","ItemMap","ItemCompass","ItemWatch"};
		respawnLinkedItems[] = {"fow_h_ger_feldmutze_panzer","fow_v_heer_tankcrew_p38","ItemMap","ItemCompass","ItemWatch"};
		
		Items[] = {"fow_h_ger_feldmutze_panzer","FirstAidKit"};
		RespawnItems[] = {"fow_h_ger_feldmutze_panzer","FirstAidKit"};
		
		magazines[] = 		{
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19"
		};
		respawnMagazines[] =
		{
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19"
		};		
	};
	class fow_s_ger_heer_tankcrew_01_shutz: fow_s_ger_heer_tankcrew_01 {
		scope = 2;
		displayName = "Tank crew 01 shutz";
		uniformClass = "fow_u_ger_tankcrew_01_shutz";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black01_co.paa", "\fow\fow_characters\ger\data\panzer_crew_black01_co.paa","", "", "", "",""};		
	};
	class fow_s_ger_heer_tankcrew_01_gefreiter: fow_s_ger_heer_tankcrew_01 {
		scope = 2;
		displayName = "Tank crew 01 gefreiter";
		uniformClass = "fow_u_ger_tankcrew_01_gefreiter";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black01_co.paa", "", "\fow\fow_characters\ger\data\panzer_crew_black01_co.paa", "", "", "",""};		
	};
	class fow_s_ger_heer_tankcrew_01_obergefreiter: fow_s_ger_heer_tankcrew_01 {
		scope = 2;
		displayName = "Tank crew 01 obergefreiter";
		uniformClass = "fow_u_ger_tankcrew_01_obergefreiter";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black01_co.paa", "", "", "\fow\fow_characters\ger\data\panzer_crew_black01_co.paa", "", "",""};		
	};
	class fow_s_ger_heer_tankcrew_01_unteroffizier: fow_s_ger_heer_tankcrew_01 {
		scope = 2;
		displayName = "Tank crew 01 unteroffizier";
		uniformClass = "fow_u_ger_tankcrew_01_unteroffizier";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black01_co.paa", "", "", "", "\fow\fow_characters\ger\data\panzer_crew_black01_co.paa", "",""};		
		
		linkedItems[] = {"fow_h_ger_feldmutze_panzer","fow_v_heer_tankcrew_p38","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		respawnLinkedItems[] = {"fow_h_ger_feldmutze_panzer","fow_v_heer_tankcrew_p38","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};

		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		magazines[] = 		{
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
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	class fow_s_ger_heer_tankcrew_01_2nd_leutnant: fow_s_ger_heer_tankcrew_01 {
		scope = 2;
		displayName = "Tank crew 01 2nd_leutnant";
		uniformClass = "fow_u_ger_tankcrew_01_2nd_leutnant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black01_co.paa", "", "", "", "", "\fow\fow_characters\ger\data\panzer_crew_black01_co.paa","\fow\fow_characters\ger\data\panzer_crew_black01_co.paa"};		
		
		linkedItems[] = {"fow_h_ger_feldmutze_panzer","fow_v_heer_tankcrew_p38","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		respawnLinkedItems[] = {"fow_h_ger_feldmutze_panzer","fow_v_heer_tankcrew_p38","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		weapons[] = {"fow_w_mp40","fow_w_p08","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","fow_w_p08","Throw","Put"};
		
		magazines[] = 		{
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19"
		};
		respawnMagazines[] =
		{
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_8Rnd_9x19",
			"fow_8Rnd_9x19"
		};
	};
	class fow_s_ger_heer_tankcrew_02: fow_s_ger_heer_tankcrew_01 {
		dlc = "fow_mod";
		scope = 1;
		displayName = "Tank crew 02";
		uniformClass = "fow_u_ger_tankcrew_02";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black02_co.paa", "", "", "", "", "",""};			
	};
	class fow_s_ger_heer_tankcrew_02_shutz: fow_s_ger_heer_tankcrew_02 {
		scope = 2;
		displayName = "Tank crew 02 shutz";
		uniformClass = "fow_u_ger_tankcrew_02_shutz";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black02_co.paa", "\fow\fow_characters\ger\data\panzer_crew_black02_co.paa","", "", "", "",""};		
	};
	class fow_s_ger_heer_tankcrew_02_gefreiter: fow_s_ger_heer_tankcrew_02 {
		scope = 2;
		displayName = "Tank crew 02 gefreiter";
		uniformClass = "fow_u_ger_tankcrew_02_gefreiter";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black02_co.paa", "", "\fow\fow_characters\ger\data\panzer_crew_black02_co.paa", "", "", "",""};		
	};
	class fow_s_ger_heer_tankcrew_02_obergefreiter: fow_s_ger_heer_tankcrew_02 {
		scope = 2;
		displayName = "Tank crew 02 obergefreiter";
		uniformClass = "fow_u_ger_tankcrew_02_obergefreiter";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black02_co.paa", "", "", "\fow\fow_characters\ger\data\panzer_crew_black02_co.paa", "", "",""};		
	};
	class fow_s_ger_heer_tankcrew_02_unteroffizier: fow_s_ger_heer_tankcrew_02 {
		scope = 2;
		displayName = "Tank crew 02 unteroffizier";
		uniformClass = "fow_u_ger_tankcrew_02_unteroffizier";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black02_co.paa", "", "", "", "\fow\fow_characters\ger\data\panzer_crew_black02_co.paa", "",""};		
		
		linkedItems[] = {"fow_h_ger_feldmutze_panzer","fow_v_heer_tankcrew_p38","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		respawnLinkedItems[] = {"fow_h_ger_feldmutze_panzer","fow_v_heer_tankcrew_p38","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};	
		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		magazines[] = 		{
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
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	class fow_s_ger_heer_tankcrew_02_2nd_leutnant: fow_s_ger_heer_tankcrew_02 {
		scope = 2;
		displayName = "Tank crew 02 2nd_leutnant";
		uniformClass = "fow_u_ger_tankcrew_02_2nd_leutnant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_crew_black02_co.paa", "", "", "", "", "\fow\fow_characters\ger\data\panzer_crew_black02_co.paa","\fow\fow_characters\ger\data\panzer_crew_black02_co.paa"};		
		
		linkedItems[] = {"fow_h_ger_feldmutze_panzer","fow_v_heer_tankcrew_p38","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		respawnLinkedItems[] = {"fow_h_ger_feldmutze_panzer","fow_v_heer_tankcrew_p38","ItemMap","ItemCompass","ItemWatch","fow_i_dienstglas"};
		weapons[] = {"fow_w_mp40","Throw","Put"};
		respawnWeapons[] = {"fow_w_mp40","Throw","Put"};
		
		magazines[] = 		{
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
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40",
			"fow_32Rnd_9x19_mp40"
		};
	};
	
// Panzer Lehr
	class fow_s_ger_heer_pzlehr_01: fow_s_ger_heer_tankcrew_01 {
		dlc = "fow_mod";
		scope = 1;
		displayName = "Heer Panzer Lehr soldier 01";
		uniformClass = "fow_u_ger_pzlehr_01";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "", "", "", "",""};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "", "",""};
	};
	class fow_s_ger_heer_pzlehr_01_shutz: fow_s_ger_heer_pzlehr_01 {
		scope = 1;
		displayName = "Heer Panzer Lehr soldier 01 shutz";
		uniformClass = "fow_u_ger_pzlehr_01_shutz";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa","", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "",""};
	};
	class fow_s_ger_heer_pzlehr_01_gefreiter: fow_s_ger_heer_pzlehr_01 {
		scope = 1;
		displayName = "Heer Panzer Lehr soldier 01 gefreiter";
		uniformClass = "fow_u_ger_pzlehr_01_gefreiter";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "",""};
	};
	class fow_s_ger_heer_pzlehr_01_obergefreiter: fow_s_ger_heer_pzlehr_01 {
		scope = 1;
		displayName = "Heer Panzer Lehr soldier 01 obergefreiter";
		uniformClass = "fow_u_ger_pzlehr_01_obergefreiter";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier02_co.paa", "", "", "\fow\fow_characters\ger\data\panzer_grenadier02_co.paa", "", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "",""};
	};
	class fow_s_ger_heer_pzlehr_01_unteroffizier: fow_s_ger_heer_pzlehr_01 {
		scope = 1;
		displayName = "Heer Panzer Lehr soldier 01 unteroffizier";
		uniformClass = "fow_u_ger_pzlehr_01_unteroffizier";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier02_co.paa", "", "", "", "\fow\fow_characters\ger\data\panzer_grenadier02_co.paa", "",""};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "",""};
	};
	class fow_s_ger_heer_pzlehr_01_2nd_leutnant: fow_s_ger_heer_pzlehr_01 {
		scope = 1;
		displayName = "Heer Panzer Lehr soldier 01 2nd_leutnant";
		uniformClass = "fow_u_ger_pzlehr_01_2nd_leutnant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\panzer_grenadier01_co.paa", "", "", "", "", "\fow\fow_characters\ger\data\panzer_grenadier01_co.paa","\fow\fow_characters\ger\data\panzer_grenadier01_co.paa"};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\panzer_grenadier01.rvmat", "", "", "", "", "\fow\fow_characters\ger\data\panzer_grenadier01.rvmat","\fow\fow_characters\ger\data\panzer_grenadier01.rvmat"};
	};	
	
	
	class fow_s_ger_luft_01_sergeant: fow_s_ger_base
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 01 sergeant";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_sergeant.p3d";
		uniformClass = "fow_u_ger_fall_01_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_base_co.paa"};		
	};
	class fow_s_ger_luft_01_corporal: fow_s_ger_base
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 01 corporal";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_corporal.p3d";
		uniformClass = "fow_u_ger_fall_01_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_base_co.paa"};		
	};
	class fow_s_ger_luft_01_lance_corporal: fow_s_ger_base
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 01 lance corporal";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_lance_corporal.p3d";
		uniformClass = "fow_u_ger_fall_01_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_base_co.paa"};
	};
	class fow_s_ger_luft_01_private: fow_s_ger_base
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 01 private";
		model = "\fow\fow_characters\ger\lodu_luft_fall01_private.p3d";
		uniformClass = "fow_u_ger_fall_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_base_co.paa"};		
	};
	
	class fow_s_ger_luft_02_sergeant: fow_s_ger_luft_01_sergeant
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 02 sergeant";
		uniformClass = "fow_u_ger_fall_02_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy.rvmat"};		
	};
	class fow_s_ger_luft_02_corporal: fow_s_ger_luft_01_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 02 corporal";
		uniformClass = "fow_u_ger_fall_02_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy.rvmat"};		
	};
	class fow_s_ger_luft_02_lance_corporal: fow_s_ger_luft_01_lance_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 02 lance corporal";
		uniformClass = "fow_u_ger_fall_02_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy.rvmat"};			
	};
	class fow_s_ger_luft_02_private: fow_s_ger_luft_01_private
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 02 private";
		uniformClass = "fow_u_ger_fall_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy_co.paa"};	
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_fallshim_italy.rvmat"};		
	};	
	class fow_s_ger_luft_03_sergeant: fow_s_ger_luft_01_sergeant
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 03 sergeant";
		uniformClass = "fow_u_ger_fall_03_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};
	};
	class fow_s_ger_luft_03_corporal: fow_s_ger_luft_01_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 03 corporal";
		uniformClass = "fow_u_ger_fall_03_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};		
	};
	class fow_s_ger_luft_03_lance_corporal: fow_s_ger_luft_01_lance_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 03 lance corporal";
		uniformClass = "fow_u_ger_fall_03_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};		
	};
	class fow_s_ger_luft_03_private: fow_s_ger_luft_01_private
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 03 private";
		uniformClass = "fow_u_ger_fall_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo_co.paa"};		
	};
	class fow_s_ger_luft_04_sergeant: fow_s_ger_luft_01_sergeant
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 04 sergeant";
		uniformClass = "fow_u_ger_fall_04_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};
	};
	class fow_s_ger_luft_04_corporal: fow_s_ger_luft_01_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 04 corporal";
		uniformClass = "fow_u_ger_fall_04_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};		
	};
	class fow_s_ger_luft_04_lance_corporal: fow_s_ger_luft_01_lance_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 04 lance corporal";
		uniformClass = "fow_u_ger_fall_04_lance_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};		
	};
	class fow_s_ger_luft_04_private: fow_s_ger_luft_01_private
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Luftwaffe Fallschirmjäger 04 private";
		uniformClass = "fow_u_ger_fall_04_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_fallshim_camo2_co.paa"};		
	};
	
	class fow_s_ger_ss_peadot_01_private: fow_s_ger_heer_02_private
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Waffen-SS Pea dot soldier 01 private";
		model = "\fow\fow_characters\ger\lodu_pea_dot44_soldier01_private.p3d";
		uniformClass = "fow_u_ger_m43_peadot_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_peadot44_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_peadot44_soldier.rvmat"};
	};
	class fow_s_ger_ss_peadot_02_private: fow_s_ger_ss_peadot_01_private
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Waffen-SS Pea dot soldier 02 private";
		uniformClass = "fow_u_ger_m43_peadot_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_peadot_vest_co.paa"};
	};
	class fow_s_ger_ss_peadot_03_private: fow_s_ger_ss_peadot_01_private
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "Waffen-SS Pea dot soldier 03 private";
		uniformClass = "fow_u_ger_m43_peadot_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_peadot_pant_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_peadot_pant.rvmat"};
	};
	class fow_s_ger_ss_01_private: fow_s_ger_heer_01_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "SS soldier 01 private";
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_private.p3d";
		uniformClass = "fow_u_ger_m43_ss_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_ss_soldier01_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_ss_soldier01.rvmat"};
	};
	class fow_s_ger_ss_smock_01_private: fow_s_ger_heer_01_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "SS smock soldier 01 private";
		model = "\fow\fow_characters\ger\lodu_heer_SS_smock_private.p3d";
		uniformClass = "fow_u_ger_m43_smock_01_private";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier02_peadot_pant_co.paa","\fow\fow_characters\ger\data\waffen_smock01_co.paa"};
		//hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_ss_soldier01.rvmat"};
	};
	class fow_s_ger_ss_smock_02_private: fow_s_ger_heer_01_corporal
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "SS smock soldier 02 private";
		model = "\fow\fow_characters\ger\lodu_heer_SS_smock_boots_private.p3d";
		uniformClass = "fow_u_ger_m43_smock_02_private";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa","\fow\fow_characters\ger\data\waffen_smock01_co.paa"};
		//hiddenSelectionsMaterials[] = {"\fow\fow_characters\ger\data\lodu_ss_soldier01.rvmat"};
	};