	
	simulation = "tankX";
	selectionLeftOffset = "pasoffsetL";
	selectionRightOffset = "pasoffsetP";
	
	memoryPointTrack1L = "Stopa LL";
	memoryPointTrack1R = "Stopa LR";
	memoryPointTrack2L = "Stopa RL";
	memoryPointTrack2R = "Stopa RR";
	

	//END WATER
/*
torqueCurve[] =
{
	{"(600/2800)","(65/1400)"},
	{"(1000/2800)","(100/1400)"},
	{"(1500/2800)","(120/1400)"},
	{"(2000/2800)","(130/1400)"},
	{"(3000/2800)","(135/1400)"},
	{"(3500/2800)","(120/1400)"},
	{"(4000/2800)","(95/1400)"},
	{"(5002/2800)","(0/1400)"}
};

maxOmega = 209;
enginePower = 392;
peakTorque = 1400;
idleRPM = 500;
redRPM = 2800;

maxSpeed = 48;

thrustDelay		= 0; // how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
// thrustDelay		= 0.2;
clutchStrength		= 50; //90
fuelCapacity		= 500;
fuelConsumptionRate	= 330;
brakeIdleSpeed		= 0; // speed in m/s below which braking is applied
switchTime		= 0.3; //0.5
latency			= 0.5; //0.1
tankTurnForce		= 346841; // Random magic number, expected to be something like 11 x mass of vehicle
engineBrakeCoef		= 0.9;
*/

enginePower			= 168;
maxOmega 			= 227;
peakTorque 			= 4832;
torqueCurve[] 		= {
	{0, 0},
	{(800/1500), (2650/2850)},
	{(900/1500), (2800/2850)},
	{(1000/1500), (2850/2850)},
	{(1200/1500), (2800/2850)},
	{(1200/1500), (2750/2850)},
	{(1350/1500), (2600/2850)},
	{(1500/1500), (2350/2850)}
};
thrustDelay			= 0.1;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 180.0;
fuelCapacity		= 1885;
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied
latency 			= 0.1;
tankTurnForce		= 300000; /// Random magic number, expected to be something like 11 x mass of vehicle

/// Gearbox and transmission
idleRpm = 300; // RPM at which the engine idles.
redRpm = 2175; // RPM at which the engine redlines.

antiRollbarForceCoef = 24;
antiRollbarForceLimit = 42;
antiRollbarSpeedMin = 30;
antiRollbarSpeedMax = 75;

engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)
/*
changeGearMinEffectivity[] = {0.95,0,0.75};
class complexGearbox
{
	GearboxRatios[] = {"R1",-3.5,"N",0,"D1",1};
	TransmissionRatios[] = {"High",9.75}; //4.75
	gearBoxMode        = "auto";
	moveOffGear        = 1;
	driveString        = "D";
	neutralString      = "N";
	reverseString      = "R";
	transmissionDelay  = 0.1;
};*/

// NOT SPECIFIED BY RHS
// normalSpeedForwardCoef = 0.85;
// dampersBumpCoef = 13;
// tracksSpeed = 1;
// wheelCircumference = 1.25;
// turnCoef = 0.1;
// brakeDistance = 15;
// brakeTorque = 4014;
// steerAheadSimul = 0.5;
// steerAheadPlan = 0.35;
// predictTurnPlan = 2.8;
// predictTurnSimul = 2.6;
// precision = 5;
// epeImpulseDamageCoef = 18;
// terrainCoef = 50;

	numberPhysicalWheels = 12;
	class Wheels
	{
		class L2
		{
			boneName = "Wheel_podkoloL2";
			center   = "wheel_1_2_axis";
			boundary = "wheel_1_2_bound";
			damping  = 75.0;
			// tanks do not have steerable wheels
			steering = 0;
			/// We need to distinguish the side to apply the right thrust value
			side = "left";
			/// weight of the wheel is defined per wheel, it reduces overall mass of vehicle
			weight = 150;
			mass = 150;
			MOI = 7;
			latStiffX = 25;
			latStiffY = 280;
			longitudinalStiffnessPerUnitGravity = 100000;
			maxBrakeTorque = 40000;
			sprungMass = 4000.0;
			springStrength = 324000;
			springDamperRate = 36000;
			dampingRate = 1.0;
			dampingRateInAir = 3450.0;//8830.0;
			dampingRateDamaged = 10.0;
			dampingRateDestroyed = 10000.0;
			maxDroop = 0.15;
			maxCompression = 0.15;
		};
		class L3: L2
		{
			boneName = "Wheel_podkoloL3";
			center   = "wheel_1_3_axis";
			boundary = "wheel_1_3_bound";
		};
		class L4: L2
		{
			boneName = "Wheel_podkoloL4";
			center   = "wheel_1_4_axis";
			boundary = "wheel_1_4_bound";
		};
		class L5: L2
		{
			boneName = "Wheel_podkoloL6";
			center   = "wheel_1_5_axis";
			boundary = "wheel_1_5_bound";
		};
		class L1: L2
		{
			boneName = "";
			center   = "wheel_1_1_axis";
			boundary = "wheel_1_1_bound";
			sprungMass = 1280;
			springStrength = 37500;
			springDamperRate = 7500;
			maxDroop = 0;
			maxCompression = 0;
		};
		class L6: L1
		{
			boneName = "";
			center   = "wheel_1_6_axis";
			boundary = "wheel_1_6_bound";
		};
		class R2: L2
		{
			boneName = "Wheel_podkolop2";
			center   = "wheel_2_2_axis";
			boundary = "wheel_2_2_bound";
			side = "right";
		};
		class R3: R2
		{
			boneName = "Wheel_podkolop3";
			center   = "wheel_2_3_axis";
			boundary = "wheel_2_3_bound";
		};
		class R4: R2
		{
			boneName = "Wheel_podkolop4";
			center   = "wheel_2_4_axis";
			boundary = "wheel_2_4_bound";
		};
		class R5: R2
		{
			boneName = "Wheel_podkolop6";
			center   = "wheel_2_5_axis";
			boundary = "wheel_2_5_bound";
		};
		class R1: R2
		{
			boneName = "";
			center   = "wheel_2_1_axis";
			boundary = "wheel_2_1_bound";
			sprungMass = 1500;
			springStrength = 37500;
			springDamperRate = 7500;
			maxDroop = 0;
			maxCompression = 0;
		};
		class R6: R1
		{
			boneName = "";
			center   = "wheel_2_6_axis";
			boundary = "wheel_2_6_bound";
		};
	};
