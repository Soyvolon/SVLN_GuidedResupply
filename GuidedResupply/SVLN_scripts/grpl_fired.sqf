params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];

diag_log text (["[SVLN]", "[Guided Resupply]", "TRACE:", "Fired GRPL Event Dump:", 
	"Unit:", _unit, 
	"Weapon:", _weapon, 
	"Muzzle:", _muzzle,
	"Mode:", _mode,
	"Ammo:", _ammo,
	"Magazine:", _magazine,
	"Projectile:", _projectile,
	"Gunner:", _gunner] joinString " ");

private _pos = [0, 0, 0];
waitUntil {
	if (isNull _projectile) exitWith { true };
	_pos = getPos _projectile;
	false;
};

if (_magazine == "SVLN_GuidedResupply_AmmoResupplyMagazine") then {
	[_pos, 'SVLN_GuidedResupply_AmmoTypeVar', 'Box_NATO_Ammo_F'] remoteExec ['SVLN_fnc_GURE_spawnResupply', 2];
} else {
	if(_magazine == "SVLN_GuidedResupply_MedicalResupplyMagazine") then {
		[_pos, 'SVLN_GuidedResupply_MedicalTypeVar', 'Box_NATO_Support_F'] remoteExec ['SVLN_fnc_GURE_spawnResupply', 2];
	};

	diag_log text (["[SVLN]", "[Guided Resupply]", "WARN:", "Unkown magazine type fired."] joinString " ");
};