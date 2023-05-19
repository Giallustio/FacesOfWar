
class CfgPatches
{
	class fow_weapons_c_explosives
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Weapons_F","fow_weapons_explosives"};
	};
};

class CfgAmmo 
{
	class Grenade;
	class SmokeShell;
	class GrenadeHand : Grenade {};
	class PipeBombBase;
	class SatchelCharge_Remote_Ammo;
	//US
	class fow_e_mk2  : GrenadeHand 	{
		hit = 55;
		indirectHit = 25;
		IndirecthitRange = 3;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\WX_HandGrenade_mk2.p3d";
		whistleDist = 15;
		explosionTime = 4;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.3;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_tnt_halfpound  : GrenadeHand 	{
		hit = 200;
		indirectHit = 200;
		IndirecthitRange = 3;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\HLS_TNT_US_HalfPound.p3d";
		whistleDist = 15;
		explosionTime = 8;
		timeToLive = 10;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.3;
		cost = 10;
		simulation = "shotGrenade";
		// Fuse burning
		soundFly[] = {"fow\fow_sounds\explosions\tnt\tnt_fuse", 1, 1, 15};
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_02.wss",3.1622777,1,1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\AT_landmine_explosion_01.wss",3.1622777,1,1500};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
	};
	class fow_e_tnt_onepound_ammo: SatchelCharge_Remote_Ammo	{
		hit = 400;
		indirectHit = 400;
		indirectHitRange = 4;
		model = "\fow\fow_weapons\explosives\HLS_TNT_US_OnePound";
		mineModelDisabled = "\fow\fow_weapons\explosives\HLS_TNT_US_OnePound";
		defaultMagazine = "fow_e_tnt_onepound_mag";
		/*soundHit1[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_satchel_01",3.1622777,1,1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\bombs\Explosion_satchel_02",3.1622777,1,1500};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
		soundDeactivation[] = {"A3\Sounds_F\weapons\Mines\deactivate_mine_3a",1.9952624,1,20};
		ExplosionEffects = "MineNondirectionalExplosion";
		CraterEffects = "MineNondirectionalCrater";
		*/whistleDist = 10;
		mineInconspicuousness = 3;
		//mineTrigger = "fow_tnt";
	};	
	class fow_e_tnt_twohalfpound_ammo: fow_e_tnt_onepound_ammo	{
		hit = 400;
		indirectHit = 400;
		indirectHitRange = 4;
		model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualHalfPound";
		mineModelDisabled = "\fow\fow_weapons\explosives\HLS_TNT_US_DualHalfPound";
		defaultMagazine = "fow_e_tnt_twohalfpound_mag";
	};
	class fow_e_tnt_twopound_ammo: fow_e_tnt_onepound_ammo	{
		hit = 800;
		indirectHit = 800;
		indirectHitRange = 6;
		model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualOnePound";
		mineModelDisabled = "\fow\fow_weapons\explosives\HLS_TNT_US_DualOnePound";
		defaultMagazine = "fow_e_tnt_twopound_mag";
	};
	//UK
	class fow_e_no36mk1  : GrenadeHand 	{
		hit = 55;
		indirectHit = 25;
		IndirecthitRange = 3;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\WX_HandGrenade_No36MkI.p3d";
		whistleDist = 15;
		explosionTime = 4;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.3;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_no69 : GrenadeHand {
		hit = 35;
		indirectHit = 15;
		IndirecthitRange = 3;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\HLS_UK_No69_Thrown.p3d";
		whistleDist = 15;
		explosionTime = 0;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.3;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_no73 : GrenadeHand {
		hit = 200;
		indirectHit = 145;
		IndirecthitRange = 5;
		visibleFire = 2;
		audibleFire = 2;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\HLS_UK_No73_Thrown.p3d";
		whistleDist = 15;
		explosionTime = 0;
		oskolki[] = {65,200,50};
		deflecting = 25;
		deflectionSlowDown = 0.7;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_no77 : SmokeShell {
		hit = 25;
		indirectHit = 15;
		IndirecthitRange = 1.5;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\HLS_UK_No77_Thrown.p3d";
		whistleDist = 15;
		explosionTime = 0;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.3;
		cost = 10;
		timeToLive = 25;
		CraterEffects = "NoCrater";
		effectsSmoke = "FOW_no77_Grenade_Effects";
		smokeColor[] = {1,1,1,1};
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_no79 : SmokeShell {
		hit = 0;
		indirectHit = 0;
		IndirecthitRange = 0.2;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\HLS_UK_No79_Thrown.p3d";
		whistleDist = 15;
		explosionTime = 0;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.3;
		cost = 10;
		timeToLive = 40;
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		effectsSmoke = "FOW_no79_Grenade_Effects";
		smokeColor[] = {1,1,1,1};
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_no82 : GrenadeHand {
		hit = 240;
		indirectHit = 145;
		IndirecthitRange = 5;
		visibleFire = 2;
		audibleFire = 2;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\HLS_UK_No82_Thrown.p3d";
		whistleDist = 15;
		explosionTime = 0;
		oskolki[] = {65,200,50};
		deflecting = 25;
		deflectionSlowDown = 0.7;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	//IJA
	class fow_e_type97  : GrenadeHand 	{
		hit = 55;
		indirectHit = 25;
		IndirecthitRange = 3;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\WX_HandGrenade_Type097.p3d";
		whistleDist = 15;
		explosionTime = 4;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.3;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_type99  : GrenadeHand 	{
		hit = 55;
		indirectHit = 25;
		IndirecthitRange = 3;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\hls_type99.p3d";
		whistleDist = 15;
		explosionTime = 4;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.3;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_type99_at: GrenadeHand	{
		hit = 210;
		indirectHit = 145;
		IndirecthitRange = 5;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\wx_type99_at.p3d";
		whistleDist = 15;
		explosionTime = 5;
		oskolki[] = {65,200,50};
		deflecting = 25;
		deflectionSlowDown = 0.7;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	//GER
	class fow_e_m24: GrenadeHand	{
		hit = 55;
		indirectHit = 25;
		IndirecthitRange = 3;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\HLS_GER_M24_Thrown.p3d";
		whistleDist = 15;
		explosionTime = 5;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.35;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_m24K: fow_e_m24 {model = "\fow\fow_weapons\explosives\hls_m24K.p3d";};
	class fow_e_m24_spli: GrenadeHand	{
		hit = 55;
		indirectHit = 25;
		IndirecthitRange = 3;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\hls_m24_spli.p3d";
		whistleDist = 15;
		explosionTime = 5;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.35;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_m24K_spli: fow_e_m24_spli {model = "\fow\fow_weapons\explosives\HLS_GER_M24_Splittering_Thrown.p3d";};
	class fow_e_m24_at: GrenadeHand	{
		hit = 210;
		indirectHit = 145;
		IndirecthitRange = 5;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\hls_m24_at.p3d";
		whistleDist = 15;
		explosionTime = 5;
		oskolki[] = {65,200,50};
		deflecting = 25;
		deflectionSlowDown = 0.7;
		cost = 10;
		simulation = "shotGrenade";
		SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};
	class fow_e_m24K_at: fow_e_m24_at {model = "\fow\fow_weapons\explosives\hls_m24K_at.p3d";};
	class fow_e_nb39b : SmokeShell {
		hit = 0;
		indirectHit = 0;
		IndirecthitRange = 0.2;
		visibleFire = 2;
		audibleFire = 0.25;
		visibleFireTime = 5;
		model = "\fow\fow_weapons\explosives\HLS_GER_Nb39B_Thrown.p3d";
		whistleDist = 15;
		explosionTime = 5;
		oskolki[] = {40,100,30};
		deflecting = 50;
		deflectionSlowDown = 0.3;
		cost = 10;
		timeToLive = 40;
		CraterEffects = "NoCrater";
		explosionEffects = "NoExplosion";
		effectsSmoke = "FOW_no79_Grenade_Effects";
		smokeColor[] = {1,1,1,1};
		//SoundSetExplosion[] = {"FoW_Grenade_Bang", "FoW_Grenade_EFX", "FoW_Grenade_Fragment"};
	};

};

class cfgMagazines
{
	class Default;	// External class reference
	class CA_Magazine : Default {};
	class HandGrenade : CA_Magazine {};
	class fow_e_mk2 :  HandGrenade	{
		ammo = "fow_e_mk2";
		model = "fow\fow_weapons\explosives\WX_HandGrenade_mk2.p3d";
		displayName = "Mk 2";
		descriptionShort = "Mk 2";
		shortNameMagazine = "Mk 2";
		picture = "\fow\fow_weapons\explosives\data\ui\m_mk2_ca.paa";
		initSpeed = 18;
		displayNameShort = "Mk 2";
		mass = 5;
	};
	class fow_e_tnt_halfpound :  HandGrenade	{
		ammo = "fow_e_tnt_halfpound";
		model = "fow\fow_weapons\explosives\HLS_TNT_US_HalfPound.p3d";
		displayName = "TNT (half pound)";
		descriptionShort = "TNT (half pound)";
		shortNameMagazine = "TNT (half pound)";
		picture = "\fow\fow_weapons\explosives\data\ui\m_mk2_ca.paa";
		initSpeed = 6;
		displayNameShort = "TNT (half pound)";
		mass = 10;
	};
	class SatchelCharge_Remote_Mag;
	//class fow_e_tnt_onepound: CA_Magazine
	class fow_e_tnt_onepound_mag: SatchelCharge_Remote_Mag	{
		author = "FOW Team";
		scope = 2;
		mass = 20;
		displayName = "TNT (one pound)";
		//picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model = "\fow\fow_weapons\explosives\HLS_TNT_US_OnePound";
		descriptionShort = "TNT (one pound)";
		class Library
		{
			libTextDesc = "TNT (one pound)";
		};
		descriptionUse = "Place it, set the time and RUN!";
		/*type = "2*		256";
		allowedSlots[] = {901};
		value = 5;
		ammo = "fow_e_tnt_onepound";
		mass = 80;
		count = 1;
		initSpeed = 0;
		maxLeadSpeed = 0;
		nameSoundWeapon = "satchelcharge";
		nameSound = "satchelcharge";
		weaponPoolAvailable = 1;
		useAction = 1;
		useActionTitle = "Place TNT";
		sound[] = {"A3\sounds_f\dummysound",0.00031622776,1,10};*/
		ammo = "fow_e_tnt_onepound_ammo";
	};
	class fow_e_tnt_twohalfpound_mag: fow_e_tnt_onepound_mag	{
		author = "FOW Team";
		displayName = "TNT (two half pound)";
		//picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualHalfPound";
		descriptionShort = "TNT (two half pound)";
		class Library
		{
			libTextDesc = "TNT (two half pound)";
		};
		ammo = "fow_e_tnt_twohalfpound_ammo";
	};
	class fow_e_tnt_twopound_mag: fow_e_tnt_onepound_mag	{
		mass = 30;
		author = "FOW Team";
		displayName = "TNT (two pound)";
		//picture = "\A3\Weapons_f\data\UI\gear_satchel_CA.paa";
		model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualOnePound";
		descriptionShort = "TNT (two pound)";
		class Library
		{
			libTextDesc = "TNT (two pound)";
		};
		ammo = "fow_e_tnt_twopound_ammo";
	};
	//UK
	class fow_e_no36mk1 :  HandGrenade	{
		ammo = "fow_e_no36mk1";
		model = "fow\fow_weapons\explosives\WX_HandGrenade_No36MkI.p3d";
		displayName = "No 36 Mk 1";
		descriptionShort = "No 36 Mk 1";
		shortNameMagazine = "No 36 Mk 1";
		picture = "\fow\fow_weapons\explosives\data\ui\m_no36_ca.paa";
		initSpeed = 16;
		displayNameShort = "No 36 Mk 1";
		mass = 5;
	};
	class fow_e_no69 :  HandGrenade	{
		ammo = "fow_e_no69";
		model = "\fow\fow_weapons\explosives\HLS_UK_No69_Ground.p3d";
		displayName = "No.69";
		descriptionShort = "No.69 Grenade<br/><br/>Detonation Type: Concussion, Impact.";
		shortNameMagazine = "No.69";
		picture = "\fow\fow_weapons\explosives\data\ui\HLS_UI_UK_No69_ca.paa";
		initSpeed = 20;
		displayNameShort = "No.69";
		mass = 6;
	};
	class fow_e_no73 :  HandGrenade	{
		ammo = "fow_e_no73";
		model = "\fow\fow_weapons\explosives\HLS_UK_No73_Ground.p3d";
		displayName = "No.73";
		descriptionShort = "No.73 Grenade<br/><br/>Detonation Type: Anti-Tank, Impact.";
		shortNameMagazine = "No.73";
		picture = "\fow\fow_weapons\explosives\data\ui\HLS_UI_UK_No73_ca.paa";
		initSpeed = 16;
		displayNameShort = "No.73";
		mass = 16;
	};
	class fow_e_no77 :  HandGrenade	{
		ammo = "fow_e_no77";
		model = "\fow\fow_weapons\explosives\HLS_UK_No77_Ground.p3d";
		displayName = "No.77";
		descriptionShort = "No.77 Grenade<br/><br/>Detonation Type: Smoke, Impact.";
		shortNameMagazine = "No.77";
		picture = "\fow\fow_weapons\explosives\data\ui\HLS_UI_UK_No77_ca.paa";
		initSpeed = 20;
		displayNameShort = "No.77";
		mass = 5;
	};
	class fow_e_no79 :  HandGrenade	{
		ammo = "fow_e_no79";
		model = "\fow\fow_weapons\explosives\HLS_UK_No79_Ground.p3d";
		displayName = "No.79";
		descriptionShort = "No.79 Grenade<br/><br/>Detonation Type: Smoke, Impact.";
		shortNameMagazine = "No.79";
		picture = "\fow\fow_weapons\explosives\data\ui\HLS_UI_UK_No79_ca.paa";
		initSpeed = 20;
		displayNameShort = "No.79";
		mass = 6;
	};
	class fow_e_no82 :  HandGrenade	{
		ammo = "fow_e_no82";
		model = "\fow\fow_weapons\explosives\HLS_UK_No82_Ground.p3d";
		displayName = "No.82";
		descriptionShort = "No.82 Grenade<br/><br/>Detonation Type: Anti-Tank, Impact.";
		shortNameMagazine = "No.82";
		picture = "\fow\fow_weapons\explosives\data\ui\HLS_UI_UK_No82_ca.paa";
		initSpeed = 18;
		displayNameShort = "No.82";
		mass = 18;
	};
	//IJA
	class fow_e_type97 : HandGrenade	{
		ammo = "fow_e_type97";
		model = "fow\fow_weapons\explosives\WX_HandGrenade_Type097.p3d";
		displayName = "Type 97";
		descriptionShort = "Type 97";
		shortNameMagazine = "Type 97";
		picture = "\fow\fow_weapons\explosives\data\ui\m_Type97_ca.paa";
		initSpeed = 18;
		displayNameShort = "Type 97";
		mass = 5;		
	};
	class fow_e_type99 : HandGrenade	{
		ammo = "fow_e_type99";
		model = "fow\fow_weapons\explosives\hls_type99.p3d";
		displayName = "Type 99";
		descriptionShort = "Type 99";
		shortNameMagazine = "Type 99";
		picture = "\fow\fow_weapons\explosives\data\ui\m_Type97_ca.paa";
		initSpeed = 18;
		displayNameShort = "Type 99";
		mass = 5;		
	};
	class fow_e_type99_at : HandGrenade	{
		ammo = "fow_e_type99_at";
		model = "fow\fow_weapons\explosives\wx_type99_at.p3d";
		displayName = "Type 99 AT";
		descriptionShort = "Type 99 AT";
		shortNameMagazine = "Type 99 AT";
		picture = "\fow\fow_weapons\explosives\data\ui\m_type99_at_ca.paa";
		initSpeed = 10;
		displayNameShort = "Type 99 AT";
		mass = 15;
	};
	class fow_e_m24 : HandGrenade	{
		ammo = "fow_e_m24";
		model = "fow\fow_weapons\explosives\HLS_GER_M24_Ground.p3d";
		displayName = "Model 24 Stielhandgranate";
		descriptionShort = "M 24";
		shortNameMagazine = "M 24";
		picture = "\fow\fow_weapons\explosives\data\ui\m_m24_ca.paa";
		initSpeed = 22;
		displayNameShort = "M 24";
		mass = 10;		
	};
	class fow_e_m24K : fow_e_m24	{
		ammo = "fow_e_m24K";
		model = "fow\fow_weapons\explosives\hls_m24K.p3d";
		displayName = "Model 24 Stielhandgranate K";
		descriptionShort = "M 24 K";
		shortNameMagazine = "M 24 K";
		displayNameShort = "M 24 K";
		mass = 10;		
	};
	class fow_e_m24_spli : HandGrenade	{
		ammo = "fow_e_m24_spli";
		model = "fow\fow_weapons\explosives\HLS_GER_M24_Splittering_Ground.p3d";
		displayName = "Model 24 Splitterring";
		picture = "\fow\fow_weapons\explosives\data\ui\m_m24_ca.paa";
		descriptionShort = "M 24 (Spli)";
		shortNameMagazine = "M 24 (Spli)";
		displayNameShort = "M 24 (Spli)";
		mass = 10;		
	};
	class fow_e_m24K_spli : fow_e_m24_spli	{
		ammo = "fow_e_m24K_spli";
		model = "fow\fow_weapons\explosives\hls_m24K_spli.p3d";
		displayName = "Model 24 (K) Splitterring";
		descriptionShort = "M 24 K (Spli)";
		shortNameMagazine = "M 24 K (Spli)";
		displayNameShort = "M 24 K (Spli)";	
	};
	class fow_e_m24_at : HandGrenade	{
		ammo = "fow_e_m24_at";
		model = "fow\fow_weapons\explosives\hls_m24_at.p3d";
		displayName = "Model 24 Geballte Ladung";
		picture = "\fow\fow_weapons\explosives\data\ui\m_m24at_ca.paa";
		descriptionShort = "M 24 (AT)";
		shortNameMagazine = "M 24 (AT)";
		initSpeed = 10;
		displayNameShort = "M 24 (AT)";
		mass = 15;		
	};
	class fow_e_m24K_at : fow_e_m24_at {
		ammo = "fow_e_m24K_at";
		model = "fow\fow_weapons\explosives\hls_m24K_at.p3d";
		displayName = "Model 24 K Geballte Ladung";
		descriptionShort = "M 24 K (AT)";
		shortNameMagazine = "M 24 K (AT)";
		displayNameShort = "M 24 K (AT)";		
	};
	class fow_e_nb39b : HandGrenade	{
		ammo = "fow_e_nb39b";
		model = "fow\fow_weapons\explosives\HLS_GER_Nb39B_Ground.p3d";
		displayName = "NB39B Smoke grenade";
		picture = "\fow\fow_weapons\explosives\data\ui\m_m24_ca.paa";
		descriptionShort = "NB39B";
		shortNameMagazine = "NB39B)";
		displayNameShort = "NB39B";
		mass = 10;		
	};
};

class CfgWeapons 
{
	class Default;
	class GrenadeLauncher : Default {};
	class Throw : GrenadeLauncher 
	{
		muzzles[] += {"fow_e_mk2Muzzle","fow_e_tnt_halfpoundMuzzle","fow_e_no36mk1Muzzle","fow_e_type97Muzzle","fow_e_type99Muzzle","fow_e_type99_atMuzzle","fow_e_m24Muzzle","fow_e_m24KMuzzle","fow_e_m24_spliMuzzle","fow_e_m24K_spliMuzzle","fow_e_m24_atMuzzle","fow_e_m24K_atMuzzle","fow_e_nb39bMuzzle","fow_e_no69Muzzle","fow_e_no73Muzzle","fow_e_no77Muzzle","fow_e_no79Muzzle","fow_e_no82Muzzle"};
		class ThrowMuzzle: GrenadeLauncher
		{

		};
		class HandGrenadeMuzzle: ThrowMuzzle
		{

		};
		class SmokeShellMuzzle: ThrowMuzzle
		{
			//magazines[] += {"lib_nb39","LIB_US_M18"};
		};
		class fow_e_baseMuzzle: ThrowMuzzle
		{
			//author = "FOW";
			aiRateOfFire = 5;
			aiRateOfFireDistance = 75;
			minRange = 30;
			minRangeProbab = 0.1;
			midRange = 45;
			midRangeProbab = 0.3;
			maxRange = 75;
			maxRangeProbab = 0.9;
		};

		class fow_e_mk2Muzzle: fow_e_baseMuzzle
		{
			magazines[] = {"fow_e_mk2"};
		};
		class fow_e_tnt_halfpoundMuzzle: fow_e_baseMuzzle
		{
			magazines[] = {"fow_e_tnt_halfpound"};
		};
    //UK
		class fow_e_no36mk1Muzzle: fow_e_baseMuzzle
		{
			magazines[] = {"fow_e_no36mk1"};			
		};
        class fow_e_no69Muzzle: fow_e_baseMuzzle
        {
            magazines[] = {"fow_e_no69"};
        };
        class fow_e_no73Muzzle: fow_e_baseMuzzle
        {
            magazines[] = {"fow_e_no73"};
        };
        class fow_e_no77Muzzle: fow_e_baseMuzzle
        {
            magazines[] = {"fow_e_no77"};
        };
        class fow_e_no79Muzzle: fow_e_baseMuzzle
        {
            magazines[] = {"fow_e_no79"};
        };
        class fow_e_no82Muzzle: fow_e_baseMuzzle
        {
            magazines[] = {"fow_e_no82"};
        };
    //IJA
		class fow_e_type97Muzzle: fow_e_baseMuzzle
		{
			magazines[] = {"fow_e_type97"};			
		};
		class fow_e_type99Muzzle: fow_e_baseMuzzle
		{
			magazines[] = {"fow_e_type99"};			
		};
		class fow_e_type99_atMuzzle: fow_e_baseMuzzle
		{
			magazines[] = {"fow_e_type99_at"};			
		};
	//GER
		class fow_e_m24Muzzle: fow_e_baseMuzzle
		{
			aiRateOfFire = 9;
			magazines[] = {"fow_e_m24"};				
		};
		class fow_e_m24KMuzzle: fow_e_m24Muzzle {magazines[] = {"fow_e_m24K"};};
		class fow_e_m24_spliMuzzle: fow_e_baseMuzzle
		{
			aiRateOfFire = 9;
			magazines[] = {"fow_e_m24_spli"};				
		};
		class fow_e_m24K_spliMuzzle: fow_e_m24_spliMuzzle {magazines[] = {"fow_e_m24K_spli"};};
		class fow_e_m24_atMuzzle: fow_e_baseMuzzle
		{
			aiRateOfFire = 9;
			magazines[] = {"fow_e_m24_at"};				
		};
		class fow_e_m24K_atMuzzle: fow_e_m24_atMuzzle {magazines[] = {"fow_e_m24K_atMuzzle"};};
        class fow_e_nb39bMuzzle: fow_e_baseMuzzle
        {
            magazines[] = {"fow_e_nb39b"};
        };
	};
	class Put: Default
	{
		muzzles[] += {"fow_e_tnt_onepoundMuzzle","fow_e_tnt_twohalfpoundMuzzle","fow_e_tnt_twopoundMuzzle"};
		class PutMuzzle;
		class fow_e_tnt_onepoundMuzzle: PutMuzzle
		{
			autoreload = 0;
			displayName = "TNT one pound";
			magazines[] = {"fow_e_tnt_onepound_mag"};
			enableAttack = 1;
			showToPlayer = 0;
		};
		class fow_e_tnt_twohalfpoundMuzzle: PutMuzzle
		{
			autoreload = 0;
			displayName = "TNT two half pound";
			magazines[] = {"fow_e_tnt_twohalfpound_mag"};
			enableAttack = 1;
			showToPlayer = 0;
		};
		class fow_e_tnt_twopoundMuzzle: PutMuzzle
		{
			autoreload = 0;
			displayName = "TNT two pound";
			magazines[] = {"fow_e_tnt_twopound_mag"};
			enableAttack = 1;
			showToPlayer = 0;
		};
	};
};

class CfgVehicles
{
	class SatchelCharge_F;
	class fow_e_tnt_onepound : SatchelCharge_F {
		author = "FOW Team";
		ammo = "fow_e_tnt_onepound_ammo";
		model = "\fow\fow_weapons\explosives\HLS_TNT_US_OnePound";
		displayName = "TNT (one pound)";
	};
	class fow_e_tnt_twohalfpound : SatchelCharge_F {
		author = "FOW Team";
		ammo = "fow_e_tnt_twohalfpound_ammo";
		model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualHalfPound";
		displayName = "TNT (two half pound)";
	};
	class fow_e_tnt_twopound : SatchelCharge_F {
		author = "FOW Team";
		ammo = "fow_e_tnt_twopound_ammo";
		model = "\fow\fow_weapons\explosives\HLS_TNT_US_DualOnePound";
		displayName = "TNT (two pound)";
	};
	/*{
		author = "$STR_A3_Bohemia_Interactive";
		mapSize = 0.43;
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\SatchelCharge_F.jpg";
		_generalMacro = "SatchelCharge_F";
		scope = 2;
		icon = "iconExplosiveGP";
		ammo = "SatchelCharge_Remote_Ammo";
		model = "\A3\Weapons_F\Explosives\satchel";
		displayName = "$STR_A3_cfgMagazines_PipeBomb0";
		DLC = "Curator";
	};*/
};

class CfgCloudlets
{

	class Default;

	class FOW_Grenade_FuseDetonation: Default
	{
		interval = 9.9;
		color[] = {{1,0.3,0.1,-500},{1,0.3,0.1,-500}};
		emissiveColor[] = {{175,50,25,0},{0,0,0,0}};
		lifeTime = 0.015;
		lifeTimeVar = 1;
		weight = 1000;
		volume = 0.09;
		rubbing = 0.15;
		size[] = {0.075,0.015,0};
		sizeVar = 0.5;
		moveVelocity[] = {1,10,1};
		moveVelocityVar[] = {3,4,3};
		bounceOnSurface = 0.05;
		bounceOnSurfaceVar = 0.1;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		rotationVelocity = 1;
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		position[] = {0,0,0};
		positionVar[] = {0.009,0.009,0.009};
		rotationVelocityVar = 0;
		colorVar[] = {0.05,0.05,0.05,5};
		randomDirectionPeriodVar = 1;
		randomDirectionIntensityVar = 1;
		blockAIVisibility = 0;
	};
	class FOW_Grenade_Detonation_Phosphorus: Default
	{
		interval = 0.009;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 0.07;
		lifeTime = 5;
		moveVelocity[] = {0,6,0};
		rotationVelocity = 0;
		weight = 0.2;
		volume = 0.01;
		rubbing = 0.1;
		size[] = {0.001};
		color[] = {{1,1,1,1}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.5;
		onTimerScript = "";
		beforeDestroyScript = "";
		particleEffects = "WPTrailEffectMain2";
		lifeTimeVar = 1;
		positionVar[] = {2,2,2};
		MoveVelocityVar[] = {10,5,10};
		rotationVelocityVar = 20;
		sizeVar = 0.02;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		blockAIVisibility = 0;
	};
	class FOW_Grenade_Detonation_Heat: Default
	{
		interval = 0.005;
		circleRadius = 2;
		circleVelocity[] = {0,0,0};
		particleShape = "\a3\data_f\ParticleEffects\Universal\Refract";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1.1;
		lifeTime = 8;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1;
		rubbing = 0.1;
		size[] = {1,1.5};
		color[] = {{0.07,0.07,0.07,0.3},{0.3,0.3,0.3,0.3},{0.3,0.3,0.3,0.3},{0.3,0.3,0.3,0.2},{0.3,0.3,0.3,0.1}};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		sizeCoef = 0.5;
		animationSpeedCoef = 1;
		position[] = {0,0,0};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 20;
		sizeVar = 0.4;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		blockAIVisibility = 0;
	};
	class FOW_Grenade_Detonation_Smoke: Default
	{
		interval = 0.05;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 13;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 6;
		moveVelocity[] = {0,0,0};
		rotationVelocity = 0;
		weight = 10;
		volume = 8;
		rubbing = 0.1;
		size[] = {5,10,13,16,18,20,21,22};
		color[] = {{1,1,1,1},{1,1,1,0}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 4;
		positionVar[] = {4,3,4};
		MoveVelocityVar[] = {0.2,0.2,0.2};
		rotationVelocityVar = 20;
		sizeVar = 0.3;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
		blockAIVisibility = 1;
	};
};

class FOW_no77_Grenade_Effects
{
	class FOW_no77_Stage1
	{
		simulation = "particles";
		type = "FOW_Grenade_FuseDetonation";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.07;
	};
	class FOW_no77_Stage2
	{
		simulation = "particles";
		type = "FOW_Grenade_Detonation_Phosphorus";
		position[] = {0,0,0};
		intensity = 0.5;
		interval = 1;
		lifeTime = 0.5;
	};
	class FOW_no77_Stage3
	{
		simulation = "particles";
		type = "FOW_Grenade_Detonation_Heat";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
	};
	class FOW_no77_Stage4
	{
		simulation = "particles";
		type = "FOW_Grenade_Detonation_Smoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
	};
};
class FOW_no79_Grenade_Effects
{
	class FOW_no79_Stage1
	{
		simulation = "particles";
		type = "FOW_Grenade_FuseDetonation";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.07;
	};
	class FOW_no79_Stage2
	{
		simulation = "particles";
		type = "FOW_Grenade_Detonation_Smoke";
		position[] = {0,0,0};
		intensity = 0.5;
		interval = 1;
	};
};