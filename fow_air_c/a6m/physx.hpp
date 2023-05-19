		maxOmega				= 2000; // this parameters affects maximum engine rpm which also limits maximal wheel rotational speed
		antiRollbarForceCoef 	= 0 ;
		antiRollbarForceLimit 	= 0;
		antiRollbarSpeedMin 	= 50;
		antiRollbarSpeedMax 	= 300;

		class Wheels
		{
			class Wheel_tail
			{
				boneName					= "Wheel_Tail";
				steering					= false;
				side						= "left";
				center						= "Wheel_tail_center";
				boundary					= "Wheel_tail_rim";
				width						= 0.4;
				mass						= 20;
				MOI							= 0.4;
				dampingRate					= 0.1;
				dampingRateDamaged			= 1;
				dampingRateDestroyed		= 1000;
				maxBrakeTorque				= 0;
				maxHandBrakeTorque			= 0;
				suspTravelDirection[]		= {0, -1, 0};
				suspForceAppPointOffset		= "Wheel_tail_center";
				tireForceAppPointOffset		= "Wheel_tail_center";
				maxCompression				= 0.3;
				maxDroop					= 0.3;
				sprungMass					= 1500;
				springStrength				= 150000;
				springDamperRate			= 30000;
				longitudinalStiffnessPerUnitGravity	= 300;
				latStiffX					= 3;
				latStiffY					= 20.0;
				frictionVsSlipGraph[]		= {{0, 1}, {0.5, 1}, {1,1}};
			};
			class Wheel_l: Wheel_tail
			{
				steering					= true;
				side						= "left";
				boneName					= "Wheel_l";
				center						= "wheel_l_center";
				boundary					= "Wheel_l_rim";
				mass						= 35;
				MOI							= 1.575;
				width						= 0.6;
				maxBrakeTorque				= 1500;
				maxCompression				= 0.3;
				maxDroop					= 0.3;
				sprungMass					= 3350;
				springStrength				= 335000;
				springDamperRate			= 67000;
				longitudinalStiffnessPerUnitGravity	= 500;
				suspForceAppPointOffset		= "wheel_l_center";
				tireForceAppPointOffset		= "wheel_l_center";
			};
			class Wheel_r: Wheel_l
			{
				boneName					= "Wheel_r";
				side						= "right";
				center						= "Wheel_r_center";
				boundary					= "Wheel_r_rim";
				suspForceAppPointOffset		= "Wheel_r_center";
				tireForceAppPointOffset		= "Wheel_r_center";
			};
		};