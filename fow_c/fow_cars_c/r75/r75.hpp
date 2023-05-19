	
	class fow_v_r75: Car_F
	{
		side = 1;
		scope = 2;
		displayName = "BMW R75";
		model = "fow\fow_cars\r75\r75";
		//icon = "fow\fow_cars\willys\data\ui\willys_ui_ca.paa";
		//picture = "fow\fow_cars\willys\data\ui\willys_ca.paa";
		faction = "fow_heer";
		
		editorSubcategory = "fow_wheeled";
		
		crew = "fow_s_ger_heer_rifleman";
		
		//hiddenSelections[] = {"camo"};
		//hiddenSelectionsTextures[] = {"\fow\fow_cars\willys\data\fow_us_willysjeep_co.paa"};

		terrainCoef 	= 6.5; 	/// different surface affects this car more, stick to tarmac
		turnCoef 		= 2.5; 	/// should match the wheel turn radius
		precision 		= 10; 	/// how much freedom has the AI for its internal waypoints - lower number means more precise but slower approach to way
		brakeDistance 	= 3.0; 	/// how many internal waypoints should the AI plan braking in advance
		acceleration 	= 15; 	/// how fast acceleration does the AI think the car has

		fireResistance 	= 5; 	/// lesser protection against fire than tanks
		armor 			= 50; 	/// just some protection against missiles, collisions and explosions
		cost			= 50000; /// how likely is the enemy going to target this vehicle

		transportMaxBackpacks 	= 3; /// just some backpacks fit the trunk by default
		transportSoldier 		= 0; /// number of cargo except driver
		cargoProxyIndexes[] = {};
		/// some values from parent class to show how to set them up
		wheelDamageRadiusCoef 	= 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		maxFordingDepth 		= 0.5;			/// how high water would damage the engine of the car
		waterResistance 		= 1;			/// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
		crewCrashProtection		= 0.25;			/// multiplier of damage to crew of the vehicle => low number means better protection
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

		driverAction 		= "driver_offroad01"; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		cargoAction[] 		= {"passenger_low01", "passenger_generic01_leanleft", "passenger_generic01_foldhands"}; /// the same of all the crew
		getInAction 		= "GetInLow"; 		/// how does driver look while getting in
		getOutAction 		= "GetOutLow"; 		/// and out
		cargoGetInAction[] 	= {"GetInLow"}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {"GetOutLow"}; 	/// that means all use the same in this case

		#include "physx.hpp"

		#include "sounds.hpp"
	
		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			turnIncreaseConst 	= 0.3; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear = 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime 	= 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			turnDecreaseConst 	= 5.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear = 3.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime 	= 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			maxTurnHundred 	= 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};		

		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				passThrough = 0;
				radius = 0.25;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				passThrough = 0;
				radius = 0.25;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				passThrough = 0;
				radius = 0.25;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				passThrough = 0;
				radius = 0.25;
			};
			class HitFuel: HitFuel
			{
				name = "palivo";
				armor = 2;
				radius = 0.5;
			};
			class HitEngine: HitEngine
			{
				name = "motor";
				armor = 4;
				radius = 0.25;
			};
			class HitBody: HitBody
			{
				visual = "camo";
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.25;
			};
		};
		
		memoryPointTrackFLL = "TrackFLL";
		// front left track, right offset
		memoryPointTrackFLR = "TrackFLR";
		// back left track, left offset
		memoryPointTrackBLL = "TrackBLL";
		// back left track, right offset
		memoryPointTrackBLR = "TrackBLR";
		// front right track, left offset
		memoryPointTrackFRL = "";
		// front right track, right offset
		memoryPointTrackFRR = "";
		// back right track, left offset
		memoryPointTrackBRL = "TrackBRL";
		// back right track, right offset
		memoryPointTrackBRR = "TrackBRR";		
		
		/*class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"fow\fow_cars\willys\data\fow_us_WillysJeep.rvmat",
				"fow\fow_cars\willys\data\fow_us_WillysJeep.rvmat",
				"fow\fow_cars\willys\data\fow_us_WillysJeep_destruct.rvmat"
			};
		};*/		

		class Exhausts 
		{
			class Exhaust1 
			{
				position = "vyfuk start";
				direction = "vyfuk konec";
				effect = "ExhaustsEffectBig";
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		class Reflectors	/// only front lights are considered to be reflectors to save CPU
		{
			class LightCarHeadL01 	/// lights on each side consist of two bulbs with different flares
			{
				color[] 		= {1900, 1800, 1700};		/// approximate colour of standard lights
				ambient[]		= {5, 5, 5};				/// nearly a white one
				position 		= "LightCarHeadL01";		/// memory point for start of the light and flare
				direction 		= "LightCarHeadL01_end";	/// memory point for the light direction
				hitpoint 		= "Light_L";				/// point(s) in hitpoint lod for the light (hitPoints are created by engine)
				selection 		= "Light_L";				/// selection for artificial glow around the bulb, not much used any more
				size 			= 1;						/// size of the light point seen from distance
				innerAngle 		= 100;						/// angle of full light
				outerAngle 		= 179;						/// angle of some light
				coneFadeCoef 	= 10;						/// attenuation of light between the above angles
				intensity 		= 1;						/// strength of the light
				useFlare 		= true;						/// does the light use flare?
				dayLight 		= false;					/// switching light off during day saves CPU a lot
				flareSize 		= 1.0;						/// how big is the flare

				class Attenuation
				{
					start 			= 1.0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 30;		/// it is good to have some limit otherwise the light would shine to infinite distance
					hardLimitEnd 	= 60;		/// this allows adding more lights into scene
				};
			};

			class LightCarHeadR01: LightCarHeadL01
			{
				position 	= "LightCarHeadR01";
				direction 	= "LightCarHeadR01_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};

		};

		aggregateReflectors[] = {{"LightCarHeadL01"}, {"LightCarHeadR01"}}; /// aggregating reflectors helps the engine a lot

	};
	