
class cfgAmmo {
	#include "bullet_impacts.h"
	
	class RocketBase;
	class BulletCore;
	class BulletBase: BulletCore
	{
		fow_bulletimpact_rifle
		
		soundSetBulletFly[] = {""};
		soundSetSonicCrack[] = {"FoW_Bullet_Snap","FoW_Bullet_EFX"};
	};
	class B_9x18_Ball: BulletBase {};
	class B_45ACP_Ball;
	class B_762x51_Ball;
	class ShotgunBase;
	class B_12Gauge_Pellets : ShotgunBase { 
		class HitEffects;
	};
	class B_12Gauge_Slug;
	class FlareBase;
	class GrenadeBase;
	//GER
	class fow_B_765x17_Ball: BulletBase {
		hit = 6;
		caliber = 0.75;
		typicalSpeed = 310;
		cartridge = "FxCartridge_Small";
		airFriction = -0.001513;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1;
		class CamShakeHit {
			power = 15;
			duration = "((round (15^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 0.01;
		};
		class CamShakePlayerFire {
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 0.1;
		};
		
	};
	class fow_B_792x57_Ball: BulletBase
	{		
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1;
		airLock = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow.p3d";
		class CamShakeHit
		{
			power = 30;
			duration = "((round (30^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 0.01;
		};
		class CamShakePlayerFire
		{
			power = 1.5;
			duration = 0.1;
			frequency = 20;
			distance = 0.1;
		};
		caliber = 1.105;
		typicalspeed = 755;
		airFriction = -0.00105;
		tracerScale = 0.6;
		tracerStartTime = 0.05;
		tracerEndTime = 2;
		cartridge = "FxCartridge_762";
		nvgOnly = 0;
	};	
	class fow_B_9x19_Ball : B_9x18_Ball {
		fow_bulletimpact_pistol
		soundSetBulletFly[] = {"FoW_Bullet_Small_Whizz"};
		soundSetSonicCrack[] = {"FoW_Bullet_Small_Snap","FoW_Bullet_EFX"};
		
		hit = 6.5;
		caliber = 0.75;
		typicalSpeed = 380;
		cartridge = "FxCartridge_Small";
		airFriction = -0.001513;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1;
		class CamShakeHit {
			power = 15;
			duration = "((round (15^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 0.01;
		};
		class CamShakePlayerFire {
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 0.1;
		};
	};
	class fow_B_792x33_Ball: BulletBase	{		
		hit = 7.5;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1;
		airLock = 1;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow.p3d";
		class CamShakeHit
		{
			power = 30;
			duration = "((round (30^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 0.01;
		};
		class CamShakePlayerFire
		{
			power = 1.5;
			duration = 0.1;
			frequency = 20;
			distance = 0.1;
		};
		caliber = 0.905;
		typicalspeed = 685;
		airFriction = -0.00105;
		tracerScale = 0.6;
		tracerStartTime = 0.05;
		tracerEndTime = 2;
		cartridge = "fow_cartridge_792x33";
	};	
	
	//IJA
	class fow_B_77x58_Ball: BulletBase {
		hit = 10;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_762";
		visibleFire = 6;
		audibleFire = 9;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		cost = 1.2;
		airLock = 1;
		typicalSpeed = 700;
		caliber = 1.6;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale = 0.6;
		tracerStartTime = 0.0075;
		tracerEndTime = 5;
		airFriction = -0.001;
		class CamShakeExplode
		{
			power = "(8^0.5)";
			duration = "((round (8^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((8^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	// "The 8x22mm Nambu round quickly gained notoriety for its weakness"
	class fow_B_8x22_Ball: BulletBase {
		fow_bulletimpact_pistol
		soundSetBulletFly[] = {"FoW_Bullet_Small_Whizz"};
		soundSetSonicCrack[] = {"FoW_Bullet_Small_Snap","FoW_Bullet_EFX"};
		hit = 3.25; // "it had half the muzzle energy of the 9×19mm Parabellum" (which is 6.5 in FoW)
		caliber = 0.65;
		typicalSpeed = 335;
		cartridge = "FxCartridge_Small";
		airFriction = -0.001513;
		indirectHit = 0;
		indirectHitRange = 0;
		visibleFire = 22;
		audibleFire = 18;
		visibleFireTime = 3;
		cost = 1;
		class CamShakeHit {
			power = 15;
			duration = "((round (15^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 0.01;
		};
		class CamShakePlayerFire {
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 0.1;
		};
  
	};

