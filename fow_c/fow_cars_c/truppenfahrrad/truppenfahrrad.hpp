	
	class fow_truppenfahrrad: Car_F
	{
		htMin = 60;
		htMax = 1800;
		afMax = 100;
		mfMax = 80;
		mFact = 0;
		tBody = 0;
		scope = 1;
		displayName = "Truppenfahrrad";
		model = "fow\fow_cars\truppenfahrrad\truppenfahrrad";
		//icon = "fow\fow_cars\willys\data\ui\willys_ui_ca.paa";
		//picture = "fow\fow_cars\willys\data\ui\willys_ca.paa";
		faction = "fow_heer";
		side = 1;
		
		weapons[] = {"fow_bikeHorn"};
		
		editorSubcategory = "fow_wheeled";
		
		crew = "fow_s_ger_heer_rifleman";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_cars\truppenfahrrad\data\truppenfahrrad_co.paa"};

		driverLeftHandAnimName 	= "volant";
		driverRightHandAnimName = "volant";
		driverLeftLegAnimName 	= "slapka_leva";
		driverRightLegAnimName = "slapka_prava";
		ejectDeadDriver = 1;
		
		attenuationEffectType = "OpenCarAttenuation";

		memorypointtrackbll = "Stopa ZLL";
		memorypointtrackblr = "Stopa ZLP";
		memorypointtrackbrl = "Stopa ZPL";
		memorypointtrackbrr = "Stopa ZPP";
		memorypointtrackfll = "Stopa PLL";
		memorypointtrackflr = "Stopa PLP";
		memorypointtrackfrl = "Stopa PPL";
		memorypointtrackfrr = "Stopa PPP";
		dustFrontLeftPos = "Stopa PPL";
		dustFrontRightPos = "Stopa PPP";
		dustBackLeftPos = "Stopa ZPL";
		dustBackRightPos = "Stopa ZPP";

		driverAction = "fow_bike_driver";
		driverInAction = "fow_bike_driver";
		
		#include "physX.hpp"
		#include "sounds.hpp"
		
		mapSize = 3;
		isBicycle = 1;
		extCameraPosition[] = {0,0,-3};
		class HitPoints: HitPoints
		{
			class HitBody
			{
				armor = 1;
				material = 51;
				name = "karoserie";
				visual = "";
				passThrough = 1;
			};
			class HitFuel
			{
				armor = 0.3;
				material = 51;
				name = "palivo";
				passThrough = 0;
			};
			class HitFWheel
			{
				armor = 1;
				material = -1;
				name = "wheel_1_1_damper";
				visual = "wheel_1";
				passThrough = 0;
			};
			class HitBWheel
			{
				armor = 1;
				material = -1;
				name = "wheel_2_1_damper";
				visual = "wheel_2";
				passThrough = 0;
			};
			class HitEngine
			{
				armor = 0.4;
				material = -1;
				name = "motor";
				visual = "";
				passThrough = 0;
			};
		};
		class AnimationSources
		{
			class Hit_wheel_1
			{
				source = "Hit";
				hitpoint = "HitFWheel";
				raw = 1;
			};
			class Hit_wheel_2: Hit_wheel_1
			{
				hitpoint = "HitBWheel";
			};
			class pedaly
			{
				animPeriod = 0.7;
				source = "user";
				initPhase = 0;
			};
		};
		threat[] = {0,0,0};
		armor = 5;
		transportSoldier = 0;
		cargoAction[] = {};
		secondaryExplosion = 0;
		//leftDustEffect = "NoDust";
		//rightDustEffect = "NoDust";
		transportMaxMagazines = 0;
		transportMaxWeapons = 0;
		class Reflectors {
			class Light_1
			{
				color[]={800,900,650};
				ambient[]={2,2,2};
				position="Light_1_Start";
				direction="Light_1_End";
				hitpoint="light";
				selection="Light_5";
				size=1;
				innerAngle=30;
				outerAngle=170;
				coneFadeCoef=10;
				intensity=.2;
				useFlare=1;
				dayLight=0;
				flareSize=0.85;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Light_2: Light_1
			{
				position="Light_2_Start";
				direction="Light_2_End";
			};
			class Light_3: Light_1
			{
				position="Light_3_Start";
				direction="Light_3_End";
			};
			class Light_4: Light_1
			{
				position="Light_4_Start";
				direction="Light_4_End";
			};
			class Light_5: Light_1
			{
				position="Light_5_Start";
				direction="Light_5_End";
			};
		};
		class EventHandlers: EventHandlers
		{
			class fow_pedals_EH
			{
				engine = "_this spawn fow_fnc_pedals";
			};
		};
		class Turrets {

		};
	};
	class fow_v_truppenfahrrad_ger_heer: fow_truppenfahrrad {
		scope = 2;
	};
	class fow_v_truppenfahrrad_ger_ss: fow_truppenfahrrad {
		scope = 2;
		faction = "fow_waffenss";
		crew = "fow_s_ger_ss_rifleman";
	};
	
	
	//Backward comp
	class fow_ger_truppenfahrrad: fow_truppenfahrrad {
		scope = 1;
	};
	