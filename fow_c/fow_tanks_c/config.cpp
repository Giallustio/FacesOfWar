class CfgPatches
{
	class fow_tanks_c
	{
		units[] = {"fow_ija_type95_HaGo","fow_ija_type95_HaGo_2","fow_ija_type95_HaGo_3","fow_usmc_m4a2"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_veh_weapons_c","fow_tanks"};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret:NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class EventHandlers;
		class ViewPilot;
		class ViewGunner;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
	};
	
	#include "cromwell\cromwell.h"
	#include "m4a2\m4a2.h"
	#include "m5a1\m5a1.h"
	#include "panther\panther.h"
	//#include "panzer_III\panzer_III.h"
	#include "type95\type95.h"
};

class cfgWeapons
{
	class fow_w_m1919a4_mounted;
	class fow_w_m1919a4_mounted_m4a2_1 : fow_w_m1919a4_mounted {
		class GunParticles
		{
			class effect1
			{
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "MachineGunCloud";
			};
			class effect_fire {
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
				effectName = "fow_w_effect_mg";
			};
		};
	};
	class fow_w_m1919a4_mounted_m4a2_2 : fow_w_m1919a4_mounted {
		class GunParticles
		{
			class effect1
			{
				positionName = "gunbeg_2";
				directionName = "gunend_2";
				effectName = "MachineGunCloud";
			};
			class effect_fire {
				positionName = "gunbeg_2";
				directionName = "gunend_2";
				effectName = "fow_w_effect_mg";
			};
		};
	};
	class fow_w_m1919a4_mounted_m4a2_3 : fow_w_m1919a4_mounted {
		class GunParticles
		{
			class effect1
			{
				positionName = "gunbeg_3";
				directionName = "gunend_3";
				effectName = "MachineGunCloud";
			};
			class effect_fire {
				positionName = "gunbeg_3";
				directionName = "gunend_3";
				effectName = "fow_w_effect_mg";
			};
		};
	};
	class fow_w_besa_mg_mounted;
	class fow_w_besa_mg_mounted_2: fow_w_besa_mg_mounted {
		class GunParticles
		{
			class effect1
			{
				positionName = "gunbeg_2";
				directionName = "gunend_2";
				effectName = "MachineGunCloud";
			};
			class effect_fire {
				positionName = "gunbeg_2";
				directionName = "gunend_2";
				effectName = "fow_w_effect_mg";
			};
		};		
	};
	class fow_w_besa_mg_mounted_3: fow_w_besa_mg_mounted {
		class GunParticles
		{
			class effect1
			{
				positionName = "gunbeg_3";
				directionName = "gunend_3";
				effectName = "MachineGunCloud";
			};
			class effect_fire {
				positionName = "gunbeg_3";
				directionName = "gunend_3";
				effectName = "fow_w_effect_mg";
			};
		};		
	};
};