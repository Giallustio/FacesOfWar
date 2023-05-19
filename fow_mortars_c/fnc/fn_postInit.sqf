
if !(isClass(configFile >> "cfgPatches" >> "ace_main")) then {
	player call fow_mortars_fnc_addActions;
	player addEventHandler ["Respawn",{player call fow_mortars_fnc_addActions}];
};