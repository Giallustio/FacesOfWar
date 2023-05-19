	class fow_h_hi_beret: fow_h_base
	{
		scope = 2; 
		displayName  = "[HI] Beret";
		picture = "\fow\fow_characters\hi\data\ui\fow_h_hi_beret_01_ca.paa";
		model   = "\fow\fow_characters\uk\lodu_headgear_beret_commando.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\hi\data\lodu_len_hi_beret01_ca.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\hi\data\lodu_len_hi_beret01.rvmat"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\fow\fow_characters\uk\lodu_headgear_beret_commando.p3d";
			hiddenSelections[] = {"camo"};
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead";
					armor		= 0;
					passThrough	= 1;
				};
			};
		};
	};
	class fow_h_hi_beret_headset: fow_h_base
	{
		scope = 2;
		displayName  = "[HI] Beret (headset)";
		picture = "\fow\fow_characters\hi\data\ui\fow_h_hi_beret_01_ca.paa";
		model   = "\fow\fow_characters\uk\lodu_headgear_beret_rtr_headset.p3d";
		hiddenSelections[] = {"camo","camo1"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\hi\data\lodu_len_hi_beret01_ca.paa", "\fow\fow_characters\uk\data\headphones_co.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\hi\data\lodu_len_hi_beret01.rvmat", "\fow\fow_characters\uk\data\lodu_brit_backpack_headphone.rvmat"};

		class ItemInfo: ItemInfo
		{
			mass = 10;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\fow\fow_characters\uk\lodu_headgear_beret_rtr_headset.p3d";
			hiddenSelections[] = {"camo","camo1"};
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead";
					armor		= 0; 
					passThrough	= 1; 
				};
			};
		};
	};
	class fow_h_hi_officer_cap: fow_h_hi_beret
	{
		displayName  = "[HI] Officer Cap";
		picture = "\fow\fow_characters\hi\data\ui\fow_h_hi_officer_cap_01_ca.paa";
		model   = "\fow\fow_characters\hi\len_headgear_officer_cap.p3d";
		hiddenSelections[] = {"camo", "camo2"};
		hiddenSelectionsTextures[] = {"\fow\fow_characters\hi\data\len_hi_officer_cap_co.paa", "\fow\fow_characters\hi\data\lodu_len_hi_beret01_ca.paa"};
		hiddenSelectionsMaterials[] = {"\fow\fow_characters\hi\data\len_hi_officer_cap.rvmat", "\fow\fow_characters\hi\data\lodu_len_hi_beret01.rvmat"};
		class ItemInfo: ItemInfo
		{
			mass = 10;
			allowedSlots[] = {801,901,701,605};
			uniformModel = "\fow\fow_characters\hi\len_headgear_officer_cap.p3d";
			hiddenSelections[] = {"camo", "camo2"};
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead";
					armor		= 0; 
					passThrough	= 1; 
				};
			};
		};
	};