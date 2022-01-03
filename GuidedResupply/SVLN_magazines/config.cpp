class CfgPatches
{
    class SVLN_GuidedResupply_Magazines
    {
        addonRootClass = "SVLN_GuidedResupply";
        requiredAddons[]={"A3_Weapons_F"};
    };
};

class CfgMagazines
{
    class 2Rnd_GBU12_LGB;

    class SVLN_GuidedResupply_AmmoResupplyMagazine: 2Rnd_GBU12_LGB
    {
        ammo = "SVLN_GuidedResupply_AmmoResupplyAmmo";
        displayNameMFDFormat = "GRP-MED";
        displayName = "GRP-AMU";
        descriptionShort = "Guided Resupply Pod - Ammunition";
    };

    class SVLN_GuidedResupply_MedicalResupplyMagazine: 2Rnd_GBU12_LGB
    {
        ammo = "SVLN_GuidedResupply_MedicalResupplyAmmo";
        displayNameMFDFormat = "GRP-MED";
        displayName = "GRP-MED";
        descriptionShort = "Guided Resupply Pod - Medical";
    };
};