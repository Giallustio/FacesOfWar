
_weaponName = _this select 0;

disableSerialization;

createDialog "fow_dlg_rangeTable";

_LB = ((uiNamespace getVariable "fow_dlg_rangeTable") displayCtrl 7772);
ctrlSetText [7773, (getText (configFile >> "CfgWeapons" >> _weaponName >> "displayName"))];

_allFireModes = getArray (configFile >> "CfgWeapons" >> _weaponName >> "modes");

{
	private "_showToPlayer";
	_showToPlayer = getNumber (configFile >> "CfgWeapons" >> _weaponName >> _x >> "showToPlayer");
	if (_showToPlayer isEqualTo 1) then {
		_displayName = getText (configFile >> "CfgWeapons" >> _weaponName >> _x >> "displayName");
		_index = _LB lbAdd _displayName;
		_LB lbSetData [_index, (_weaponName + _displayName)];
	};
	_LB lbSetCurSel 0;
} forEach _allFireModes;