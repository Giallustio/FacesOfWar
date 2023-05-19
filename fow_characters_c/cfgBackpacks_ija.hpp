
    class fow_b_ija_backpack: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ija\lodu_ija_backpack";
        displayName = "[IJA] Backpack";
        picture = "\fow\fow_characters\ija\data\ui\fow_b_ija_backpack_ca.paa";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"fow\fow_characters\ija\data\lodu_sac_jap.paa"};
        maximumLoad = 60;
        mass = 40;
    };
    class fow_b_ija_backpack_medic: fow_b_ija_backpack
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
    class fow_b_ija_backpack_rifleman: fow_b_ija_backpack
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_5Rnd_77x58
			{
				magazine = "fow_5Rnd_77x58";
				count = 10;
			};
		};  
    };
    class fow_b_ija_backpack_asst_type99: fow_b_ija_backpack
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_30Rnd_77x58
			{
				magazine = "fow_30Rnd_77x58";
				count = 4;
			};
		};  
    };
    class fow_b_ija_backpack_foliage: fow_b_ija_backpack
    {
        scope = 2;
        model = "\fow\fow_characters\ija\lodu_IJA_backpack_foliage";
        displayName = "[IJA] Backpack (foliage)";
        picture = "\fow\fow_characters\ija\data\ui\fow_b_ija_backpack_foliage_ca.paa";
		hiddenSelections[] = {"camo","camoB"};
        hiddenSelectionsTextures[]={"fow\fow_characters\ija\data\lodu_sac_jap.paa","fow\fow_characters\ija\data\camo_jap02_co.paa"};
    };
    class fow_b_ija_backpack_foliage_medic: fow_b_ija_backpack_foliage
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
    class fow_b_ija_backpack_foliage_rifleman: fow_b_ija_backpack_foliage
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_5Rnd_77x58
			{
				magazine = "fow_5Rnd_77x58";
				count = 10;
			};
		};  
    };
    class fow_b_ija_backpack_foliage_asst_type99: fow_b_ija_backpack_foliage
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_30Rnd_77x58
			{
				magazine = "fow_30Rnd_77x58";
				count = 4;
			};
		};  
    };
    class fow_b_ija_ammobox: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ija\wx_ija_backpack_ammobox";
        displayName = "[IJA] Ammo box";
        picture = "\fow\fow_characters\ija\data\ui\fow_b_ija_ammobox_ca.paa";
        hiddenSelectionsTextures[]={""};
        maximumLoad = 180;
        mass = 150;
    };
    class fow_b_ija_ammobox_metal: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ija\wx_ija_backpack_ammobox_metal";
        displayName = "[IJA] Ammo box (Metal)";
        picture = "\fow\fow_characters\ija\data\ui\fow_b_ija_ammobox_metal_ca.paa";
        hiddenSelectionsTextures[]={""};
        maximumLoad = 180;
        mass = 150;
    };
    class fow_b_ija_ammobox_wood: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ija\wx_ija_backpack_ammobox_wood";
        displayName = "[IJA] Ammo box (Wood)";
        picture = "\fow\fow_characters\ija\data\ui\fow_b_ija_ammobox_wood_ca.paa";
        hiddenSelectionsTextures[]={""};
        maximumLoad = 180;
        mass = 150;
    };
    class fow_b_ija_radio: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ger\wx_backpack_radio";
        displayName = "[IJA] Torn Radio backpack";
        picture = "\fow\fow_characters\ger\data\ui\fow_b_ger_radio_ca.paa";
		hiddenSelections[] = {};
        hiddenSelectionsTextures[]={};
        maximumLoad = 20;
        mass = 60;
		//TFAR COMP
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "airborne";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
    };