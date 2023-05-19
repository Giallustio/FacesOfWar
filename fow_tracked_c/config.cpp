class CfgPatches
{
	class fow_tracked_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_tracked","fow_veh_weapons_c"};
	};
};

class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};

		class AnimationSources;
		class Eventhandlers;
		class ViewPilot;
		class ViewOptics;
		class ViewGunner;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
	};
	#include "bren\bren.hpp"
	#include "lvta2\lvta2.hpp"
	#include "sdkfz_250\sdkfz_250.hpp"
	#include "sdkfz_251\sdkfz_251.hpp"
	//#include "type1\type1.hpp"
};