	

	class fow_aus_soldier01_private: fow_s_aus_base
	{
		//dlc = "fow_mod";
		scope = 1;
		displayName = "AUS soldier 01 private";
		model = "\fow\fow_characters\us\lodu_us_soldier01_private.p3d";
		uniformClass = "fow_u_aus_m37_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\aus\data\lodu_aus_soldier01_co.paa"};	
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\aus\data\lodu_aus_soldier01.rvmat"};	

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
	class fow_aus_soldier02_private: fow_aus_soldier01_private
	{
		displayName = "AUS soldier 02 private";
		model = "\fow\fow_characters\aus\lodu_aus_soldier01_uk_gear.p3d";
		uniformClass = "fow_u_aus_m37_02_private";
	};
	class fow_aus_soldier03_private: fow_aus_soldier01_private
	{
		displayName = "AUS soldier 03 private";
		model = "\fow\fow_characters\aus\lodu_aus_soldier02_uk_gear.p3d";
		uniformClass = "fow_u_aus_m37_03_private";
	};