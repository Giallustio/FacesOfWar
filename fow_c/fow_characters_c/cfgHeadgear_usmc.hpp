
class fow_h_usmc_m1: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[USMC] M1 Helmet (Camo)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\usmc\data\ui\fow_h_usmc_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\usmc\lodu_usmc_headgear_cask01.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_cask_usmc01_co.paa"}; /// what texture is going to be used
	class ItemInfo: HeadgearItem
	{
		mass = 55; /// combined weight and volume of the cap, this equals to single magazine
		uniformModel = "\fow\fow_characters\usmc\lodu_usmc_headgear_cask01.p3d";	/// what model is used for this cap
		allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	/// this cap is so small and flexible that it fits everywhere
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
class fow_h_usmc_m1_camo_01: fow_h_usmc_m1
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[USMC] M1 Helmet (Camo 01)"; /// how would the stuff be displayed in inventory and on ground
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_cask_usmc01_camo01_co.paa"}; /// what texture is going to be used
};
class fow_h_usmc_m1_camo_02: fow_h_usmc_m1
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[USMC] M1 Helmet (Camo 02)"; /// how would the stuff be displayed in inventory and on ground
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\usmc\data\lodu_cask_usmc01_camo02_co.paa"}; /// what texture is going to be used
};
