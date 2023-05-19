////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.97
//'now' is Wed Jan 04 08:31:20 2017 : 'file' last modified on Mon Jan 02 17:59:15 2017
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class fow_clutter_e : config.bin{
class CfgPatches
{
	class fow_clutter_e_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_clutter_e"};
	};
};

class CfgVehicleClasses
{
	class FOW_Clutter_E
	{
		displayName = "FOW_Clutter";
	};
};
class CfgVehicles
{
	class Static;
	class FOW_Clutter_Baseclass: Static
	{
		vehicleClass = "FOW_Clutter_E";
		armor = 20;
		displayName = "";
		icon = "iconObject";
		cost = 2;
	};
class fow_fow_pumpkin : FOW_Clutter_Baseclass
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";
 displayName = "fow_fow_pumpkin";  
 model = "FOW\fow_clutter_e\fow_pumpkin.p3d"; 
};
class fow_fow_pumpkin2 : FOW_Clutter_Baseclass
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";
 displayName = "fow_fow_pumpkin2";  
 model = "FOW\fow_clutter_e\fow_pumpkin2.p3d"; 
};
class fow_flower_mix : FOW_Clutter_Baseclass
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";
 displayName = "fow_flower_mix";  
 model = "FOW\fow_clutter_e\fow_flower_mix.p3d"; 
};
class fow_GrassCrooked : FOW_Clutter_Baseclass
{ 
 scope = 2; 
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_GrassCrooked";  
 model = "FOW\fow_clutter_e\fow_GrassCrooked.p3d"; 
};
class fow_grassDry : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_grassDry";  
 model = "FOW\fow_clutter_e\fow_grassDry.p3d"; 
};
class fow_GrassGreen : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_GrassGreen";  
 model = "FOW\fow_clutter_e\fow_GrassGreen.p3d"; 
};
class fow_GrassTall : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_GrassTall";  
 model = "FOW\fow_clutter_e\fow_GrassTall.p3d"; 
};
class fow_summer_flowers : FOW_Clutter_Baseclass { 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_summer_flowers";  
 model = "FOW\fow_clutter_e\fow_summer_flowers.p3d"; 
};
class fow_summer_smetanka : FOW_Clutter_Baseclass { 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_summer_smetanka";  
 model = "FOW\fow_clutter_e\fow_summer_smetanka.p3d"; 
};
class fow_wheat_L : FOW_Clutter_Baseclass { 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_wheat_L";  
 model = "FOW\fow_clutter_e\fow_wheat_L.p3d"; 
};
class fow_fern : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_fern";  
 model = "FOW\fow_clutter_e\fow_fern.p3d"; 
};
class fow_fernTall : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_fernTall";  
 model = "FOW\fow_clutter_e\fow_fernTall.p3d"; 
};
class fow_fernTall_summer : FOW_Clutter_Baseclass { 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_fernTall_summer";  
 model = "FOW\fow_clutter_e\fow_fernTall_summer.p3d"; 
};
class fow_grassBunch : FOW_Clutter_Baseclass { 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_grassBunch";  
 model = "FOW\fow_clutter_e\fow_grassBunch.p3d"; 
};
class fow_MushroomBabka : FOW_Clutter_Baseclass { 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_MushroomBabka";  
 model = "FOW\fow_clutter_e\fow_MushroomBabka.p3d"; 
};
class fow_picea : FOW_Clutter_Baseclass { 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_picea";  
 model = "FOW\fow_clutter_e\fow_picea.p3d"; 
};
class fow_PlantsAutumnForest : FOW_Clutter_Baseclass { 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_PlantsAutumnForest";  
 model = "FOW\fow_clutter_e\fow_PlantsAutumnForest.p3d"; 
};
class fow_raspBerry_summer : FOW_Clutter_Baseclass { 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_raspBerry_summer";  
 model = "FOW\fow_clutter_e\fow_raspBerry_summer.p3d"; 
};
class fow_fernW : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_fernW";  
 model = "FOW\fow_clutter_e\fow_fernW.p3d"; 
};
class fow_fernTallW : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_fernTallW";  
 model = "FOW\fow_clutter_e\fow_fernTallW.p3d"; 
};
class fow_PiceaW : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_PiceaW";  
 model = "FOW\fow_clutter_e\fow_PiceaW.p3d"; 
};
class fow_taraxacum : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "fow_taraxacum";  
 model = "FOW\fow_clutter_e\fow_taraxacum.p3d"; 
};
class cype_clover : FOW_Clutter_Baseclass
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";
 displayName = "cype_clover";  
 model = "FOW\fow_clutter_e\cype_clover.p3d"; 
};
class cype_clover2 : FOW_Clutter_Baseclass
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";
 displayName = "cype_clover2";  
 model = "FOW\fow_clutter_e\cype_clover2.p3d"; 
};
class cype_grass : FOW_Clutter_Baseclass
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";
 displayName = "cype_grass";  
 model = "FOW\fow_clutter_e\cype_grass.p3d"; 
};
class cype_grass2 : FOW_Clutter_Baseclass
{ 
 scope = 2; 
 vehicleClass = "FOW_Clutter_E";  
 displayName = "cype_grass2";  
 model = "FOW\fow_clutter_e\cype_grass2.p3d"; 
};
class cype_grass3 : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "cype_grass3";  
 model = "FOW\fow_clutter_e\cype_grass3.p3d"; 
};
class cype_grass4 : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "cype_grass4";  
 model = "FOW\fow_clutter_e\cype_grass4.p3d"; 
};
class cype_grass5 : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "cype_grass5";  
 model = "FOW\fow_clutter_e\cype_grass5.p3d"; 
};
class cype_grass6 : FOW_Clutter_Baseclass 
{ 
 scope = 2;  
 vehicleClass = "FOW_Clutter_E";  
 displayName = "cype_grass6";  
 model = "FOW\fow_clutter_e\cype_grass6.p3d"; 
};
};