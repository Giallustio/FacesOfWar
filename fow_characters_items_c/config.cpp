class CfgPatches
{
	class fow_characters_items_c
	{
		units[] = {

		};
		weapons[] = {};
		RequiredAddons[] = {"fow_main","fow_characters_items"};
		requiredVersion = 0.1;
	};
};

class cfgWeapons {
	class Binocular;
	class ItemCore;
	class InventoryItem_Base_F;
	class FirstAidKit;
	class NVGoggles;

	class fow_i_dienstglas: Binocular {
		author = "FOW Team";
		scope = 2;
		model = "\fow\fow_characters_items\binos\lodu_ger_bino";
		//modelOptics = "\A3\weapons_f\reticle\optics_binoculars";
		opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
		visionMode[] = {"Normal"};
		displayName = "[GER] Dienstglas 6x30";
		opticsZoomMin = 0.02;
		opticsZoomMax = 0.0625;
		opticsZoomInit = 0.0625;
		minRange = 150;
		midRange = 500;
		maxRange = 2500;
		/*class Library
		{
			libTextDesc = "$STR_LIB_BINOCULAR";
		};*/
		descriptionShort = "Kershaw 6x30 binocular";
		class WeaponSlotsInfo
		{
			mass = 10;
		};
	};	
	class fow_i_fak_carlisle_M43: FirstAidKit {
		author = "FOW team";
		DLC = "FOW";
		scope = 1;
		scopeCurator = 1;
		displayName = "[US] Carlisle Model 1943";
		descriptionShort = "<br/>First Aid Packet, U.S.GOV'T Carlisle Model.<br/>U.S. Armed Services Standard Issue First Aid Packet.";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\medical\data\HLS_US_Carlisle_M43_Green_co.paa"};
		picture = "\fow\fow_characters_items\medical\data\ui\HLS_US_Carlisle_M43_Green_Item_ca.paa";
		model = "\fow\fow_characters_items\medical\HLS_US_Carlisle_M43.p3d";
		mass = 3;
		class ItemInfo {
			mass = 3;
			type = 401;
			allowedSlots[] = {701,801,901};
		};
	};
	class fow_i_fak_carlisle_M43_red: FirstAidKit {
		author = "FOW team";
		DLC = "FOW";
		scope = 1;
		scopeCurator = 1;
		displayName = "[US] Carlisle Model 1943";
		descriptionShort = "<br/>First Aid Packet, U.S.GOV'T Carlisle Model.<br/>U.S. Armed Services Standard Issue First Aid Packet.";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\medical\data\HLS_US_Carlisle_M43_Red_co.paa"};
		picture = "\fow\fow_characters_items\medical\data\ui\HLS_US_Carlisle_M43_Red_Item_ca.paa";
		model = "\fow\fow_characters_items\medical\HLS_US_Carlisle_M43.p3d";
		mass = 3;
		class ItemInfo {
			mass = 3;
			type = 401;
			allowedSlots[] = {701,801,901};
		};
	};
	class fow_i_fak_us: FirstAidKit {
		author = "FOW team";
		DLC = "FOW";
		scope = 2;
		scopeCurator = 2;
		displayName = "[US] Carlisle Model 1943";
		descriptionShort = "<br/>First Aid Packet, U.S.GOV'T Carlisle Model.<br/>U.S. Armed Services Standard Issue First Aid Packet.";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\medical\data\HLS_US_Carlisle_M43_Green_co.paa"};
		picture = "\fow\fow_characters_items\medical\data\ui\HLS_US_Carlisle_M43_Green_Item_ca.paa";
		model = "\fow\fow_characters_items\medical\HLS_US_Carlisle_M43.p3d";
		mass = 3;
		class ItemInfo {
			mass = 3;
			type = 401;
			allowedSlots[] = {701,801,901};
		};
	};
	class fow_i_fak_us_red: FirstAidKit {
		author = "FOW team";
		DLC = "FOW";
		scope = 2;
		scopeCurator = 2;
		displayName = "[US] Carlisle Model 1943";
		descriptionShort = "<br/>First Aid Packet, U.S.GOV'T Carlisle Model.<br/>U.S. Armed Services Standard Issue First Aid Packet.";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\medical\data\HLS_US_Carlisle_M43_Red_co.paa"};
		picture = "\fow\fow_characters_items\medical\data\ui\HLS_US_Carlisle_M43_Red_Item_ca.paa";
		model = "\fow\fow_characters_items\medical\HLS_US_Carlisle_M43.p3d";
		mass = 3;
		class ItemInfo {
			mass = 3;
			type = 401;
			allowedSlots[] = {701,801,901};
		};
	};
	class fow_i_fak_uk: FirstAidKit {
		author = "FOW team";
		DLC = "FOW";
		scope = 2;
		scopeCurator = 2;
		displayName = "[UK] First Field Dressing";
		descriptionShort = "<br/>First Aid Field Dressings.<br/>Commonwealth Armed Forces Standard Issue First Aid Dressings.";
		picture = "\fow\fow_characters_items\medical\data\ui\HLS_UK_FirstFieldDressing_Item_ca.paa";
		model = "\fow\fow_characters_items\medical\HLS_UK_FirstFieldDressing.p3d";
		mass = 8;
		class ItemInfo {
			mass = 8;
			type = 401;
			allowedSlots[] = {701,801,901};
		};
	};
	class fow_i_fak_ger: FirstAidKit {
		author = "FOW team";
		DLC = "FOW";
		scope = 2;
		scopeCurator = 2;
		displayName = "[GER] Verbandpäckchen";
		descriptionShort = "<br/>First Aid Field Dressing.<br/>Wehrmacht Standard Issue First Aid Dressings.";
		picture = "\fow\fow_characters_items\medical\data\ui\HLS_GER_FieldDressing_Medium_Item_ca.paa";
		model = "\fow\fow_characters_items\medical\HLS_GER_FieldDressing_Medium.p3d";
		mass = 8;
		class ItemInfo {
			mass = 8;
			type = 401;
			allowedSlots[] = {701,801,901};
		};
	};
	class fow_i_fak_ija: FirstAidKit {
		author = "FOW team";
		DLC = "FOW";
		scope = 2;
		scopeCurator = 2;
		displayName = "[IJA] Field Dressing";
		descriptionShort = "<br/>First Aid Field Dressing.<br/>Imperial Japanese Standard Issue First Aid Dressings.";
		picture = "\fow\fow_characters_items\medical\data\ui\HLS_GER_FieldDressing_Medium_Item_ca.paa"; // TODO
		model = "\fow\fow_characters_items\medical\HLS_IJA_FieldDressing.p3d";
		mass = 8;
		class ItemInfo {
			mass = 8;
			type = 401;
			allowedSlots[] = {701,801,901};
		};
	};
	class fow_i_nvg_US_A4Wool_Green: NVGoggles {
		DLC = "fow_mod";
		scope = 2;
		displayName = "[US] A4 Wool Cap. (Green | Under Helmet)";
		descriptionShort = "A4 Cold-Weather Wool Cap.<br/>Worn under helmet.";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\nvg\data\HLS_Beanie_RGR_co.paa"};
//		picture = "\HLS_Attire\Data\UI\Icons\HLS_FieldCap_OCP_Bowman_IBE_Item_ca.paa"; TODO
		model = "\fow\fow_characters_items\nvg\HLS_Beanie_UnderHelmet.p3d";
		visionMode[] = {"Normal","Normal"};
		class ItemInfo {
				type = 616;
				hmdType = 0;
				hiddenSelections[] = {"Camo"};
				hiddenSelectionsTextures[] = {"\fow\fow_characters_items\nvg\data\HLS_Beanie_RGR_co.paa"};
				uniformModel = "\fow\fow_characters_items\nvg\HLS_Beanie_UnderHelmet.p3d";
				modelOff = "\fow\fow_characters_items\nvg\HLS_Beanie_UnderHelmet.p3d";
				mass = 3;
		};
		author = "FOW Development Team";
	};
	class fow_i_nvg_US_A4Wool_Beige: fow_i_nvg_US_A4Wool_Green {
		displayName = "[US] A4 Wool Cap. (Beige | Under Helmet)";
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\nvg\data\HLS_Beanie_Beige_co.paa"};
//		picture = "\HLS_Attire\Data\UI\Icons\HLS_FieldCap_OCP_Bowman_IBE_Item_ca.paa"; TODO
		class ItemInfo {
			type = 616;
			hmdType = 0;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\fow\fow_characters_items\nvg\data\HLS_Beanie_Beige_co.paa"};
			uniformModel = "\fow\fow_characters_items\nvg\HLS_Beanie_UnderHelmet.p3d";
			modelOff = "\fow\fow_characters_items\nvg\HLS_Beanie_UnderHelmet.p3d";
			mass = 3;
		};		
		author = "FOW Development Team";
	};
	class fow_i_nvg_US_A4Wool_Blue: fow_i_nvg_US_A4Wool_Green {
		displayName = "[US] A4 Wool Cap. (Blue | Under Helmet)";
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\nvg\data\HLS_Beanie_Blue_co.paa"};
//		picture = "\HLS_Attire\Data\UI\Icons\HLS_FieldCap_OCP_Bowman_IBE_Item_ca.paa"; TODO
		class ItemInfo {
			type = 616;
			hmdType = 0;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\fow\fow_characters_items\nvg\data\HLS_Beanie_Blue_co.paa"};
			uniformModel = "\fow\fow_characters_items\nvg\HLS_Beanie_UnderHelmet.p3d";
			modelOff = "\fow\fow_characters_items\nvg\HLS_Beanie_UnderHelmet.p3d";
			mass = 3;
		};
		author = "FOW Development Team";
	};
	class fow_i_nvg_US_scr: NVGoggles {
		DLC = "fow_mod";
		scope = 2;
		displayName = "[US] SCR radio";
		descriptionShort = "SCR radio.";
		//hiddenSelections[] = {"Camo"};
		//hiddenSelectionsTextures[] = {"\fow\fow_characters_items\nvg\data\HLS_Beanie_RGR_co.paa"};
//		picture = "\HLS_Attire\Data\UI\Icons\HLS_FieldCap_OCP_Bowman_IBE_Item_ca.paa"; TODO
		model = "\fow\fow_characters\us\lodu_us_scr.p3d";
		visionMode[] = {"Normal","Normal"};
		class ItemInfo {
			type = 616;
			hmdType = 0;
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			uniformModel = "\fow\fow_characters\us\lodu_us_scr.p3d";
			modelOff = "\fow\fow_characters\us\lodu_us_scr.p3d";
			mass = 3;
		};
		author = "FOW Development Team";
	};