	class fow_F_type10_White: FlareBase
	{
		model = "\A3\weapons_f\ammo\flare_white";
		timeToLive = 35;
		muzzleEffect = "BIS_fnc_effectFiredRifle";
		intensity = 40000;
		lightColor[] = {0.5,0.5,0.5,0.5};
		useFlare = 1;
		flareSize = 3.0;
		deflecting = 30;
		smokeColor[] = {1,1,1,0.5};
		effectFlare = "CounterMeasureFlare";
		brightness = 8;
		size = 1;
		triggerTime = 3;
		triggerSpeedCoef = 1;
	};	
	//IT
	class fow_B_65x52_Ball: BulletBase
	{		
		hit=10;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=8;
		audibleFire=8;
		visibleFireTime=2;
		cost = 1.2;
		airLock=1;
		tracerStartTime = -1;
		airFriction = -0.00125;
		waterFriction = -0.3;
		typicalSpeed=700;
		caliber=0.9;
		deflecting = 20;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	
	//UK
	class fow_B_303_Ball: BulletBase
	{
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=8;
		audibleFire=8;
		visibleFireTime=2;
		cost = 1.2;
		airLock=1;
		airFriction = -0.00125;
		waterFriction = -0.3;
		typicalSpeed=750;
		caliber=0.9;
		deflecting = 20;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
		tracerScale = 1;
		tracerStartTime = 0.05;
		tracerEndTime = 1;
		nvgOnly = 0;
	};
	class fow_B_455: B_45ACP_Ball {
		fow_bulletimpact_pistol
		soundSetBulletFly[] = {"FoW_Bullet_Small_Whizz"};
		soundSetSonicCrack[] = {"FoW_Bullet_Small_Snap","FoW_Bullet_EFX", "FoW_Bullet_Scream_Slow"};
		hit = 9;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		visibleFire = 5; /// how big does the shooter seem to be for AI to take notice after he shoots
		audibleFire = 8; /// how big does the shooter seem to be for AI to take notice after he shoots
		cost = 1.2; /// pretty cheap to fire at anything, comes into shoot efficiency calculation mentioned in the weapon
		typicalSpeed = 285;
		caliber = 0.60;
		model = \A3\Weapons_f\Data\bullettracer\tracer_red; /// just for tracer
		tracerScale = 1.0; /// how big is the flying tracer
		tracerStartTime = 0.05; // seconds
		tracerEndTime = 1; // seconds
		airFriction = -0.00107;
		
		dangerRadiusBulletClose 		= 8;	/// defines how far the AI gets alerted by the projectile's impact or explosion. Default value -1 makes this distance be automatically derived from the hit and indirectHit properties.
		dangerRadiusHit 				= 12;	/// defines how far the AI gets alerted by the bullet's pass. Default value -1 disables the detection. (works only for bullets, no other projectiles)
		suppressionRadiusBulletClose 	= 6;	/// defines the max. distance at which the AI becomes suppressed by the projectile's impact or explosion. Default value -1 disables the suppressive effect
		suppressionRadiusHit 			= 8;	/// defines the max. distance at which the AI becomes suppressed by the bullet's pass. Default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
		shootDistraction 				= 10;	/// -1 by default to be computed from visibleFire and audibleFire, describes how much does the shoot distract the shooter
		
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 8;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};	
	//US
	
	class fow_B_762x33_Ball: BulletBase
	{
		hit=7;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=8;
		audibleFire=8;
		visibleFireTime=2;
		cost = 1.2;
		airLock=1;
		tracerStartTime = -1;
		airFriction = -0.00125;
		waterFriction = -0.3;
		typicalSpeed=600;
		caliber=0.9;
		deflecting = 20;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};	
	
