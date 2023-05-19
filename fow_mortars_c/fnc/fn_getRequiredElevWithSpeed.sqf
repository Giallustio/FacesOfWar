_dist = _this select 0;
_v = _this select 1;

_g = 9.81;
	
_lowerAngle = 0.5 * asin (_g*_dist/(_v * _v));
_angle = 90 - _lowerAngle;
	
_angle