soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.56234133,1,20};
		soundTurnIn[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnOut[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnInInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundTurnOutInternal[] = {"A3\Sounds_F\vehicles\noises\Turn_in_out",1.7782794,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_start",0.39810717,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_start",0.56234133,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop",0.39810717,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop",0.56234133,1.0,200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",0.17782794,1,100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",0.17782794,1,100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",0.17782794,1,100};
		soundBushCrash[] = {"soundBushCollision1",0.33,"soundBushCollision2",0.33,"soundBushCollision3",0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",1.0,1,100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",1.0,1,100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",1.0,1,100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",1.0,1,100};
		soundCrashes[] = {"soundGeneralCollision1",0.25,"soundGeneralCollision2",0.25,"soundGeneralCollision3",0.25,"soundGeneralCollision4",0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",1.0,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",1.0,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",1.0,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",1.0,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",1.0,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",1.0,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",1.0,1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",1.0,1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",1.0,1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_01",0.3548134,1,200};
				frequency = "0.95	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_02",0.39810717,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_03",0.4466836,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_06",0.5011872,1,250};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_07",0.56234133,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_08",0.63095737,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_10",0.70794576,1,300};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_01",0.56234133,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_02",0.63095737,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03",0.63095737,1,230};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_06",0.70794576,1,250};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_07",0.70794576,1,350};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_08",1.0,1,350};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_10",1.1220185,1,400};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_01",0.31622776,1};
				frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_02",0.3548134,1};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_03",0.39810717,1};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_06",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_07",0.5011872,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_08",0.56234133,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_10",0.63095737,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_01",0.3548134,1};
				frequency = "0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_02",0.39810717,1};
				frequency = "0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_06",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_07",0.5011872,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_08",0.56234133,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_10",0.63095737,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.63095737,1.0,150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",1.5848932,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5011872,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",1.0,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.2, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.2, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",1.0,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1.0,1.0,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};