
class CfgPatches
{
	class fow_boats_c
	{
		units[] = {"fow_usmc_lcvp","fow_us_lcvp"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_boats","fow_veh_weapons_c"};
	};
};

class cfgWeapons {
	class fow_w_m1919a4_mounted;
	class fow_w_m1919a4_mounted_lcvp_ps: fow_w_m1919a4_mounted {
		class GunParticles
		{
			class effect1
			{
				positionName = "M1919_Portside_Beg";
				directionName = "M1919_Portside_End";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "ps_nabojnicestart";
				directionName = "ps_nabojniceend";
				effectName = "MachineGunEject";
			};
			class effect3
			{
				positionName = "ps_nabojnicestart";
				directionName = "ps_nabojniceend";
				effectName = "MachineGunCartridge2";
			};
		};		
	};
	class fow_w_m1919a4_mounted_lcvp_sb: fow_w_m1919a4_mounted {
		class GunParticles
		{
			class effect1
			{
				positionName = "M1919_Starboard_Beg";
				directionName = "M1919_Starboard_End";
				effectName = "MachineGunCloud";
			};
			class effect2
			{
				positionName = "sb_nabojnicestart";
				directionName = "sb_nabojniceend";
				effectName = "MachineGunEject";
			};
			class effect3
			{
				positionName = "sb_nabojnicestart";
				directionName = "sb_nabojniceend";
				effectName = "MachineGunCartridge2";
			};
		};		
	};
};

class CfgVehicles
{
	class Ship_F;
	class Boat_F: Ship_F
	{
		class ViewPilot;
		class ViewOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class AnimationSources;
		class Eventhandlers;
		class HitPoints;
		class NewTurret;
		class Turrets;
	};

	#include "lcvp.h"
	//#include "lcm3.h"
};