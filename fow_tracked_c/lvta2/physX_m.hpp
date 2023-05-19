	
	simulation = "tankX";
	selectionLeftOffset = "pasoffsetL";
	selectionRightOffset = "pasoffsetP";
	
	memoryPointTrack1L = "Stopa LL";
	memoryPointTrack1R = "Stopa LR";
	memoryPointTrack2L = "Stopa RL";
	memoryPointTrack2R = "Stopa RR";
	
	//WATER
	canFloat = 1;
	maxFordingDepth = 0.5;//0.5;
	waterResistance = 0;
	waterDamageEngine = 0.8;
	waterLeakiness = 1;
	waterAngularDampingCoef = 10.0;
	waterPPInVehicle = 0;
	waterResistanceCoef = 0.0015;//.0015
	turnCoef = 4.75;//4.75
	rudderForceCoef = 1.5;//1.5
	rudderForceCoefAtMaxSpeed = 0.015;
	waterSpeedFactor = 0.5;//0.5
	engineShiftY = 0.1;
	waterLinearDampingCoefY = 2;
	waterLinearDampingCoefX = 2.0;
	waterEffectSpeed = 5;//5
	engineEffectSpeed = 5;//5
	waterFastEffectSpeed = 28;//28

	//END WATER

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

		enginePower = 485;
		maxOmega = 241;
		peakTorque = 2610;
		torqueCurve[] = {{"(610/2300)",0},{"(1000/2300)","(1600/2610)"},{"(1400/2300)","(2610/2610)"},{"(2300/2300)","(1900/2610)"},{"(4700/2300)","(0/2610)"}};
		thrustDelay = 0.3;
		clutchStrength = 60.0;
		fuelCapacity = 770;
		fuelConsumptionRate	= 330;
		brakeIdleSpeed = 1.78;
		latency = 0.1;
		tankTurnForce = 1300000;
		normalSpeedForwardCoef = 0.5;
		idleRpm = 610;
		redRpm = 2300;
		engineLosses = 25;
		transmissionLosses = 15;
		antiRollbarForceCoef = 15;
		antiRollbarForceLimit = 12;
		antiRollbarSpeedMin = 30;
		antiRollbarSpeedMax = 55;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2.235,"N",0,"CD0","2*(0.75^(-10))","CD1","2*(0.75^(-9))","CD2","2*(0.75^(-8))","CD3","2*(0.75^(-7))","CD4","2*(0.75^(-6))","CD5","2*(0.75^(-5))","CD6","2*(0.75^(-4))","CD7","2*(0.75^(-3))","CD8","2*(0.75^(-2))","CD9","2*(0.75^(-1))","D1","2*(0.75^0)","D2","2*(0.75^1)","D3","2*(0.75^2)","D4","2*(0.75^3)"};
			TransmissionRatios[] = {"High",5};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0;
		};
	
	
	maxSpeed = 32;
/*
	thrustDelay		= 0; // how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
	// thrustDelay		= 0.2;
	clutchStrength		= 50; //90
	fuelCapacity		= 500;
	brakeIdleSpeed		= 0; // speed in m/s below which braking is applied
	switchTime		= 0.3; //0.5
	latency			= 0.5; //0.1
	tankTurnForce		= 300841; //346841// Random magic number, expected to be something like 11 x mass of vehicle
	engineBrakeCoef		= 0.9;
	fuelConsumptionRate	= 330;
	antiRollbarForceCoef = 24;
	antiRollbarForceLimit = 42;
	antiRollbarSpeedMin = 30;
	antiRollbarSpeedMax = 75;

	engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
	transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)
*/
	/*changeGearMinEffectivity[] = {0.5,0,0.75};
	class complexGearbox {
		GearboxRatios[]    = {"R2",-3.9,"N",0,"D1",4.7,"D2",3.5,"D3",2.6,"D4",2.0,"D5",1.5,"D6",1.125,"D7",0.85};
		TransmissionRatios[] = {"High",15};
		gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
		moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
		driveString        = "D"; // string to display in the HUD for forward gears.
		neutralString      = "N"; // string to display in the HUD for neutral gear.
		reverseString      = "R"; // string to display in the HUD for reverse gears.
		transmissionDelay  = 0.1;
	};
*/

	numberPhysicalWheels = 16;
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
			MOI = 28;
			latStiffX = 25;
			latStiffY = 280;
			longitudinalStiffnessPerUnitGravity = 100000;
			maxBrakeTorque = 40000;
			sprungMass = 4000.0;
			springStrength = 324000;
			springDamperRate = 36000;
			dampingRate = 1.0;
			dampingRateInAir = 10000.0;//8830.0;
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
		class L6: L2
		{
			boneName = "Wheel_podkoloL8";
			center   = "wheel_1_6_axis";
			boundary = "wheel_1_6_bound";
		};
		class L7: L2
		{
			boneName = "Wheel_podkoloL9";
			center   = "wheel_1_7_axis";
			boundary = "wheel_1_7_bound";
		};/*
		class L8: L2
		{
			boneName = "Wheel_podkoloL8";
			center   = "wheel_1_8_axis";
			boundary = "wheel_1_8_bound";
		};
		class L9: L2
		{
			boneName = "Wheel_podkoloL9";
			center   = "wheel_1_9_axis";
			boundary = "wheel_1_9_bound";
		};*/
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
		class L9: L1
		{
			boneName = "";
			center   = "wheel_1_9_axis";
			boundary = "wheel_1_9_bound";
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
		class R6: R2
		{
			boneName = "Wheel_podkolop8";
			center   = "wheel_2_6_axis";
			boundary = "wheel_2_6_bound";
		};
		class R7: R2
		{
			boneName = "Wheel_podkolop9";
			center   = "wheel_2_7_axis";
			boundary = "wheel_2_7_bound";
		};/*
		class R8: R2
		{
			boneName = "Wheel_podkolop8";
			center   = "wheel_2_8_axis";
			boundary = "wheel_2_8_bound";
		};
		class R9: R2
		{
			boneName = "Wheel_podkolop9";
			center   = "wheel_2_9_axis";
			boundary = "wheel_2_9_bound";
		};*/
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
		class R9: R1
		{
			boneName = "";
			center   = "wheel_2_9_axis";
			boundary = "wheel_2_9_bound";
		};
	};
