
private ["_mortar","_mag","_weap","_AIgunner","_g","_u","_mode"];

_mortar = _this select 0;
_mag = _this select 1;
_weap = (weapons _mortar select 0);

if !(_mag in magazines player) exitWith {hint "No mags"};
player removeMagazine _mag;

_AIgunner = false;

if (_mortar emptyPositions "Gunner" > 0) then {
	_g = createGroup (side player);
	_u = _g createUnit [(typeOf player), [0,0,0], [], 0, "FORM"];
	_u disableAI "ALL";
	_u allowDamage false;
	_u hideObjectGlobal true;
	_u moveInGunner _mortar;
	_AIgunner = true;
	sleep 0.1;
};

_mode = currentWeaponMode gunner _mortar;

_mortar removeWeapon _weap;
_mortar addMagazine _mag;
_mortar addWeapon _weap;

sleep 0.75;

_mortar setWeaponReloadingTime [gunner _mortar, currentMuzzle (gunner _mortar), 0];
gunner _mortar forceWeaponFire [_weap,_mode];
_mortar fireAtTarget [objNull];

if (_AIgunner) then {sleep 0.5;deleteVehicle _u;deleteGroup _g;};
