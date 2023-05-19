	
	
	class fow_va_a6m_base: fow_va_plane_base
	{
		scope = 0;  					//base class should be hidden
		side = 1;
		displayName = "A6M2b Zero (White)";
		faction = "fow_ija_nas";
		crew = "fow_s_ija_pilot"; 
		typicalCargo[] = {"fow_s_ija_pilot"};
		model = "\fow\fow_air\zero\wx_zero.p3d";
		
		picture = "fow\fow_air\hellcat\data\ui\wx_us_hellcat_picture_ca.paa";
		icon = "fow\fow_air\hellcat\data\ui\map_us_hellcat_icon_ca.paa";
		editorpreview = "fow\fow_air\hellcat\data\ui\wx_us_hellcat_picture_ca.paa";

		hiddenSelections[] = {"_swaptex01", "_2x20", "_Bombcarry", "_RocketRails"};
		hiddenSelectionsTextures[] = {"\fow\fow_air\hellcat\data\wx_us_Hellcat_co.paa"};		
		
		memoryPointGun[] = {"Cannon_L_muzzle","Cannon_R_muzzle"};
		gunBeg[] = {"Cannon_L_muzzle","Cannon_R_muzzle"};
		gunEnd[] = {"Cannon_L_Chamber","Cannon_R_Chamber"};
		
		weapons[] = {"fow_w_type77a_mg_2x", "fow_w_type99_cannon_2x"};
		magazines[] = {"fow_1000Rnd_77x56_Tracer_Yellow","fow_120Rnd_20mm_shells"};
		
		class Turrets {};	// single seat planes don't have any kind of turret, we need to void it

		class TransportItems{};	// planes are usually not used to transport items, there could possibly be a few FAKs


		class Exhausts
		{
			class Exhaust_1
			{
				position = "exStart1";
				direction = "exEnd1";
				effect = "ExhaustsEffectPlaneSmall";
			};
			class Exhaust_2
			{
				position = "exStart2";
				direction = "exEnd2";
				effect = "ExhaustsEffectPlaneSmall";
			};
			class Exhaust_3
			{
				position = "exStart3";
				direction = "exEnd3";
				effect = "ExhaustsEffectPlaneSmall";
			};
			class Exhaust_4
			{
				position = "exStart4";
				direction = "exEnd4";
				effect = "ExhaustsEffectPlaneSmall";
			};
		};

		
		#include "sounds.hpp" 						// sounds are included in separate file to prevent cluttering
		#include "flightModel.hpp"					// flight model is included in separate file to prevent cluttering, too

		driveOnComponent[] = {"wheel_R","wheel_L","wheel_tail"};  // array of components to be assigned special low-friction material (usually wheels) - not used anymore, for PhysX suspension use blank array (old array was - {"wheel_1","wheel_2","wheel_3"} )

		class Components {};

		class Reflectors		// landing lights of the plane, turned on by AI while in night and "careless" or "safe"
		{
			class Left
			{
				color[] = {7000, 7500, 10000, 1}; 	// defines red, green, blue and alpha components of the light
				ambient[] = {100, 100, 100};		// the same definition format for colouring the environment around
				position = "Light_L";				// name of memory point in model to take the origin of the light
				direction = "Light_L_end";			// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_L";				// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_L";				// name of selection in visual lods of the model that are going to be hidden while the light is off
				innerAngle = 20;					// angle from light direction vector where the light is at full strength
				outerAngle = 60;					// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;					// coefficient of fading the light between inner and outer cone angles
				intensity = 50;						// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				useFlare = true;					// boolean switch if the light produces flare or not
				dayLight = false;					// boolean switch if the light is used during day or not
				FlareSize = 4;						// how big is the flare, using the same metrics as intensity
				size = 1;							// defines the visible size of light, has not much of an effect now
				class Attenuation					// describes how fast does the light dim
				{
					start = 1;						// offset of start of the attenuation
					constant = 0;					// constant attenuation of the light in any distance from source
					linear = 0;						// coefficient for linear attenuation
					quadratic = 4;					// coefficient for attenuation with square of distance from source

					hardLimitStart = 150;			// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 300;				// distance from source where the light is not displayed (shorter distances increase performance)
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};

		class Hitpoints: Hitpoints {};

		class Damage
		{
			tex[] = {};
			mat[] = 
			{
				"fow\fow_air\data\glass.rvmat",
				"fow\fow_air\data\glass_damage.rvmat",
				"fow\fow_air\data\glass_destruct.rvmat",
				
				"fow\fow_air\data\glass_cockpit.rvmat",
				"fow\fow_air\data\glass_cockpit_damage.rvmat",
				"fow\fow_air\data\glass_cockpit_destruct.rvmat",
				
				"fow\fow_air\zero\data\wx_zero.rvmat",
				"fow\fow_air\zero\data\wx_zero_damage.rvmat",
				"fow\fow_air\zero\data\wx_zero_destruct.rvmat"
			};
		};
		

		
		
		//memoryPointDriverOptics	= "PilotCamera_pos";		//mem. point for pilot camera
		//unitInfoType			= "RscOptics_CAS_Pilot";	//rsc with DriverOptics elements
		//driverWeaponsInfoType	= "RscOptics_CAS_01_TGP";	//resource with Weapon UI elements that will be used when looking through the pilotCamera

		class AnimationSources
		{
			class wx_zero_cannon_muzzleflash
			{
				source = "reload";
				weapon = "fow_w_type99_cannon_2x";
			};
			class wx_zero_cannon_recoil
			{
				source = "reload";
				weapon = "fow_w_type99_cannon_2x";
			};
			class wx_zero_cannon_rot
			{
				source = "ammorandom";
				animPeriod = 0.0001;
				initPhase= 0;
				weapon = "fow_w_type99_cannon_2x";
			};
			class wx_zero_mg_muzzleflash
			{
				source = "reload";
				weapon = "fow_w_type77a_mg_2x";
			};
			class wx_zero_mg_recoil
			{
				source = "reload";
				weapon = "fow_w_type77a_mg_2x";
			};
			class wx_zero_mg_rot
			{
				source = "ammorandom";
				animPeriod = 0.0001;
				initPhase= 0;
				weapon = "fow_w_type77a_mg_2x";
			};
			class canopy
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
			class wx_arrestorhook
			{
				source = "user";
				animPeriod = 3;
				initPhase = 0;
			};
		};

		actionBegin1 = "opencanopy";
		actionEnd1 = "closecanopy";
		actionBegin2 = "extend_ArrestorHook";
		actionEnd2 = "retract_ArrestorHook";
		class UserActions
		{
			class opencanopy
			{
				displayName = "Open canopy";
				position = "osa_canopy";
				radius = 5;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				condition = "this animationPhase ""Canopy"" < 0.5";
				statement = "this animate [""Canopy"", 1];";
			};
			class closecanopy
			{
				displayName = "Close canopy";
				position = "osa_canopy";
				radius = 5;
				onlyforplayer = 1;
				showWindow = 0;
				hideOnUse = 1;
				condition = "this animationPhase ""Canopy"" >= 0.5 ";
				statement = "this animate [""Canopy"", 0];";
			};
			class extend_arrestorhook
			{
				showWindow = 0;
				priority = 5;
				displayName = "Deploy arrestor hook";
				position = "osa_canopy";
				radius = 2;
				onlyForPlayer = 1;
				condition = "this animationPhase ""wx_arrestorhook"" < 0.5";
				statement = "this animate [""wx_arrestorhook"", 1]; this animate [""wx_arrestorhook_extendbackwards"", 1];";
			};
			class retract_arrestorhook
			{
				showWindow = 0;
				priority = 5;
				displayName = "Retract arrestor hook";
				position = "osa_canopy";
				radius = 2;
				onlyForPlayer = 1;
				condition = "this animationPhase ""wx_arrestorhook"" >= 0.5";
				statement = "this animate [""wx_arrestorhook"", 0]; this animate [""wx_arrestorhook_extendbackwards"", 0];";
			};
/*
			class extend_arrestorhook
			{
				showWindow = 0;
				priority = 5;
				displayName = "Deploy arrestor hook";
				position = "osa_canopy";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""wx_arrestorhook"" < 0.5) && (this animationPhase ""wx_arrestorhook_extendbackwards"" < 0.5) && (alive this)";
				statement = "this animate [""wx_arrestorhook"", 1]; this animate [""wx_arrestorhook_extendbackwards"", 1]; if (!(isNil 'DIH_cv_fnc_aHook')) THEN {[this,player] call DIH_cv_fnc_aHook;};";
			};
			class retract_arrestorhook
			{
				showWindow = 0;
				priority = 5;
				displayName = "Retract arrestor hook";
				position = "osa_canopy";
				radius = 2;
				onlyForPlayer = 1;
				condition = "(this animationPhase ""wx_arrestorhook"" >= 0.5) && (this animationPhase ""wx_arrestorhook_extendbackwards"" >= 0.5)";
				statement = "this animate [""wx_arrestorhook"", 0]; this animate [""wx_arrestorhook_extendbackwards"", 0]; if (!(isNil 'DIH_cv_fnc_aHook')) THEN {[this,player] call DIH_cv_fnc_aHook;};";
			};
*/
		};
/*
		class TextureSources
		{
			class Teeth
			{
				displayName = "Teeth";
				author = "Bohemia Interactive";
				textures[] = {"\fow\fow_air\hellcat\data\wx_us_Hellcat_co.paa"};
				factions[] = {"CIV_F", "IND_C_F"};
			};
			class Death
			{
				displayName = "Death N Destruction";
				author = "Bohemia Interactive";
				textures[] = {"\fow\fow_air\hellcat\data\wx_us_Hellcat_death_co.paa"};
				factions[] = {"CIV_F", "IND_C_F"};
			};
			class Donald
			{
				displayName = "Donald Duck";
				author = "Bohemia Interactive";
				textures[] = {"\fow\fow_air\hellcat\data\wx_us_hellcat_donald_co.paa"};
				factions[] = {"CIV_F", "IND_C_F"};
			};
			class Sweet
			{
				displayName = "Sweet One";
				author = "Bohemia Interactive";
				textures[] = {"\fow\fow_air\hellcat\data\wx_us_hellcat_sweet_co.paa"};
				factions[] = {"CIV_F", "IND_C_F"};
			};
		};
		textureList[] = {"Teeth", 1, "Death", 1, "Donald", 1, "Sweet", 1};
*/		
		
	};
	
	class fow_va_a6m_white: fow_va_a6m_base
	{
		scope = 2;
		displayName = "A6M2b Zero (White)";
		
		hiddenSelections[] = {"_swaptex01", "_FuelPod"};
		hiddenSelectionsTextures[] = {"\fow\fow_air\zero\data\wx_zero_silver_co.paa"};
		
		weapons[] = {"fow_w_type77a_mg_2x", "fow_w_type99_cannon_2x"};
		magazines[] = {"fow_1000Rnd_77x56_Tracer_Yellow","fow_120Rnd_20mm_shells"};

		/*
		draconicForceXCoef = 2.5;
		draconicForceYCoef = 0.5;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef = 0.15;
		draconicTorqueYCoef = 2.0;*/

	};
	class fow_va_a6m_green: fow_va_a6m_white
	{
		displayName = "A6M2 Zero (Green)";
		hiddenSelectionsTextures[] = {"\fow\fow_air\zero\data\wx_zero_green_co.paa"};
	};

/*
	class FOW_F6F_b: FOW_F6F
	{
		displayName = "F6F HellCat + 114kg bombs";
		scope = 2;
		weapons[] = {"FOW_6x127_MG","WX_US_bomblauncher"};
		magazines[] = {"FOW_2400Rnd_127x99_mag_Tracer_Red","WX_US_Rocketx6","WX_US_002Rnd_114Kg"};
		hiddenSelections[] = {"_SwapTex01","_RocketRails","_2x20","_Rockets"};
	};
	class FOW_F6F_r: FOW_F6F_b
	{
		displayName = "F6F HellCat + rockets";
		weapons[] = {"FOW_6x127_MG","WX_US_Rocketlauncher"};
		magazines[] = {"FOW_2400Rnd_127x99_mag_Tracer_Red","WX_US_Rocketx6","WX_airMagEmpty","WX_airMagEmpty"};
		hiddenSelections[] = {"_SwapTex01","_BombCarry","_2x20"};
	};
*/
	