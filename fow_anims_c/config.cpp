
class CfgPatches
{
	class fow_anims_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_anims"};
	};
};
/*
try something like leftHandIKCurve[] = {0, 1, 0.07, 0, 0.81, 0, 0.86, 1};
the code I posted is transitioning from the handanim IK for the up until the 0.07 keyframe of the anim,
then has 0 IK so it'll move however the gesture .rtm tells it to, 
until it gets to the 0.81 keyframe where it will start to transition back to having full IK from the handanim again at the 0.86 keyframe
so between 0.07 and 0.81 the left hand is animated by the gesture
*****
As the name suggests, this array describes the curve controlling FK/IK blending on the left arm.
Every pair of values describe a 2D point, with the first number representing time (horizontal) and the second being the weight (vertical).

Time ranges from 0-1, where 0 is animation start, 0.5 is half way, and 1 the end.

Weight also ranges from 0-1, where 0 means animation is taken from RTM file (FK) and IK is disabled, 0.6 meaning a 40% blend of FK and 60% IK, and 1 is 100% IK.

Let me interpret the last example below (the long one). The curve has 4 points [0, 1], [0.05, 0], [0.95, 0] and [1, 1]. When the animation starts playing, the IK takes full effect, 
but is gradually disabled by point #2. It stays disabled until point #3 towards the end, when it's weight starts climbing again. At the end, at point #4, the IK is fully on again, overriding all FK.
*/
class CfgGesturesMale
{
	class ManActions;
	class Default;
	class States
	{
		class fow_gestureReload_basic: Default
		{
			file = "fow\fow_anims\weapons\gestureReloadBoltAction.rtm";
			looped = 0;
 			speed=0.15;
			mask = "handsWeapon";
			enableOptics = 0;
			rightHandIKBeg = 0;
			rightHandIKEnd = 0;			
			//rightHandIKCurve[] = {1};
			rightHandIKCurve[] = {0};
			leftHandIKBeg = 0;
			leftHandIKEnd = 0;
			leftHandIKCurve[] = {0,1, 0.013,0, 0.017,0, 0.992,0, 0.996,1};
			disableWeapons = 1;
			disableWeaponsLong = 0;
		};		
		class fow_gestureReloadBoltAction: fow_gestureReload_basic
		{
			file = "fow\fow_anims\weapons\gestureReloadBoltAction.rtm";
			speed = 0.84;
		};
		class fow_gestureReloadBoltActionLying: fow_gestureReload_basic
		{
			file = "fow\fow_anims\weapons\gestureReloadBoltActionLying.rtm";
			speed = 0.84;
		};
		class fow_gestureReloadBoltAction_context : fow_gestureReload_basic
		{
			mask = "handsWeapon_context";
			speed = 0.84;
		};
		//SHOTGUNS
		class fow_gesture_shotgun_pump: fow_gestureReload_basic
		{
			leftHandIKCurve[] = {0,1, 0.05,0, 0.85,0.7, 0.95,1};
			rightHandIKCurve[] = {1};
			file="\fow\fow_anims\weapons\w_shotgun_pump.rtm";
			speed=-0.9;
		};
		class fow_gesture_shotgun_pump_prone: fow_gestureReload_basic
		{
			rightHandIKCurve[] = {1};
			file="\fow\fow_anims\weapons\w_shotgun_pump_prone.rtm";
			speed=-0.9;
		};
		class fow_gesture_shotgun_pump_context: fow_gesture_shotgun_pump
		{
			mask = "handsWeapon_context";
		};
		//k98
		class fow_gesture_k98_bolt: fow_gestureReload_basic
		{
			file="\fow\fow_anims\weapons\w_k98_bolt.rtm";
			rightHandIKCurve[] = {0,1, 0.013,0, 0.017,0, 0.992,0, 0.996,1};
			speed=-1.2;
		};
		class fow_gesture_k98_bolt_prone: fow_gesture_k98_bolt
		{
			file="\fow\fow_anims\weapons\w_k98_bolt_prone.rtm";
		};
		class fow_gesture_k98_bolt_context: fow_gesture_k98_bolt
		{
			mask = "handsWeapon_context";
		};
		class fow_gesture_k98_reload: fow_gestureReload_basic
 		{
 			file="\fow\fow_anims\weapons\w_k98_reload.rtm";
			rightHandIKCurve[] = {0,1, 0.013,0, 0.017,0, 0.992,0, 0.996,1};
 		};
		class fow_gesture_k98_reload_prone: fow_gesture_k98_reload
 		{
 			file="\fow\fow_anims\weapons\w_k98_reload_prone.rtm";
 		};
		class fow_gesture_k98_reload_context: fow_gesture_k98_reload
 		{
 			mask = "handsWeapon_context";
 		};
		//type99
		class fow_gesture_type99_bolt: fow_gestureReload_basic
 		{
 			file="\fow\fow_anims\weapons\w_type99_bolt.rtm";
			rightHandIKCurve[] = {0,1, 0.013,0, 0.017,0, 0.992,0, 0.996,1};
			speed = -1.2;
 		};
		class fow_gesture_type99_bolt_prone: fow_gesture_type99_bolt
 		{
 			file="\fow\fow_anims\weapons\w_type99_bolt_prone.rtm";
 		};
		class fow_gesture_type99_bolt_context: fow_gesture_type99_bolt
 		{
 			mask = "handsWeapon_context";
 		};
		class fow_gesture_type99_reload: fow_gestureReload_basic
 		{
 			file="\fow\fow_anims\weapons\w_type99_reload.rtm";
			rightHandIKCurve[] = {0,1, 0.013,0, 0.017,0, 0.992,0, 0.996,1};
			speed = -6.8;
 		};
		class fow_gesture_type99_reload_prone: fow_gesture_type99_reload
 		{
 			file="\fow\fow_anims\weapons\w_type99_reload_prone.rtm";
 		};
		class fow_gesture_type99_reload_context: fow_gesture_type99_reload
 		{
 			mask = "handsWeapon_context";
 		};
		//MG42
		class fow_gesture_mg42_reload: fow_gestureReload_basic
 		{
 			file="\fow\fow_anims\weapons\w_mg42_reload.rtm";
			rightHandIKCurve[] = {0,1, 0.013,0, 0.017,0, 0.992,0, 0.996,1};
			speed = -10;
 		};
		class fow_gesture_mg42_reload_prone: fow_gesture_mg42_reload
 		{
 			file="\fow\fow_anims\weapons\w_mg42_reload_prone.rtm";			
 		};
		class fow_gesture_mg42_reload_context: fow_gesture_mg42_reload
 		{
 			mask = "handsWeapon_context";
 		};
		//Thompson
		class fow_gesture_thompson_reload: fow_gestureReload_basic
 		{
 			file="\fow\fow_anims\weapons\w_thompson_reload.rtm";
			speed = -5;
 		};
		class fow_gesture_thompson_reload_prone: fow_gesture_thompson_reload
 		{
 			file="\fow\fow_anims\weapons\w_thompson_reload_prone.rtm";
 		};
		class fow_gesture_thompson_reload_context: fow_gesture_thompson_reload
 		{
 			mask = "handsWeapon_context";
 		};		
		//MP40
		class fow_gesture_mp40_reload: fow_gestureReload_basic
 		{
 			file="\fow\fow_anims\weapons\w_mp40_reload.rtm";
			speed = -4.8;
 		};
		class fow_gesture_mp40_reload_prone: fow_gesture_mp40_reload
 		{
 			file="\fow\fow_anims\weapons\w_mp40_reload_prone.rtm";
 		};
		class fow_gesture_mp40_reload_context: fow_gesture_mp40_reload
 		{
 			mask = "handsWeapon_context";
 		};
		//ENFIELD
		class fow_gesture_enfield_bolt: fow_gestureReload_basic
		{
			enableOptics = 1;
			file="\fow\fow_anims\weapons\w_enfield_bolt.rtm";
			rightHandIKCurve[] = {0,1, 0.013,0, 0.017,0, 0.992,0, 0.996,1};
			speed=-0.9;
		};
		class fow_gesture_enfield_bolt_prone: fow_gesture_enfield_bolt
		{
			file="\fow\fow_anims\weapons\w_enfield_bolt_prone.rtm";
		};
		class fow_gesture_enfield_bolt_context: fow_gesture_enfield_bolt
		{
			mask = "handsWeapon_context";
		};
		class fow_gesture_enfield_reload: fow_gestureReload_basic
		{
			file="\fow\fow_anims\weapons\w_enfield_reload.rtm";
			rightHandIKCurve[] = {0,1, 0.013,0, 0.017,0, 0.992,0, 0.996,1};
			speed=-8.5;
		};
		class fow_gesture_enfield_reload_prone: fow_gesture_enfield_reload
		{
			file="\fow\fow_anims\weapons\w_enfield_reload_prone.rtm";
		};
		class fow_gesture_enfield_reload_context: fow_gesture_enfield_reload
		{
			mask = "handsWeapon_context";
		};		
		//GARAND
		class fow_gesture_garand_reload: fow_gestureReload_basic
		{
			file="\fow\fow_anims\weapons\w_garand_reload.rtm";
			rightHandIKCurve[] = {0,1, 0.013,0, 0.017,0, 0.992,0, 0.996,1};
			speed=-3.9;
		};
		class fow_gesture_garand_reload_prone: fow_gesture_garand_reload
		{
			file="\fow\fow_anims\weapons\w_garand_reload_prone.rtm";
		};
		class fow_gesture_garand_reload_context: fow_gesture_garand_reload
		{
			mask = "handsWeapon_context";
		};		
		
