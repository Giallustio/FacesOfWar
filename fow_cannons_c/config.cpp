
class CfgPatches
{
	class fow_cannons_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_cannons","fow_veh_weapons_c"};
	};
};

class cfgWeapons
{

};

class CfgVehicles
{
	class ThingEffect;
	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class NewTurret;
		class Turrets
		{
			class MainTurret;
			class CommanderOptics;
			class ViewOptics;
		};
	};
	class StaticCannon: StaticWeapon
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
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
	#include "6pounder.h"
	#include "pak40.h"
	#include "flak36.h"
	
	#include "cartridges.hpp"
};

class fow_w_effect_shell_75mm {
	class fow_cartridge_shell_75mm {
		simulation = "particles";
		type = "fow_cartridge_shell_75mm";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.05;
	};
};


class CfgCloudlets {

	class Default;
	class fow_cartridge_shell_75mm: Default {
		interval = 0.06;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\fow\fow_cannons\shells\75mm.p3d";
		particleFSNtieth = 1;
		particleFSIndex = 0;
		particleFSFrameCount = 1;
		particleFSLoop = 0;
		angleVar = 0;
		animationName = "";
		particleType = "SpaceObject";
		timerPeriod = 0.75;
		lifeTime = 60;
		moveVelocity[] = {"0","0","-directionZ * 5"};
		rotationVelocity = 0.05;
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
		MoveVelocityVar[] = {0.15,0.15,0.25};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};