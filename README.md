# Guided Resupply
> A simple mod by Soyvolon

<a href="https://steamcommunity.com/sharedfiles/filedetails/?id=2705711252" target="_blank"><b>Steam Workshop Link</b></a>

<a href="https://youtu.be/G-F0zsfaByA" target="_blank">Showcase Video</a>

## Adding the Weapon Via Script
> Add the guided resupply launcher to any vehicle with a simple script.

Add the following to the `init` of any object in the eden editor. If you have the ability to do so from Zeus,
the following lines can also be added from a Zeus context menu provided via other mods.

```sqf
// Add the weapon to the vehicle.
this addWeaponGlobal "SVLN_GuidedResupply_Launcher";

// Add a single mag (2 rounds) of ammunition resupplies.
this addMagazineGlobal "SVLN_GuidedResupply_AmmoResupplyMagazine";

// Add a single mag (2 rounds) of medical resupplies.
this addMagazineGlobal "SVLN_GuidedResupply_MedicalResupplyMagazine";
```

## Changing the default supplies
> A per mission configuration that can be used to change what type of ammo box is spawned upon the impact of the supply bomb.

Place the following in your `init.sqf` file. If you don't have an `init.sqf` file, go into your mission file folder and create a new `init.sqf` file. It should be alongside your `mission.sqm`.

```sqf
// |-------------------------------------|
// | [SVLN] Guided Resupplies Start Init |
// |-------------------------------------|

// Change these values to change the type of resupply box that gets
// spawned when the guided resupply projectile lands.

if (isServer) then {
	// Ammunition Resupply
	SVLN_GuidedResupply_AmmoTypeVar = "Box_NATO_Ammo_F";
	// Medical Resupply
	SVLN_GuidedResupply_MedicalTypeVar = "Box_NATO_Support_F";

	publicVariable "SVLN_GuidedResupply_AmmoTypeVar";
	publicVariable "SVLN_GuidedResupply_MedicalTypeVar";
};

// |-----------------------------------|
// | [SVLN] Guided Resupplies End Init |
// |-----------------------------------|
```

*Note: excluding this file from your mission will cause the munitions to spawn `Box_NATO_Ammo_F` for ammo resupplies and `Box_NATO_Support_F` for medical resupplies.*

## Config References

The following are the classnames defined by this mod. The weapon itself is the object that runs the custom scripting for this mod. If you use a different weapon type, please make sure to trigger an event handler when the weapon is fired and call `_this remoteExce ['SVLN_fnc_GURE_grplFired', 2];`.

### Ammo

**CfgPatches:** `SVLN_GuidedResupply >> SVLN_GuidedResupply_Ammo`

```cpp
// The base ammo class for resupplies. Modifies the GBU12 values to
// deal no damage.
class SVLN_GuidedResupply_AmmoBase: Bo_GBU12_LGB { /*...*/ };

// Ammunition Resupply ammo - indicates an ammo resupply should be spawned.
class SVLN_GuidedResupply_AmmoResupplyAmmo: SVLN_GuidedResupply_AmmoBase { /*...*/ };

// Medical Resupply ammo - indicates a medical resupply should be spawned.
class SVLN_GuidedResupply_MedicalResupplyAmmo: SVLN_GuidedResupply_AmmoBase { /*...*/ };
```

### Magazines

**CfgPatches:** `SVLN_GuidedResupply >> SVLN_GuidedResupply_Magazines`

```cpp
// Ammo Resupply Magazine
class SVLN_GuidedResupply_AmmoResupplyMagazine: 2Rnd_GBU12_LGB { /*...*/ };

// Medical Resupply Magazine
class SVLN_GuidedResupply_MedicalResupplyMagazine: 2Rnd_GBU12_LGB { /* ... */ };
```

### Weapons

**CfgPatches:** `SVLN_GuidedResupply >> SVLN_GuidedResupply_Weapons`

```cpp
// Guided Resupply Launcher. Executes an even when fired that handles
// tracking of the bomb and spawning the correct resupply box when it lands.
class SVLN_GuidedResupply_Launcher: GBU12BombLauncher { /*...*/ };
```