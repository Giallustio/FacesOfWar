
    class fow_b_usmc_m1928: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\usmc\lodu_usmc_backpack01";
        displayName = "[USMC] Haversack M-1928";
        picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
        maximumLoad = 60;
        mass = 40;
    };
    class fow_b_usmc_m1928_02: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\usmc\lodu_usmc_backpack02";
        displayName = "[USMC] Haversack M-1928";
        picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"fow\fow_characters\usmc\data\sac_usmc_co.paa"};
        maximumLoad = 60;
        mass = 40;
    };
    class fow_b_usmc_m1928_medic: fow_b_usmc_m1928
    {
        scope = 1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};   
	};
    class fow_b_usmc_m1928_asst_bar: fow_b_usmc_m1928
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_20Rnd_762x63
			{
				magazine = "fow_20Rnd_762x63";
				count = 5;
			};
		};   
	};
    class fow_b_usmc_m1928_rifleman: fow_b_usmc_m1928
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_8Rnd_762x63
			{
				magazine = "fow_8Rnd_762x63";
				count = 6;
			};
		};   
	};