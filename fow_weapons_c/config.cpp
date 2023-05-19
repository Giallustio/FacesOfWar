#include "basicdefines_A3.hpp"

class CfgPatches
{
	class fow_weapons_c
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"fow_main", "fow_weapons"};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;


#include "cfgAmmo.hpp"

#include "cfgRecoils.hpp"

class CfgMagazines {
	class CA_Magazine;
	class CA_LauncherMagazine;
	class 1Rnd_HE_Grenade_shell;
	
	class fow_fakeLauncherMagazine: CA_LauncherMagazine {
		scope = 1;
		type = "3* 256";
		initSpeed = 28;
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Klein_Projectile.p3d";
		modelSpecial = "";
		displayName = "30 mm pzfaust";
		ammo = "fow_R_pzfaust_30";
		picture = "\fow\fow_weapons\m1a1_bazooka\data\ui\m_m6a1_ca.paa";
		mass = 25;
	};	
	
	#include "CfgMagazines_aus.hpp"
	#include "CfgMagazines_ger.hpp"
	#include "CfgMagazines_ija.hpp"
	#include "CfgMagazines_it.hpp"
	#include "CfgMagazines_uk.hpp"
	#include "CfgMagazines_us.hpp"
};

class cfgWeapons {
	
	class Default
	{
		class Eventhandlers;
	};
	class RifleCore: Default {};
	class Rifle: RifleCore {};
	
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	
	class Pistol;
	class Pistol_Base_F: Pistol
	{
		class WeaponSlotsInfo;
	};	
	
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class InventoryUnderItem_Base_F;
	class muzzle_snds_H: ItemCore
	{
		class ItemInfo;
	};
	class fow_w_acc_m1_bayo: muzzle_snds_H
	{
		author = "FOW Team";
		scope = 2;
		displayName = "M1 Bayonet";
		model = "\fow\fow_weapons\garand\m1_bayonet.p3d";
		//picture = ".paa";
		class ItemInfo: ItemInfo
		{
			mass = 12;
			soundTypeIndex = 0;
			muzzleEnd = "";
			alternativeFire = "";
		};
		inertia = 0.2;
	};
	class fow_w_acc_no4_bayo: muzzle_snds_H
	{
		author = "FOW Team";
		scope = 2;
		displayName = "No.4 Bayonet";
		model = "\fow\fow_weapons\lee_enfield\no4_bayonet.p3d";
		//picture = ".paa";
		class ItemInfo: ItemInfo
		{
			mass = 12;
			soundTypeIndex = 0;
			muzzleEnd = "";
			alternativeFire = "";
		};
		inertia = 0.2;
	};
	class fow_w_acc_type30_bayo: muzzle_snds_H
	{
		author = "FOW Team";
		scope = 2;
		displayName = "Type 30 Bayonet";
		model = "\fow\fow_weapons\type99\type30_bayo.p3d";
		//picture = ".paa";
		class ItemInfo: ItemInfo
		{
			mass = 12;
			soundTypeIndex = 0;
			muzzleEnd = "";
			alternativeFire = "";
		};
		inertia = 0.2;
	};
	class fow_w_acc_m1918a2_bipod: ItemCore
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[US] M1918A2 B.A.R. Bipod";
		picture = "\fow\fow_weapons\bar\data\ui\bar_bipod_ca.paa";
		model = "\fow\fow_weapons\bar\bar_bipod.p3d";
		inertia = 0.2;
		class ItemInfo: InventoryUnderItem_Base_F
		{
			deployedPivot = "deploypivot";
			hasBipod = 1;
			mass = 10;
		};
	};
	class fow_w_acc_m1918a2_handle: ItemCore
	{
		author = "FOW Team";
		scope = 2;
		displayName = "[US] M1918A2 B.A.R. Handle";
		picture = "\fow\fow_weapons\bar\data\ui\bar_handle_ca.paa";
		model = "\fow\fow_weapons\bar\bar_handle.p3d";
		inertia = 0.1;
		class ItemInfo: InventoryFlashLightItem_Base_F
		{
			mass = 4;
			class FlashLight
			{

			};
		};		
	};
 	class fow_w_acc_fg42_bayo: muzzle_snds_H
 	{
 		author = "FOW Team";
		scope = 2;
 		displayName="[GER] FG 42 Spike Bayonet"; 
 		//picture="";
		model = "\fow\fow_weapons\fg42\fg42_bayo.p3d";
		class ItemInfo: ItemInfo
		{
			mass = 11;
			soundTypeIndex = 0;
			muzzleEnd = "";
			alternativeFire = "";
		};
		inertia = 0.2;
 	};
 	class fow_w_acc_M1897_bayo: muzzle_snds_H
 	{
 		scope = 2;
 		displayName="[US] M1897 Bayonet"; 
 		picture="\fow\fow_weapons\m1912\data\ui\acc_m1897_bayonet_ca.paa";
		model = "\fow\fow_weapons\m1912\M1897_bayonet";
		class ItemInfo: ItemInfo
		{
			mass = 11;
			soundTypeIndex = 0;
			muzzleEnd = "";
			alternativeFire = "";
		};
		inertia = 0.2;
 	};
	
	class fow_rifle_base : Rifle_Base_F {
		cartridgePos = "";//"nabojnicestart";
		cartridgeVel = "";//"nabojniceend";
		class WeaponSlotsInfo : WeaponSlotsInfo {
			mass = 100;
			class MuzzleSlot {
			};
			class CowsSlot {
			};
			class PointerSlot {
			};
		};		
		class Eventhandlers;
	};	
	class fow_rifleBolt_base : fow_rifle_base {
		class Eventhandlers: Eventhandlers {
			class fow_BoltAction {
				fired = "_this spawn fow_main_fnc_boltAction;";
			};
		};
		class fow_BoltAction {
			param[] = {"fow_gestureReloadBoltAction",0.75,"FxCartridge_762",0.6,0.065,- 0.18,0.1};
			sounds[] = {"fow_sound_boltAction_1","fow_sound_boltAction_2","fow_sound_boltAction_3"};
		};
	};
	class fow_shotgun_base : fow_rifle_base {

		class Eventhandlers: Eventhandlers {
			class fow_BoltAction {
				fired = "_this spawn fow_main_fnc_boltAction;";
			};
		};

		class fow_BoltAction {
			param[] = {"fow_gesture_shotgun_pump",0.75,"fow_cartridge_slug",0.6,0.065,- 0.18,0.1};
			sounds[] = {};
		};
	};
	
	#include "w_aus_owen.hpp"
	
	#include "w_ger_fg42.hpp"
	#include "w_ger_g43.hpp"
	#include "w_ger_k98.hpp"
	#include "w_ger_p08.hpp"
	#include "w_ger_p35.hpp"
	#include "w_ger_p640p.hpp"
	#include "w_ger_ppk.hpp"
	#include "w_ger_mg34.hpp"
	#include "w_ger_mg42.hpp"
	#include "w_ger_mp40.hpp"
	#include "w_ger_stg44.hpp"
	
	#include "w_ija_type14.hpp"
	#include "w_ija_type10.hpp"
	#include "w_ija_type99.hpp"
	#include "w_ija_type99_lmg.hpp"
	#include "w_ija_type100.hpp"
	
	//#include "w_it_carcano.hpp"
	//#include "w_it_mab.hpp"
	
	#include "w_uk_bren.hpp"
	#include "w_uk_leeenfield.hpp"
	#include "w_uk_sten.hpp"
	#include "w_uk_webley.hpp"
	#include "w_uk_welrod.hpp"
	
	#include "w_us_bar.hpp"
	#include "w_us_garand.hpp"
	#include "w_us_ithaca.hpp"
	#include "w_us_m1_carbine.hpp"
	#include "w_us_m1a1.hpp"
	//#include "w_us_m2_flamethrower.hpp"
	#include "w_us_m3.hpp"
	#include "w_us_m55.hpp"
	#include "w_us_m1903.hpp"
	#include "w_us_m1911.hpp"
	#include "w_us_m1912.hpp"
	#include "w_us_m1919.hpp"
	
	class Launcher;
	class Launcher_Base_F: Launcher
	{
		class Eventhandlers;
		class WeaponSlotsInfo;
	};
	//#include "w_ger_rpzb.hpp"
	#include "w_ger_pzfaust.hpp"
	#include "w_us_m1a1_bazooka.hpp"
	#include "w_uk_piat.hpp"
};