	class fow_B_762x63_Ball: BulletBase
	{
		hit=11;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=8;
		audibleFire=8;
		visibleFireTime=2;
		cost = 1.2;
		airLock=1;
		tracerStartTime = -1;
		airFriction = -0.00125;
		waterFriction = -0.3;
		typicalSpeed=860;
		caliber=0.9;
		deflecting = 20;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	class fow_B_flamefuel: BulletBase
	{
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		visibleFire=30;
		audibleFire=30;
		visibleFireTime=2;
		cost = 1.2;
		airLock=1;
		tracerStartTime = -1;
		airFriction = -0.00125;
		waterFriction = -0.3;
		typicalSpeed=30;
		caliber=0.9;
		deflecting = 0;
		dangerRadiusBulletClose = 8;
		dangerRadiusHit = 12;
		suppressionRadiusBulletClose = 6;
		suppressionRadiusHit = 8;
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};
	
	//class fow_B_762x51_Ball: B_762x51_Ball {};
	class fow_B_45_acp: B_45ACP_Ball {
		fow_bulletimpact_pistol
		soundSetBulletFly[] = {"FoW_Bullet_Small_Whizz"};
		soundSetSonicCrack[] = {"FoW_Bullet_Small_Snap","FoW_Bullet_EFX", "FoW_Bullet_Scream_Slow"};
		
		
		//hit = 8;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "FxCartridge_9mm";
		visibleFire = 5; /// how big does the shooter seem to be for AI to take notice after he shoots
		audibleFire = 8; /// how big does the shooter seem to be for AI to take notice after he shoots
		cost = 1.2; /// pretty cheap to fire at anything, comes into shoot efficiency calculation mentioned in the weapon
		typicalSpeed = 285;
		caliber = 0.60;
		model = \A3\Weapons_f\Data\bullettracer\tracer_red; /// just for tracer
		tracerScale = 1.0; /// how big is the flying tracer
		tracerStartTime = 0.05; // seconds
		tracerEndTime = 1; // seconds
		airFriction = -0.00107;
		
		dangerRadiusBulletClose 		= 8;	/// defines how far the AI gets alerted by the projectile's impact or explosion. Default value -1 makes this distance be automatically derived from the hit and indirectHit properties.
		dangerRadiusHit 				= 12;	/// defines how far the AI gets alerted by the bullet's pass. Default value -1 disables the detection. (works only for bullets, no other projectiles)
		suppressionRadiusBulletClose 	= 6;	/// defines the max. distance at which the AI becomes suppressed by the projectile's impact or explosion. Default value -1 disables the suppressive effect
		suppressionRadiusHit 			= 8;	/// defines the max. distance at which the AI becomes suppressed by the bullet's pass. Default value -1 disables the suppressive effect (works only for bullets, no other projectiles)
		shootDistraction 				= 10;	/// -1 by default to be computed from visibleFire and audibleFire, describes how much does the shoot distract the shooter
		
		class CamShakeExplode
		{
			power = "(5^0.5)";
			duration = "((round (5^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5^0.5)*3)";
		};
		class CamShakeHit
		{
			power = 5;
			duration = "((round (5^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
	};	

	//SHOTGUN

	class fow_B_12Gauge_Pellets: B_12Gauge_Pellets
	{
		fow_bulletimpact_pellet
		hit						= 17; // for AI
		simulation				= shotSubmunitions;
		simulationStep			= 0.0001;
		triggerTime				= 0.0001;
		triggerSpeedCoef[]		= {0.84,1.0};
		submunitionAmmo			= fow_B_12Gauge_Pellets_Submunition;
		submunitionConeType[]	= {"poissondisccenter", 11};
		submunitionConeAngle	= 1.1;
		cartridge				= "fow_cartridge_slug";
		model					= "\A3\weapons_f\empty";
	};
	class fow_B_12Gauge_Pellets_Submunition: BulletBase
	{
		fow_bulletimpact_pellet // Pellet impact sounds are lower in volume and higher in pitch (= shorter)
		hit = 2.4; // was 1.8 in earlier dev versions, but proved ineffective
		indirectHit = 0;
		indirectHitRange = 0;
		caliber = 0.38;
		typicalSpeed = 380;
		airFriction = -0.00712;

