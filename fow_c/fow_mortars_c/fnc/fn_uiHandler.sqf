
disableSerialization;

private ["_charges","_elev","_dir"];

_charges = ((uiNamespace getVariable "fow_dlg_RscWeaponRangeArtillery") displayCtrl 17771);
_elev = ((uiNamespace getVariable "fow_dlg_RscWeaponRangeArtillery") displayCtrl 17772);
_dir = ((uiNamespace getVariable "fow_dlg_RscWeaponRangeArtillery") displayCtrl 17773);

while {Alive player && player isEqualTo gunner vehicle player} do {
	_charges ctrlSetText (gettext (configfile >> "CfgWeapons" >> (currentweapon vehicle player) >> (currentweaponmode (player)) >> "displayName"));
	_elev ctrlSetText format ["Elev: %1",[(vehicle player) weaponDirection (currentWeapon (vehicle player))] call fow_mortars_fnc_getElevation];
	_dir ctrlSetText format ["Dir: %1",getDir player];
	sleep 0.02;
};