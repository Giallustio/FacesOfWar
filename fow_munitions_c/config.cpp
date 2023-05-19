class CfgPatches
{
	class fow_munitions_c
	{
		units[] = {};
		weapons[] = {};
		RequiredAddons[] = {"fow_main","fow_munitions"};
		requiredVersion = 0.1;
	};
};

class AnimationSources;	// External class reference

class CfgVehicles {
	class IND_Box_Base;
	class Weapon_Base_F;

	#include "fow_munitions_weapons.hpp"
	#include "fow_munitions_containers.hpp"
};