
//Class ui_f : config.bin{
class CfgPatches
{
	class fow_ui_c
	{
		//author = "$STR_A3_Bohemia_Interactive";
		//name = "Arma 3 - User Interface";
		//url = "https://www.arma3.com";
		requiredAddons[] = {"A3_Map_Malden","fow_main","fow_map_tarawa","fow_map_Henderson"};
		requiredVersion = 0.1;
		version = "7.00.230514";//yy-mm-dd
		units[] = {};
		weapons[] = {};
	};
};
class CfgMissions
{
	class Cutscenes {
		class fow_map_tarawa_intro {
			directory = "fow\fow_ui_c\scenes\intro.fow_map_tarawa";
		};		
		class fow_map_altis_intro {
			directory = "fow\fow_ui_c\scenes\intro.Altis";
		};		
		class fow_map_henderson {
			directory = "fow\fow_ui_c\scenes\intro.fow_map_henderson";
		};		
		class fow_map_malden_intro {
			directory = "fow\fow_ui_c\scenes\intro.Malden";
		};		
		class fow_map_stratis_intro {
			directory = "fow\fow_ui_c\scenes\intro.Stratis";
		};		
		class fow_map_tanoa_intro {
			directory = "fow\fow_ui_c\scenes\intro.Tanoa";
		};		
		class fow_map_vr_intro {
			directory = "fow\fow_ui_c\scenes\intro.VR";
		};		
	};
};
class CfgWorlds
{
	class CAWorld;
	class fow_map_tarawa: CAWorld {
		cutscenes[] = {"fow_map_tarawa_intro"};
	};
	class fow_map_Henderson: CAWorld {
		cutscenes[] = {"fow_map_henderson"};
	};
	class Altis: CAWorld {
		cutscenes[] = {"fow_map_altis_intro"};
	};
	class Malden: CAWorld {
		cutscenes[] = {"fow_map_malden_intro"};
	};
	class Stratis: CAWorld {
		cutscenes[] = {"fow_map_stratis_intro"};
	};
	class Tanoa: CAWorld {
		cutscenes[] = {"fow_map_tanoa_intro"};
	};
	class VR: CAWorld {
		cutscenes[] = {"fow_map_vr_intro"};
	};
};
class RscStandardDisplay;
class RscPicture;
class RscText;
class RscActivePicture;
class RscDisplayMain: RscStandardDisplay
{
	idd = 0;
	/*
	scriptName = "RscDisplayMain";
	scriptPath = "GUI";*/
	//onLoad = "[""onLoad"",_this,""RscDisplayMain"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay');playMusic 'fow_main_theme';addMusicEventHandler ['MusicStop', {[] spawn {sleep 5; playMusic 'fow_main_theme'}}];";
	//onUnload = "[""onUnload"",_this,""RscDisplayMain"",'GUI'] call 	(uinamespace getvariable 'BIS_fnc_initDisplay')";
	
