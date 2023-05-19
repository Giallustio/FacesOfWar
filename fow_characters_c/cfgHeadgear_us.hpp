
class fow_h_us_m1: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m1_closed: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet (closed)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask02.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo1","camo2"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_co.paa",""}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask02.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo1","camo2"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m1_folded: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet (folded)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask03.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo1","camo2"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_co.paa",""}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask03.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo1","camo2"}; /// what selection in model could have different textures
	};
};

class fow_h_us_m1_net: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet Net"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_net_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask_net.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_net_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask_net.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};

class fow_h_us_m1_medic: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet Medic"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_medic_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask_med.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_medic_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask_med.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};

class fow_h_us_m1_officer: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet Officer"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_lieutenant_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask_lieutenant.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_lieut_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask_lieutenant.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m1_officer_closed: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet Officer (closed)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask02.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_lieut_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask02.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m1_officer_folded: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet Officer (folded)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask03.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_lieut_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask03.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m1_nco: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet NCO"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_lieutenant_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask_lieutenant.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_nco_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask_lieutenant.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m1_nco_closed: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet NCO (closed)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask02.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_nco_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask02.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m1_nco_folded: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M1 Helmet NCO (folded)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask03.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\lodu_us_m1_helmet_nco_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask03.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m2: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M2 Helmet"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne02.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_no_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne02.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m2_ace: fow_h_us_m2 {
	displayName  = "[US] M2 Helmet (ace)";
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_no_ace_co.paa"};
};
class fow_h_us_m2_heart: fow_h_us_m2 {
	displayName  = "[US] M2 Helmet (heart)";
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_no_coeur_co.paa"};
};
class fow_h_us_m2_diamond: fow_h_us_m2 {
	displayName  = "[US] M2 Helmet (diamond)";
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_no_carreau_co.paa"};
};
class fow_h_us_m2_clover: fow_h_us_m2 {
	displayName  = "[US] M2 Helmet (clover)";
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_no_trefle_co.paa"};
};
class fow_h_us_m2_net: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M2 Helmet (net)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne03.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne03.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m2_net_ace: fow_h_us_m2_net {
	displayName  = "[US] M2 Helmet (net - ace)";
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_ace_co.paa"}; /// what texture is going to be used
};
class fow_h_us_m2_net_heart: fow_h_us_m2_net {
	displayName  = "[US] M2 Helmet (net - heart)";
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_coeur_co.paa"}; /// what texture is going to be used
};
class fow_h_us_m2_net_diamond: fow_h_us_m2_net {
	displayName  = "[US] M2 Helmet (net - diamond)";
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_carreau_co.paa"}; /// what texture is going to be used
};
class fow_h_us_m2_net_clover: fow_h_us_m2_net {
	displayName  = "[US] M2 Helmet (net - clover)";
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_trefle_co.paa"}; /// what texture is going to be used
};
class fow_h_us_m2_camo: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M2 Helmet (camo)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne01.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne01.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m2_camo_ace: fow_h_us_m2_camo {
	displayName  = "[US] M2 Helmet (camo - ace)"; 
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_ace_co.paa"};
};
class fow_h_us_m2_camo_heart: fow_h_us_m2_camo {
	displayName  = "[US] M2 Helmet (camo - heart)"; 
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_coeur_co.paa"};
};
class fow_h_us_m2_camo_diamond: fow_h_us_m2_camo {
	displayName  = "[US] M2 Helmet (camo - diamond)"; 
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_carreau_co.paa"};
};
class fow_h_us_m2_camo_clover: fow_h_us_m2_camo {
	displayName  = "[US] M2 Helmet (camo - clover)"; 
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_trefle_co.paa"};
};
class fow_h_us_m2_camo_open: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M2 Helmet (camo - open)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne04.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne04.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m2_camo_open_ace: fow_h_us_m2_camo_open {
	displayName  = "[US] M2 Helmet (camo - open - ace)"; 
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_ace_co.paa"};
};
class fow_h_us_m2_camo_open_heart: fow_h_us_m2_camo_open {
	displayName  = "[US] M2 Helmet (camo - open - heart)"; 
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_coeur_co.paa"};
};
class fow_h_us_m2_camo_open_diamond: fow_h_us_m2_camo_open {
	displayName  = "[US] M2 Helmet (camo - open - diamond)"; 
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_carreau_co.paa"};
};
class fow_h_us_m2_camo_open_clover: fow_h_us_m2_camo_open {
	displayName  = "[US] M2 Helmet (camo - open - clover)"; 
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_trefle_co.paa"};
};
class fow_h_us_m2_fak: fow_h_base {
	scope = 1; //Can't exist without netting, better hide it
	displayName  = "[US] M2 Helmet (fak)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne05.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo","camo1"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_no_co.paa","\fow\fow_characters\us\data\scrim_co.paa"}; /// what texture is going to be used
	hiddenSelectionsMaterials[] = {"\fow\fow_characters\us\data\cask_airborne.rvmat","\fow\fow_characters\us\data\scrim.rvmat"};
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne05.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo","camo1"}; /// what selection in model could have different textures
	};
};
class fow_h_us_m2_fak_net: fow_h_us_m2_fak {
	scope = 2;
	displayName  = "[US] M2 Helmet (fak - net)"; /// how would the stuff be displayed in inventory and on ground
	hiddenSelections[] = {"camo","camo1"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_co.paa","\fow\fow_characters\us\data\scrim_co.paa"}; /// what texture is going to be used
};
class fow_h_us_m2_fak_camo: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] M2 Helmet (fak - camo)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne06.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo","camo1"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\us\data\cask_airborne_co.paa","\fow\fow_characters\us\data\scrim_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\us\lodu_us_headgear_cask_airborne06.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo","camo1"}; /// what selection in model could have different textures
	};
};

