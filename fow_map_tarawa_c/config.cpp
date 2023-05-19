
class CfgPatches
{
	class fow_map_tarawa_c
	{
		units[] = {};
		weapons[] = {};
		name = "FOW Tarawa";
		requiredVersion = 1.0;
		requiredAddons[] = {"A3_Data_F","fow_main","fow_structures_p"};
		fileName = "fow_map_tarawa.pbo";
	};
};
class CfgVehicles
{
	class All;
	class AllVehicles: All{};
	class Land: AllVehicles{};
	class LandVehicle: Land{};
	class Car: LandVehicle
	{
		leftDustEffects[] = {{"trw_field","LDustEffects"},{"trw_field","LDirtEffects"},{"trw_grass_green","LDustEffects"},{"trw_grass_green","LDirtEffects"},{"trw_beach","LDustEffects"},{"trw_beach","LGrassEffects"},{"trw_beach","LDirtEffects"}};
		rightDustEffects[] = {{"trw_field","RDustEffects"},{"trw_field","RDirtEffects"},{"trw_grass_green","RDustEffects"},{"trw_grass_green","RDirtEffects"},{"trw_beach","RDustEffects"},{"trw_beach","RGrassEffects"},{"trw_beach","RDirtEffects"}};
	};
	class Motorcycle: LandVehicle{};
	class Wheeled_APC: Car{};
	class Truck: Car{};
	class Bus: Car{};
	class Tractor: Car{};
	class Air: AllVehicles
	{
		leftDustEffects[] = {{"trw_field","LDustEffects"},{"trw_field","LDirtEffects"},{"trw_grass_green","LDustEffects"},{"trw_grass_green","LDirtEffects"},{"trw_beach","LDustEffects"},{"trw_beach","LGrassEffects"},{"trw_beach","LDirtEffects"}};
		rightDustEffects[] = {{"trw_field","RDustEffects"},{"trw_field","RDirtEffects"},{"trw_grass_green","RDustEffects"},{"trw_grass_green","RDirtEffects"},{"trw_beach","RDustEffects"},{"trw_beach","RGrassEffects"},{"trw_beach","RDirtEffects"}};
	};
	class Helicopter: Air{};
	class GunShip: Helicopter{};
	class TransportHelicopter: Helicopter{};
	class Plane: Air{};
	class UAV: Plane{};
	class Fighter: Plane{};
	class CargoAirplane: Plane{};
	class tank: LandVehicle
	{
		leftDustEffects[] = {{"trw_field","LDustEffects"},{"trw_field","LDirtEffectsBig"},{"trw_grass_green","LDustEffects"},{"trw_grass_green","LDirtEffectsBig"},{"trw_beach","LDustEffects"},{"trw_beach","LGrassEffectsBig"},{"trw_beach","LDirtEffectsBig"}};
		rightDustEffects[] = {{"trw_field","RDustEffects"},{"trw_field","RDirtEffectsBig"},{"trw_grass_green","RDustEffects"},{"trw_grass_green","RDirtEffectsBig"},{"trw_beach","RDustEffects"},{"trw_beach","RGrassEffectsBig"},{"trw_beach","RDirtEffectsBig"}};
	};
	class APC: Tank{};
	class Man: Land
	{
		rightDustEffects[] = {{"trw_field","RDustEffectsMan"},{"trw_grass_green","RDustEffectsMan"},{"cype_dirt","RDustEffectsMan"},{"trw_beach","RDustEffectsMan"}};
		leftDustEffects[] = {{"trw_field","LDustEffectsMan"},{"trw_grass_green","LDustEffectsMan"},{"cype_dirt","LDustEffectsMan"},{"trw_beach","LDustEffectsMan"}};
	};
};
class CfgLensFlare
{
	flarePos[] = {0.0,0.0,0.37,0.47,0.5,0.54,0.62,0.72,0.75,0.91,1.0,1.084,1.13,1.29,1.62,1.68};
	flareSizeCam[] = {0.2,0.4,0.025,0.05,0.042,0.043,0.04,0.75,0.6,0.7,0.15,0.85,0.44,0.45,0.55,0.1};
	flareBright[] = {1.0,0.3,0.3,0.3,0.3,0.4,0.4,0.05,0.03,0.12,0.05,0.08,0.05,0.2,0.2,1.0};
	flareSizeEye[] = {0.04};
	flareSizeEyeSun[] = {0.04};
};
class CfgMaterials
{
	class Water;
	class Shore;
	class ShoreFoam;
};
class CfgWorlds
{
	class DefaultWorld
	{
		cutscenes[] = {};
		class Weather
		{
			class Overcast;
		};
	};
	class CAWorld: DefaultWorld
	{
		class Grid{};
		class WaterExPars;
		class EnvSounds;
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class Weather: Weather
		{
			class Lighting;
			class Overcast: Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class DefaultLighting;
	class fow_map_tarawa: CAWorld
	{
		access = 3;
		worldId = 95;
		cutscenes[] = {};
		description = "[FOW] - Tarawa Betio";
		icon = "";
		worldName = "fow_map_tarawa\fow_map_tarawa.wrp";
		pictureMap = "\fow_map_tarawa\data\pictures\Ped_Tarawa_UI.paa";
		pictureShot = "\fow_map_tarawa\data\pictures\Ped_Tarawa_UI.paa";
		plateFormat = "AX$-####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		author = "Pedersen/Updated by CypeRevenge";
		startTime = "11:00";
		startDate = "20/11/1943";
		mapSize = 5120;
		mapZone = 59;
		longitude = 172;
		latitude = 1.6;
		elevationOffset = 0;
		seaBedUnderwaterDepth = 52;
		minHillsAltitude = 0;
		maxHillsAltitude = 10;
		minTreesInForestSquare = 20;
		minRocksInRockSquare = 2;
		class EnvMaps
		{
			class EnvMap1
			{
				texture = "fow_map_tarawa\data\env_land_ClearSky_ca.paa";
				overcast = 0;
			};
			class EnvMap2
			{
				texture = "fow_map_tarawa\data\env_land_SemiCloudySky_ca.paa";
				overcast = 0.4;
			};
			class EnvMap3
			{
				texture = "fow_map_tarawa\data\env_land_OvercastSky_ca.paa";
				overcast = 0.8;
			};
		};
		class OutsideTerrain
		{
			satellite = "fow_map_tarawa\data\s_satout_co.paa";
			enableTerrainSynth = 0;
			class Layers
			{
				class Layer0
				{
					nopx = "fow_map_tarawa\data\trw_field_nopx.paa";
					texture = "fow_map_tarawa\data\trw_field_co.paa";
				};
			};
			colorOutside[] = {0.227451,0.27451,0.384314,1};
		};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 5120;
			class Zoom1
			{
				zoomMax = 0.05;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2
			{
				zoomMax = 0.5;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		centerPosition[] = {2970,1980,220};
	    seagullPos[] = {2970,1980,250};
	    ilsPosition[] = {2971,1985};
	    ilsDirection[] = {0.998,0.080,0.10};
	    ilsTaxiIn[] = {2033,1895,2060,1909,2440,2210};
	    ilsTaxiOff[] = {2440,2210,2863,2004,2868,1965};
	    drawTaxiway = 0;
		class SecondaryAirports{};
		class ReplaceObjects{};
		class Sounds
		{
			sounds[] = {};
		};
		class Animation
		{
			vehicles[] = {};
		};
		dynLightMinBrightnessAmbientCoef = 0.5;
		dynLightMinBrightnessAbsolute = 0.05;
		class Sea
		{
			seaTexture = "a3\data_f\seatexture_co.paa";
			seaMaterial = "#water";
			shoreMaterial = "#shore";
			shoreFoamMaterial = "#shorefoam";
			shoreWetMaterial = "#shorewet";
			WaterMapScale = 20;
			WaterGrid = 50;
			MaxTide = 0;
			MaxWave = 0.25;
			SeaWaveXScale = "2.0/50";
			SeaWaveZScale = "1.0/50";
			SeaWaveHScale = 1;
			SeaWaveXDuration = 5000;
			SeaWaveZDuration = 10000;
		};
		class Underwater
		{
			noWaterFog = -0.001;
			fullWaterFog = 0.001;
			deepWaterFog = 60;
			waterFogDistanceNear = -10;
			waterFogDistance = 90;
			waterColor[] = {0,0.04,0.03};
			deepWaterColor[] = {0,0.001,0.009};
			surfaceColor[] = {0,0.04,0.03};
			deepSurfaceColor[] = {0,0.001,0.009};
		};
		class SeaWaterShaderPars
		{
			refractionMoveCoef = 0.03;
			minWaterOpacity = 0;
			waterOpacityDistCoef = 0.4;
			underwaterOpacity = 0.5;
			waterOpacityFadeStart = 60;
			waterOpacityFadeLength = 120;
		};
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.035;
			fogColor[] = {0.0002345,0.04515,0.07035};
			fogColorExtinctionSpeed[] = {0.32814,0.0149,0.00511};
			ligtExtinctionSpeed[] = {0.32814,0.0149,0.00511};
			diffuseLigtExtinctionSpeed[] = {0.36814,0.0449,0.02511};
			fogGradientCoefs[] = {"0.35f","1.0f","1.7f"};
			fogColorLightInfluence[] = {0.8,0.2,1};
			shadowIntensity = "0.0f";
			ssReflectionStrength = 0.85;
			ssReflectionMaxJitter = 1;
			ssReflectionRippleInfluence = 0.2;
			ssReflectionEdgeFadingCoef = 10;
			ssReflectionDistFadingCoef = 4;
			refractionMinCoef = 0.03;
			refractionMaxCoef = 0.14;
			refractionMaxDist = 5.1;
			specularMaxIntensity = 100;
			specularPowerOvercast0 = 750;
			specularPowerOvercast1 = 50;
			specularNormalModifyCoef = 0.015;
			foamAroundObjectsIntensity = "0.15f";
			foamAroundObjectsFadeCoef = "8.0f";
			foamColorCoef = "2.0f";
			foamDeformationCoef = "0.02f";
			foamTextureCoef = "0.2f";
			foamTimeMoveSpeed = "0.2f";
			foamTimeMoveAmount = "0.1f";
			shoreDarkeningMaxCoef = "0.45f";
			shoreDarkeningOffset = "0.36f";
			shoreDarkeningGradient = "0.08f";
			shoreWaveTimeScale = "0.8f";
			shoreWaveShifDerivativeOffset = "-0.8f";
			shoreFoamIntensity = "0.25f";
			shoreMaxWaveHeight = "0.15f";
			shoreWetLayerReflectionIntensity = "0.55f";
			surfaceOpacity = 0;
		};
		causticsEnabled = 1;
		causticsTextureMask = "A3\data_f\caustics\caustics_anim_%03d.paa";
		causticsTextureCount = 32;
		causticsDistanceLimit = "200.0f";
		causticsDepthLimit = "80.0f";
		causticsTextureArea = "2.0f";
		causticsTextureAreaDeep = "156.0f";
		causticsTextureChangeInterval = "0.04f";
		causticsDepthFadeCoef = "0.05f";
		causticsTextureDepthGranularity = "2.5f";
		causticsBrightnessCoef = "4.0f";
		startWeather = 0.5;
		startFog = 0.01;
		forecastWeather = 0;
		forecastFog = 0.01;
		startFogBase = 250;
		forecastFogBase = 250;
		startFogDecay = 0.01;
		forecastFogDecay = 0.01;
		fogBeta0Min = 0;
		fogBeta0Max = 0.05;
		skyColorInfluencesFogColor = 0;
		hazeDistCoef = 0.1;
		hazeFogCoef = 0.98;
		fogHeight = 2000;
		hazeBaseHeight = 0;
		hazeBaseBeta0 = 8e-005;
		hazeDensityDecay = 0.00036;
		aroundSunCoefMultiplier = "1.4f";
		aroundSunCoefExponent = "12.0f";
		horizonSunColorationIntensity = "0.001f";
		class HDRNewPars
		{
			minAperture = 1e-005;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1;
			bloomScale = 0.09;
			bloomExponent = 0.75;
			bloomLuminanceOffset = 0.4;
			bloomLuminanceScale = 0.15;
			bloomLuminanceExponent = 0.25;
			tonemapMethod = 1;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.12;
			tonemapLinearAngle = 0.1;
			tonemapToeStrength = 0.2;
			tonemapToeNumerator = 0.022;
			tonemapToeDenominator = 0.2;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 1;
			tonemapLinearWhiteReinhard = "2.5f";
			eyeAdaptFactorLight = 3.3;
			eyeAdaptFactorDark = 0.75;
			nvgApertureMin = 10;
			nvgApertureStandard = 12.5;
			nvgApertureMax = 16.5;
			nvgStandardAvgLum = 10;
			nvgLightGain = 320;
			nvgTransition = 1;
			nvgTransitionCoefOn = "40.0f";
			nvgTransitionCoefOff = "0.01f";
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
		};
		class Lighting: DefaultLighting
		{
			groundReflection[] = {0.132,0.133,0.122};
			moonObjectColorFull[] = {460,440,400,1};
			moonHaloObjectColorFull[] = {465,477,475,1};
			moonsetObjectColor[] = {375,350,325,1};
			moonsetHaloObjectColor[] = {515,517,525,1};
			class ThunderBoltLight
			{
				diffuse[] = {2120,3170,5550};
				ambient[] = {0.001,0.001,0.001};
				intensity = 120000;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0;
					quadratic = 1;
				};
			};
			starEmissivity = 40;
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			fullNight[] = {-5,{0.182,0.213,0.25},{0.05,0.111,0.221},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.082,0.128,0.185},{0.283,0.35,0.431},0};
			sunMoon[] = {-3.75,{0.377,0.441,0.518},{0.103,0.227,0.453},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.174,0.274,0.395},{0.582,0.72,0.887},0.5};
			earlySun[] = {-2.5,{0.675,0.69,0.784},{0.22,0.322,0.471},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.424,0.549,0.745},{0.698,0.753,0.894},1};
			sunrise[] = {0,{0.675,0.69,0.784},{0.478,0.51,0.659},{0.2,0.19,0.07},{0.124,0.161,0.236},{{0.847,0.855,0.965},0.2},{{0.933,0.949,0.996},2},1};
			earlyMorning[] = {3,{{0.844,0.61,0.469},0.8},{0.424,0.557,0.651},{{1,0.45,0.2},1},{0.12,0.26,0.38},{{0.428,0.579,0.743},2},{{0.844,0.61,0.469},2.7},1};
			midMorning[] = {8,{{0.822,0.75,0.646},3.8},{{0.383,0.58,0.858},1.3},{{1.3,0.9,0.61},2.8},{{0.12,0.18,0.28},0.5},{{0.322,0.478,0.675},3.5},{{1,0.929,0.815},4.7},1};
			morning[] = {16,{{1,0.95,0.91},12.2},{{0.12,0.18,0.28},9.2},{{1,0.95,0.91},11.2},{{0.12,0.18,0.28},8.5},{{0.14,0.18,0.24},11},{{0.5,0.6,0.9},13.2},1};
			noon[] = {45,{{0.98,0.94,0.94},13.8},{{0.2,0.27,0.35},10.8},{{0.98,0.94,0.94},13.8},{{0.2,0.27,0.35},10.8},{{0.5,0.64,1},12},{{0.5,0.5,0.5},14.8},1,0.5,0.4,0.5,0.4};
		};
		class DayLightingRainy: DayLightingRainy
		{
			deepNight[] = {-15,{0.005,0.01,0.01},{0,0.002,0.003},{0,0,0},{0,0,0},{0,0.002,0.003},{0,0.002,0.003},0};
			fullNight[] = {-5,{0.023,0.023,0.023},{0.02,0.02,0.02},{0.023,0.023,0.023},{0.02,0.02,0.02},{0.01,0.01,0.02},{0.08,0.06,0.06},0};
			sunMoon[] = {-3.75,{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.035,0.04},{0.11,0.08,0.09},0.5};
			earlySun[] = {-2.5,{0.0689,0.0689,0.0804},{0.06,0.06,0.07},{0.0689,0.0689,0.0804},{0.06,0.06,0.07},{0.08,0.07,0.08},{0.14,0.1,0.12},0.5};
			earlyMorning[] = {3,{{1,1,1},"(-4)+3.95"},{{1,1,1},"(-4)+3.0"},{{1,1,1},"(-4)+3.95"},{{1,1,1},"(-4)+3.0"},{{1,1,1},"(-4)+4"},{{1,1,1},"(-4)+5.5"},1};
			morning[] = {16,{{1,1,1},"(-4)+5.7"},{{1,1,1},"(-4)+4.5"},{{1,1,1},"(-4)+5.7"},{{1,1,1},"(-4)+4.5"},{{1,1,1},"(-4)+7"},{{1,1,1},"(-4)+8"},1};
			lateMorning[] = {25,{{1,1,1},"(-4)+10.45"},{{1,1,1},"(-4)+9.75"},{{1,1,1},"(-4)+10.45"},{{1,1,1},"(-4)+9.75"},{{1,1,1},"(-4)+12"},{{1,1,1},"(-4)+12.75"},1};
			noon[] = {45,{{1,1,1},10},{{1,1,1},9},{{1,1,1},9},{{1,1,1},8},{{0.5,0.64,1},12},{{0.5,0.5,0.5},14.8},1};
		};
		class CfgEnvSounds;
		class EnvSounds: CfgEnvSounds
		{
			class Default
			{
				name = "Default";
				sound[] = {"$DEFAULT$",0,1};
				soundNight[] = {"$DEFAULT$",0,1};
			};
			class Rain
			{
				name = "Rain";
				sound[] = {"A3\Sounds_F\dummysound",0.251189,1,200};
				soundNight[] = {"A3\Sounds_F\dummysound",0.316228,1,200};
			};
			class Sea
			{
				name = "Sea";
				sound[] = {"A3\Sounds_F\dummysound",0.0891251,1,200};
				soundNight[] = {"A3\Sounds_F\dummysound",0.0707946,1,200};
				volume = "sea*(1-coast)";
			};
			class Coast
			{
				name = "Coast";
				sound[] = {"A3\Sounds_F\dummysound",0.0891251,1,200};
				soundNight[] = {"A3\Sounds_F\dummysound",0.0562341,1,200};
				volume = "coast";
			};
			class WindSlow
			{
				name = "Wind (Slow)";
				sound[] = {"A3\Sounds_F\dummysound",0.0199526,1};
				volume = "((windy factor[0,0.25])*(windy factor[0.5, 0.25]))-(night*0.25)";
			};
			class WindMedium
			{
				name = "Wind (Middle)";
				sound[] = {"A3\Sounds_F\dummysound",0.0251189,1};
				volume = "((windy factor[0.33,0.5])*(windy factor[0.8, 0.5]))-(night*0.25)";
			};
			class WindFast
			{
				name = "Wind (Fast)";
				sound[] = {"A3\Sounds_F\dummysound",0.0316228,1};
				volume = "(windy factor[0.66,1])-(night*0.25)";
			};
			class Forest
			{
				name = "Wind (Forest)";
				sound[] = {"A3\Sounds_F\dummysound",0.0177828,1};
				volume = "forest*trees*(1-night)";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.1,12,100,0.1,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.1,12,100,0.1,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.1,12,100,0.1,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.1,12,100,0.1,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.0562341,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.0562341,1,80,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.0316228,1,20,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.0562341,1,40,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.0562341,1,50,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class ForestNight
			{
				name = "Wind (Night)";
				sound[] = {"A3\Sounds_F\dummysound",0.0112202,1};
				volume = "forest*trees*night";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.0562341,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.0316228,1,70,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.0562341,1,10,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.0562341,1,40,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.0562341,1,30,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class Houses
			{
				name = "Wind (Day)";
				sound[] = {"A3\Sounds_F\dummysound",0.0158489,1};
				volume = "(houses-0.75)*4";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.0562341,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.0316228,1,100,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.0562341,1,15,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.0562341,1,20,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.0562341,1,25,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class HousesNight
			{
				name = "Wind (No, Animals)";
				sound[] = {"A3\Sounds_F\dummysound",0.0141254,1};
				volume = "(houses-0.75)*4*night";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.0562341,1,80,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.0316228,1,80,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.0562341,1,15,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.0562341,1,15,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.0562341,1,30,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class Meadows
			{
				name = "Meadow (Insect)";
				sound[] = {"A3\Sounds_F\dummysound",0.0158489,1};
				volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.0630957,1,70,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.0630957,1,100,0.12,15,25,30};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.0630957,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.0630957,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.0562341,1,100,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.0316228,1,100,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.0562341,1,20,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.0562341,1,20,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.0562341,1,20,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class MeadowsNight
			{
				name = "Meadow (Insect, Birds)";
				sound[] = {"A3\Sounds_F\dummysound",0.0112202,1};
				volume = "(1-forest)*(1-houses)*night*(1-sea)";
				randSamp0[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp1[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,35,60};
				randSamp2[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp3[] = {"A3\Sounds_F\dummysound",0.1,1,100,0.12,10,25,40};
				randSamp4[] = {"A3\Sounds_F\dummysound",0.0562341,1,80,0.12,10,25,40};
				randSamp5[] = {"A3\Sounds_F\dummysound",0.0316228,1,80,0.1,10,25,40};
				randSamp6[] = {"A3\Sounds_F\dummysound",0.0562341,1,20,0.1,10,25,50};
				randSamp7[] = {"A3\Sounds_F\dummysound",0.0562341,1,20,0.1,10,25,40};
				randSamp8[] = {"A3\Sounds_F\dummysound",0.0562341,1,20,0.1,10,25,40};
				random[] = {"randSamp0","randSamp1","randSamp2","randSamp3","randSamp4","randSamp5","randSamp6","randSamp7","randSamp8"};
			};
			class BattlefieldExplosions
			{
				sound0[] = {"A3\Sounds_F\dummysound",0.316228,1,1000,0.2,5,10,15};
				sound1[] = {"A3\Sounds_F\dummysound",0.316228,1,1000,0.2,5,10,15};
				sound2[] = {"A3\Sounds_F\dummysound",0.316228,1,1000,0.2,5,10,15};
				sound3[] = {"A3\Sounds_F\dummysound",0.316228,1,1000,0.2,5,10,15};
				sound4[] = {"A3\Sounds_F\dummysound",0.316228,1,1000,0.2,5,10,15};
				random[] = {"sound0","sound1","sound2","sound3","sound4"};
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
			};
			class BattlefieldExplosions1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldExplosions2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldExplosions3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldExplosions4
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldExplosions5
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldFirefight1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldFirefight2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldFirefight3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldFirefight4
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldHeli1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldHeli2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldHeli3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldJet1
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldJet2
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class BattlefieldJet3
			{
				sound[] = {"A3\Sounds_F\dummysound",0.316228,1};
				titles[] = {};
			};
			class Earthquake_01
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.16228,1};
				name = "Earthquake 1";
				titles[] = {};
			};
			class Earthquake_02
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.16228,1};
				name = "Earthquake 2";
				titles[] = {};
			};
			class Earthquake_03
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.16228,1};
				name = "Earthquake 3";
				titles[] = {};
			};
			class Earthquake_04
			{
				sound[] = {"\A3\Sounds_F\dummysound",3.16228,1};
				name = "Earthquake 4";
				titles[] = {};
			};
			soundSetEnvironment[] = {"ForestMorning_SoundSet","ForestAfternoon_SoundSet","ForestNight_SoundSet","HousesDay_SoundSet","HousesNight_SoundSet","MeadowsDay_SoundSet","MeadowsNight_SoundSet","WindForest_Low_SoundSet","WindForest_High_SoundSet","WindMeadows_Low_SoundSet","WindMeadows_High_SoundSet","WindHouses_Low_SoundSet","WindHouses_High_SoundSet","RainForest_Low_SoundSet","RainForest_Medium_SoundSet","RainForest_High_SoundSet","RainMeadows_Low_SoundSet","RainMeadows_Medium_SoundSet","RainMeadows_High_SoundSet","RainHouses_High_SoundSet","Sea_SoundSet","Coast_SoundSet","Wind_Generic_Low_SoundSet","Wind_Generic_High_SoundSet"};
			class CfgEnvSpatialSounds
			{
				class sound_shrub_smallleaves_1
				{
					memPoint = "sound_shrub_smallleaves_1";
					soundSets[] = {"Rain_PlantA_Light_SoundSet","Rain_PlantA_Medium_SoundSet","Rain_PlantA_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_smallleaves_2
				{
					memPoint = "sound_shrub_smallleaves_2";
					soundSets[] = {"Rain_PlantA_Light_SoundSet","Rain_PlantA_Medium_SoundSet","Rain_PlantA_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_smallleaves_3
				{
					memPoint = "sound_shrub_smallleaves_3";
					soundSets[] = {"Rain_PlantA_Light_SoundSet","Rain_PlantA_Medium_SoundSet","Rain_PlantA_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_mediumleaves_1
				{
					memPoint = "sound_shrub_mediumleaves_1";
					soundSets[] = {"Rain_PlantB_Light_SoundSet","Rain_PlantB_Medium_SoundSet","Rain_PlantB_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_shrub_bigleaves_1
				{
					memPoint = "sound_shrub_bigleaves_1";
					soundSets[] = {"Rain_PlantC_Light_SoundSet","Rain_PlantC_Medium_SoundSet","Rain_PlantC_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_tree_bigleaves_1
				{
					memPoint = "sound_tree_bigleaves_1";
					soundSets[] = {"Rain_PlantC_Light_SoundSet","Rain_PlantC_Medium_SoundSet","Rain_PlantC_Heavy_SoundSet","Insect_Day_SoundSet","Insect_Night_SoundSet"};
				};
				class sound_smalltree_mediumleaves_1
				{
					memPoint = "sound_smalltree_mediumleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_smalltree_smallleaves_1
				{
					memPoint = "sound_smalltree_smallleaves_1";
					soundSets[] = {"Rain_SmallTree_Light_SoundSet","Rain_SmallTree_Medium_SoundSet","Rain_SmallTree_Heavy_SoundSet","Wind_LeavesA_Narrow_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_tree_smallleaves_1
				{
					memPoint = "sound_tree_smallleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Wind_LeavesA_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_tree_mediumleaves_1
				{
					memPoint = "sound_tree_mediumleaves_1";
					soundSets[] = {"Rain_WideTree_Light_SoundSet","Rain_WideTree_Medium_SoundSet","Rain_WideTree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_widetree_smallleaves_1
				{
					memPoint = "sound_widetree_smallleaves_1";
					soundSets[] = {"Rain_WideTree_Light_SoundSet","Rain_WideTree_Medium_SoundSet","Rain_WideTree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_widetree_mediumleaves_1
				{
					memPoint = "sound_widetree_mediumleaves_1";
					soundSets[] = {"Rain_WideTree_Light_SoundSet","Rain_WideTree_Medium_SoundSet","Rain_WideTree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_watertree_mediumleaves_1
				{
					memPoint = "sound_watertree_mediumleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Wind_LeavesC_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_tree_palmleaves_1
				{
					memPoint = "sound_tree_palmleaves_1";
					soundSets[] = {"Rain_Tree_Light_SoundSet","Rain_Tree_Medium_SoundSet","Rain_Tree_Heavy_SoundSet","Forest_Birds_All_Day_SoundSet","Forest_Birds_All_Night_SoundSet","Meadows_Birds_All_Day_SoundSet"};
				};
				class sound_rain_metalTin_tiny_1
				{
					memPoint = "sound_rain_metalTin_tiny_1";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundShader"};
				};
				class sound_rain_metalTin_tiny_2
				{
					memPoint = "sound_rain_metalTin_tiny_2";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_3
				{
					memPoint = "sound_rain_metalTin_tiny_3";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_4
				{
					memPoint = "sound_rain_metalTin_tiny_4";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_5
				{
					memPoint = "sound_rain_metalTin_tiny_5";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_6
				{
					memPoint = "sound_rain_metalTin_tiny_6";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_7
				{
					memPoint = "sound_rain_metalTin_tiny_7";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_8
				{
					memPoint = "sound_rain_metalTin_tiny_8";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_9
				{
					memPoint = "sound_rain_metalTin_tiny_9";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_10
				{
					memPoint = "sound_rain_metalTin_tiny_10";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_11
				{
					memPoint = "sound_rain_metalTin_tiny_11";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_12
				{
					memPoint = "sound_rain_metalTin_tiny_12";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_13
				{
					memPoint = "sound_rain_metalTin_tiny_13";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_14
				{
					memPoint = "sound_rain_metalTin_tiny_14";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_15
				{
					memPoint = "sound_rain_metalTin_tiny_15";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_16
				{
					memPoint = "sound_rain_metalTin_tiny_16";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_17
				{
					memPoint = "sound_rain_metalTin_tiny_17";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_18
				{
					memPoint = "sound_rain_metalTin_tiny_18";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_19
				{
					memPoint = "sound_rain_metalTin_tiny_19";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_20
				{
					memPoint = "sound_rain_metalTin_tiny_20";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_21
				{
					memPoint = "sound_rain_metalTin_tiny_21";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_22
				{
					memPoint = "sound_rain_metalTin_tiny_22";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_tiny_23
				{
					memPoint = "sound_rain_metalTin_tiny_23";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_1
				{
					memPoint = "sound_rain_metalTin_small_1";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_2
				{
					memPoint = "sound_rain_metalTin_small_2";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_3
				{
					memPoint = "sound_rain_metalTin_small_3";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_4
				{
					memPoint = "sound_rain_metalTin_small_4";
					soundSets[] = {"Rain_MetalA_Light_SoundSet","Rain_MetalA_Medium_SoundSet","Rain_MetalA_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_1
				{
					memPoint = "sound_rain_metalTin_small_narrow_1";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_2
				{
					memPoint = "sound_rain_metalTin_small_narrow_2";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_3
				{
					memPoint = "sound_rain_metalTin_small_narrow_3";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_small_narrow_4
				{
					memPoint = "sound_rain_metalTin_small_narrow_4";
					soundSets[] = {"Rain_MetalAn_Light_SoundSet","Rain_MetalAn_Medium_SoundSet","Rain_MetalAn_Heavy_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalTin_medium_1
				{
					memPoint = "sound_rain_metalTin_medium_1";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_2
				{
					memPoint = "sound_rain_metalTin_medium_2";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_3
				{
					memPoint = "sound_rain_metalTin_medium_3";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_4
				{
					memPoint = "sound_rain_metalTin_medium_4";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_5
				{
					memPoint = "sound_rain_metalTin_medium_5";
					soundSets[] = {"Rain_MetalB_Light_SoundSet","Rain_MetalB_Medium_SoundSet","Rain_MetalB_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_1
				{
					memPoint = "sound_rain_metalTin_medium_narrow_1";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_2
				{
					memPoint = "sound_rain_metalTin_medium_narrow_2";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_3
				{
					memPoint = "sound_rain_metalTin_medium_narrow_3";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_medium_narrow_4
				{
					memPoint = "sound_rain_metalTin_medium_narrow_4";
					soundSets[] = {"Rain_MetalBn_Light_SoundSet","Rain_MetalBn_Medium_SoundSet","Rain_MetalBn_Heavy_SoundSet","Metal_DebrisWind_Medium_SoundSet"};
				};
				class sound_rain_metalTin_large_1
				{
					memPoint = "sound_rain_metalTin_large_1";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_2
				{
					memPoint = "sound_rain_metalTin_large_2";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_3
				{
					memPoint = "sound_rain_metalTin_large_3";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_4
				{
					memPoint = "sound_rain_metalTin_large_4";
					soundSets[] = {"Rain_MetalC_Light_SoundSet","Rain_MetalC_Medium_SoundSet","Rain_MetalC_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_1
				{
					memPoint = "sound_rain_metalTin_large_narrow_1";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_2
				{
					memPoint = "sound_rain_metalTin_large_narrow_2";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_3
				{
					memPoint = "sound_rain_metalTin_large_narrow_3";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalTin_large_narrow_4
				{
					memPoint = "sound_rain_metalTin_large_narrow_4";
					soundSets[] = {"Rain_MetalCn_Light_SoundSet","Rain_MetalCn_Medium_SoundSet","Rain_MetalCn_Heavy_SoundSet","Metal_DebrisWind_Large_SoundSet"};
				};
				class sound_rain_metalPlate_small_1
				{
					memPoint = "sound_rain_metalPlate_small_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_small_2
				{
					memPoint = "sound_rain_metalPlate_small_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet"};
				};
				class sound_metal_stairs_1
				{
					memPoint = "sound_metal_stairs_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Stress_High_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_2
				{
					memPoint = "sound_metal_stairs_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Stress_High_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_3
				{
					memPoint = "sound_metal_stairs_3";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_Stress_High_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_solid_1
				{
					memPoint = "sound_metal_stairs_solid_1";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_solid_2
				{
					memPoint = "sound_metal_stairs_solid_2";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_metal_stairs_solid_3
				{
					memPoint = "sound_metal_stairs_solid_3";
					soundSets[] = {"Rain_PlateA_Medium_SoundSet","Rain_PlateA_Heavy_SoundSet","Metal_StressWind_High_SoundSet","Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_metalPlate_medium_1
				{
					memPoint = "sound_rain_metalPlate_medium_1";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_2
				{
					memPoint = "sound_rain_metalPlate_medium_2";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_3
				{
					memPoint = "sound_rain_metalPlate_medium_3";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_4
				{
					memPoint = "sound_rain_metalPlate_medium_4";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_5
				{
					memPoint = "sound_rain_metalPlate_medium_5";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_medium_6
				{
					memPoint = "sound_rain_metalPlate_medium_6";
					soundSets[] = {"Rain_PlateBn_Medium_SoundSet","Rain_PlateBn_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_large_1
				{
					memPoint = "sound_rain_metalPlate_large_1";
					soundSets[] = {"Rain_PlateB_Medium_SoundSet","Rain_PlateB_Heavy_SoundSet"};
				};
				class sound_rain_metalPlate_large_2
				{
					memPoint = "sound_rain_metalPlate_large_2";
					soundSets[] = {"Rain_PlateB_Medium_SoundSet","Rain_PlateB_Heavy_SoundSet"};
				};
				class sound_gutter_1
				{
					memPoint = "sound_gutter_1";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_2
				{
					memPoint = "sound_gutter_2";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_3
				{
					memPoint = "sound_gutter_3";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_4
				{
					memPoint = "sound_gutter_4";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_5
				{
					memPoint = "sound_gutter_5";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_6
				{
					memPoint = "sound_gutter_6";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_7
				{
					memPoint = "sound_gutter_7";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_gutter_8
				{
					memPoint = "sound_gutter_8";
					soundSets[] = {"Water_Gutter_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_air_condition_1
				{
					memPoint = "sound_air_condition_1";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_2
				{
					memPoint = "sound_air_condition_2";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_3
				{
					memPoint = "sound_air_condition_3";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_4
				{
					memPoint = "sound_air_condition_4";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_air_condition_5
				{
					memPoint = "sound_air_condition_5";
					soundSets[] = {"Rain_MetalT_Light_SoundSet","Rain_MetalT_Medium_SoundSet","Rain_MetalT_Heavy_SoundSet","Air_Condition_SoundSet"};
				};
				class sound_electric_box_1
				{
					memPoint = "sound_electric_box_1";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_2
				{
					memPoint = "sound_electric_box_2";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_3
				{
					memPoint = "sound_electric_box_3";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_4
				{
					memPoint = "sound_electric_box_4";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_electric_box_5
				{
					memPoint = "sound_electric_box_5";
					soundSets[] = {"Electric_Box_SoundSet"};
				};
				class sound_metal_tension_1
				{
					memPoint = "sound_metal_tension_1";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_2
				{
					memPoint = "sound_metal_tension_2";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_3
				{
					memPoint = "sound_metal_tension_3";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_4
				{
					memPoint = "sound_metal_tension_4";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_5
				{
					memPoint = "sound_metal_tension_5";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_6
				{
					memPoint = "sound_metal_tension_6";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_7
				{
					memPoint = "sound_metal_tension_7";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_8
				{
					memPoint = "sound_metal_tension_8";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_9
				{
					memPoint = "sound_metal_tension_9";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_10
				{
					memPoint = "sound_metal_tension_10";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_metal_tension_11
				{
					memPoint = "sound_metal_tension_11";
					soundSets[] = {"Metal_Stress_SoundSet","Metal_StressWind_SoundSet"};
				};
				class sound_ruins_1
				{
					memPoint = "sound_ruins_1";
					soundSets[] = {"Rock_Debris_High_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_ruins_2
				{
					memPoint = "sound_ruins_2";
					soundSets[] = {"Rock_Debris_High_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_ruins_3
				{
					memPoint = "sound_ruins_3";
					soundSets[] = {"Rock_Debris_High_SoundSet","Metal_DebrisWind_Small_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_stone_small_1
				{
					memPoint = "sound_rain_stone_small_1";
					soundSets[] = {"Rock_Debris_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_rain_stone_medium_1
				{
					memPoint = "sound_rain_stone_medium_1";
					soundSets[] = {"Rock_Debris_SoundSet","Rock_DebrisWind_Small_SoundSet"};
				};
				class sound_head
				{
					memPoint = "sound_head";
					soundSets[] = {"Forest_Birds_Temp_SoundSet"};
				};
				class sound_clothes_1
				{
					memPoint = "sound_clothes_1";
					soundSets[] = {"ClothesWind_SoundSet"};
				};
				class sound_clothes_2
				{
					memPoint = "sound_clothes_2";
					soundSets[] = {"ClothesWind_SoundSet"};
				};
				class sound_net_fence_1
				{
					memPoint = "sound_net_fence_1";
					soundSets[] = {"MetalFenceWind_SoundSet"};
				};
				class sound_shed_1
				{
					memPoint = "sound_shed_1";
					soundSets[] = {"Metal_DebrisWind_Small_SoundSet"};
				};
				class sound_slum_1
				{
					memPoint = "sound_slum_1";
					soundSets[] = {"Metal_DebrisWind_Small_SoundSet"};
				};
			};
		};
		class Weather: Weather
		{
			class LightingNew
			{
				class Lighting0
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.14,0.19,0.3},4};
					diffuseCloud[] = {{0.14,0.19,0.3},0.2};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},0.05};
					ambientMid[] = {{0.1384,0.1912,0.2984},0.88};
					ambientMidCloud[] = {{0.1384,0.1912,0.2984},0.044};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.04224};
					bidirect[] = {0.025,0.025,0.023};
					bidirectCloud[] = {0.0125,0.0125,0.0115};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.09,0.137,0.22},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.5,0.65,1},11.016};
					swBrightness = 1;
				};
				class Lighting1
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting2
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting3
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.73491};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 5;
					apertureMax = 10;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting4
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.16,0.18,0.28},3};
					diffuseCloud[] = {{0.16,0.18,0.28},3};
					ambient[] = {{0.173,0.239,0.373},4.6};
					ambientCloud[] = {{0.173,0.239,0.373},4.6};
					ambientMid[] = {{0.173,0.239,0.373},4.048};
					ambientMidCloud[] = {{0.173,0.239,0.373},4.048};
					groundReflection[] = {{0.173,0.239,0.373},3.88608};
					groundReflectionCloud[] = {{0.173,0.239,0.373},3.88608};
					bidirect[] = {0.0115,0.012,0.0125};
					bidirectCloud[] = {0.0115,0.012,0.0125};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.63695};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 5;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting5
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.25,0.21,0.2},5};
					diffuseCloud[] = {{0.25,0.21,0.2},5};
					ambient[] = {{0.196,0.275,0.42},6.9};
					ambientCloud[] = {{0.196,0.275,0.42},6.9};
					ambientMid[] = {{0.196,0.275,0.42},6.072};
					ambientMidCloud[] = {{0.196,0.275,0.42},6.072};
					groundReflection[] = {{0.196,0.275,0.42},5.82912};
					groundReflectionCloud[] = {{0.196,0.275,0.42},5.82912};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.3177};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 6;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting6
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.75,0.38,0.22},6};
					diffuseCloud[] = {{0.75,0.38,0.22},6};
					ambient[] = {{0.2497,0.31,0.467},7.8};
					ambientCloud[] = {{0.2497,0.31,0.467},7.8};
					ambientMid[] = {{0.2541,0.314,0.467},6.864};
					ambientMidCloud[] = {{0.2541,0.314,0.467},6.864};
					groundReflection[] = {{0.235,0.318,0.467},6.58944};
					groundReflectionCloud[] = {{0.235,0.318,0.467},6.58944};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.3888};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 7;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting7
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.42,0.22},8.4};
					diffuseCloud[] = {{0.95,0.42,0.22},8.4};
					ambient[] = {{0.306,0.357,0.463},8.4};
					ambientCloud[] = {{0.306,0.357,0.463},8.4};
					ambientMid[] = {{0.365,0.361,0.396},7.392};
					ambientMidCloud[] = {{0.365,0.361,0.396},7.392};
					groundReflection[] = {{0.416,0.38,0.388},7.09632};
					groundReflectionCloud[] = {{0.416,0.38,0.388},7.09632};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.3888};
					fogColor[] = {{0.125,0.192,0.329},8.61};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting8
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.55,0.35},10.2};
					diffuseCloud[] = {{0.95,0.55,0.35},10.2};
					ambient[] = {{0.337,0.404,0.525},9.6};
					ambientCloud[] = {{0.337,0.404,0.525},9.6};
					ambientMid[] = {{0.412,0.408,0.443},8.448};
					ambientMidCloud[] = {{0.412,0.408,0.443},8.448};
					groundReflection[] = {{0.475,0.435,0.431},8.11008};
					groundReflectionCloud[] = {{0.475,0.435,0.431},8.11008};
					bidirect[] = {0.01375,0.0132,0.01265};
					bidirectCloud[] = {0.01375,0.0132,0.01265};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.3888};
					fogColor[] = {{0.133,0.204,0.357},9.84};
					apertureMin = 8;
					apertureStandard = 16;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting9
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{1,0.65,0.45},12.3};
					diffuseCloud[] = {{1,0.65,0.45},12.3};
					ambient[] = {{0.388,0.471,0.612},10.9};
					ambientCloud[] = {{0.388,0.471,0.612},10.9};
					ambientMid[] = {{0.482,0.475,0.506},9.81};
					ambientMidCloud[] = {{0.482,0.475,0.506},9.81};
					groundReflection[] = {{0.557,0.51,0.494},9.4176};
					groundReflectionCloud[] = {{0.557,0.51,0.494},9.4176};
					bidirect[] = {0.01875,0.018,0.01725};
					bidirectCloud[] = {0.01875,0.018,0.01725};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.145,0.224,0.396},11.1725};
					apertureMin = 20;
					apertureStandard = 25;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting10
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{1,0.75,0.62},15.8};
					diffuseCloud[] = {{1,0.75,0.62},15.8};
					ambient[] = {{0.435,0.533,0.698},13.8};
					ambientCloud[] = {{0.435,0.533,0.698},13.8};
					ambientMid[] = {{0.545,0.541,0.569},12.696};
					ambientMidCloud[] = {{0.545,0.541,0.569},12.696};
					groundReflection[] = {{0.635,0.58,0.557},12.1882};
					groundReflectionCloud[] = {{0.635,0.58,0.557},12.1882};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.15,0.251,0.488},14.145};
					apertureMin = 45;
					apertureStandard = 60;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting11
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17.2};
					diffuseCloud[] = {{1,0.87,0.85},17.2};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.2139};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.2139};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting12
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17.2};
					diffuseCloud[] = {{1,0.87,0.85},17.2};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.2139};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.2139};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting13
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.14,0.19,0.3},4};
					diffuseCloud[] = {{0.14,0.19,0.3},3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.1384,0.1912,0.2984},0.88};
					ambientMidCloud[] = {{0.1384,0.1912,0.2984},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0.025,0.025,0.023};
					bidirectCloud[] = {0.0245,0.0245,0.02254};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.09,0.137,0.22},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.5,0.65,1},11.016};
					swBrightness = 1;
				};
				class Lighting14
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting15
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting16
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.73491};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 5;
					apertureMax = 10;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting17
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.16,0.18,0.28},2.25};
					diffuseCloud[] = {{0.16,0.18,0.28},1.6875};
					ambient[] = {{0.173,0.239,0.373},4.6};
					ambientCloud[] = {{0.173,0.239,0.373},4.6};
					ambientMid[] = {{0.173,0.239,0.373},4.048};
					ambientMidCloud[] = {{0.173,0.239,0.373},4.048};
					groundReflection[] = {{0.173,0.239,0.373},3.88608};
					groundReflectionCloud[] = {{0.173,0.239,0.373},3.88608};
					bidirect[] = {0.0115,0.012,0.0125};
					bidirectCloud[] = {0.01127,0.01176,0.01225};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.63695};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 5;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting18
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.25,0.21,0.2},3.75};
					diffuseCloud[] = {{0.25,0.21,0.2},2.8125};
					ambient[] = {{0.196,0.275,0.42},6.9};
					ambientCloud[] = {{0.196,0.275,0.42},6.9};
					ambientMid[] = {{0.196,0.275,0.42},6.072};
					ambientMidCloud[] = {{0.196,0.275,0.42},6.072};
					groundReflection[] = {{0.196,0.275,0.42},5.82912};
					groundReflectionCloud[] = {{0.196,0.275,0.42},5.82912};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.3177};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 6;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting19
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.75,0.38,0.22},4.5};
					diffuseCloud[] = {{0.75,0.38,0.22},3.375};
					ambient[] = {{0.2497,0.31,0.467},7.8};
					ambientCloud[] = {{0.2497,0.31,0.467},7.8};
					ambientMid[] = {{0.2541,0.314,0.467},6.864};
					ambientMidCloud[] = {{0.2541,0.314,0.467},6.864};
					groundReflection[] = {{0.235,0.318,0.467},6.58944};
					groundReflectionCloud[] = {{0.235,0.318,0.467},6.58944};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.3888};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 7;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting20
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.42,0.22},6.72};
					diffuseCloud[] = {{0.95,0.42,0.22},5.04};
					ambient[] = {{0.306,0.357,0.463},8.4};
					ambientCloud[] = {{0.306,0.357,0.463},8.4};
					ambientMid[] = {{0.365,0.361,0.396},7.392};
					ambientMidCloud[] = {{0.365,0.361,0.396},7.392};
					groundReflection[] = {{0.416,0.38,0.388},7.09632};
					groundReflectionCloud[] = {{0.416,0.38,0.388},7.09632};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.3888};
					fogColor[] = {{0.125,0.192,0.329},8.61};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting21
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.55,0.35},10.2};
					diffuseCloud[] = {{0.95,0.55,0.35},7.65};
					ambient[] = {{0.337,0.404,0.525},9.6};
					ambientCloud[] = {{0.337,0.404,0.525},9.6};
					ambientMid[] = {{0.412,0.408,0.443},8.448};
					ambientMidCloud[] = {{0.412,0.408,0.443},8.448};
					groundReflection[] = {{0.475,0.435,0.431},8.11008};
					groundReflectionCloud[] = {{0.475,0.435,0.431},8.11008};
					bidirect[] = {0.01375,0.0132,0.01265};
					bidirectCloud[] = {0.01375,0.0132,0.01265};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.3888};
					fogColor[] = {{0.133,0.204,0.357},9.84};
					apertureMin = 8;
					apertureStandard = 16;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting22
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{1,0.65,0.45},12.3};
					diffuseCloud[] = {{1,0.65,0.45},9.225};
					ambient[] = {{0.388,0.471,0.612},10.9};
					ambientCloud[] = {{0.388,0.471,0.612},10.9};
					ambientMid[] = {{0.482,0.475,0.506},9.81};
					ambientMidCloud[] = {{0.482,0.475,0.506},9.81};
					groundReflection[] = {{0.557,0.51,0.494},9.4176};
					groundReflectionCloud[] = {{0.557,0.51,0.494},9.4176};
					bidirect[] = {0.01875,0.018,0.01725};
					bidirectCloud[] = {0.01875,0.018,0.01725};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.145,0.224,0.396},11.1725};
					apertureMin = 20;
					apertureStandard = 25;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting23
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{1,0.75,0.62},15.8};
					diffuseCloud[] = {{1,0.75,0.62},11.85};
					ambient[] = {{0.435,0.533,0.698},13.8};
					ambientCloud[] = {{0.435,0.533,0.698},13.8};
					ambientMid[] = {{0.545,0.541,0.569},12.696};
					ambientMidCloud[] = {{0.545,0.541,0.569},12.696};
					groundReflection[] = {{0.635,0.58,0.557},12.1882};
					groundReflectionCloud[] = {{0.635,0.58,0.557},12.1882};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.15,0.251,0.488},14.145};
					apertureMin = 45;
					apertureStandard = 60;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting24
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17};
					diffuseCloud[] = {{1,0.87,0.85},12.75};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},13.616};
					ambientMidCloud[] = {{0.635,0.635,0.663},13.616};
					groundReflection[] = {{0.745,0.671,0.643},14.2139};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.2139};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},13.9564};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting25
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17};
					diffuseCloud[] = {{1,0.87,0.85},13.94};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.2139};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.2139};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting26
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.09,0.137,0.22},1};
					diffuseCloud[] = {{0,0,0},0.75};
					ambient[] = {{0.09,0.137,0.22},1};
					ambientCloud[] = {{0.09,0.137,0.22},1};
					ambientMid[] = {{0.09,0.137,0.22},0.8624};
					ambientMidCloud[] = {{0.09,0.137,0.22},0.8624};
					groundReflection[] = {{0.09,0.137,0.22},0.758912};
					groundReflectionCloud[] = {{0.09,0.137,0.22},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.09,0.137,0.22};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting27
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.16954,0.239,0.37673};
					diffuseCloud[] = {0.042385,0.05975,0.094183};
					ambient[] = {{0.16954,0.239,0.37673},1};
					ambientCloud[] = {{0.16954,0.239,0.37673},1};
					ambientMid[] = {{0.173,0.239,0.373},0.8624};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.8624};
					groundReflection[] = {{0.14705,0.20315,0.31705},0.758912};
					groundReflectionCloud[] = {{0.14705,0.20315,0.31705},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting28
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.129,0.18,0.271};
					diffuseCloud[] = {0.03225,0.045,0.06775};
					ambient[] = {{0.129,0.18,0.271},1};
					ambientCloud[] = {{0.129,0.18,0.271},1};
					ambientMid[] = {{0.129,0.184,0.267},0.8624};
					ambientMidCloud[] = {{0.129,0.184,0.267},0.8624};
					groundReflection[] = {{0.125,0.176,0.263},0.758912};
					groundReflectionCloud[] = {{0.125,0.176,0.263},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting29
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.129,0.18,0.271};
					diffuseCloud[] = {0.03225,0.045,0.06775};
					ambient[] = {{0.129,0.18,0.271},1};
					ambientCloud[] = {{0.129,0.18,0.271},1};
					ambientMid[] = {{0.129,0.184,0.267},0.8624};
					ambientMidCloud[] = {{0.129,0.184,0.267},0.8624};
					groundReflection[] = {{0.125,0.176,0.263},0.758912};
					groundReflectionCloud[] = {{0.125,0.176,0.263},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.73491};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 10;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting30
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.157,0.212,0.306},0.5625};
					diffuseCloud[] = {{0.03925,0.053,0.0765},0.39375};
					ambient[] = {{0.157,0.212,0.306},3.22};
					ambientCloud[] = {{0.157,0.212,0.306},3.22};
					ambientMid[] = {{0.157,0.208,0.298},3.96704};
					ambientMidCloud[] = {{0.157,0.208,0.298},3.96704};
					groundReflection[] = {{0.149,0.204,0.29},3.64968};
					groundReflectionCloud[] = {{0.149,0.204,0.29},3.64968};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.63695};
					fogColor[] = {{0.141,0.192,0.282},3.96704};
					apertureMin = 5;
					apertureStandard = 5;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting31
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.184,0.247,0.341},0.9375};
					diffuseCloud[] = {{0.046,0.06175,0.08525},0.65625};
					ambient[] = {{0.184,0.247,0.341},6.9};
					ambientCloud[] = {{0.184,0.247,0.341},6.9};
					ambientMid[] = {{0.184,0.243,0.329},5.95056};
					ambientMidCloud[] = {{0.184,0.243,0.329},5.95056};
					groundReflection[] = {{0.176,0.231,0.322},5.59353};
					groundReflectionCloud[] = {{0.176,0.231,0.322},5.59353};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.3177};
					fogColor[] = {{0.165,0.22,0.31},5.95056};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting32
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.216,0.286,0.384},1.125};
					diffuseCloud[] = {{0.054,0.0715,0.096},0.7875};
					ambient[] = {{0.216,0.286,0.384},7.8};
					ambientCloud[] = {{0.216,0.286,0.384},7.8};
					ambientMid[] = {{0.22,0.278,0.365},6.72672};
					ambientMidCloud[] = {{0.22,0.278,0.365},6.72672};
					groundReflection[] = {{0.204,0.267,0.353},6.45765};
					groundReflectionCloud[] = {{0.204,0.267,0.353},6.45765};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.3888};
					fogColor[] = {{0.188,0.247,0.341},6.72672};
					apertureMin = 7;
					apertureStandard = 7;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting33
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.255,0.325,0.42},1.68};
					diffuseCloud[] = {{0.06375,0.08125,0.105},1.176};
					ambient[] = {{0.255,0.325,0.42},8.4};
					ambientCloud[] = {{0.255,0.325,0.42},8.4};
					ambientMid[] = {{0.259,0.314,0.396},7.24416};
					ambientMidCloud[] = {{0.259,0.314,0.396},7.24416};
					groundReflection[] = {{0.239,0.294,0.376},7.09928};
					groundReflectionCloud[] = {{0.239,0.294,0.376},7.09928};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.3888};
					fogColor[] = {{0.216,0.275,0.373},7.24416};
					apertureMin = 8;
					apertureStandard = 8;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting34
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.298,0.365,0.451},2.55};
					diffuseCloud[] = {{0.0745,0.09125,0.11275},1.785};
					ambient[] = {{0.298,0.365,0.451},9.6};
					ambientCloud[] = {{0.298,0.365,0.451},9.6};
					ambientMid[] = {{0.302,0.349,0.416},8.27904};
					ambientMidCloud[] = {{0.302,0.349,0.416},8.27904};
					groundReflection[] = {{0.275,0.318,0.384},8.11346};
					groundReflectionCloud[] = {{0.275,0.318,0.384},8.11346};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.3888};
					fogColor[] = {{0.243,0.306,0.408},8.27904};
					apertureMin = 8;
					apertureStandard = 14;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting35
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{0.376,0.431,0.506},3.075};
					diffuseCloud[] = {{0.094,0.10775,0.1265},2.1525};
					ambient[] = {{0.376,0.431,0.506},10.9};
					ambientCloud[] = {{0.376,0.431,0.506},10.9};
					ambientMid[] = {{0.38,0.408,0.447},9.6138};
					ambientMidCloud[] = {{0.38,0.408,0.447},9.6138};
					groundReflection[] = {{0.329,0.361,0.396},9.42152};
					groundReflectionCloud[] = {{0.329,0.361,0.396},9.42152};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.286,0.353,0.463},9.6138};
					apertureMin = 20;
					apertureStandard = 22;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting36
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{0.447,0.494,0.557},3.95};
					diffuseCloud[] = {{0,0,0},2.765};
					ambient[] = {{0.447,0.494,0.557},13.8};
					ambientCloud[] = {{0.447,0.494,0.557},13.8};
					ambientMid[] = {{0.455,0.467,0.475},12.4421};
					ambientMidCloud[] = {{0.455,0.467,0.475},12.4421};
					groundReflection[] = {{0.388,0.396,0.408},12.1932};
					groundReflectionCloud[] = {{0.388,0.396,0.408},12.1932};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.333,0.404,0.518},12.4421};
					apertureMin = 45;
					apertureStandard = 50;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting37
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.506,0.553,0.608},4.25};
					diffuseCloud[] = {0.1265,0.13825,0.152};
					ambient[] = {{0.506,0.553,0.608},14.8};
					ambientCloud[] = {{0.506,0.553,0.608},14.8};
					ambientMid[] = {{0.514,0.518,0.514},13.3437};
					ambientMidCloud[] = {{0.514,0.518,0.514},13.3437};
					groundReflection[] = {{0.435,0.439,0.439},13.0768};
					groundReflectionCloud[] = {{0.435,0.439,0.439},13.0768};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.369,0.447,0.565},13.3437};
					apertureMin = 70;
					apertureStandard = 100;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting38
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{0.549,0.596,0.651},4.25};
					diffuseCloud[] = {0.13725,0.149,0.16275};
					ambient[] = {{0.549,0.596,0.651},14.8};
					ambientCloud[] = {{0.549,0.596,0.651},14.8};
					ambientMid[] = {{0.557,0.557,0.585},14.2139};
					ambientMidCloud[] = {{0.557,0.557,0.585},14.2139};
					groundReflection[] = {{0.471,0.471,0.463},13.9296};
					groundReflectionCloud[] = {{0.471,0.471,0.463},13.9296};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.4,0.48,0.6},15};
					apertureMin = 70;
					apertureStandard = 110;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting39
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.6,0.8,1},2.8};
					diffuseCloud[] = {{0.6,0.8,1},2.8};
					ambient[] = {{0.4,0.9,1},0.84};
					ambientCloud[] = {{0.4,0.9,1},0.84};
					ambientMid[] = {{0.24,0.63,1},0.9072};
					ambientMidCloud[] = {{0.24,0.63,1},0.9072};
					groundReflection[] = {{0.24,0.63,1},0.870912};
					groundReflectionCloud[] = {{0.24,0.63,1},0.870912};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0,0.2355,0.2335};
					skyAroundSun[] = {0,0.2355,0.2335};
					fogColor[] = {{0.09,0.137,0.22},0.0275};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting40
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},2.1};
					diffuseCloud[] = {{0.6,0.8,1},2.1};
					ambient[] = {{0.4,0.9,1},3.68};
					ambientCloud[] = {{0.4,0.9,1},3.68};
					ambientMid[] = {{0.24,0.63,1},3.9744};
					ambientMidCloud[] = {{0.24,0.63,1},3.9744};
					groundReflection[] = {{0.24,0.63,1},3.81542};
					groundReflectionCloud[] = {{0.24,0.63,1},3.81542};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2235,0.2705},4.232};
					skyAroundSun[] = {{0,0.2235,0.2705},7.63695};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 5;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting41
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},3.5};
					diffuseCloud[] = {{0.6,0.8,1},3.5};
					ambient[] = {{0.4,0.9,1},5.52};
					ambientCloud[] = {{0.4,0.9,1},5.52};
					ambientMid[] = {{0.24,0.63,1},5.9616};
					ambientMidCloud[] = {{0.24,0.63,1},5.9616};
					groundReflection[] = {{0.24,0.63,1},5.72314};
					groundReflectionCloud[] = {{0.24,0.63,1},5.72314};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2175,0.288},6.348};
					skyAroundSun[] = {{0,0.2175,0.288},12.3177};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 6;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting42
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},4.2};
					diffuseCloud[] = {{0.6,0.8,1},4.2};
					ambient[] = {{0.4,0.9,1},6.24};
					ambientCloud[] = {{0.4,0.9,1},6.24};
					ambientMid[] = {{0.24,0.63,1},6.7392};
					ambientMidCloud[] = {{0.24,0.63,1},6.7392};
					groundReflection[] = {{0.24,0.63,1},6.46963};
					groundReflectionCloud[] = {{0.24,0.63,1},6.46963};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2115,0.306},7.176};
					skyAroundSun[] = {{0,0.2115,0.306},13.3888};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 7;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting43
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},12.04};
					diffuseCloud[] = {{0.6,0.8,1},12.04};
					ambient[] = {{0.4,0.9,1},11.84};
					ambientCloud[] = {{0.4,0.9,1},11.84};
					ambientMid[] = {{0.36,0.72,1},11.4848};
					ambientMidCloud[] = {{0.36,0.72,1},11.4848};
					groundReflection[] = {{0.36,0.72,1},11.0254};
					groundReflectionCloud[] = {{0.36,0.72,1},11.0254};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.09,0.4},13.8};
					skyAroundSun[] = {{0,0.09,0.4},13.8};
					fogColor[] = {{0.3,0.44,0.74},16.5};
					apertureMin = 12;
					apertureStandard = 18;
					apertureMax = 25;
					standardAvgLum = 150;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting44
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},12.04};
					diffuseCloud[] = {{0.6,0.8,1},12.04};
					ambient[] = {{0.4,0.9,1},11.84};
					ambientCloud[] = {{0.4,0.9,1},11.84};
					ambientMid[] = {{0.36,0.72,1},11.4848};
					ambientMidCloud[] = {{0.36,0.72,1},11.4848};
					groundReflection[] = {{0.36,0.72,1},11.0254};
					groundReflectionCloud[] = {{0.36,0.72,1},11.0254};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.09,0.4},13.8};
					skyAroundSun[] = {{0,0.09,0.4},13.8};
					fogColor[] = {{0.3,0.44,0.74},16.5};
					apertureMin = 12;
					apertureStandard = 18;
					apertureMax = 25;
					standardAvgLum = 150;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
			};
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast = 0;
				};
				class Rainy: DayLightingRainy
				{
					overcast = 1;
				};
			};
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
				};
				class Weather7: Weather1
				{
					sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
				};
				class Weather2: Weather2
				{
					sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_almostclear_lco.paa";
				};
				class Weather3: Weather3
				{
					sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
				};
				class Weather4: Weather4
				{
					sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
				};
				class Weather5: Weather5
				{
					sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
				};
				class Weather6: Weather6
				{
					sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
					horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
					skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
				};
			};
			class ThunderboltNorm
			{
				model = "\A3\data_f\blesk1.p3d";
				soundNear[] = {"",2.51189,1};
				soundFar[] = {"",1.99526,1};
				soundSet[] = {"Thunder_Norm_SoundSet"};
			};
			class ThunderboltHeavy
			{
				model = "\A3\data_f\blesk2.p3d";
				soundNear[] = {"",3.16228,1};
				soundFar[] = {"",2.51189,1};
				soundSet[] = {"Thunder_Heavy_SoundSet"};
			};
		};
		humidityUpCoef = 0.1;
		humidityDownCoef = 0.05;
		class SimulWeather
		{
			noiseTexture = "a3\data_f\noise_raw.paa";
			numKeyframesPerDay = 48;
			windSpeedCoef = "10.0f";
			moonIrradianceCoef = "10.0f";
			fadeMaxDistanceKm = 1000;
			fadeMaxAltitudeKm = 15;
			fadeNumAltitudes = 8;
			fadeNumElevations = 8;
			fadeNumDistances = 8;
			fadeEarthTest = 1;
			autoBrightness = 0;
			autoBrightnessStrength = 0.1;
			cloudGridWidth = 64;
			cloudGridLength = 64;
			cloudGridHeight = 16;
			helperGridElevationSteps = 24;
			helperGridAzimuthSteps = 15;
			helperEffectiveEarthRadius = 1e+006;
			helperCurvedEarth = 1;
			helperAdjustCurvature = 0;
			helperNumLayers = 120;
			helperMaxDistance = 160000;
			helperNearCloudFade = 0.1;
			helperChurn = 10;
			cloudWidth = 40000;
			cloudLength = 40000;
			wrapClouds = 1;
			noiseResolution = 8;
			noisePeriod = 4;
			opticalDensity = 0.5;
			alphaSharpness = 0.85;
			selfShadowScale = 0.905;
			mieAsymmetry = 0.5087;
			minimumLightElevationDegrees = 6;
			directLightCoef = 1;
			indirectLightCoef = 0.04;
			fogStart = 0;
			fogEnd = 50000;
			fogHeight = 2000;
			class DefaultKeyframe
			{
				rayleigh[] = {0.00749,0.01388,0.02878};
				mie[] = {0.0046,0.0046,0.0046};
				haze = 30;
				hazeBaseKm = 5;
				hazeScaleKm = 1;
				hazeEccentricity = 1;
				brightnessAdjustment = 1;
				cloudiness = 0.6;
				cloudBaseKm = 2.85;
				cloudHeightKm = 6;
				directLight = 1;
				indirectLight = 1;
				ambientLight = 0.2;
				noiseOctaves = 4.3;
				noisePersistence = 0.535;
				fractalAmplitude = 2.3;
				fractalWavelength = 240;
				extinction = 4.7;
				diffusivity = 0.001;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast = 0;
					cloudiness = 0;
					diffusivity = 0.001;
					seqFileKeyframe = 0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast = 0.2;
					cloudiness = 0.25;
					diffusivity = 0.001;
					seqFileKeyframe = 0;
				};
				class Weather3: DefaultKeyframe
				{
					overcast = 0.4;
					cloudiness = 0.45;
					diffusivity = 0.001;
					seqFileKeyframe = 3;
				};
				class Weather4: DefaultKeyframe
				{
					overcast = 0.5;
					cloudiness = 0.46;
					diffusivity = 0.01;
					seqFileKeyframe = 4;
				};
				class Weather5: DefaultKeyframe
				{
					overcast = 0.8;
					cloudiness = 0.8;
					diffusivity = 0.01;
					extinction = 4.3;
					cloudBaseKm = 1.9;
					cloudHeightKm = 8;
					seqFileKeyframe = 4;
				};
				class Weather6: DefaultKeyframe
				{
					overcast = 1;
					cloudiness = 1;
					diffusivity = 0.001;
					extinction = 4;
					cloudBaseKm = 1.7;
					cloudHeightKm = 10;
					seqFileKeyframe = 4;
				};
			};
		};
		class DefaultClutter;
		class Clutter
		{
			class StrGrassGreenGroup: DefaultClutter
			{
				model = "A3\plants_f\Clutter\c_StrGrassGreen_group.p3d";
				affectedByWind = 0.6;
				swLighting = 1;
				scaleMin = 0.6;
				scaleMax = 1.99;
			};
			class SeaWeed1: DefaultClutter
			{
				model = "A3\Plants_F\Clutter\c_SeaWeed1.p3d";
				affectedByWind = 0.2;
				swLighting = 0;
				scaleMin = 0.4;
				scaleMax = 1.0;
			};
			class SeaWeed2: DefaultClutter
			{
				model = "A3\Plants_F\Clutter\c_SeaWeed2.p3d";
				affectedByWind = 0.2;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral1: DefaultClutter
			{
				model = "A3\Plants_F\Clutter\c_Coral1.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral2: DefaultClutter
			{
				model = "A3\Plants_F\Clutter\c_Coral2.p3d";
				affectedByWind = 0.0;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral3: DefaultClutter
			{
				model = "A3\Plants_F\Clutter\c_Coral3.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 0.5;
			};
			class Coral4: DefaultClutter
			{
				model = "A3\Plants_F\Clutter\c_Coral4.p3d";
				affectedByWind = 0.1;
				swLighting = 0;
				scaleMin = 0.3;
				scaleMax = 1.0;
			};
			class Coral5: DefaultClutter
			{
				model = "A3\Plants_F\Clutter\c_Coral5.p3d";
				affectedByWind = 0.05;
				swLighting = 0;
				scaleMin = 0.2;
				scaleMax = 0.6;
			};
		};
		soundMapSizeCoef = 4;
		satelliteNormalBlendStart = 10;
		satelliteNormalBlendEnd = 100;
		skyObject = "A3\Map_Stratis\data\obloha.p3d";
		horizontObject = "A3\Map_Stratis\data\horizont.p3d";
		skyTexture = "A3\Map_Stratis\data\sky_semicloudy_sky.paa";
		skyTextureR = "A3\Map_Stratis\data\sky_semicloudy_lco.paa";
		terrainBlendMaxDarkenCoef = "0.0f";
		terrainBlendMaxBrightenCoef = "0.0f";
		clutterGrid = 0.8;
		clutterDist = 100;
		noDetailDist = 50;
		fullDetailDist = 5;
		clutterRoadwayCheckRadiusCoef = "0.8f";
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "5.0f";
		clutterColoringFarStart = "20.0f";
		clutterColoringFarSpeed = "2.0f";
		midDetailTexture = "fow_map_tarawa\data\a_middle_mco.paa";
		class Subdivision
		{
			class Fractal
			{
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise
			{
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = 0;
			minSlope = 0.02;
		};
		class Names
		{
			class DefaultKeyPoint1
			{
				name = "Green Beach";
				position[] = {960.39,2096.97};
				type = "StrongpointArea";
				radiusA = 212.69;
				radiusB = 172.08;
				angle = 0.0;
			};
			class DefaultKeyPoint2
			{
				name = "Red Beach 1";
				position[] = {1502.41,2551.0};
				type = "StrongpointArea";
				radiusA = 332.33;
				radiusB = 268.88;
				angle = 0.0;
			};
			class DefaultKeyPoint3
			{
				name = "Red Beach 2";
				position[] = {1999.66,2551.24};
				type = "StrongpointArea";
				radiusA = 332.33;
				radiusB = 268.88;
				angle = 0.0;
			};
			class DefaultKeyPoint4
			{
				name = "Red Beach 3";
				position[] = {2621.55,2552.64};
				type = "StrongpointArea";
				radiusA = 332.33;
				radiusB = 268.88;
				angle = 0.0;
			};
			class DefaultKeyPoint5
			{
				name = "Temakin Point";
				position[] = {1000.7,1571.54};
				type = "StrongpointArea";
				radiusA = 214.28;
				radiusB = 173.37;
				angle = 0.0;
			};
			class DefaultKeyPoint6
			{
				name = "Takarongo Point";
				position[] = {4302.36,920.04};
				type = "StrongpointArea";
				radiusA = 214.28;
				radiusB = 173.37;
				angle = 0.0;
			};
		};
		class Ambient{};
		class AmbientA3
		{
			maxCost = 500;
			class Radius440_500
			{
				areaSpawnRadius = 440;
				areaMaxRadius = 500;
				spawnCircleRadius = 30;
				spawnInterval = 4.7;
				class Species
				{
					class Kestrel_random_F
					{
						maxCircleCount = "((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night)";
						maxWorldCount = 4;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
					class Seagull
					{
						maxCircleCount = "((sea * (1 - night)) + (2 * houses * sea)) * (1 - night)";
						maxWorldCount = 8;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
					class Crowe
					{
						maxCircleCount = "((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night)";
						maxWorldCount = 8;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
				};
			};
			class Radius40_60
			{
				areaSpawnRadius = 50;
				areaMaxRadius = 83;
				spawnCircleRadius = 10;
				spawnInterval = 1.5;
				class Species
				{
					class CatShark_F
					{
						maxCircleCount = "(4 * (WaterDepth interpolate [1,30,0,1]))";
						maxWorldCount = 30;
						cost = 6;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 10;
						minAlt = -80;
					};
					class Turtle_F
					{
						maxCircleCount = "(2 * (waterDepth interpolate [1,16,0,1]) * ((1-houses) * (1-houses)))";
						maxWorldCount = 12;
						cost = 5;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 10;
						minAlt = -80;
					};
					class Salema_F
					{
						maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 20;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Ornate_random_F
					{
						maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.05))";
						maxWorldCount = 15;
						cost = 5;
						spawnCount = 3;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Mackerel_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 14;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Mullet_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 7;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Tuna_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) - 0.2))";
						maxWorldCount = 20;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
				};
			};
			class Radius30_40
			{
				areaSpawnRadius = 30;
				areaMaxRadius = 40;
				spawnCircleRadius = 3;
				spawnInterval = 3.75;
				class Species
				{
					class DragonFly
					{
						maxCircleCount = "4 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * sea * (1 - windy)";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class ButterFly_random
					{
						maxCircleCount = "3 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy)";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FireFly
					{
						maxCircleCount = "(8 * night) * (1 - sea) * (1 - houses) * (1 - windy)";
						maxWorldCount = 20;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 3;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius15_20
			{
				areaSpawnRadius = 15;
				areaMaxRadius = 20;
				spawnCircleRadius = 2;
				spawnInterval = 2.85;
				class Species
				{
					class FxWindGrass1
					{
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 10;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindGrass2
					{
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 10;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf1
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf2
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf3
					{
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPollen1
					{
						maxCircleCount = "(3 * (1 - (WaterDepth interpolate [1,30,0,1]))) * (windy interpolate [0.05,0.15,0,1])";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPaper1
					{
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 1;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPlastic1
					{
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 1;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius6_10
			{
				areaSpawnRadius = 6;
				areaMaxRadius = 10;
				spawnCircleRadius = 1;
				spawnInterval = 0.1;
				class Species
				{
					class HoneyBee
					{
						maxCircleCount = "4 * (1 - night) * (1 - sea) * (1 - houses) * (1 - windy)";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class HouseFly
					{
						maxCircleCount = "(3 + 3 * (houses)) * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy)";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class Mosquito
					{
						maxCircleCount = "3 * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy)";
						maxWorldCount = 5;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
		};
		safePositionAnchor[] = {9158,9962};
		safePositionRadius = 100;
		loadingTexts[] = {"The Battle of Tarawa was fought from November 20 to November 23, 1943","4,500 Japanese defenders were well-supplied and well-prepared, and they fought almost to the last man.","The Battle of Tarawa was the first time in the Pacific War that the United States faced serious Japanese opposition to an amphibious landing.","The Battle of Tarawa was the first American offensive in the critical central Pacific region."};
		initWorld = "Tarawa";
		demoWorld = "Tarawa";
	};
};
class CfgSurfaces
{
	class Default{};
	class Water{};
	class trw_seabed: Default
	{
		access = 2;
		files = "trw_seabed*";
		character = "trw_seabed_clutter";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.8;
		dust = 0.5;
		lucidity = 1.25;
		grassCover = 0.0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
		maxClutterColoringCoef = 1.35;
	};
	class trw_grass_green: Default
	{
		access = 2;
		files = "trw_grass_green*";
		character = "trw_grass_green_clutter";
		soundEnviron = "grass";
		soundHit = "soft_ground";
		rough = 0.12;
		maxSpeedCoef = 0.9;
		dust = 0.6;
		lucidity = 2;
		grassCover = 0.05;
		impact = "hitGroundSoft";
		surfaceFriction = 1.7;
		maxClutterColoringCoef = 1.35;
	};
	class trw_beach: Default
	{
		access = 2;
		files = "trw_beach*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.8;
		dust = 1.2;
		lucidity = 1.25;
		grassCover = 0.0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
		maxClutterColoringCoef = 1.35;
	};
	class trw_field: Default
	{
		access = 2;
		files = "trw_field*";
		character = "Empty";
		soundEnviron = "sand";
		soundHit = "soft_ground";
		rough = 0.1;
		maxSpeedCoef = 0.8;
		dust = 1.5;
		lucidity = 1.25;
		grassCover = 0.0;
		impact = "hitGroundSoft";
		surfaceFriction = 1.6;
		maxClutterColoringCoef = 1.35;
	};
};
class CfgSurfaceCharacters
{
	class trw_grass_green_clutter
	{
		probability[] = {0.6};
		names[] = {"StrGrassGreenGroup"};
	};
	class trw_seabed_clutter
	{
		probability[] = {0.2,0.2,0.2,0.01,0.1,0.1,0.1};
		names[] = {"SeaWeed1","SeaWeed2","Coral4","Coral1","Coral5","Coral3","Coral2"};
	};
};
class CfgWorldList
{
	class fow_map_tarawa{};
};
//};
