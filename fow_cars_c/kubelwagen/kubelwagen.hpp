	
	class fow_v_kubelwagen: Car_F
	{
		side = 1;
		scope = 1;
		displayName = "Kübelwagen";
		model = "fow\fow_cars\kubelwagen\fow_kubelwagen";
		icon = "fow\fow_cars\willys\data\ui\willys_ui_ca.paa";
		picture = "fow\fow_cars\willys\data\ui\willys_ca.paa";
		faction = "fow_heer";
		
		editorSubcategory = "fow_wheeled";
		
		crew = "fow_s_ger_heer_rifleman";
		
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\fow\fow_cars\kubelwagen\data\kubel_caisse_co.paa","\fow\fow_cars\kubelwagen\data\kubel_chassis_co.paa"};

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
		transportSoldier 		= 1; /// number of cargo except driver
		cargoProxyIndexes[] = {};
		/// some values from parent class to show how to set them up
		wheelDamageRadiusCoef 	= 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		maxFordingDepth 		= 0.5;			/// how high water would damage the engine of the car
		waterResistance 		= 1;			/// if the depth of water is bigger than maxFordingDepth it starts to damage the engine after this time
		crewCrashProtection		= 0.25;			/// multiplier of damage to crew of the vehicle => low number means better protection
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "";//"drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)

		driverAction 		= "fow_kubel_driver"; /// what action is going the driver take inside the vehicle. Non-existent action makes the vehicle inaccessible
		cargoAction[] 		= {"fow_kubel_commander", "passenger_generic01_foldhands"}; /// the same of all the crew
		getInAction 		= "GetInLow"; 		/// how does driver look while getting in
		getOutAction 		= "GetOutLow"; 		/// and out
		cargoGetInAction[] 	= {"GetInLow"}; 	/// and the same for the rest, if the array has fewer members than the count of crew, the last one is used for the rest
		cargoGetOutAction[] = {"GetOutLow"}; 	/// that means all use the same in this case
		
		hideWeaponsCargo = 1;
		
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
				name = "fuel";
				armor = 2;
				radius = 0.5;
			};
			class HitEngine: HitEngine
			{
				name = "engine";
				armor = 4;
				radius = 0.25;
			};
			class HitBody: HitBody
			{
				name = "hull";
				visual = "camo1";
			};
			class HitGlass1: HitGlass1
			{
				name = "glass1";
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
		
		class AnimationSources: AnimationSources
		{
			class windshield
			{
				source = "door";
				animPeriod = 1;
				initPhase=0;
			};
			class Speed	{source = "speed";animPeriod = 0;initPhase = 0;};
		};

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
				condition = "(this doorPhase ""windshield"" < 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animateDoor [""windshield"", 1]";
			};
			class PutUp_Windshield: Lower_Windshield
			{
				displayName = "Put up Windshield";
				position = "windshield_axis";
				condition = "(this doorPhase ""windshield"" > 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animateDoor [""windshield"", 0]";
			};
		};		
		
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"fow\fow_cars\willys\data\fow_glass01.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat",
				
				"fow\fow_cars\kubelwagen\data\kubel_caisse.rvmat",
				"fow\fow_cars\kubelwagen\data\kubel_caisse_damage.rvmat",
				"fow\fow_cars\kubelwagen\data\kubel_caisse_destruct.rvmat",
				
				"fow\fow_cars\kubelwagen\data\kubel_chassis.rvmat",
				"fow\fow_cars\kubelwagen\data\kubel_chassis_damage.rvmat",
				"fow\fow_cars\kubelwagen\data\kubel_chassis_destruct.rvmat"
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
					pointPosition = "pip0_pos";
					pointDirection = "pip0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};	
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "pip1_pos";
					pointDirection = "pip1_dir";
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

		/*class AnimationSources: AnimationSources
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
		};*/
		class CargoTurret;
		class Turrets: Turrets 
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerGetInAction = "GetInOffroadBack";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos cargo R";
				memoryPointsGetInGunnerDir = "pos cargo R dir";
				gunnerName = "Passenger Back Right";
				//gunnerCompartments = "Compartment2";
				proxyIndex = 2;
				maxElev = 55;
				minElev = -45;
				maxTurn = 30;
				minTurn = -80;
				isPersonTurret = 1;
				ejectDeadGunner	= 0;
				//enabledByAnimationSource = "windshield";
				class dynamicViewLimits	{};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger Back Left";
				memoryPointsGetInGunner = "pos cargo L";
				memoryPointsGetInGunnerDir = "pos cargo L dir";
				proxyIndex = 3;
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
		};
		
		class textureSources
		{
			// This texture source will be available for every defined factions
			class Dunkelgelb
			{
				// Display name of the texture
				displayName = "Dunkelgelb";
				// Author of the texture
				author = "FOW Team";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\fow\fow_cars\kubelwagen\data\kubel_caisse_co.paa","\fow\fow_cars\kubelwagen\data\kubel_chassis_co.paa"};
				// This source should be available for the following factions
				factions[] = 
				{
					"fow_heer","fow_waffenss"
				};
			};
			class camo
			{
				// Display name of the texture
				displayName = "Camo";
				// Author of the texture
				author = "FOW Team";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\fow\fow_cars\kubelwagen\data\kubel_caisse_camo01_co.paa","\fow\fow_cars\kubelwagen\data\kubel_chassis_co.paa"};
				materials[] = {"\fow\fow_cars\kubelwagen\data\kubel_caisse_camo01.rvmat","\fow\fow_cars\kubelwagen\data\kubel_chassis.rvmat"};
				// This source should be available for the following factions
				factions[] = 
				{
					"fow_heer","fow_waffenss"
				};
			};
		};
	};

	class fow_v_kubelwagen_mg34: fow_v_kubelwagen {
		displayName = "Kubelwagen MG34";
		model = "fow\fow_cars\kubelwagen\fow_kubelwagen_mg34";
		
		class Turrets: Turrets
		{
			delete CargoTurret_01;
			delete CargoTurret_02;
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					delete CommanderOptics;// no commander
				};
				primaryGunner = 1;
				commanding = 1;
				proxyIndex = 1;
				hideProxyInCombat = 0;
				forceHidegunner = 1;
				proxyType = "CPGunner";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				viewGunnerInExternal = 1;
				gunnerUsesPilotView = 1;
				gunnerName = "Gunner";
				gunBeg = "gun_1_beg";
				gunEnd = "gun_1_end";
				memoryPointGun = "gun_1_muzzle";
				gunnerAction = "fow_kubel_gunner";
				gunnerInAction = "fow_kubel_gunner";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				GunnerForceOptics = 0;
				gunnerOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOutOpticsEffect[] = {};
				gunnerOutOpticsColor[] = {0,0,0,1};
				//gunnerOutOpticsShowCursor = 1;
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				gunnerOpticsEffect[] = {};
				gunnerOpticsColor[] = {0,0,0,1};
				//gunnerOpticsShowCursor = 1;
				stabilizedInAxes = "StabilizedInAxesNone";
				body = "turret_1";
				gun = "gun_1";
				animationSourceBody = "turret_1";
				animationSourceGun = "gun_1";
				selectionFireAnim = "muzzleFlash";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics = "";
				minElev = -10;
				maxElev = 35;
				initElev = 0;
				minTurn = -40;
				maxTurn = 40;
				initTurn = 0;
				weapons[] = {"fow_w_mg34_mounted"};
				magazines[] = {"fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57"};
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunnerLeftHandAnimName = "gun_1";
				gunnerRightHandAnimName = "gun_1";
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "turret_1";
						visual = "turret_1";
						passThrough = 0;
						explosionShielding = 0.4;
					};
					class HitGun
					{
						armor = 0.4;
						material = -1;
						name = "gun_1";
						visual = "gun_1";
						passThrough = 0;
						explosionShielding = 0.2;
					};
				};	
			};
		};
		
		class AnimationSources: AnimationSources
		{
			class MuzzleFlashROT {source = "ammorandom"; weapon = "fow_w_mg34_mounted";};
			class reloadanim {source = "reload";weapon = "fow_w_mg34_mounted";};
			class recoil_source {source = "reload"; weapon = "fow_w_mg34_mounted";};
			class reloadmagazine {source = "reloadmagazine";weapon = "fow_w_mg34_mounted";};
			class revolving	{source = "revolving";weapon = "fow_w_mg34_mounted";};	
		};
		
	};
	class fow_v_kubelwagen_camo : fow_v_kubelwagen {
		displayName = "Kubelwagen (camo)";
		
		hiddenSelectionsTextures[] = {"\fow\fow_cars\kubelwagen\data\kubel_caisse_camo01_co.paa","\fow\fow_cars\kubelwagen\data\kubel_chassis_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_cars\kubelwagen\data\kubel_caisse_camo01.rvmat","\fow\fow_cars\kubelwagen\data\kubel_chassis.rvmat"};

		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"fow\fow_cars\willys\data\fow_glass01.rvmat",			/// another material
				"A3\data_f\Glass_veh_damage.rvmat",		/// changes into different ones
				"A3\data_f\Glass_veh_damage.rvmat",
				
				"fow\fow_cars\kubelwagen\data\kubel_caisse_camo01.rvmat",
				"fow\fow_cars\kubelwagen\data\kubel_caisse_damage.rvmat",
				"fow\fow_cars\kubelwagen\data\kubel_caisse_destruct.rvmat",
				
				"fow\fow_cars\kubelwagen\data\kubel_chassis.rvmat",
				"fow\fow_cars\kubelwagen\data\kubel_chassis_damage.rvmat",
				"fow\fow_cars\kubelwagen\data\kubel_chassis_destruct.rvmat"
			};
		};			
	};
	class fow_v_kubelwagen_ger_heer : fow_v_kubelwagen {
		scope = 2;
	};
	class fow_v_kubelwagen_camo_ger_heer : fow_v_kubelwagen_camo {
		scope = 2;
	};
	//MG34
	class fow_v_kubelwagen_mg34_ger_heer : fow_v_kubelwagen_mg34 {
		scope = 2;
		displayName = "Kubelwagen MG34";
	};
	