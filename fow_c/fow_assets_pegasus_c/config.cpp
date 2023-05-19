class CfgPatches
{
	class fow_assets_pegasus_c
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"fow_main"};
	};
};
class CfgVehicles 
{
	class HouseBase;
	class House : HouseBase
	{
		class DestructionEffects;
	};
	class fow_sign_caen_n_s: house
	{
		scope = 2;
		model = "\fow\fow_assets_pegasus\signs\sign_caen_n_s";
		displayName = "Sign Caen N-S";
	};
};