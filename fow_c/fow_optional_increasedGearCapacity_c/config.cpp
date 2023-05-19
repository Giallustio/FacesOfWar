
class CfgPatches
{
	class fow_optional_increasedGearCapacity_c
	{
		units[] = {};
		weapons[] = {};
		RequiredAddons[] = {"fow_main","fow_characters_c"};
		requiredVersion = 0.1;
	};
};
class CfgVehicles
{
	class Bag_Base;
	class fow_b_ija_backpack: Bag_Base
	{
		maximumLoad = 60;
		mass = 40;
	};
	class fow_b_ija_ammobox: Bag_Base
	{
		maximumLoad = 300;
		mass = 150;
	};
	class fow_b_ija_ammobox_metal: Bag_Base
	{
		maximumLoad = 300;
		mass = 150;
	};
	class fow_b_ija_ammobox_wood: Bag_Base
	{
		maximumLoad = 300;
		mass = 150;
	};
	class fow_b_heer_aframe: Bag_Base
	{
		maximumLoad = 40;
		mass = 5;
	};
	class fow_b_tornister: Bag_Base
	{
		maximumLoad = 120;
		mass = 40;
	};
	class fow_b_grenadebag: Bag_Base
	{
		maximumLoad = 140;
		mass = 52;
	};
	class fow_b_ammoboxes: Bag_Base
	{
		maximumLoad = 160;
		mass = 65;
	};
	class fow_b_ammoboxes_mg34_42: Bag_Base
	{
		maximumLoad = 100;
		mass = 65;
	};
	class fow_b_heer_ammo_belt: Bag_Base
	{
		maximumLoad = 40;
	};
	class fow_b_torn_radio: Bag_Base
	{
		maximumLoad = 60;
		mass = 60;
	};
	class fow_b_us_bandoleer: Bag_Base
	{
		maximumLoad = 100;
		mass = 25;
	};
	class fow_b_us_m1928: Bag_Base
	{
		maximumLoad = 120;
		mass = 40;
	};
	class fow_b_us_m1944: Bag_Base
	{
		maximumLoad = 120;
		mass = 40;
	};
	class fow_b_us_rocket_bag: Bag_Base
	{
		maximumLoad = 140;
		mass = 50;
	};
	class fow_b_us_radio: Bag_Base
	{
		maximumLoad = 80;
		mass = 150;
	};
	class fow_b_us_radio_scr: Bag_Base
	{
		maximumLoad = 80;
		mass = 20;
	};
	class fow_b_usmc_m1928: Bag_Base
	{
		maximumLoad = 120;
		mass = 40;
	};
	class fow_b_usmc_m1928_02: Bag_Base
	{
		maximumLoad = 120;
		mass = 40;
	};
	class fow_b_uk_p37: Bag_Base
	{
		maximumLoad = 120;
		mass = 40;
	};
};
class cfgWeapons
{
	class Vest_Camo_Base;
	class fow_v_base: Vest_Camo_Base
	{
		class ItemInfo;
	};
	class fow_v_heer_p38: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
		};
	};
	class fow_v_heer_tankcrew_p38: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
		};
	};
	class fow_v_heer_g43: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	class fow_v_heer_k98: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_heer_k98_ass: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_heer_k98_bayo: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply60";
		};
	};
	class fow_v_heer_k98_light: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_heer_mg: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply140";
		};
	};
	class fow_v_heer_mp40: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply120";
		};
	};
	class fow_v_heer_mp40_nco: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
		};
	};
	class fow_v_heer_mp44: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply120";
		};
	};
	class fow_v_fall_bandoleer: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply180";
		};
	};
	class fow_v_ija_grenadier: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply140";
		};
	};
	class fow_v_ija_bayonet: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply30";
		};
	};
	class fow_v_ija_medic: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply120";
		};
	};
	class fow_v_ija_mg: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply160";
		};
	};
	class fow_v_ija_nco: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_ija_officer: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
		};
	};
	class fow_v_ija_rifle: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply120";
		};
	};
	class fow_v_ija_mortar: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply140";
		};
	};
	class fow_v_us_45: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply50";
		};
	};
	class fow_v_us_ab_45: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply50";
		};
	};
	class fow_v_us_asst_mg: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply160";
		};
	};
