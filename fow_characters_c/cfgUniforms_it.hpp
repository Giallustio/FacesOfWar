
class fow_u_it_m40_01_private: fow_u_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName = "[IT] Uniforme modello 40"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_s_it_01_private"; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
	};
};