	
	class fow_s_usmc_01_private: fow_s_usmc_base
	{
		dlc = "fow_mod";
		scope = 1;
		displayName = "USMC soldier 01";
		model = "\fow\fow_characters\usmc\lodu_usmc_soldier01_private.p3d";
		uniformClass = "fow_u_usmc_p41_01_private";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_usmc02_co.paa"};		

		weapons[] = {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
	};
	class fow_s_usmc_02_private: fow_s_usmc_01_private
	{
		dlc = "fow_mod";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_usmc01_co.paa"};		
	};
	class fow_s_usmc_03_private: fow_s_usmc_01_private
	{
		dlc = "fow_mod";
		model = "\fow\fow_characters\us\lodu_us_soldier02_private.p3d";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_usmc01_m41_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\usmc\data\lodu_usmc01_m41.rvmat"};
	};
	class fow_s_usmc_01_dyed01_1_private: fow_s_usmc_01_private
	{
		dlc = "fow_mod";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_usmc01_dye01_co.paa"};		
	};
	class fow_s_usmc_01_camo01_1_private: fow_s_usmc_01_private
	{
		dlc = "fow_mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_usmc01_camo01_1_co.paa"};		
	};
	class fow_s_usmc_01_camo01_2_private: fow_s_usmc_01_private
	{
		dlc = "fow_mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_usmc01_camo01_2_co.paa"};		
	};
	class fow_s_usmc_01_camo01_3_private: fow_s_usmc_01_private
	{
		dlc = "fow_mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_usmc01_camo01_3_co.paa"};		
	};
	class fow_s_usmc_01_camo02_1_private: fow_s_usmc_01_private
	{
		dlc = "fow_mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_usmc01_camo02_1_co.paa"};		
	};
	class fow_s_usmc_01_camo02_2_private: fow_s_usmc_01_private
	{
		dlc = "fow_mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_usmc01_camo02_2_co.paa"};		
	};
	class fow_s_usmc_01_camo02_3_private: fow_s_usmc_01_private
	{
		dlc = "fow_mod";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_usmc01_camo02_3_co.paa"};		
	};