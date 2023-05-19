class CfgPatches
{
	class fow_music_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main","fow_music"};
	};
};

class CfgMusic
{
	class fow_main_theme
	{
		name = "[FOW] Main Theme";
		sound[] = {"\fow\fow_music\data\Main_theme.ogg",1,1};
		duration = 189;
	};
	class fow_ANewWorldisBorn
	{
		name = "[FOW] A Ne wWorld is Born";
		sound[] = {"\fow\fow_music\data\ANewWorldisBorn.ogg",1,1};
		duration = 183;
	};
	class fow_HeroicWings
	{
		name = "[FOW] Heroic Wings";
		sound[] = {"\fow\fow_music\data\HeroicWings.ogg",1,1};
		duration = 218;
	};
	class fow_Invasion
	{
		name = "[FOW] Invasion";
		sound[] = {"\fow\fow_music\data\Invasion.ogg",1,1};
		duration = 120;
	};
	class fow_JungleHunt
	{
		name = "[FOW] Jungle Hunt";
		sound[] = {"\fow\fow_music\data\JungleHunt.ogg",1,1};
		duration = 198;
	};
	class fow_JungleHunt_DrumOnly
	{
		name = "[FOW] Jungle Hunt Drum Only";
		sound[] = {"\fow\fow_music\data\JungleHunt_DrumOnly.ogg",1,1};
		duration = 205;
	};
	class fow_SonsOfJapan
	{
		name = "[FOW] Sons Of Japan";
		sound[] = {"\fow\fow_music\data\SonsOfJapan.ogg",1,1};
		duration = 138;
	};
	class fow_TheLastIsland
	{
		name = "[FOW] The Last Island";
		sound[] = {"\fow\fow_music\data\TheLastIsland.ogg",1,1};
		duration = 126;
	};
};