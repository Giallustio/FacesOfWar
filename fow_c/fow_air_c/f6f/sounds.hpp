		soundGetIn[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_door_close", 0.316228, 1};
		soundGetOut[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_door_open", 0.316228, 1, 40};
		soundDammage[]={"", db-5, 1};
		soundEngineOnInt[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_start_int", 1, 1};
		soundEngineOnExt[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_start_ext", 1, 1, 600};
		soundEngineOffInt[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_stop_int", 1, 1};
		soundEngineOffExt[] = {"A3\Sounds_F_Exp\vehicles\air\Plane_Civil_01\BTT_engine_stop_ext", 1, 1, 600};
		soundLocked[] = {"", 0.562341, 1};
		soundIncommingMissile[] = {"", 0.562341, 1};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_02\gear_up", db-2, 1.0, 150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_02\gear_down", db-2, 1.0, 150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Up", db-4, 1.0, 100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Down", db-4, 1.0, 100};

	/*	EXTERNAL SOUNDS */
		class scrubLandInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", db0, 1.0, 100};
			frequency = 1;
			volume = "(scrubLand factor[0.01, 0.20])";
		};

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