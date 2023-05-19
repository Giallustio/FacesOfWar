
    class fow_b_heer_aframe: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ger\lodu_heer_A_frame";
        displayName = "[GER] A-Frame";
        //picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fow\fow_characters\ger\data\heer_equip02_co.paa"};
        maximumLoad = 0;
        mass = 5;
    };
    class fow_b_tornister: Bag_Base
    {
        scope = 1;
        model = "\fow\fow_characters\ger\lodu_ruken_backpack";
        displayName = "[GER] Tornister Rucksack";
        //picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fow\fow_characters\ger\data\ruken_sac_co.paa"};
        maximumLoad = 60;
        mass = 40;
    };
    class fow_b_tornister_medic: fow_b_tornister
    {
        scope = 2;
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
    class fow_b_grenadebag: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ger\lodu_porte_grenade";
        displayName = "[GER] Grenade bag";
        //picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fow\fow_characters\ger\data\porte_grenade_co.paa"};
        maximumLoad = 80;
        mass = 52;
		class TransportMagazines
		{
			class _xx_fow_e_m24
			{
				magazine = "fow_e_m24";
				count = 8;
			};
		}; 
    };
    class fow_b_ammoboxes: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ger\lodu_heer_ammo_boxes";
        displayName = "[GER] Ammo boxes";
        //picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fow\fow_characters\ger\data\fow_heer_box_co.paa"};
        maximumLoad = 100;
        mass = 65;
		class TransportMagazines
		{
			class _xx_fow_50Rnd_792x57
			{
				magazine = "fow_50Rnd_792x57";
				count = 5;
			};
		}; 
    };
    class fow_b_ammoboxes_mg34_42 : Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ger\lodu_heer_ammo_mg34_42";
        displayName = "[GER] Ammo MG";
        //picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[]={"\fow\fow_characters\ger\data\fow_heer_box_co.paa"};
        maximumLoad = 40;
        mass = 65;
		class TransportMagazines
		{
			class _xx_fow_50Rnd_792x57
			{
				magazine = "fow_50Rnd_792x57";
				count = 2;
			};
		}; 
    };
    class fow_b_heer_ammo_belt: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ger\lodu_heer_ammo_belt";
        displayName = "[GER] Ammo belt";
        picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
        hiddenSelectionsTextures[]={""};
        maximumLoad = 20;
        mass = 2;
		class TransportMagazines
		{
			class _xx_fow_50Rnd_792x57
			{
				magazine = "fow_50Rnd_792x57";
				count = 1;
			};
		}; 
    };
    class fow_b_torn_radio: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\ger\wx_backpack_radio";
        displayName = "[GER] Torn Radio backpack";
        picture = "\fow\fow_characters\ger\data\ui\fow_b_ger_radio_ca.paa";
		hiddenSelections[] = {};
        hiddenSelectionsTextures[]={};
        maximumLoad = 20;
        mass = 60;
		//TFAR COMP
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "anarc210_radio_dialog";
		tf_subtype = "airborne";
		tf_dialogUpdate = "[""CH%1""] call TFAR_fnc_updateLRDialogToChannel;";
    };