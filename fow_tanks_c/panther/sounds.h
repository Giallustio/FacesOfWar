	
		soundGear[] = {"",5.62341e-005,1};
		soundGetIn[] = {"\fow\fow_tanks\m4a2\Sound\Get_In",0.562341,1};
		soundGetOut[] = {"\fow\fow_tanks\m4a2\Sound\Get_Out",0.562341,1,35};
		soundEngineOnInt[] = {"\fow\fow_tanks\m4a2\Sound\Engine_On",1,1};
		soundEngineOnExt[] = {"\fow\fow_tanks\m4a2\Sound\Engine_On",2.51189,1,35};
		soundEngineOffInt[] = {"\fow\fow_tanks\m4a2\Sound\Engine_Off",1,1};
		soundEngineOffExt[] = {"\fow\fow_tanks\m4a2\Sound\Engine_Off",1,0.8,35};
		buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01", 1.0, 1, 200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166, "woodCrash4", 0.166, "woodCrash5", 0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08", 1.0, 1, 200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09", 1.0, 1, 200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10", 1.0, 1, 200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11", 1.0, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};


/*
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"fow\fow_tanks\m4a2\Sound\ext-tank-diesel-acceleration-1",1.77828,20};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"fow\fow_tanks\m4a2\Sound\ext-tank-diesel-acceleration-1",1.77828,1,35};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
*/
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_1",0.7943282,1,200};
				frequency = "0.95	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class Engine
			{
				sound[] = {"fow\fow_tanks\m4a2\Sound\Sherman_Engine04",0.8912509,1,240};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_3",1.1220185,1,280};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_4",1.2589254,1,320};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_5",1.4125376,1,360};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_6",1.5848932,1,400};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_ext_7",1.7782794,1,440};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*camPos*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_1",1.1220185,1,200};
				frequency = "0.8	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_2",1.4125376,1,200};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_3",1.7782794,1,230};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_4",1.9952624,1,290};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_5",1.7782794,1,350};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_6",2.2387211,1,400};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_ext_7",2.5118864,1,450};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_1",0.5011872,1};
				frequency = "0.8	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_2",0.3548134,1};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_3",0.39810717,1};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_4",0.4466836,1};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_5",0.5011872,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_6",0.56234133,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\engine_epb_2_int_7",0.63095737,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_1",0.63095737,1};
				frequency = "0.8	+	((rpm/	2600) factor[(400/	2600),(750/	2600)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(100/	2600),(200/	2600)])	*	((rpm/	2600) factor[(850/	2600),(700/	2600)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_2",0.39810717,1};
				frequency = "0.8	+	((rpm/	2600) factor[(620/	2600),(910/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(720/	2600),(790/	2600)])	*	((rpm/	2600) factor[(950/	2600),(850/	2600)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_3",0.4466836,1};
				frequency = "0.8	+	((rpm/	2600) factor[(800/	2600),(1150/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(830/	2600),(940/	2600)])	*	((rpm/	2600) factor[(1200/	2600),(1000/	2600)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_4",0.4466836,1};
				frequency = "0.8	+	((rpm/	2600) factor[(960/	2600),(1500/	2600)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(950/	2600),(1100/	2600)])	*	((rpm/	2600) factor[(1500/	2600),(1250/	2600)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_5",0.5011872,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1200/	2600),(1700/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1250/	2600),(1450/	2600)])	*	((rpm/	2600) factor[(1700/	2600),(1560/	2600)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_6",0.56234133,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1520/	2600),(2000/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2600) factor[(1570/	2600),(1670/	2600)])	*	((rpm/	2600) factor[(2200/	2600),(1900/	2600)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine2\exhaust_epb_2_int_7",0.63095737,1};
				frequency = "0.8	+	((rpm/	2600) factor[(1800/	2600),(2300/	2600)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2600) factor[(1950/	2600),(2170/	2600)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_int_1",0.5011872,1.0};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\noises\noise_tank_ext_1",0.8912509,1.0,50};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_1",0.39810717,1.0,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_2",0.4466836,1.0,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_3",0.5011872,1.0,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_4",0.56234133,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_5",0.56234133,1.0,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_1",0.31622776,1.0,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_2",0.3548134,1.0,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_3",0.39810717,1.0,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_4",0.4466836,1.0,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_ext_5",0.5011872,1.0,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_1",0.25118864,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_2",0.2818383,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_3",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_4",0.3548134,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_5",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_1",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-0) max 0)/	65),(((-5) max 5)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-15) max 15)/	65),(((-10) max 10)/	65)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_2",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-11) max 11)/	65),(((-15) max 15)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-25) max 25)/	65),(((-20) max 20)/	65)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_3",0.3548134,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-21) max 21)/	65),(((-25) max 25)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-35) max 35)/	65),(((-30) max 30)/	65)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_4",0.3548134,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	65) factor[(((-31) max 31)/	65),(((-35) max 35)/	65)])	*	((((-speed*3.6) max speed*3.6)/	65) factor[(((-45) max 45)/	65),(((-40) max 40)/	65)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v1_int_5",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	65) factor[(((-41) max 41)/	65),(((-50) max 50)/	65)])";
			};
		};