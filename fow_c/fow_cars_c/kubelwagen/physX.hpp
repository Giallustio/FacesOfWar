		thrustDelay            	= 0.2;
		brakeIdleSpeed         	= 1.78;
		maxSpeed               	= 82;
		fuelCapacity           	= 45; 
		wheelCircumference     	= 2.277;

		antiRollbarForceCoef	= 0.5;
		antiRollbarForceLimit	= 0.5;
		antiRollbarSpeedMin 	= 20;
		antiRollbarSpeedMax		= 80; 

		idleRpm = 900;
		redRpm = 3000;

		class complexGearbox
		{	
			GearboxRatios[]    = {"R1",-3.231,"N",0,"D1",5.202,"D2",3.570,"D3",2.641,"D4",1.400};//1.1170 -1.370
			TransmissionRatios[] = {"High",2.111};
			gearBoxMode        = "auto";
			moveOffGear        = 1;
			driveString        = "D";
			neutralString      = "N";
			reverseString      = "R";


		};		
		simulation = "carx";
		dampersBumpCoef = 0.05;
		differentialType = "rear_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.3;
		centreBias = 1.3;
		clutchStrength = 15.0;
		enginePower = 40; //real 19/20
		maxOmega = 424;
		peakTorque = 240;// real about 75
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;		
		torqueCurve[] = {{0.000, 0.000}, {0.108, 0.800}, {0.250, 1.0}, {0.461, 0.900}, {0.900, 0.800}, {1.000, 0.300}};
		changeGearMinEffectivity[]   = {0.95, 0.15, 0.95, 0.95, 0.95, 0.95};
		switchTime = 0.31;
		latency = 1.0;
		class Wheels
		{
			class LF
			{
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
				sprungMass = 400.75;//400.75
				springStrength = 24568.75;//24568.75
				springDamperRate = 8680;//8680
				longitudinalStiffnessPerUnitGravity = 100000;
				latStiffX = 25;
				latStiffY = 18000;
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
				maxHandBrakeTorque = 3000;
				//latStiffY = 180;		
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
				maxHandBrakeTorque = 3000;				
			};
		};