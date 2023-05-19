
	
	//UK
	class fow_10Rnd_303: CA_Magazine {
		scope = 2;
		displayName = "10Rnd 303 LeeEnfield";
		descriptionShort = "10Rnd 303. Used in LeeEnfield";
		picture="\fow\fow_weapons\lee_enfield\data\ui\m_enfield_ca.paa";
		model = "\fow\fow_weapons\lee_enfield\lodu_enfield_mag.p3d";
		count = 10;
		ammo = "fow_B_303_Ball";
		initSpeed = 750;
		mass = 6;
	};
	class fow_32Rnd_9x19_sten: CA_Magazine {
		scope = 2;
		displayName = "32Rnd 9x19";
		initSpeed = 365;
		ammo = "fow_B_9x19_Ball";
		count = 32;
		picture = "\fow\fow_weapons\sten\data\ui\m_sten_ca.paa";
		descriptionShort = "30Rnd 9x19. Used in Sten";
		model = "\fow\fow_weapons\sten\lodu_sten_mag.p3d";
		mass = 8;		
	};
	class fow_30Rnd_303_bren: CA_Magazine {
		scope = 2;
		displayName = "30Rnd 303 Bren";
		initSpeed = 744;
		ammo = "fow_B_303_Ball";
		count = 30;
		picture = "\fow\fow_weapons\bren\data\ui\m_bren_ca.paa";
		descriptionShort = "30Rnd 303. Used in Bren";
		model = "\fow\fow_weapons\bren\lodu_bren_mag.p3d";
		mass = 10;		
	};	
	class fow_6Rnd_455: CA_Magazine {
		scope = 2;
		displayName = "6Rnd .455 Eley";
		picture = "\fow\fow_weapons\webley\data\ui\m_webley_ca.paa";
		ammo = "fow_B_45_acp";
		count = 6;
		initSpeed = 180;
		tracersEvery = 0;
		//lastRoundsTracer = 4;
		descriptionShort = "6Rnd .455 Eley. Used in Webley Revolver";
		model = "\fow\fow_weapons\webley\webley_magazine.p3d";
		mass = 4;
	};	
	class fow_1Rnd_piat_HE: 1Rnd_HE_Grenade_shell
	{
		scope = 2;
		type = 256;
		displayName = "PIAT HE Rocket Grenade";
		displayNameShort = "PIAT HE";
		picture = "\fow\fow_weapons\piat\data\ui\gear_piat_rocket_ca.paa";
		model = "\fow\fow_weapons\piat\piat_magazine.p3d";
		ammo = "fow_g_piat_HE";
		initSpeed = 76;
		count = 1;
		nameSound = "";
		descriptionShort = "PIAT HE Rocket Grenade";
		mass = 25;
	};	
	class fow_1Rnd_piat_HEAT: fow_1Rnd_piat_HE
	{
		displayName = "PIAT HEAT Rocket Grenade";
		displayNameShort = "PIAT HEAT";
		picture = "\fow\fow_weapons\piat\data\ui\gear_piat_rocket_ca.paa";
		model = "\fow\fow_weapons\piat\piat_magazine.p3d";
		ammo = "fow_g_piat_HEAT";
		descriptionShort = "PIAT HEAT Rocket Grenade";
	};
	/*
	//Old
	class fow_1Rnd_piat: CA_LauncherMagazine
	{
		scope = 2;
		type = "3* 256";
		initSpeed = 76;
		model = "\fow\fow_weapons\piat\piat_magazine.p3d";
		modelSpecial = "\fow\fow_weapons\piat\piat_loaded.p3d";
		displayName = "PIAT AT Rocket";
		ammo = "fow_R_piat";
		picture = "\fow\fow_weapons\piat\data\ui\gear_piat_rocket_ca.paa";
		mass = 25;
	};
	class fow_1Rnd_piat_HE: CA_LauncherMagazine
	{
		scope = 2;
		type = "3* 256";
		initSpeed = 96;
		model = "\fow\fow_weapons\piat\piat_magazine.p3d";
		modelSpecial = "\fow\fow_weapons\piat\piat_loaded.p3d";
		displayName = "PIAT AT Rocket HE";
		ammo = "fow_R_piat_HE";
		picture = "\fow\fow_weapons\piat\data\ui\gear_piat_rocket_ca.paa";
		mass = 25;
	};*/