	class ControlsBackground
	{
		/*
		class MouseArea: RscText
		{
			idc = 999;
			style = 16;
			x = "safezoneXAbs";
			y = "safezoneY";
			w = "safezoneWAbs";
			h = "safezoneH";
		};*/
		class BackgroundLeft: RscText
		{
			colorBackground[] = {0.1,0.1,0.1,0};
			x = "-	100";
			y = "-	100";
			w = "0";
			h = "0";
		};
		class BackgroundRight: BackgroundLeft
		{
			x = "-200";
			w = 0;
		};
		class Picture: RscPicture
		{
			idc = 998;
			text = "\fow\fow_ui\data\screen_1.jpg";
			x = "-200";
			y = "safezoneY";
			w = "0";
			h = "0";
		};
		class Picture1: Picture
		{
			text = "\fow\fow_ui\data\screen_1.jpg";
			x = "safezoneX";
			y = "safezoneY";
			w = "safezoneW";
			h = "safezoneH";//h = "safezoneW * 4/3";
		};
		class Picture2: Picture1
		{
			text = "\fow\fow_ui\data\screen_2.jpg";
			onLoad = "(_this select 0) ctrlshow (selectRandom [true,false,true,false])";
		};
		class Picture3: Picture1
		{
			text = "\fow\fow_ui\data\screen_3.jpg";
			onLoad = "(_this select 0) ctrlshow (selectRandom [true,false,true,false])";
		};
		class Picture4: Picture1
		{
			text = "\fow\fow_ui\data\screen_4.jpg";
			onLoad = "(_this select 0) ctrlshow (selectRandom [true,false,true,false])";
		};
		/*class Picture5: Picture1
		{
			text = "\fow\fow_ui\data\screen_4.jpg";
		};*/
	};
	class Controls
	{
		delete Spotlight1;
		delete Spotlight2;
		delete Spotlight3;
		delete SpotlightPrev;
		delete SpotlightNext;
		//delete Logo;
		//delete LogoApex;
		//delete TitleSingleplayer;
		//delete TitleIconSingleplayer;
		//delete GroupSingleplayer;
		//delete TitleMultiplayer;
		//delete TitleIconMultiplayer;
		//delete GroupMultiplayer;
		//delete TitleTutorials;
		//delete TitleIconTutorials;
		//delete GroupTutorials;
		//delete TitleOptions;
		//delete GroupOptions;
		//delete TitleSession;
		//delete Exit;
		//delete InfoMods;
		//delete InfoDLCsOwned;
		//delete InfoDLCs;
		//delete InfoNews;
		//delete InfoVersion;
		//delete Footer;
		//delete AllMissions;
		//delete ProofsOfConcept;	
		class BackgroundSpotlight: RscPicture
		{
			text = "#(argb,8,8,3)color(1,1,1,1)";
			colorText[] = {0,0,0,0.9};
			x = "-200";
			y = "-200";
			w = "0";
			h = "0";
		};
		class BackgroundSpotlightLeft: BackgroundSpotlight
		{
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
			angle = 180;
			x = "-200";
			y = "-200";
			w = "0";
			h = "0";
		};
		class BackgroundSpotlightRight: BackgroundSpotlightLeft
		{
			text = "\a3\Ui_f\data\GUI\Rsc\RscDisplayMain\gradient_ca.paa";
			angle = 0;
			x = "-200";
			y = "-200";
			w = "0";
			h = "0";
		};
		class LogoFOW: RscActivePicture
		{
			text = "\fow\fow_ui\data\logo_ca.paa";
			tooltip = "Faces Of War";
			color[] = {0.9,0.9,0.9,1};
			colorActive[] = {1,1,1,1};
			shadow = 0;
			x = "0.5 - 	5 * 	(pixelW * pixelGrid * 2)";
			y = "safezoneY + (10 - 0.5 * 	5) * 	(pixelH * pixelGrid * 2)";
			w = "2 * 	5 * 	(pixelW * pixelGrid * 2)";
			h = "2 * 	5 * 	(pixelH * pixelGrid * 2)";
			//onButtonClick = "if (scriptdone (missionnamespace getvariable ['RscDisplayMain_credits',scriptnull])) then {RscDisplayMain_credits = _this spawn (uinamespace getvariable 'bis_fnc_credits');};";
			//onSetFocus = "(_this select 0) ctrlsettextcolor [1,1,1,1];";
			//onKillFocus = "(_this select 0) ctrlsettextcolor [0.9,0.9,0.9,1];";
			//onLoad = "(_this select 0) ctrlshow !isClass (configfile >> 'CfgPatches' >> 'A3_Map_Tanoabuka')";
		}; 
		class FOW_version: RscText {
			style = 2;
			sizeEx = "1 * 	(pixelH * pixelGrid * 3)";
			shadow = 0;
			font = "RobotoCondensedLight";
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};
			x = "safezoneX";
			y = "safezoneY + safezoneH - 5 * 	1 * 	(pixelH * pixelGrid * 2)";
			w = "safezoneW";
			h = "(	1) * 	(pixelH * pixelGrid * 2)";
			text = "Faces Of War v. 7.00.230514";
        };
	};
};
