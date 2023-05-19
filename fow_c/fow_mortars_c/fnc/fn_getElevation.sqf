	
private ["_vec", "_azi", "_elev", "_x", "_y", "_z"];

_vec = _this select 0;
_x = _vec select 0;
_y = _vec select 1;
_z = _vec select 2;

_azi = _x atan2 _y;
if (_azi < 0) then {_azi = _azi + 360;};
_elev = _z atan2 sqrt(_x^2 + _y^2);

_elev