

class CfgPatches {
	class fow_sounds_c {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main", "fow_sounds"};
	};
};

class CfgSounds {
	#include "weapons\scripted.h"
	class fow_lcvp_ramp_lower
	{
		name= "fow_lcvp_ramp_lower";
		sound[]={"\fow\fow_sounds\vehicles\lcvp\ramp_lower.wav",1,1,50};
		titles[]={};
	};
	class fow_lcvp_ramp_raise
	{
		name= "fow_lcvp_ramp_raise";
		sound[]={"\fow\fow_sounds\vehicles\lcvp\ramp_raise.wav",1,1,10};
		titles[]={};
	};
};

class CfgVehicles {
/*	class Man;
	class CAManBase: Man
	{
		class SoundGear	{
			primary[] = {{"walk",{"fow\fow_sounds\human\gear_slow1",0.39810713,1,30}},{"walk",{"fow\fow_sounds\human\gear_slow2",0.39810713,1,30}},{"walk",{"fow\fow_sounds\human\gear_slow3",0.39810713,1,30}},{"walk",{"fow\fow_sounds\human\gear_slow4",0.39810713,1,30}},{"walk",{"fow\fow_sounds\human\gear_slow5",0.39810713,1,30}},{"walk",{"fow\fow_sounds\human\gear_slow6",0.39810713,1,30}},{"walk",{"fow\fow_sounds\human\gear_slow7",0.39810713,1,30}},{"walk",{"fow\fow_sounds\human\gear_slow8",0.39810713,1,30}},{"tactical",{"fow\fow_sounds\human\gear_medium1",0.44668358,1,35}},{"tactical",{"fow\fow_sounds\human\gear_medium2",0.44668358,1,35}},{"tactical",{"fow\fow_sounds\human\gear_medium3",0.44668358,1,35}},{"tactical",{"fow\fow_sounds\human\gear_medium4",0.44668358,1,35}},{"tactical",{"fow\fow_sounds\human\gear_medium5",0.44668358,1,35}},{"tactical",{"fow\fow_sounds\human\gear_medium6",0.44668358,1,35}},{"tactical",{"fow\fow_sounds\human\gear_medium7",0.44668358,1,35}},{"tactical",{"fow\fow_sounds\human\gear_medium8",0.44668358,1,35}},{"run",{"fow\fow_sounds\human\gear_medium1",0.50118722,1,35}},{"run",{"fow\fow_sounds\human\gear_medium2",0.50118722,1,35}},{"run",{"fow\fow_sounds\human\gear_medium3",0.50118722,1,35}},{"run",{"fow\fow_sounds\human\gear_medium4",0.50118722,1,35}},{"run",{"fow\fow_sounds\human\gear_medium5",0.50118722,1,35}},{"run",{"fow\fow_sounds\human\gear_medium6",0.50118722,1,35}},{"run",{"fow\fow_sounds\human\gear_medium7",0.50118722,1,35}},{"run",{"fow\fow_sounds\human\gear_medium8",0.50118722,1,35}},{"sprint",{"fow\fow_sounds\human\gear_fast1",0.70794575,1,45}},{"sprint",{"fow\fow_sounds\human\gear_fast2",0.70794575,1,45}},{"sprint",{"fow\fow_sounds\human\gear_fast3",0.70794575,1,45}},{"sprint",{"fow\fow_sounds\human\gear_fast4",0.70794575,1,45}},{"sprint",{"fow\fow_sounds\human\gear_fast5",0.70794575,1,45}},{"sprint",{"fow\fow_sounds\human\gear_fast6",0.70794575,1,45}},{"sprint",{"fow\fow_sounds\human\gear_fast7",0.70794575,1,45}},{"sprint",{"fow\fow_sounds\human\gear_fast8",0.70794575,1,45}}};
			//secondary[] = {{"run",{"A3\sounds_F\dummysound",1.0,1,10}},{"run",{"A3\sounds_F\dummysound",1.0,1,10}},{"sprint",{"A3\sounds_F\dummysound",1.0,1,10}}};
		};		
	};*/
};

#define SHOT_MID rangeCurve[] = {{0, 0}, {25, 1.25}, {150, 0}}
#define SHOT_FAR rangeCurve[] = {{0, 0}, {55, 0}, {150, 1.12}, {2700, 0.54}}
#define OBSTRUCT1 obstructionFactor = 0.18
#define OCCLUSE1 occlusionFactor = 0.34