		class HitEffects
		{
			Hit_Foliage_green = "ImpactLeavesGreen";
			Hit_Foliage_Dead = "ImpactLeavesDead";
			Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
			Hit_Foliage_Palm = "ImpactLeavesPalm";
			Hit_Foliage_Pine = "ImpactLeavesPine";
			hitFoliage = "ImpactLeaves";
			hitGlass = "ImpactGlass";
			hitGlassArmored = "ImpactGlassThin";
			hitWood = "ImpactWood";
			hitMetal = "ImpactMetal";
			hitMetalPlate = "ImpactMetal";
			hitBuilding = "ImpactPlaster";
			hitPlastic = "ImpactPlastic";
			hitRubber = "ImpactRubber";
			hitConcrete = "ImpactConcrete";
			hitMan = "ImpactEffectsBlood";
			hitGroundSoft = "ImpactEffectsSmall";
			hitGroundHard = "ImpactEffectsHardGround";
			hitWater = "ImpactEffectsWater";
			hitVirtual = "ImpactMetal";
		};
	};
	class fow_B_12Gauge_Slug: B_12Gauge_Slug
	{
		hit = 42;
		indirectHit = 0;
		indirectHitRange = 0;
		cartridge = "fow_cartridge_slug";
		cost = 2;
		typicalSpeed = 600;
		visibleFire = 10;
		audibleFire = 15;
		airFriction = -0.001;
		caliber = 4;
		class CamShakeFire
		{
			power = 0.06;
			duration = 0.3;
			frequency = 15;
			distance = 5;
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.5;
			frequency = 10;
		};
	};
	
	
	//ROCKETS
	
