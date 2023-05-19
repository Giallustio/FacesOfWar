		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getin",0.562341,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\getout",0.562341,1,40};
		soundDammage[] = {"",0.562341,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_start",0.354813,1};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_start",0.707946,1,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_stop",0.354813,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_stop",0.707946,1,200};
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_idle",0.398107,1,150};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low1",0.446684,1,250};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_low2",0.562341,1,300};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_mid",0.707946,1,350};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_high",1,1,400};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*camPos*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_idle",0.562341,1,200};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low1",0.707946,1,350};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_low2",0.891251,1,400};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_mid",1.12202,1,425};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_ext_exhaust_high",1.25893,1,450};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_idle",0.251189,1};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low1",0.316228,1};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_low2",0.398107,1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_mid",0.501187,1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_high",0.630957,1};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_idle",0.354813,1};
				frequency = "0.95	+	((rpm/	4500) factor[(800/	4500),(1400/	4500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(600/	4500),(1100/	4500)])	*	((rpm/	4500) factor[(1800/	4500),(1300/	4500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low1",0.446684,1};
				frequency = "0.9	+	((rpm/	4500) factor[(1400/	4500),(2100/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1400/	4500),(1800/	4500)])	*	((rpm/	4500) factor[(2300/	4500),(2000/	4500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_low2",0.562341,1};
				frequency = "0.9	+		((rpm/	4500) factor[(2100/	4500),(2800/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(1900/	4500),(2300/	4500)])	*	((rpm/	4500) factor[(3000/	4500),(2500/	4500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_mid",0.707946,1};
				frequency = "0.9	+	((rpm/	4500) factor[(2800/	4500),(3600/	4500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	4500) factor[(2500/	4500),(3100/	4500)])	*	((rpm/	4500) factor[(4500/	4500),(3700/	4500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\MRAP_01\MRAP_01_int_exhaust_high",0.794328,1};
				frequency = "0.95	+	((rpm/	4500) factor[(3600/	4500),(4500/	4500)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	4500) factor[(3800/	4500),(4500/	4500)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.41254,1,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.41254,1,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.25893,1,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.12202,1,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.25893,1,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.12202,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.12202,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.707946,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.562341,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.707946,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.707946,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.707946,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.707946,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.707946,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.707946,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.630957,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.630957,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.630957,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.630957,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.630957,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.630957,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.630957,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.630957,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
		};
