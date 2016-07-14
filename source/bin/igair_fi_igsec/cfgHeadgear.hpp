class igair_igsec_combatHelmet : ItemCore {
    _generalMacro = "igair_igsec_combatHelmet";
	displayName = "IGSEC Combat Helmet";
	picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
    model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas.p3d";
	scope = PUBLIC;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\igair_fi_igsec\data\igair_igsec_combatHelmet.paa"};
    class ItemInfo: HeadgearItem
    {
        mass = 40;
        uniformModel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas.p3d";
        modelSides[] = {TResistance};
        hiddenSelections[] = {"camo"};
        class HitpointsProtectionInfo
        {
            class Head
            {
                    hitPointName = "HitHead";
                    armor = 6;
                    passThrough = 0.5;
            };
        };
    };
};