	class fow_R_m6a1: RocketBase {
		simulation = "shotRocket";
		hit = 600;
		indirectHit = 18;
		IndirecthitRange = 3.8;
		initTime = 0;
		thrust = 0;
		thrustTime = 0.5;
		fuseDistance = 5;
		sideAirFriction = 0.5;
		timeToLive = 15;
		maxSpeed = 120;
		model = "\fow\fow_weapons\m1a1_bazooka\m6a1";
		simulationStep = 0.002;
		cost = 175;
		whistleDist = 5;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		//SoundSetExplosion[] = {"FoW_Rocket_AT_Explode", "FoW_Rocket_AT_EFX", "FoW_Grenade_Fragment"};
		//soundFly[] = {"fow\fow_sounds\weapons\bazooka\rocket_fly.wav",+3db ,1 ,30};
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

	};
	class fow_g_piat_HE: GrenadeBase {
		explosionSoundEffect = "DefaultExplosion";
		simulation = "shotShell";
		model = "\fow\fow_weapons\piat\piat_projectile";
		hit = 160;
		indirectHit = 40;
		indirectHitRange = 10;
		visibleFire = 1;
		audibleFire = 50;
		visibleFireTime = 3;
		dangerRadiusHit = 80;
		suppressionRadiusHit = 32;
		explosive = 1;
		cost = 300;
		deflecting = 5;
		airFriction = -0.001;
		sideAirFriction = 0.85;
		fuseDistance = 15;
		whistleDist = 16;
		typicalSpeed = 76;
		caliber = 4;
		aiAmmoUsageFlags = "128";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_01",3.1622777,1,1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_02",3.1622777,1,1500};
		soundHit3[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_03",3.1622777,1,1500};
		soundHit4[] = {"A3\Sounds_F\arsenal\explosives\Grenades\Explosion_gng_grenades_04",3.1622777,1,1500};
		multiSoundHit[] = {"soundHit1",0.25,"soundHit2",0.25,"soundHit3",0.25,"soundHit4",0.25};
		class CamShakeExplode
		{
			power = 15;
			duration = 1.2;
			frequency = 20;
			distance = 74.5964;
		};
		class CamShakeHit
		{
			power = 30;
			duration = 0.4;
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = 5;
			duration = 0.2;
			frequency = 20;
			distance = 0;
		};
		class CamShakePlayerFire
		{
			power = 5;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};	
	class fow_g_piat_HEAT: fow_g_piat_HE {
		explosionSoundEffect = "DefaultExplosion";//change it
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		hit = 750;
		indirectHit = 2;
		indirectHitRange = 2;
		cost = 500;
		aiAmmoUsageFlags = "128 + 512";
		//SoundSetExplosion[] = {"FoW_Rocket_AT_Explode", "FoW_Rocket_AT_EFX", "FoW_Grenade_Fragment"};
	};	
	
	/*
	class fow_R_piat: RocketBase {
		simulation = "shotRocket";
		hit = 400;
		indirectHit = 50;
		indirectHitRange = 2;
		initTime = 0;
		thrust = 0;
		thrustTime = 0;
		fuseDistance = 5;
		sideAirFriction = 0.5;
		airFriction = 0.025;
		timeToLive = 15;
		maxSpeed = 76;
		model = "\fow\fow_weapons\piat\piat_projectile";
		simulationStep = 0.002;
		cost = 175;
		whistleDist = 5;
		airLock = 0;
		aiAmmoUsageFlags = 128;
		irLock = 0;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		muzzleEffect = "";
		effectsMissileInit = "";
		effectsMissile = "EmptyEffect";
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};

	};
	class fow_R_piat_HE: fow_R_piat {
		simulation = "shotRocket";
		hit = 200;
		indirectHit = 50;
		indirectHitRange = 6;
		explosive = 1;
		model = "\fow\fow_weapons\piat\piat_projectile";
		CraterEffects = "ArtyShellCrater";
		ExplosionEffects = "MortarExplosion";
		allowAgainstInfantry = 1;
		class CamShakeExplode
		{
			power = 22;
			duration = 2;
			frequency = 20;
			distance = 123.905;
		};
	};
	*/
	class fow_R_pzfaust_30_klein: RocketBase {
		simulation = "shotRocket";
		hit = 400;
		indirectHit = 50;
		indirectHitRange = 2;
		initTime = 0;
		thrust = 0;
		thrustTime = 0;
		fuseDistance = 15;
		airFriction = 0.85;
		sideAirFriction = 0.3;
		timeToLive = 15;
		maxSpeed = 30;
		typicalSpeed = 30;
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Klein_Projectile";
		simulationStep = 0.002;
		cost = 175;
		whistleDist = 5;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_R_pzfaust_30: fow_R_pzfaust_30_klein {
		hit = 400;
		indirectHit = 50;
		indirectHitRange = 2;
		//maxSpeed = 30;
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Projectile";
		cost = 175;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_R_pzfaust_60: fow_R_pzfaust_30 {
		hit = 400;
		indirectHit = 50;
		indirectHitRange = 2;
		//maxSpeed = 45;
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Projectile";
		cost = 175;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_R_pzfaust_100: fow_R_pzfaust_30 {
		hit = 400;
		indirectHit = 50;
		indirectHitRange = 2;
		//maxSpeed = 60;
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Projectile";
		cost = 175;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
	class fow_R_rpzb: RocketBase {
		simulation = "shotRocket";
		hit = 600;
		indirectHit = 30;
		indirectHitRange = 2;
		initTime = 0.01;
		thrust = 0.1;
		thrustTime = 2;
		fuseDistance = 15;
		airFriction = 0.45;
		sideAirFriction = 0.3;
		timeToLive = 20;
		maxSpeed = 110;
		typicalSpeed = 30;
		model = "\fow\fow_weapons\rpzb\rpzb_rocket";
		simulationStep = 0.002;
		cost = 175;
		whistleDist = 5;
		airLock = 0;
		aiAmmoUsageFlags = "128 + 512";
		irLock = 0;
		maneuvrability = 0;
		allowAgainstInfantry = 0;
		class CamShakeExplode
		{
			power = "(55*0.2)";
			duration = "((round (55^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((5 + 55^0.5)*8)";
		};
		class CamShakeHit
		{
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};
		class CamShakeFire
		{
			power = "(20^0.25)";
			duration = "((round (20^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((20^0.5)*8)";
		};
		class CamShakePlayerFire
		{
			power = 1;
			duration = 0.1;
			frequency = 20;
			distance = 1;
		};
	};
};