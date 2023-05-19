
    class fow_b_us_bandoleer: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\us\lodu_us_bandoleer2";
        displayName = "[US] Bandoleer";
        picture = "\fow\fow_characters\us\data\ui\fow_b_us_bandoleer_ca.paa";
        hiddenSelectionsTextures[]={""};
        maximumLoad = 40;
        mass = 25;
		class TransportMagazines
		{
			class _xx_fow_8Rnd_762x63
			{
				magazine = "fow_8Rnd_762x63";
				count = 6;
			};
		};   
    };
    class fow_b_us_bandoleer_m1carbine: fow_b_us_bandoleer
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_15Rnd_762x33
			{
				magazine = "fow_15Rnd_762x33";
				count = 6;
			};
		};   
    };
    class fow_b_us_bandoleer_m1903: fow_b_us_bandoleer
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_5Rnd_762x63
			{
				magazine = "fow_5Rnd_762x63";
				count = 6;
			};
		};   
    };
    class fow_b_us_m1928: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\us\lodu_us_backpack01";
        displayName = "[US] Haversack M-1928";
        picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
        hiddenSelectionsTextures[]={"fow\fow_characters\us\data\lodu_us_bagpack01_co.paa"};
        maximumLoad = 60;
        mass = 40;
    };
    class fow_b_us_m1928_medic: fow_b_us_m1928
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
    class fow_b_us_m1944: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\us\lodu_us_airborne_bag_no_rope";
        displayName = "[US] M1944 Musette bag";
        picture = "\fow\fow_characters\us\data\ui\fow_b_us_m1928_ca.paa";
        hiddenSelectionsTextures[]={"fow\fow_characters\us\data\airborne_bag_co.paa"};
        maximumLoad = 60;
        mass = 40;
    };
    class fow_b_us_m1944_ropes: fow_b_us_m1944
    {
        model = "\fow\fow_characters\us\lodu_us_airborne_bag";
        displayName = "[US] M1944 Musette bag with ropes";
    };
    class fow_b_us_rocket_bag: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\us\lodu_us_rocket_bag";
        displayName = "[US] Rocket bag";
        picture = "\fow\fow_characters\us\data\ui\fow_b_us_rocket_bag_ca.paa";
        hiddenSelectionsTextures[]={""};
        maximumLoad = 75;
        mass = 50;
    };
    class fow_b_us_rocket_bag_at: fow_b_us_rocket_bag
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_1Rnd_m6a1
			{
				magazine = "fow_1Rnd_m6a1";
				count = 3;
			};
		};  
    };
    class fow_b_us_radio: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\us\lodu_us_radio";
        displayName = "[US] Radio";
        picture = "\fow\fow_characters\us\data\ui\fow_b_us_radio_ca.paa";
        hiddenSelectionsTextures[]={""};
        maximumLoad = 20;
        mass = 150;
		//TFAR COMP
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_independent_radio_code";
		tf_dialog = "anprc155_radio_dialog";
		tf_subtype = "digital_lr";
    };
    class fow_b_us_radio_scr: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_characters\us\lodu_us_scr";
        displayName = "[US] Radio SCR";
        picture = "\fow\fow_characters\us\data\ui\fow_b_us_radio_ca.paa";
        hiddenSelectionsTextures[]={""};
        maximumLoad = 20;
        mass = 20;
		//TFAR COMP
		tf_hasLRradio = 1;
		tf_encryptionCode = "tf_independent_radio_code";
		tf_dialog = "anprc155_radio_dialog";
		tf_subtype = "digital_lr";
    };
    class fow_b_us_m1928_asst_bar: fow_b_us_m1928
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_20Rnd_762x63
			{
				magazine = "fow_20Rnd_762x63";
				count = 6;
			};
		};   
	};
    class fow_b_us_m1928_asst_m1919: fow_b_us_m1928
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_50Rnd_762x63
			{
				magazine = "fow_50Rnd_762x63";
				count = 3;
			};
		};   
	};
    class fow_b_us_m1944_asst_bar: fow_b_us_m1944
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_20Rnd_762x63
			{
				magazine = "fow_20Rnd_762x63";
				count = 6;
			};
		};   
	};
    class fow_b_us_m1944_asst_m1919: fow_b_us_m1944
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_50Rnd_762x63
			{
				magazine = "fow_50Rnd_762x63";
				count = 3;
			};
		};   
	};
    class fow_b_us_m1944_m1carbine: fow_b_us_m1944
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_15Rnd_762x33
			{
				magazine = "fow_15Rnd_762x33";
				count = 10;
			};
		};   
	};
    class fow_b_us_m1944_nco: fow_b_us_m1944_ropes
    {
        scope = 1;
		class TransportMagazines
		{
			class _xx_fow_30Rnd_45acp
			{
				magazine = "fow_30Rnd_45acp";
				count = 5;
			};
			class _xx_fow_e_mk2
			{
				magazine = "fow_e_mk2";
				count = 2;
			};
			class _xx_Smokeshell
			{
				magazine = "Smokeshell";
				count = 1;
			};
		};   
	};
    class fow_b_us_m1944_medic: fow_b_us_m1944
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
    class fow_b_us_m1928_rifleman: fow_b_us_m1928
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