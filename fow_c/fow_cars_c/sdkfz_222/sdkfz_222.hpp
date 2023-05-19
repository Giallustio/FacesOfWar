	class fow_v_sdkfz_222: Wheeled_APC_F
	{
		side = 1;
		scope = 1;
		displayName = "Sd.Kfz. 222";
		model = "fow\fow_cars\sdkfz_222\fow_sdkfz_222";
	
		faction = "fow_heer";
		
		editorSubcategory = "fow_wheeled";
		
		crew = "fow_s_ger_heer_tankcrew_02_gefreiter";	
		
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fow\fow_cars\sdkfz_222\data\222_armement_co.paa","\fow\fow_cars\sdkfz_222\data\222_caisse_co.paa","\fow\fow_cars\sdkfz_222\data\222_roues_co.paa","\fow\fow_cars\sdkfz_222\data\222_turret_co.paa"};

		author = "FOW Team";
		mapSize = 9.9;
		accuracy = 0.25;
		attenuationEffectType = "SemiOpenCarAttenuation";

		memoryPointTaskMarker = "TaskMarker_1_pos";
		terrainCoef = 3.0;
		turnCoef = 3;
		canFloat = 0;
		armor = 150;
		//armorStructural = 5;
		armorLights = 0.1;
		crewExplosionProtection = 0.9995;
		damageResistance = 0.00719;
		cost = 1000000;
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)
		driverAction = "fow_222_driver";
		driverInAction = "fow_222_driver";
		cargoAction[] = {};
		hideWeaponsCargo = 1;
		driverForceOptics = 0;
		driverOpticsModel = "\A3\weapons_f\reticle\optics_empty";
		memoryPointDriverOptics = "driverview";
		cargoIsCoDriver[] = {0};
		forceHideDriver = 1;
		hideProxyInCombat = 1;
		viewDriverInExternal = 1;
		class ViewOptics: ViewOptics
		{
			visionMode[] = {"Normal"};
			initFov = 0.85;
			minFov = 0.85;
			maxFov = 0.85;
		};

		#include "physx.hpp"

		#include "sounds.hpp"	
		
		class EventHandlers: EventHandlers {
			init = "_this spawn fow_main_fnc_randomizeNumbers";
		};		
		
		class AnimationSources: AnimationSources
		{
			class CoverRight {source = "user";animPeriod = 1;initPhase=0;};
			class CoverLeft {source = "user";animPeriod = 1;initPhase=0;};
			class hatch_L {source = "user";animPeriod = 1;initPhase=0;};
			class hatch_R {source = "user";animPeriod = 1;initPhase=0;};
			class hatch_frontL {source = "user";animPeriod = 1;initPhase=0;};
			class hatch_frontR {source = "user";animPeriod = 1;initPhase=0;};
			class foliage {displayName = "Add foliage";source = "user";animPeriod = 1;initPhase=0;};
			//class ROT_muzzleFlash_1 {source = "ammorandom"; weapon = "fow_w_20mm_kwk38";};
			class ROT_muzzleFlash_2 {source = "ammorandom"; weapon = "fow_w_mg34_mounted";};
			class recoil_source {source = "reload"; weapon = "fow_w_20mm_kwk38";};
			class reloadanim {source = "reload";weapon = "fow_w_mg34_mounted";};
			class reloadmagazine {source = "reloadmagazine";weapon = "fow_w_mg34_mounted";};
			class revolving	{source = "revolving";weapon = "fow_w_mg34_mounted";};	
			//Indicators
			class Speed	{source = "speed";animPeriod = 0;initPhase = 0;};
			class Oil: Speed {source = "oil";};
			class Fuel: Speed {source = "fuel";};
			class RPM: Speed {source = "rpm";};
			class AMP: Speed {source = "rpm";};
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

		//actionBegin1 = "Lower_Windshield";
		//actionEnd1 = "PutUp_Windshield";

		class UserActions
		{
			class close_cover
			{
				showWindow = 0;
				priority = 1.5;
				displayName = "Close cover";
				position = "cover_L_axis";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "(this animationPhase ""CoverRight"" < 0.5) && (alive this) && !(player isEqualTo driver this) && (player in this)";
				statement = "this animate [""CoverRight"", 0.85];this animate [""CoverLeft"", 0.85];playSound3D [""fow\fow_sounds\vehicles\222\222_cover_close.wav"", this, false, (this modeltoworld (this selectionPosition [""cover_L_axis"",""Memory""])), 0.85]";
			};
			class open_cover: close_cover
			{
				displayName = "Open cover";
				position = "cover_L_axis";
				condition = "(this animationPhase ""CoverRight"" > 0.5) && (alive this) && !(player isEqualTo driver this) && (player in this)";
				statement = "this animate [""CoverRight"", 0];this animate [""CoverLeft"", 0];playSound3D [""fow\fow_sounds\vehicles\222\222_cover_open.wav"", this, false, (this modeltoworld (this selectionPosition [""cover_L_axis"",""Memory""])), 0.85]";
			};
			class open_hatchL
			{
				showWindow = 0;
				priority = 1.5;
				displayName = "Open hatch L";
				position = "hatch_L_axis";
				radius = 1.5;
				onlyForPlayer = 0;
				condition = "(this animationPhase ""hatch_L"" < 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_L"", 0.85];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_open.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_L_axis"",""Memory""])), 0.85]";
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
				statement = "this animate [""hatch_R"", 0.85];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_open.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_R_axis"",""Memory""])), 0.85]";
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
				statement = "this animate [""hatch_frontR"", 0.85];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_open.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_frontR_axis"",""Memory""])), 0.85]";
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
				statement = "this animate [""hatch_frontL"", 0.85];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_open.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_frontL"",""Memory""])), 0.85]";
			};
			class close_hatchfrontL: open_hatchfrontL
			{
				displayName = "Close front hatch L";
				condition = "(this animationPhase ""hatch_frontL"" > 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_frontL"", 0];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_close.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_frontL"",""Memory""])), 0.85]";
			};
		};			

		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel	{armor=0.125; passThrough=0;}; /// it is easier to destroy wheels than hull of the vehicle
			class HitLF2Wheel: HitLF2Wheel	{armor=0.125; passThrough=0;};

			class HitRFWheel: HitRFWheel	{armor=0.125; passThrough=0;};
			class HitRF2Wheel: HitRF2Wheel 	{armor=0.125; passThrough=0;};

			class HitFuel 			{armor=0.50; material=-1; name="fuel"; visual=""; passThrough=0.2;}; /// correct points for fuel tank, some of the damage is aFRLied to the whole
			class HitEngine 		{armor=0.50; material=-1; name="engine"; visual=""; passThrough=0.2;};

			class HitHull: HitHull
			{
				armor = 2.0;
				material = -1;
				name = "hull";
				visual = "zbytek";
				passThrough = 0.0;
				minimalHit = 0.1;
				explosionShielding = 1.5;
				radius = 0.2;
			};			
		};		
		
		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"fow\fow_cars\sdkfz_222\data\222_armement.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_armement_damage.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_armement_destruct.rvmat",
				
				"fow\fow_cars\sdkfz_222\data\222_chassis.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_chassis_damage.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_chassis_destruct.rvmat",
				
				"fow\fow_cars\sdkfz_222\data\222_roues.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_roues_damage.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_roues_destruct.rvmat",
				
				"fow\fow_cars\sdkfz_222\data\222_turret.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_turret_damage.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_turret_destruct.rvmat",

				"fow\fow_cars\sdkfz_222\data\222_caisse.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_caisse_damage.rvmat",
				"fow\fow_cars\sdkfz_222\data\222_caisse_destruct.rvmat"
			};
		};

		weapons[] = {"TruckHorn"};
		magazines[] = {};
		/*smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity = 14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 120;*/
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						animationSourceBody = "turret_1";
						animationSourceGun = "gun_1";
						gun = "gun_1";
						body = "turret_1";						
						
						animationSourceHatch = "HatchCommander";
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics = "commanderview";
						minElev = -25;
						maxElev = 60;
						initElev = 0;
						minTurn = -60;
						maxTurn = 60;
						initTurn = 0;
						weapons[] = {};
						magazines[] = {};
						soundServo[] = {"fow\fow_sounds\vehicles\222\222_turret",1.3,1,15};
						soundServoVertical[] = {"A3\sounds_f\dummysound", 1e-006, 1};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						forceHideGunner = 0;
						hideWeaponsGunner = 1;
						gunnerAction = "commander_apcwheeled1_out";
						gunnerInAction = "fow_222_commander";
						gunnerGetInAction = "GetInAMV_cargo";
						gunnerGetOutAction = "GetOutLow";
						gunnerOpticsModel = "";
						gunnerOutOpticsModel = "";
						gunnerForceOptics = 0;
						gunnerOpticsEffect[] = {};
						gunnerUsesPilotView = 1;
						isPersonTurret = 1;
						personTurretAction = "vehicle_turnout_1";
						minOutElev = -10;
						maxOutElev = 15;
						initOutElev = 0;
						minOutTurn = -45;
						maxOutTurn = 90;
						initOutTurn = 0;
						class ViewGunner: ViewGunner{
							minFov = 0.25;
							maxFov = 1.25;
							initFov = 0.75;
							minAngleX = -75;
							maxAngleX = 75;
							initAngleY = 0;
							//minAngleY = -110;
							//maxAngleY = 110;
						};
						showCrewAim = 1;
						startEngine = 0;
						class HitPoints
						{

						};
						stabilizedInAxes = 3;
						maxHorizontalRotSpeed = 1.8;
						maxVerticalRotSpeed = 1.8;
						gunnerHasFlares = 1;
						viewGunnerInExternal = 1;
					};
				};

				animationSourceBody = "turret_1";
				animationSourceGun = "gun_1";
				gun = "gun_1";
				body = "turret_1";
				
				gunBeg = "gun_1_beg";
				gunEnd = "gun_1_end";
				
				// Coaxial gun
				memoryPointGun = "mg34_beg";
				selectionFireAnim = "muzzleflash";
				
				memoryPointGunnerOptics = "gunnerview";
				//memoryPointGunnerOutOptics = "gunnerview_1_out";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";


				stabilizedInAxes = 4;
				outGunnerMayFire = 0;
				gunnerAction = "fow_222_gunner";
				gunnerInAction = "fow_222_gunner";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				soundServo[] = {"A3\sounds_f\dummysound",0.31622776,1,15};
				minElev = -5;
				maxElev = 40;
				minTurn = -360;
				maxTurn = 360;
				gunnerOpticsModel = "\fow\fow_cars\sdkfz_222\optic\gunner";
				primaryGunner = 1;
				enableManualFire = 0;
				gunnerForceOptics = 0;
				viewGunnerInExternal = 1;
				forceHideGunner = 1;
				startEngine = 0;
				weapons[] = {"fow_w_20mm_kwk38","fow_w_mg34_mounted"};
				magazines[] = {"fow_20Rnd_20mm_AP","fow_20Rnd_20mm_AP","fow_20Rnd_20mm_AP","fow_20Rnd_20mm_AP","fow_20Rnd_20mm_HE","fow_20Rnd_20mm_HE","fow_20Rnd_20mm_HE","fow_20Rnd_20mm_HE","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57","fow_200Rnd_792x57"};
				class HitPoints
				{
					class HitTurret
					{
						armor = 0.8;
						material = -1;
						name = "turret_1";
						visual = "turret_1";
						passThrough = 0.5;
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
		};
		
		viewCargoShadowDiff = 0.05;
		viewCargoShadowAmb = 0.5;
		getInAction = "GetInHigh";
		getOutAction = "GetOutHigh";
		cargoGetInAction[] = {"GetInAMV_cargo"};
		cargoGetOutAction[] = {"GetOutLow"};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustsEffectAMV";
			};
		};
		engineStartSpeed = 5;

		//explosionEffect = "FuelExplosionBig";
		engineEffectSpeed = 5.0;
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
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
		transportSoldier = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGDriver = 0;
		/*class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};*/
		
		animationList[] =
		{
			"foliage",0
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
				textures[] = {"\fow\fow_cars\sdkfz_222\data\222_armement_co.paa","\fow\fow_cars\sdkfz_222\data\222_caisse_co.paa","\fow\fow_cars\sdkfz_222\data\222_roues_co.paa","\fow\fow_cars\sdkfz_222\data\222_turret_co.paa"};
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
				textures[] = {"\fow\fow_cars\sdkfz_222\data\222_armement_co.paa","\fow\fow_cars\sdkfz_222\data\222_caisse_camo01_co.paa","\fow\fow_cars\sdkfz_222\data\222_roues_camo01_co.paa","\fow\fow_cars\sdkfz_222\data\222_turret_camo01_co.paa"};
				// This source should be available for the following factions
				factions[] = 
				{
					"fow_heer","fow_waffenss"
				};
			};
		};
	};
	/*
	class fow_v_sdkfz_222_foliage: fow_v_sdkfz_222 {
		displayName = "Sd.Kfz. 222 (foliage)";
		class AnimationSources: AnimationSources
		{
			class foliage {source = "user";animPeriod = 1;initPhase=1;};
		};
	};
	class fow_v_sdkfz_222_camo: fow_v_sdkfz_222 {
		displayName = "Sd.Kfz. 222 Camo";
		hiddenSelectionsTextures[] = {"\fow\fow_cars\sdkfz_222\data\222_armement_co.paa","\fow\fow_cars\sdkfz_222\data\222_caisse_camo01_co.paa","\fow\fow_cars\sdkfz_222\data\222_roues_camo01_co.paa","\fow\fow_cars\sdkfz_222\data\222_turret_camo01_co.paa"};
	};
	class fow_v_sdkfz_222_camo_foliage: fow_v_sdkfz_222_camo {
		displayName = "Sd.Kfz. 222 Camo (foliage)";
		class AnimationSources: AnimationSources
		{
			class foliage {source = "user";animPeriod = 1;initPhase=1;};
		};
	};
	*/
	
	//HEER
	class fow_v_sdkfz_222_ger_heer: fow_v_sdkfz_222 {
		scope = 2;
	};
	class fow_v_sdkfz_222_foliage_ger_heer: fow_v_sdkfz_222_ger_heer {
		displayName = "Sd.Kfz. 222 (foliage)";
		class AnimationSources: AnimationSources
		{
			class foliage {scope = 2;source = "user";animPeriod = 1;initPhase=1;};
		};
	};
	class fow_v_sdkfz_222_camo_ger_heer: fow_v_sdkfz_222_ger_heer {
		displayName = "Sd.Kfz. 222 Camo";
		hiddenSelectionsTextures[] = {"\fow\fow_cars\sdkfz_222\data\222_armement_co.paa","\fow\fow_cars\sdkfz_222\data\222_caisse_camo01_co.paa","\fow\fow_cars\sdkfz_222\data\222_roues_camo01_co.paa","\fow\fow_cars\sdkfz_222\data\222_turret_camo01_co.paa"};
	};
	class fow_v_sdkfz_222_camo_foliage_ger_heer: fow_v_sdkfz_222_camo_ger_heer {
		displayName = "Sd.Kfz. 222 Camo (foliage)";
		class AnimationSources: AnimationSources
		{
			class foliage {source = "user";animPeriod = 1;initPhase=1;};
		};
	};
	
	//SS
	class fow_v_sdkfz_222_ger_ss: fow_v_sdkfz_222 {
		scope = 2;
		faction = "fow_waffenss";
	};
	class fow_v_sdkfz_222_foliage_ger_ss: fow_v_sdkfz_222_ger_ss {
		displayName = "Sd.Kfz. 222 (foliage)";
		class AnimationSources: AnimationSources
		{
			class foliage {source = "user";animPeriod = 1;initPhase=1;};
		};
	};
	class fow_v_sdkfz_222_camo_ger_ss: fow_v_sdkfz_222_ger_ss {
		displayName = "Sd.Kfz. 222 Camo";
		hiddenSelectionsTextures[] = {"\fow\fow_cars\sdkfz_222\data\222_armement_co.paa","\fow\fow_cars\sdkfz_222\data\222_caisse_camo01_co.paa","\fow\fow_cars\sdkfz_222\data\222_roues_camo01_co.paa","\fow\fow_cars\sdkfz_222\data\222_turret_camo01_co.paa"};
	};
	class fow_v_sdkfz_222_camo_foliage_ger_ss: fow_v_sdkfz_222_camo_ger_ss {
		displayName = "Sd.Kfz. 222 Camo (foliage)";
		class AnimationSources: AnimationSources
		{
			class foliage {source = "user";animPeriod = 1;initPhase=1;};
		};
	};