// Tank Water Ford config

simulation = "tankX";

maxFordingDepth = 0.5;
waterResistance = 0;
waterDamageEngine = 0.8;
waterLeakiness = 10;

/// PhysX part
enginePower			= 522;
engineMOI 			= 50;
maxOmega 			= 314;//maxOmega = (maxRpm*2*Pi)/60.
peakTorque 			= 1662;//Maximum engine torque. (=enginePower*1000/maxOmega).

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
thrustDelay			= 0.1;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 180.0;
fuelCapacity		= 1885; // Autonomy in minutes / 3
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied
latency 			= 0.1;

/*accelAidForceCoef = 1;
accelAidForceSpd = 1;
accelAidForceYOffset = -2;
*/
tankTurnForce		= 250000; /// Random magic number, expected to be something like 11 x mass of vehicle
								// initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
//tankTurnForceAngMinSpd	= 0.6;	// in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
//tankTurnForceAngSpd		= 0.91; // in rad/s, angular speed where tankTurnForce becomes 0
//Other variables that come into play are latStiffX, latStiffY and frictionVsSlipGraph[] (mainly the first pair, before optimum slip) - the higher friction the more force is needed to turn the tank.


/// Gearbox and transmission
idleRpm = 700; // RPM at which the engine idles.
redRpm = 2640; // RPM at which the engine redlines.

engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

class complexGearbox {
	GearboxRatios[] = {
		"R1",   -6,
		"N" ,   0,
		"D1",   4.4,
		"D2",   2.2,
		"D3",   1.5,
		"D4",   1.0
	};
	transmissionRatios[]    = {"High",12.5};        // remaining drivetrain ratios (final drive)
	gearBoxMode             = "auto";
	moveOffGear             = 1;
	driveString             = "D";
	neutralString           = "N";
	reverseString           = "R";
};
/// end of gearbox

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
		weight = 0.5;
		mass = 200;
		MOI = 12;
		latStiffX = 265;
		latStiffY = 300;
		longitudinalStiffnessPerUnitGravity = 5000;
		//frictionVsSlipGraph[] = {[0,0.55],[0.3,1.28],[0.65,0.55]};
		maxBrakeTorque = 1500;
		sprungMass = 1500;
		springStrength = 140000;//18750/262500/increase to avoid overturn //naturalFrequency * naturalFrequency * sprungMass //Natural freq 5-10 (cars) //tanks * 70-90
		springDamperRate = 15000;//6000/62750/increase to avoid overturn//dampingRatio * 2 * sqrt(springStrength * sprungMass) //dampingRatio 0.8-1.2 (cars)
		dampingRate = 1.0;
		dampingRateInAir = 1250.0;
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