class RscInGameUI
{
	class RscUnitInfo;
	class RscWeaponZeroing: RscUnitInfo
	{
		class WeaponInfoControlsGroupLeft;
	};
	class fow_deployedAnim: RscWeaponZeroing
	{
		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay'); _this call fow_main_fnc_deployedAnim";
	};
};

class AnimationSources;	// External class reference

class cfgVehicles {
	
	class ThingEffect;
	class Weapon_Base_F;
	class Box_NATO_Wps_F;
	
	class Bag_Base;

    class fow_b_us_m2_fueltank: Bag_Base
    {
        scope = 2;
        model = "\fow\fow_weapons\m2_ft\m2_fueltank";
        displayName = "[US] Fuel Tank";
        //picture = "\fow\fow_characters\us\data\ui\fow_b_us_bandoleer_ca.paa";
        hiddenSelectionsTextures[]={""};
        maximumLoad = 40;
        mass = 30;
		class TransportMagazines
		{

		};   
    };
	
	class Items_base_F;
	class fow_w_pzfaust_30: Items_base_F
	{
		scope = 1;
		scopeCurator = 1;
		displayName = "fow pzfaust physx";
		model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Launcher_Used.p3d";
		icon = "iconObject_circle";
	};
	class fow_w_pzfaust_60: fow_w_pzfaust_30 {};
	class fow_w_pzfaust_100: fow_w_pzfaust_30 {};
	class fow_w_pzfaust_30_klein: fow_w_pzfaust_30 {model = "\fow\fow_weapons\pzfaust\HLS_PanzerFaust_Klein_Launcher_Used.p3d";};
	
