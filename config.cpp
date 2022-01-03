class CfgPatches
{
    class SVLN_GuidedResupply
    {
        name = "Guided Resupply";
        author = "Soyvolon";

        requiredAddons[] = { "A3_Functions_F" };
        units[] = {};
		weapons[] = {};
    };
};

class CfgFunctions
{
    class SVLN
    {
        tag = "SVLN";
        class SVLN_GuidedResupply
        {
            file = "SVLN_GuidedResupply\SVLN_scripts";
            class GURE_spawnResupply {
                file = "SVLN_GuidedResupply\SVLN_scripts\spawn_resupply.sqf";
            };
            class GURE_grplFired {
                file = "SVLN_GuidedResupply\SVLN_scripts\grpl_fired.sqf";
            };
        };
    };
};