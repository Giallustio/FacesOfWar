class fow_u_us_m37_01_private: fow_u_base
{
	scope = 2; 
	displayName = "[US] M37 Wool Trousers Field";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_army_ca.paa"; 
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_s_us_m37_01_private";
		containerClass = "Supply40";
	};
};
class fow_u_us_m37_02_private: fow_u_us_m37_01_private
{
	scope = 2; 
	displayName = "[US] HBT 1937";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_army_ca.paa"; 
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fows_s_us_m37_02_private";
		containerClass = "Supply40";
	};
};
class fow_u_us_m41_01_private: fow_u_base
{
	scope = 2; 
	displayName = "[US] M41 Wool Trousers Field 01";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_army_ca.paa"; 
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_s_us_m41_01_private";
		containerClass = "Supply30";
	};
};
class fow_u_us_m41_02_private: fow_u_us_m41_01_private
{
	displayName = "[US] M41 Wool Trousers Field 02";
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_s_us_m41_02_private";
	};
};
class fow_u_us_m41_03_private: fow_u_us_m41_01_private
{
	displayName = "[US] M41 Wool Trousers Field 03";
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_s_us_m41_03_private";
	};
};
class fow_u_us_m41_04_private: fow_u_us_m41_01_private
{
	displayName = "[US] M41 HBT Trousers Field 01";
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_s_us_m41_04_private";
	};
};
//Airborne
class fow_u_us_m42_ab_01_private: fow_u_base {
	scope = 2; 
	displayName = "[US] M42 Jump Blouse (PVT)";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_army_ca.paa"; 
	
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_private";containerClass = "Supply80";};
};
class fow_u_us_m42_ab_01_corporal: fow_u_us_m42_ab_01_private {
	displayName = "[US] M42 Jump Blouse (CPL)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_corporal";};
};
class fow_u_us_m42_ab_01_sergeant: fow_u_us_m42_ab_01_private {
	displayName = "[US] M42 Jump Blouse (SGT)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_sergeant";};
};
class fow_u_us_m42_ab_01_staffsergeant: fow_u_us_m42_ab_01_private {
	displayName = "[US] M42 Jump Blouse (SSG)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_staffsergeant";};
};
class fow_u_us_m42_ab_01_82_private: fow_u_us_m42_ab_01_private {
	scope = 2; 
	displayName = "[US] M42 Jump Blouse (82nd - PVT)";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_82nd_ca.paa"; 
	
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_82_private";};
};
class fow_u_us_m42_ab_01_82_corporal: fow_u_us_m42_ab_01_82_private {
	displayName = "[US] M42 Jump Blouse (82nd - CPL)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_82_corporal";};
};
class fow_u_us_m42_ab_01_82_sergeant: fow_u_us_m42_ab_01_82_private {
	displayName = "[US] M42 Jump Blouse (82nd - SGT)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_82_sergeant";};
};
class fow_u_us_m42_ab_01_82_staffsergeant: fow_u_us_m42_ab_01_82_private {
	displayName = "[US] M42 Jump Blouse (82nd - SSG)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_82_staffsergeant";};
};
class fow_u_us_m42_ab_01_82_flag_private: fow_u_us_m42_ab_01_82_private
{
	displayName = "[US] M42 Jump Blouse (82nd - US flag)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_82_flag_private";};
};
class fow_u_us_m42_ab_01_82_flag_corporal: fow_u_us_m42_ab_01_82_flag_private {
	displayName = "[US] M42 Jump Blouse (82nd - US flag - CPL)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_82_flag_corporal";};
};
class fow_u_us_m42_ab_01_82_flag_sergeant: fow_u_us_m42_ab_01_82_flag_private {
	displayName = "[US] M42 Jump Blouse (82nd - US flag - SGT)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_82_flag_sergeant";};
};
class fow_u_us_m42_ab_01_82_flag_staffsergeant: fow_u_us_m42_ab_01_82_flag_private {
	displayName = "[US] M42 Jump Blouse (82nd - US flag - SSG)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_82_flag_staffsergeant";};
};
class fow_u_us_m42_ab_01_101_private: fow_u_us_m42_ab_01_private {
	scope = 2; 
	displayName = "[US] M42 Jump Blouse (101st - PVT)";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_101st_ca.paa"; 
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_101_private";};
};
class fow_u_us_m42_ab_01_101_corporal: fow_u_us_m42_ab_01_101_private {
	displayName = "[US] M42 Jump Blouse (101st - CPL)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_101_corporal";};
};
class fow_u_us_m42_ab_01_101_sergeant: fow_u_us_m42_ab_01_101_private {
	displayName = "[US] M42 Jump Blouse (101st - SGT)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_101_sergeant";};
};
class fow_u_us_m42_ab_01_101_staffsergeant: fow_u_us_m42_ab_01_101_private {
	displayName = "[US] M42 Jump Blouse (101st - SSG)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_101_staffsergeant";};
};
class fow_u_us_m42_ab_01_101_flag_private: fow_u_us_m42_ab_01_101_private {
	displayName = "[US] M42 Jump Blouse (101st - US flag - PVT)";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_101st_ca.paa"; 
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_101_flag_private";};
};
class fow_u_us_m42_ab_01_101_flag_corporal: fow_u_us_m42_ab_01_101_private {
	displayName = "[US] M42 Jump Blouse (101st - US flag - CPL)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_101_flag_corporal";};
};
class fow_u_us_m42_ab_01_101_flag_sergeant: fow_u_us_m42_ab_01_101_private {
	displayName = "[US] M42 Jump Blouse (101st - US flag - SGT)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_101_flag_sergeant";};
};
class fow_u_us_m42_ab_01_101_flag_staffsergeant: fow_u_us_m42_ab_01_101_private {
	displayName = "[US] M42 Jump Blouse (101st - US flag - SSG)";
	class ItemInfo: ItemInfo {uniformClass = "fow_s_us_m42_ab_01_101_flag_staffsergeant";};
};
//Merril's Marauders
class fow_u_us_hbt_01_private: fow_u_base
{
	scope = 2; 
	displayName = "[US] HBT 1943 (01)";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_mm_ca.paa"; 
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_s_us_hbt_01_private";
	};
};
class fow_u_us_hbt_02_private: fow_u_base
{
	scope = 2; 
	displayName = "[US] HBT 1943 (02)";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_mm_ca.paa"; 
	
