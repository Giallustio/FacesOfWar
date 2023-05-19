	class fow_v_sdkfz_234_1: Wheeled_APC_F
	{
		side = 1;
		scope = 2;
		displayName = "Sd.Kfz. 234/1";
		model = "fow\fow_cars\sdkfz_234_1\sdkfz_234_1";
	
		faction = "fow_heer";
		
		editorSubcategory = "fow_wheeled";
		
		crew = "fow_s_ger_heer_tankcrew_02_gefreiter";	
		
		hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5"};
		hiddenSelectionsTextures[] = {"\fow\fow_cars\sdkfz_234_1\data\fow_sdkfz_234_1_caisse_co.paa","\fow\fow_cars\sdkfz_234_1\data\fow_sdkfz_234_1_turret_co.paa","\fow\fow_cars\sdkfz_234_1\data\fow_sdkfz_234_1_armement_co.paa","\fow\fow_cars\sdkfz_234_1\data\fow_sdkfz_234_1_chassis_co.paa","\fow\fow_cars\sdkfz_234_1\data\fow_sdkfz_234_1_roues_co.paa"};

		author = "FOW Team";
		mapSize = 9.9;
		accuracy = 0.25;
		attenuationEffectType = "SemiOpenCarAttenuation";

		memoryPointTaskMarker = "TaskMarker_1_pos";
		terrainCoef = 3.0;
		turnCoef = 3;
		canFloat = 0;
		waterAngularDampingCoef = 10.0;
		waterPPInVehicle = 0;
		waterResistanceCoef = 0.5;
		engineShiftY = 0.5;
		armor = 200;
		armorStructural = 5;
		armorLights = 0.1;
		crewExplosionProtection = 0.9995;
		damageResistance = 0.00719;
		cost = 1000000;
		driverLeftHandAnimName 	= "drivewheel"; /// according to what bone in model of car does hand move
		driverRightHandAnimName = "drivewheel";	/// beware, non-existent bones may cause game crashes (even if the bones are hidden during play)
		driverAction = "fow_234_driver";
		driverInAction = "fow_234_driver";
		cargoAction[] = {};
		hideWeaponsCargo = 1;
		driverForceOptics = 0;
		driverOpticsModel = "";
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
		
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				/*armor = 1.0;
				material = -1;
				name = "karoserie";
				visual = "zbytek";
				passThrough = 0.5;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.4;*/
			};
			class HitEngine: HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				passThrough = 0.5;
				minimalHit = 0.1;
				explosionShielding = 0.2;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "fuel";
				passThrough = 0.5;
				minimalHit = 0.1;
				explosionShielding = 0.5;
				radius = 0.3;
			};
			class HitHull: HitHull
			{
				armor = 2.0;
				material = -1;
				name = "hull";
				visual = "zbytek";
				passThrough = 0.0;
				minimalHit = 0.1;
				explosionShielding = 1.5;
				radius = 0.3;
			};
			class HitLFWheel: HitLFWheel
			{
				visual = "wheel_1_1_hide";
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitLBWheel: HitLBWheel
			{
				visual = "wheel_1_4_hide";
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitLMWheel: HitLMWheel
			{
				visual = "wheel_1_3_hide";
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				visual = "wheel_1_2_hide";
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRFWheel: HitRFWheel
			{
				visual = "wheel_2_1_hide";
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRBWheel: HitRBWheel
			{
				visual = "wheel_2_4_hide";
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRMWheel: HitRMWheel
			{
				visual = "wheel_2_3_hide";
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				visual = "wheel_2_2_hide";
				armor = 0.5;
				minimalHit = 0.02;
				explosionShielding = 4;
				radius = 0.33;
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
						minTurn = -360;
						maxTurn = 360;
						initTurn = 0;
						weapons[] = {};
						magazines[] = {};
						soundServo[] = {"A3\sounds_f\dummysound", 1e-006, 1};
						soundServoVertical[] = {"A3\sounds_f\dummysound", 1e-006, 1};
						outGunnerMayFire = 0;
						inGunnerMayFire = 1;
						forceHideGunner = 0;
						hideWeaponsGunner = 1;
						gunnerAction = "commander_apcwheeled1_out";
						gunnerInAction = "fow_234_commander";
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
				gunnerAction = "fow_234_gunner";
				gunnerInAction = "fow_234_gunner";
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
		
		class EventHandlers: EventHandlers {
			init = "_this spawn fow_main_fnc_randomizeNumbers";
		};		
		
		class AnimationSources: AnimationSources
		{
			class CoverRight {source = "user";animPeriod = 1;initPhase=0;};
			class CoverLeft {source = "user";animPeriod = 1;initPhase=0;};
			class hatch_L {source = "user";animPeriod = 1;initPhase=0;};
			class hatch_R {source = "user";animPeriod = 1;initPhase=0;};
			class hatch_F {source = "user";animPeriod = 1;initPhase=0;};
			//class foliage {source = "user";animPeriod = 1;initPhase=1;};
			class net {displayName = "Add net";source = "user";animPeriod = 1;initPhase=0;};
			//class ROT_muzzleFlash_1 {source = "ammorandom"; weapon = "fow_w_20mm_kwk38";};
			class ROT_muzzleFlash_2 {source = "ammorandom"; weapon = "fow_w_mg34_mounted";};
			class recoil_source {source = "reload"; weapon = "fow_w_20mm_kwk38";};
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
		
		animationList[] =
		{
			"net",0.5
		};
		
		/*class textureSources
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
		};*/
		
		class UserActions
		{
			class close_cover
			{
				showWindow = 0;
				priority = 1.5;
				displayName = "Close cover";
				position = "cover_L_axis";
				radius = 5.5;
				onlyForPlayer = 0;
				condition = "(this animationPhase ""CoverRight"" < 0.5) && (alive this) && !(player isEqualTo driver this) && (player in this)";
				statement = "this animate [""CoverRight"", 1];this animate [""CoverLeft"", 1];this animate [""CoverLeft"", 0.85];playSound3D [""fow\fow_sounds\vehicles\222\222_cover_close.wav"", this, false, (this modeltoworld (this selectionPosition [""cover_L_axis"",""Memory""])), 0.85]";
			};
			class open_cover: close_cover
			{
				displayName = "Open cover";
				position = "cover_L_axis";
				condition = "(this animationPhase ""CoverRight"" > 0.5) && (alive this) && !(player isEqualTo driver this) && (player in this)";
				statement = "this animate [""CoverRight"", 0];this animate [""CoverLeft"", 0];this animate [""CoverLeft"", 0];playSound3D [""fow\fow_sounds\vehicles\222\222_cover_open.wav"", this, false, (this modeltoworld (this selectionPosition [""cover_L_axis"",""Memory""])), 0.85]";
			};
			class open_hatchL
			{
				showWindow = 0;
				priority = 1.5;
				displayName = "Open hatch L";
				position = "hatch_L_axis";
				radius = 5.5;
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
			class open_hatchF: open_hatchL
			{
				priority = 1.6;
				displayName = "Open front hatch";
				position = "hatch_F_axis";
				condition = "(this animationPhase ""hatch_F"" < 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_F"", 1];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_open.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_F_axis"",""Memory""])), 0.85]";
			};
			class close_hatchF: open_hatchF
			{
				displayName = "Close front hatch";
				condition = "(this animationPhase ""hatch_F"" > 0.5) && (alive this) && (player isEqualTo driver this)";
				statement = "this animate [""hatch_F"", 0];playSound3D [""fow\fow_sounds\vehicles\222\222_hatch_close.wav"", this, false, (this modeltoworld (this selectionPosition [""hatch_F_axis"",""Memory""])), 0.85]";
			};
		};

		class Damage
		{
			tex[] = {};
			mat[] = {
				"fow\fow_cars\sdkfz_234_1\data\234_1_caisse.rvmat",
				"fow\fow_cars\sdkfz_234_1\data\234_1_caisse_damage.rvmat",
				"fow\fow_cars\sdkfz_234_1\data\234_1_caisse_destruct.rvmat",
				
				"fow\fow_cars\sdkfz_234_1\data\234_1_turret.rvmat",
				"fow\fow_cars\sdkfz_234_1\data\234_1_turret_damage.rvmat",
				"fow\fow_cars\sdkfz_234_1\data\234_1_turret_destruct.rvmat",
				
				"fow\fow_cars\sdkfz_234_1\data\234_1_armement.rvmat",
				"fow\fow_cars\sdkfz_234_1\data\234_1_armement_damage.rvmat",
				"fow\fow_cars\sdkfz_234_1\data\234_1_armement_destruct.rvmat",
				
				"fow\fow_cars\sdkfz_234_1\data\234_1_chassis.rvmat",
				"fow\fow_cars\sdkfz_234_1\data\234_1_chassis_damage.rvmat",
				"fow\fow_cars\sdkfz_234_1\data\234_1_chassis_destruct.rvmat"
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

		explosionEffect = "FuelExplosionBig";
		engineEffectSpeed = 5.0;
		memoryPointsLeftEngineEffect = "EngineEffectL";
		memoryPointsRightEngineEffect = "EngineEffectR";
		class Reflectors
		{

		};
		aggregateReflectors[] = {};
		selectionFireAnim = "";
		class RenderTargets
		{

		};
		transportSoldier = 0;
		showNVGCommander = 0;
		showNVGGunner = 0;
		showNVGDriver = 0;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"BBox_1_1_pos","BBox_1_2_pos"};
			};
		};
	};
