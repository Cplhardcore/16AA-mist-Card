#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class 4Rifles
	{
		name="4 Rifles Milsim Config Edits";
		units[]=
		{
			"4R_Warrior",
			"4R_Challenger",
			"4R_CET",
			"4R_FV432_MC",
			"4R_FV432_Log",
			"4R_FV432_Amb",
			"4R_Scimitar",
			"4R_FV513",
			"4R_FV511",
			"4R_Wolfhound",
			"4R_AFM_RifleLizard"
		};
		weapons[]=
		{
			"4R_MK50",
			"4R_Bayonet_Melee",
			"4R_GSP2",
			"4R_Throw_L109",
			"4R_Bayonet",
			"CR2_L30A1",
			"4R_L111A1",
			"4R_RARDEN",
			"4R_Beret_Parade",
			"4R_Beret_REME",
			"4R_Beret_ICorp",
			"4R_Beret_RAMC",
			"4R_Beret_RTR",
			"4R_Beret_Patrol",
			"4R_Beret_Patrol_REME",
			"4R_Beret_Patrol_RAMC",
			"4R_Boonie_Patrol",
			"4R_Mk7_A",
			"4R_Mk7_A_CESS",
			"4R_Mk7_A_ESS",
			"4R_Mk7_A_Net",
			"4R_Mk7_A_Net_ESS",
			"4R_Mk7_A_Scrim",
			"4R_Mk7_A_Scrim_ESS",
			"4R_IFAK",
			"4R_IFAK2",
			"4R_BANDAGES",
			"4R_CONSUMABLES",
			"4R_DRUGS",
			"4R_MASCAS",
			"4R_mars",
			"4R_marsdf",
			"4R_haribo",
			"4R_irnbru",
			"4R_kron",
			"4R_camelbak_full",
			"4R_camelbak_110",
			"4R_camelbak_210",
			"4R_camelbak_310",
			"4R_camelbak_410",
			"4R_camelbak_510",
			"4R_camelbak_610",
			"4R_camelbak_710",
			"4R_camelbak_810",
			"4R_camelbak_910",
			"4R_camelbak_empty",
			"4R_jerry_can",
			"4R_bandolier_556",
			"4R_bandolier_762",
			"4R_bandolier_40mm",
			"4R_bandolier_40mmsmk",
			"4R_bandolier_tracer",
			"4R_343_DAMAGED",
			"4R_152_DAMAGED",
			"4R_177_DAMAGED",
			"4R_EPW_TAG",
			"4R_MIST_TAG",
			"4R_COMD_AD",
			"4R_BCD_AD",
			"4R_CPERSKIT",
			"4R_Evidence_Bag",
			"4R_ACETrack",
			"4R_PE4",
			"4R_bandolier_Mortar_HE",
			"4R_bandolier_Mortar_SMK",
			"4R_bandolier_Mortar_SUP",
			"4R_Ammobox_SmokeLauncher",
			"4R_bandolier_L109",
			"4R_bandolier_L50",
			"4R_bandolier_csmk",
			"4R_Ammobox_556",
			"4R_Ammobox_762",
			"4R_Ammobox_30HE",
			"4R_Ammobox_30AP"
		};
		requiredVersion = 0.3;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_UI_F",
			"ace_laserpointer",
			"cba_accessory",
			"cba_settings",
			"MK50",
			"UK3CB_BAF_Weapons_Ammo",
			"UK3CB_BAF_Equipment",
			"Weap_melee_knife",
			"UK3CB_BAF_Weapons_L3A1",
			"uk3CB_baf_weapons_Accessories",
			"ace_interaction",
			"greenmag_main",
			"acre_sys_prc152",
			"acre_sys_prc343",
			"CBA_XEH",
			"CBA_MAIN"
		};
		author="Challenger";
	};
};

#include "Branding.hpp"
#include "CfgAmmo.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgITNCompat.hpp"
#include "CfgMagazines.hpp"
#include "CribCards.hpp"
#include "Functions.hpp"
#include "Inventory.hpp"
#include "4RPlayer.hpp"