
class CfgPatches
{
	class fow_characters_c
	{
		units[] = {
			"fow_s_uk_officer","fow_s_uk_section_commander","fow_s_uk_teamleader","fow_s_uk_rifleman","fow_s_uk_bren_gunner","fow_s_uk_bren_asst","fow_s_uk_medic",
			"fow_s_uk_para_officer","fow_s_uk_para_section_commander","fow_s_uk_para_teamleader","fow_s_uk_para_rifleman","fow_s_uk_para_bren_gunner","fow_s_uk_para_bren_asst","fow_s_uk_para_medic",
			"fow_s_uk_cdo_officer","fow_s_uk_cdo_section_commander","fow_s_uk_cdo_teamleader","fow_s_uk_cdo_rifleman","fow_s_uk_cdo_bren_gunner","fow_s_uk_cdo_bren_asst","fow_s_uk_cdo_medic",
			"fow_s_uk_seac_officer","fow_s_uk_seac_section_commander","fow_s_uk_seac_teamleader","fow_s_uk_seac_rifleman","fow_s_uk_seac_bren_gunner","fow_s_uk_seac_bren_asst","fow_s_uk_seac_medic","fow_s_uk_seac_at","fow_s_uk_seac_at_asst",
			"fow_s_uk_seac_officer_l","fow_s_uk_seac_section_commander_l","fow_s_uk_seac_teamleader_l","fow_s_uk_seac_rifleman_l","fow_s_uk_seac_bren_gunner_l","fow_s_uk_seac_bren_asst_l","fow_s_uk_seac_medic_l","fow_s_uk_seac_at_l","fow_s_uk_seac_at_asst_l",			
			"fow_s_usmc_officer","fow_s_usmc_nco","fow_s_usmc_teamleader","fow_s_usmc_rifleman","fow_s_usmc_bar_gunner","fow_s_usmc_bar_asst","fow_s_usmc_at","fow_s_usmc_at_asst","fow_s_usmc_medic","fow_s_usmc_coxswain","fow_s_usmc_crewman",
			"fow_s_us_officer","fow_s_us_nco","fow_s_us_teamleader","fow_s_us_teamleader_asst","fow_s_us_rifleman","fow_s_us_rifleman_gl","fow_s_us_rifleman_scout","fow_s_us_bar_gunner","fow_s_us_bar_asst","fow_s_us_at","fow_s_us_at_asst","fow_s_us_medic","fow_s_us_crewman",
			"fow_s_ija_officer","fow_s_ija_nco","fow_s_ija_rifleman","fow_s_ija_rifleman_at","fow_s_ija_type99_gunner","fow_s_ija_type99_asst","fow_s_ija_medic",
			"fow_s_ija_f_officer","fow_s_ija_f_nco","fow_s_ija_f_rifleman","fow_s_ija_f_rifleman_at","fow_s_ija_f_type99_gunner","fow_s_ija_f_type99_asst","fow_s_ija_f_medic",
			"fow_s_ija_snlf_nco","fow_s_ija_snlf_rifleman","fow_s_ija_snlf_rifleman_at","fow_s_ija_snlf_type99_gunner","fow_s_ija_snlf_type99_asst","fow_s_ija_snlf_medic",
			"fow_s_ger_heer_nco_mp40","fow_s_ger_heer_tl_mp40","fow_s_ger_heer_rifleman","fow_s_ger_heer_rifleman_mp40","fow_s_ger_heer_rifleman_mp40_pzf","fow_s_ger_heer_mg42_gunner","fow_s_ger_heer_mg42_asst"
		};
		weapons[] = {};
		RequiredAddons[] = {"fow_main","fow_characters"};
		requiredVersion = 0.1;
	};
};

#include "basicdefines_A3.hpp"

class DefaultEventhandlers;

class UniformSlotInfo;

