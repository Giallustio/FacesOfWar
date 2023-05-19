// GENERAL
simulation = "tankX";
fuelCapacity            = 105;		// in ~ *3 minutes, time to empty
brakeIdleSpeed          = 0.1;			// in m/s, forced handbrake when slower
maxSpeed                = 40;
normalSpeedForwardCoef  = 0.75;			// thrust value for W
slowSpeedForwardCoef    = 0.25;			// thrust value for CTRL+W
waterResistanceCoef     = 0.3;

// ENGINE
enginePower = 220;
engineMOI = 50;
maxOmega = 314.16;//maxOmega = (maxRpm*2*Pi)/60.
minOmega = 104.72;
idleRPM = 700;
redRPM = 3000;
peakTorque = 3350;//Maximum engine torque. (=enginePower*1000/maxOmega).
torqueCurve[] = {
	{0.0,0.0},
	{__EVAL(1285/3000)  , __EVAL(80/100)},
	{__EVAL(1570/3000)  , __EVAL(95/100)},
	{__EVAL(1855/3000)  , __EVAL(98/100)},
	{__EVAL(2140/3000)  , __EVAL(100/100)},
	{__EVAL(2425/3000)  , __EVAL(95/100)},
	{__EVAL(2710/3000)  , __EVAL(80/100)},
	{__EVAL(3000/3000)  , __EVAL(64/100)}
};
thrustDelay 							= 0.5; // time it takes from 0 thrust to 1 wanted thrust
dampingRateFullThrottle                 = 1.4;  // engine braking with thrust 1
dampingRateZeroThrottleClutchEngaged    = 5.0;  // engine braking with thrust 0
dampingRateZeroThrottleClutchDisengaged = 0.8; // engine braking in neutral/open clutch

// DRIVETRAIN
clutchStrength              = 10.0;///higher?
latency                     = 1.3;              // time to stay in a gear
switchTime                  = 0.3;                // time off gear when switching
changeGearType              = "rpmratio";       // condition for switching gears
changeGearOmegaRatios[] = {                     // rpm ratio max/min pair
	__EVAL(3000/3000)   , __EVAL(1000/3000),
	__EVAL(1000/3000)   , 0,
	__EVAL(2980/3000)   , __EVAL(800/3000),
	__EVAL(2950/3000)   , __EVAL(1600/3000),
	__EVAL(2950/3000)   , __EVAL(1500/3000),
	__EVAL(2950/3000)   , __EVAL(1400/3000)
};
class complexGearbox
{
	GearboxRatios[] = {
		"R1",   -8,		//higher numbers, less power and speed
		"N" ,   0,
		"D1",   4.4,
		"D2",   2.2,
		"D3",   1.5,
		"D4",   1.0
	};
	transmissionRatios[]    = {"High",13};  //44      // remaining drivetrain ratios (final drive) //lower more speed -- higher to fit the gear up/down
	gearBoxMode             = "auto";
	moveOffGear             = 1;
	driveString             = "D";
	neutralString           = "N";
	reverseString           = "R";
};

// ARTIFICIAL FORCES
tankTurnForce           = 330000;               /// Random magic number, expected to be something like 11 x mass of vehicle // initial force applied to turning in [0,tankTurnForceAngMinSpd] ang. speed range
tankTurnForceAngMinSpd  = 0.7;                  // in rad/s, speed where tankTurnForce starts fading to 0 @ tankTurnForceAngSpd
tankTurnForceAngSpd     = 0.76;                 // in rad/s, angular speed where tankTurnForce becomes 0
accelAidForceCoef       = 2.0;                  // acceleration aid force
accelAidForceYOffset    = -2.0;                 // Y offset from the CoG where to apply the accelAidForce
accelAidForceSpd        = 1.4;                  // in m/s, speed where accelAidForceCoef becomes 0
//Other variables that come into play are latStiffX, latStiffY and frictionVsSlipGraph[] (mainly the first pair, before optimum slip) - the higher friction the more force is needed to turn the tank.

numberPhysicalWheels = 16;
class Wheels
{
	class L2
	{
		boneName = "Wheel_podkoloL1";
		center   = "wheel_1_2_axis";
		boundary = "wheel_1_2_bound";
		damping = 75;
		steering = 0;
		side = "left";
		width = 0.5;
		mass = 200;
		MOI = 20;//11.5 //Another way of expressing this is that a high MOI will result in less wheel spin when stamping on the accelerator because it is harder to make the wheel spin. Conversely, lower values of MOI will result in more wheel spin when stamping on the accelerator.
		latStiffY = 30;
		latStiffX = 1.5;
		longitudinalStiffnessPerUnitGravity = 15000;
		// maxBrakeTorque = 10000;
		maxBrakeTorque = 10000;

		sprungMass = 1250;
		springStrength = 150000;//18750/262500/increase to avoid overturn //naturalFrequency * naturalFrequency * sprungMass //Natural freq 5-10 (cars) //tanks * 70-90
		springDamperRate = 14697;//6000/62750/increase to avoid overturn//dampingRatio * 2 * sqrt(springStrength * sprungMass) //dampingRatio 0.8-1.2 (cars)

		dampingRate = 2000; //900
		dampingRateInAir = 2000;//900
		dampingRateDestroyed = 10000;
		suspTravelDirection[] = {0,-1,0};
		maxDroop = 0.1;
		maxCompression = 0.1;
		frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
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
