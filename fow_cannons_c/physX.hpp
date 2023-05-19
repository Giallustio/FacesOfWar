	// Tank Water Ford config

	simulation = "tankX";

	maxFordingDepth = 0.5;
	waterResistance = 0;
	waterDamageEngine = 0.8;
	waterLeakiness = 10;

	/// PhysX part
	enginePower			= 2;
	maxOmega 			= 2;
	peakTorque 			= 2;
	torqueCurve[] 		= {
		{0, 0},
		{1, 1}
	};
	thrustDelay			= 0.1;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
	clutchStrength 		= 180.0;
	fuelCapacity		= 1885;
	brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied
	latency 			= 0.1;
	tankTurnForce		= 4000; /// Random magic number, expected to be something like 11 x mass of vehicle

	/// Gearbox and transmission
	idleRpm = 1; // RPM at which the engine idles.
	redRpm = 2; // RPM at which the engine redlines.

	engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
	transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

	numberPhysicalWheels = 4;
	class Wheels
	{
		class L2
		{
			boneName = "";
			center   = "wheel_1_2_axis";
			boundary = "wheel_1_2_bound";
			damping  = 75.0;
			// tanks do not have steerable wheels
			steering = 0;
			/// We need to distinguish the side to apply the right thrust value
			side = "left";
			/// weight of the wheel is defined per wheel, it reduces overall mass of vehicle
			width = "0.58";
			weight = 50;
			mass = 50;
			MOI = 1;
			latStiffX = 25;
			latStiffY = 280;
			longitudinalStiffnessPerUnitGravity = 1000;
			maxBrakeTorque = 10000;
			sprungMass = 2000;
			springStrength = 250234;
			springDamperRate = 24656;
			dampingRate = 1.0;
			dampingRateInAir = 3000.0;
			dampingRateDamaged = 1000.0;
			dampingRateDestroyed = 4000000.0;
			maxDroop = 0.1;
			maxCompression = 0.1;
		};
		class L3: L2
		{
			boneName = "";
			center   = "wheel_1_3_axis";
			boundary = "wheel_1_3_bound";
		};
		class R2: L2
		{
			boneName = "";
			center   = "wheel_2_2_axis";
			boundary = "wheel_2_2_bound";
			side = "right";
		};
		class R3: R2
		{
			boneName = "";
			center   = "wheel_2_3_axis";
			boundary = "wheel_2_3_bound";
		};
	};