/*	class fow_v_us_ab_asst_mg: fow_v_us_asst_mg
	{
		displayName = "[US] AB Kit asst. MG";
		model = "\fow\fow_characters\us\lodu_us_vest_asst_mg_para.p3d";
		hiddenSelections[] = {"camo","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa","\fow\fow_characters\us\data\lodu_us_bags01_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2","camo3"};
			uniformModel = "\fow\fow_characters\us\lodu_us_vest_asst_mg_para.p3d";
		};
	};*/
	class fow_v_us_bar: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply160";
		};
	};
/*	class fow_v_us_ab_bar: fow_v_us_bar
	{
		displayName = "[US] AB Kit Bar";
		model = "\fow\fow_characters\us\lodu_us_vest_bar_para.p3d";
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_garand_belt_co.paa","\fow\fow_characters\us\data\lodu_us_equip_a_co.paa","\fow\fow_characters\us\data\lodu_pouchs_us_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = {"camo","camo1","camo2"};
			uniformModel = "\fow\fow_characters\us\lodu_us_vest_bar_para.p3d";
		};
	};*/
	class fow_v_us_carbine: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply150";
		};
	};
	class fow_v_us_ab_carbine: fow_v_us_carbine
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_us_carbine_eng: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_us_ab_carbine_eng: fow_v_us_carbine_eng
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_us_carbine_nco: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_us_carbine_nco_scr: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_us_ab_carbine_nco: fow_v_us_carbine_nco
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply140";
		};
	};
	class fow_v_us_ab_carbine_nco_scr: fow_v_us_carbine_nco_scr
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply140";
		};
	};
	class fow_v_us_garand: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_us_garand_bandoleer: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply170";
		};
	};
	class fow_v_us_ab_garand: fow_v_us_garand
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_us_ab_garand_bandoleer: fow_v_us_garand
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply170";
		};
	};
	class fow_v_us_grenade: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply160";
		};
	};
	class fow_v_us_ab_grenade: fow_v_us_grenade
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply160";
		};
	};
	class fow_v_us_medic: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	class fow_v_us_thompson: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	class fow_v_us_ab_thompson: fow_v_us_thompson
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	class fow_v_us_thompson_nco: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	class fow_v_us_thompson_nco_scr: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	class fow_v_us_ab_thompson_nco: fow_v_us_thompson_nco
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	class fow_v_us_ab_thompson_nco_scr: fow_v_us_thompson_nco
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	class fow_v_usmc_45: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply80";
		};
	};
	class fow_v_usmc_bar: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply160";
		};
	};
	class fow_v_usmc_carbine: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_usmc_garand: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_usmc_thompson: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	class fow_v_usmc_thompson_nco: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply110";
		};
	};
	class fow_v_uk_officer: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply100";
		};
	};
/*	class fow_v_uk_officer_green: fow_v_uk_officer
	{
		displayName = "[UK] Pattern 37 Webbing Officer (Green)";
		hiddenSelectionsTextures[] = {"fow\fow_characters\uk\data\lodu_brit_off02_co.paa"};
	};*/
	class fow_v_uk_base: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply120";
		};
	};
/*	class fow_v_uk_base_green: fow_v_uk_base
	{
		scope = 2;
		displayName = "[UK] Pattern 37 Webbing (Green)";
		hiddenSelectionsTextures[] = {"fow\fow_characters\uk\data\brit_equip02_co.paa"};
	};*/
	class fow_v_uk_bren: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply160";
		};
	};
/*	class fow_v_uk_bren_green: fow_v_uk_bren
	{
		scope = 2;
		displayName = "[UK] Pattern 37 Webbing Bren (Green)";
		hiddenSelectionsTextures[] = {"fow\fow_characters\uk\data\brit_equip02_co.paa"};
	};*/
	class fow_v_uk_sten: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply160";
		};
	};
/*	class fow_v_uk_sten_green: fow_v_uk_sten
	{
		scope = 2;
		displayName = "[UK] Pattern 37 Webbing Sten (Green)";
		hiddenSelectionsTextures[] = {"fow\fow_characters\uk\data\brit_equip02_co.paa"};
	};*/
	class fow_v_uk_para_base: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply150";
		};
	};
	class fow_v_uk_para_sten: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply130";
		};
	};
	class fow_v_uk_para_bren: fow_v_base
	{
		class ItemInfo: ItemInfo
		{
			containerClass = "Supply140";
		};
	};
};