	class fow_i_nvg_GER_ammoboxes: NVGoggles {
		DLC = "fow_mod";
		scope = 2;
		displayName = "[GER] MG 34/42 Ammo Tins.";
		descriptionShort = "MG 34/42 Aluminium ammunition boxes.<br/>Worn over shoulder.";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\fow_heer_box_co.paa"};
		picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
		model = "\fow\fow_characters\ger\lodu_heer_ammo_boxes.p3d";
		visionMode[] = {"Normal","Normal"};
		class ItemInfo {
			type = 616;
			hmdType = 0;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\fow_heer_box_co.paa"};
			uniformModel = "\fow\fow_characters\ger\lodu_heer_ammo_boxes.p3d";
			modelOff = "\fow\fow_characters\ger\lodu_heer_ammo_boxes.p3d";
			mass = 20;
		};
		author = "FOW Development Team";
	};
	class fow_i_nvg_GER_ammoboxes_mg34: NVGoggles {
		DLC = "fow_mod";
		scope = 2;
		displayName = "[GER] MG 34 Ammo Drums.";
		descriptionShort = "MG 34/42 Aluminium ammunition drums.<br/>Worn around neck.";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\fow_heer_box_co.paa"};
		picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
		model = "\fow\fow_characters\ger\lodu_heer_ammo_mg34_42.p3d";
		visionMode[] = {"Normal","Normal"};
		class ItemInfo {
			type = 616;
			hmdType = 0;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\fow_heer_box_co.paa"};
			uniformModel = "\fow\fow_characters\ger\lodu_heer_ammo_mg34_42.p3d";
			modelOff = "\fow\fow_characters\ger\lodu_heer_ammo_mg34_42.p3d";
			mass = 12;
		};
		author = "FOW Development Team";
	};
	class fow_i_nvg_GER_ammo_belt: NVGoggles {
		DLC = "fow_mod";
		scope = 2;
		displayName = "[GER] MG 34/42 Ammo Belt.";
		descriptionShort = "MG 34/42 ammunition belt.<br/>Worn around neck.";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\fow_heer_box_co.paa"};
		picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
		model = "\fow\fow_characters\ger\lodu_heer_ammo_belt.p3d";
		visionMode[] = {"Normal","Normal"};
		class ItemInfo {
			type = 616;
			hmdType = 0;
			uniformModel = "\fow\fow_characters\ger\lodu_heer_ammo_belt.p3d";
			modelOff = "\fow\fow_characters\ger\lodu_heer_ammo_belt.p3d";
			mass = 8;
		};
		author = "FOW Development Team";
	};
	class fow_i_nvg_GER_grenadebag: NVGoggles {
		DLC = "fow_mod";
		scope = 2;
		displayName = "[GER] Stielhandgranate Bundle Bags.";
		descriptionShort = "Stielhandgranate bundle bags.<br/>Worn over shoulders.";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\porte_grenade_co.paa"};
		picture = "\fow\fow_characters\ger\data\ui\fow_b_heer_ammo_belt_ca.paa";
		model = "\fow\fow_characters\ger\lodu_porte_grenade.p3d";
		visionMode[] = {"Normal","Normal"};
		class ItemInfo {
			type = 616;
			hmdType = 0;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\porte_grenade_co.paa"};
			uniformModel = "\fow\fow_characters\ger\lodu_porte_grenade.p3d";
			modelOff = "\fow\fow_characters\ger\lodu_porte_grenade.p3d";
			mass = 20;
		};
		author = "FOW Development Team";
	};
	

};

