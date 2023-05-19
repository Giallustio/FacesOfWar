
_static = _this select 0;
//_mag = _this select 1;
_hasAmmo = false;

_weapon = (weapons _static) select 0;
_listOfMags = getArray (configFile >> "CfgWeapons" >> _weapon >> "magazines");
{
	if (_x in magazines player) then {_hasAmmo = true;};
} foreach _listOfMags;

//if !(player isEqualTo gunner _mortar) exitWith {false};

//if (_mag in magazines player) then {_hasAmmo = true;};
if (count magazines _static > 0) then {_hasAmmo = false;};
_hasAmmo
