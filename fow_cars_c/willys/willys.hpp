	
	class fow_willys: Car_F
	{
		side = 2;
		scope = 1;
		displayName = "Willys Jeep";
		model = "fow\fow_cars\willys\fow_us_willys";
		icon = "fow\fow_cars\willys\data\ui\willys_ui_ca.paa";
		picture = "fow\fow_cars\willys\data\ui\willys_ca.paa";
		faction = "fow_usa";
		
		editorSubcategory = "fow_wheeled";
		
		crew = "fow_s_us_rifleman";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_cars\willys\data\fow_us_willysjeep_co.paa"};

		attenuationEffectType = "OpenCarAttenuation";

		terrainCoef 	= 1.5; 	/// different surface affects this car more, stick to tarmac
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
		driverRightHandAnimName = "";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

		driverAction 		= "fow_kubel_driver"; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
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
		memoryPointTrackFRL = "TrackFRL";
		// front right track, right offset
		memoryPointTrackFRR = "TrackFRR";
		// back right track, left offset
		memoryPointTrackBRL = "TrackBRL";
		// back right track, right offset
		memoryPointTrackBRR = "TrackBRR";		
		
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"fow\fow_cars\willys\data\fow_glass01.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat",
				
				"fow\fow_cars\willys\data\fow_us_WillysJeep.rvmat",
				"fow\fow_cars\willys\data\fow_us_WillysJeep_damage.rvmat",
				"fow\fow_cars\willys\data\fow_us_WillysJeep_destruct.rvmat"
			};
		};		

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

		class AnimationSources: AnimationSources
		{
			class windshield
			{
				source = "door";
				animPeriod = 1;
				initPhase=0;
			};
		};

		//actionBegin1 = "Lower_Windshield";
		//actionEnd1 = "PutUp_Windshield";

		class UserActions
		{
			class Lower_Windshield
			{
				showWindow = 0;
				priority = 1.5;
				displayName = "Lower Windshield";
				position = "windshield_axis";
				radius = 1.5;
				onlyForPlayer = 1;
				condition = "(this doorPhase ""windshield"" < 0.5) && (alive this) && (player isEqualTo driver this || player isEqualto (this turretunit [0]))";
				statement = "this animateDoor [""windshield"", 1]";
			};
			class PutUp_Windshield: Lower_Windshield
			{
				displayName = "Put up Windshield";
				position = "windshield_axis";
				condition = "(this doorPhase ""windshield"" > 0.5) && (alive this) && (player isEqualTo driver this || player isEqualto (this turretunit [0]))";
				statement = "this animateDoor [""windshield"", 0]";
			};
		};
		class CargoTurret;
		class Turrets: Turrets 
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerGetInAction = "GetInOffroadBack";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos cargo F";
				memoryPointsGetInGunnerDir = "pos cargo F dir";
				gunnerName = "Passenger (Front Seat)";
				gunnerCompartments = "Compartment2";
				proxyIndex = 1;
				maxElev = 55;
				minElev = -45;
				maxTurn = 30;
				minTurn = -80;
				isPersonTurret = 1;
				ejectDeadGunner	= 0;
				enabledByAnimationSource = "windshield";
				class dynamicViewLimits	{};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger (Back Right)";
				memoryPointsGetInGunner = "pos cargo BR";
				memoryPointsGetInGunnerDir = "pos cargo BR dir";
				proxyIndex = 2;
				maxTurn = 105;
				minTurn = -80;
				minElev = -45;
				enabledByAnimationSource = "";
				class dynamicViewLimits
				{
					CargoTurret_03[] = {40,40};
					CargoTurret_04[] = {40,40};
				};
			};
			class CargoTurret_03: CargoTurret_02
			{
				gunnerName = "Passenger (Back Left)";
				memoryPointsGetInGunner = "pos cargo BL";
				memoryPointsGetInGunnerDir = "pos cargo BL dir";
				proxyIndex = 3;
				maxTurn = 80;
				minTurn = -80;
				minElev = -45;
				class dynamicViewLimits
				{
					CargoTurret_02[] = {40,40};
					CargoTurret_05[] = {40,40};
				};
			};
			class CargoTurret_04: CargoTurret_02
			{
				gunnerName = "Passenger (Right)";
				memoryPointsGetInGunner = "pos cargo R";
				memoryPointsGetInGunnerDir = "pos cargo R dir";
				proxyIndex = 4;
				maxTurn = 80;
				minTurn = -80;
				minElev = -45;
				class dynamicViewLimits
				{

				};
			};
			class CargoTurret_05: CargoTurret_02
			{
				gunnerName = "Passenger (Left)";
				memoryPointsGetInGunner = "pos cargo L";
				memoryPointsGetInGunnerDir = "pos cargo L dir";
				proxyIndex = 5;
				maxTurn = 80;
				minTurn = -80;
				minElev = -45;
				class dynamicViewLimits
				{

				};
			};
		};
	};
	
	class fow_v_willys_usa: fow_willys {
		scope = 2;
		faction = "fow_usa";
		crew = "fow_s_us_rifleman";		
	};
	class fow_v_willys_usmc: fow_willys {
		scope = 2;
		faction = "fow_usmc";
		crew = "fow_s_usmc_rifleman";		
	};	
	//Backward comp
	class fow_us_willys: fow_willys {
		scope = 1;
		faction = "fow_usa";
		crew = "fow_s_us_rifleman";		
	};
	class fow_usmc_willys: fow_willys {
		scope = 1;
		faction = "fow_usmc";
		crew = "fow_s_usmc_rifleman";		
	};
	