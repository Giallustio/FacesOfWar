// Tank Water Ford config

simulation = "tankX";

maxFordingDepth = 0.5;
waterResistance = 0;
waterDamageEngine = 0.8;
waterLeakiness = 10;

/// PhysX part
enginePower			= 280;
maxOmega 			= 248;//maxOmega = (maxRpm*2*Pi)/60.
peakTorque 			= 873;//Maximum engine torque. (=enginePower*1000/maxOmega). //1273
torqueCurve[] 		= {
	{0, 0},
	{(1600/2640), (2650/2850)},
	{(1800/2640), (2800/2850)},
	{(1900/2640), (2850/2850)},
	{(2000/2640), (2800/2850)},
	{(2200/2640), (2750/2850)},
	{(2400/2640), (2600/2850)},
	{(2640/2640), (2350/2850)}
};
thrustDelay			= 0.2;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 180.0;
fuelCapacity		= 1885;
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied
latency 			= 0.1;
tankTurnForce		= 300000; /// Random magic number, expected to be something like 11 x mass of vehicle

/// Gearbox and transmission
idleRpm = 700; // RPM at which the engine idles.
redRpm = 2400;//2400; // RPM at which the engine redlines.

engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

class complexGearbox {
	//GearboxRatios[]    = {"R2",-3.9,"N",0,"D1",4.7,"D2",3.5,"D3",2.6,"D4",2.0,"D5",1.5,"D6",1.125,"D7",0.85};
	GearboxRatios[]    = {"R2",-3.9,"N",0,"D1",2.225};
	TransmissionRatios[] = {"High",8};//13
	gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
	moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
	driveString        = "D"; // string to display in the HUD for forward gears.
	neutralString      = "N"; // string to display in the HUD for neutral gear.
	reverseString      = "R"; // string to display in the HUD for reverse gears.
	transmissionDelay  = 0;//.1
};
//changeGearMinEffectivity[] = {0.5,0.15,0.95,0.95,0.95,0.95,0.8};
/// end of gearbox

/*
//Other approach
peakTorque 			= 420;
	GearboxRatios[]    = {"R2",-3.9,"N",0,"D1",4.7,"D2",4.0,"D3",3.3,"D4",2.8,"D5",2.2};
	TransmissionRatios[] = {"High",9};//13
dampingRateInAir = 2080.0;
*/

numberPhysicalWheels = 16;
class Wheels
{
	class L2
	{
		boneName = "Wheel_podkoloL1";
		center   = "wheel_1_2_axis";
		boundary = "wheel_1_2_bound";
		damping  = 75.0;
		// tanks do not have steerable wheels
		steering = 0;
		/// We need to distinguish the side to apply the right thrust value
		side = "left";
		/// weight of the wheel is defined per wheel, it reduces overall mass of vehicle
		width = "0.58";
		weight = 150;
		mass = 150;
		MOI = 6;//6
		latStiffX = 25;
		latStiffY = 280;
		longitudinalStiffnessPerUnitGravity = 100000;
		maxBrakeTorque = 3500;
		sprungMass = 2000;
		springStrength = 250234;
		springDamperRate = 24656;
		dampingRate = 1.0;
		dampingRateInAir = 2342.0;//2350
		dampingRateDamaged = 1000.0;
		dampingRateDestroyed = 10000.0;
		maxDroop = 0.15;
		maxCompression = 0.15;
	};
	class L3: L2
	{
		boneName = "Wheel_podkoloL2";
		center   = "wheel_1_3_axis";
		boundary = "wheel_1_3_bound";
	};
	class L4: L2
	{
		boneName = "Wheel_podkoloL3";
		center   = "wheel_1_4_axis";
		boundary = "wheel_1_4_bound";
	};
	class L5: L2
	{
		boneName = "Wheel_podkoloL4";
		center   = "wheel_1_5_axis";
		boundary = "wheel_1_5_bound";
	};
	class L6: L2
	{
		boneName = "Wheel_podkoloL5";
		center   = "wheel_1_6_axis";
		boundary = "wheel_1_6_bound";
	};
	class L7: L2
	{
		boneName = "Wheel_podkoloL6";
		center   = "wheel_1_7_axis";
		boundary = "wheel_1_7_bound";
	};
	class L1: L2
	{
		boneName = "";
		center   = "wheel_1_1_axis";
		boundary = "wheel_1_1_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	class L9: L1
	{
		boneName = "";
		center   = "wheel_1_9_axis";
		boundary = "wheel_1_9_bound";
	};
	class R2: L2
	{
		boneName = "Wheel_podkolop1";
		center   = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		side = "right";
	};
	class R3: R2
	{
		boneName = "Wheel_podkolop2";
		center   = "wheel_2_3_axis";
		boundary = "wheel_2_3_bound";
	};
	class R4: R2
	{
		boneName = "Wheel_podkolop3";
		center   = "wheel_2_4_axis";
		boundary = "wheel_2_4_bound";
	};
	class R5: R2
	{
		boneName = "Wheel_podkolop4";
		center   = "wheel_2_5_axis";
		boundary = "wheel_2_5_bound";
	};
	class R6: R2
	{
		boneName = "Wheel_podkolop5";
		center   = "wheel_2_6_axis";
		boundary = "wheel_2_6_bound";
	};
	class R7: R2
	{
		boneName = "Wheel_podkolop6";
		center   = "wheel_2_7_axis";
		boundary = "wheel_2_7_bound";
	};
	class R1: R2
	{
		boneName = "";
		center   = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
	class R9: R1
	{
		boneName = "";
		center   = "wheel_2_9_axis";
		boundary = "wheel_2_9_bound";
	};
};
