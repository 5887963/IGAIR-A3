/*
	IGAIR-A3 | IG Security Force
	https://github.com/CodyBurton/IGAIR-A3
	--------------------------------
	This work is licensed under the GNU GENERAL PUBLIC LICENSE.
	To view a copy of this license, visit http://www.gnu.org/licenses/gpl-3.0.en.html.
*/

#include "\igair_init\GlobalMacros.hpp"
#include "\igair_fi_igsec\LocalMacros.hpp"

class cfgPatches {
	class igair_fi_igsec {
		units[] = {"igair_igsec_base"/*,"igair_igsec_rifleman"*/};
		weapons[] = {};
		requiredVersion = REQUIREDARMAVERSION;
		requiredAddons[] = {};
		author[] = {"Cody Burton"};
		authorUrl = "https://github.com/CodyBurton";
	};
};

class cfgFactionClasses {
	class igair_igsec {
		displayName = "IG Security Forces";
		priority = 1;
		side = RESISTANCE;
		icon = "\igair_fi_igsec\data\cfgfactionclasses_wcf_ca.paa";
	};
};

class cfgVehicleClasses {
	#include "cfgVehicleClasses.hpp"
};

class cfgVehicles {
	class B_Soldier_base_F;
	#include "cfgInfantry.hpp"
};

class cfgWeapons {
	class Uniform_Base;
	class UniformItem;
	class U_B_CombatUniform_mcam;
	class VestItem;
	class V_PlateCarrierSpec_blk;
	class ItemCore;
	class HeadgearItem;
	#include "cfgUniforms.hpp"
	#include "cfgVests.hpp"
	#include "cfgHeadgear.hpp"
};

class cfgGroups {
	#include "cfgGroups.hpp"
};

class cfgWorlds {
	#include "cfgNames.hpp"
};