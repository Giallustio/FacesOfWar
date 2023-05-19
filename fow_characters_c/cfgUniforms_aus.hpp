
class fow_u_aus_m37_01_private: fow_u_base
{
	scope = 2;
	displayName = "[AUS] M37 Wool Trousers Field (US gear)"; 
	picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_aus_soldier01_private"; 
		containerClass = "Supply40";
	};
};
class fow_u_aus_m37_02_private: fow_u_aus_m37_01_private
{
	displayName = "[AUS] M37 Wool Trousers Field (UK gear)"; 
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_aus_soldier02_private";
	};
};
class fow_u_aus_m37_03_private: fow_u_aus_m37_01_private
{
	displayName = "[AUS] M37 Wool Trousers Field (UK gear, Short sleeve)"; 
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_aus_soldier03_private";
	};
};
