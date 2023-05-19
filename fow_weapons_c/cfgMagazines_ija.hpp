
	//IJA
	class fow_30Rnd_77x58: CA_Magazine
	{
		scope = 2;
		model = "\fow\fow_weapons\type99_lmg\wx_ija_type099_lmg_magazine";
		displayName = "30Rnd 77x58";
		descriptionShort = "30Rnd 77x58. Used in Type 99 LMG";
		initSpeed = 700;
		ammo = "fow_B_77x58_Ball";
		count = 30;
		picture = "\fow\fow_weapons\type99_lmg\data\ui\m_type99_lmg_ca.paa";
		tracersEvery = 3;
		mass = 10;
	};
	class fow_5Rnd_77x58: CA_Magazine
	{
		scope = 2;
		model = "\fow\fow_weapons\type99\type99_magazine";
		displayName = "5Rnd 77x58";
		descriptionShort = "5Rnd 77x58. Used in Type 99";
		initSpeed = 730;
		ammo = "fow_B_77x58_Ball";
		count = 5;
		picture = "\fow\fow_weapons\type99\data\ui\m_type99_ca.paa";
		tracersEvery = 0;
		mass = 4;
	};
	class fow_8Rnd_8x22: CA_Magazine
	{
		scope = 2;
		model = "\fow\fow_weapons\type14\type14_magazine";
		displayName = "8Rnd 8x22";
		descriptionShort = "32Rnd 8x22. Used in Type 14 Nambu Pistol";
		initSpeed = 290;
		ammo = "fow_B_8x22_Ball";
		count = 8;
		picture = "\fow\fow_weapons\type14\data\ui\m_type14_ca.paa";
		tracersEvery = 0;
		mass = 4;
	};
	class fow_32Rnd_8x22: CA_Magazine
	{
		scope = 2;
		model = "\fow\fow_weapons\type100\wx_ija_type100_smg_magazine";
		displayName = "32Rnd 8x22";
		descriptionShort = "32Rnd 8x22. Used in Type 100 SMG";
		initSpeed = 335;
		ammo = "fow_B_8x22_Ball";
		count = 32;
		picture = "\fow\fow_weapons\type100\data\ui\m_type100_ca.paa";
		tracersEvery = 0;
		mass = 8;
	};
	class fow_1Rnd_type10: CA_Magazine
	{
		scope = 2;
		type = 16;
		displayName = "1Rnd Type 10 Flare gun";
		picture = "\A3\Weapons_F\Data\UI\gear_flare_white_ca.paa";
		model = "\fow\fow_weapons\type10\type10_magazine";
		ammo = "fow_F_type10_White";
		initSpeed = 80;
		count = 1;
		nameSound = "";
		descriptionShort = "1Rnd Flare. Used in Type 10 Flare gun";
		displayNameShort = "1Rnd Type 10 Flare gun";
		weaponPoolAvailable = 1;
		mass = 3;
	};
	class fow_1Rnd_type2_40: 1Rnd_HE_Grenade_shell
	{
		scope = 2;
		type = 16;
		displayName = "Type 2 40mm Grenade";
		displayNameShort = "Type 2";
		picture = "\fow\fow_weapons\type99\data\ui\m_type2_ca.paa";
		ammo = "G_40mm_HE";
		model = "\fow\fow_weapons\type99\type2_40mm.p3d";
		initSpeed = 80;
		count = 1;
		nameSound = "";
		descriptionShort = "Type 2. Used in Type 2 grenade launcher";
		mass = 4;
	};	