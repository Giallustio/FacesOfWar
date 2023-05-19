
_mortar = _this select 0;
_mag = _this select 1;
_hasAmmo = false;

//if !(player isEqualTo gunner _mortar) exitWith {false};

if (_mag in magazines player) then {_hasAmmo = true;};
if (count magazines _mortar > 0) then {_hasAmmo = false;};
_hasAmmo
