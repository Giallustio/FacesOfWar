class CfgPatches
{
	class fow_air_c
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"fow_main","fow_air"};
	};
};

class EventHandlers;
class AnimationSources;
class ViewPilot;
class Mode_FullAuto;

class CfgVehicles
{
	class NonSteerable_Parachute_F;
	class B_Parachute;
	
	class fow_va_parachute : NonSteerable_Parachute_F {
		author = "FOW Team";
		scope = 2;
		displayName = "Parachute";
		model = "\fow\fow_air\parachutes\wx_parachute.p3d";
		//picture = "\A3\Air_F_Beta\Parachute_01\Data\UI\Portrait_Parachute_01_CA.paa";
		side = 2;
		faction = "fow_usa";
		crew = "fow_s_us_ab_m42_rifleman";
		editorSubcategory = "fow_s_us_ab_inf";
	};
	class fow_av_parachute: fow_va_parachute {scope = 1;};
	class fow_b_parachute: B_Parachute
	{
		author = "FOW Team";
		displayName = "Parachute bag";
		picture = "\A3\Characters_F\data\ui\icon_b_parachute_ca.paa";
		model = "\fow\fow_air\parachutes\wx_parachute_backpack.p3d";
		backpackSimulation = "ParachuteSteerable";
		ParachuteClass = "fow_va_parachute";
		maximumLoad = 0;
		mass = 120;
	};
	class Plane_Base_F;
	class fow_va_plane_base : Plane_Base_F {
		scope = 0; 
		
		explosionShielding = 0.3;
		//epeImpulseDamageCoef = 0.1;
		crewCrashProtection = 0.55;

		lightOnGear = 0;
		gearUpTime = 4.0;
		gearDownTime = 5.0;		
		
		accuracy						= 0.2;												// how hard it is to distinguish the type of the vehicle (bigger number means harder)
		//editorSubcategory				= EdSubcat_Planes;		// category in which we want to see this plane in editor
		//memoryPointTaskMarker			= "TaskMarker_1_pos";	// The memory point defines the position where the task marked will be displayed if the task is attached to the particular object

		armor							= 55;					// base value of the vehicle armor, reduces the damage taken from the direct hit. Affects armor parameter in the HitPoints class
		armorStructural					= 2;					// value affecting passThrough parameter in the HitPoints class (divides the extent of the damage transferred by passThrough). It also increases overall durability of the object (even if it has no hitpoints).
		armorLights						= 0.1;					// level of protection for lights located on hull
		epeImpulseDamageCoef			= 50;					// coeficient for physx damage
		damageResistance				= 0.004;				// for AI if it is worth to be shoot at
		destrType						= DestructWreck;		// how does the vehicle behave while destroyed, this one changes to the Wreck lod of the model
		driverCanEject					= 0;					// needed for hiding engine "Eject" action if we want to use ejection seats instead

		slingLoadCargoMemoryPoints[]	= {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};	//array of memory points for slingloading hook position

		driverAction					= Plane_Fighter_03_pilot;	// what is the standard pose for the pilot, defined as animation state

		viewDriverShadowDiff			= 0.5;					//diffuse light attenuation
		viewDriverShadowAmb				= 0.5;					//ambient light attenuation

		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverLeftLegAnimName = "pedal_1";
		driverRightLegAnimName = "pedal_1";
		
		memoryPointLDust = "levy prach";
		memoryPointRDust = "pravy prach";
		leftDustEffect = "LDustEffects";
		rightDustEffect = "RDustEffects";

		laserScanner = 0;
		LockDetectionSystem = 0;							// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = 0;	// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case
		radarType = 0;
		radarTargetSize					= 0.8;
		visualTargetSize				= 0.8;
		irTargetSize					= 0.8;
		allowTabLock = 0;
		canUseScanners = 0;
		
		driveOnComponent[] = {"wheels"};
		damperSize = 0.3;
		damperForce = 1.5;
		damperDamping = 100.0;
		wheelWeight = 175;
		wheelBrakeFrictionCoef = 0.4;
		canFloat = false;

		gunAimDown = 0.029000;	// adjusts the aiming of gun relative to the axis of model
		headAimDown = 0.0000;	// adjusts the view of pilot to have crosshair centred

		minFireTime = 30;			// how long does the pilot fire at one target before switching to another one

		threat[] = {1, 1, 1};		// multiplier of cost of the vehicle in eyes of soft, armoured and air enemies
		
		class HitPoints
		{
			class HitHull
			{
				name = "hull_hit";
				visual = "zbytek";
				armor = 30;
				radius = 0.01;
				minimalHit = 0.01;
				depends = "Total";
				explosionShielding = 1;
				//material = 51;
				passThrough = 1;
			};
			class HitGlass1
			{
				armor = 0.25;
				radius = 0.25;
				material = -1;
				passThrough = 0;
				name = "glass_hit";
				convexComponent = "glass";
				visual = "glass";
			};
			class HitFuel: HitHull
			{
				armor = 1;
				name = "fuel_hit";
				visual = "";
				radius = 0.25;
				minimalHit = 0.1;
			};
			class HitEngine: HitHull
			{
				armor = 0.25;
				explosionShielding = 1;
				name = "engine_hit";
				passThrough = 0;
				radius = 0.8;
				visual = "engine_hit";
				depends = "rotor_hit";
				minimalHit = 0.1;
				material = -1;
			};
			class HitRotor: HitEngine
			{
				armor = 0.25;
				explosionShielding = 1;
				name = "rotor_hit";
				radius = 0.13;
				visual = "";
				depends = "0";
			};
			/*class HitAmmo: HitHull
			{
				armor = 1;
				explosionShielding = 3;
				radius = 0.3;
				passThrough = 1;
				name = "ammo_hit";
				visual = "ammo_hit";
				convexComponent = "ammo_hit";
			};*/
			class HitAvionics: HitHull
			{
				armor = 1;
				name = "avionics_hit";
				visual = "";
				radius = 0.35;
				minimalHit = 0.05;
				passThrough = 0;
			};
			class HitLAileron: HitHull
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "aileron_L";
				passThrough = 0;
				visual = "aileron_L";
				radius = 0.4;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRAileron: HitLAileron
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "aileron_R";
				passThrough = 0;
				visual = "aileron_R";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLCRudder: HitHull
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "rudder";
				visual = "rudder";
				radius = 0.3;
				minimalHit = 0.1;
				depends = "0";
				passThrough = 0;
			};
			class HitLCElevator: HitHull
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "elevator_L";
				passThrough = 0;
				visual = "elevator_L";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRElevator: HitLCElevator
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "elevator_R";
				passThrough = 0;
				visual = "elevator_R";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			/*class HitWheel_L
			{
				name = "Wheel_L";
				visual = "wheel_L_hide";
				armor = 2;
				radius = 0.2;
				minimalHit = 0.01;
				explosionShielding = 2.8;
				passThrough = 0;
				depends = "0";
			};
			class HitWheel_R: HitWheel_L
			{
				name = "Wheel_R";
				visual = "wheel_R_hide";
			};*/
		};

		class WingVortices
		{
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_l_e";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vapour_r_e";
			};
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "body_vapour_l_s";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "body_vapour_r_s";
			};
		};
	};
	#include "f6f\f6f.hpp"
	#include "a6m\a6m.hpp"

};