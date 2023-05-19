		soundGetIn[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F_EPB\Tracked\noises\get_in_out",0.56234133,1,20};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_start",0.63095737,1.0};
		soundEngineOnExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_start",0.7943282,1.0,200};
		soundEngineOffInt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_int_stop",0.63095737,1.0};
		soundEngineOffExt[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\epb_1_ext_stop",0.7943282,1.0,200};
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
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_1",0.7943282,1,200};
				frequency = "0.95	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_2",0.8912509,1,240};
				frequency = "0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_3",1.1220185,1,280};
				frequency = "0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_4",1.2589254,1,320};
				frequency = "0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_5",1.4125376,1,360};
				frequency = "0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_6",1.5848932,1,400};
				frequency = "0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*camPos*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_ext_7",1.7782794,1,440};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_1",1.1220185,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_2",1.4125376,1,200};
				frequency = "0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_3",1.7782794,1,230};
				frequency = "0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_4",1.9952624,1,290};
				frequency = "0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_5",1.7782794,1,350};
				frequency = "0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_6",2.2387211,1,400};
				frequency = "0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_ext_7",2.5118864,1,450};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_1",0.5011872,1};
				frequency = "0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_2",0.3548134,1};
				frequency = "0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_3",0.39810717,1};
				frequency = "0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_4",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_5",0.5011872,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_6",0.56234133,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\engine_epb_1_int_7",0.63095737,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_1",0.63095737,1};
				frequency = "0.8	+	((rpm/	2300) factor[(400/	2300),(750/	2300)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(100/	2300),(200/	2300)])	*	((rpm/	2300) factor[(760/	2300),(600/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_2",0.39810717,1};
				frequency = "0.8	+	((rpm/	2300) factor[(620/	2300),(910/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(620/	2300),(750/	2300)])	*	((rpm/	2300) factor[(920/	2300),(800/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_3",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(800/	2300),(1150/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(900/	2300)])	*	((rpm/	2300) factor[(1150/	2300),(960/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_4",0.4466836,1};
				frequency = "0.8	+	((rpm/	2300) factor[(960/	2300),(1500/	2300)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(950/	2300),(1100/	2300)])	*	((rpm/	2300) factor[(1500/	2300),(1250/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_5",0.5011872,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1200/	2300),(1700/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1250/	2300),(1450/	2300)])	*	((rpm/	2300) factor[(1700/	2300),(1560/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_6",0.56234133,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1520/	2300),(2000/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1570/	2300),(1670/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1800/	2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\engines\engine1\exhaust_epb_1_int_7",0.63095737,1};
				frequency = "0.8	+	((rpm/	2300) factor[(1800/	2300),(2300/	2300)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1850/	2300),(1950/	2300)])";
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
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",0.39810717,1.0,140};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",0.4466836,1.0,160};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",0.5011872,1.0,180};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",0.56234133,1.0,200};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",0.56234133,1.0,220};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsOutS0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_1",0.31622776,1.0,120};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_2",0.3548134,1.0,140};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_3",0.39810717,1.0,160};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_4",0.4466836,1.0,180};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_ext_5",0.5011872,1.0,200};
				frequency = "1";
				volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInH0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",0.25118864,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInH1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",0.2818383,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInH2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInH3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",0.3548134,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInH4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
			class ThreadsInS0
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_1",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-0) max 0)/	55),(((-5) max 5)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-12) max 12)/	55),(((-8) max 8)/	55)]))";
			};
			class ThreadsInS1
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_2",0.31622776,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-10) max 10)/	55),(((-12) max 12)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-23) max 23)/	55),(((-16) max 16)/	55)]))";
			};
			class ThreadsInS2
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_3",0.3548134,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-20) max 20)/	55),(((-22) max 22)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-35) max 35)/	55),(((-28) max 28)/	55)]))";
			};
			class ThreadsInS3
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_4",0.3548134,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/	55) factor[(((-30) max 30)/	55),(((-34) max 34)/	55)])	*	((((-speed*3.6) max speed*3.6)/	55) factor[(((-42) max 42)/	55),(((-36) max 36)/	55)]))";
			};
			class ThreadsInS4
			{
				sound[] = {"A3\Sounds_F_EPB\Tracked\treads\treads_EPB_v2_int_5",0.39810717,1.0};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/	55) factor[(((-39) max 39)/	55),(((-42) max 42)/	55)])";
			};
		};
		

		/*
		class SoundEvents
		{
			class AccelerationIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext-tank-diesel-acceleration-1",1.77828,20};
				limit = "0.15";
				expression = "engineOn*(1-camPos)*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
			class AccelerationOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext-tank-diesel-acceleration-1",1.77828,1,35};
				limit = "0.15";
				expression = "engineOn*camPos*2*gmeterZ*((speed factor[1.5, 5]) min (speed factor[5, 1.5]))";
			};
		};
		class Sounds
		{
			class Engine
			{
				sound[] = {"\wx_us_m4a2\Sound\Sherman_Engine04",2.2,1,1000};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*camPos*(rpm factor[0.4, 0.9])";
			};
			class IdleOut
			{
				sound[] = {"\wx_us_m4a2\Sound\Sherman_EngineIdle02",0.4,1,400};
				frequency = "1";
				volume = "engineOn*camPos*(rpm factor[0.6, 0.15])";
			};
			class NoiseOut
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\ext\noise2",1,1,100};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsOutH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_01",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_02",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_03",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_04",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_hard_05",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsOutS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_01",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsOutS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_02",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsOutS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_03",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsOutS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_04",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsOutS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\ext\ext_diesel_treads_soft_05",1,1,150};
				frequency = "1";
				volume = "engineOn*camPos*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class Movement
			{
				sound[] = {"",1,1};
				frequency = "0";
				volume = "0";
			};
			class EngineIn
			{
				sound[] = {"\wx_us_m4a2\Sound\Sherman_Engine04_in",1,1};
				frequency = "(randomizer*0.05+0.8)*rpm";
				volume = "engineOn*(1-camPos)*(rpm factor[0.4, 1])";
			};
			class IdleIn
			{
				sound[] = {"\wx_us_m4a2\Sound\Sherman_EngineIdle02_in",0.2,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(rpm factor[0.6, 0.15])";
			};
			class NoiseIn
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\Other\int\noise2",0.158489,1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class ThreadsInH0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_01",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInH1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_02",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInH2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_03",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInH3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_04",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInH4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_hard_05",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*(1-grass)*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
			class ThreadsInS0
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_01",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.3, 0.6]) min (rpm factor[0.6, 0.3]))";
			};
			class ThreadsInS1
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_02",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.5, 0.8]) min (rpm factor[0.8, 0.5]))";
			};
			class ThreadsInS2
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_03",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.65, 0.9]) min (rpm factor[0.9, 0.65]))";
			};
			class ThreadsInS3
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_04",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[0.8, 1.2]) min (rpm factor[1.2, 0.8]))";
			};
			class ThreadsInS4
			{
				sound[] = {"ca\sounds\Vehicles\Tracked\T72\int\int_diesel_treads_soft_05",1,1};
				frequency = "1";
				volume = "engineOn*(1-camPos)*grass*((rpm factor[1, 2.0]) min (rpm factor[2.0, 1]))";
			};
		};
		*/