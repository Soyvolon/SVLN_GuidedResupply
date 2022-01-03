class CfgPatches
{
    class SVLN_GuidedResupply_Ammo
    {
        addonRootClass = "SVLN_GuidedResupply";
        requiredAddons[]={"A3_Weapons_F"};
    };
};

class CfgAmmo
{
    class Bo_GBU12_LGB;

    class SVLN_GuidedResupply_AmmoBase: Bo_GBU12_LGB
    {
        // Disable all damage - but keep effects.
        hit = 0;
        indirectHit = 0;
        explosive = 1;

        // Always whistle!
        whistleOnFire = 1;
        // Don't use?
        aiAmmoUsageFlags = 0;
    };

    class SVLN_GuidedResupply_AmmoResupplyAmmo: SVLN_GuidedResupply_AmmoBase
    {
        
    };

    class SVLN_GuidedResupply_MedicalResupplyAmmo: SVLN_GuidedResupply_AmmoBase
    {

    };
};