class CfgEditorSubcategories
{
	class fow_s_crew
	{
		displayName = "Crew";
	};
	class fow_s_ger_inf
	{
		displayName = "Infanterie";
	};
	class fow_s_ger_pzlehr
	{
		displayName = "Panzer Lehr Division";
	};	
	class fow_s_ger_fall
	{
		displayName = "Fallschirmjäger";
	};
	class fow_s_ger_fall_camo
	{
		displayName = "Fallschirmjäger (Splintertarn)";
	};
	class fow_s_ger_fall_camo2
	{
		displayName = "Fallschirmjäger (Sumpftarn)";
	};
	class fow_s_ger_fall_italy
	{
		displayName = "Fallschirmjäger (Italy)";
	};
	class fow_s_ger_ss
	{
		displayName = "Infanterie (Pea Dot)";
	};
	class fow_s_uk_reg_essex
	{
		displayName = "Essex Regiment";
	};
	class fow_s_uk_pib
	{
		displayName = "Prinses Irene Brigade";
	};
	class fow_s_uk_bp
	{
		displayName = "1st Belgian Infantry - Brigade Piron";
	};	
	class fow_s_uk_seac
	{
		displayName = "South East Asia Command";
	};
	class fow_s_uk_can_01
	{
		displayName = "1st Canadian Division - Royal Winnipeg Rifles";
	};
	class fow_s_uk_can_02
	{
		displayName = "3rd Canadian Division - British Columbia Regiment";
	};
	class fow_s_uk_para
	{
		displayName = "Paratroopers";
	};
	class fow_s_uk_para_pol
	{
		displayName = "Paratroopers - Poland";
	};
	class fow_s_uk_commando
	{
		displayName = "Commandos";
	};
	class fow_s_uk_commando_kieffer
	{
		displayName = "Commandos - Kieffer";
	};
	class fow_s_uk_commando_nor
	{
		displayName = "Commandos - Norway";
	};
	class fow_s_uk_commando_pol
	{
		displayName = "Commandos - Poland";
	};
	class fow_s_uk_commando_nl
	{
		displayName = "Commandos - Netherlands";
	};
	class fow_s_us_mm_inf
	{
		displayName = "Merril's Marauders";
	};
	class fow_s_us_p_inf
	{
		displayName = "Infantry";
	};
	class fow_s_us_m37_inf
	{
		displayName = "Infantry (M37)";
	};
	class fow_s_us_m41_inf
	{
		displayName = "Infantry (M41)";
	};
	class fow_s_us_ab_inf
	{
		displayName = "Airborne";
	};
	class fow_s_us_ab_82_inf
	{
		displayName = "Airborne (82nd)";
	};
	class fow_s_us_ab_101_inf
	{
		displayName = "Airborne (101st)";
	};
	class fow_s_usmc_inf
	{
		displayName = "Infantry";
	};
	class fow_s_usmc_inf_camo01
	{
		displayName = "Infantry (camo 01)";
	};
	class fow_s_usmc_inf_camo02
	{
		displayName = "Infantry (camo 02)";
	};
};
/*
class CfgUnitInsignia
{
	#include "CfgUnitInsignia_ger.hpp"
};*/

class CfgVehicles
{
	class SoldierWB;
	class B_Soldier_base_F: SoldierWB {
		class EventHandlers;
	};
	class B_Soldier_F: B_Soldier_base_F {};
	
	class SoldierEB;
	class O_Soldier_base_F: SoldierEB {
		class EventHandlers;
	};
	class O_Soldier_F: O_Soldier_base_F {};
	
	class SoldierGB;
	class I_Soldier_base_F: SoldierGB {
		class EventHandlers;
	};
	class I_soldier_F: I_Soldier_base_F {};
	
	class fow_s_ger_base : B_Soldier_F 
	{
		scope = 0;
		faction = "fow_heer";
		vehicleClass = "Men";
		identityTypes[] = {"fow_mute","Head_Euro"};
		genericNames = "fow_ger_Men";
		canCarryBackPack = 1;
		
		model = "\fow\fow_characters\ger\lodu_heer_soldier01_corporal.p3d";
		uniformClass = "fow_u_ger_m43_01_corporal";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};	
		
