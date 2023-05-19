_mortar = _this select 0;
_distPerRow = _this select 1;
_typeOf = typeOf _mortar;
	
_g = 9.81;
	
_weaponName = (getArray (configFile >> "CfgVehicles" >> _typeOf >> "Turrets" >> "MainTurret" >> "weapons")) select 0;
_initElev = [_mortar weaponDirection _weaponName] call fow_mortars_fnc_getElevation;
_maxElev = _initElev + (getnumber (configFile >> "CfgVehicles" >> _typeOf >> "Turrets" >> "MainTurret" >> "maxElev"));
_minElev = _initElev + (getnumber (configFile >> "CfgVehicles" >> _typeOf >> "Turrets" >> "MainTurret" >> "minElev"));
	
_tables = [];
	
_mag = (getArray (configFile >> "CfgWeapons" >> _weaponName >> "magazines")) select 0;
_maxspeed = getnumber (configfile >> "CfgMagazines" >> _mag >> "initSpeed");

_fireModes = getArray (configFile >> "CfgWeapons" >> _weaponName >> "modes");

_muzzleVelocities = [];
{
	_showToPlayer = getNumber (configFile >> "CfgWeapons" >> _weaponName >> _x >> "showToPlayer");
	if (_showToPlayer == 1) then {
		_muzzleVelocities pushBack _x;
	};
} forEach _fireModes;
	
diag_log format ["Tables of %1",_typeOf];
diag_log format ["Init elev %1",_initElev];
diag_log format ["Max elev %1",_maxElev];
diag_log format ["Min elev %1",_minElev];
diag_log format ["Charges %1",_muzzleVelocities];
	
{
	_speed = (getNumber (configFile >> "CfgWeapons" >> _weaponName >> _x >> "artilleryCharge")) * _maxspeed;
	_displayName = getText (configFile >> "CfgWeapons" >> _weaponName >> _x >> "displayName");
	_tables pushBack (_weaponName + _displayName);		
	_table = [];
	
	_minRange = (_speed * _speed * sin (2 * _maxElev))/ _g;
	_minRange = (round(_minRange/10)) * 10;
	_maxRange = (_speed * _speed * sin (2 * _minElev))/ _g;
	if (_minElev < 45) then {_maxRange = (_speed * _speed * sin (2 * 45))/ _g};
	
	diag_log format ["Table %1",_speed];
	diag_log format ["Table %1 - min range: %2",_speed,_minRange];
	diag_log format ["Table %1 - max range: %2",_speed,_maxRange];		
	
	for [{_i = _minRange}, {_i < _maxRange}, {_i = _i + _distPerRow}] do {
		_elev = [_i,_speed] call fow_mortars_fnc_getRequiredElevWithSpeed;
		_table pushBack [_i,_elev,_speed];
		diag_log format ["Table %1 - Solution: %2",_speed,[_i,_elev,_speed]];
	};
	_tables pushBack _table;
} foreach _muzzleVelocities;
systemChat "Tables compiled";
copyToClipboard str(_tables);