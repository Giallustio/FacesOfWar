	class Plane_Base_F;
	
	class FOW_F6F_Base: Plane_Base_F
	{
		scope = 1;
		side = 2;
		displayName = "F6F Hellcat";
		faction = "FOW_US_NAVY";
		crew = "fow_s_us_pilot"; 
		typicalCargo[] = {"fow_s_us_pilot"};
		hasGunner = 0;
		picture = "fow\fow_air\hellcat\data\ui\wx_us_hellcat_picture_ca.paa";
		icon = "fow\fow_air\hellcat\data\ui\map_us_hellcat_icon_ca.paa";
		editorpreview = "fow\fow_air\hellcat\data\ui\wx_us_hellcat_picture_ca.paa";
		model = "\fow\fow_air\hellcat\wx_us_hellcat.p3d";
		hiddenSelections[] = {"_swaptex01", "_2x20", "_Bombcarry", "_RocketRails"};
		hiddenSelectionsTextures[] = {"\fow\fow_air\hellcat\data\wx_us_Hellcat_co.paa"};
		//driveOnComponent[] = {"wheel_l","wheel_r","wheel_tail"};
		//driveOnComponent[] = {};
		attenuationEffectType = "PlaneAttenuation";
		driverAction = "Plane_Fighter_03_pilot";
		//getInAction = "Pilot_Plane_Civil_01_Enter";
		//getOutAction = "pilot_plane_cas_02_Exit";
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoAction[] = {"Passenger_Plane_Civil_01_R"};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		
		driverLeftHandAnimName = "lever_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverLeftLegAnimName = "pedal_1";
		driverRightLegAnimName = "pedal_1";
		
		explosionShielding = 0.3;
		epeImpulseDamageCoef = 0.1;
		crewCrashProtection = 0.55;

		lightOnGear = 0;
		gearUpTime = 8.0;
		gearDownTime = 10.0;
		memoryPointLDust = "levy prach";
		memoryPointRDust = "pravy prach";
		leftDustEffect = "LDustEffects";
		rightDustEffect = "RDustEffects";
		memoryPointGun[] = {"Cannon_L_muzzle","Cannon_R_muzzle"};
		gunBeg[] = {"Cannon_L_muzzle","Cannon_R_muzzle"};
		gunEnd[] = {"Cannon_L_Chamber","Cannon_R_Chamber"};

		landingSpeed = 220;		/// used for AI to approach the runawy, the plane should be stable at this speed
		acceleration = 400; 	/// used for AI to plan the waypoints and accelerating, doesn't affect plane performance
		maxSpeed = 629;			/// maximal speed of the plane, affects even thrust and is base for both envelope and thrustCoef
		stallSpeed = 110;

		driveOnComponent[] = {"wheel_l","wheel_r","wheel_tail"};  /// array of components to be assigned special low-friction material (usually wheels)
		
		envelope[] = {0, 0.01, 1.4, 3.0, 3.2, 3.4, 3.5, 3.6, 3.6, 3.7, 3.7, 3.6, 1};
		thrustCoef[] = {1.56, 1.53, 1.49, 1.45, 1.4, 1.34, 1.28, 1.2, 1.11, 1, 0.82, 0.48, 0.1, 0, 0, 0};
		aileronSensitivity = 1.1;
		aileronCoef[] = {0, 0.6, 1, 1.1, 1.2, 1.3, 1.3};
		elevatorSensitivity = 1.65;
		elevatorCoef[] = {0, 0.15, 0.34, 0.4, 0.45, 0.49, 0.53, 0.57, 0.6, 0.61, 0.56};
		//elevatorCoef[]= {};
		rudderInfluence = 0.6691;
		aileronControlsSensitivityCoef = 4;
		elevatorControlsSensitivityCoef = 3;
		rudderControlsSensitivityCoef = 4;		
		rudderCoef[] = {0, 0.89, 1.5, 2.1, 2.5, 3, 3.6, 3.9, 4, 3.6, 1.8};
		flapsFrictionCoef = 0.8;	/// sets the effectivity of using flaps to increase drag/lift
		
		//rudderInfluence = 0.6691;		/// coefficient of rudder affecting steering of the plane
		//aileronSensitivity = 1.1;		/// coefficient of ailerons affecting twisting the plane
		//elevatorSensitivity = 1.25;	/// coefficient of elevators affecting changing of plane horizontal heading


		/// envelope defines lift produced by the shape of the plane according to current speed relative to maxSpeed
		/// the first element of the array is for zero speed, the last for 125 % of maxSpeed, the rest in between is evenly distributed
		/// there may be as many elements as you wish, using 13 should be preferred as it modulates the 10% increase with reasonable error
		//envelope[] = {0.0,0.15,2.5,4,5,5.83,6.0,5.85,5.5,4.8,3.6,1.8,0};
		
		/// angle of incidence - difference between forward and airfold chord line - def. val is 3*PI/180 (meaning three degrees)
		angleOfIndicence = 0.05235987;

		/// forces keeping plane aligned with its speed direction - the bigger force the better it changes the direction of flight
		/*draconicForceXCoef = 5;
		draconicForceYCoef = 1.0;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 0.15;
		draconicTorqueYCoef = 1.0;*/
		draconicForceXCoef = 14;
		draconicForceYCoef = 12;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = {14, 12, 11.2, 10.6, 9.9, 9.6, 9.7, 10.5, 11, 11.5, 12};
		draconicTorqueYCoef[] = {4.5, 4.1, 3.7, 3.3, 3, 2.7, 2.5, 2.3, 2.1, 1.9, 1.8};

		/// rudder, elevator, aileron, thrust effectiveness; if empty old settings is used
		// effectiveness according to current speed and maxSpeed ratio
		// last value goes for 150% of max speed
		//thrustCoef[]= {1.5, 1.2, 1.1, 1.0, 1.0, 1.0, 1.0, 0.9, 0.7, 0.5, 0.3, 0.1, 0.0, 0.0, 0.0, 0.0};
		//elevatorCoef[]= {}; //default value is 1
		//aileronCoef[]= {};  //default value is 1
		//rudderCoef[]= {};   //default value is fabs(speed.Z())*InvSqrt(Square(speed.X())+Square(speed.Z()));

		//! coefficient of player's controller sensitivity (does not affect AI)
		//elevatorControlsSensitivityCoef = 4;
		//aileronControlsSensitivityCoef = 4;
		//rudderControlsSensitivityCoef = 4;

		landingAoa = "rad 20"; 	/// what AoA is going the IA use to land the plane

		laserScanner = 0;		/// if the vehicle is able to see targets marked by laser marker
		irScanRangeMin = 0;		/// defines the range of IR sight of the vehicle
		irScanRangeMax = 1;		/// defines the range of IR sight of the vehicle
		irScanToEyeFactor = 0;		/// defines the effectivity of IR sight of the vehicle
		//gunAimDown = 0.029000;	/// adjusts the aiming of gun relative to the axis of model
		//headAimDown = 0.0000;	/// adjusts the view of pilot to have crosshair centred

		//memoryPointLRocket = "Rocket_1"; /// use this for simulating different rocked pods in case you don't want to mess with "maverick weapon" simulation
		//memoryPointRRocket = "Rocket_2"; /// it is used to alternate two points/pods of fire the missiles

		minFireTime = 30;			/// how long does the pilot fire at one target before switching to another one

		threat[] = {1, 1, 1};		/// multiplier of cost of the vehicle in eyes of soft, armoured and air enemies

		armor = 20;					/// just some protection against missiles, collisions and explosions
		damageResistance = 0.004;	/// for AI if it is worth to be shoot at
		//destrType = DestructWreck;	/// how does the vehicle behave while destroyed, this one changes to the Wreck lod of the model
		
		//Avionics
		//elevatorCoef[] = {0.6,0.9,0.5,0.4,0.35,0.3,0.3};// A-164 Wipeout
		/*draconicForceXCoef = 14;
		draconicForceYCoef = 12;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = {14, 12, 11.2, 10.6, 9.9, 9.6, 9.7, 10.5, 11, 11.5, 12};
		draconicTorqueYCoef[] = {4.5, 4.1, 3.7, 3.3, 3, 2.7, 2.5, 2.3, 2.1, 1.9, 1.8};
		envelope[] = {0.1,0.1,0.9,1.5,3.5,4.4,4.6,4.8,5,5.1,5.2,5.3,5.3,2.7};*/
		
		class Wheels
		{
			class Wheel_L
			{
				boneName = "Wheel_l";
				steering = 1;
				side = "left";
				center = "Wheel_l_center";
				boundary = "Wheel_l_rim";
				width = 0.16;
				mass = 150;
				MOI = 80;
				dampingRate = 0.05;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 3500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "Wheel_l_center";
				tireForceAppPointOffset = "Wheel_l_center";
				maxCompression = 0.15;
				maxDroop = 0.15;
				sprungMass = 1000;
				springStrength = 206600;
				springDamperRate = 155696;
				longitudinalStiffnessPerUnitGravity = 5000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class Wheel_R: Wheel_L
			{
				boneName = "Wheel_r";
				steering = 0;
				center = "Wheel_r_center";
				boundary = "Wheel_r_rim";
				width = 0.28;
				springDamperRate = 51221;
				sprungMass = 2134;
				springStrength = 1580200;
				suspForceAppPointOffset = "Wheel_r_center";
				tireForceAppPointOffset = "Wheel_r_center";
			};
			class Wheel_Tail: Wheel_R
			{
				MOI = 80;
				boneName = "Wheel_Tail";
				side = "right";
				center = "Wheel_tail_center";
				boundary = "Wheel_tail_rim";
				suspForceAppPointOffset = "Wheel_tail_center";
				tireForceAppPointOffset = "Wheel_tail_center";
			};
		};
		
		class Turrets{};	
		
		class ViewPilot: ViewPilot
		{
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 1.0;
			initAngleX = 0;
			minAngleX = -65;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minMoveX = -0.3;
			maxMoveX = 0.3;
			minMoveY = -0.025;
			maxMoveY = 0.05;
			minMoveZ = -0.2;
			maxMoveZ = 0.2;
		};

		weapons[] = {"FOW_4x127_MG", "FOW_2xANM2_20"};
		magazines[] = {"FOW_1600Rnd_127x99_mag_Tracer_Red","FOW_450Rnd_20mm_shells"};
		class HitPoints
		{
			class HitHull
			{
				name = "hull_hit";
				visual = "zbytek";
				armor = 30;
				radius = 0.01;
				minimalHit = 0.01;
				depends = "Total";
				explosionShielding = 1;
				//material = 51;
				passThrough = 1;
			};
			class HitGlass1
			{
				armor = 0.25;
				radius = 0.25;
				material = -1;
				passThrough = 0;
				name = "glass_hit";
				convexComponent = "glass";
				visual = "glass";
			};
			class HitFuel: HitHull
			{
				armor = 1;
				name = "fuel_hit";
				visual = "";
				radius = 0.25;
				minimalHit = 0.1;
			};
			class HitEngine: HitHull
			{
				armor = 0.25;
				explosionShielding = 1;
				name = "engine_hit";
				passThrough = 0;
				radius = 0.8;
				visual = "engine_hit";
				depends = "rotor_hit";
				minimalHit = 0.1;
				material = -1;
			};
			class HitRotor: HitEngine
			{
				armor = 0.25;
				explosionShielding = 1;
				name = "rotor_hit";
				radius = 0.13;
				visual = "";
				depends = "0";
			};
			/*class HitAmmo: HitHull
			{
				armor = 1;
				explosionShielding = 3;
				radius = 0.3;
				passThrough = 1;
				name = "ammo_hit";
				visual = "ammo_hit";
				convexComponent = "ammo_hit";
			};*/
			class HitAvionics: HitHull
			{
				armor = 1;
				name = "avionics_hit";
				visual = "";
				radius = 0.35;
				minimalHit = 0.05;
				passThrough = 0;
			};
			class HitLAileron: HitHull
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "aileron_L";
				passThrough = 0;
				visual = "aileron_L";
				radius = 0.4;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRAileron: HitLAileron
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "aileron_R";
				passThrough = 0;
				visual = "aileron_R";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitLCRudder: HitHull
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "rudder";
				visual = "rudder";
				radius = 0.3;
				minimalHit = 0.1;
				depends = "0";
				passThrough = 0;
			};
			class HitLCElevator: HitHull
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "elevator_L";
				passThrough = 0;
				visual = "elevator_L";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			class HitRElevator: HitLCElevator
			{
				armor = 3;
				explosionShielding = 2.8;
				name = "elevator_R";
				passThrough = 0;
				visual = "elevator_R";
				radius = 0.2;
				minimalHit = 0.1;
				depends = "0";
			};
			/*class HitWheel_L
			{
				name = "Wheel_L";
				visual = "wheel_L_hide";
				armor = 2;
				radius = 0.2;
				minimalHit = 0.01;
				explosionShielding = 2.8;
				passThrough = 0;
				depends = "0";
			};
			class HitWheel_R: HitWheel_L
			{
				name = "Wheel_R";
				visual = "wheel_R_hide";
			};*/
		};
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"fow\fow_air\data\glass.rvmat",
				"fow\fow_air\data\glass_damage.rvmat",
				"fow\fow_air\data\glass_destruct.rvmat",
				
				"fow\fow_air\data\glass_cockpit.rvmat",
				"fow\fow_air\data\glass_cockpit_damage.rvmat",
				"fow\fow_air\data\glass_cockpit_destruct.rvmat",
				
				"fow\fow_air\hellcat\data\wx_us_Hellcat.rvmat",
				"fow\fow_air\hellcat\data\wx_us_Hellcat_damage.rvmat",
				"fow\fow_air\hellcat\data\wx_us_Hellcat_destruct.rvmat"
			};
		};

		class AnimationSources
		{
			class wx_us_hellcat_6x50_muzzleflash
			{
				source = "reload";
				weapon = "FOW_6x127_MG";
			};
			class wx_us_hellcat_6x50_recoil
			{
				source = "reload";
				weapon = "FOW_6x127_MG";
			};
			class wx_us_hellcat_6x50_rot
			{
				source = "ammorandom";
				animPeriod = 0.0001;
				initPhase= 0;
				weapon = "FOW_6x127_MG";
			};
			class wx_us_hellcat_4x50_muzzleflash
			{
				source = "reload";
				weapon = "FOW_4x127_MG";
			};
			class wx_us_hellcat_4x50_recoil
			{
				source = "reload";
				weapon = "FOW_4x127_MG";
			};
			class wx_us_hellcat_4x50_rot
			{
				source = "ammorandom";
				animPeriod = 0.0001;
				initPhase= 0;
				weapon = "FOW_4x127_MG";
			};
			class wx_us_hellcat_2x20_muzzleflash
			{
				source = "reload";
				weapon = "FOW_2xANM2_20";
			};
			class wx_us_hellcat_2x20_recoil
			{
				source = "reload";
				weapon = "FOW_2xANM2_20";
			};
			class wx_us_hellcat_2x20_rot
			{
				source = "ammorandom";
				animPeriod = 0.0001;
				initPhase= 0;
				weapon = "FOW_2xANM2_20";
			};
			class canopy
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class wx_arrestorhook
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class HitWheel_L
			{
				source = "Hit";
				hitpoint = "HitWheel_L";
				raw = 1;
			};
			class HitWheel_R: HitWheel_L
			{
				hitpoint = "HitWheel_R";
			};			
		
		};
		actionBegin1 = "opencanopy";
		actionEnd1 = "closecanopy";
		actionBegin2 = "extend_ArrestorHook";
		actionEnd2 = "retract_ArrestorHook";
		class UserActions
		{
			class opencanopy
			{
				displayName = "Open canopy";
				position = "osa_canopy";
				radius = 5;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				condition = "this animationPhase ""Canopy"" < 0.5";
				statement = "this animate [""Canopy"", 1];";
			};
			class closecanopy
			{
				displayName = "Close canopy";
				position = "osa_canopy";
				radius = 5;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				condition = "this animationPhase ""Canopy"" >= 0.5 ";
				statement = "this animate [""Canopy"", 0];";
			};
			class extend_arrestorhook
			{
				showWindow = 0;
				priority = 5;
				displayName = "Deploy arrestor hook";
				position = "osa_canopy";
				radius = 2;
				onlyForPlayer = 1;
				condition = "this animationPhase ""wx_arrestorhook"" < 0.5";
				statement = "this animate [""wx_arrestorhook"", 1]; this animate [""wx_arrestorhook_extendbackwards"", 1];";
			};
			class retract_arrestorhook
			{
				showWindow = 0;
				priority = 5;
				displayName = "Retract arrestor hook";
				position = "osa_canopy";
				radius = 2;
				onlyForPlayer = 1;
				condition = "this animationPhase ""wx_arrestorhook"" >= 0.5";
				statement = "this animate [""wx_arrestorhook"", 0]; this animate [""wx_arrestorhook_extendbackwards"", 0];";
			};
/*
			class extend_arrestorhook
			{
				showWindow = 0;
				priority = 5;
				displayName = "Deploy arrestor hook";
				position = "osa_canopy";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""wx_arrestorhook"" < 0.5) && (this animationPhase ""wx_arrestorhook_extendbackwards"" < 0.5) && (alive this)";
				statement = "this animate [""wx_arrestorhook"", 1]; this animate [""wx_arrestorhook_extendbackwards"", 1]; if (!(isNil 'DIH_cv_fnc_aHook')) THEN {[this,player] call DIH_cv_fnc_aHook;};";
			};
			class retract_arrestorhook
			{
				showWindow = 0;
				priority = 5;
				displayName = "Retract arrestor hook";
				position = "osa_canopy";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""wx_arrestorhook"" >= 0.5) && (this animationPhase ""wx_arrestorhook_extendbackwards"" >= 0.5)";
				statement = "this animate [""wx_arrestorhook"", 0]; this animate [""wx_arrestorhook_extendbackwards"", 0]; if (!(isNil 'DIH_cv_fnc_aHook')) THEN {[this,player] call DIH_cv_fnc_aHook;};";
			};
*/
		};
		class Exhausts
		{
			class Exhaust_1
			{
				position = "exStart1";
				direction = "exEnd1";
				effect = "ExhaustsEffectPlaneSmall";
			};
			class Exhaust_2
			{
				position = "exStart2";
				direction = "exEnd2";
				effect = "ExhaustsEffectPlaneSmall";
			};
			class Exhaust_3
			{
				position = "exStart3";
				direction = "exEnd3";
				effect = "ExhaustsEffectPlaneSmall";
			};
			class Exhaust_4
			{
				position = "exStart4";
				direction = "exEnd4";
				effect = "ExhaustsEffectPlaneSmall";
			};
		};
		class WingVortices
		{
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_l_e";
			};
			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vapour_r_e";
			};
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "body_vapour_l_s";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "body_vapour_r_s";
			};
		};
		class MarkerLights {};
		soundDammage[] = {"", 0.562341, 1};
		soundLocked[] = {"", 0.562341, 1};
		soundIncommingMissile[] = {"", 0.562341, 1};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_01\gear_up", 0.794328, 1, 150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_01\gear_down", 0.794328, 1, 150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Up", 0.630957, 1, 100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_01\Flaps_Down", 0.630957, 1, 100};
		soundGetIn[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_door_close", 0.316228, 1};
		soundGetOut[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_door_open", 0.316228, 1, 40};
		soundEngineOnInt[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_start_int", 1, 1};
		soundEngineOnExt[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_start_ext", 1, 1, 600};
		soundEngineOffInt[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_stop_int", 1, 1};
		soundEngineOffExt[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_stop_ext", 1, 1, 600};
		class Sounds
		{
			class EngineMidhExt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_mid_ext", 1.77828, 1, 1800};
				frequency = "1.1 + rpm/3 + (thrust - 0.5)/6";
				volume = "camPos*(rpm factor[0.15, 0.3])*(rpm factor[1.0, 0.5])";
			};
			class EngineHighExt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_high_ext", 1.77828, 1.1, 2600};
				frequency = "1.4 + rpm/3 +(thrust - 0.5)/5";
				volume = "camPos*(rpm factor[0.6, 0.9])";
			};
			class ForsageExt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_prop_ext", 1.41254, 1.2, 200};
				frequency = "1 + (thrust - 0.5)/4";
				volume = "camPos*(thrust factor[0, 1.0])*(rpm factor[0.1,1])";
				cone[] = {1.14, 3.92, 2.5, 0.4};
			};
			class EngineMidhInt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_mid_int", 1.77828, 1, 1800};
				frequency = "1 + rpm/3 + (thrust - 0.5)/6";
				volume = "(1-camPos)*(rpm factor[0.15, 0.3])*(rpm factor[1.0, 0.8])";
			};
			class EngineHighInt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_high_int", 1.77828, 1.2, 2600};
				frequency = "0.8 + rpm/5 +(thrust - 0.5)/5";
				volume = "(1-camPos)*(rpm factor[0.4, 0.9])";
			};
			class ForsageInt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_prop_int", 1.41254, 1.2, 100};
				frequency = "1 + (thrust - 0.5)/4";
				volume = "(1-campos)*(thrust factor[0, 1.0])*(rpm factor[0.2,1])";
				cone[] = {1.14, 3.92, 2.5, 0.4};
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1.77828, 1, 100};
				frequency = 1;
				volume = "camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos) * rain * (speed factor[50, 0])";
			};
		};
		class TextureSources
		{
			class Teeth
			{
				displayName = "Teeth";
				author = "Bohemia Interactive";
				textures[] = {"\fow\fow_air\hellcat\data\wx_us_Hellcat_co.paa"};
				factions[] = {"CIV_F", "IND_C_F"};
			};
			class Death
			{
				displayName = "Death N Destruction";
				author = "Bohemia Interactive";
				textures[] = {"\fow\fow_air\hellcat\data\wx_us_Hellcat_death_co.paa"};
				factions[] = {"CIV_F", "IND_C_F"};
			};
			class Donald
			{
				displayName = "Donald Duck";
				author = "Bohemia Interactive";
				textures[] = {"\fow\fow_air\hellcat\data\wx_us_hellcat_donald_co.paa"};
				factions[] = {"CIV_F", "IND_C_F"};
			};
			class Sweet
			{
				displayName = "Sweet One";
				author = "Bohemia Interactive";
				textures[] = {"\fow\fow_air\hellcat\data\wx_us_hellcat_sweet_co.paa"};
				factions[] = {"CIV_F", "IND_C_F"};
			};
		};
		textureList[] = {"Teeth", 1, "Death", 1, "Donald", 1, "Sweet", 1};
	};
	class FOW_F6F: FOW_F6F_Base
	{
		displayName = "F6F Hellcat";
		scope = 2;
		weapons[] = {"FOW_6x127_MG"};
		magazines[] = {"FOW_2400Rnd_127x99_mag_Tracer_Red"};
		hiddenSelections[] = {"_SwapTex01","_BombCarry","_RocketRails","_2x20"};
	};
	class FOW_F6F_c: FOW_F6F_Base
	{
		displayName = "F6F Hellcat + cannons";
		scope = 2;
		weapons[] = {"FOW_4x127_MG", "FOW_2xANM2_20"};
		magazines[] = {"FOW_1600Rnd_127x99_mag_Tracer_Red","FOW_450Rnd_20mm_shells"};
		hiddenSelections[] = {"_SwapTex01","_BombCarry","_RocketRails"};
	};
	class FOW_F6F_death: FOW_F6F
	{
		displayName = "F6F Hellcat (Death & Destruction)";
		hiddenSelectionsTextures[] = {"\fow\fow_air\hellcat\data\wx_us_hellcat_death_co.paa"};
	};
	class FOW_F6F_c_death: FOW_F6F_c
	{
		displayName = "F6F Hellcat + cannons (Death & Destruction)";
		hiddenSelectionsTextures[] = {"\fow\fow_air\hellcat\data\wx_us_hellcat_death_co.paa"};
	};
	class WX_US_Hellcat_sweet: FOW_F6F
	{
		displayName = "F6F Hellcat (Sweet One)";
		hiddenSelectionsTextures[] = {"\fow\fow_air\hellcat\data\wx_us_hellcat_sweet_co.paa"};
	};
	class WX_US_Hellcat_c_sweet: FOW_F6F_c
	{
		displayName = "F6F Hellcat + cannons (Sweet One)";
		hiddenSelectionsTextures[] = {"\fow\fow_air\hellcat\data\wx_us_hellcat_sweet_co.paa"};
	};
	class WX_US_Hellcat_kick: FOW_F6F
	{
		displayName = "F6F Hellcat (Kick ass)";
		hiddenSelectionsTextures[] = {"\fow\fow_air\hellcat\data\wx_us_hellcat_donald_co.paa"};
	};
	class WX_US_Hellcat_c_kick: FOW_F6F_c
	{
		displayName = "F6F Hellcat + cannons (Kick ass)";
		hiddenSelectionsTextures[] = {"\fow\fow_air\hellcat\data\wx_us_hellcat_donald_co.paa"};
	};
	class FOW_F6F_FAA: FOW_F6F
	{
		faction = "FOW_UK_FAA";
		displayName = "F6F Hellcat";
		hiddenSelectionsTextures[] = {"\fow\fow_air\hellcat\data\len_faa_hellcat_01_co.paa"};
	};
	class FOW_F6F_c_FAA: FOW_F6F_c
	{
		faction = "FOW_UK_FAA";
		displayName = "F6F Hellcat + cannons";
		hiddenSelectionsTextures[] = {"\fow\fow_air\hellcat\data\len_faa_hellcat_01_co.paa"};
	};
	
	class FOW_A6M_White: FOW_F6F
	{
		faction = "FOW_IJNAS";
		side = 1;
		displayName = "A6M2b Zero (White)";
		model = "\fow\fow_air\zero\wx_zero.p3d";
		hiddenSelections[] = {"_swaptex01", "_FuelPod"};
		hiddenSelectionsTextures[] = {"\fow\fow_air\zero\data\wx_zero_silver_co.paa"};
		weapons[] = {"FOW_2x77_MG", "FOW_2xT99_20"};
		magazines[] = {"FOW_1000Rnd_77x56R_mag_Tracer_Yellow","FOW_120Rnd_20mm_shells"};
		memoryPointGun[] = {"MG_L_muzzle","MG_R_muzzle"};
		gunBeg[] = {"MG_L_muzzle","MG_R_muzzle"};
		gunEnd[] = {"MG_L_Chamber","MG_R_Chamber"};
		landingSpeed = 108;
		acceleration = 290;
		maxSpeed = 534;
		
		envelope[] = {0.1, 0.1, 0.9, 2.8, 3.5, 3.7, 3.8, 3.8, 3.6, 3.3, 2.7};
		elevatorCoef[] = {0.6, 0.9, 0.5, 0.4, 0.35, 0.3, 0.3};
		thrustCoef[] = {0.9, 0.8, 0.9, 1.3, 1.2, 1.2, 1.1, 1, 0.9, 0.2, 0.1, 0, 0};
		aileronCoef[] = {0.6, 1, 0.95, 0.9, 0.85, 0.8, 0.75};
		rudderCoef[] = {0.6, 1, 1, 0.9, 0.8, 0.7, 0.6};
		aileronSensitivity = 0.8;
		flapsFrictionCoef = 0.5;
		
		draconicForceXCoef = 2.5;
		draconicForceYCoef = 0.5;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 0.15;
		draconicTorqueYCoef = 2.0;
		maxOmega = 2000;
		class Wheels
		{
			class Wheel_L
			{
				boneName = "Wheel_l";
				steering = 1;
				side = "left";
				center = "Wheel_l_center";
				boundary = "Wheel_l_rim";
				width = 0.16;
				mass = 150;
				MOI = 20;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 1500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "Wheel_l_center";
				tireForceAppPointOffset = "Wheel_l_center";
				maxCompression = 0.15;
				maxDroop = 0.15;
				sprungMass = 5334;
				springStrength = 1200234;
				springDamperRate = 128025;
				longitudinalStiffnessPerUnitGravity = 5000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class Wheel_R: Wheel_L
			{
				boneName = "Wheel_r";
				steering = 0;
				center = "Wheel_r_center";
				boundary = "Wheel_r_rim";
				width = 0.28;
				springDamperRate = 51221;
				sprungMass = 2134;
				springStrength = 1580200;
				suspForceAppPointOffset = "Wheel_r_center";
				tireForceAppPointOffset = "Wheel_r_center";
			};
			class Wheel_Tail: Wheel_R
			{
				boneName = "Wheel_Tail";
				side = "right";
				center = "Wheel_tail_center";
				boundary = "Wheel_tail_rim";
				suspForceAppPointOffset = "Wheel_tail_center";
				tireForceAppPointOffset = "Wheel_tail_center";
			};
		};
		
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"fow\fow_air\data\glass.rvmat",
				"fow\fow_air\data\glass_damage.rvmat",
				"fow\fow_air\data\glass_destruct.rvmat",
				
				"fow\fow_air\data\glass_cockpit.rvmat",
				"fow\fow_air\data\glass_cockpit_damage.rvmat",
				"fow\fow_air\data\glass_cockpit_destruct.rvmat",
				
				"fow\fow_air\zero\data\wx_zero.rvmat",
				"fow\fow_air\zero\data\wx_zero_damage.rvmat",
				"fow\fow_air\zero\data\wx_zero_destruct.rvmat"
			};
		};
		
		class AnimationSources
		{
			class wx_zero_cannon_muzzleflash
			{
				source = "reload";
				weapon = "FOW_2xT99_20";
			};
			class wx_zero_cannon_recoil
			{
				source = "reload";
				weapon = "FOW_2xT99_20";
			};
			class wx_zero_cannon_rot
			{
				source = "ammorandom";
				animPeriod = 0.0001;
				initPhase= 0;
				weapon = "FOW_2xT99_20";
			};
			class wx_zero_mg_muzzleflash
			{
				source = "reload";
				weapon = "FOW_2x77_MG";
			};
			class wx_zero_mg_recoil
			{
				source = "reload";
				weapon = "FOW_2x77_MG";
			};
			class wx_zero_mg_rot
			{
				source = "ammorandom";
				animPeriod = 0.0001;
				initPhase= 0;
				weapon = "FOW_2x77_MG";
			};
			class canopy
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class wx_arrestorhook
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
		};
		soundEngineOnInt[] = {"fow\fow_air\zero\sounds\Start_Int", 1, 1};
		soundEngineOnExt[] = {"fow\fow_air\zero\sounds\Start_Out", 1, 1, 600};
		soundEngineOffInt[] = {"fow\fow_air\zero\sounds\Stop_Int", 1, 1};
		soundEngineOffExt[] = {"fow\fow_air\zero\sounds\Stop_Out", 1, 1, 600};
		class Sounds
		{
			class EngineLowExt
			{
				sound[] = {"fow\fow_air\zero\sounds\Low_Int", 1.77828, 1, 1800};
				frequency = "1.1 + rpm/3 + (thrust - 0.5)/6";
				volume = "camPos*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighExt
			{
				sound[] = {"fow\fow_air\zero\sounds\High_Out", 1.77828, 1.1, 2600};
				frequency = "1.4 + rpm/3 +(thrust - 0.5)/5";
				volume = "camPos*(rpm factor[0.2, 1.0])";
			};
			class ForsageExt
			{
				sound[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_prop_ext", 1.41254, 1.2, 200};
				frequency = "1 + (thrust - 0.5)/4";
				volume = "camPos*(thrust factor[0, 1.0])*(rpm factor[0.1,1])";
				cone[] = {1.14, 3.92, 2.5, 0.4};
			};
			class EngineLowInt
			{
				sound[] = {"fow\fow_air\zero\sounds\Low_Int", 1.77828, 1, 1800};
				frequency = "1 + rpm/3 + (thrust - 0.5)/6";
				volume = "(1-camPos)*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighInt
			{
				sound[] = {"fow\fow_air\zero\sounds\High_Int", 1.77828, 1.2, 2600};
				frequency = "0.8 + rpm/5 +(thrust - 0.5)/5";
				volume = "(1-camPos)*(rpm factor[0.2, 1.0])";
			};
			class ForsageInt
			{
				sound[] = {"fow\fow_air\zero\sounds\Forsage_Int", 1.41254, 1.2, 100};
				frequency = "1 + (thrust - 0.5)/4";
				volume = "engineOn*(1-camPos)*(thrust factor[0.6, 1.0])";
				cone[] = {1.14, 3.92, 2.5, 0.4};
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", 1.77828, 1, 100};
				frequency = 1;
				volume = "camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", 1, 1, 100};
				frequency = 1;
				volume = "(1-camPos) * rain * (speed factor[50, 0])";
			};
		};
	};
	class FOW_A6M_Green: FOW_A6M_White
	{
		displayName = "A6M2 Zero (Green)";
		hiddenSelectionsTextures[] = {"\fow\fow_air\zero\data\wx_zero_green_co.paa"};
	};

/*
	class FOW_F6F_b: FOW_F6F
	{
		displayName = "F6F HellCat + 114kg bombs";
		scope = 2;
		weapons[] = {"FOW_6x127_MG","WX_US_bomblauncher"};
		magazines[] = {"FOW_2400Rnd_127x99_mag_Tracer_Red","WX_US_Rocketx6","WX_US_002Rnd_114Kg"};
		hiddenSelections[] = {"_SwapTex01","_RocketRails","_2x20","_Rockets"};
	};
	class FOW_F6F_r: FOW_F6F_b
	{
		displayName = "F6F HellCat + rockets";
		weapons[] = {"FOW_6x127_MG","WX_US_Rocketlauncher"};
		magazines[] = {"FOW_2400Rnd_127x99_mag_Tracer_Red","WX_US_Rocketx6","WX_airMagEmpty","WX_airMagEmpty"};
		hiddenSelections[] = {"_SwapTex01","_BombCarry","_2x20"};
	};
*/
	