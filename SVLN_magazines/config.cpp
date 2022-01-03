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
        author = "Soyvolon";
        ammo = "SVLN_GuidedResupply_AmmoResupplyAmmo";
        displayName = "GRP-AMMO";
        displayNameShort = "AMMO";
        descriptionShort = "Guided Resupply Pod - Ammunition";
    };

    class SVLN_GuidedResupply_MedicalResupplyMagazine: 2Rnd_GBU12_LGB
    {
        author = "Soyvolon";
        ammo = "SVLN_GuidedResupply_MedicalResupplyAmmo";
        displayName = "GRP-MED";
        displayNameShort = "MED";
        descriptionShort = "Guided Resupply Pod - Medical";
    };
};