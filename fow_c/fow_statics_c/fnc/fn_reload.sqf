
private ["_static","_weapon","_listOfCompatibleMags","_mags","_mag"];

_static = _this select 0;
//_mag = _this select 1;
_weapon = (weapons _static select 0);

_listOfCompatibleMags = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
_mags = [];

{
	if (_x in magazines player) then {_mags pushback _x;};
} foreach _listOfCompatibleMags;

_mag = _mags select 0;
if !(_mag in magazines player) exitWith {hint "No mags"};
player removeMagazine _mag;
_static addMagazine _mag;


/*
_mode = currentWeaponMode gunner _mortar;

_mortar removeWeapon _weap;
_mortar addMagazine _mag;
_mortar addWeapon _weap;

*/