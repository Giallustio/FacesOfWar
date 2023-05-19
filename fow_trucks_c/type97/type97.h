		/*
		transportRepair = 200000000;
		transportAmmo = 30000;
		transportFuel = 3000;
		supplyRadius = 10;
		*/
	class fow_v_type97_truck_ija: Truck_F {
		scope = 2;
		side = 1;
		faction = "fow_ija";
		
		editorSubcategory = "fow_wheeled";
		
		displayName = "Type 97 Isuzu T40 Truck";
		model = "\fow\fow_trucks\type97\type97";
		//picture = "\fow\fow_trucks\gmc\data\WX_US_GMC_Picture.paa";
		//Icon = "\fow\fow_trucks\gmc\data\WX_US_GMC_Icon.paa";
		mapSize = 11;
		crew = "fow_s_ija_rifleman";
		typicalCargo[] = {"fow_s_ija_rifleman"};
		accuracy = 0.3;
		transportSoldier = 11;
		turnCoef = 2.5;
		cost = 70000;
		initCargoAngleY = 185;
		cargoIsCoDriver[] = {1,0};
		getInAction = "GetInlow";
		getOutAction = "GetOutlow";
		cargoGetInAction[] = {"GetInLow","GetInMedium"};
		cargoGetOutAction[] = {"GetOutLow","GetOutMedium"};
		camouflage = 4;
		insideSoundCoef = 1;
		driverAction = "Truck_Driver";
		driverInAction = "Truck_Driver";
		weapons[] = {"TruckHorn"};
		magazines[] = {};
		class TransportWeapons{};
		class TransportMagazines{};
		cargoAction[] = {"Truck_Cargo01","Truck_Cargo01","Truck_Cargo04","Truck_Cargo01","Truck_Cargo01","Truck_Cargo04","Truck_Cargo01","Truck_Cargo02","Truck_Cargo02","Truck_Cargo01"};
		driverForceOptics = 0;
		memoryPointDriverOutOptics = "driver_outview";

		hiddenSelections[] = {"_Canvas","_TruckFuel","_TruckCargo"};
		hiddenSelectionsTextures[] = {"\fow\fow_trucks\type97\data\wx_ija_type097_truck_co.paa","","\fow\fow_trucks\type97\data\wx_ija_type097_truck_co.paa"};
		
		supplyRadius = 10;	
		transportAmmo = 0;
		transportFuel = 0;
		transportRepair = 0;
		
		terrainCoef 	= 1.5;

		#include "physX.h"
		
		#include "sounds.h"

		
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
		
		
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				name="fuel";
				armor = 0.5;
				passThrough = 1;
				minimalHit = 0.0;
				explosionShielding = 1.5;
				radius = 0.45;
			};
			class HitEngine: HitEngine
			{
				name="engine";
				armor = 0.5;
				passThrough = 1;
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.45;
			};
			class HitBody: HitBody
			{
				name="hull";
				armor = 1.0;
				passThrough = 1;
				minimalHit = 0.0;
				explosionShielding = 1.5;
				radius = 0.33;
			};
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitLBWheel: HitLBWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			delete HitLMWheel;
			delete HitLF2Wheel;
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRBWheel: HitRBWheel
			{
				armor = 0.5;
				minimalHit = 0.02;
				passThrough = 0.3;
				explosionShielding = 4;
				radius = 0.33;
			};
			delete HitRMWheel;
			delete HitRF2Wheel;
			class HitGlass1: HitGlass1
			{
				armor = 1.5;
				passThrough = 0;
				explosionShielding = 3;
				radius = 0.33;
			};
			delete HitGlass2;
			delete HitGlass3;
			delete HitGlass4;
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

		class Damage
		{
			tex[] = {};
			mat[] = {
				"fow\fow_trucks\type97\data\wx_ija_type097_truck.rvmat",
				"fow\fow_trucks\type97\data\wx_ija_type097_truck_damage.rvmat",
				"fow\fow_trucks\type97\data\wx_ija_type097_truck_destruct.rvmat",
				
				"fow\fow_trucks\type97\data\wx_glass.rvmat",
				"fow\fow_trucks\type97\data\wx_glass_damage.rvmat",
				"fow\fow_trucks\type97\data\wx_glass_damage.rvmat"
			};
		};
		class Library
		{
			libTextDesc = "Type 97 Truck.";
		};
		class Turrets{};
	};

	class fow_v_type97_truck_fuel_ija: fow_v_type97_truck_ija
	{
		displayName = "Type 97 Isuzu T40 Fuel Truck";

		transportSoldier = 1;
		
		transportFuel = 3000;
		
		//hiddenSelections[] = {"_Canvas","_TruckFuel","_TruckCargo"};
		hiddenSelectionsTextures[] = {"","\fow\fow_trucks\type97\data\wx_ija_type097_truck_co.paa",""};	
	};
	class fow_v_type97_truck_open_ija: fow_v_type97_truck_ija
	{
		displayName = "Type 97 Isuzu T40 Truck (Open)";
		hiddenSelectionsTextures[] = {"","","\fow\fow_trucks\type97\data\wx_ija_type097_truck_co.paa"};	
	};
	class fow_v_type97_truck_utility_ija: fow_v_type97_truck_ija
	{
		displayName = "Type 97 Isuzu T40 Truck (Rearm,Repair,Refuel)";
		hiddenSelectionsTextures[] = {"\fow\fow_trucks\type97\data\wx_ija_type097_truck_co.paa","\fow\fow_trucks\type97\data\wx_ija_type097_truck_co.paa",""};	
		transportSoldier = 1;
		transportRepair = 200000000;
		transportAmmo = 30000;
		transportFuel = 3000;
	};