//-----------------------------------------------------------------------
// This script is built upon the "ladder attached to ship" script by Gnat
//-----------------------------------------------------------------------

	private ["_ship"];


	_ship = _this select 0;
	//_ship addAction ["drop/hoist anchor", "\wx_attacktransport\scripts\DIH_cv_anchor.sqf",[_ship,1.660],5,false,true];


//---precompilation of all needed functions
/*
if (isNil "DIH_cv_fnc_ship_sinking") THEN {
	DIH_cv_fnc_anchor = 		compile preprocessFileLineNumbers "\wx_attacktransport\scripts\DIH_cv_anchor.sqf";
	DIH_cv_fnc_diag_hMenu_cpt = 	compile preprocessFileLineNumbers "\wx_attacktransport\scripts\DIH_cv_diag_hMenu_cpt.sqf";
	DIH_cv_fnc_diag_hMenu_rep = 	compile preprocessFileLineNumbers "\wx_attacktransport\scripts\DIH_cv_diag_hMenu_rep.sqf";
	DIH_cv_fnc_diag_hMenu_ref = 	compile preprocessFileLineNumbers "\wx_attacktransport\scripts\DIH_cv_diag_hMenu_ref.sqf";
	DIH_cv_fnc_diag_hMenu_init = 	compile preprocessFileLineNumbers "\wx_attacktransport\scripts\DIH_cv_diag_hMenu_init.sqf";

	DIH_cv_fnc_diag_hMenu_svt = 	compile preprocessFileLineNumbers "\wx_attacktransport\scripts\DIH_cv_diag_hMenu_svt.sqf";
	DIH_cv_fnc_diag_hMenu_open = 	compile preprocessFileLineNumbers "\wx_attacktransport\scripts\DIH_cv_diag_hMenu_open.sqf";
	DIH_cv_fnc_ship_sinking = 	compile preprocessFileLineNumbers "\wx_attacktransport\scripts\DIH_cv_ship_sinking.sqf";
};
*/

	if (!isServer) exitWith {};


	sleep 0.10;	//was 0.05

	_Attacktransport_bow = "fow_v_m_attacktransport_bow" createvehicle[0,0,0];
	_Attacktransport_bow attachto [_ship,[0,0,0],"_bow"];

	_Attacktransport_stern = "fow_v_m_attacktransport_stern" createvehicle[0,0,0];
	_Attacktransport_stern attachto [_ship,[0,0,0],"_stern"];

	_Portside_Netting = "fow_v_m_portside_netting" createvehicle[0,0,0];
	_Portside_Netting attachto [_ship,[0,0,0],"Portside_netting"];

	_Starboard_Netting = "fow_v_m_starboard_netting" createvehicle[0,0,0];
	_Starboard_Netting attachto [_ship,[0,0,0],"Starboard_Netting"];
/*
	sleep 1;

	[_ship,0,0,[0,1.660]] execVM "\wx_attacktransport\scripts\DIH_cv_anchor.sqf";


_cSide = west; _cManType = "wx_us_coxswain";
_cGroup = createGroup _cSide;


switch (_this select 1) do {
	case ("IJN"): {
		_cSide = east; _cManType = "WX_IJA_rifleman";
	};
	case ("USN"): {
		_cSide = west; _cManType = "wx_us_coxswain";
	};
};



if (side _ship == civilian) THEN {_cGroup = createGroup _cSide;} ELSE {_cSide = side _ship; _cGroup = createGroup _cSide;};
_ship setVariable ["DIH_cv_group",_cGroup,true];


//create weapons & crew according to 3rd parameter

//hint str(_this);
*/


//NOT ACTIVE ATM