	#include "cartridges.hpp"
};

class CfgCloudlets {

	class Default;
	class fow_w_effect_heat_mg : Default {
		interval = 0.005;
		circleRadius = 0;
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
		lifeTime = 3;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.1,0.15};
		color[] = {{0.07,0.07,0.07,0.3},{0.3,0.3,0.3,0.3},{0.3,0.3,0.3,0.3},{0.3,0.3,0.3,0.2},{0.3,0.3,0.3,0.1}};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.5;
		animationSpeedCoef = 1;
		position[] = {"positionX", "positionY", "positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 20;
		sizeVar = 0.04;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class fow_w_effect_heat_rifle : Default {
		interval = 0.005;
		circleRadius = 0;
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
		lifeTime = 1.5;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 1.2;
		volume = 1;
		rubbing = 0.1;
		size[] = {0.1,0.15};
		color[] = {{0.07,0.07,0.07,0.3},{0.3,0.3,0.3,0.3},{0.3,0.3,0.3,0.3},{0.3,0.3,0.3,0.2},{0.3,0.3,0.3,0.1}};
		colorCoef[] = {1,1,1,1};
		animationSpeed[] = {2,1};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.4;
		animationSpeedCoef = 1;
		position[] = {"positionX", "positionY", "positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		moveVelocityVar[] = {0,0,0};
		rotationVelocityVar = 20;
		sizeVar = 0.04;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class fow_w_effect_gas: Default {
		interval = 0.005;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 0.5;
		moveVelocity[] = {"-0.15*directionX","-0.15*directionY","-0.15*directionZ"};
		rotationVelocity = 1;
		weight = 0.053;
		volume = 0.04;
		rubbing = 0.1;
		size[] = {0.05,0.5};
		color[] = {{0.1,0.1,0.1,0.2},{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0.05},{0.1,0.1,0.1,0.009}};
		animationSpeed[] = {1.2};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.079999998;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		blockAIVisibility = 0;
		sizeCoef = 0.2;
		colorCoef[] = {1,1,1,0.6};
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.02,0.02,0.02};
		rotationVelocityVar = 20;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class fow_w_cartridge_small: Default {
		interval = 0.06;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\weapons_f\ammo\cartridge_small.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 0.75;
		lifeTime = 60;
		moveVelocity[] = {"-directionX * 4","- directionY * 4","- directionZ * 4"};
		rotationVelocity = 1;
		weight = 6;
		volume = 1;
		rubbing = 0;
		size[] = {1.1};
		color[] = {{0.9,0.9,0.9,1}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		bounceOnSurface = 0.35;
		bounceOnSurfaceVar = 0.2;
		blockAIVisibility = 0;
		sizeCoef = 1;
		colorCoef[] = {1,1,1,1};
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class fow_w_cartridge_762: Default {
		interval = 0.06;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\weapons_f\ammo\cartridge_762.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 0.75;
		lifeTime = 60;
		moveVelocity[] = {"-directionX * 4","- directionY * 4","- directionZ * 4"};
		rotationVelocity = 1;
		weight = 6;
		volume = 1;
		rubbing = 0;
		size[] = {1.0};
		color[] = {{0.9,0.9,0.9,1}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		bounceOnSurface = 0.25;
		bounceOnSurfaceVar = 0.2;
		blockAIVisibility = 0;
		sizeCoef = 1;
		colorCoef[] = {1,1,1,1};
		animationSpeedCoef = 1;
		position[] = {"positionX","positionY","positionZ"};
		lifeTimeVar = 0;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		rotationVelocityVar = 5;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
	class fow_w_cartridge_762x33: fow_w_cartridge_762 {
		particleShape = "\fow\fow_weapons\ammo\cartridge_30carbine";
	};
	class fow_w_cartridge_303: fow_w_cartridge_762 {
		particleShape = "\fow\fow_weapons\ammo\cartridge_303brit";
	};
	class fow_w_cartridge_797x33: fow_w_cartridge_762 {
		particleShape = "\fow\fow_weapons\ammo\cartridge_792x33k";
	};

};

class fow_w_effect_mg {
	class RifleAssaultCloud1 {
		simulation = "particles";
		type = "RifleAssaultCloud1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class MachineGunDust1 {
		simulation = "particles";
		type = "MachineGunDust1";
		position[] = {0,0,0};
		enabled = "(humidity interpolate [0.2,0.20001,1,0]) * isWaterSurface * (distToSurface interpolate [1.5,1.51,1,0])";
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class fow_w_effect_heat_mg {
		simulation = "particles";
		type = "fow_w_effect_heat_mg";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class fow_w_effect_smg {
	class RifleAssaultCloud1 {
		simulation = "particles";
		type = "RifleAssaultCloud2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class fow_w_effect_heat_rifle {
		simulation = "particles";
		type = "fow_w_effect_heat_rifle";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};	
};
class fow_w_effect_rifle {
	class RifleAssaultCloud1 {
		simulation = "particles";
		type = "RifleAssaultCloud2";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class fow_w_effect_heat_rifle {
		simulation = "particles";
		type = "fow_w_effect_heat_rifle";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};

class fow_w_effect_cartridge_762 {
	class fow_w_cartridge_762 {
		simulation = "particles";
		type = "fow_w_cartridge_762";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class fow_w_effect_gas {
		simulation = "particles";
		type = "fow_w_effect_gas";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class fow_w_effect_cartridge_762x33 {
	class fow_w_cartridge_762x33 {
		simulation = "particles";
		type = "fow_w_cartridge_762x33";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class fow_w_effect_gas {
		simulation = "particles";
		type = "fow_w_effect_gas";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class fow_w_effect_cartridge_303 {
	class fow_w_cartridge_303 {
		simulation = "particles";
		type = "fow_w_cartridge_303";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class fow_w_effect_gas {
		simulation = "particles";
		type = "fow_w_effect_gas";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class fow_w_effect_cartridge_797x33 {
	class fow_w_cartridge_797x33 {
		simulation = "particles";
		type = "fow_w_cartridge_797x33";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class fow_w_effect_gas {
		simulation = "particles";
		type = "fow_w_effect_gas";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
class fow_w_effect_cartridge_small {
	class fow_w_cartridge_small {
		simulation = "particles";
		type = "fow_w_cartridge_small";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
	class fow_w_effect_gas {
		simulation = "particles";
		type = "fow_w_effect_gas";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};
