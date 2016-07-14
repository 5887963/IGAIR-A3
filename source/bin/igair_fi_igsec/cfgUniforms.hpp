class igair_igsec_CombatFatigues : U_B_CombatUniform_mcam {
	_generalMacro = "igair_igsec_CombatFatigues";
	displayName = "IGSEC Combat Fatigues";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	picture = "\A3\characters_f_beta\data\ui\icon_u_ir_combatuniform_rucamo_ca.paa";
	scope = PUBLIC;
	class ItemInfo : UniformItem
	{
		uniformModel = "-";
		uniformClass = "igair_igsec_combatBase";
		containerClass = "Supply40";
		mass = 40;
	};
};