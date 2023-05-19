
	
	//US
	class fow_8Rnd_762x63: CA_Magazine {
		scope = 2;
		displayName = "8Rnd 762x63";
		initSpeed = 860;
		ammo = "fow_B_762x63_Ball";
		count = 8;
		picture = "\fow\fow_weapons\garand\data\ui\m_garand_ca.paa";
		descriptionShort = "30Rnd 303. Used in M1 Garand";
		model = "\fow\fow_weapons\garand\nyt_garand_mag.p3d";
		mass = 6;		
	};
	class fow_8Rnd_762x63_T: fow_8Rnd_762x63 {
		displayName = "8Rnd 762x63 Tracers";
		picture = "\fow\fow_weapons\garand\data\ui\m_garand_ca.paa";
		tracersEvery = 1;	
	};
	class fow_5Rnd_762x63: CA_Magazine {
		scope = 2;
		displayName = "5Rnd 762x63";
		initSpeed = 860;
		ammo = "fow_B_762x63_Ball";
		count = 5;
		picture = "\fow\fow_weapons\m1903\data\ui\m_m1903_ca.paa";
		descriptionShort = "5Rnd 30.6 Springfield. Used in M1903 Springfield";
		model = "\fow\fow_weapons\m1903\m1903_clip.p3d";
		mass = 6;		
	};
	class fow_15Rnd_762x33: CA_Magazine {
		scope = 2;
		displayName = "15Rnd 762x33";
		initSpeed = 600;
		ammo = "fow_B_762x33_Ball";
		count = 15;
		picture = "\fow\fow_weapons\m1_carbine\data\ui\m_m1carbine_ca.paa";
		descriptionShort = "30Rnd 303. Used in M1 Carbine";
		//model = "\fow\fow_weapons\bar\wx_m1918A2_BAR_Magazine.p3d";
		mass = 6;		
	};
	class fow_20Rnd_762x63: CA_Magazine {
		scope = 2;
		displayName = "20Rnd 762x63";
		initSpeed = 860;
		ammo = "fow_B_762x63_Ball";
		count = 20;
		picture = "\fow\fow_weapons\bar\data\ui\m_bar_ca.paa";
		descriptionShort = "30Rnd 303. Used in B.A.R.";
		model = "\fow\fow_weapons\bar\bar_mag.p3d";
		mass = 8;		
	};
	class fow_30Rnd_762x63: CA_Magazine {
		scope = 2;
		displayName = "30Rnd 762x63";
		initSpeed = 860;
		ammo = "fow_B_762x63_Ball";
		count = 30;
		picture = "\fow\fow_weapons\bar\data\ui\m_bar_ca.paa";
		descriptionShort = "30Rnd 303. Used in M1919";
		//model = "\fow\fow_weapons\bar\wx_m1918A2_BAR_Magazine.p3d";
		mass = 8;		
	};
	class fow_50Rnd_762x63: fow_30Rnd_762x63 {
		displayName = "50Rnd 762x63";
		count = 50;
		picture = "\fow\fow_weapons\bar\data\ui\m_bar_ca.paa";
		descriptionShort = "50Rnd 303. Used in M1919";
		mass = 20;		
	};
	class fow_100Rnd_762x63: fow_30Rnd_762x63 {
		displayName = "100Rnd 762x63";
		count = 100;
		picture = "\fow\fow_weapons\bar\data\ui\m_bar_ca.paa";
		descriptionShort = "100Rnd 303. Used in M1919";
		mass = 35;
	};
	
	//fow_B_762x51_Ball
	
	class fow_30Rnd_45acp: CA_Magazine {
		scope = 2;
		displayName = "30Rnd .45 ACP";
		picture = "\fow\fow_weapons\m1a1\data\ui\m_m1a1_ca.paa";
		ammo = "fow_B_45_acp";
		count = 30;
		initSpeed = 285;
		tracersEvery = 0;
		//lastRoundsTracer = 4;
		descriptionShort = "30Rnd .45 ACP. Used in M1A1 Thompson";
		model = "\fow\fow_weapons\m1a1\wx_thompson_m1a1_magazine.p3d";
		mass = 8;
	};	
	class fow_50Rnd_45acp: fow_30Rnd_45acp {
		displayName = "50Rnd .45 ACP";
		picture = "\fow\fow_weapons\m1a1\data\ui\m_m1928_ca.paa";
		ammo = "fow_B_45_acp";
		count = 50;
		descriptionShort = "50Rnd .45 ACP. Used in M1928 Thompson";
		model = "\fow\fow_weapons\m1a1\thompson_1928_mag.p3d";
		mass = 18;
	};

	class fow_30Rnd_45acp_T: fow_30Rnd_45acp {
		tracersEvery = 1;
		lastRoundsTracer = 30;
		displayName = "30Rnd .45 ACP (T)";
		descriptionShort = "30Rnd .45 ACP (T). Used in M1A1 Thompson";
	}; 
	class fow_50Rnd_45acp_T: fow_50Rnd_45acp {
		displayName = "50Rnd .45 ACP (T)";
		descriptionShort = "50Rnd .45 ACP (T). Used in M1928 Thompson";
		tracersEvery = 1;
	};
	
	class fow_20Rnd_45acp: CA_Magazine {
		scope = 2;
		displayName = "20Rnd .45 ACP";
		picture = "\fow\fow_weapons\m1a1\data\ui\m_m1a1_ca.paa";
		ammo = "fow_B_45_acp";
		count = 20;
		initSpeed = 280;
		tracersEvery = 0;
		//lastRoundsTracer = 4;
		descriptionShort = "20Rnd .45 ACP. Used in M55 Reising";
		model = "\fow\fow_weapons\m55\m55_magazine.p3d";
		mass = 6;
	};	
	class fow_7Rnd_45acp: CA_Magazine {
		scope = 2;
		displayName = "7Rnd .45 ACP";
		picture = "\fow\fow_weapons\m1911\data\ui\m_m1911_ca.paa";
		ammo = "fow_B_45_acp";
		count = 7;
		initSpeed = 255;
		tracersEvery = 0;
		//lastRoundsTracer = 4;
		descriptionShort = "7Rnd .45 ACP. Used in m1911";
		model = "\fow\fow_weapons\m1911\m1911_magazine.p3d";
		mass = 4;
	};
	class fow_6Rnd_12G_Slug: CA_Magazine
	{
		scope = 2;
		displayName = "6 Rounds M12 12 Gauge Slug";
		displayNameShort = "12GA Slug";
		picture = "\fow\fow_weapons\m1912\data\UI\m_12g_s_ca.paa";
		ammo = "fow_B_12Gauge_Slug";
		count = 6;
		initSpeed = 396;
		mass = 6;
	};
	class fow_6Rnd_12G_Pellets: fow_6Rnd_12G_Slug
	{
		displayName = "6 Rounds M12 12 Gauge Pellets";
		displayNameShort = "12GA Pellets";
		picture = "\fow\fow_weapons\m1912\data\UI\m_12g_p_ca.paa";
		ammo = "fow_B_12Gauge_Pellets";
	};
	class fow_5Rnd_12G_Pellets: fow_6Rnd_12G_Pellets
	{
		displayName = "5 Rounds M37 12 Gauge Pellets";
		displayNameShort = "12GA Pellets";
		picture = "\fow\fow_weapons\m1912\data\UI\m_12g_p_ca.paa";
		count = 5;
		mass = 5;
	};
	class fow_5Rnd_12G_Slug: fow_6Rnd_12G_Slug
	{
		displayName = "5 Rounds M37 12 Gauge Pellets";
		displayNameShort = "12GA Pellets";
		picture = "\fow\fow_weapons\m1912\data\UI\m_12g_p_ca.paa";
		count = 5;
		mass = 5;
	};
	
	class fow_flamefuel: CA_Magazine {
		scope = 2;
		displayName = "Flame fuel";
		picture = "\fow\fow_weapons\m1911\data\ui\m_m1911_ca.paa";
		ammo = "fow_B_flamefuel";
		count = 105;//5
		initSpeed = 30;
		tracersEvery = 0;
		//lastRoundsTracer = 4;
		descriptionShort = "Flame fuel";
		//model = "\fow\fow_weapons\m1911\m1911_magazine.p3d";
		mass = 4;
	};
	class fow_1Rnd_m9a1: 1Rnd_HE_Grenade_shell
	{
		scope = 2;
		type = 16;
		displayName = "M9A1 Grenade";
		displayNameShort = "M9A1";
		picture = "\fow\fow_weapons\garand\data\ui\m_m9a1_ca.paa";
		model = "\fow\fow_weapons\garand\m9a1.p3d";
		ammo = "fow_e_m9a1";
		initSpeed = 80;
		count = 1;
		nameSound = "";
		descriptionShort = "M9A1 Greanade. Used in M7 grenade launcher";
		mass = 5;
	};	
	class fow_1Rnd_m6a1: CA_LauncherMagazine
	{
		scope = 2;
		type = "3* 256";
		initSpeed = 60;
		model = "\fow\fow_weapons\m1a1_bazooka\m6a1_magazine.p3d";
		modelSpecial = "\fow\fow_weapons\m1a1_bazooka\m1a1_bazooka.p3d";
		displayName = "M6A1 AT Rocket";
		ammo = "fow_R_m6a1";
		picture = "\fow\fow_weapons\m1a1_bazooka\data\ui\m_m6a1_ca.paa";
		mass = 25;
	};