class fow_h_us_flight_helmet: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Flight helmet"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_pilothelmet_ca.paa"; /// this looks fairly similar
	model = "fow\fow_characters\us\pilot_flighthelmet.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"fow\fow_characters\us\data\pilot_headgear_1_ca.paa"};
	class ItemInfo: ItemInfo
	{
		mass = 20;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "fow\fow_characters\us\pilot_flighthelmet.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; //"camo"/// what selection in model could have different textures
	};
};
class fow_h_us_daisy_mae_01: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Daisy Mae"; /// how would the stuff be displayed in inventory and on ground
	//picture = "\fow\fow_characters\uk\data\ui\fow_h_uk_mk3_net_ca.paa"; /// this looks fairly similar
	model = "fow\fow_characters\us\len_daisy_mae_1.p3d"; /// what model does the cap use
	//hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	//hiddenSelectionsTextures[] = {"\fow\fow_characters\ger\data\lodu_calot_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		mass = 10;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "fow\fow_characters\us\len_daisy_mae_1.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
		
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
				armor		= 0; // addition to armor of referenced hitpoint
				passThrough	= 1; // multiplier of base passThrough defined in referenced hitpoint
			};
		};
	};
};
class fow_h_us_daisy_mae_02: fow_h_us_daisy_mae_01
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Daisy Mae (folded front)"; /// how would the stuff be displayed in inventory and on ground
	//picture = "\fow\fow_characters\uk\data\ui\fow_h_uk_mk3_net_ca.paa"; /// this looks fairly similar
	model = "fow\fow_characters\us\len_daisy_mae_2.p3d"; /// what model does the cap use
	class ItemInfo: ItemInfo
	{
		mass = 10;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "fow\fow_characters\us\len_daisy_mae_2.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
		
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
				armor		= 0; // addition to armor of referenced hitpoint
				passThrough	= 1; // multiplier of base passThrough defined in referenced hitpoint
			};
		};
	};
};
class fow_h_us_daisy_mae_03: fow_h_us_daisy_mae_01
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[US] Daisy Mae (folded)"; /// how would the stuff be displayed in inventory and on ground
	//picture = "\fow\fow_characters\uk\data\ui\fow_h_uk_mk3_net_ca.paa"; /// this looks fairly similar
	model = "fow\fow_characters\us\len_daisy_mae_3.p3d"; /// what model does the cap use
	class ItemInfo: ItemInfo
	{
		mass = 10;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "fow\fow_characters\us\len_daisy_mae_3.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
		
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
				armor		= 0; // addition to armor of referenced hitpoint
				passThrough	= 1; // multiplier of base passThrough defined in referenced hitpoint
			};
		};
	};
};
