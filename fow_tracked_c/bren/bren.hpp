
	class fow_v_universalCarrier: Tank_F
	{
		displayName = "Bren Carrier";
		model = "\fow\fow_tracked\bren\brenCarrier";
		faction = "fow_uk";
		
		editorSubcategory = "fow_tracked";
		
		scope = 2;
		side = 2;
		
		/*proxyType = "CPDriver";
		proxyIndex = 1;
		commanding = 0;
		hideProxyinCombat = 0;
		forceHidedriver = 0;
		commanderCanSee = "2+4+8+16";
		gunnerCanSee = "2+4+8+16";
		driverCanSee = "2+4+8+16";
		crewVulnerable = 1;
		accuracy = 0.7;
		picture = "\fow\fow_tracked\lvta2\data\lvta2_pic.paa";
		Icon = "\fow\fow_tracked\lvta2\data\lvta2_icon.paa";
		mapSize = 11;
*/

		attenuationEffectType = "OpenCarAttenuation";
		
		#include "physX.hpp"
		#include "sounds.hpp"

		selectionLeftOffset = "pasanimL";
		selectionRightOffset = "pasanimP";
		crewVulnerable = 1;
		
		commanderCanSee = "2+4+8+16";
		gunnerCanSee = "2+4+8+16";
		driverCanSee = "2+4+8+16";

		//extCameraPosition[] = {0,2,-10};
		//groupCameraPosition[] = {0,5,-20};
		getInRadius = 3.0;
		proxyType = "CPDriver";
		proxyIndex = 1;
		hideProxyInCombat = 1;//It works in dev
		//canHideDriver = -1;//TEST
		forceHideDriver = 1;
		viewDriverInExternal = 1;
		driverForceOptics = 0;
		driverOpticsModel = "";
		driverOutOpticsModel = "";
		memoryPointDriverOptics = "driverview";//driverview
		memoryPointDriverOutOptics = "";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		driverAction = "fow_bren_driver";
		driverInAction = "fow_bren_driver";
		driverLeftHandAnimName 	= ""; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivingWheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)
		driverGetInAction = "GetInLow";
		driverGetOutAction = "GetOutLow";
		crew = "fow_s_uk_rifleman";
		typicalCargo[] = {"fow_s_uk_rifleman"};
		transportSoldier = 0;//FFV
		cargoCompartments[] = {"Compartment2"};
		cargoAction[] = {"passenger_apc_narrow_generic01","passenger_apc_generic03","passenger_apc_narrow_generic01"};
		cargoGetInAction[] = {"GetInLow","GetInLow"};
		cargoGetOutAction[] = {"GetOutLow","GetInLow"};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		//picture = "\WX_GB_UniversalCarrier\data\WX_UniversalCarrier_picture.paa";
		//Icon = "\WX_GB_UniversalCarrier\data\WX_UniversalCarrier_Icon.paa";
		enableManualFire = 0;
		hideWeaponsCargo = 0;
		hideWeaponsCommander = 1;
		hideWeaponsDriver = 1;
		hideWeaponsGunner = 1;
		accuracy = 0.7;
		mapSize = 9;
		armor = 115;
		transportAmmo = 0;
		transportMaxMagazines = 100;
		transportMaxWeapons = 20;
		class TransportWeapons{};
		class TransportMagazines{};
		supplyRadius = 1.7;
		canFloat = 0;
		threat[] = {0.8,0.7,0.2};
		cost = 3000;
		//preferRoads = 0;
		damperSize = 0.3;
		damperForce = 0.5;
		damperDamping = 0.5;
		/*steerAheadSimul = 0.5;
		steerAheadPlan = 0.35;
		predictTurnPlan = 2.8;
		predictTurnSimul = 2.6;
		brakeDistance = 15;
		precision = 5;		*/
		wheelCircumference = 2;
		tracksSpeed = 1.1;
		terrainCoef = 2;
		turnCoef = 1;
		maxTurnAngularVelocity = 0.1;
		costTurnCoef = 0.025;
		gearBox[] = {-7,0,8,7,6.7,4.2};
		insideSoundCoef = 1;
		occludeSoundsWhenIn = 0;
		obstructSoundsWhenIn = 0;
		obstructSoundLFRatio = 0;
		occludeSoundLFRatio = 0;
		
		class HitPoints: HitPoints {
			class HitHull: HitHull {	// Handle internal damage
				armor=0.8;
				material=-1;
				name="hull";
				visual="zbytek";
				passThrough=1;
				minimalHit = 0.14;
				explosionShielding = 2.0;
				radius = 0.2;
			};
			class HitEngine: HitEngine {
				armor=1;
				material=-1;
				name="engine";
				passThrough=0.2;
				minimalHit = 0.24;
				explosionShielding = 1;
				radius = 0.33;
			};
			class HitLTrack: HitLTrack {
				armor=0.5;
				material=-1;
				name="track_l";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack {
				armor=0.5;
				material=-1;
				name="track_r";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
		};		
		
		//selectionBackLights = "zadni svetlo";
		//selectionBrakeLights = "brzdove svetlo";
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
		/// it might be even good to aggregate all lights into one source as it is done for most of the cars
		class AnimationSources
		{
			class Drivingwheel
			{
				source = "drivingwheel";
				animPeriod = 0;
				initPhase = 0;
			};
			class Speed
			{
				source = "speed";
				animPeriod = 0;
				initPhase = 0;
			};
			class Oil
			{
				source = "oil";
				animPeriod = 0;
				initPhase = 0;
			};
			class Fuel
			{
				source = "fuel";
				animPeriod = 0;
				initPhase = 0;
			};
			class RPM
			{
				source = "rpm";
				animPeriod = 0;
				initPhase = 0;
			};
			class AMP
			{
				source = "rpm";
				animPeriod = 0;
				initPhase = 0;
			};
			class gun_1_reloadanim
			{
				source = "reload";
				weapon = "fow_w_bren_mounted_1";
			};
			class gun_2_reloadanim
			{
				source = "reload";
				weapon = "fow_w_bren_mounted_2";
			};
			class Gun_1_Reload
			{
				source = "reloadmagazine";
				weapon = "fow_w_bren_mounted_1";
			};
			class Gun_2_Reload
			{
				source = "reloadmagazine";
				weapon = "fow_w_bren_mounted_2";
			};
			class VisionSlot_Driver
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class VisionSlot_Gunner_L
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class VisionSlot_Gunner_R
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
		};
		actionBegin1 = "Open_VisionSlot";
		actionEnd1 = "Close_VisionSlot";
		actionBegin2 = "Open_VisionSlot_Gunner_L";
		actionEnd2 = "Close_VisionSlot_Gunner_L";
		actionBegin3 = "Open_VisionSlot_Gunner_R";
		actionEnd3 = "Close_VisionSlot_Gunner_R";
		class UserActions
		{
			class Open_VisionSlot_Driver
			{
				showWindow = 0;
				priority = 5;
				displayName = "Open VisionSlot Driver";
				position = "VisionSlot_Driver_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""VisionSlot_Driver"" < 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""VisionSlot_Driver"", 1]";
			};
			class close_VisionSlot_Driver
			{
				showWindow = 0;
				priority = 4.9;
				displayName = "Close VisionSlot Driver";
				position = "VisionSlot_Driver_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""VisionSlot_Driver"" > 0.5) && (alive this) && (player == driver this)";
				statement = "this animate [""VisionSlot_Driver"", 0]";
			};
			class Open_VisionSlot_Gunner_L
			{
				showWindow = 0;
				priority = 4.8;
				displayName = "Open Left VisionSlot Gunner";
				position = "VisionSlot_Gunner_L_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""VisionSlot_Gunner_L"" < 0.5) && (alive this) && (player == gunner this)";
				statement = "this animate [""VisionSlot_Gunner_L"", 1]";
			};
			class Close_VisionSlot_Gunner_L
			{
				showWindow = 0;
				priority = 4.7;
				displayName = "Close Left VisionSlot Gunner";
				position = "VisionSlot_Gunner_L_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""VisionSlot_Gunner_L"" > 0.5) && (alive this) && (player == gunner this)";
				statement = "this animate [""VisionSlot_Gunner_L"", 0]";
			};
			class Open_VisionSlot_Gunner_R
			{
				showWindow = 0;
				priority = 4.6;
				displayName = "Open Right VisionSlot Gunner";
				position = "VisionSlot_Gunner_R_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""VisionSlot_Gunner_R"" < 0.5) && (alive this) && (player == gunner this)";
				statement = "this animate [""VisionSlot_Gunner_R"", 1]";
			};
			class Close_VisionSlot_Gunner_R
			{
				showWindow = 0;
				priority = 4.5;
				displayName = "Close Right VisionSlot Gunner";
				position = "VisionSlot_Gunner_R_axis";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""VisionSlot_Gunner_R"" > 0.5) && (alive this) && (player == gunner this)";
				statement = "this animate [""VisionSlot_Gunner_R"", 0]";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1_beg";
				direction = "exhaust1_end";
				effect = "ExhaustsEffectBig";
			};
			class Exhaust2
			{
				position = "exhaust2_beg";
				direction = "exhaust2_end";
				effect = "ExhaustsEffectBig";
			};
		};
		class Library
		{
			libTextDesc = "UniversalCarrier";
		};
		class Damage
		{
			tex[] = {};
			mat[] = {
				"fow\fow_tracked\bren\data\brencarrier_caisse.rvmat",
				"fow\fow_tracked\bren\data\brencarrier_caisse_damage.rvmat",
				"fow\fow_tracked\bren\data\brencarrier_caisse_destruct.rvmat",
				
				"fow\fow_tracked\bren\data\brencarrier_instruments.rvmat",
				"fow\fow_tracked\bren\data\brencarrier_instruments_damage.rvmat",
				"fow\fow_tracked\bren\data\brencarrier_instruments_destruct.rvmat",
				
				"fow\fow_tracked\bren\data\brencarrier_interior.rvmat",
				"fow\fow_tracked\bren\data\brencarrier_interior_damage.rvmat",
				"fow\fow_tracked\bren\data\brencarrier_interior_destruct.rvmat",
				
				"fow\fow_tracked\bren\data\brencarrier_wheels.rvmat",
				"fow\fow_tracked\bren\data\brencarrier_wheels_damage.rvmat",
				"fow\fow_tracked\bren\data\brencarrier_wheels_destruct.rvmat",
				
				"fow\fow_weapons\bren\data\bren_acier_hight.rvmat",
				"fow\fow_tracked\bren\data\bren_acier_hight_damage.rvmat",
				"fow\fow_tracked\bren\data\bren_acier_hight_destruct.rvmat",
				
				"fow\fow_weapons\bren\data\bren_bois.rvmat",
				"fow\fow_tracked\bren\data\bren_bois_damage.rvmat",
				"fow\fow_tracked\bren\data\bren_bois_destruct.rvmat"
			};
		};

		class CargoTurret;
		class Turrets: Turrets
		{
			class Turret_1: NewTurret
			{
				primaryGunner = 0;
				commanding = 1;
				proxyIndex = 1;
				hideProxyInCombat = 1;
				forceHidegunner = 1;
				proxyType = "CPGunner";
				viewGunnerInExternal = 1;
				gunnerUsesPilotView = 0;
				gunnerName = "FrontGunner";
				gunBeg = "gun_1_beg";
				gunEnd = "gun_1_end";
				memoryPointGun = "gun_1_muzzle";
				gunnerAction = "fow_bren_gunner_front";
				gunnerInAction = "fow_bren_gunner_front";
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
				animationSourceBody = "Turret_1";
				animationSourceGun = "Gun_1";
				selectionFireAnim = "zasleh_1";
				memoryPointGunnerOptics = "gunner_1_weaponview";
				memoryPointGunnerOutOptics = "gunner_1_weaponview";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				minElev = -15;
				maxElev = 10;
				initElev = 0;
				minTurn = -30;
				maxTurn = 30;
				initTurn = 0;
				weapons[] = {"fow_w_bren_mounted_1"};
				magazines[] = {"fow_30Rnd_303_bren_mounted","fow_30Rnd_303_bren_mounted","fow_30Rnd_303_bren_mounted","fow_30Rnd_303_bren_mounted","fow_30Rnd_303_bren_mounted","fow_30Rnd_303_bren_mounted"};
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunnerLeftHandAnimName = "gun_1";
				gunnerRightHandAnimName = "gun_1";
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
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
						visual = "recoilGun";
						passThrough = 0;
						explosionShielding = 0.2;
					};
				};	
			};
			class Turret_2: NewTurret
			{
				primaryObserver = 1;
				commanding = 2;
				hideProxyInCombat = 1;
				forceHidegunner = 1;
				proxyType = "CPGunner";
				proxyIndex = 2;
				viewGunnerInExternal = 1;
				gunnerUsesPilotView = 0;
				gunnerName = "TopGunner";
				gunBeg = "gun_2_beg";
				gunEnd = "gun_2_end";
				memoryPointGun = "gun_2_muzzle";
				gunnerAction = "fow_bren_gunner_back";
				gunnerInAction = "fow_bren_gunner_back";//Need a new one
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
				body = "turret_2";
				gun = "gun_2";
				animationSourceBody = "Turret_2";
				animationSourceGun = "Gun_2";
				selectionFireAnim = "zasleh_2";
				memoryPointGunnerOptics = "gunner_2_weaponview";
				memoryPointGunnerOutOptics = "gunner_2_weaponview";
				memoryPointCommanderOptics = "gunner_2_weaponview";
				memoryPointCommanderOutOptics = "gunner_2_weaponview";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				minElev = -15;
				maxElev = 15;
				initElev = 0;
				minTurn = -40;
				maxTurn = 40;
				initTurn = 0;
				weapons[] = {"fow_w_bren_mounted_2"};
				magazines[] = {"fow_30Rnd_303_bren_mounted","fow_30Rnd_303_bren_mounted","fow_30Rnd_303_bren_mounted","fow_30Rnd_303_bren_mounted","fow_30Rnd_303_bren_mounted","fow_30Rnd_303_bren_mounted"};
				startEngine = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunnerLeftHandAnimName = "gun_2";
				gunnerRightHandAnimName = "gun_2";
				class ViewOptics: ViewOptics
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "turret_1";
						visual = "turret_2";
						passThrough = 0;
						explosionShielding = 0.4;
					};
					class HitGun
					{
						armor = 0.4;
						material = -1;
						name = "gun_2";
						visual = "gun_2";
						passThrough = 0;
						explosionShielding = 0.2;
					};
				};	
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_1";
				gunnerInAction = "passenger_inside_1";
				gunnerGetInAction = "GetInOffroadBack";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				memoryPointsGetInGunner = "pos cargo R";
				memoryPointsGetInGunnerDir = "pos cargo R dir";
				gunnerName = "Passenger Back Right";
				gunnerCompartments = "Compartment2";
				hideProxyInCombat = 0;
				forceHidegunner = 1;
				proxyIndex = 1;
				maxElev = 30;
				minElev = 1;
				maxTurn = 80;
				minTurn = -30;
				isPersonTurret = 2;
				ejectDeadGunner	= 0;
				//hideProxyInCombat
				class dynamicViewLimits	{};
			};
			class CargoTurret_02: CargoTurret_01
			{
				gunnerName = "Passenger Front Right";
				memoryPointsGetInGunner = "pos cargo F";
				memoryPointsGetInGunnerDir = "pos cargo F dir";
				proxyIndex = 2;
				maxTurn = 80;
				minTurn = -30;
				enabledByAnimationSource = "";
			};
			class CargoTurret_03: CargoTurret_01
			{
				gunnerName = "Passenger Left";
				memoryPointsGetInGunner = "pos cargo L";
				memoryPointsGetInGunnerDir = "pos cargo L dir";
				proxyIndex = 3;
				maxTurn = 30;
				minTurn = -80;
				enabledByAnimationSource = "";
			};		
		};

	};