/*
sleep 0.25;

switch (_this select 2) do {
	case (0): {
		//just do nothing - this is the unarmed atn
	};
	case (1): {

	_NavalGun_Bow = "wx_us_navalgun" createvehicle[0,0,0];
	_NavalGun_Bow attachto [_ship,[0,0,0],"NavalGun_Bow"];

	_NavalGun_Stern = "WX_us_NavalGun_aft" createvehicle[0,0,0];
	_NavalGun_Stern attachto [_ship,[0,0,0],"NavalGun_Stern"];

	_Bofors_Twin_Portside_01 = "wx_us_bofors_twin_portside" createvehicle[0,0,0];
	_Bofors_Twin_Portside_01 attachto [_ship,[0,0,0],"Bofors_Twin_Portside_01"];

	_Bofors_Twin_Portside_02 = "wx_us_bofors_twin_portside" createvehicle[0,0,0];
	_Bofors_Twin_Portside_02 attachto [_ship,[0,0,0],"Bofors_Twin_Portside_02"];

	_Bofors_Twin_Portside_03 = "wx_us_bofors_twin_portside" createvehicle[0,0,0];
	_Bofors_Twin_Portside_03 attachto [_ship,[0,0,0],"Bofors_Twin_Portside_03"];

	_Bofors_Twin_Portside_04 = "wx_us_bofors_twin_portside" createvehicle[0,0,0];
	_Bofors_Twin_Portside_04 attachto [_ship,[0,0,0],"Bofors_Twin_Portside_04"];

	_Bofors_Twin_Portside_05 = "wx_us_bofors_twin_portside" createvehicle[0,0,0];
	_Bofors_Twin_Portside_05 attachto [_ship,[0,0,0],"Bofors_Twin_Portside_05"];

	_Bofors_Twin_Starboard_01 = "wx_us_bofors_twin_starboard" createvehicle[0,0,0];
	_Bofors_Twin_Starboard_01 attachto [_ship,[0,0,0],"Bofors_Twin_Starboard_01"];

	_Bofors_Twin_Starboard_02 = "wx_us_bofors_twin_starboard" createvehicle[0,0,0];
	_Bofors_Twin_Starboard_02 attachto [_ship,[0,0,0],"Bofors_Twin_Starboard_02"];

	_Bofors_Twin_Starboard_03 = "wx_us_bofors_twin_starboard" createvehicle[0,0,0];
	_Bofors_Twin_Starboard_03 attachto [_ship,[0,0,0],"Bofors_Twin_Starboard_03"];

	_Bofors_Twin_Starboard_04 = "wx_us_bofors_twin_starboard" createvehicle[0,0,0];
	_Bofors_Twin_Starboard_04 attachto [_ship,[0,0,0],"Bofors_Twin_Starboard_04"];

	_Bofors_Twin_Starboard_05 = "wx_us_bofors_twin_starboard" createvehicle[0,0,0];
	_Bofors_Twin_Starboard_05 attachto [_ship,[0,0,0],"Bofors_Twin_Starboard_05"];

	_Bofors_Quad_Portside_01 = "wx_us_bofors_twin_portside" createvehicle[0,0,0];
	_Bofors_Quad_Portside_01 attachto [_ship,[0,0,0],"Bofors_Quad_Portside_01"];

	_Bofors_Quad_Starboard_01 = "wx_us_bofors_twin_starboard" createvehicle[0,0,0];
	_Bofors_Quad_Starboard_01 attachto [_ship,[0,0,0],"Bofors_Quad_Starboard_01"];


		{
			_crewMan = _cGroup createUnit [_cManType, [0,0,50+(2*_forEachIndex)], [], 0, "FORM"];	//50+(2*_forEachIndex)

			_crewMan moveInGunner _x;
		} forEach [_NavalGun_Bow,_NavalGun_Stern,_Bofors_Twin_Portside_01,_Bofors_Twin_Portside_02,_Bofors_Twin_Portside_03,_Bofors_Twin_Portside_04,_Bofors_Twin_Portside_05,_Bofors_Twin_Starboard_01,_Bofors_Twin_Starboard_02,_Bofors_Twin_Starboard_03,_Bofors_Twin_Starboard_04,_Bofors_Twin_Starboard_05,_Bofors_Quad_Portside_01,_Bofors_Quad_Starboard_01];
	};
};

*/