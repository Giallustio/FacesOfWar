_calc = {
	_elev = [(vehicle player) weaponDirection (currentWeapon (vehicle player))] call fow_mortars_fnc_getElevation;
	
	_maxspeed = getnumber (configfile >> "CfgMagazines" >> currentmagazine vehicle player >> "initSpeed");
	_maxspeedoperator = getnumber (configfile >> "CfgWeapons" >> (currentweapon vehicle player) >> (currentweaponmode (player)) >> "artillerycharge");
	_muzzlespeed = _maxspeed * _maxspeedoperator;

	_v = _muzzlespeed;
	_g = 9.81;
	
	_dist = ( _v * _v * sin (2 * _elev))/ _g;
	
	[getDir player, _elev, _dist]	
	
};
	
vehicle player addEventHandler ["Fired",{_this spawn {
	_dist = 0;_ammo = _this select 6;while {!isNull _ammo} do {if (_ammo distance2D player > _dist) then {_dist = _ammo distance2D player}};systemChat str(_dist) ;
}}];
fow_mortars_stopTest = false;
while {!(fow_mortars_stopTest)} do {
	_return = [] call _calc;
	_angle = [(_return select 2),(currentweapon vehicle player),(currentmagazine vehicle player)] call fow_mortars_fnc_getRequiredElev;
	hint parseText format ["Dir: %1 <br />Elev: %2 <br />Dist: %3 <br />Angle: %4", (_return select 0),(_return select 1),(_return select 2),_angle];
	sleep 0.5;
};