	class ItemInfo: ItemInfo
	{
		uniformClass = "fow_s_us_hbt_02_private";
	};
};
class fow_u_us_pilot_01: fow_u_base
{
	scope = 2; 
	displayName = "[US] Pilot (Khaki)";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_army_ca.paa"; 
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo1","camo2","camo3"}; 
		hiddenSelectionsTextures[] = {"fow\fow_characters\us\data\pilot_overall_1_co.paa", "fow\fow_characters\us\data\gloves_leather1_co.paa", ""};
		hiddenSelectionsMaterials[] = {"fow\fow_characters\us\data\pilot_overall.rvmat", "fow\fow_characters\us\data\gloves_leather.rvmat", ""};
		uniformClass = "fow_s_us_pilot";
	};
};
class fow_u_us_pilot_02: fow_u_base
{
	scope = 2; 
	displayName = "[US] Pilot (Green)";
	picture = "\fow\fow_characters\us\data\ui\fow_u_us_army_ca.paa"; 
	
	class ItemInfo: ItemInfo
	{
		hiddenSelections[] = {"camo1","camo2","camo3"}; 
		hiddenSelectionsTextures[] = {"fow\fow_characters\us\data\pilot_overall_1_co.paa", "fow\fow_characters\us\data\gloves_leather1_co.paa", ""};
		hiddenSelectionsMaterials[] = {"fow\fow_characters\us\data\pilot_overall.rvmat", "fow\fow_characters\us\data\gloves_leather.rvmat", ""};
		uniformClass = "fow_s_us_pilot_green";
	};
};