class CfgPatches
{
    class SVLN_GuidedResupply_Weapons
    {
        addonRootClass = "SVLN_GuidedResupply";
        requiredAddons[]={"A3_Weapons_F"};

        weapons[] = {
            "SVLN_GuidedResupply_Launcher"
        };
    };
};

class CfgWeapons
{
    class GBU12BombLauncher;

    class SVLN_GuidedResupply_Launcher: GBU12BombLauncher
    {
        displayName = "GRP-L";
        descriptionShort = "Guided Resupply Pod Launcher";

        magazines[]={
            "SVLN_GuidedResupply_AmmoResupplyMagazine", 
            "SVLN_GuidedResupply_MedicalResupplyMagazine"
        };

        class EventHandlers
        {
            fired = "_this remoteExec ['SVLN_fnc_GURE_grplFired', 2];";
        };
    };
};