class cfgGlasses {
	class None;
	
	//GLASSES
	class fow_g_glasses1: None
	{
		displayname = "[GER] Dienst-Brille";
		model = "\fow\fow_characters_items\glasses\len_glasses1.p3d";
		picture = "\fow\fow_characters_items\glasses\data\ui\fow_g_glasses1_ca.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class fow_g_glasses2: fow_g_glasses1
	{
		displayname = "[GER] Dienst-Brille 2";
		model = "\fow\fow_characters_items\glasses\len_glasses2.p3d";
	};
	class fow_g_glasses3: fow_g_glasses1
	{
		displayname = "[GER] Dienst-Brille 3";
		model = "\fow\fow_characters_items\glasses\len_glasses3.p3d";
	};
	class fow_g_glasses4: fow_g_glasses1
	{
		displayname = "[US] P3 Frame Glasses";
		model = "\fow\fow_characters_items\glasses\len_glasses4.p3d";
		picture = "\fow\fow_characters_items\glasses\data\ui\fow_g_glasses4_ca.paa";
	};

	//GLOVES
	class fow_g_gloves1 : None {
       	scope = 2; 
		displayName = "[MISC] Gloves (wool, green)";
		picture = "\fow\fow_characters_items\gloves\data\ui\fow_g_gloves1_ca.paa";
		model = "\fow\fow_characters_items\gloves\len_gloves2.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\gloves\data\gloves_wool1_co.paa"};
 	};
	class fow_g_gloves2 : fow_g_gloves1 {
		displayName = "[MISC] Gloves (wool, gray)";
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\gloves\data\gloves_wool2_co.paa"};
 	};
	class fow_g_gloves3 : fow_g_gloves1 {
		displayName = "[MISC] Gloves (wool, khaki)";
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\gloves\data\gloves_wool3_co.paa"};
 	};
	class fow_g_gloves4: fow_g_gloves1
	{
		displayName = "[MISC] Gloves (leather, black)";
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\gloves\data\gloves_leather1_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters_items\gloves\data\gloves_leather.rvmat"};
		model = "\fow\fow_characters_items\gloves\len_gloves2.p3d";
 	};
	class fow_g_gloves5: fow_g_gloves4
	{
		displayName = "[MISC] Gloves (leather, brown)";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\gloves_leather2_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters_items\gloves\data\gloves_leather.rvmat"};
 	};
	class fow_g_gloves6: fow_g_gloves4
	{
		displayName = "[MISC] Gloves (leather, tan)";
		hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\gloves_leather1_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters_items\gloves\data\gloves_leather.rvmat"};
		model = "\fow\fow_characters_items\gloves\len_gloves2.p3d";
 	};
	//WATCHES
	class fow_g_watch1: None
	{
		displayname = "[MISC] Watch (Brown)";
		model = "\fow\fow_characters_items\watches\len_watch1.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\watches\data\watch1_co.paa"};
		picture = "\fow\fow_characters_items\watches\data\ui\fow_g_watch_ca.paa";
		identityTypes[] = {"NoGlasses",0,"G_NATO_default",0,"G_NATO_casual",0,"G_NATO_pilot",0,"G_NATO_recon",0,"G_NATO_SF",0,"G_NATO_sniper",0,"G_NATO_diver",0,"G_IRAN_default",0,"G_IRAN_diver",0,"G_GUERIL_default",0,"G_HAF_default",0,"G_CIVIL_female",0,"G_CIVIL_male",0};
	};
	class fow_g_watch2: fow_g_watch1
	{
		displayname = "[MISC] Watch (Black)";
		hiddenSelectionsTextures[] = {"\fow\fow_characters_items\watches\data\watch2_co.paa"};
	};		
};