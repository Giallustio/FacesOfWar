
class fow_h_it_m33: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IT] M33 Helmet"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\us\data\ui\fow_h_us_m1_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\it\btc_reiww2_helmet.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\it\data\btc_reiww2_helmet_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		uniformModel = "\fow\fow_characters\it\btc_reiww2_helmet.p3d";	/// what model is used for this cap
		hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	};
};
class fow_h_it_bustina: fow_h_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IT] Bustina"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ger\data\ui\fow_h_feldmutze_ca.paa"; /// this looks fairly similar
	model   = "\fow\fow_characters\it\btc_reiww2_bustina.p3d"; /// what model does the cap use
	hiddenSelections[] = {"camo"}; /// what selection in model could have different textures
	hiddenSelectionsTextures[] = {"\fow\fow_characters\it\data\btc_reiww2_bustina_co.paa"}; /// what texture is going to be used
	class ItemInfo: ItemInfo
	{
		mass = 10;
		allowedSlots[] = {801,901,701,605};
		uniformModel = "\fow\fow_characters\it\btc_reiww2_bustina.p3d";	/// what model is used for this cap
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