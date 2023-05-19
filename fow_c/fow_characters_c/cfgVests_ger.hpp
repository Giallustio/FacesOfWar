
class fow_v_heer_p38: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit P38"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_k98_bayo_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_heer_P38.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_heer_P38.p3d"; /// what model does the vest use
		containerClass = "Supply10";
		mass = 5;
	};
};
class fow_v_heer_tankcrew_p38: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Tank crew Kit P38"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_k98_bayo_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_panzercrew_P38.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_panzercrew_P38.p3d"; /// what model does the vest use
		containerClass = "Supply30";
		mass = 5;
	};
};
class fow_v_heer_g43: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit G43"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_g43_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_heer_vest_G43.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_equip_heer01_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_heer_vest_G43.p3d"; /// what model does the vest use
		containerClass = "Supply50";
		mass = 25;
	};
};
class fow_v_heer_k98: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit K98"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_k98_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_heer_vest_K98.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_equip_heer01_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_heer_vest_K98.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 38;
	};
};
class fow_v_heer_k98_ass: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit K98 (ass)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_k98_ass_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_heer_vest_K98_ass.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_equip_heer01_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_heer_vest_K98_ass.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 43;//+5 for ass
	};
};
class fow_v_heer_k98_bayo: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit K98 (bayonet)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_k98_bayo_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_heer_vest_K98_bayo.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_equip_heer01_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_heer_vest_K98_bayo.p3d"; /// what model does the vest use
		containerClass = "Supply10";
		mass = 5;
	};
};
class fow_v_heer_k98_light: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit K98 (light)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_k98_light_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_heer_vest_K98_light.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_equip_heer01_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_heer_vest_K98_light.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 32;
	};
};
class fow_v_heer_mg: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit MG"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_mg_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_heer_vest_MG.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_equip_heer01_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_heer_vest_MG.p3d"; /// what model does the vest use
		containerClass = "Supply80";
		mass = 55;
	};
};
class fow_v_heer_mp40: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit MP40"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_mp40_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_heer_vest_MP40.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_equip_heer01_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_heer_vest_MP40.p3d"; /// what model does the vest use
		containerClass = "Supply60";
		mass = 38;
	};
};
class fow_v_heer_mp40_nco: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit MP40 NCO"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_mp40_nco_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_heer_vest_MP40_NCO.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_equip_heer01_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_heer_vest_MP40_NCO.p3d"; /// what model does the vest use
		containerClass = "Supply40";
		mass = 25;
	};
};
class fow_v_heer_mp44: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit MP44"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_mp44_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_heer_vest_MP44.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_equip_heer01_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_heer_vest_MP44.p3d"; /// what model does the vest use
		containerClass = "Supply60";
		mass = 38;
	};
};
class fow_v_fall_bandoleer: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[GER] Kit Bandoleer Fall"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_v_heer_g43_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\ger\lodu_luft_vest_bandoleer_fall01.p3d"; /// what model does the vest use
	//hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\Fall_equip01_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\ger\lodu_luft_vest_bandoleer_fall01.p3d"; /// what model does the vest use
		containerClass = "Supply120";
		mass = 55;
	};
};