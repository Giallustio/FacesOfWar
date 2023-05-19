
class fow_v_ija_grenadier: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Kit Grenadier"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_v_ija_grenadier_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ija\lodu_IJA_vest_grenadier.p3d"; /// what model does the vest use
	//hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_japan_gear_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ija\lodu_IJA_vest_grenadier.p3d";
		containerClass = "Supply80";
		mass = 55;
		//overlaySelectionsInfo[] = {"ghillie_hide"}; /// name of selections to be hidden while wearing certain uniforms
	};
};
class fow_v_ija_bayonet: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Kit Bayonet"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_v_ija_bayonet_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ija\lodu_IJA_bayonet.p3d"; /// what model does the vest use
	//hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_japan_gear_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ija\lodu_IJA_bayonet.p3d";
		containerClass = "Supply0";
		mass = 10;
		//overlaySelectionsInfo[] = {"ghillie_hide"}; /// name of selections to be hidden while wearing certain uniforms
	};
};
class fow_v_ija_medic: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Kit Medic"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_v_ija_medic_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ija\lodu_IJA_vest_medic.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_japan_gear_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ija\lodu_IJA_vest_medic.p3d"; /// what model does the vest use
		containerClass = "Supply60";
		mass = 38;
	};
};
class fow_v_ija_mg: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Kit MG"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_v_ija_mg_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ija\lodu_IJA_vest_mg.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_japan_gear_co.paa","fow\fow_characters\ija\data\lodu_jap_off01_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ija\lodu_IJA_vest_mg.p3d"; /// what model does the vest use
		containerClass = "Supply90";
		mass = 60;
		//overlaySelectionsInfo[] = {"ghillie_hide"}; /// name of selections to be hidden while wearing certain uniforms
	};
};
class fow_v_ija_nco: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Kit NCO"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_v_ija_nco_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ija\lodu_IJA_vest_NCO.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camoB"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_japan_gear_co.paa","fow\fow_characters\ija\data\lodu_jap_off01_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ija\lodu_IJA_vest_NCO.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 44;
	};
};
class fow_v_ija_officer: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Kit Officer"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_v_ija_officer_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ija\lodu_IJA_vest_off.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"fow\fow_characters\ija\data\lodu_jap_off01_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ija\lodu_IJA_vest_off.p3d"; /// what model does the vest use
		containerClass = "Supply40";
		mass = 25;
		//overlaySelectionsInfo[] = {"ghillie_hide"}; /// name of selections to be hidden while wearing certain uniforms
	};
};
class fow_v_ija_rifle: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Kit Rifleman"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_v_ija_rifle_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ija\lodu_IJA_vest_rifle.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_japan_gear_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ija\lodu_IJA_vest_rifle.p3d"; /// what model does the vest use
		containerClass = "Supply100";
		mass = 65;
	};
};
class fow_v_ija_mortar: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Kit Mortar"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_v_ija_mortar_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ija\lodu_IJA_vest_mortar_knee.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_japan_gear_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ija\lodu_IJA_vest_mortar_knee.p3d"; /// what model does the vest use
		containerClass = "Supply80";
		mass = 50;
	};
};