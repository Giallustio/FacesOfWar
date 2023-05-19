
    class fow_b_uk_p37: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\uk\lodu_brit_backpack01";
        displayName = "[UK] Pattern 37 Backpack (Khaki)";
        picture = "\fow\fow_characters\uk\data\ui\fow_b_uk_p37_ca.paa";
        hiddenSelectionsTextures[]={"fow\fow_characters\uk\data\lodu_brit_backpack01_co.paa"};
        maximumLoad = 60;
        mass = 40;
    };
    class fow_b_uk_p37_medic: fow_b_uk_p37
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
    class fow_b_uk_p37_blanco: fow_b_uk_p37
    {
        scope = 2;
        displayName = "[UK] Pattern 37 Backpack (Green)";
        picture = "\fow\fow_characters\uk\data\ui\fow_b_uk_p37_ca.paa";
        hiddenSelectionsTextures[]={"fow\fow_characters\uk\data\lodu_brit_sac02_co.paa"};
    };
    class fow_b_uk_p37_radio: fow_b_uk_p37
    {
        scope = 2;
        model = "\fow\fow_characters\uk\lodu_brit_backpack_radio";
        displayName = "[UK] Pattern 37 Backpack (Radio)";
        picture = "\fow\fow_characters\uk\data\ui\fow_b_uk_p37_ca.paa";
		hiddenSelections[]={"camo","camo1","camo2"};
        hiddenSelectionsTextures[]={"fow\fow_characters\uk\data\lodu_brit_backpack01_co.paa","fow\fow_characters\uk\data\headphones_co.paa","fow\fow_characters\uk\data\lodu_brit_radio_co.paa"};
        maximumLoad = 60;
        mass = 60;

		//TFAR COMP
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_independent_radio_code";
		tf_dialog = "anprc155_radio_dialog";
		tf_subtype = "digital_lr";
    };
    class fow_b_uk_p37_radio_blanco: fow_b_uk_p37_radio
    {
        displayName = "[UK] Pattern 37 Backpack (Radio-Green)";
        hiddenSelectionsTextures[]={"fow\fow_characters\uk\data\lodu_brit_sac02_co.paa","fow\fow_characters\uk\data\headphones_co.paa","fow\fow_characters\uk\data\lodu_brit_radio_co.paa"};
    };
    class fow_b_uk_p37_shovel: fow_b_uk_p37
    {
        scope = 2;
        model = "\fow\fow_characters\uk\lodu_brit_backpack02";
        displayName = "[UK] Pattern 37 Backpack Shovel (Khaki)";
    };
    class fow_b_uk_p37_blanco_shovel: fow_b_uk_p37_blanco
    {
        scope = 2;
        displayName = "[UK] Pattern 37 Backpack Shovel (Green)";
        model = "\fow\fow_characters\uk\lodu_brit_backpack02";
    };
    class fow_b_uk_bergenpack: fow_b_uk_p37
    {
        scope = 2;
        model = "\fow\fow_characters\uk\lodu_brit_bergenpack";
        displayName = "[UK] Bergen pack";
        picture = "\fow\fow_characters\uk\data\ui\fow_b_uk_p37_ca.paa";
		hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"fow\fow_characters\uk\data\bergen_co.paa"};
        maximumLoad = 100;
        mass = 65;
    };
    class fow_b_uk_bergenpack_medic: fow_b_uk_bergenpack
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
    class fow_b_uk_bergenpack_rifleman: fow_b_uk_bergenpack
    {
		scope = 1;
		class TransportMagazines
		{
			class _xx_fow_10Rnd_303
			{
				magazine = "fow_10Rnd_303";
				count = 8;
			};
			class _xx_fow_30Rnd_303_bren
			{
				magazine = "fow_30Rnd_303_bren";
				count = 2;
			};
			class _xx_fow_e_no36mk1
			{
				magazine = "fow_e_no36mk1";
				count = 2;
			};
		};
    };
    class fow_b_uk_bergenpack_thompson: fow_b_uk_bergenpack
    {
		scope = 1;
		class TransportMagazines
		{
			class _xx_fow_30Rnd_45acp
			{
				magazine = "fow_30Rnd_45acp";
				count = 10;
			};
			class _xx_smokeShell
			{
				magazine = "smokeShell";
				count = 2;
			};
			class _xx_fow_e_no36mk1
			{
				magazine = "fow_e_no36mk1";
				count = 2;
			};
		};
    };
    class fow_b_uk_bergenpack_bren: fow_b_uk_bergenpack
    {
		scope = 1;
		class TransportMagazines
		{
			class _xx_fow_30Rnd_303_bren
			{
				magazine = "fow_30Rnd_303_bren";
				count = 10;
			};
		};
    };
    class fow_b_uk_piat: fow_b_uk_p37
    {
        scope = 2;
        model = "\fow\fow_characters\uk\lodu_brit_piat_bag";
        displayName = "[UK] P.I.A.T. Bag";
        picture = "\fow\fow_characters\uk\data\ui\fow_b_uk_p37_ca.paa";
		hiddenSelections[]={"camo"};
        hiddenSelectionsTextures[]={"fow\fow_weapons\piat\data\projectile_co.paa"};
        maximumLoad = 75;
        mass = 50;
    };
    class fow_b_uk_piat_at: fow_b_uk_piat
    {
        scope = 1;
        picture = "\fow\fow_characters\uk\data\ui\fow_b_uk_p37_ca.paa";
		class TransportMagazines
		{
			class _xx_fow_1Rnd_piat
			{
				magazine = "fow_1Rnd_piat_HEAT";
				count = 3;
			};
		};   
    };
	