class CfgPatches
{
	class fow_cars_c
	{
		units[] = {"fow_us_willys","fow_usmc_willys"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_cars"};
	};
};
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
		class ViewOptics;
		class ViewCargo;
		class ViewGunner;
		class HeadLimits;
	};
	class Car_F: Car
	{
		class AnimationSources;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class ViewCargo;
				class ViewGunner;
				class HeadLimits;
			};
		};
		class HitPoints /// we want to use hitpoints predefined for all cars
		{
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;			
		};
		class EventHandlers;
	};
	class Wheeled_APC_F: Car_F
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	//#include "humber\humber.hpp"
	#include "kubelwagen\kubelwagen.hpp"
	#include "sdkfz_222\sdkfz_222.hpp"
	#include "sdkfz_234_1\sdkfz_234_1.hpp"
	#include "willys\willys.hpp"
	#include "truppenfahrrad\truppenfahrrad.hpp"
	//#include "r75\r75.hpp"
};

class CfgWeapons
{
	class BikeHorn;
	class fow_bikeHorn: BikeHorn
	{
		drySound[] = {"\fow\fow_sounds\vehicles\bike\bikehorn",2,1,200};
	};
};
class CfgFunctions
{
	class fow
	{
		recompile=1;
		tag = "fow";
		class functions
		{
			recompile=1;
			class pedals
			{
				file = "\fow\fow_cars_c\functions\pedals.sqf";
			};
		};
	};
};