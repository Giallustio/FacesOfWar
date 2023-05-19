
class fow_h_ija_type90: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Type 90 Helmet"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_type90_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_helmet.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_cask_japan_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_helmet.p3d";	/// what model is used for this cap
	};
};
class fow_h_ija_type90_net: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Type 90 Helmet (Net)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_type90_net_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_helmet_net.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_cask_japan_net_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_helmet_net.p3d";	/// what model is used for this cap
	};
};
class fow_h_ija_type90_net_neck: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Type 90 Helmet (Net-Neck)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_type90_net_neck_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_helmet_net_neck.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo","camoB"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\ija_cap_army_co.paa","\fow\fow_characters\ija\data\lodu_cask_japan_net_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_helmet_net_neck.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo","camoB"}; /// what selection in model could have different textures
	};
};
class fow_h_ija_type90_foliage: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Type 90 Helmet (foliage)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_type90_foliage_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_helmet_foliage.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo","camoB"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_cask_japan_net_co.paa","fow\fow_characters\ija\data\camo_jap02_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_helmet_foliage.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo","camoB"};
	};
};
class fow_h_ija_type90_snlf: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Type 90 Helmet (SNLF)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_type90_snlf_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_helmet_marine.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_cask_japan_marine_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_helmet_marine.p3d";	/// what model is used for this cap
	};
};
class fow_h_ija_tank_helmet: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Tank Helmet"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_tank_helmet_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_tank_helmet.p3d"; /// what model does the cap use
	hiddenSelections[] = {}; //"camo"/// what selection in model could have different textures
	hiddenSelectionsTextures[] = {}; //{"\fow\fow_characters\ger\data\lodu_calot_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		mass = 20;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_tank_helmet.p3d";	/// what model is used for this cap
		hiddenSelections[] = {}; //"camo"/// what selection in model could have different textures
	};
};
class fow_h_ija_flight_helmet: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Flight helmet"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_pilothelmet_ca.paa"; /// this looks fairly similar
	model = "fow\fow_characters\us\pilot_flighthelmet.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"fow\fow_characters\us\data\pilot_headgear_2_ca.paa"};
	class ItemInfo: ItemInfo
	{
		mass = 20;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "fow\fow_characters\us\pilot_flighthelmet.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; //"camo"/// what selection in model could have different textures
	};
};
//CAPS
class fow_h_ija_fieldcap: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Field Cap"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_fieldcap_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_cap.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\lodu_japan_gear_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		mass = 10;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_cap.p3d";	/// what model is used for this cap
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
class fow_h_ija_fieldcap_neck: fow_h_ija_fieldcap
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Cap (Neck)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_fieldcap_neck_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_cap_neck.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\ija_cap_army_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_cap_neck.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_ija_fieldcap_officer: fow_h_ija_fieldcap
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Field Cap (Officer)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_fieldcap_officer_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_cap01.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\ija_cap_army_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_cap01.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_ija_fieldcap_marine: fow_h_ija_fieldcap
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Field Cap (Marine)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_fieldcap_marine_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_cap_marine.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\ija_cap_marine_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_cap_marine.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_ija_fieldcap_marine_neck: fow_h_ija_fieldcap
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Cap (Marine-Neck)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_fieldcap_marine_neck_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_cap_neck_marine.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\ija_cap_marine_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_cap_neck_marine.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_ija_hakimachi: fow_h_ija_fieldcap
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IJA] Hakimachi"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_h_ija_hakimachi_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\ija\lodu_IJA_hakimachi01.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\ija\data\hakimachi_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		mass = 2; /// combined weight and volume of the cap, this equals to single magazine
		uniformModel = "\fow\fow_characters\ija\lodu_IJA_hakimachi01.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};