class CfgPatches
{
	class i6aa
	{
		name="4 Rifles Milsim Config Edits";
		weapons[]=
		{
			"i6aa_MIST_TAG",
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
#include "i6aaPlayer.hpp"