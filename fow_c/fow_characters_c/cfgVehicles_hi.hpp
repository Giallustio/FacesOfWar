	class fow_hi_soldier01: fow_s_hi_base
	{
		scope = 1;
		displayName = "Horizon Islands soldier 01 private";
		model = "\fow\fow_characters\ija\lodu_IJA_marine.p3d";
		uniformClass = "fow_u_hi_35_01_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\hi\data\len_hi_soldier01_co.paa"};
		
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
	class fow_hi_soldier02: fow_hi_soldier01
	{
		displayName = "Horizon Islands soldier 02 private";
		uniformClass = "fow_u_hi_35_02_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\hi\data\len_hi_soldier02_co.paa"};
	};
	class fow_hi_soldier03: fow_hi_soldier01
	{
		displayName = "Horizon Islands soldier 03 private";
		uniformClass = "fow_u_hi_35_03_private";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\hi\data\len_hi_soldier03_co.paa"};
	};