#define DAMPEN_RFL 	obstructionFactor = 0.24;\
					occlusionFactor = 0.18;

					
#define DAMPEN_SMG 	obstructionFactor = 0.33;\
					occlusionFactor = 0.22;
					
#define DAMPEN_EXP 	obstructionFactor = 0.15;\
					occlusionFactor = 0.12;



class CfgSoundSets {
	// Short Magazine Lee-Enfield Rifle
	class FoW_SMLE_Firing {
		soundShaders[] = {"FoW_SMLE_Near", "FoW_SMLE_Mid", "FoW_DarkTails", "FoW_SMLE_1P", "FoW_Rifle_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.2;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// Kar98
	class FoW_Kar_Firing {
		soundShaders[] = {"FoW_Kar_Near", "FoW_DarkTails", "FoW_Kar_Mid", "FoW_Rifle_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.2;
		loop = 0;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// M1903
	class FoW_M1903_Firing {
		soundShaders[] = {"FoW_M1903_Near", "FoW_SMLE_Mid", "FoW_Rifle_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.2;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// Shotgun
	class FoW_Shotgun_Firing {
		soundShaders[] = {"FoW_Shotgun_Near",
			"FoW_Shotgun_Mid",
			"FoW_Shotgun_1P",
			"FoW_Shotgun_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far",  "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.4;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// M1 Garand
	class FoW_Garand_Firing {
		soundShaders[] = {"FoW_Garand_Action",
			"FoW_Garand_Near",
			"FoW_Garand_Mid",
			"FoW_Garand_1P",
			"FoW_Rifle_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far",  "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.4;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// G43
	class FoW_G43_Firing {
		soundShaders[] = {"FoW_G43_Action",
							"FoW_G43_Near",
							"FoW_G43_Mid",
							"FoW_G43_1P",
							"FoW_Rifle_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far",  "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 0.6;
		frequencyRandomizerMin = 0.3;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	class FoW_FG42_Firing {
		soundShaders[] = {"FoW_FG42_Action",
			"FoW_FG42_Near",
			"FoW_FG42_Mid",
			"FoW_FG42_1P",
			"FoW_Rifle_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far",  "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 0.6;
		frequencyRandomizerMin = 0.3;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	//PING
	class FoW_Garand_Ping {
		soundShaders[] = {"FoW_Garand_Ping_Near", "FoW_Garand_Ping_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.75;
		frequencyRandomizerMin = 0.35;
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	// M7 Grenade Launcher Attachment for Garand
	class FoW_GL_Allied {
		soundShaders[] = {
			"FoW_Garand_Near",
			"FoW_Garand_Mid",
			"FoW_Rifle_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far", "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.3;
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};

	// M1 Carbine
	class FoW_Carbine_Firing {
		soundShaders[] = {"FoW_Carbine_Action", "FoW_Carbine_Near", "FoW_Carbine_Mid", "FoW_Carbine_1P", "FoW_Carbine_Far", "FoW_Carbine_Interior_Near", "FoW_SMG_Interior_Attack", "FoW_45ACP_Interior_Far", "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyFactor = 1.06;
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.4;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// Type 99 / Arisaka Rifle
	class FoW_Arisaka_Firing {
		soundShaders[] = {"FoW_Arisaka_Near", "FoW_Arisaka_1P", "FoW_Arisaka_Mid", "FoW_Rifle_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.2;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// Type 2 Grenade Launcher Attachment
	class FoW_GL_Axis {
		soundShaders[] = {"FoW_Arisaka_Near", "FoW_Arisaka_Mid", "FoW_Rifle_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 0.6;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// Protects Infantry Against Tank :)
	class FoW_PIAT_Launch {
		soundShaders[] = {"FoW_PIAT_Primer", "FoW_PIAT_Mechanism"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.5;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// Thompson
	class FoW_Thompson_Firing {
		soundShaders[] = {"FoW_Thompson_Action", "FoW_Thompson_Near", "FoW_Thompson_Mid", "FoW_Thompson_1P", "FoW_45ACP_Far", "FoW_SMG45_Interior_Near", "FoW_SMG_Interior_Attack", "FoW_45ACP_Interior_Far", "FoW_SMG_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.65;
		frequencyRandomizerMin = 0.35;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_SMG
	};
	
	// Type-100
	class FoW_Type100_Firing {
		soundShaders[] = {"FoW_Type100_Action", "FoW_Type100_Near", "FoW_Type100_Mid", "FoW_Type100_1P", "FoW_9mm_Far", "FoW_9mm_Interior_Near", "FoW_SMG_Interior_Attack", "FoW_9mm_Interior_Far", "FoW_SMG_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyFactor = 1;
		frequencyRandomizer = 0.65;
		frequencyRandomizerMin = 0.35;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_SMG
	};
	
	// MP40
	class FoW_MP40_Firing {
		soundShaders[] = {"FoW_MP40_Action", "FoW_MP40_Near", "FoW_MP40_Mid", "FoW_MP40_1P", "FoW_9mm_Far", "FoW_SMG_Interior_Attack", "FoW_9mm_Interior_Near", "FoW_9mm_Interior_Far", "FoW_SMG_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		frequencyRandomizer = 0.7;
		frequencyRandomizerMin = 0.4;
		DAMPEN_SMG
	};
	// Sturmgewehr
	class FoW_Stg_Firing {
		soundShaders[] = {"FoW_Stg_Action", "FoW_Stg_Near", "FoW_Stg_Mid", "FoW_Stg_1P", "FoW_Carbine_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far", "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.6;
		frequencyRandomizerMin = 0.3;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_SMG
	};
	
	// Type-99 LMG
	class FoW_Type99_Firing {
		soundShaders[] = {"FoW_Type99_Action", "FoW_Type99_Near", "FoW_Type99_Mid", "FoW_Type99_1P", "FoW_MG_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.65;
		frequencyRandomizerMin = 0.35;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// Type-92 HMG (BEST WEAPON OF THE WAR!!!!! ALL HAIL FREELANCER)
	class FoW_Type92_Firing {
		soundShaders[] = {"FoW_Type92_Action", "FoW_Type92_Ring", "FoW_Type92_Action_Far", "FoW_Type92_Near", "FoW_Type92_Mid", "FoW_Type92_Far", "FoW_Rifle_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.55;
		frequencyRandomizerMin = 0.3;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	// Webley Revolver
	class FoW_Webley_Firing {
		soundShaders[] = {"FoW_Webley_Action", "FoW_Webley_Near", "FoW_Webley_Mid", "FoW_45ACP_Far", "FoW_SMG45_Interior_Near", "FoW_SMG_Interior_Attack", "FoW_45ACP_Interior_Far", "FoW_SMG_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.6;
		frequencyRandomizerMin = 0.4;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		occlusionFactor = 0.3;
		obstructionFactor = 0.1;
	};
	
	// Rifle Environment Effects
	class FoW_Rifle_EFX {
		soundShaders[] = {"FoW_Rifle_Tail", "FoW_Rifle_Near_Forest", "FoW_Rifle_Near_Forest_Ringoff", "FoW_Rifle_Far_Forest", "FoW_Rifle_Tail_Far", "FoW_Rifle_Near_Houses", "FoW_Rifle_Mid_Houses"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Rifle_EFX_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.75;
		soundShadersLimit = 7;
		occlusionFactor = 0.25;
		obstructionFactor = 0.12;
	};
	
	
	// MG Environment Effects
	class FoW_MG_EFX {
		soundShaders[] = {"FoW_MG_Tail", "FoW_Rifle_Near_Forest", "FoW_Rifle_Near_Forest_Ringoff", "FoW_Rifle_Far_Forest", "FoW_Rifle_Tail_Far", "FoW_Rifle_Near_Houses", "FoW_Rifle_Mid_Houses"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Rifle_EFX_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.75;
		soundShadersLimit = 7;
		occlusionFactor = 0.25;
		obstructionFactor = 0.12;
	};
	
	
	// Shotguns have the same echo / tail as Rifles, but lower in pitch.
	class FoW_Shotgun_EFX {
		soundShaders[] = {"FoW_Rifle_Tail", "FoW_Rifle_Near_Forest", "FoW_Rifle_Near_Forest_Ringoff", "FoW_Rifle_Far_Forest", "FoW_Rifle_Tail_Far", "FoW_Rifle_Near_Houses", "FoW_Rifle_Mid_Houses"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Rifle_EFX_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyFactor = 0.88;
		frequencyRandomizer = 0.75;
		frequencyRandomizerMin = 0.4;
		soundShadersLimit = 7;
		occlusionFactor = 0.2;
		obstructionFactor = 0.12;
	};
	// For Carbines
	class FoW_Sturmgewehr_EFX {
		soundShaders[] = {"FoW_Rifle_Tail", "FoW_Rifle_Near_Forest", "FoW_Rifle_Near_Forest_Ringoff", "FoW_Rifle_Far_Forest", "FoW_Rifle_Tail_Far", "FoW_Rifle_Near_Houses", "FoW_Rifle_Mid_Houses"};
		volumeFactor = 0.9;
		volumeCurve = "InverseSquare1Curve";
		frequencyFactor = 1.2;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.75;
		sound3DProcessingType = "FoW_Rifle_EFX_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 7;
		occlusionFactor = 0.2;
		obstructionFactor = 0.12;
	};
	
	
	// Different processor for confined spaces
	class FoW_Interior_Reverb {
		soundShaders[] = {"FoW_Rifle_Reverb_In_Mid", "FoW_Rifle_Reverb_In_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Rifle_Int_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.5;
		soundShadersLimit = 7;
		occlusionFactor = 0.3;
		obstructionFactor = 0.15;
	};
	
	// Pistol Cal. Environment Effects
	class FoW_SMG_EFX {
		//soundShaders[] = {"FoW_Pistol_Tail", "FoW_Pistol_Near_Forest", "FoW_Pistol_Near_Houses"};
		soundShaders[] = {"FoW_Pistol_Tail", "FoW_Pistol_Near_Forest", "FoW_Rifle_Tail_Far", "FoW_Pistol_Near_Houses", "FoW_Pistol_Mid_Houses", "FoW_Rifle_Far_Forest"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Rifle_EFX_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		//frequencyFactor = 1.0;
		frequencyRandomizer = 1.0;
		frequencyRandomizerMin = 0.75;
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	
	// 9 mm Interior Reverb
	class FoW_Interior_Reverb_9mm {
		soundShaders[] = {"FoW_9mm_Reverb_In_Mid", "FoW_9mm_Reverb_In_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Rifle_Int_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.5;
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	
		// 45 ACP Interior Reverb
	class FoW_Interior_Reverb_45ACP {
		soundShaders[] = {"FoW_45ACP_Reverb_In_Mid", "FoW_45ACP_Reverb_In_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Rifle_Int_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.5;
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	
	// MG 42
	class FoW_Interior_Reverb_MG42 {
		soundShaders[] = {"FoW_MG42_Reverb_In", "FoW_MG42_Reverb_In_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Rifle_Int_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.5;
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	
	
	// GL Tails
	class FoW_GL_EFX {
		soundShaders[] = {"FoW_Rifle_Tail", "FoW_Rifle_Near_Forest", "FoW_Rifle_Near_Houses"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Rifle_EFX_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.5;
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	// PIAT tails: krrrrrrrr
	class FoW_PIAT_Tails {
		soundShaders[] = {"FoW_PIAT_Tail"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Rifle_EFX_Proc";
		distanceFilter = "weaponShotTailDistanceFreqAttenuationFilter";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.5;
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	
	// BREN Gun
	class FoW_Bren_Firing {
		soundShaders[] = {"FoW_Bren_Action", "FoW_Bren_1P", "FoW_Bren_Near", "FoW_Bren_Mid", "FoW_MG_Far2", "FoW_Bren_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_Rifle_Interior_Far",  "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.6;
		frequencyRandomizerMin = 0.35;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 12;
		DAMPEN_RFL
	};
	
	// Vickers MMG
	class FoW_Vickers_Firing {
		soundShaders[] = {"FoW_Bren_Action", "FoW_Vickers_1P", "FoW_Bren_Near", "FoW_Bren_Mid", "FoW_MG_Far2", "FoW_Bren_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_MG_Interior_Far","FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.6;
		frequencyRandomizerMin = 0.35;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 12;
		DAMPEN_RFL
	};
	
	// Sten
	class FoW_Sten_Firing {
		soundShaders[] = {"FoW_Sten_Action", "FoW_Sten_Near", "FoW_MP40_Mid", "FoW_9mm_Far", "FoW_SMG_Interior_Attack", "FoW_9mm_Interior_Near", "FoW_9mm_Interior_Far", "FoW_SMG_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.25;
		loop = 0;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_SMG
	};
	
	// .45 Colt
	class FoW_M1911_Firing {
		soundShaders[] = {"FoW_M1911_Action", "FoW_M1911_Near", "FoW_45ACP_Far", "FoW_M1911_Interior_Near", "FoW_SMG_Interior_Attack", "FoW_45ACP_Interior_Far", "FoW_SMG_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.5;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_SMG
	};
	
	//Luger / P08
	class FoW_Luger_Firing {
		soundShaders[] = {"FoW_Luger_Action", "FoW_Luger_Near", "FoW_9mm_Far", "FoW_M1911_Interior_Near", "FoW_SMG_Interior_Attack", "FoW_9mm_Interior_Far", "FoW_SMG_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.5;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_SMG
	};
	
	// BAR
	class FoW_BAR_Firing {
		soundShaders[] = {"FoW_Bar_Action", "FoW_Bar_1P", "FoW_Bar_Near", "FoW_Bar_Mid", "FoW_BAR_Far", "FoW_BAR_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_MG_Interior_Far", "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.65;
		frequencyRandomizerMin = 0.35;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	// MG 42
    class FoW_MG42_Firing {
        soundShaders[] = {"FoW_MG42_Action", "FoW_MG42_Near", "FoW_MG42_1P", "FoW_MG42_Mid", "FoW_MG42_Far", "FoW_MG42_Interior_Near", "FoW_MG42_Interior_Attack", "FoW_MG42_Interior_Far", "FoW_MG42_Interior_Chain"};
        volumeFactor = 1;
        volumeCurve = "InverseSquare1Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        spatial = 1;
        doppler = 0;
        loop = 0;
        frequencyRandomizer = 0.6;
        frequencyRandomizerMin = 0.35;
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        soundShadersLimit = 7;
        DAMPEN_RFL
    };
    // MG34
    class FoW_MG34_Firing {
        soundShaders[] = {"FoW_MG34_Action", "FoW_MG34_Near", "FoW_MG42_1P", "FoW_MG34_Mid", "FoW_MG34_Far", "FoW_MG42_Interior_Near", "FoW_MG42_Interior_Attack", "FoW_MG42_Interior_Far", "FoW_MG42_Interior_Chain"};
        volumeFactor = 1;
        volumeCurve = "InverseSquare1Curve";
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        spatial = 1;
        doppler = 0;
        loop = 0;
        frequencyRandomizer = 0.55;
        frequencyRandomizerMin = 0.2;
        distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
        soundShadersLimit = 7;
        DAMPEN_RFL
    };
	// M1919
	class FoW_M1919_Firing {
		soundShaders[] = {"FoW_M1919_Near", "FoW_M1919_Action", "FoW_M1919_1P", "FoW_M1919_Mid", "FoW_M1919_Far", "FoW_BAR_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_MG_Interior_Far", "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.25;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	// Tank Coax or AA
	class FoW_M1919_Mounted {
		soundShaders[] = {"FoW_M1919_Near", "FoW_M1919_Mid", "FoW_M1919_Far", "FoW_BAR_Interior_Near", "FoW_Rifle_Interior_Attack", "FoW_MG_Interior_Far", "FoW_Rifle_Interior_Casings"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_RFL
	};
	
	
	// Grenades
	class FoW_Grenade_Bang {
		soundShaders[] = {"FoW_Grenade_Near", "FoW_Grenade_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "ExplosionLight3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.4;
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_EXP
	};
	
	class FoW_TNT_Bang {
		soundShaders[] = {"FoW_TNT_Near", "FoW_TNT_Medium"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_EXP
	};
	
	class FoW_TNT_EFX {
		soundShaders[] = {"FoW_TNT_Release", "FoW_Grenade_Release_Forest", "FoW_Grenade_Tail", "FoW_Grenade_Release_Far", "FoW_Grenade_Release_Houses_Far", "FoW_Grenade_Release_Forest_Far", "FoW_Grenade_Release_Houses"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Explosion_EFX_Proc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyFactor = 0.9;
		frequencyRandomizer = 0.3;
		frequencyRandomizerMin = 0.3;
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	
	//AT Rockets and PIAT Bomb
	class FoW_Rocket_AT_Explode {
		soundShaders[] = {"FoW_Rocket_AT_Explode_Near",	"FoW_Rocket_AT_Explode_Mid", "FoW_Rocket_AT_Explode_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_EXP
	};
	
	class FoW_Rocket_AT_EFX {
		soundShaders[] = {"FoW_Rocket_AT_Release_Near", "FoW_Rocket_AT_Release_Mid", "FoW_Rocket_AT_Release_Far", "FoW_Rocket_Tail"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Explosion_EFX_Proc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.4;
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};

	
	
	class FoW_Grenade_EFX {
		soundShaders[] = {"FoW_Grenade_Release", "FoW_Grenade_Release_Forest", "FoW_Grenade_Tail", "FoW_Grenade_Release_Far", "FoW_Grenade_Release_Houses_Far", "FoW_Grenade_Release_Forest_Far", "FoW_Grenade_Release_Houses"};
		volumeFactor = 1.5;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Explosion_EFX_Proc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.4;
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	
	class FoW_Grenade_Fragment {
		soundShaders[] = {"FoW_Grenade_Frag_Debris", "FoW_Grenade_Debris_Dirt", "FoW_Grenade_Debris_Wood", "FoW_Grenade_Whistle_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		//sound3DProcessingType = "ExplosionDebris3DProcessingType";
		sound3DProcessingType = "FoW_Debris_Proc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.4;
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	// Bullets
	class FoW_Bullet_Snap	{
		
		soundShaders[] = {"FoW_Snap_Close", "FoW_Snap_Far", "FoW_Snap_Dist"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponLightShot3DProcessingType";
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.1;
	};
	
	class FoW_Bullet_Small_Snap	{
		
		soundShaders[] = {"FoW_Snap_Close", "FoW_Snap_Far", "FoW_Snap_Dist"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponLightShot3DProcessingType";
		frequencyFactor = 1.25;
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.1;
	};
	
	class FoW_Bullet_EFX	{
		
		soundShaders[] = {"FoW_Snap_Tail", "FoW_Snap_Tail_Forest", "FoW_Snap_Tail_Houses", "FoW_Snap_Far_Tail"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 4;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.2;
		sound3DProcessingType = "SonicCrackTail3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
	};
	class FoW_Bullet_Whizz	{
		
		soundShaders[] = {"FoW_Bullet_Pass"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
// Pistol rounds	
	class FoW_Bullet_Small_Whizz	{
		
		soundShaders[] = {"FoW_Bullet_Small_Pass"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	
	class FoW_Bullet_Scream	{
		
		soundShaders[] = {"FoW_Snap_Layers"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 1.4;
		frequencyRandomizerMin = 0.6;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	
	// Pistol cal.
	class FoW_Bullet_Scream_Slow	{
		
		soundShaders[] = {"FoW_Snap_Layers_Slow"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	


// CANNONS AND HEAVY WEAPONS
class FoW_75mm_Firing {
	
		soundShaders[] = {"FoW_75mm_Near", "FoW_Metallic_Ring", "FoW_Pak_Recoil"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.5;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	
	class FoW_Cannon_Medium_EFX {
		soundShaders[] = {"FoW_75mm_Release"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "ExplosionHeavyTail3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	
	
	class FoW_Bazooka_Firing {
	
		soundShaders[] = {"FoW_Bazooka_Near", "FoW_Bazooka_Ring", "FoW_Bazooka_Release_Near"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.5;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_EXP
	};
	
	
	class FoW_Mortar_Firing {
	
		soundShaders[] = {"FoW_Mortar_Base1", "FoW_Mortar_Shot1", "FoW_Mortar_Rattle1", "FoW_Mortar_Ring"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		frequencyRandomizer = 0.75;
		frequencyRandomizerMin = 0.75;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_EXP
	};
	
	class FoW_Mortar_FireEFX {
	
		soundShaders[] = {"FoW_Mortar_Tail", "FoW_Mortar_Tail_Forest"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		spatial = 1;
		doppler = 0;
		frequencyRandomizer = 0.5;
		frequencyRandomizerMin = 0.5;
		loop = 0;
		sound3DProcessingType = "ExplosionHeavy3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_EXP
	};
	
		//Mortar rounds (HE)
	class FoW_Mortar_Explode {
		soundShaders[] = {"FoW_Mortar_Explode_Near", "FoW_Mortar_Explode_Mid", "FoW_Mortar_Explode_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "ExplosionMedium3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.4;
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		DAMPEN_EXP
	};
	
	class FoW_Mortar_EFX {
		soundShaders[] = {"FoW_Mortar_Release_Near", "FoW_Mortar_Release_Mid", "FoW_Mortar_Release_Far", "FoW_Mortar_Tail"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "FoW_Explosion_EFX_Proc";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.4;
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
	
	
	class FoW_Mortar_Fragment {
		soundShaders[] = {"FoW_Mortar_Frag_Debris", "FoW_Mortar_Frag_Far"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare1Curve";
		sound3DProcessingType = "ExplosionDebris3DProcessingType";
		spatial = 1;
		doppler = 0;
		loop = 0;
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.4;
		distanceFilter = "explosionTailDistanceFreqAttenuationFilter";
		soundShadersLimit = 7;
		occlusionFactor = 0.1;
		obstructionFactor = 0.1;
	};
};
	

class CfgSoundShaders {
	#include "weapons\shaders\smle_sounds.h"
	#include "weapons\shaders\garand_sounds.h"
	#include "weapons\shaders\common_sounds.h"
	#include "weapons\shaders\bren_sounds.h"
	#include "weapons\shaders\bar_sounds.h"
	#include "weapons\shaders\mg42_sounds.h"
	#include "weapons\shaders\m1919_sounds.h"
	#include "weapons\shaders\tankweapon_sounds.h"
	#include "weapons\shaders\kar98_sounds.h"
	#include "weapons\shaders\thompson_sounds.h"
	#include "weapons\shaders\type100_sounds.h"
	#include "weapons\shaders\mp40_sounds.h"
	#include "weapons\shaders\arisaka_sounds.h"
	#include "weapons\shaders\type99_sounds.h"
	#include "weapons\shaders\type92_sounds.h"
	#include "weapons\shaders\carbine_sounds.h"
	#include "weapons\shaders\stg44_sounds.h"
	#include "weapons\shaders\bullet_sounds.h"
	#include "weapons\shaders\sten_sounds.h"
	#include "weapons\shaders\piat_sounds.h"
	#include "weapons\shaders\webley_sounds.h"
	#include "weapons\shaders\m1911_sounds.h"
	#include "weapons\shaders\vickers_sounds.h"
	#include "weapons\shaders\efx_sounds.h"	
	#include "weapons\shaders\grenade_sounds.h"
	#include "weapons\shaders\interior_sounds.h"
	#include "weapons\shaders\cannon_sounds.h"
	#include "weapons\shaders\g43_sounds.h"
	#include "weapons\shaders\fg42_sounds.h"
	#include "weapons\shaders\mg34_sounds.h"
	#include "weapons\shaders\springfield_sounds.h"
	#include "weapons\shaders\shotgun_sounds.h"
	#include "weapons\shaders\bazooka_sounds.h"
	#include "weapons\shaders\tnt_sounds.h"	
	#include "weapons\shaders\luger_sounds.h"	
};

class cfgSound3DProcessors {

	class FoW_RifleShot_Proc {
		type = "panner";
		innerRange = 3;
		range = 10;
		rangeCurve = "InverseSquare2Curve";
		radius = 5;
	};
	
	class FoW_Rifle_EFX_Proc {
		type = "panner";
		innerRange = 150;
		range = 50;
		rangeCurve = "InverseSquare2Curve";
	};
	
	class FoW_Explosion_EFX_Proc {
		type = "panner";
		innerRange = 200;
		range = 50;
		rangeCurve = "InverseSquare2Curve";
	};
	class FoW_Explosion_Surround_Proc {
		type = "panner";
		innerRange = 600;
		range = 120;
		rangeCurve = "InverseSquare2Curve";
		radius = 40;
	};
	class FoW_Rifle_Int_Proc {
		type = "panner";
		innerRange = 5;
		range = 10;
		rangeCurve = "InverseSquare1Curve";
	};
	class FoW_Debris_Proc {
		type = "panner";
		innerRange = 30;
		range = 50;
		rangeCurve = "InverseSquare2Curve";
	};
	
};
class CfgDistanceFilters {
class FoW_SMG_Filter
	{
		type = "lowPassFilter";
		minCutoffFrequency = 250;
		qFactor = 1;
		innerRange = 300;
		range = 3800;
		powerFactor = 27;
	};
	
};