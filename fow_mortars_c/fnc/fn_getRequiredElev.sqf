_dist = _this select 0;
_weap = _this select 1;
_mag = _this select 2;

_maxspeed = getnumber (configfile >> "CfgMagazines" >> _mag >> "initSpeed");
_maxspeedoperator = getnumber (configfile >> "CfgWeapons" >> _weap >> (currentweaponmode (player)) >> "artillerycharge");
_muzzlespeed = _maxspeed * _maxspeedoperator;
	
_v = _muzzlespeed;
_g = 9.81;
	
_lowerAngle = 0.5 * asin (_g*_dist/(_v * _v));
_angle = 90 - _lowerAngle;
	
_angle