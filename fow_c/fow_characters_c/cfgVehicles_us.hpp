	class fow_s_us_m37_01_private: fow_s_us_base
	{
		//dlc = "fow_mod";
		scope = 1;
		displayName = "US soldier 01 private";
		model = "\fow\fow_characters\us\lodu_us_soldier01_private.p3d";
		uniformClass = "fow_u_us_m37_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_soldier01_co.paa"};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\us\data\lodu_us_soldier01.rvmat"};
		
		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = 		{
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[] =
		{
			"HandGrenade",
			"HandGrenade"
		};
	};
	class fows_s_us_m37_02_private: fow_s_us_m37_01_private
	{
		displayName = "US soldier 02 private";
		uniformClass = "fow_u_us_m37_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_soldier02_co.paa"};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\us\data\lodu_us_soldier01.rvmat"};
	};
	class fow_s_us_m41_01_private: fow_s_us_base
	{
		//dlc = "fow_mod";
		scope = 1;
		displayName = "US soldier 02 private";
		model = "\fow\fow_characters\us\lodu_us_soldier02_private.p3d";
		uniformClass = "fow_u_us_m41_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\new_us_soldier01_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\us\data\lodu_us_soldier02.rvmat"};			

		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		magazines[] = 		{
			"HandGrenade",
			"HandGrenade"
		};
		respawnMagazines[] =
		{
			"HandGrenade",
			"HandGrenade"
		};
	};
	class fow_s_us_m41_02_private: fow_s_us_m41_01_private
	{
		dlc = "fow_mod";
		scope = 1;
		uniformClass = "fow_u_us_m41_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\new_us_soldier02_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\us\data\lodu_us_soldier02.rvmat"};	
	};
	class fow_s_us_m41_03_private: fow_s_us_m41_01_private
	{
		dlc = "fow_mod";
		scope = 1;
		uniformClass = "fow_u_us_m41_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\new_us_soldier_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\us\data\lodu_us_soldier02.rvmat"};	
	};
	class fow_s_us_m41_04_private: fow_s_us_m41_01_private
	{
		dlc = "fow_mod";
		scope = 1;
		uniformClass = "fow_u_us_m41_04_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\new_us_soldier03_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\us\data\new_us_soldier03.rvmat"};	
	};
	class fow_s_us_hbt_01_private: fow_s_us_base
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "US soldier HBT 01";
		model = "\fow\fow_characters\usmc\lodu_usmc_soldier01_private.p3d";
		uniformClass = "fow_u_us_hbt_01_private";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_soldier01_hbt_co.paa"};		
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\us\data\lodu_us_soldier_hbt.rvmat"};		

		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
	};	
	class fow_s_us_hbt_02_private: fow_s_us_hbt_01_private
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "US soldier HBT 02";
		uniformClass = "fow_u_us_hbt_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_soldier02_hbt_co.paa"};
	};
	class fow_s_us_m42_ab_01_private: fow_s_us_base	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "US soldier para 01";
		model = "\fow\fow_characters\us\lodu_us_para01_private.p3d";
		uniformClass = "fow_u_us_m42_ab_01_private";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_us_vest01_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\us\data\lodu_us_vest_para.rvmat","\fow\fow_characters\us\data\lodu_us_pant_para.rvmat"};	

		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};

	};
	class fow_s_us_m42_ab_01_corporal: fow_s_us_m42_ab_01_private	{
		uniformClass = "fow_u_us_m42_ab_01_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_us_vest01_corporal_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_sergeant: fow_s_us_m42_ab_01_private	{
		uniformClass = "fow_u_us_m42_ab_01_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest01_sergeant_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_staffsergeant: fow_s_us_m42_ab_01_private	{
		uniformClass = "fow_u_us_m42_ab_01_staffsergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest01_staff_sergeant_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_82_private: fow_s_us_m42_ab_01_private	{
		uniformClass = "fow_u_us_m42_ab_01_82_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_82_01_noflag_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};
	class fow_s_us_m42_ab_01_82_corporal: fow_s_us_m42_ab_01_private {
		uniformClass = "fow_u_us_m42_ab_01_82_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_82_01_noflag_corporal_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_82_sergeant: fow_s_us_m42_ab_01_private {
		uniformClass = "fow_u_us_m42_ab_01_82_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_82_01_noflag_sergeant_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_82_staffsergeant: fow_s_us_m42_ab_01_private {
		uniformClass = "fow_u_us_m42_ab_01_82_staffsergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_82_01_noflag_staff_sergeant_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_82_flag_private: fow_s_us_m42_ab_01_private {
		uniformClass = "fow_u_us_m42_ab_01_82_flag_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_82_01_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_82_flag_corporal: fow_s_us_m42_ab_01_private	{
		uniformClass = "fow_u_us_m42_ab_01_82_flag_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_82_01_corporal_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_82_flag_sergeant: fow_s_us_m42_ab_01_private	{
		uniformClass = "fow_u_us_m42_ab_01_82_flag_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_82_01_sergeant_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_82_flag_staffsergeant: fow_s_us_m42_ab_01_private	{
		uniformClass = "fow_u_us_m42_ab_01_82_flag_staffsergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_82_01_staff_sergeant_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_101_private: fow_s_us_m42_ab_01_private {
		uniformClass = "fow_u_us_m42_ab_01_101_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_101_01_noflag_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_101_corporal: fow_s_us_m42_ab_01_private {
		uniformClass = "fow_u_us_m42_ab_01_101_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_101_01_noflag_corporal_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_101_sergeant: fow_s_us_m42_ab_01_private {
		uniformClass = "fow_u_us_m42_ab_01_101_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_101_01_noflag_sergeant_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_101_staffsergeant: fow_s_us_m42_ab_01_private {
		uniformClass = "fow_u_us_m42_ab_01_101_staffsergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_101_01_noflag_staff_sergeant_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_101_flag_private: fow_s_us_m42_ab_01_private {
		uniformClass = "fow_u_us_m42_ab_01_101_flag_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_101_01_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_101_flag_corporal: fow_s_us_m42_ab_01_private	{
		uniformClass = "fow_u_us_m42_ab_01_101_flag_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_101_01_corporal_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_101_flag_sergeant: fow_s_us_m42_ab_01_private	{
		uniformClass = "fow_u_us_m42_ab_01_101_flag_sergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_101_01_sergeant_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	
	class fow_s_us_m42_ab_01_101_flag_staffsergeant: fow_s_us_m42_ab_01_private	{
		uniformClass = "fow_u_us_m42_ab_01_101_flag_staffsergeant";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\para_US_vest_101_01_staff_sergeant_co.paa","\fow\fow_characters\us\data\para_us_pant01_co.paa"};	
	};	