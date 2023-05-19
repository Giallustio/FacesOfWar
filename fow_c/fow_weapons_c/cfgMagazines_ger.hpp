	//GER
	class fow_5Rnd_792x57: CA_Magazine {
		scope = 2;
		displayName = "5Rnd 7.92x57 Mauser";
		descriptionShort = "5Rnd 7.92x57 Mauser. Used in K98";
		picture="\fow\fow_weapons\k98\data\ui\m_k98_ca.paa";
		count = 5;
		ammo = "fow_B_792x57_Ball";
		initSpeed = 760;
		model = "\fow\fow_weapons\k98\lodu_k98_mag.p3d";
		mass = 4;
	};
	class fow_10nd_792x57: CA_Magazine {
		scope = 2;
		displayName = "10Rnd 7.92x57 Mauser";
		descriptionShort = "10Rnd 7.92x57 Mauser. Used in G43";
		picture="\fow\fow_weapons\k98\data\ui\m_k98_ca.paa";//Needs pic
		count = 10;
		ammo = "fow_B_792x57_Ball";
		initSpeed = 776;
		model = "\fow\fow_weapons\g43\lodu_g43_mag.p3d";
		mass = 6;
	};
	class fow_32Rnd_9x19_mp40: CA_Magazine {
		scope = 2;
		displayName = "32Rnd 9x19";
		initSpeed = 381;
		ammo = "fow_B_9x19_Ball";
		count = 32;
		picture = "\fow\fow_weapons\mp40\data\ui\m_mp40_ca.paa";
		descriptionShort = "30Rnd 9x19. Used in MP40";
		model = "\fow\fow_weapons\mp40\lodu_mp40_mag.p3d";
		mass = 8;
	};
	class fow_7Rnd_765x17: CA_Magazine {
		scope = 2;
		displayName = "7Rnd 765x17 Browning SR";
		initSpeed = 310;
		ammo = "fow_B_765x17_Ball";
		count = 7;
		picture = "\fow\fow_weapons\mp40\data\ui\m_mp40_ca.paa";//Needs pic
		descriptionShort = "7Rnd 765x17.";
		model = "\fow\fow_weapons\ppk\ppk_mag.p3d";
	};
	class fow_8Rnd_765x17: fow_7Rnd_765x17 {
		displayName = "8Rnd 765x17 Browning SR";
		initSpeed = 310;
		ammo = "fow_B_765x17_Ball";
		count = 8;
	};
	class fow_8Rnd_9x19: CA_Magazine {
		scope = 2;
		displayName = "8Rnd 9x19";
		initSpeed = 365;
		ammo = "fow_B_9x19_Ball";
		count = 8;
		picture = "\fow\fow_weapons\mp40\data\ui\m_mp40_ca.paa";//Needs pic
		descriptionShort = "8Rnd 9x19. Used in P08";
		model = "\fow\fow_weapons\p08\p08_mag.p3d";
		mass = 5;
	};
	class fow_13Rnd_9x19: CA_Magazine {
		scope = 2;
		displayName = "8Rnd 9x19";
		initSpeed = 365;
		ammo = "fow_B_9x19_Ball";
		count = 13;
		picture = "\fow\fow_weapons\mp40\data\ui\m_mp40_ca.paa";//Needs pic
		descriptionShort = "8Rnd 9x19. Used in Pistole 640(b)";
		//model = "\fow\fow_weapons\mp40\lodu_mp40_mag.p3d";//needs model
		mass = 5;
	};
	class fow_20Rnd_792x57: fow_5Rnd_792x57 {
		displayName = "20Rnd 7.92x57 Mauser";
		descriptionShort = "20Rnd 7.92x57 Mauser. Used in FG 42";
		picture="\fow\fow_weapons\fg42\data\ui\m_20rnd_792x57_ca.paa";
		count = 20;
		model = "\fow\fow_weapons\fg42\fg42_mag.p3d";
		mass = 8;
	};
	class fow_30Rnd_792x33: CA_Magazine {
		scope = 2;
		displayName = "30Rnd 7.92x33";
		initSpeed = 685;
		ammo = "fow_B_792x33_Ball";
		count = 30;
		picture = "\fow\fow_weapons\stg44\data\ui\m_stg44_ca.paa";
		descriptionShort = "30Rnd 7.92x33. Used in STG44";
		model = "\fow\fow_weapons\stg44\stg44_mag.p3d";
		mass = 8;
	};
	class fow_50Rnd_792x57: CA_Magazine {
		scope = 2;
		displayName = "50Rnd 7.92x57";
		descriptionShort = "50Rnd 7.92x57.";
		picture="\fow\fow_weapons\mg42\data\ui\m_mg42_ca.paa";
		count = 50;
		ammo = "fow_B_792x57_Ball";
		initSpeed = 760;
		model = "\fow\fow_weapons\mg42\lodu_mg42_mag.p3d";
		mass = 20;
		tracersEvery = 3;
		lastRoundsTracer = 3;
	};
	class fow_250Rnd_792x57: fow_50Rnd_792x57 {
		scope = 2;
		displayName = "250Rnd 7.92x57";
		descriptionShort = "250Rnd 7.92x57.";
		count = 250;
		mass = 40;
	};
	class fow_1Rnd_pzfaust_30_klein: CA_Magazine
	{
		scope = 2;
		count = 1;
		//type = "256";
		initSpeed = 30;
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Klein_Projectile.p3d";
		modelSpecial = "";
		displayName = "30 mm pzfaust";
		ammo = "fow_R_pzfaust_30_klein";
		picture = "\fow\fow_weapons\m1a1_bazooka\data\ui\m_m6a1_ca.paa";//Needs pic
		mass = 0;
	};
	class fow_1Rnd_pzfaust_30: fow_1Rnd_pzfaust_30_klein
	{
		initSpeed = 35;
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Projectile.p3d";
		modelSpecial = "";
		displayName = "30 m pzfaust";
		ammo = "fow_R_pzfaust_30";
		picture = "\fow\fow_weapons\m1a1_bazooka\data\ui\m_m6a1_ca.paa";
	};
	class fow_1Rnd_pzfaust_60: fow_1Rnd_pzfaust_30
	{
		//initSpeed = 45;
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Projectile.p3d";
		modelSpecial = "";
		displayName = "60 m pzfaust";
		ammo = "fow_R_pzfaust_60";
		picture = "\fow\fow_weapons\m1a1_bazooka\data\ui\m_m6a1_ca.paa";
	};
	class fow_1Rnd_pzfaust_100: fow_1Rnd_pzfaust_30
	{
		//initSpeed = 60;
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Projectile.p3d";
		modelSpecial = "";
		displayName = "100 m pzfaust";
		ammo = "fow_R_pzfaust_100";
		picture = "\fow\fow_weapons\m1a1_bazooka\data\ui\m_m6a1_ca.paa";
	};
	class fow_1Rnd_rpzb: CA_LauncherMagazine
	{
		scope = 2;
		//type = "256";
		initSpeed = 130;
		model = "\fow\fow_weapons\rpzb\rpzb_rocket_magazine.p3d";
		modelSpecial = "";
		displayName = "Rpzb rocket";
		ammo = "fow_R_rpzb";
		picture = "\fow\fow_weapons\rpzb\data\ui\m_rpzb_ca.paa";
		mass = 40;
		quickReload = 1;
	};