		class Wounds {
			tex[] = {};
			mat[] = {
				"fow\fow_characters\ger\data\lodu_heer_soldier01.rvmat",
				"fow\fow_characters\ger\data\lodu_heer_soldier01_w1.rvmat", 
				"fow\fow_characters\ger\data\lodu_heer_soldier01_w2.rvmat", 
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\m_white_01.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};
	};		

	class fow_s_it_base : B_Soldier_F 
	{
		scope = 0;
		faction = "fow_it";
		vehicleClass = "Men";
		identityTypes[] = {"NoGlasses","fow_mute","Head_Euro","G_NATO_default"};
		//genericNames = "fow_ger_Men";
		canCarryBackPack = 1;
		
		//model = "\fow\fow_characters\ger\lodu_heer_soldier01_corporal.p3d";
		//uniformClass = "fow_u_ger_m43_01_corporal";
		//hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_heer_soldier01_co.paa"};	
		
		/*class Wounds {
			tex[] = {};
			mat[] = {
				"fow\fow_characters\ger\data\lodu_heer_soldier01.rvmat",
				"fow\fow_characters\ger\data\lodu_heer_soldier01_w1.rvmat", 
				"fow\fow_characters\ger\data\lodu_heer_soldier01_w2.rvmat", 
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\m_white_01.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};*/
	};	
	
	class fow_s_uk_base : I_soldier_F 
	{
		scope = 0;
		faction = "fow_uk";
		vehicleClass = "Men";
		identityTypes[] = {"LanguageENGB_F","Head_Euro"};
		genericNames = "NATOMen";
		canCarryBackPack = 1;
		model = "\fow\fow_characters\uk\lodu_brit_soldier01_private.p3d";
		uniformClass = "fow_u_uk_bd40_01_private";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\uk\data\lodu_brit02_co.paa"};
		
		class Wounds {
			tex[] = {};
			mat[] = {
				"fow\fow_characters\uk\data\lodu_brit01.rvmat",
				"fow\fow_characters\uk\data\lodu_brit01_w1.rvmat", 
				"fow\fow_characters\uk\data\lodu_brit01_w2.rvmat", 
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\m_white_01.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};
	};

	class fow_s_us_base : I_soldier_F 
	{
		scope = 0;
		faction = "fow_usa";
		vehicleClass = "Men";
		identityTypes[] = {"LanguageENG_F","Head_Euro"};
		genericNames = "NATOMen";
		canCarryBackPack = 1;
		
		editorSubcategory = "fow_s_us_m41_inf";
		
		items[] = {"fow_i_fak_carlisle_M43"};
		respawnitems[] = {"fow_i_fak_carlisle_M43"};
		
		class Wounds {
			tex[] = {};
			mat[] = {
				"fow\fow_characters\us\data\lodu_us_soldier01.rvmat",
				"fow\fow_characters\us\data\lodu_us_soldier01_w1.rvmat", 
				"fow\fow_characters\us\data\lodu_us_soldier01_w2.rvmat", 
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\m_white_01.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};
	};
	class fow_s_aus_base : I_soldier_F 
	{
		scope = 0;
		faction = "fow_aus";
		vehicleClass = "Men";
		identityTypes[] = {"LanguageENG_F","Head_Euro"};
		genericNames = "NATOMen";
		canCarryBackPack = 1;
		editorSubcategory = "fow_s_usmc_inf";

		items[] = {"fow_i_fak_carlisle_M43"};
		respawnitems[] = {"fow_i_fak_carlisle_M43"};
		
		class Wounds {
			tex[] = {};
			mat[] = {
				"fow\fow_characters\us\data\lodu_us_soldier01.rvmat",
				"fow\fow_characters\us\data\lodu_us_soldier01_w1.rvmat", 
				"fow\fow_characters\us\data\lodu_us_soldier01_w2.rvmat", 
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\m_white_01.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};
	};
	class fow_s_hi_base : I_soldier_F 
	{
		scope = 0;
		faction = "fow_hi";
		vehicleClass = "Men";
		identityTypes[] = {"LanguageFRE_F","Head_Tanoan"};
		genericNames = "TanoanMen";
		canCarryBackPack = 1;
		editorSubcategory = "fow_s_usmc_inf";

