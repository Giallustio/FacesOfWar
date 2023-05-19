
class CfgPatches
{
	class fow_optional_comp_csa
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"fow_main", "fow_weapons_c"};
	};
};


class cfgWeapons {
	class fow_rifle_base;
	class fow_rifleBolt_base;
	class fow_w_k98 : fow_rifleBolt_base {
		magazines[] = {
			"fow_5Rnd_792x57",
            "CSA38_7_92_5xMauser",
            "CSA38_7_92_5xMauser2", 
            "CSA38_7_92_5xMauserkAR",
            "CSA38_7_92_5xMauserkAR2",
            "CSA38_7_92_5xMauser3"
		};
	};
	
	class fow_w_mg42 : fow_rifle_base {		
		magazines[] = {
			"fow_50Rnd_792x57",
            "CSA38_7_92_50xMauserMG",
            "CSA38_7_92_50xMauserMGAP",
            "CSA38_7_92_250xMauserMG",
            "CSA38_7_92_250xMauserMGAP"
		};
	};	
	class fow_w_mg34 : fow_rifle_base {		
		magazines[] = {
			"fow_50Rnd_792x57",
            "CSA38_7_92_50xMauserMG",
            "CSA38_7_92_50xMauserMGAP",
            "CSA38_7_92_250xMauserMG",
            "CSA38_7_92_250xMauserMGAP"
		};
	};		
};
