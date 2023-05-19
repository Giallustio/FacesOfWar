//RHA calibration macro
#define RHA(mm,speed) caliber = __EVAL(mm/((15*speed)/1000));
/*
mm = milimiters of Rolled Homogenous Armor penetrated
speed = speed at which penetration occurs - if i.e. someone states penetration of 200mm RHA at 2km then you have to calculate speed at those 2kms since point blank penetration will be higher than that
hit should be low
like around 200
higher the hit value is, higher the bullshit magic damage radius is
Giallustio - 
so, how i can differentiate a tiger shot from a stuart shot for example
just caliber?
reyhard - 
I use range between 80 to 250
80 for 30mm autocannons
250 for old good 120mm AP rounds
120 : 250 = mm : x
75 : 220 = mm : x
*/

//RECOIL FORMULA
/*
hit * (0.25/13) * initSpeed // assume hit 13 equals to 0.5 kg, hit 650 -> 12 kg
*/
class cfgAmmo {

	class BulletBase;
	class ShellBase;

	class fow_arty_big: ShellBase
	{
		hit = 5000;
		indirectHit = 1100;
		indirectHitRange = 12;
		dangerRadiusHit = 1000;
		suppressionRadiusHit = 120;
		soundHit1[] = {"A3\Sounds_F\weapons\Explosion\expl_big_1",2.5118864,1,2400};
		soundHit2[] = {"A3\Sounds_F\weapons\Explosion\expl_big_2",2.5118864,1,2400};
		soundHit3[] = {"A3\Sounds_F\weapons\Explosion\expl_big_3",2.5118864,1,2400};
		soundHit4[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_1",2.5118864,1,2400};
		soundHit5[] = {"A3\Sounds_F\weapons\Explosion\expl_shell_2",2.5118864,1,2400};
		multiSoundHit[] = {"soundHit1",0.2,"soundHit2",0.2,"soundHit3",0.2,"soundHit4",0.2,"soundHit5",0.2};
		explosionSoundEffect = "DefaultExplosion";
		model = "\A3\weapons_f\ammo\shell";
		CraterEffects = "BombCrater";
		explosionEffects = "BombExplosion";
		explosionTime = 2;
		fuseDistance = 35;
		whistleDist = 24;
		class CamShakeExplode
		{
			power = 31;
			duration = 2.4;
			frequency = 20;
			distance = 339.599;
		};
		class CamShakeHit
		{
			power = 155;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

	};
	class fow_arty_big_fake: fow_arty_big {
		hit = 0;
		indirectHit = 0;
	};
	class fow_arty_medium: ShellBase {
		hit = 340;
		indirectHit = 125;
		indirectHitRange = 30;
		dangerRadiusHit = 750;
		suppressionRadiusHit = 75;
		typicalSpeed = 800;
		caliber = 10;
		deflecting = 0;
		explosive = 0.8;
		cost = 300;
		model = "\A3\weapons_f\ammo\shell";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		whistleDist = 60;
		artilleryLock = 1;
		thrust = 0;
		timeToLive = 180;
		airFriction = 0;
		sideairFriction = 0.0;
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_01",2.5118864,1,1900};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_02",2.5118864,1,1900};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_03",2.5118864,1,1900};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\Artillery_tank_shell_155mm_explosion_04",2.5118864,1,1900};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 31;
			duration = 2.4;
			frequency = 20;
			distance = 339.599;
		};
		class CamShakeHit
		{
			power = 155;
			duration = 0.8;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.52844;
			duration = 2.4;
			frequency = 20;
			distance = 99.5992;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_arty_medium_fake: fow_arty_medium {
		hit = 0;
		indirectHit = 0;
	};
	class fow_arty_small: fow_arty_medium {
		hit = 165;
		indirectHit = 52;
		indirectHitRange = 18;
		cost = 200;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = 16.4;
			duration = 1.8;
			frequency = 20;
			distance = 216.443;
		};
		class CamShakeHit
		{
			power = 82;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.00922;
			duration = 1.8;
			frequency = 20;
			distance = 72.4431;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_arty_small_fake: fow_arty_small {
		hit = 0;
		indirectHit = 0;
	};
	//IJA
//muzzleEffect = "BIS_Effects_Cannon";
	class fow_Sh_37mm_APHE: ShellBase {
		RHA(44,650)
		//AP shell, it could penetrate 1.7 inches (43 mm) of armor at 500 yards (460 meters)
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		//soundHit[] = {"Ca\sounds\Weapons\explosions\multisamples\grenade03.wss",56.2341,1,1800};
		nvgOnly = 0;
		initTime = 0;
		hit = 110;
		indirectHit = 2;
		indirectHitRange = 0.5;
		typicalSpeed = 575;
		cost = 500;
		deflecting = 4;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		airLock = 0;
		laserLock = 0;
		irLock = 0;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	class fow_Sh_37mm_HE: fow_Sh_37mm_APHE {
		caliber = 1;
		muzzleEffect = "BIS_Effects_HeavyCaliber";
		//soundHit[] = {"Ca\sounds\Weapons\explosions\multisamples\grenade03.wss",56.2341,1,1800};
		nvgOnly = 0;
		initTime = 0;
		hit = 70;
		indirectHit = 25;
		indirectHitRange = 2;
		typicalSpeed = 560;
		cost = 500;
		deflecting = 2;
		model = "\fow\fow_tanks\type95\_tracer\_Tracer.p3d";
		airLock = 0;
		laserLock = 0;
		irLock = 0;
		explosive = 0.6;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "HEShellExplosion";
	};
	//GER
	class fow_Sh_75mm_sprg42_HE: ShellBase {
		caliber = 1;
		initTime = 0;
		hit = 120;
		indirectHit = 30;
		indirectHitRange = 7;
		typicalSpeed = 700;
		cost = 300;
		deflecting = 2;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		airLock = 0;
		laserLock = 0;
		irLock = 0;
		explosive = 1;
		visibleFire = 64;
		audibleFire = 64;
		timeToLive = 60;
		muzzleEffect = "BIS_Effects_Cannon";
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 143.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 10;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

	};
	class fow_Sh_75mm_sprg34_HE: fow_Sh_75mm_sprg42_HE {
		hit = 120;
		indirectHit = 30;
		indirectHitRange = 7;
		typicalSpeed = 700;
	};
	class fow_Sh_75mm_pzgr3942_APCBC_HE: fow_Sh_75mm_sprg42_HE {
		RHA(138,850)
		hit = 220;//156
		cost = 400;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalspeed = 850;
		deflecting = 8;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	class fow_Sh_75mm_pzgr39_APCBC: fow_Sh_75mm_pzgr3942_APCBC_HE {
		RHA(108,780)
		hit = 220;//156
		typicalspeed = 790;
	};
	class fow_Sh_75mm_pzgr4042_APCR: fow_Sh_75mm_sprg42_HE {
		RHA(194,1050)
		hit = 220;
		cost = 400;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalspeed = 1120;
		deflecting = 8;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	class fow_Sh_75mm_pzgr40_APCR: fow_Sh_75mm_pzgr4042_APCR {
		RHA(143,980)
		hit = 220;
		typicalspeed = 990;
	};
	class fow_Sh_88mm_HE: ShellBase {
		hit = 160;
		indirectHit = 40;
		indirectHitRange = 8;
		typicalSpeed = 400;
		cost = 300;
		deflecting = 2;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		explosive = 1;
		visibleFire = 64;
		audibleFire = 64;
		timeToLive = 60;
		muzzleEffect = "BIS_Effects_Cannon";
		caliber = 1;
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 143.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 10;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

	};
	class fow_Sh_88mm_AP: fow_Sh_88mm_HE {
		RHA(165,808)
		hit = 260;
		cost = 400;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalspeed = 808;
		deflecting = 8;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	class fow_Sh_50mm_sprg34_HE: fow_Sh_75mm_sprg42_HE {
		caliber = 1;
		initTime = 0;
		hit = 80;
		indirectHit = 20;
		indirectHitRange = 5;
		typicalSpeed = 500;
		cost = 300;
		deflecting = 2;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		airLock = 0;
		laserLock = 0;
		irLock = 0;
		explosive = 1;
		visibleFire = 64;
		audibleFire = 64;
		timeToLive = 60;
		muzzleEffect = "BIS_Effects_Cannon";
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 143.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 10;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

	};	
	class fow_Sh_50mm_pzgr39_APCBC: fow_Sh_50mm_sprg34_HE {
		RHA(55,680)
		hit = 105;
		cost = 400;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalspeed = 685;
		deflecting = 8;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};	
	class fow_Sh_50mm_pzgr40_APCR: fow_Sh_50mm_sprg34_HE {
		RHA(94,1040)
		hit = 105;
		cost = 400;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalspeed = 1050;
		deflecting = 8;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};	
/*
Panzergranate 39 (PzGr 39) is an APCBC (Armour-piercing, capped, ballistic cap) projectile.

Projectile weight: 2.06kg
Muzzle velocity: 685m/s
Penetration 100m/30°: 60mm
Penetration 500m/30°: 50mm
Penetration 1000m/30°: 42mm
Penetration 1500m/30°: 32mm
Panzergranate 40 (PzGr 40) is an APCR (Armour-piercing, composite rigid) projectile.

Projectile weight: 0.925kg
Muzzle velocity: 1050m/s
Penetration 100m/30°: 94mm
Penetration 500m/30°: 55mm

*/
	class fow_B_20mm_HE: BulletBase	{
		soundFly[] = {"",1.0,1,50};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		explosionSoundEffect = "DefaultExplosion";
		hit = 20;
		indirectHit = 6;
		indirectHitRange = 2;
		explosive = 0.8;
		explosionEffects = "ExploAmmoExplosion";
		craterEffects = "ExploAmmoCrater";
		visibleFire = 16;
		audibleFire = 150;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		cost = 20;
		aiAmmoUsageFlags = "64 + 128";
		deflecting = 5;
		airFriction = -0.0006;
		fuseDistance = 3;
		typicalSpeed = 400;
		caliber = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		class CamShakeExplode
		{
			power = 3.8;
			duration = 0.8;
			frequency = 20;
			distance = 50.8712;
		};
		class CamShakeHit
		{
			power = 19;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.0878;
			duration = 0.8;
			frequency = 20;
			distance = 34.8712;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_B_20mm_AP: BulletBase	{
		RHA(64,1050)
		hit = 60;
		typicalSpeed = 1050;
		weaponType = "cannon";
		indirectHit = 8;
		indirectHitRange = 0.2;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 3;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		cost = 35;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 2;
		airFriction = -0.00042;
		muzzleEffect = "";
		deflecting = 20;
		airlock = 1;
		aiAmmoUsageFlags = "128 + 512";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",1.7782794,1,1600};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",1.7782794,1,1600};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",1.7782794,1,1600};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",1.7782794,1,1600};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		explosionSoundEffect = "DefaultExplosion";
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		class CamShakeExplode
		{
			power = 5;
			duration = 1;
			frequency = 20;
			distance = 56;
		};
		class CamShakeHit
		{
			power = 50;
			duration = 0.6;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.23607;
			duration = 1;
			frequency = 20;
			distance = 40;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	//US
	//M4A2
	class fow_Sh_75mm_m3: ShellBase	{
		soundHit[] = {"fow\fow_tanks\m4a2\Sound\expl_big_3",1.77,1,1800};
		visibleFire = 64;
		audibleFire = 64;
		timeToLive = 60;
		muzzleEffect = "BIS_Effects_Cannon";
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		caliber = 33.33;
		whistleOnFire = 1;
		whistleDist = 14;
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 143.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 10;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_Sh_75mm_M48_HE: fow_Sh_75mm_m3 {
		caliber = 1;
		hit = 100;
		indirectHit = 30;
		indirectHitRange = 7;
		typicalSpeed = 463;
		cost = 500;
		deflecting = 0;
		explosive = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "HEShellExplosion";
		muzzleEffect = "BIS_Effects_HeavyCaliber";
	};
	class fow_Sh_75mm_M61_APCBC: fow_Sh_75mm_m3	{
		RHA(90,615)
		hit = 210;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalSpeed = 618;
		cost = 500;
		deflecting = 10;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	class fow_Sh_75mm_M72_AP: fow_Sh_75mm_m3 {
		RHA(110,615)
		hit = 210;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalSpeed = 619;
		cost = 500;
		deflecting = 10;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	//M5A1
	class fow_Sh_37mm_m6: fow_Sh_75mm_m3 {
		soundHit[] = {"Ca\sounds\Weapons\explosions\explo_large_03",56.2341,1,1800};
		CraterEffects = "HEShellCrater";
		ExplosionEffects = "HEShellExplosion";

		class CamShakeExplode
		{
			power = 14;
			duration = 2.2;
			frequency = 15;
			distance = 143.636;
		};
		class CamShakeHit
		{
			power = 60;
			duration = 0.6;
			frequency = 15;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 37.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 15;
			distance = 1;
		};
	};
	class fow_Sh_37mm_M63_HE: fow_Sh_37mm_m6 {
		caliber = 1;
		hit = 70;
		indirectHit = 30;
		indirectHitRange = 4;
		typicalSpeed = 800;
		cost = 500;
		deflecting = 0;
		explosive = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "HEShellExplosion";
		muzzleEffect = "BIS_Effects_HeavyCaliber";
	};
	class fow_Sh_37mm_M74_AP: fow_Sh_37mm_m6 {
		RHA(36,800)//AP M74 Shot (meet angle 0°)[2]	36
		hit = 110;
		indirectHit = 2;
		indirectHitRange = 0.5;
		typicalSpeed = 880;
		cost = 500;
		deflecting = 10;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	class fow_Sh_37mm_M51_APC: fow_Sh_37mm_m6 {
		RHA(61,800)//APC M51 Shot (meet angle 0°)[2]	61
		hit = 110;
		indirectHit = 2;
		indirectHitRange = 0.5;
		typicalSpeed = 880;
		cost = 500;
		deflecting = 10;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	//UK
	class fow_Sh_57mm_HE: ShellBase	{
		caliber = 1;
		initTime = 0;
		hit = 90;
		indirectHit = 30;
		indirectHitRange = 5;
		typicalSpeed = 820;
		cost = 300;
		deflecting = 2;
		model = "\A3\Weapons_f\Data\bullettracer\shell_tracer_red";
		airLock = 0;
		laserLock = 0;
		irLock = 0;
		explosive = 1;
		visibleFire = 64;
		audibleFire = 64;
		timeToLive = 60;
		muzzleEffect = "BIS_Effects_Cannon";
		class CamShakeExplode
		{
			power = 24;
			duration = 2.2;
			frequency = 20;
			distance = 143.636;
		};
		class CamShakeHit
		{
			power = 120;
			duration = 0.6;
			frequency = 20;
			distance = 10;
		};
		class CamShakeFire
		{
			power = 3.30975;
			duration = 2.2;
			frequency = 20;
			distance = 87.6356;
		};
		class CamShakePlayerFire
		{
			power = 0.02;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

	};
	class fow_Sh_57mm_AP: fow_Sh_57mm_HE	{
		RHA(135,800)
		hit = 170;
		cost = 400;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalspeed = 853;
		deflecting = 8;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	class fow_Sh_57mm_APCBC: fow_Sh_57mm_HE	{
		RHA(115,700)
		hit = 170;
		cost = 500;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalspeed = 792;
		deflecting = 2;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	class fow_Sh_57mm_APCR: fow_Sh_57mm_HE	{
		RHA(150,1000)
		hit = 170;
		cost = 600;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalspeed = 1082;
		deflecting = 2;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	class fow_Sh_57mm_APDS: fow_Sh_57mm_HE	{
		RHA(177,1050)
		hit = 170;
		cost = 800;
		indirectHit = 2;
		indirectHitRange = 2;
		typicalspeed = 1151;
		deflecting = 2;
		explosive = 0;
		CraterEffects = "GrenadeCrater";
		explosionEffects = "GrenadeExplosion";
	};
	//PLANES
	class fow_B_127x99_Ball: BulletBase
	{
		hit = 30;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_127";
		visibleFire = 8;
		audibleFire = 120;
		dangerRadiusBulletClose = 12;
		dangerRadiusHit = 16;
		suppressionRadiusBulletClose = 8;
		suppressionRadiusHit = 12;
		cost = 5;
		airLock = 1;
		caliber = 2.6;
		typicalSpeed = 880;
		timeToLive = 10;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1.2;
		tracerStartTime = 0.075;
		tracerEndTime = 1;
		airFriction = -0.00086;
		class CamShakeExplode
		{
			power = 3.60555;
			duration = 0.8;
			frequency = 20;
			distance = 10.8167;
		};
		class CamShakeHit
		{
			power = 13;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_B_127x99_Ball_Tracer_Red: fow_B_127x99_Ball	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class fow_B_20mm: BulletBase {
		hit = 60;
		indirectHit = 6;
		indirectHitRange = 0.4;
		explosive = 0.4;
		caliber = 3.4;
		cost = 30;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
		typicalSpeed = 1030;
		visibleFire = 32;
		audibleFire = 200;
		visibleFireTime = 4;
		dangerRadiusBulletClose = 16;
		dangerRadiusHit = 40;
		suppressionRadiusBulletClose = 10;
		suppressionRadiusHit = 14;
		aiAmmoUsageFlags = "64 + 128";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",1.7782794,1,1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",1.7782794,1,1300};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",1.7782794,1,1300};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",1.7782794,1,1300};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		explosionSoundEffect = "DefaultExplosion";
		airLock = 1;
		CraterEffects = "ExploAmmoCrater";
		explosionEffects = "ExploAmmoExplosion";
		airFriction = -0.00078;
		muzzleEffect = "";
		class CamShakeExplode
		{
			power = 4;
			duration = 0.8;
			frequency = 20;
			distance = 43.7771;
		};
		class CamShakeHit
		{
			power = 20;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 2.11474;
			duration = 0.8;
			frequency = 20;
			distance = 35.7771;
		};
		class CamShakePlayerFire
		{
			power = 0.01;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_B_20mm_Tracer_Red: fow_B_20mm	{
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class fow_B_20mm_Tracer_Yellow: fow_B_20mm {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	//IJA
	class fow_B_77x56_Ball: BulletBase
	{
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 3;
		audibleFire = 45;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 750;
		caliber = 1.6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		airFriction = -0.001;
		class CamShakeExplode
		{
			power = 2.82843;
			duration = 0.6;
			frequency = 20;
			distance = 8.48528;
		};
		class CamShakeHit
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_B_77x56_Ball_Tracer_Yellow: fow_B_77x56_Ball {
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
};