		items[] = {"fow_i_fak_carlisle_M43"};
		respawnitems[] = {"fow_i_fak_carlisle_M43"};
		
		class Wounds {
			tex[] = {};
			mat[] = {
				"fow\fow_characters\us\data\lodu_us_soldier01.rvmat",
				"fow\fow_characters\us\data\lodu_us_soldier01_w1.rvmat", 
				"fow\fow_characters\us\data\lodu_us_soldier01_w2.rvmat", 
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\m_white_01.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};
	};

	// In case we decide to add one of the segregated units
	class fow_s_us_bk_base : I_soldier_F 
	{
		scope = 0;
		faction = "fow_usa";
		vehicleClass = "Men";
		identityTypes[] = {"LanguageENG_F","Head_African"};
		genericNames = "NATOMen";
		canCarryBackPack = 1;
		
		class Wounds {
			tex[] = {};
			mat[] = {
				"fow\fow_characters\us\data\lodu_us_soldier01.rvmat",
				"fow\fow_characters\us\data\lodu_us_soldier01_w1.rvmat", 
				"fow\fow_characters\us\data\lodu_us_soldier01_w2.rvmat", 
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\m_white_01.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};
	};


	class fow_s_usmc_base : I_soldier_F 
	{
		scope = 0;
		faction = "fow_usmc";
		vehicleClass = "Men";
		identityTypes[] = {"LanguageENG_F","Head_Euro"};
		genericNames = "NATOMen";
		canCarryBackPack = 1;
		editorSubcategory = "fow_s_usmc_inf";
		
		items[] = {"fow_i_fak_carlisle_M43"};
		respawnitems[] = {"fow_i_fak_carlisle_M43"};	
		
		class Wounds {
			tex[] = {};
			mat[] = {
				"fow\fow_characters\us\data\lodu_us_soldier01.rvmat",
				"fow\fow_characters\us\data\lodu_us_soldier01_w1.rvmat", 
				"fow\fow_characters\us\data\lodu_us_soldier01_w2.rvmat", 
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\m_white_01.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};
	};
	
	class fow_s_ija_base : B_soldier_F 
	{
		scope = 0;
		faction = "fow_ija";
		vehicleClass = "Men";
		genericNames = "fow_jap_Men";
		identityTypes[] = {"fow_mute","Head_Asian"};
		canCarryBackPack = 1;
		
		class Wounds {
			tex[] = {};
			mat[] = {
				"fow\fow_characters\us\data\lodu_us_soldier01.rvmat",
				"fow\fow_characters\us\data\lodu_us_soldier01_w1.rvmat", 
				"fow\fow_characters\us\data\lodu_us_soldier01_w2.rvmat", 
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat", "a3\characters_f\heads\data\m_white_01.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat", "a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};
	};	
	
	#include "cfgVehicles_aus.hpp"
	#include "cfgVehicles_ger.hpp"
	#include "cfgVehicles_ija.hpp"
	#include "cfgVehicles_hi.hpp"
	//#include "cfgVehicles_it.hpp"
	#include "cfgVehicles_us.hpp"
	#include "cfgVehicles_usmc.hpp"
	#include "cfgVehicles_uk.hpp"
	
	class Bag_Base;
	#include "cfgBackpacks_ija.hpp"
	//#include "cfgBackpacks_it.hpp"
	#include "cfgBackpacks_ger.hpp"
	#include "cfgBackpacks_us.hpp"
	#include "cfgBackpacks_usmc.hpp"
	#include "cfgBackpacks_uk.hpp"
	
	
	
