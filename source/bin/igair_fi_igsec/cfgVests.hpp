class igair_igsec_combatVest : V_PlateCarrierSpec_blk {
	_generalmacro = "igair_igsec_combatVest";
	displayName = "IGSEC Combat Vest";
	hiddenSelections[] = { "camo" };
	hiddenSelectionsTextures[] = { "\igair_fi_igsec\data\igair_igsec_combatVest.paa" };
	model = "\A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
	picture = "\a3\characters_f\data\ui\icon_v_harnesso_brn_ca.paa";
	scope = PUBLIC;
	class ItemInfo : VestItem {
		uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01.p3d";
		hiddenSelections[] = { "camo" };
		containerClass = "Supply140";
		mass = 30;
		armor = 0;
		passThrough = 0.5;
		explosionShielding = 0.2;
	};
};