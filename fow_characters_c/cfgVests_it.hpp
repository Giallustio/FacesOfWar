
class fow_v_it_base: fow_v_base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[IT] Vest"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\uk\data\ui\fow_v_uk_base_ca.paa"; /// this icon fits the vest surprisingly well
	model   = "\fow\fow_characters\it\btc_reiww2_vest.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[]={"fow\fow_characters\it\data\btc_reiww2_soldier_co.paa"};
	class ItemInfo: ItemInfo
	{
		uniformModel   = "\fow\fow_characters\it\btc_reiww2_vest.p3d"; /// what model does the vest use
		containerClass = "Supply60";
		mass = 25;
	};
};