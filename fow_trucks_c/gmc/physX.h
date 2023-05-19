		enginePower			= 68;// <Description>: Power of the engine in kW.
		maxOmega 			= 320;//maxOmega = (maxRpm*2*Pi)/60.
		peakTorque 			= 213;//Maximum engine torque. (=enginePower*1000/maxOmega).

		thrustDelay = 0.5;
		brakeIdleSpeed = 1.78;
		maxSpeed = 70;
		fuelCapacity = 45;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 20;
		idleRpm = 600;
		redRpm = 3000;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-10.094,"N",0,"D1",5.562,"D2",3.456,"D3",2.623,"D4",1.678,"D5",1.078};
			TransmissionRatios[] = {"High",5.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 55.0;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0,0.2},{0.278,0.5},{0.35,0.85},{0.461,1.0},{0.7,0.95},{0.75,0.85},{0.8,0.7},{1.0,0.5}};
		switchTime = 0.51;
		latency = 1.0;
		numberPhysicalWheels = 6;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = true;
				side = "left";
				center   = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 80;
				MOI = 40;
				dampingRate = 0.1;
				dampingRateDamaged = 1.0;
				dampingRateDestroyed = 1000.0;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				mMaxDroop = 0.15;
				sprungMass = 1000;
				springStrength = 25000;//5*5*sprungMass //Natural freq 5-10 (cars) //tanks * 70-90
				springDamperRate = 5000;//dampingRatio * 2 * sqrt(springStrength * sprungMass) //dampingRatio 0.8-1.2 (cars)
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = false;
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 300000;			
			};
			class LR2: LR
			{
				boneName = "wheel_1_3_damper";
				center   = "wheel_1_3_axis";
				boundary = "wheel_1_3_bound";
				suspForceAppPointOffset = "wheel_1_3_axis";
				tireForceAppPointOffset = "wheel_1_3_axis";	
				maxHandBrakeTorque = 300000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center   = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = true;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = false;
				center   = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 300000;			
			};
			class RR2: RR
			{
				boneName = "wheel_2_3_damper";
				center   = "wheel_2_3_axis";
				boundary = "wheel_2_3_bound";
				suspForceAppPointOffset = "wheel_2_3_axis";
				tireForceAppPointOffset = "wheel_2_3_axis";
				maxHandBrakeTorque = 300000;	
			};
		};