
class fow_v_us_45: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit .45"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_45_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_45.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_45.p3d"; /// what model does the vest use
		containerClass = "Supply20";
		mass = 15;
	};
};
//PARAs
//hiddenSelections[] = {"camo","camo1","camo2","camo3"};
//hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa","\fow\fow_characters\us\data\lodu_us_bags01_co.paa"};

class fow_v_us_ab_45: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] AB Kit .45"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_45_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_45_para.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo2"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo2"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_45_para.p3d"; /// what model does the vest use
		containerClass = "Supply20";
		mass = 15;
	};
};
class fow_v_us_asst_mg: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit asst. MG"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_asst_mg_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_asst_mg.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_asst_mg.p3d"; /// what model does the vest use
		containerClass = "Supply100";
		mass = 65;
	};
};
class fow_v_us_ab_asst_mg: fow_v_us_asst_mg
{	
	displayName  = "[US] AB Kit asst. MG"; /// how would the stuff be displayed in inventory and on ground
	model   = "\fow\fow_characters\us\lodu_us_vest_asst_mg_para.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa","\fow\fow_characters\us\data\lodu_us_bags01_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_asst_mg_para.p3d"; /// what model does the vest use
	};
};
class fow_v_us_bar: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Bar"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_bar_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_bar.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_bar.p3d"; /// what model does the vest use
		containerClass = "Supply100";
		mass = 65;
	};
};
class fow_v_us_ab_bar: fow_v_us_bar
{	
	displayName  = "[US] AB Kit Bar";
	model   = "\fow\fow_characters\us\lodu_us_vest_bar_para.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1","camo2"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2"};	
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_bar_para.p3d"; /// what model does the vest use
	};
};
class fow_v_us_carbine: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Carbine"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_carbine_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_carbine.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_carbine.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 45;
	};
};
class fow_v_us_ab_carbine: fow_v_us_carbine
{	
	displayName  = "[US] AB Kit Carbine";
	model   = "\fow\fow_characters\us\lodu_us_vest_carbine_para.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1","camo2"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_carbine_para.p3d"; /// what model does the vest use
		containerClass = "Supply100";
		mass = 45;
	};
};
class fow_v_us_carbine_eng: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Carbine eng."; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_carbine_eng_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_carbine_eng.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_carbine_eng.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 45;
	};
};
class fow_v_us_ab_carbine_eng: fow_v_us_carbine_eng
{	
	displayName  = "[US] AB Kit Carbine eng."; /// how would the stuff be displayed in inventory and on ground
	model   = "\fow\fow_characters\us\lodu_us_vest_carbine_eng_para.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa","\fow\fow_characters\us\data\lodu_us_bags01_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_carbine_eng_para.p3d"; /// what model does the vest use
		containerClass = "Supply70";
	};
};
class fow_v_us_carbine_nco: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Carbine NCO"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_carbine_nco_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_carbine_nco_no_scr.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_carbine_nco_no_scr.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 45;
	};
};
class fow_v_us_carbine_nco_scr: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Carbine NCO (SCR)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_carbine_nco_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_carbine_nco.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_carbine_nco.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 65;
	};
};
class fow_v_us_ab_carbine_nco: fow_v_us_carbine_nco
{	
	displayName  = "[US] AB Kit Carbine NCO"; /// how would the stuff be displayed in inventory and on ground
	model   = "\fow\fow_characters\us\lodu_us_vest_carbine_nco_para_no_scr.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa","\fow\fow_characters\us\data\lodu_us_bags01_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_carbine_nco_para_no_scr.p3d"; /// what model does the vest use
		containerClass = "Supply80";
	};
};
class fow_v_us_ab_carbine_nco_scr: fow_v_us_carbine_nco_scr
{	
	displayName  = "[US] AB Kit Carbine NCO (SCR)"; /// how would the stuff be displayed in inventory and on ground
	model   = "\fow\fow_characters\us\lodu_us_vest_carbine_nco_para.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa","\fow\fow_characters\us\data\lodu_us_bags01_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_carbine_nco_para.p3d"; /// what model does the vest use
		containerClass = "Supply80";
	};
};
class fow_v_us_garand: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Garand"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_garand_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_garand.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_garand.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 44;
	};
};
class fow_v_us_garand_bandoleer: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Garand + bandoleer"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_garand_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_garand_bandoleer.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_garand_bandoleer.p3d"; /// what model does the vest use
		containerClass = "Supply110";
		mass = 69;
	};
};
class fow_v_us_ab_garand: fow_v_us_garand
{	
	displayName  = "[US] AB Kit Garand"; /// how would the stuff be displayed in inventory and on ground
	model   = "\fow\fow_characters\us\lodu_us_vest_garand_para.p3d"; /// what model does the vest use
	//hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	//belt, shavel, susp, knife //old
	//hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","",""};
	hiddenSelections[] = {"camo","camo1"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1"};
		//hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_garand_para.p3d"; /// what model does the vest use
		containerClass = "Supply70";
		mass = 44;
	};
};
class fow_v_us_ab_garand_bandoleer: fow_v_us_garand
{	
	displayName  = "[US] AB Kit Garand + bandoleer"; /// how would the stuff be displayed in inventory and on ground
	model   = "\fow\fow_characters\us\lodu_us_vest_garand_para_bandoleer.p3d"; /// what model does the vest use
	//hiddenSelections[] = {"camo","camo1","camo2","camo3"};
	//belt, shavel, susp, knife //old
	//hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","",""};
	hiddenSelections[] = {"camo","camo1","camo3"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_us_bags01_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo3"};
		//hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_garand_para_bandoleer.p3d"; /// what model does the vest use
		containerClass = "Supply110";
		mass = 69;
	};
};
/*class fow_v_us_ab_garand_knife: fow_v_us_ab_garand
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] AB Kit Garand (knife)"; /// how would the stuff be displayed in inventory and on ground
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa"};
};
class fow_v_us_ab_garand_susp: fow_v_us_ab_garand
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] AB Kit Garand (suspenders)"; /// how would the stuff be displayed in inventory and on ground
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa",""};
};
class fow_v_us_ab_garand_susp_knife: fow_v_us_ab_garand
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] AB Kit Garand (suspenders-knife)"; /// how would the stuff be displayed in inventory and on ground
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa"};
};*/
class fow_v_us_grenade: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Garand + Frags"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_grenade_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_granate.p3d"; /// what model does the vest use

	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_granate.p3d"; /// what model does the vest use
		containerClass = "Supply100";
		mass = 65;
	};
};
class fow_v_us_ab_grenade: fow_v_us_grenade
{	
	displayName  = "[US] AB Kit Garand + Frags"; /// how would the stuff be displayed in inventory and on ground
	model   = "\fow\fow_characters\us\lodu_us_vest_granate_para.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1","camo3"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_us_bags01_co.paa"};

	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo3"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_granate_para.p3d"; /// what model does the vest use
		containerClass = "Supply100";
		mass = 65;
	};
};
class fow_v_us_medic: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Medic"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_medic_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_medic.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_medic.p3d"; /// what model does the vest use
		containerClass = "Supply50";
		mass = 32;
	};
};
class fow_v_us_thompson: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Thompson"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_thompson_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_thompson.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_thompson.p3d"; /// what model does the vest use
		containerClass = "Supply50";
		mass = 32;
	};
};
class fow_v_us_ab_thompson: fow_v_us_thompson
{	
	displayName  = "[US] AB Kit Thompson"; /// how would the stuff be displayed in inventory and on ground
	model   = "\fow\fow_characters\us\lodu_us_vest_thompson_para.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1","camo2"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_thompson_para.p3d"; /// what model does the vest use
		containerClass = "Supply50";
		mass = 32;
	};
};
class fow_v_us_thompson_nco: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Thompson NCO"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_thompson_nco_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_thompson_nco_no_scr.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_thompson_nco_no_scr.p3d"; /// what model does the vest use
		containerClass = "Supply50";
		mass = 35;
	};
};
class fow_v_us_thompson_nco_scr: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Kit Thompson NCO (SCR)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_v_us_thompson_nco_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\us\lodu_us_vest_thompson_nco.p3d"; /// what model does the vest use
	
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_thompson_nco.p3d"; /// what model does the vest use
		containerClass = "Supply50";
		mass = 55;
	};
};
class fow_v_us_ab_thompson_nco: fow_v_us_thompson_nco
{	
	displayName  = "[US] AB Kit Thompson NCO"; /// how would the stuff be displayed in inventory and on ground
	model   = "\fow\fow_characters\us\lodu_us_vest_thompson_nco_para_no_scr.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1","camo2"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_thompson_nco_para_no_scr.p3d"; /// what model does the vest use
		containerClass = "Supply50";
		mass = 35;
	};
};
class fow_v_us_ab_thompson_nco_scr: fow_v_us_thompson_nco
{	
	displayName  = "[US] AB Kit Thompson NCO"; /// how would the stuff be displayed in inventory and on ground
	model   = "\fow\fow_characters\us\lodu_us_vest_thompson_nco_para.p3d"; /// what model does the vest use
	hiddenSelections[] = {"camo","camo1","camo2"};
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa"};
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo","camo1","camo2"};
		uniformModel   = "\fow\fow_characters\us\lodu_us_vest_thompson_nco_para.p3d"; /// what model does the vest use
		containerClass = "Supply50";
		mass = 55;
	};
};