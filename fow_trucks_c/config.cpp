class CfgPatches
{
	class fow_trucks_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_trucks"};
	};
};

class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class HitPoints;
		class Turrets;
	};
	class Truck_F: Car_F
	{
		unitInfoType = "RscUnitInfoNoWeapon";
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectHEMTT";
			};
		};
		class HitPoints: HitPoints
		{
			class HitRGlass;
			class HitLGlass;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitBody;
			class HitFuel;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
			class HitEngine;
		};
		class EventHandlers;
		class AnimationSources;
		class Turrets: Turrets
		{
			class MainTurret;
			class ViewGunner;
		};
	};
	#include "gmc\gmc.h"
	#include "type97\type97.h"
};