	//Units
	#include "cfgUnits_aus.hpp"
	#include "cfgUnits_ger.hpp"
	#include "cfgUnits_ija.hpp"
	#include "cfgUnits_hi.hpp"
	#include "cfgUnits_us.hpp"
	#include "cfgUnits_usmc.hpp"
	#include "cfgUnits_uk.hpp"
};

class cfgWeapons
{	
	class InventoryItem_Base_F;
	class ItemCore;
	class HeadgearItem: InventoryItem_Base_F
	{
		author = "FOW Team";
		//allowedSlots[] = {901,605};
		//type = 605;
	};
	class fow_h_base: ItemCore
	{
		scope = 1; /// scope needs to be 2 to have a visible class

		picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
		model   = "\fow\fow_characters\usmc\lodu_usmc_headgear_cask01.p3d"; /// what model does the cap use
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
		class ItemInfo: HeadgearItem
		{
			mass = 40; /// combined weight and volume of the cap, this equals to single magazine
			//allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
			modelSides[] = {6}; /// available for all sides
			hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor			= 4;
					passThrough		= 0.8;
				};
			};
		};
	};	

	#include "cfgHeadgear_ger.hpp"
	#include "cfgHeadgear_ija.hpp"
	#include "cfgHeadgear_hi.hpp"
	//#include "cfgHeadgear_it.hpp"
	#include "cfgHeadgear_us.hpp"
	#include "cfgHeadgear_usmc.hpp"
	#include "cfgHeadgear_uk.hpp"

	class Uniform_Base;
	
	class U_BasicBody: Uniform_Base
	{
		class ItemInfo;
	};	
	class fow_u_base : U_BasicBody {
		allowedSlots[] = {BACKPACK_SLOT};
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			containerClass = "Supply20"; /// what fake vehicle is used to describe size of uniform container, there is quite a lot SupplyXX classes ready
			mass = 30; /// combined weight and volume
		};		
	};
	#include "cfgUniforms_aus.hpp"
	#include "cfgUniforms_ger.hpp"
	#include "cfgUniforms_ija.hpp"
	#include "cfgUniforms_hi.hpp"
	//#include "cfgUniforms_it.hpp"
	#include "cfgUniforms_us.hpp"
	#include "cfgUniforms_usmc.hpp"
	#include "cfgUniforms_uk.hpp"

	class VestItem: InventoryItem_Base_F
	{
		type = VEST_SLOT;			/// vests fit into vest slot
		hiddenSelections[] = {};	/// no changeable selections by default
		armor = 5*0;				/// what protection does the vest provide
		passThrough = 1;			/// coef of damage passed to total damage
		hitpointName = "HitBody";	/// name of hitpoint shielded by the vest
	};

	class Vest_Camo_Base: ItemCore /// base class for vests with changeable textures
	{
		scope = 0;	/// base classes should not be visible in editor
		allowedSlots[] = {BACKPACK_SLOT}; /// you should be able to put a vest into backpack
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures

		class ItemInfo: VestItem
		{
			//hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
			LOAD(0,0) /// macro from basicdefines_A3.hpp
		};
	};

	class fow_v_base: Vest_Camo_Base
	{	
		scope = 0; /// scope needs to be 2 to have a visible class
		class ItemInfo: ItemInfo
		{
			mass = 20;
			containerClass = "Supply20";
			//overlaySelectionsInfo[] = {"ghillie_hide"}; /// name of selections to be hidden while wearing certain uniforms
			
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
					armor		= 0; // addition to armor of referenced hitpoint
					passThrough	= 1; // multiplier of base passThrough defined in referenced hitpoint
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor		= 0;
					passThrough	= 1;
				};
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor		= 0; 
					passThrough	= 1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor		= 0;
					passThrough	= 1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor		= 0;
					passThrough	= 1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					armor		= 0;
					passThrough	= 1;
				};
			};
		};
	};
	
