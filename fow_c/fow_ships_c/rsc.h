class RscShortcutButton;
class RscPicture;
class RscText;
class RscListBox;
class DIH_cv_diag_elev {
	idd = 498200;
	movingEnable = 0;
	class controlsBackground { 
		// define controls here
	};
	class objects { 
		// define controls here
	};
	onLoad="uiNamespace setVariable ['DIH_cv_diag_elev', _this select 0]; [] spawn DIH_cv_fnc_diag_elev_init;";
	class controls { 
		// define controls here

		class Background1: RscPicture {
			idc = 1;
			x = 0.185;
			y = 0.17;
			w = 1.2549;
			h = 0.836601;
			text = "\ca\ui\data\ui_difficulty_background_ca.paa";
		};

		class Background2: RscPicture {
			idc = 2;
			x = 0.25;
			y = 0.25;
			w = 0.5;
			h = 0.05;
			colorBackground[] = { 0, 0, 0, 1 };
		};

		class Title1: RscText {
			idc = 3;
			text = "Elevator Menu";
			x = 0.2;
			y = 0.195;
			w = 0.30;
			h = 0.05;
			colorText[] = { 1, 1, 1, 1 };
		};

		class DeckPlane1: RscText {
			idc = 4;
			text = "Plane on Elevator: Zero";
			x = 0.225;
			y = 0.275;
			w = 0.35;
			h = 0.05;
			sizeEx = 0.028;
		};

		class PiHtitle1: RscText {
			idc = 5;
			text = "Planes in Hangar:";
			x = 0.225;
			y = 0.35;
			w = 0.35;
			h = 0.05;
		};

		class LBinHangar1: RscListBox {
			idc = 6;
			x = 0.25;
			y = 0.4;
			w = 0.6;
			h = 0.4;
			sizeEx = 0.0275;
		};

		class BtnClose1: RscShortcutButton {
			idc = 7;
			x = 0.2; y = 0.775;
			text = "Close";
			action = "closeDialog 0;";
		};

		class BtnConfirm1: RscShortcutButton {
			idc = 8;
			x = 0.7;
			y = 0.775;
			text = "Confirm";
			action = "[DIH_cv_diag_elev_cv,lbData[6,(lbCurSel 6)]] call DIH_cv_fnc_diag_elev_sPfH; closeDialog 0;";
		};

		class BtnToHangar1: RscShortcutButton {
			idc = 9;
			x = 0.7;
			y = 0.25;
			text = "to hangar";
			action = "[] call DIH_cv_fnc_diag_elev_pPiH; closeDialog 0;";
		};
	};
};
class DIH_cv_diag_hMenu {
	idd = 498301;
	movingEnable = 0;
	class controlsBackground { 
		// define controls here
	};
	class objects { 
		// define controls here
	};
	onLoad="uiNamespace setVariable ['DIH_cv_diag_hMenu', _this select 0]; [] spawn DIH_cv_fnc_diag_hMenu_init;";
	class controls { 
		// define controls here

		class Background1: RscPicture {
			idc = 1;
			x = 0.185;
			y = 0.17;
			w = 1.2549;
			h = 0.836601;
			text = "\ca\ui\data\ui_difficulty_background_ca.paa";
		};

		class Background2: RscPicture {
			idc = 2;
			x = 0.25;
			y = 0.25;
			w = 0.5;
			h = 0.05;
			colorBackground[] = { 0, 0, 0, 1 };
		};

		class Title1: RscText {
			idc = 3;
			text = "Harbour Menu";
			x = 0.2;
			y = 0.195;
			w = 0.30;
			h = 0.05;
			colorText[] = { 1, 1, 1, 1 };
		};
/*
		class DeckPlane1: RscText {
			idc = 4;
			text = "Plane on Elevator: Zero";
			x = 0.225;
			y = 0.275;
			w = 0.35;
			h = 0.05;
			sizeEx = 0.028;
		};

		class PiHtitle1: RscText {
			idc = 5;
			text = "Planes in Hangar:";
			x = 0.225;
			y = 0.35;
			w = 0.35;
			h = 0.05;
		};

		class LBinHangar1: RscListBox {
			idc = 6;
			x = 0.25;
			y = 0.4;
			w = 0.6;
			h = 0.4;
			sizeEx = 0.0275;
		};
*/
		class BtnClose1: RscShortcutButton {
			idc = 7;
			x = 0.2; y = 0.775;
			text = "Close";
			action = "closeDialog 0;";
		};

		class BtnRefuel1: RscShortcutButton {
			idc = 8;
			x = 0.225;
			y = 0.275;
			w = 0.36;
			text = "Refuel/Rearm";
			action = "[] spawn DIH_cv_fnc_diag_hMenu_ref;";
		};

		class BtnRepair1: RscShortcutButton {
			idc = 9;
			x = 0.225;
			y = 0.325;
			w = 0.36;
			text = "Repair";
			action = "[] spawn DIH_cv_fnc_diag_hMenu_rep;";
		};

		class BtncpTransfer1: RscShortcutButton {
			idc = 10;
			x = 0.225;
			y = 0.375;
			w = 0.36;
			text = "Carrier Plane Transfer";
			action = "[] spawn DIH_cv_fnc_diag_hMenu_cpt;";
		};
	};
};