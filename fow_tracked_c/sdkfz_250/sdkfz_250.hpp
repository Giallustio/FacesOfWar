
	class fow_v_sdkfz_250_base: Tank_F {
		displayName = "Sd.Kfz. 250";
		model = "\fow\fow_tracked\sdkfz_250\fow_sdkfz_250";
		faction = "fow_heer";
		
		editorSubcategory = "fow_halftracks";
		
		scope = 1;
		side = 1;
		
		attenuationEffectType = "SemiOpenCarAttenuation";
		
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
		
		#include "physX.hpp"
		#include "sounds.hpp"

		selectionLeftOffset = "pasanimL";
		selectionRightOffset = "pasanimP";
		crewVulnerable = 1;
		
		commanderCanSee = "2+4+8+16";
		gunnerCanSee = "2+4+8+16";
		driverCanSee = "2+4+8+16";
		
		enableGPS = 0;
/*		class ViewOptics
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
		};
		class ViewPilot
		{
			initFov = 0.7;
			minFov = 0.25;
			maxFov = 1.1;
			initAngleX = 0;
			minAngleX = -80;
			maxAngleX = 80;
			initAngleY = 0;
			minAngleY = -110;
			maxAngleY = 110;
		};
		class HeadLimits
		{
			initAngleX = 5;
			minAngleX = -40;
			maxAngleX = 40;
			initAngleY = 0;
			minAngleY = -90;
			maxAngleY = 90;
		};*/

		hideProxyInCombat = 0;
		forceHideDriver = 1;
		driverForceOptics = 0;
		viewDriverInExternal = 1;
		driverOpticsModel = "\A3\weapons_f\reticle\optics_empty";
		driverOutOpticsModel = "\A3\weapons_f\reticle\optics_empty";
		memoryPointDriverOptics = "driverview";//driverview
		memoryPointDriverOutOptics = "";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		driverAction = "fow_250_driver";
		driverInAction = "fow_250_driver";
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)
		driverGetInAction = "GetInLow";
		driverGetOutAction = "GetOutLow";
		crew = "fow_s_ger_heer_rifleman";
		typicalCargo[] = {"fow_s_ger_heer_rifleman"};
		transportSoldier = 4;
		cargoAction[] = {"fow_250_co_driver","fow_250_cargo_01","fow_250_cargo_02","fow_250_cargo_03"};
		cargoGetInAction[] = {"GetInLow","GetInLow"};
		cargoGetOutAction[] = {"GetOutLow","GetInLow"};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		//picture = "\WX_GB_UniversalCarrier\data\WX_UniversalCarrier_picture.paa";
		//Icon = "\WX_GB_UniversalCarrier\data\WX_UniversalCarrier_Icon.paa";
		enableManualFire = 0;
		hideWeaponsCargo = 1;
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
		/*supplyRadius = 1.7;
		canFloat = 0;
		threat[] = {0.8,0.7,0.2};
		cost = 3000;
		preferRoads = 0;
		damperSize = 0.3;
		damperForce = 0.5;
		damperDamping = 0.5;
		steerAheadSimul = 0.6;
		steerAheadPlan = 0.9;
		predictTurnSimul = 1.2;
		predictTurnPlan = 1.2;
		brakeDistance = 1.1;
		wheelCircumference = 2;
		tracksSpeed = 1.1;
		terrainCoef = 2;
		turnCoef = 1;
		maxTurnAngularVelocity = 0.1;
		costTurnCoef = 0.025;
		gearBox[] = {-7,0,8,7,6.7,4.2};
		insideSoundCoef = 1;
		occludeSoundsWhenIn = 1;
		obstructSoundsWhenIn = 1;
		obstructSoundLFRatio = 1;
		occludeSoundLFRatio = 1;*/
		
		selectionBackLights = "zadni svetlo";
		selectionBrakeLights = "brzdove svetlo";
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
		};

		class EventHandlers: EventHandlers {
			init = "_this spawn fow_main_fnc_randomizeNumbers";
		};		
		
		class AnimationSources
		{
			class foliage {displayName = "Add foliage";source = "user";animPeriod = 1;initPhase=0;};
			class hatch_L {source = "user";animPeriod = 1;initPhase=0;};
			class hatch_R {source = "user";animPeriod = 1;initPhase=0;};
			class hatch_frontL {source = "user";animPeriod = 1;initPhase=0;};
			class hatch_frontR {source = "user";animPeriod = 1;initPhase=0;};
			class MuzzleFlashROT {source = "ammorandom"; weapon = "fow_w_mg34_mounted";};
			class HitLFWheel {source = "Hit";hitpoint = "HitLFWheel";raw = 1;};
			class HitRFWheel: HitLFWheel {hitpoint = "HitRFWheel";};
			class reloadanim {source = "reload";weapon = "fow_w_mg34_mounted";};
			class reloadmagazine {source = "reloadmagazine";weapon = "fow_w_mg34_mounted";};
			class revolving	{source = "revolving";weapon = "fow_w_mg34_mounted";};	
			//Numbers
			class n_1_1 {source = "user";animPeriod = 1;initPhase=0;};
			class n_1_2 {source = "user";animPeriod = 1;initPhase=0;};
			class n_1_3 {source = "user";animPeriod = 1;initPhase=0;};
			class n_1_4 {source = "user";animPeriod = 1;initPhase=0;};
			class n_2_1 {source = "user";animPeriod = 1;initPhase=0;};
			class n_2_2 {source = "user";animPeriod = 1;initPhase=0;};
			class n_2_3 {source = "user";animPeriod = 1;initPhase=0;};
			class n_2_4 {source = "user";animPeriod = 1;initPhase=0;};
			class n_3_1 {source = "user";animPeriod = 1;initPhase=0;};
			class n_3_2 {source = "user";animPeriod = 1;initPhase=0;};
			class n_3_3 {source = "user";animPeriod = 1;initPhase=0;};
			class n_3_4 {source = "user";animPeriod = 1;initPhase=0;};
		};
		class UserActions
		{
			class open_hatchL
			{
				showWindow = 0;
				priority = 1.5;
				displayName = "Open hatch L";
				position = "hatch_L_axis";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "(this animationPhase ""hatch_L"" < 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_L"", 1];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_open.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_L_axis"",""Memory""])), 0.85]";
			};
			class close_hatchL: open_hatchL
			{
				displayName = "Close hatch L";
				condition = "(this animationPhase ""hatch_L"" > 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_L"", 0];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_close.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_L_axis"",""Memory""])), 0.85]";
			};
			class open_hatchR: open_hatchL
			{
				displayName = "Open hatch R";
				position = "hatch_R_axis";
				condition = "(this animationPhase ""hatch_R"" < 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_R"", 1];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_open.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_R_axis"",""Memory""])), 0.85]";
			};
			class close_hatchR: open_hatchR
			{
				displayName = "Close hatch R";
				condition = "(this animationPhase ""hatch_R"" > 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_R"", 0];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_close.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_R_axis"",""Memory""])), 0.85]";
			};
			class open_hatchfrontR: open_hatchL
			{
				priority = 1.6;
				displayName = "Open front hatch R";
				position = "hatch_frontR_axis";
				condition = "(this animationPhase ""hatch_frontR"" < 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_frontR"", 1];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_open.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_frontR_axis"",""Memory""])), 0.85]";
			};
			class close_hatchfrontR: open_hatchfrontR
			{
				displayName = "Close front hatch R";
				condition = "(this animationPhase ""hatch_frontR"" > 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_frontR"", 0];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_close.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_frontR_axis"",""Memory""])), 0.85]";
			};
			class open_hatchfrontL: open_hatchL
			{
				priority = 1.7;
				displayName = "Open front hatch L";
				position = "hatch_frontL_axis";
				condition = "(this animationPhase ""hatch_frontL"" < 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_frontL"", 1];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_open.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_frontL_axis"",""Memory""])), 0.85]";
			};
			class close_hatchfrontL: open_hatchfrontL
			{
				displayName = "Close front hatch L";
				condition = "(this animationPhase ""hatch_frontL"" > 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_frontL"", 0];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_close.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_frontL_axis"",""Memory""])), 0.85]";
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
			libTextDesc = "Sd.Kfz 250";
		};

		animationList[] =
		{
			"foliage",0
		};
		
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				armor = 1.3;
				material = -1;
				name = "hull";
				visual = "zbytek";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.2;
			};
			class HitFuel: HitFuel
			{
				armor = 0.4;
				material = -1;
				name = "fuel";
				visual = "";
				passThrough = 0;
				minimalHit = 0.1;
				explosionShielding = 0.3;
				radius = 0.2;
			};
			class HitEngine: HitEngine
			{
				armor = 0.6;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.2;
			};
			class HitLTrack: HitLTrack
			{
				armor = 1.5;
				material = -1;
				name = "track_L";
				visual = "track_L";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.2;
			};
			class HitRTrack: HitRTrack
			{
				armor = 1.5;
				material = -1;
				name = "track_R";
				visual = "track_R";
				passThrough = 0;
				minimalHit = 0.15;
				explosionShielding = 0.4;
				radius = 0.2;
			};
			class HitLFWheel
			{
				armor = 0.2;
				material = -1;
				name = "wheel_1_1_steering";
				visual = "";
				passThrough = 0;
				explosionShielding = 4;
				radius = 0.2;
			};
			class HitRFWheel
			{
				armor = 0.2;
				material = -1;
				name = "wheel_2_1_steering";
				visual = "";
				passThrough = 0;
				explosionShielding = 4;
				radius = 0.2;
			};
		};		
		
	};

	class fow_v_sdkfz_250: fow_v_sdkfz_250_base {
		class Turrets: Turrets
		{
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
				viewGunnerInExternal = 1;
				gunnerUsesPilotView = 1;
				gunnerName = "Gunner";
				gunBeg = "gun_1_beg";
				gunEnd = "gun_1_end";
				memoryPointGun = "gun_1_muzzle";
				gunnerAction = "fow_250_gunner";
				gunnerInAction = "fow_250_gunner";
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
				selectionFireAnim = "zasleh_1";
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
						visual = "gun_1";
						passThrough = 0;
						explosionShielding = 0.2;
					};
				};	
			};
		};
		
		class textureSources
		{
			class Dunkelgelb
			{
				// Display name of the texture
				displayName = "Dunkelgelb";
				// Author of the texture
				author = "FOW Team";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\fow\fow_tracked\sdkfz_250\data\fow_250_caisse01_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_wheels_co.paa"};
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
				textures[] = {"\fow\fow_tracked\sdkfz_250\data\fow_250_caisse_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_wheels_co.paa"};
				// This source should be available for the following factions
				factions[] = 
				{
					"fow_heer","fow_waffenss"
				};
			};
		};
		
		class Damage
		{
			tex[] = {};
			mat[] = {
				"fow\fow_tracked\sdkfz_250\data\250_caisse.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_caisse_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_caisse_destruct.rvmat",
				
				"fow\fow_tracked\sdkfz_250\data\250_tracks.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_tracks_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_tracks_destruct.rvmat",
				
				"fow\fow_tracked\sdkfz_250\data\250_wheels.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_wheels_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_wheels_destruct.rvmat",
				
				"fow\fow_tracked\sdkfz_250\data\250_interior.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_interior_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_interior_destruct.rvmat",
				
				"fow\fow_weapons\mg34\data\mg34.rvmat",
				"fow\fow_tracked\sdkfz_250\data\mg34_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\mg34_destruct.rvmat"				
			};
		};		
	};
	
	class fow_v_sdkfz_250_ger_heer: fow_v_sdkfz_250 {
		scope = 2;
		displayName = "Sd.Kfz. 250 Leichte SPW";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\fow\fow_tracked\sdkfz_250\data\fow_250_caisse01_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_wheels_co.paa"};
	};		
	class fow_v_sdkfz_250_camo_ger_heer: fow_v_sdkfz_250 {
		scope = 2;
		displayName = "Sd.Kfz. 250 Leichte SPW (camo)";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\fow\fow_tracked\sdkfz_250\data\fow_250_caisse_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_wheels_co.paa"};
	};	
	class fow_v_sdkfz_250_camo_foliage_ger_heer: fow_v_sdkfz_250 {
		scope = 2;
		displayName = "Sd.Kfz. 250 Leichte SPW (camo - foliage)";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\fow\fow_tracked\sdkfz_250\data\fow_250_caisse_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_wheels_co.paa"};
		class AnimationSources: AnimationSources
		{
			class foliage {source = "user";animPeriod = 1;initPhase=1;};
		};
	};
	
	//250/9
	
	class fow_v_sdkfz_250_9_base: fow_v_sdkfz_250_base {
		displayName = "Sd.Kfz. 250/9";
		model = "\fow\fow_tracked\sdkfz_250\fow_sdkfz_250_9";

		hideProxyInCombat = 1;//for tanks
		transportSoldier = 1;
		
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fow\fow_tracked\sdkfz_250\data\fow_250_caisse_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_wheels_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_9_turret_yellow_co.paa","\fow\fow_cars\sdkfz_222\data\222_armement_co.paa"};

		class AnimationSources: AnimationSources {
			class CoverRight {source = "user";animPeriod = 1;initPhase=0;};
			class CoverLeft {source = "user";animPeriod = 1;initPhase=0;};
			class recoil_source {source = "reload"; weapon = "fow_w_20mm_kwk38";};
		};

		class UserActions: UserActions
		{
			class close_cover
			{
				showWindow = 0;
				priority = 1.5;
				displayName = "Close cover";
				position = "cover_L_axis";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "(this animationPhase ""CoverRight"" < 0.5) && (alive this) && ((player isEqualTo commander this) || (player isEqualTo gunner this))";
				statement = "this animate [""CoverRight"", 1];this animate [""CoverLeft"", 1];playSound3D [""fow\fow_sounds\vehicles\222\222_cover_close.wav"", this, false, (this modeltoworld (this selectionPosition [""cover_L_axis"",""Memory""])), 0.85]";
			};
			class open_cover: close_cover
			{
				displayName = "Open cover";
				position = "cover_L_axis";
				condition = "(this animationPhase ""CoverRight"" > 0.5) && (alive this) && ((player isEqualTo commander this) || (player isEqualTo gunner this))";
				statement = "this animate [""CoverRight"", 0];this animate [""CoverLeft"", 0];playSound3D [""fow\fow_sounds\vehicles\222\222_cover_open.wav"", this, false, (this modeltoworld (this selectionPosition [""cover_L_axis"",""Memory""])), 0.85]";
			};
		};			
		
		class textureSources {
			class Dunkelgelb
			{
				// Display name of the texture
				displayName = "Dunkelgelb";
				// Author of the texture
				author = "FOW Team";
				// Paths to the texture files, in the same order as the hidden selections
				textures[] = {"\fow\fow_tracked\sdkfz_250\data\fow_250_caisse01_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_wheels_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_9_turret_yellow_co.paa","\fow\fow_cars\sdkfz_222\data\222_armement_co.paa"};
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
				textures[] = {"\fow\fow_tracked\sdkfz_250\data\fow_250_caisse_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_wheels_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_9_turret_co.paa","\fow\fow_cars\sdkfz_222\data\222_armement_co.paa"};
				// This source should be available for the following factions
				factions[] = 
				{
					"fow_heer","fow_waffenss"
				};
			};
		};

		class Library {
			libTextDesc = "Sd.Kfz 250/9";
		};
		class Damage {
			tex[] = {};
			mat[] = {
				"fow\fow_tracked\sdkfz_250\data\250_caisse.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_caisse_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_caisse_destruct.rvmat",
				
				"fow\fow_tracked\sdkfz_250\data\250_tracks.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_tracks_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_tracks_destruct.rvmat",
				
				"fow\fow_tracked\sdkfz_250\data\250_wheels.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_wheels_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_wheels_destruct.rvmat",
				
				"fow\fow_tracked\sdkfz_250\data\250_interior.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_interior_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_interior_destruct.rvmat",
				
				"fow\fow_tracked\sdkfz_250\data\250_9_turret.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_9_turret_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\250_9_turret_destruct.rvmat",
				
				"fow\fow_cars\sdkfz_222\data\222_armement.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_armement_damage.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_armement_destruct.rvmat",

				"fow\fow_weapons\mg34\data\mg34.rvmat",
				"fow\fow_tracked\sdkfz_250\data\mg34_damage.rvmat",
				"fow\fow_tracked\sdkfz_250\data\mg34_destruct.rvmat"				
			};
		};

		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets: Turrets {
					class CommanderOptics: CommanderOptics {
						// Animation class
						gun = "gun_1";
						body = "turret_1";

						// Animation source
						animationSourceHatch = "HatchCommander";
						animationSourceBody = "turret_1";
						animationSourceGun = "gun_1";

						// Weapon and magazines
						memoryPointGun = "";
						gunBeg = "";
						gunEnd = "";
						weapons[] = {};	// you may need different weapon class to provide firing effects emit from proper position.
						magazines[] = {};

						// FCS
						turretInfoType = "RscWeaponRangeZeroing";
						discreteDistance[] = {};
						discreteDistanceInitIndex = 0;

						// Optics view
						memoryPointGunnerOutOptics = "";
						memoryPointGunnerOptics= "";
						gunnerOpticsModel = "";
						gunnerOutOpticsModel = "";	// leave "" to disable optics view
						gunnerOpticsEffect[] = {};	// post processing effets
						GunnerForceOptics = 0;
						gunnerHasFlares = 0;	// flare visual effect when looking at light source

						// Gunner operations
						gunnerAction = "commander_apcwheeled1_out";
						gunnerInAction = "fow_222_commander";
						gunnerGetInAction = "GetInHigh";
						gunnerGetOutAction = "GetOutHigh";
						startEngine = 0;	// Turning this turret should not turn engine on.
						viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
						outGunnerMayFire = 0;	// Turn off to make player able to look around freely outside optics view.
						inGunnerMayFire = 1;	// Turn off to make player able to look around freely outside optics view.
						
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						class dynamicViewLimits
						{
							MainTurret[] = {-135,75};
						};

						class ViewGunner: ViewGunner {
							minFov = 0.25;
							maxFov = 1.25;
							initFov = 0.75;
							minAngleX = -75;
							maxAngleX = 75;
							initAngleY = 0;
							//minAngleY = -110;
							//maxAngleY = 110;							
						};						
					};
				};
				
				animationSourceBody = "turret_1";
				animationSourceGun = "gun_1";
				gun = "gun_1";
				body = "turret_1";
				
				// Coaxial gun
				memoryPointGun = "mg34_beg";
				selectionFireAnim = "muzzleflash";

				// Main gun
				gunBeg = "gun_1_beg";
				gunEnd = "gun_1_end";

				// Weapons and magazines
				weapons[] = {"fow_w_20mm_kwk38","fow_w_mg34_mounted"};
				magazines[] = {"fow_20Rnd_20mm_AP","fow_20Rnd_20mm_AP","fow_20Rnd_20mm_AP","fow_20Rnd_20mm_AP","fow_20Rnd_20mm_HE","fow_20Rnd_20mm_HE","fow_20Rnd_20mm_HE","fow_20Rnd_20mm_HE","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57"};

				// Turret servos
				minElev = -5;
				maxElev = 40;
				minTurn = -360;
				maxTurn = 360;
				startEngine = 0;
				soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0,50};

				// FCS
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {
					100,200,300,400,500,600,700,800,
					900,1000,1100,1200,1300,1400,1500,1600,
					1700,1800,1900,2000,2100,2200,2300,2400
				};
				discreteDistanceInitIndex = 2;	// start at 600 meters

				// Optics view
				memoryPointGunnerOptics= "gunnerview";
				gunnerOpticsModel = "\fow\fow_cars\sdkfz_222\optic\gunner";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 0;

				// Gunner operations and animations
				gunnerAction = "fow_222_gunner";
				gunnerInAction = "fow_222_gunner";
				forceHideGunner = 1;
				inGunnerMayFire = 1;	// set to 0 to let gunner look around the internal compartment if modeled
				viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.

				class HitPoints {
					class HitTurret	{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual="vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun	{
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual="";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
			};
		};
	};
	
	class fow_v_sdkfz_250_9_ger_heer: fow_v_sdkfz_250_9_base {
		scope = 2;
		displayName = "Sd.Kfz. 250/9";		
		hiddenSelectionsTextures[] = {"\fow\fow_tracked\sdkfz_250\data\fow_250_caisse01_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_wheels_co.paa","\fow\fow_tracked\sdkfz_250\data\fow_250_9_turret_yellow_co.paa","\fow\fow_cars\sdkfz_222\data\222_armement_co.paa"};
	};

/*	class fow_v_sdkfz_250_9_foliage_ger_heer: fow_v_sdkfz_250_9_base {
		scope = 2;
		displayName = "Sd.Kfz. 250/9 (foliage)";
		class AnimationSources: AnimationSources
		{
			class foliage {source = "user";animPeriod = 1;initPhase=1;};
		};
	};*/	
	class fow_v_sdkfz_250_9_camo_ger_heer: fow_v_sdkfz_250_9_base {
		scope = 2;
		displayName = "Sd.Kfz. 250/9 (camo)";
	};

	class fow_v_sdkfz_250_9_camo_foliage_ger_heer: fow_v_sdkfz_250_9_base {
		scope = 2;
		displayName = "Sd.Kfz. 250/9 (camo - foliage)";
		class AnimationSources: AnimationSources
		{
			class foliage {source = "user";animPeriod = 1;initPhase=1;};
		};
	};
