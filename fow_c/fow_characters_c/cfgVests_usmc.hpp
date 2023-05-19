
class fow_v_usmc_45: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[USMC] Kit .45"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_45_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\usmc\lodu_usmc_vest_colt45.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camoB"};
	hiddenSelectionsTextures[] = {"fow\fow_characters\usmc\data\lodu_garand_belt_co.paa","fow\fow_characters\usmc\data\lodu_pouchs_us_co.paa"};

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\usmc\lodu_usmc_vest_colt45.p3d"; /// what model does the vest use
		containerClass = "Supply20";
		mass = 15;
	};
};
class fow_v_usmc_bar: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[USMC] Kit Bar"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_bar_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\usmc\lodu_usmc_vest_bar.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camoB"};
	hiddenSelectionsTextures[] = {"fow\fow_characters\usmc\data\lodu_garand_belt_co.paa","fow\fow_characters\usmc\data\lodu_pouchs_us_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\usmc\lodu_usmc_vest_bar.p3d"; /// what model does the vest use
		containerClass = "Supply100";
		mass = 65;
	};
};
class fow_v_usmc_carbine: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[USMC] Kit Carbine"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_carbine_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\usmc\lodu_usmc_vest_carbine.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camoB"};
	hiddenSelectionsTextures[] = {"fow\fow_characters\usmc\data\lodu_garand_belt_co.paa","fow\fow_characters\usmc\data\lodu_pouchs_us_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\usmc\lodu_usmc_vest_carbine.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 38;
	};
};
class fow_v_usmc_garand: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[USMC] Kit Garand"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_garand_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\usmc\lodu_usmc_vest_garand.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"fow\fow_characters\usmc\data\lodu_garand_belt_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\usmc\lodu_usmc_vest_garand.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 44;
	};
};
class fow_v_usmc_thompson: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[USMC] Kit Thompson"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_thompson_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\usmc\lodu_usmc_vest_thompson.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camoB"};
	hiddenSelectionsTextures[] = {"fow\fow_characters\usmc\data\lodu_garand_belt_co.paa","fow\fow_characters\usmc\data\lodu_pouchs_us_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\usmc\lodu_usmc_vest_thompson.p3d"; /// what model does the vest use
		containerClass = "Supply50";
		mass = 32;
		//LOAD(10,100) /// macro from basicdefines_A3.hpp
		//overlaySelectionsInfo[] = {"ghillie_hide"}; /// name of selections to be hidden while wearing certain uniforms
	};
};
class fow_v_usmc_thompson_nco: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[USMC] Kit Thompson NCO"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_thompson_nco_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\usmc\lodu_usmc_vest_nco_thompson.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camoB"};
	hiddenSelectionsTextures[] = {"fow\fow_characters\usmc\data\lodu_garand_belt_co.paa","fow\fow_characters\usmc\data\lodu_pouchs_us_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\usmc\lodu_usmc_vest_nco_thompson.p3d"; /// what model does the vest use
		containerClass = "Supply50";
		mass = 35;
		//LOAD(10,100) /// macro from basicdefines_A3.hpp
		//overlaySelectionsInfo[] = {"ghillie_hide"}; /// name of selections to be hidden while wearing certain uniforms
	};
};