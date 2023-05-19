/// PhysX part
simulation			= "tankX";
enginePower			= 164;// <Description>: Power of the engine in kW.
maxOmega 			= 356;//maxOmega = (maxRpm*2*Pi)/60.
peakTorque 			= 474;//Maximum engine torque. (=enginePower*1000/maxOmega).
torqueCurve[] 		= {
	{0, 0},
	{(600/1800), (2650/2850)},
	{(800/1800), (2800/2850)},
	{(1000/1800), (2850/2850)},
	{(1200/1800), (2800/2850)},
	{(1400/1800), (2750/2850)},
	{(1600/1800), (2600/2850)},
	{(1800/1800), (2350/2850)}
};
//torqueCurve[] = {{0.000, 0.000}, {0.178, 0.800}, {0.250, 1.0}, {0.461, 0.900}, {0.900, 0.800}, {1.000, 0.300}};
//wheelCircumference = 1.25;
//tracksSpeed = 1.1;

thrustDelay			= 0.1;    	/// how much time does it take to get the full thrust (default 1), used to reduce initial wheel slipping
clutchStrength 		= 180.0;//180
fuelCapacity		= 1885;
brakeIdleSpeed		= 1.78; 	/// speed in m/s below which braking is applied
latency 			= 0.1;
tankTurnForce		= 200000;//330000; /// Random magic number, expected to be something like 11 x mass of vehicle

// 		<Description>: These three values describe internal damping of the engine. Bigger values mean greater damping. Clutch disengaged value 
		// is used while shifting gears, engine interpolates between clutch engaged and full throttle values according to throttle input.
		// We tend to use slightly lower clutch engaged values because it allows cars to turn more smoothly.
		// Typical values in range (0.25,3). The simulation can become unstable with damping rates of 0.
		// <Type>: float, float, float
		// <Default>: 0.08, 2.0, 0.35
/*dampingRateFullThrottle = 0.08;
dampingRateZeroThrottleClutchEngaged = 0.35;
dampingRateZeroThrottleClutchDisengaged = 0.35;		
*/
/// Gearbox and transmission
idleRpm = 600; // RPM at which the engine idles.
redRpm = 3400; // RPM at which the engine redlines.

engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)
/*
class complexGearbox {
	GearboxRatios[]    = {"R2",-3.9,"N",0,"D1",3.0,"D2",2.25,"D3",1.725,"D4",1.55};
	TransmissionRatios[] = {"High",10};
	gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
	moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
	driveString        = "D"; // string to display in the HUD for forward gears.
	neutralString      = "N"; // string to display in the HUD for neutral gear.
	reverseString      = "R"; // string to display in the HUD for reverse gears.
	transmissionDelay  = 0.1;
};*/

class complexGearbox {
	//GearboxRatios[]    = {"R2",-3.9,"N",0,"D1",4.7,"D2",3.5,"D3",2.6,"D4",2.0,"D5",1.5,"D6",1.125,"D7",0.85};
	GearboxRatios[]    = {"R2",-3.9,"N",0,"D1",2.225};
	TransmissionRatios[] = {"High",9.5};//13
	gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
	moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
	driveString        = "D"; // string to display in the HUD for forward gears.
	neutralString      = "N"; // string to display in the HUD for neutral gear.
	reverseString      = "R"; // string to display in the HUD for reverse gears.
	transmissionDelay  = 0;//.1
};


/// end of gearbox

numberPhysicalWheels = 12;

class Wheels {
	class L2 {
		boneName = "wheel_podkoloL1";
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
		MOI = 4.8;
		latStiffX = 25;
		latStiffY = 280;
		longitudinalStiffnessPerUnitGravity = 10000;//100000;
		maxBrakeTorque = 5000;
		sprungMass = 1200;
		springStrength = 256000;//increase to avoid overturn
		springDamperRate = 26466;//increase to avoid overturn
		dampingRate = 1.0;
		dampingRateInAir = 1950.0;
		dampingRateDamaged = 1000.0;
		dampingRateDestroyed = 10000.0;
		maxDroop = 0.15;
		maxCompression = 0.15;
	};
	class L3: L2 {
		boneName = "wheel_podkolol2";
		center   = "wheel_1_3_axis";
		boundary = "wheel_1_3_bound";
	};
	class L4: L2 {
		boneName = "wheel_podkolol3";
		center   = "wheel_1_4_axis";
		boundary = "wheel_1_4_bound";
	};
	class L5: L2 {
		boneName = "wheel_podkolol4";
		center   = "wheel_1_5_axis";
		boundary = "wheel_1_5_bound";
	};

	// rear left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L6: L2 {
		boneName = "wheel_podkolol5";
		center   = "wheel_1_6_axis";
		boundary = "wheel_1_6_bound";
	};
	// front left wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class L1: L2 {
		boneName = "";
		center   = "wheel_1_1_axis";
		boundary = "wheel_1_1_bound";
		sprungMass = 1000.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};

	class R2: L2 {
		boneName = "wheel_podkolop1";
		center   = "wheel_2_2_axis";
		boundary = "wheel_2_2_bound";
		side = "right";
	};
	class R3: R2 {
		boneName = "wheel_podkolop2";
		center   = "wheel_2_3_axis";
		boundary = "wheel_2_3_bound";
	};
	class R4: R2 {
		boneName = "wheel_podkolop3";
		center   = "wheel_2_4_axis";
		boundary = "wheel_2_4_bound";
	};
	class R5: R2 {
		boneName = "wheel_podkolop4";
		center   = "wheel_2_5_axis";
		boundary = "wheel_2_5_bound";
	};
	// rear right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R6: R2 {
		boneName = "wheel_podkolop5";
		center   = "wheel_2_6_axis";
		boundary = "wheel_2_6_bound";
	};
	// front right wheel, usually Idler or Drive Sproket
	// Note, this wheel may not always be touching the ground, but we need it anyway!
	class R1: R2 {
		boneName = "";
		center   = "wheel_2_1_axis";
		boundary = "wheel_2_1_bound";
		sprungMass = 1500.0;
		springStrength = 37500;
		springDamperRate = 7500;
		maxDroop = 0;
		maxCompression = 0;
	};
};
/// End of PhysX