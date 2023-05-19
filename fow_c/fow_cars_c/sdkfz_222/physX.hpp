		thrustDelay            	= 0.5;
		brakeIdleSpeed         	= 1.78;
		maxSpeed               	= 80;
		fuelCapacity           	= 45; 
		wheelCircumference     	= 2.277;

		antiRollbarForceCoef = 12;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 70;

		idleRpm = 400;
		redRpm = 3500;//6900

		class complexGearbox
		{
			GearboxRatios[] = {"R1",-4,"N",0,"D1","4.5*(0.58^0)","D2","4.5*(0.58^1)","D3","4.5*(0.58^2)","D4","4.5*(0.58^3)","D5","4.5*(0.59^4)","D6","4.5*(0.6^5)"};
			TransmissionRatios[] = {"High",7};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			gearUpMaxCoef = 0.95;
			gearDownMaxCoef = 0.85;
			gearUpMinCoef = 0.65;
			gearDownMinCoef = 0.55;
			transmissionDelay = 2;
		};
		
		simulation = "carx";
		dampersBumpCoef = 6.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.3;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 20.0;//20
		//enginePower = 90;
		//maxOmega = 366;//471
		//peakTorque = 1253;//600
		enginePower = 150;
		maxOmega = 450;
		peakTorque = 425;
		dampingRateFullThrottle = 0.08;//0.08;
		dampingRateZeroThrottleClutchEngaged = 0.5;//2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		//torqueCurve[] = {{0.000, 0.000}, {0.178, 0.800}, {0.250, 1.0}, {0.461, 0.900}, {0.900, 0.800}, {1.000, 0.300}};
		//torqueCurve[] = {{0.0, 0.8}, {0.33, 1.0}, {1.0, 0.8}};
		//changeGearMinEffectivity[]   = {0.95, 0.15, 0.95, 0.95, 0.75, 0.95, 0.95};
		//switchTime = 0.31;
		//latency = 1.0;
		torqueCurve[] = {{"(0/3500)","(0/425)"},{"(500/3500)","(200/425)"},{"(1500/3500)","(405/425)"},{"(2000/3500)","(425/425)"},{"(2500/3500)","(350/425)"},{"(3000/3500)","(300/425)"},{"(6000/3500)","(0/425)"}};
		changeGearMinEffectivity[] = {1,0.15,1,1,1,1,1,1};
		switchTime = 0.31;
		latency = 1.5;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 150;
				MOI = 6;
				dampingRate = 1;
				dampingRateDamaged = 5.0;
				dampingRateDestroyed = 5000.0;
				maxBrakeTorque = 10500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				maxDroop = 0.15;
				sprungMass = 1200;//2066
				springStrength = 201234;//201234
				springDamperRate = 45600.6;//20600
				longitudinalStiffnessPerUnitGravity = 5000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};


/*
				boneName = "wheel_1_1_damper";
				steering = true;
				side = "left";
				center   = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 3.3;
				dampingRate = 0.5;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				mMaxDroop = 0.15;
				sprungMass = 175;
				springStrength = 6568.75;
				springDamperRate = 8680;
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 80;
				latStiffY = 200;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1,1}};*/
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = false;
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 275000;			
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
				maxHandBrakeTorque = 275000;		
			};
		};