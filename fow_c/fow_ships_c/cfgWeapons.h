class cfgWeapons
{
 class MGun;
 class WX_US_NavalGun: MGun
 {
  scope = 2;
  displayName = "NavalGun";

  picture = "\WX_AttackTransport\data\WX_US_NavalGun_Picture.paa";
  UiPicture = "\WX_AttackTransport\data\WX_US_NavalGun_Picture.paa";

  begin1[] = {"\timo_sound\weapons\wx_ija_type010_DPGun\sounds\wx_ija_type010_DPGun_fire1",6,1,1200};
  soundBegin[] = {"begin1",0.5};

  aiDispersionCoefY = 21;
  aiDispersionCoefX = 21;
  dexterity = 0.96;
  canLock = 0;
  autoFire = 0;
  reloadTime = 8;
  dispersion = 0.005;
  burst = 1;
  magazines[] = {"WX_US_NavalGun_magazine"};
  magazineReloadTime = 5;
  reloadMagazineSound[] = {"\timo_sound\weapons\wx_ija_type010_DPGun\sounds\wx_ija_type010_DPGun_Reload1",0.0562341,1,40};

  muzzleEnd = "konec hlavne";
  muzzlePos = "usti hlavne";

  cartridgeVel = "nabojniceend";
  cartridgePos = "nabojnicestart";

  flash = "gunfire";
  flashSize = 0.3;
  recoil = "Empty";
  ffMagnitude = 0.5;
  ffFrequency = 11;
  ffCount = 6;
 };

 class WX_US_NavalGun_Dummy: WX_US_NavalGun
 {
  displayName = "NavalGun Dummy";

  aiDispersionCoefY = 10;
  aiDispersionCoefX = 10;
  dexterity = 0.96;

  magazines[] = {"WX_US_NavalGun_magazine_Dummy"};
  magazineReloadTime = 5;
 };

 class wx_us_bofors_twin: MGun
 {
  scope = 2;
  displayName = "Bofors Twin AAGun";

  picture = "\WX_US_M2_vehiclemount\data\WX_US_M2_vehiclemount_Weapon_Pic.paa";
  UiPicture = "\WX_US_M2_vehiclemount\data\WX_US_M2_vehiclemount_Weapon_Pic.paa";

  soundBegin[] = {"begin1",0.25,"begin2",0.25,"begin3",0.25,"begin4",0.25,"begin5",0.25};
  begin1[] = {"\timo_sound\weapons\wx_ija_type093_AAGun\sounds\wx_ija_type093_AAGun_fire1",1,1,500};
  begin2[] = {"\timo_sound\weapons\wx_ija_type093_AAGun\sounds\wx_ija_type093_AAGun_fire2",1,1,500};
  begin3[] = {"\timo_sound\weapons\wx_ija_type093_AAGun\sounds\wx_ija_type093_AAGun_fire3",1,1,500};
  begin4[] = {"\timo_sound\weapons\wx_ija_type093_AAGun\sounds\wx_ija_type093_AAGun_fire4",1,1,500};
  begin5[] = {"\timo_sound\weapons\wx_ija_type093_AAGun\sounds\wx_ija_type093_AAGun_fire5",1,1,500};

  aiDispersionCoefY = 21;
  aiDispersionCoefX = 21;
  dexterity = 0.96;
  canLock = 2;	//was 0
  autoFire = 1;
  reloadTime = 0.4;
  dispersion = 0.006;
  burst = 1;

  initSpeed = 750; //was missing

  magazines[] = {
		"wx_us_008Rnd_bofors_TF",
		"wx_us_008Rnd_bofors_TF_1",
		"wx_us_008Rnd_bofors_TF_2",
		"wx_us_008Rnd_bofors_TF_3",
		"wx_us_008Rnd_bofors_TF_4",
		"wx_us_008Rnd_bofors_TF_5",
		"wx_us_008Rnd_bofors_TF_6"
	};

  magazineReloadTime = 0.8;
  reloadMagazineSound[] = {"\timo_sound\weapons\wx_ija_type093_AAGun\sounds\wx_ija_type093_AAGun_Reload1",0.06,1,40};

  muzzleEnd = "konec hlavne";
  muzzlePos = "usti hlavne";

  cartridgeVel = "nabojniceend";
  cartridgePos = "nabojnicestart";

  flash = "gunfire";
  flashSize = 0.3;
  recoil = "Empty";
  ffMagnitude = 0.5;
  ffFrequency = 11;
  ffCount = 6;

/*
  minRange = 1;
  minRangeProbab = 0.3;
  midRange = 800;
  midRangeProbab = 0.58;
  maxRange = 1500;
  maxRangeProbab = 0.3;
*/
  minRange = 25;
  minRangeProbab = 0.3;
  midRange = 1500;
  midRangeProbab = 0.7;
  maxRange = 3000;
  maxRangeProbab = 0.4;
 };
};