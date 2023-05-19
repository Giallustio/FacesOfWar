
class fow_u_ija_type98: fow_u_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName = "[IJA] Type 98"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_u_jp_ija_ca.paa"; /// this icon fits the uniform surprisingly well
	//model = "\fow\fow_characters\ija\lodu_IJA"; /// how does the uniform look when put on ground
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_ija_soldier01"; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
	};
};
class fow_u_ija_type98_foliage: fow_u_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName = "[IJA] type98 (foliage)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_u_jp_ija_ca.paa"; /// this icon fits the uniform surprisingly well
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_ija_soldier01_foliage"; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
	};
};
class fow_u_ija_type98_short: fow_u_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName = "[IJA] Type 98 (short)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_u_jp_ija_ca.paa"; /// this icon fits the uniform surprisingly well

	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_ija_soldier01_short"; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
	};
};
class fow_u_ija_type98_khakibrown: fow_u_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName = "[IJA] Type 98 (khaki-brown)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_u_jp_ija_ca.paa"; /// this icon fits the uniform surprisingly well
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_ija_soldier02"; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
		containerClass = "Supply40";
	};
};
class fow_u_ija_type98_snlf: fow_u_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName = "[IJA] Type 98 (SNLF)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_u_jp_ija_ca.paa"; /// this icon fits the uniform surprisingly well
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_ija_soldier03"; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
		containerClass = "Supply40";
	};
};
	
class fow_u_ija_pilot: fow_u_base
{
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName = "[IJA] Pilot uniform"; /// how would the stuff be displayed in inventory and on ground
	picture = "\fow\fow_characters\ija\data\ui\fow_u_jp_ija_ca.paa"; /// this icon fits the uniform surprisingly well
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_s_ija_pilot"; /// what soldier class contains parameters of the uniform (such as model, camouflage, hitpoints and others)
	};
};