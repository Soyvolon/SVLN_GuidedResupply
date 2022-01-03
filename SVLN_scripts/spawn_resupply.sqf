params ["_pos", "_resupply_type", "_default_object"];
// _event = params ["_object1", "_object2", "_selection1", "_selection2", "_force"];

diag_log text (["[SVLN]", "[Guided Resupply]", "TRACE:", "Starting spawn resupply event:", _this] joinString " ");

// Get the impact position.
// private _pos = getPos (_event select 0);

// See if there was any customization to the
// resupply box to spawn
private _box = missionNamespace getVariable [_resupply_type, _default_object];

// Spawn our resupply box.
createVehicle [_box, _pos];

diag_log text (["[SVLN]", "[Guided Resupply]", "DEBUG:", "Spawned resupply box of type", _box, "at", _pos] joinString " ");