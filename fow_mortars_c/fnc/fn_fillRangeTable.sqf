
_LB = ((uiNamespace getVariable "fow_dlg_rangeTable") displayCtrl 7772);
_table = ((uiNamespace getVariable "fow_dlg_rangeTable") displayCtrl 7771);

_lookFor = _LB lbData (lbCurSel _LB);

_data = [_lookFor] call fow_mortars_fnc_getRangeTableData;

lnbClear _table;
{
    _table lnbAddRow _x;
} forEach _data;

_table lnbAddRow ["", "", ""];