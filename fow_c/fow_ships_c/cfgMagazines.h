class CfgMagazines
{
 class VehicleMagazine;
 class WX_US_NavalGun_Magazine: VehicleMagazine
 {
  scope = 2;
  model = "";
  displayName = "1Rnd Magazine";
  picture = "WX_Attacktransport\data\WX_US_NavalGun_Picture.paa";
  initSpeed = 600;
  ammo = "WX_US_Shell_Navalgun";
  count = 100;
  tracersEvery = 1;
 };

 class WX_US_NavalGun_Magazine_Dummy: VehicleMagazine
 {
  scope = 2;
  model = "";
  displayName = "1Rnd Magazine";
  picture = "WX_Attacktransport\data\WX_US_NavalGun_Picture.paa";
  initSpeed = 600;
  ammo = "WX_US_Shell_Navalgun_Dummy";
  count = 100;
  tracersEvery = 1;
 };

/*
 class WX_US_008Rnd_Bofors_AAGun: VehicleMagazine
 {
  scope = 2;
  model = "";
  displayName = "08Rnd 40mm Magazine";
  picture = "wx_ija_type093_AAGun\data\WX_ija_type093_AAgun_magazinePic.paa";
  initSpeed = 750;
  ammo = "WX_US_Bofors_40mm";
  count = 8;
  tracersEvery = 1;
 };
*/

	class wx_us_008Rnd_bofors_TF: VehicleMagazine
	{
		scope = 2;
		model = "";
		displayName = "08Rnd 40mm Magazine";
		picture = "wx_ija_type093_AAGun\data\WX_ija_type093_AAgun_magazinePic.paa";
		initSpeed = 750;
		ammo = "WX_us_Sh_40mm_TF";
		count = 8;
		tracersEvery = 1;
	};
	class wx_us_008Rnd_bofors_TF_1: wx_us_008Rnd_bofors_TF
	{
		ammo = "WX_us_Sh_40mm_TF_1";
	};
	class wx_us_008Rnd_bofors_TF_2: wx_us_008Rnd_bofors_TF
	{
		ammo = "WX_us_Sh_40mm_TF_2";
	};
	class wx_us_008Rnd_bofors_TF_3: wx_us_008Rnd_bofors_TF
	{
		ammo = "WX_us_Sh_40mm_TF_3";
	};
	class wx_us_008Rnd_bofors_TF_4: wx_us_008Rnd_bofors_TF
	{
		ammo = "WX_us_Sh_40mm_TF_4";
	};
	class wx_us_008Rnd_bofors_TF_5: wx_us_008Rnd_bofors_TF
	{
		ammo = "WX_us_Sh_40mm_TF_5";
	};
	class wx_us_008Rnd_bofors_TF_6: wx_us_008Rnd_bofors_TF
	{
		ammo = "WX_us_Sh_40mm_TF_6";
	};

};