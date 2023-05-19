class fow_v_uk_officer: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[UK] Pattern 37 Webbing Officer (Khaki)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\uk\data\ui\fow_v_uk_officer_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\uk\lodu_vest_brit_off.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\lodu_brit_off_equip_co.paa"};	
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\uk\lodu_vest_brit_off.p3d"; /// what model does the vest use
		containerClass = "Supply40";
		mass = 25;
	};
};
class fow_v_uk_officer_green: fow_v_uk_officer
{	
	displayName  = "[UK] Pattern 37 Webbing Officer (Green)"; /// how would the stuff be displayed in inventory and on ground
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\lodu_brit_off02_co.paa"};
};
class fow_v_uk_base: fow_v_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[UK] Pattern 37 Webbing (Khaki)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\uk\data\ui\fow_v_uk_base_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\uk\lodu_vest_brit_pouch_base.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\lodu_brit_equip01_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\uk\lodu_vest_brit_pouch_base.p3d"; /// what model does the vest use
		containerClass = "Supply60";
		mass = 25;
	};
};
class fow_v_uk_base_green: fow_v_uk_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[UK] Pattern 37 Webbing (Green)"; /// how would the stuff be displayed in inventory and on ground
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\brit_equip02_co.paa"};
};
class fow_v_uk_bren: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[UK] Pattern 37 Webbing Bren (Khaki)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\uk\data\ui\fow_v_uk_bren_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\uk\lodu_vest_brit_pouch_bren.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\lodu_brit_equip01_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\uk\lodu_vest_brit_pouch_bren.p3d"; /// what model does the vest use
		containerClass = "Supply100";
		mass = 55;
	};
};
class fow_v_uk_bren_green: fow_v_uk_bren
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[UK] Pattern 37 Webbing Bren (Green)"; /// how would the stuff be displayed in inventory and on ground
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\brit_equip02_co.paa"};
};
class fow_v_uk_sten: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[UK] Pattern 37 Webbing Sten (Khaki)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\uk\data\ui\fow_v_uk_sten_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\uk\lodu_vest_brit_pouch_sten.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\lodu_brit_equip01_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\uk\lodu_vest_brit_pouch_sten.p3d"; /// what model does the vest use
		containerClass = "Supply100";
		mass = 44;
	};
};
class fow_v_uk_sten_green: fow_v_uk_sten
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[UK] Pattern 37 Webbing Sten (Green)"; /// how would the stuff be displayed in inventory and on ground
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\brit_equip02_co.paa"};
};

//Para
class fow_v_uk_para_base: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[UK] Para Pattern 37 Webbing (Khaki)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\uk\data\ui\fow_v_uk_base_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\uk\lodu_vest_brit_para_pouch_base_blanco.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1"};
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\lodu_brit_equip01_co.paa","\fow\fow_characters\uk\data\dague_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\uk\lodu_vest_brit_para_pouch_base_blanco.p3d"; /// what model does the vest use
		containerClass = "Supply90";
		mass = 40;
	};
};
class fow_v_uk_para_sten: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[UK] Para Pattern 37 Webbing Sten (Khaki)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\uk\data\ui\fow_v_uk_sten_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\uk\lodu_vest_brit_para_pouch_sten_blanco.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1"};
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\lodu_brit_equip01_co.paa","\fow\fow_characters\uk\data\dague_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\uk\lodu_vest_brit_para_pouch_sten_blanco.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 44;
	};
};
class fow_v_uk_para_bren: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[UK] Para Pattern 37 Webbing Bren (Khaki)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\uk\data\ui\fow_v_uk_bren_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\uk\lodu_vest_brit_para_pouch_bren_blanco.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1"};
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\lodu_brit_equip01_co.paa","\fow\fow_characters\uk\data\dague_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\uk\lodu_vest_brit_para_pouch_bren_blanco.p3d"; /// what model does the vest use
		containerClass = "Supply80";
		mass = 55;
	};
};
class fow_v_uk_para_base_green: fow_v_uk_para_base
{	
	displayName  = "[UK] Para Pattern 37 Webbing (Green)";
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\brit_equip02_co.paa","\fow\fow_characters\uk\data\dague_co.paa"};
};
class fow_v_uk_para_sten_green: fow_v_uk_para_sten
{	
	displayName  = "[UK] Para Pattern 37 Webbing Sten (Green)";
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\brit_equip02_co.paa","\fow\fow_characters\uk\data\dague_co.paa"};
};
class fow_v_uk_para_bren_green: fow_v_uk_para_bren
{	
	displayName  = "[UK] Para Pattern 37 Webbing Bren (Green)";
	hiddenSelectionsTextures[]={"\fow\fow_characters\uk\data\brit_equip02_co.paa","\fow\fow_characters\uk\data\dague_co.paa"};
};