		//BAR
		class fow_gesture_bar_reload: fow_gestureReload_basic
 		{
 			file="\fow\fow_anims\weapons\w_bar_reload.rtm";
			speed = -4;
 		};
		class fow_gesture_bar_reload_prone: fow_gesture_bar_reload
 		{
 			file="\fow\fow_anims\weapons\w_bar_reload.rtm";
 		};
		class fow_gesture_bar_reload_context: fow_gesture_bar_reload
 		{
 			mask = "handsWeapon_context";
 		};
		//Greasegun
		class fow_gesture_greasegun_reload: fow_gestureReload_basic
 		{
 			file="\fow\fow_anims\weapons\w_greasegun_reload.rtm";
			rightHandIKCurve[] = {0,1, 0.013,0, 0.017,0, 0.992,0, 0.996,1};
			speed = -3.2;
 		};
		class fow_gesture_greasegun_reload_prone: fow_gesture_greasegun_reload
 		{
 			file="\fow\fow_anims\weapons\w_greasegun_reload_prone.rtm";
 		};
		class fow_gesture_greasegun_reload_context: fow_gesture_greasegun_reload
 		{
 			mask = "handsWeapon_context";
 		};
	
		//M1903
		class fow_gesture_m1903_scope_reload :Default
		{
			file = "\fow\fow_anims\weapons\w_m1903_scope_reload.rtm";
			speed = 0.13333333333333333333333333333333;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 2;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.026667,1, 0.04, 0, 0.88, 0, 0.9022, 1 };
			rightHandIKEnd = true;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
			leftHandIKEnd = true;
		};
		class fow_gesture_m1903_scope_reload_prone :Default
		{
			file = "\fow\fow_anims\weapons\w_m1903_scope_reload_prone.rtm";
			speed = 0.13333333333333333333333333333333;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.026667, 1, 0.04, 0, 0.88, 0, 0.9022, 1 };
			rightHandIKEnd = true;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
			leftHandIKEnd = true;
		};
		class fow_gesture_m1903_scope_reload_Context : fow_gesture_m1903_scope_reload
		{
			mask = "handsWeapon_context";
		};
		class fow_gesture_m1903_reload :Default
		{
			file = "\fow\fow_anims\weapons\w_m1903_reload.rtm";
			speed = 0.1875000000117188;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.3;
			headBobMode = 2;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.026667, 1, 0.04, 0, 0.88, 0, 0.9022, 1 };
			rightHandIKEnd = true;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
			leftHandIKEnd = true;
		};
		class fow_gesture_m1903_reload_prone :Default
		{
			file = "\fow\fow_anims\weapons\w_m1903_reload_prone.rtm";
			speed = 0.1875000000117188;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKBeg = true;
			rightHandIKCurve[] = { 0, 1, 0.026667, 1, 0.04, 0, 0.88, 0, 0.9022, 1 };
			rightHandIKEnd = true;
			leftHandIKBeg = true;
			leftHandIKCurve[] = { 0, 1, 0.02667, 0, 0.93333, 0, 0.9489, 1 };
			leftHandIKEnd = true;
		};
		class fow_gesture_m1903_reload_Context : fow_gesture_m1903_reload
		{
			mask = "handsWeapon_context";
		};		
		class fow_gesture_m1903_bolt :Default
		{
			file = "\fow\fow_anims\weapons\w_m1903_bolt.rtm";
			speed = 0.59998;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.1;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1, 1, 1 };
		};
		class fow_gesture_m1903_bolt_prone :Default
		{
			file = "\fow\fow_anims\weapons\w_m1903_bolt_prone.rtm";
			speed = 0.59998;
			looped = false;
			mask = "handsWeapon";
			headBobStrength = 0.01;
			headBobMode = 2;
			rightHandIKCurve[] = { 0.08, 1, 0.18, 0, 0.7, 0, 0.82, 1 };
			leftHandIKBeg = true;
			leftHandIKEnd = true;
			leftHandIKCurve[] = { 0, 1,1, 1 };
		};
		class fow_gesture_m1903_bolt_Context : fow_gesture_m1903_bolt
		{
			mask = "handsWeapon_context";
		};
		
		//Deployed MG
		class fow_gesture_mgDeployed: Default
		{
			file = "\fow\fow_anims\weapons\w_mg_deployed.rtm";
			looped = 1;
			speed = 1;
			mask = "leftHand";
			leftHandIKBeg = 1;
			leftHandIKEnd = 1;
			leftHandIKCurve[] = {0.0};
			enableOptics = 1;
			canPullTrigger = 1;
			disableWeapons = 0;
		};
		class fow_gesture_mgDeployed_prone: fow_gesture_mgDeployed
		{
			file = "\fow\fow_anims\weapons\w_mg_deployed_prone.rtm";
		};
		class fow_gesture_mgDeployed_Context: fow_gesture_mgDeployed
		{
			mask = "handsWeapon_context";
		};
	};
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		fow_gestureReloadBoltAction[] = {"fow_gestureReloadBoltAction", "gesture"};
		fow_gestureReloadBoltActionLying[] = {"fow_gestureReloadBoltActionLying", "gesture"};

		fow_gesture_shotgun_pump[] = {"fow_gesture_shotgun_pump_context", "gesture"};
		
		fow_gesture_k98_bolt[] = {"fow_gesture_k98_bolt_context", "gesture"};		
		fow_gesture_k98_reload[] = {"fow_gesture_k98_reload_context", "gesture"};
		
		fow_gesture_type99_bolt[] = {"fow_gesture_type99_bolt_context", "gesture"};
		fow_gesture_type99_reload[] = {"fow_gesture_type99_reload_context", "gesture"};

		fow_gesture_enfield_bolt[] = {"fow_gesture_enfield_bolt_context", "gesture"};		
		fow_gesture_enfield_reload[] = {"fow_gesture_enfield_reload_context", "gesture"};
		fow_gesture_m1903_bolt[] = {"fow_gesture_m1903_bolt_context", "gesture"};		
		fow_gesture_m1903_reload[] = {"fow_gesture_m1903_reload_context", "gesture"};
		fow_gesture_m1903_scope_reload[] = {"fow_gesture_m1903_scope_reload_context", "gesture"};
		fow_gesture_garand_reload[] = {"fow_gesture_garand_reload_context", "gesture"};
		
		fow_gesture_mg42_reload[] = {"fow_gesture_mg42_reload_context", "gesture"};

		fow_gesture_sten_reload[] = {"fow_gesture_sten_reload_context", "gesture"};
		
		fow_gesture_thompson_reload[] = {"fow_gesture_thompson_reload_context", "gesture"};
		fow_gesture_mp40_reload[] = {"fow_gesture_mp40_reload_context", "gesture"};
		fow_gesture_greasegun_reload[] = {"fow_gesture_greasegun_reload_context", "gesture"};
		fow_gesture_bar_reload[] = {"fow_gesture_bar_reload_context", "gesture"};
		
		fow_gesture_mgDeployed = "fow_gesture_mgDeployed";
		
		//Statics

		fow_m1919_gunner = "fow_m1919_gunner";
		fow_mg42_gunner_low = "fow_mg42_gunner_low";
		fow_mg42_gunner_middle = "fow_mg42_gunner_middle";
		fow_mg42_gunner_high = "fow_mg42_gunner_high";
		fow_vickers_gunner = "fow_vickers_gunner";
		fow_6_pounder_driver = "fow_6_pounder_driver";
		fow_6_pounder_gunner = "fow_6_pounder_gunner";
		fow_type92_gunner_prone = "fow_type92_gunner_prone";
		fow_type92_gunner_middle = "fow_type92_gunner_middle";
		fow_type92_gunner_stand = "fow_type92_gunner_stand";
		
		//Vehicles
		fow_Bike_Driver = "fow_Bike_Driver";
		fow_Bike_Driver_Right = "fow_Bike_Driver_Right";
		fow_Bike_Driver_End = "fow_Bike_Driver_Right_End";
		
		fow_bren_driver = "fow_bren_driver";
		fow_bren_gunner_back = "fow_bren_gunner_back";
		fow_bren_gunner_front = "fow_bren_gunner_front";
		
		fow_222_driver = "fow_222_driver";
		fow_222_gunner = "fow_222_gunner";
		fow_222_commander = "fow_222_commander";
		
		fow_234_driver = "fow_234_driver";
		fow_234_gunner = "fow_234_gunner";
		fow_234_commander = "fow_234_commander";
		
		fow_250_driver = "fow_250_driver";
		fow_250_co_driver = "fow_250_co_driver";
		fow_250_gunner = "fow_250_gunner";
		fow_250_cargo_01 = "fow_250_cargo_01";
		fow_250_cargo_02 = "fow_250_cargo_02";
		fow_250_cargo_03 = "fow_250_cargo_03";
		
		fow_251_driver = "fow_251_driver";
		fow_251_gunner = "fow_251_gunner";
		fow_251_cargo_01 = "fow_251_cargo_01";
		fow_251_cargo_02 = "fow_251_cargo_02";
		fow_251_cargo_03 = "fow_251_cargo_03";
		fow_251_cargo_04 = "fow_251_cargo_04";
		fow_251_cargo_05 = "fow_251_cargo_05";
		fow_251_cargo_06 = "fow_251_cargo_06";
		
		fow_kubel_driver = "fow_kubel_driver";
		fow_kubel_commander = "fow_kubel_commander";
		fow_kubel_gunner = "fow_kubel_gunner";
		//fow_kubel_cargo = "fow_kubel_cargo";
		
		fow_tank_gunner = "fow_tank_gunner";
		fow_tank_gunner_out = "fow_tank_gunner_out";
		fow_tank_gunner_c = "fow_tank_gunner_c";
		fow_tank_gunner_c_out = "fow_tank_gunner_c_out";
		fow_tank_driver = "fow_tank_driver";
		fow_tank_driver_out = "fow_tank_driver_out";
		fow_tank_commander = "fow_tank_commander";
		fow_tank_commander_out = "fow_tank_commander_out";
	};
	class Actions
	{
		class NoActions: ManActions
		{
			fow_gesture_shotgun_pump[] = {"fow_gesture_shotgun_pump_context","Gesture"};
			fow_gesture_k98_reload[] = {"fow_gesture_k98_reload_context","Gesture"};
			fow_gesture_k98_bolt[] = {"fow_gesture_k98_bolt_context","Gesture"};
			fow_gesture_enfield_bolt[] = {"fow_gesture_enfield_bolt_context","Gesture"};
			fow_gesture_enfield_reload[] = {"fow_gesture_enfield_reload_context","Gesture"};
			fow_gesture_m1903_bolt[] = {"fow_gesture_m1903_bolt_context", "gesture"};		
			fow_gesture_m1903_reload[] = {"fow_gesture_m1903_reload_context", "gesture"};
			fow_gesture_m1903_scope_reload[] = {"fow_gesture_m1903_scope_reload_context", "gesture"};
			fow_gesture_type99_bolt[] = {"fow_gesture_type99_bolt_context","Gesture"};
			fow_gesture_type99_reload[] = {"fow_gesture_type99_reload_context", "gesture"};
			fow_gesture_thompson_reload[] = {"fow_gesture_thompson_reload_context","Gesture"};
			fow_gesture_mp40_reload[] = {"fow_gesture_mp40_reload_context","Gesture"};
			fow_gesture_greasegun_reload[] = {"fow_gesture_greasegun_reload_context","Gesture"};
			fow_gesture_bar_reload[] = {"fow_gesture_bar_reload_context","Gesture"};
			fow_gesture_garand_reload[] = {"fow_gesture_garand_reload_context","Gesture"};
			fow_gesture_mgDeployed[] = {"fow_gesture_mgDeployed","Gesture"};
		};
		class RifleBaseStandActions;
		class RifleProneActions: RifleBaseStandActions
		{
			fow_gesture_shotgun_pump[] = {"fow_gesture_shotgun_pump_prone","Gesture"};
			fow_gesture_k98_reload[] = {"fow_gesture_k98_reload_prone","Gesture"};
			fow_gesture_k98_bolt[] = {"fow_gesture_k98_bolt_prone","Gesture"};
			fow_gesture_enfield_bolt[] = {"fow_gesture_enfield_bolt_prone","Gesture"};
			fow_gesture_enfield_reload[] = {"fow_gesture_enfield_reload_prone","Gesture"};
			fow_gesture_m1903_bolt[] = {"fow_gesture_m1903_bolt_prone", "gesture"};		
			fow_gesture_m1903_reload[] = {"fow_gesture_m1903_reload_prone", "gesture"};
			fow_gesture_m1903_scope_reload[] = {"fow_gesture_m1903_scope_reload_prone", "gesture"};
			fow_gesture_type99_bolt[] = {"fow_gesture_type99_bolt_prone","Gesture"};
			fow_gesture_type99_reload[] = {"fow_gesture_type99_reload_prone", "gesture"};
			fow_gesture_thompson_reload[] = {"fow_gesture_thompson_reload_prone","Gesture"};
			fow_gesture_mp40_reload[] = {"fow_gesture_mp40_reload_prone","Gesture"};
			fow_gesture_greasegun_reload[] = {"fow_gesture_greasegun_reload_prone","Gesture"};
			fow_gesture_bar_reload[] = {"fow_gesture_bar_reload_prone","Gesture"};
			fow_gesture_garand_reload[] = {"fow_gesture_garand_reload_prone","Gesture"};
			fow_gesture_mgDeployed[] = {"fow_gesture_mgDeployed_prone","Gesture"};
		};
		class RifleAdjustProneBaseActions;
		class RifleAdjustRProneActions: RifleAdjustProneBaseActions
		{
			fow_gesture_shotgun_pump[] = {"fow_gesture_shotgun_pump_prone","Gesture"};
			fow_gesture_k98_reload[] = {"fow_gesture_k98_reload_prone","Gesture"};
			fow_gesture_k98_bolt[] = {"fow_gesture_k98_bolt_prone","Gesture"};
			fow_gesture_enfield_bolt[] = {"fow_gesture_enfield_bolt_prone","Gesture"};
			fow_gesture_enfield_reload[] = {"fow_gesture_enfield_reload_prone","Gesture"};
			fow_gesture_m1903_bolt[] = {"fow_gesture_m1903_bolt_prone", "gesture"};		
			fow_gesture_m1903_reload[] = {"fow_gesture_m1903_reload_prone", "gesture"};
			fow_gesture_m1903_scope_reload[] = {"fow_gesture_m1903_scope_reload_prone", "gesture"};
			fow_gesture_type99_bolt[] = {"fow_gesture_type99_bolt_prone","Gesture"};
			fow_gesture_type99_reload[] = {"fow_gesture_type99_reload_prone", "gesture"};
			fow_gesture_thompson_reload[] = {"fow_gesture_thompson_reload_prone","Gesture"};
			fow_gesture_mp40_reload[] = {"fow_gesture_mp40_reload_prone","Gesture"};
			fow_gesture_greasegun_reload[] = {"fow_gesture_greasegun_reload_prone","Gesture"};
			fow_gesture_bar_reload[] = {"fow_gesture_bar_reload_prone","Gesture"};
			fow_gesture_garand_reload[] = {"fow_gesture_garand_reload_prone","Gesture"};
			fow_gesture_mgDeployed[] = {"fow_gesture_mgDeployed_Context","Gesture"};
		};
		class RifleAdjustLProneActions: RifleAdjustProneBaseActions
		{
			fow_gesture_shotgun_pump[] = {"fow_gesture_shotgun_pump_prone","Gesture"};
			fow_gesture_k98_reload[] = {"fow_gesture_k98_reload_prone","Gesture"};
			fow_gesture_k98_bolt[] = {"fow_gesture_k98_bolt_prone","Gesture"};
			fow_gesture_enfield_bolt[] = {"fow_gesture_enfield_bolt_prone","Gesture"};
			fow_gesture_enfield_reload[] = {"fow_gesture_enfield_reload_prone","Gesture"};
			fow_gesture_m1903_bolt[] = {"fow_gesture_m1903_bolt_prone", "gesture"};		
			fow_gesture_m1903_reload[] = {"fow_gesture_m1903_reload_prone", "gesture"};
			fow_gesture_m1903_scope_reload[] = {"fow_gesture_m1903_scope_reload_prone", "gesture"};
			fow_gesture_type99_bolt[] = {"fow_gesture_type99_bolt_prone","Gesture"};
			fow_gesture_type99_reload[] = {"fow_gesture_type99_reload_prone", "gesture"};
			fow_gesture_thompson_reload[] = {"fow_gesture_thompson_reload_prone","Gesture"};
			fow_gesture_mp40_reload[] = {"fow_gesture_mp40_reload_prone","Gesture"};
			fow_gesture_greasegun_reload[] = {"fow_gesture_greasegun_reload_prone","Gesture"};
			fow_gesture_bar_reload[] = {"fow_gesture_bar_reload_prone","Gesture"};
			fow_gesture_garand_reload[] = {"fow_gesture_garand_reload_prone","Gesture"};
			fow_gesture_mgDeployed[] = {"fow_gesture_mgDeployed_Context","Gesture"};
		};
		class RifleAdjustFProneActions: RifleAdjustProneBaseActions
		{
			fow_gesture_shotgun_pump[] = {"fow_gesture_shotgun_pump_prone","Gesture"};
			fow_gesture_k98_reload[] = {"fow_gesture_k98_reload_prone","Gesture"};
			fow_gesture_k98_bolt[] = {"fow_gesture_k98_bolt_prone","Gesture"};
			fow_gesture_enfield_bolt[] = {"fow_gesture_enfield_bolt_prone","Gesture"};
			fow_gesture_enfield_reload[] = {"fow_gesture_enfield_reload_prone","Gesture"};
			fow_gesture_m1903_bolt[] = {"fow_gesture_m1903_bolt_prone", "gesture"};		
			fow_gesture_m1903_reload[] = {"fow_gesture_m1903_reload_prone", "gesture"};
			fow_gesture_m1903_scope_reload[] = {"fow_gesture_m1903_scope_reload_prone", "gesture"};
			fow_gesture_type99_bolt[] = {"fow_gesture_type99_bolt_prone","Gesture"};
			fow_gesture_type99_reload[] = {"fow_gesture_type99_reload_prone", "gesture"};
			fow_gesture_thompson_reload[] = {"fow_gesture_thompson_reload_prone","Gesture"};
			fow_gesture_mp40_reload[] = {"fow_gesture_mp40_reload_prone","Gesture"};
			fow_gesture_greasegun_reload[] = {"fow_gesture_greasegun_reload_prone","Gesture"};
			fow_gesture_bar_reload[] = {"fow_gesture_bar_reload_prone","Gesture"};
			fow_gesture_garand_reload[] = {"fow_gesture_garand_reload_prone","Gesture"};
			fow_gesture_mgDeployed[] = {"fow_gesture_mgDeployed","Gesture"};
		};
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		//TANKS
		class fow_tank_commander_dead : DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\tank_commander.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_tank_commander: Crew
		{
			interpolateTo[] = {"fow_tank_commander_dead",1};
			file = "fow\fow_anims\vehicles\tank_commander.rtm";
		};
		class fow_tank_driver_dead : DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\tank_driver.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_tank_driver : Crew
		{
			interpolateTo[] = {"fow_tank_driver_dead",1};
			file = "fow\fow_anims\vehicles\tank_driver.rtm";
		};
		class fow_tank_gunner_dead : DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\tank_gunner.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_tank_gunner : Crew
		{
			interpolateTo[] = {"fow_tank_gunner_dead",1};
			file = "fow\fow_anims\vehicles\tank_gunner.rtm";
		};
		class fow_tank_gunner_c_dead : DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\tank_gunner_c.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_tank_gunner_c : Crew
		{
			interpolateTo[] = {"fow_tank_gunner_c_dead",1};
			file = "fow\fow_anims\vehicles\tank_gunner_c.rtm";
		};
		//
		class fow_tank_commander_out_dead : DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\tank_commander_out_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_tank_commander_out: Crew
		{
			interpolateTo[] = {"fow_tank_commander_out_dead",1};
			file = "fow\fow_anims\vehicles\tank_commander_out.rtm";
		};
		class fow_tank_driver_out_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\tank_driver_out_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_tank_driver_out: Crew
		{
			interpolateTo[] = {"fow_tank_driver_out_dead",1};
			file = "fow\fow_anims\vehicles\tank_driver_out.rtm";
		};
		class fow_tank_gunner_out_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\tank_gunner_out_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_tank_gunner_out: Crew
		{
			interpolateTo[] = {"fow_tank_gunner_out_dead",1};
			file = "fow\fow_anims\vehicles\tank_gunner_out.rtm";
		};
		class fow_tank_gunner_c_out_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\tank_gunner_c_out_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_tank_gunner_c_out: Crew
		{
			interpolateTo[] = {"fow_tank_gunner_c_out_dead",1};
			file = "fow\fow_anims\vehicles\tank_gunner_c_out.rtm";
		};
		
		class fow_vickers_gunner: Crew
		{
			file = "\fow\fow_anims\statics\vickers_gunner.rtm";
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
            boundingSphere = 2.5;
			//interpolateTo[] = {"KIA_gunner_static_low01",1};
			InterpolateTo[] = {"Unconscious",0.1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class fow_m1919_gunner: fow_vickers_gunner {
			file = "\fow\fow_anims\statics\m1919_gunner.rtm";
		};
		class fow_type92_gunner_prone: fow_vickers_gunner {
			file = "\fow\fow_anims\statics\type92_gunner_prone.rtm";
		};
		class fow_type92_gunner_middle: fow_type92_gunner_prone {
			file = "\fow\fow_anims\statics\type92_gunner_middle.rtm";
		};
		class fow_type92_gunner_stand: fow_type92_gunner_prone {
			file = "\fow\fow_anims\statics\type92_gunner_stand.rtm";
		};
		class fow_mg42_gunner_low: fow_vickers_gunner {
			file = "\fow\fow_anims\statics\mg42_gunner_low.rtm";
		};
		class fow_mg42_gunner_middle: fow_vickers_gunner {
			file = "\fow\fow_anims\statics\mg42_gunner_middle.rtm";
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
		};
		class fow_mg42_gunner_high: fow_vickers_gunner {
			file = "\fow\fow_anims\statics\mg42_gunner_high.rtm";
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";//erected
		};
		/*class KIA_gunner_static_low01: DefaultDie
		{
			actions = "DeadActions";
			file = "\A3\cargoposes_F\Anim\gunner_static_low01_KIA.rtm";
			speed = 1;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};*/
		class fow_6_pounder_driver: Crew
		{
			file = "\fow\fow_anims\statics\6_pounder_driver.rtm";
			//interpolateTo[] = {"KIA_gunner_static_low01",1};
			InterpolateTo[] = {"Unconscious",0.1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class fow_6_pounder_gunner: Crew
		{
			file = "\fow\fow_anims\statics\6_pounder_gunner.rtm";
			//interpolateTo[] = {"KIA_gunner_static_low01",1};
			InterpolateTo[] = {"Unconscious",0.1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
		};
		class fow_Bike_Dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\MMT_Driver.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
		};
		class fow_Bike_Driver: Crew
		{
			interpolateTo[] = {"fow_Bike_Dead",1,"fow_Bike_Driver_Right",1,"fow_Bike_Driver_Right_End",1,"fow_Bike_Driver_Left",1,"fow_Bike_Driver_Left_End",1};
			file = "fow\fow_anims\vehicles\Bike_Driver.rtm";
			connectTo[] = {"fow_Bike_Dead",1};
		};
		class fow_Bike_Driver_Right: fow_Bike_Driver
		{
			file = "fow\fow_anims\vehicles\Bike_Driver_Right.rtm";
			interpolateTo[] = {"fow_Bike_Dead",1};
			speed = 1.545;
			looped=0;
			interpolationSpeed=1;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {0};
		};
		class fow_Bike_Driver_Right_End: fow_Bike_Driver_Right
		{
			file = "fow\fow_anims\vehicles\Bike_Driver_Right_End.rtm";
			interpolateFrom[] = {"fow_Bike_Driver_Right",1};
			interpolateTo[] = {"fow_Bike_Driver",1};
			rightHandIKCurve[] = {0,0,1,1};
		};
		class fow_Bike_Driver_Left: fow_Bike_Driver
		{
			file = "fow\fow_anims\vehicles\Bike_Driver_Left.rtm";
			interpolateTo[] = {"fow_Bike_Dead",1};
			speed = 1.545;
			looped=0;
			interpolationSpeed=1;
			leftHandIKCurve[] = {0};
		};
		class fow_Bike_Driver_Left_End: fow_Bike_Driver_Left
		{
			file = "fow\fow_anims\vehicles\Bike_Driver_Left_End.rtm";
			interpolateFrom[] = {"fow_Bike_Driver_Left",1};
			interpolateTo[] = {"fow_Bike_Driver",1};
			leftHandIKCurve[] = {0,0,1,1};
		};
		
		//Bren
		class fow_bren_driver_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\bren_driver_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_bren_driver: Crew
		{
			interpolateTo[] = {"fow_bren_driver_dead",1};
			file = "fow\fow_anims\vehicles\bren_driver.rtm";
		};
		class fow_bren_gunner_back_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\bren_gunner_back_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_bren_gunner_back: Crew
		{
			interpolateTo[] = {"fow_bren_gunner_back_dead",1};
			file = "fow\fow_anims\vehicles\bren_gunner_back.rtm";
		};
		class fow_bren_gunner_front_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\bren_gunner_front_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_bren_gunner_front: Crew
		{
			interpolateTo[] = {"fow_bren_gunner_front_dead",1};
			file = "fow\fow_anims\vehicles\bren_gunner_front.rtm";
		};
		//222
		class fow_222_driver_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\222_driver_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_222_driver: Crew
		{
			interpolateTo[] = {"fow_222_driver_dead",1};
			file = "fow\fow_anims\vehicles\222_driver.rtm";
		};
		class fow_222_gunner_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\222_gunner_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_222_gunner: Crew
		{
			interpolateTo[] = {"fow_222_gunner_dead",1};
			file = "fow\fow_anims\vehicles\222_gunner.rtm";
		};
		class fow_222_commander_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\222_commander_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_222_commander: Crew
		{
			interpolateTo[] = {"fow_222_commander_dead",1};
			file = "fow\fow_anims\vehicles\222_commander.rtm";
		};
		//234
		class fow_234_driver_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\222_driver_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_234_driver: Crew
		{
			interpolateTo[] = {"fow_234_driver_dead",1};
			file = "fow\fow_anims\vehicles\234_driver.rtm";
		};
		class fow_234_gunner_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\222_gunner_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_234_gunner: Crew
		{
			interpolateTo[] = {"fow_234_gunner_dead",1};
			file = "fow\fow_anims\vehicles\234_gunner.rtm";
		};
		class fow_234_commander_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\222_commander_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_234_commander: Crew
		{
			interpolateTo[] = {"fow_234_commander_dead",1};
			file = "fow\fow_anims\vehicles\234_commander.rtm";
		};
		//250
		class fow_250_driver_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\250_driver_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_250_driver: Crew
		{
			interpolateTo[] = {"fow_250_driver_dead",1};
			file = "fow\fow_anims\vehicles\250_driver.rtm";
		};
		class fow_250_co_driver_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\250_co_driver_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_250_co_driver: Crew
		{
			interpolateTo[] = {"fow_250_co_driver_dead",1};
			file = "fow\fow_anims\vehicles\250_driver.rtm";
		};
		class fow_250_gunner_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\250_gunner_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_250_gunner: Crew
		{
			interpolateTo[] = {"fow_250_gunner_dead",1};
			file = "fow\fow_anims\vehicles\250_gunner.rtm";
            boundingSphere = 2.5;
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";//erected
		};
		class fow_250_cargo_01: Crew
		{
			interpolateTo[] = {"fow_251_cargo_dead",1};
			file = "fow\fow_anims\vehicles\250_cargo_01.rtm";
		};
		class fow_250_cargo_02: Crew
		{
			interpolateTo[] = {"fow_251_cargo_dead",1};
			file = "fow\fow_anims\vehicles\250_cargo_02.rtm";
		};
		class fow_250_cargo_03_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\250_cargo_03_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_250_cargo_03: Crew
		{
			interpolateTo[] = {"fow_250_cargo_03_dead",1};
			file = "fow\fow_anims\vehicles\250_cargo_03.rtm";
		};
		//251
		class fow_251_driver_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\251_cargo_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_251_driver: Crew
		{
			interpolateTo[] = {"fow_251_driver_dead",1};
			file = "fow\fow_anims\vehicles\251_driver.rtm";
		};
		class fow_251_gunner_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\251_gunner_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_251_gunner: Crew
		{
			interpolateTo[] = {"fow_251_gunner_dead",1};
			file = "fow\fow_anims\vehicles\251_gunner.rtm";
            boundingSphere = 2.5;
            collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";//erected
		};
		class fow_251_cargo_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\251_cargo_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_251_cargo_01: Crew
		{
			interpolateTo[] = {"fow_251_cargo_dead",1};
			file = "fow\fow_anims\vehicles\251_cargo_01.rtm";
		};
		class fow_251_cargo_02: Crew
		{
			interpolateTo[] = {"fow_251_cargo_dead",1};
			file = "fow\fow_anims\vehicles\251_cargo_02.rtm";
		};
		class fow_251_cargo_03: Crew
		{
			interpolateTo[] = {"fow_251_cargo_dead",1};
			file = "fow\fow_anims\vehicles\251_cargo_03.rtm";
		};
		class fow_251_cargo_04: Crew
		{
			interpolateTo[] = {"fow_251_cargo_dead",1};
			file = "fow\fow_anims\vehicles\251_cargo_04.rtm";
		};
		class fow_251_cargo_05: Crew
		{
			interpolateTo[] = {"fow_251_cargo_dead",1};
			file = "fow\fow_anims\vehicles\251_cargo_05.rtm";
		};
		class fow_251_cargo_06: Crew
		{
			interpolateTo[] = {"fow_251_cargo_dead",1};
			file = "fow\fow_anims\vehicles\251_cargo_06.rtm";
		};
		//Kubel
		class fow_kubel_driver_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\kubel_driver_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_kubel_driver: Crew
		{
			interpolateTo[] = {"fow_kubel_driver_dead",1};
			file = "fow\fow_anims\vehicles\kubel_driver.rtm";
		};
		class fow_kubel_commander_dead: DefaultDie
		{
			actions = "DeadActions";
			file = "fow\fow_anims\vehicles\kubel_pass_front_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_kubel_commander: Crew
		{
			interpolateTo[] = {"fow_kubel_commander_dead",1};
			file = "fow\fow_anims\vehicles\kubel_pass_front.rtm";
		};
		class fow_kubel_gunner_dead: DefaultDie
		{
			actions = "DeadActions";
			//file = "fow\fow_anims\vehicles\kubel_gunner_dead.rtm";
			file = "fow\fow_anims\vehicles\kubel_gunner_dead.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
		class fow_kubel_gunner: Crew
		{
			interpolateTo[] = {"fow_kubel_gunner_dead",1};
			file = "fow\fow_anims\vehicles\kubel_gunner.rtm";
		};

	};
};