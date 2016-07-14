class igair_igsec_combatBase : B_Soldier_base_F {
	side = RESISTANCE;
	faction = "igair_igsec";
	vehicleclass = "igair_igsec_Men";
	model = "\A3\characters_f\BLUFOR\b_soldier_01.p3d";
	author = "Cody Burton";
	_generalMacro = "igair_igsec_combatBase";
	scope = PUBLIC;
	displayName = "Rifleman (Unarmed)";
	weapons[] = {};
	respawnWeapons[] = {};
	magazines[] = {};
	respawnMagazines[] = {};
	linkedItems[] = { "igair_igsec_combatHelmet",
		"igair_igsec_CombatVest",
		"G_Tactical_Black",
		"ItemMap","ItemCompass","ItemWatch","ItemRadio" };
	respawnLinkedItems[] = {};
	uniformClass = "igair_igsec_CombatFatigues";
	camouflage = 2.0;
	hiddenSelections[] = { "camo" };
	HiddenSelectionsTextures[] = { "\igair_fi_igsec\data\igair_igsec_CombatFatigues.paa" };
	icon = "iconMan"
};

/* for a later update (v0.1.1)
class igair_igsec_rifleman : igair_igsec_combatBase {
	_generalMacro = "igair_igsec_rifleman";
	displayName = "Rifleman";
	weapons[] = {"arifle_Katiba_F","hgun_Rook40_F","Throw","Put"};
	magazines[] = { 
		mag_8(30Rnd_65x39_caseless_green),
		mag_2(16Rnd_9x21_Mag)
	};
};
*/