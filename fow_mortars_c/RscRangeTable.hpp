class fow_dlg_rangeTable {
    idd = -1;
    movingEnable = 1;
    onLoad = "uiNamespace setVariable ['fow_dlg_rangeTable', _this select 0];";
    objects[] = {};

    class ControlsBackground {
        class TableBackground: RscPicture {
            idc = -1;
            text = "\fow\fow_mortars_c\ui\RangeTableBackground.paa";
			x = 0.809375 * safezoneW + safezoneX;
			y = 0.402 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.583 * safezoneH;
            colorBackground[] = {0,0,0,1};
        };
    };
    class controls {
        class table: RscListNBox {
            idc = 7771;
			x = 0.818759 * safezoneW + safezoneX;
			y = 0.49824 * safezoneH + safezoneY;
			w = 0.165 * safezoneW;
			h = 0.495 * safezoneH;
            columns[] = {0.05,0.4,0.8};
            rowHeight = 0.017 * safeZoneH;
            sizeEx = "0.018 * safeZoneH";
            font = "RobotoCondensed";
            drawSideArrows = 1;
            colorText[] = {0, 0, 0, 1};
            shadow = "0";
            colorSelectBackground[] = {1, 1, 1, 0};
            colorSelectBackground2[] = {1, 1, 1, 0};
            colorScrollbar[] = {0.95,0,0.95,1};
            class ListScrollBar: ScrollBar{
                color[] = {0,0,0,0.6};
            };
        };
		class chargesList: RscCombo {
            idc = 7772;
			x = 0.9125 * safezoneW + safezoneX;
			y = 0.4252 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;	
            onLBSelChanged = "[] call fow_mortars_fnc_fillRangeTable";
        };
		class nameOfTable: RscText {
            idc = 7773;
			x = 0.819688 * safezoneW + safezoneX;
			y = 0.402 * safezoneH + safezoneY;
			w = 0.180469 * safezoneW;
			h = 0.055 * safezoneH;
			text = "Range Table";
            colorText[] = {0, 0, 0, 1};
			shadow = 0;
        };
    };
};
