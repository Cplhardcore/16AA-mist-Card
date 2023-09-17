class CfgPatches
{
	class 4Rifles
	{
		name="4 Rifles Milsim Config Edits";
		weapons[]=
		{
			"4R_MIST_TAG",
		};
		requiredVersion = 0.3;
		requiredAddons[] =
		{
			"A3_Weapons_F",
			"A3_UI_F",
			"ace_laserpointer",
			"cba_accessory",
			"cba_settings",
			"ace_interaction",
			"CBA_XEH",
			"CBA_MAIN"
		};
		author="Challenger";
	};
};

#include "CribCards.hpp"
#include "Functions.hpp"
#include "Inventory.hpp"
#include "4RPlayer.hpp"
#include "Branding.hpp"