	#include "cfgVests_ger.hpp"
	#include "cfgVests_ija.hpp"
	//#include "cfgVests_it.hpp"
	#include "cfgVests_us.hpp"
	#include "cfgVests_usmc.hpp"
	#include "cfgVests_uk.hpp"
};
class CfgGroups
{
	class West
	{
		side = 1;
		class fow_ija
		{
			name = "[JP] Imperial Army";
			#include "cfgGroups_ija_inf.hpp"
		};
		class fow_wehrmacht
		{
			name = "[DE] Wehrmacht";
			//#include "cfgGroups_ger_inf.hpp"
		};
		class fow_heer
		{
			name = "[DE] Heer";
			#include "cfgGroups_ger_inf.hpp"
		};
		class fow_luftwaffe
		{
			name = "[DE] Luftwaffe";
			//#include "cfgGroups_ger_inf.hpp"
		};
		class fow_waffenss
		{
			name = "[DE] Waffen-SS";
			//#include "cfgGroups_ger_inf.hpp"
		};
	};
	class East
	{

	};
	class Indep
	{
		name = "$STR_A3_CfgGroups_Indep0";
		side = 2;
		class fow_usmc {
			name = "[US] Marines";
			#include "cfgGroups_usmc_inf.hpp"
		};
		class fow_usa {
			name = "[US] Army (Europe)";
			#include "cfgGroups_us_inf.hpp"
		};
		class fow_usa_p {
			name = "[US] Army (Pacific)";
			#include "cfgGroups_us_p_inf.hpp"
		};
		class fow_uk {
			name = "[UK] Army";
			#include "cfgGroups_uk_inf.hpp"
		};
		class fow_aus {
			name = "[AUS] Army";
			#include "cfgGroups_aus_inf.hpp"
		};
	};
};

class CfgWorlds
{
	class GenericNames
	{
		#include "names_jap.hpp"
		#include "names_ger.hpp"
	};
};


class RadioProtocolBase {
    class Words;
};

class fow_mute: RadioProtocolBase {
    class CuratorWaypointPlfowd;
    class CuratorWaypointPlfowdAttack;
    class CuratorObjectPlfowd;
    class curatorObjectDestroyed;
    class curatorModuleCAS;
    class SentFireNoTarget_1;
    class SentSupportRequestRGCASBombing;
    class SentNoTargetDefault;
    class SentEngageNoTargetDefault;
    class SentFireNoTargetDefault;
    class SentAttackNoTargetDefault;
    class SentEnemyDetectedMedium;
    class SentEnemyDetectedLong;
    class SentEnemyDetectedDangerClose;
    class SentEnemyDetectedClose;
    class SentEnemyDetectedVeryLong;
    class SentIsLeaderDefault;
    class SentCommandCompletedDefault;
    class SentFireReadyDefault;
    class SentCommandFailedDefault;
    class SentDestinationUnreacheableDefault;
    class SentObjectDestroyedDefault;
    class SentObjectDestroyedUnknownDefault;
    class SentClearDefault;
    class SentRepeatCommandDefault;
    class SentWhereAreYouDefault;
    class SentReportStatusDefault;
    class SentNotifyAttackDefault;
    class SentNotifyAttackSubgroupDefault;
    class SentConfirmMoveDefault;
    class SentConfirmAttackDefault;
    class SentConfirmOtherDefault;
    class SentUnitKilledDefault;
    class SentHealthCriticalDefault;
    class SentHealthNormalDefault;
    class SentReturnToFormationDefault;
    class SentLooseFormationDefault;
    class SentCmdFollowMeDefault;
    class SelectCmdMoveSentenceClose;
    class SelectCmdMoveSentenceVeryClose;
    class SelectCmdMoveSentenceFar;
    class SentEnemyDetectedMediumStealth;
    class SentSupportConfirmDefault;
    class SelectCmdMoveSentenceClose_1;
    class SelectCmdMoveSentenceVeryClose_1;
    class SelectCmdMoveSentenceFar_1;
    class SentSupportRequestRGCASHelicopter;
    class SentSupportRequestRGSupplyDrop;
    class SentSupportRequestRGUAV;
    class SentSupportRequestRGArty;
    class SentSupportRequestRGTransport;
    class SentRequestAcknowledgedSGCASBombing;
    class SentRequestAcknowledgedSGCASHelicopter;
    class SentRequestAcknowledgedSGSupplyDrop;
    class SentRequestAcknowledgedSGUAV;
    class SentRequestAcknowledgedSGArty;
    class SentRequestAcknowledgedTransport;
    class SentUnitDestroyedHQCASBombing;
    class SentUnitDestroyedHQCASHelicopter;
    class SentUnitDestroyedHQSupplyDrop;
    class SentUnitDestroyedHQUAV;
    class SentUnitDestroyedHQArty;
    class SentUnitDestroyedHQTransport;
    class SentRequestAccomplishedSGCASBombing;
    class SentRequestAccomplishedSGCASHelicopter;
    class SentRequestAccomplishedSGSupplyDrop;
    class SentRequestAccomplishedSGUAV;
    class SentRequestAccomplishedSGArty;
    class SentRequestAccomplishedSGTransport;
    class SentSupportAddedDuringMission;
    class SentArtySGSupportRoundsComplete;
    class SentTransportSGWelcomeAboard;
    class SentTransportSGLZCoordinatesSelected;
    class SelectCmdMoveSentenceLocation;
    class SelectCmdMoveSentenceMedium;
    class SentEnemyDetectedLongStealth;
    class SentEnemyDetectedDangerCloseStealth;
    class SentEnemyDetectedCloseStealth;
    class SentEnemyDetectedVeryLongStealth;
    class SentEngageDefault;
    class SelectCmdMoveSentenceLocation_1;
    class SelectCmdMoveSentenceMedium_1;
    class SentBehaviourSafeDefault;
    class SentBehaviourAwareDefault;
    class SentBehaviourCombatDefault;
    class SentOpenFireDefault;
    class SentCeaseFireInsideGroupDefault;
    class SentCeaseFireDefault;
    class SentEngageStealth;
    class SentFireNoTargetStealth;
    class SentAttackNoTargetStealth;
    class SentNoTargetStealth;
    class SentEngageNoTargetStealth;
    class SelectCmdMoveSentenceCloseStealth;
    class SelectCmdMoveSentenceVeryCloseStealth;
    class SelectCmdMoveSentenceFarStealth;
    class SelectCmdMoveSentenceLocationStealth;
    class SelectCmdMoveSentenceMediumStealth;
    class SentReturnToFormationStealth;
    class SentLooseFormationStealth;
    class SentCmdFollowMeStealth;
    class SentOpenFireStealth;
    class SentCeaseFireInsideGroupStealth;
    class SentBehaviourSafeStealth;
    class SentBehaviourAwareStealth;
    class SentBehaviourCombatStealth;
    class SentSupportConfirmStealth;
    class SentCommandFailedStealth;
    class SentObjectDestroyedStealth;
    class SentObjectDestroyedUnknownStealth;
    class SentCommandCompletedStealth;
    class SentFireReadyStealth;
    class SentIsLeaderStealth;
    class SentDestinationUnreacheableStealth;
    class SentClearStealth;
    class SentRepeatCommandStealth;
    class SentWhereAreYouStealth;
    class SentReportStatusStealth;
    class SentNotifyAttackStealth;
    class SentNotifyAttackSubgroupStealth;
    class SentConfirmMoveStealth;
    class SentConfirmAttackStealth;
    class SentConfirmOtherStealth;
    class SentUnitKilledStealth;
    class SentHealthCriticalStealth;
    class SentHealthNormalStealth;
    class SentGenReinforcementsConfirmed;
    class SentGenReinforcementsRejected;
    class SentGenReinforcementsArrived;
    class SentGenLeavingAO;
    class SentGenTime;
    class SentGenLosing;
    class SentGenLost;
    class SentGenComplete;
    class SentGenCmdSeize;
    class SentGenCmdDefend;
    class SentGenCmdRTB;
    class SentGenCmdTargetNeutralize;
    class SentGenCmdTargetProtect;
    class SentGenCmdTargetEscort;
    class SentGenCmdTargetFind;
    class SentGenIncoming;
    class SentGenBaseUnlockRespawn;
    class SentGenBaseUnlockVehicle;
    class SentGenBaseSideFriendlyWEST;
    class SentFXBreathingSlow;
    class SentFXBreathingFast;
    class SentFXHit;
    class SentFXDeath;
    class SentFXHurt;
    class SentFXEffort;
    class SentFXDrowning;
    class SentCeaseFireDefault_1;
    class SentGenBaseSideFriendlyEAST;
    class SentGenBaseSideFriendlyGUER;
    class SentGenBaseSideEnemyWEST;
    class SentGenBaseSideEnemyEAST;
    class SentGenBaseSideEnemyGUER;
    class SentTargetDefault;
    class SentTargetStealth;
    class Dummy;
    class Words: Words {
        grid_zero[] = {};
        grid_one[] = {};
        grid_two[] = {};
        grid_three[] = {};
        grid_four[] = {};
        grid_five[] = {};
        grid_six[] = {};
        grid_seven[] = {};
        grid_eight[] = {};
        grid_nine[] = {};
        grid_zero_2[] = {};
        grid_one_2[] = {};
        grid_two_2[] = {};
        grid_three_2[] = {};
        grid_four_2[] = {};
        grid_five_2[] = {};
        grid_six_2[] = {};
        grid_seven_2[] = {};
        grid_eight_2[] = {};
        grid_nine_2[] = {};
        grid_zero_3[] = {};
        grid_one_3[] = {};
        grid_two_3[] = {};
        grid_three_3[] = {};
        grid_four_3[] = {};
        grid_five_3[] = {};
        grid_six_3[] = {};
        grid_seven_3[] = {};
        grid_eight_3[] = {};
        grid_nine_3[] = {};
        Ready[] = {};
        Waiting[] = {};
        StandingBy[] = {};
        RallyUp[] = {};
        UnderFireE[] = {};
    };
};
class CfgVoice {
	//voices[] = {"Male01CHI","Male02CHI","Male03CHI","Male01FRE","Male02FRE","Male03FRE","Male01ENGFRE","Male02ENGFRE","Male01ENG","Male02ENG","Male03ENG","Male04ENG","Male05ENG","Male06ENG","Male07ENG","Male08ENG","Male09ENG","Male10ENG","Male11ENG","Male12ENG","Male01ENGB","Male02ENGB","Male03ENGB","Male04ENGB","Male05ENGB","Male01PER","Male02PER","Male03PER","Male01GRE","Male02GRE","Male03GRE","Male04GRE","Male05GRE","Male06GRE","Male01ENGVR","Male01GREVR","Male01PERVR","Male01Pol","Male02Pol","Male03Pol","Male01Rus","Male02Rus","Male03Rus"};
	voices[] = {"fow_mute","Male01CHI","Male02CHI","Male03CHI","Male01FRE","Male02FRE","Male03FRE","Male01ENGFRE","Male02ENGFRE","Male01ENG","Male02ENG","Male03ENG","Male04ENG","Male05ENG","Male06ENG","Male07ENG","Male08ENG","Male09ENG","Male10ENG","Male11ENG","Male12ENG","Male01ENGB","Male02ENGB","Male03ENGB","Male04ENGB","Male05ENGB","Male01PER","Male02PER","Male03PER","Male01GRE","Male02GRE","Male03GRE","Male04GRE","Male05GRE","Male06GRE","Male01ENGVR","Male01GREVR","Male01PERVR","Male01Pol","Male02Pol","Male03Pol","Male01Rus","Male02Rus","Male03Rus"};
    class fow_mute {
        author = "FOW Team";
        protocol = "fow_mute";
        variants[] = {1};
        directories[] = {"",""};
        identityTypes[] = {"Default","fow_mute"};
        scope = 2;
        voiceType = "";
        icon = "\a3\Ui_f\data\Map\Markers\Flags\nato_ca.paa";
        displayName = "fow_mute";
    };
};

class CfgVoiceTypes {
    class fow_mute {
        name = CSTRING(NoVoice);
        voices[] = {"fow_mute","fow_mute","fow_mute"};
        preview = "fow_mute";
        alternative = "";
    };
};
