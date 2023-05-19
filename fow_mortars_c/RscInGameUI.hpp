class RscInGameUI {
    class RscWeaponRangeArtillery {
        class CA_IGUI_elements_group: RscControlsGroup {};
        class CA_RangeElements_group: RscControlsGroup {};
    };
    class fow_mortar_RscWeaponRangeArtillery: RscWeaponRangeArtillery {
        onLoad = "uiNamespace setVariable ['fow_dlg_RscWeaponRangeArtillery', _this select 0];[] spawn fow_mortars_fnc_uiHandler";
		controls[] = {"fow_charges", "fow_elev","fow_dir", "CA_IGUI_elements_group","CA_RangeElements_group"};
        class CA_IGUI_elements_group: RscControlsGroup {class controls {};};
        class CA_RangeElements_group: RscControlsGroup {class controls {};};
		class fow_charges: RscText {
            idc = 17771;
            style = 2;
            colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "Charge 1";
			x = 0.891875 * safezoneW + safezoneX;
			y = 0.071 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])","(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])","(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"};
        };
        class fow_elev: RscText {
            idc = 17772;
            style = 2;
            colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "Elev: 90";		
			x = 0.891875 * safezoneW + safezoneX;
			y = 0.104 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
        };
        class fow_dir: RscText {
            idc = 17773;
            style = 2;
            colorText[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
			sizeEx = "0.8 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
            shadow = 0;
            font = "EtelkaMonospacePro";
            text = "Dir: 90";		
			x = 0.891875 * safezoneW + safezoneX;
			y = 0.137 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
        };
    };
};
