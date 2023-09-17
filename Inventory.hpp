class CfgWeapons
{
	class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
	class 4R_MIST_TAG:ACE_ItemCore
	{
		scope=2;
		author="4 Rifles Milsim";
		picture="\FourRBG\data\tag.paa";
		displayName="MIST Tag";
		descriptionShort="Apply this to Casualties to inform the treatment chain of what treatment has been done and what is needed.";
		class ItemInfo:CBA_MiscItem_ItemInfo
		{
			mass=0.1;
		};
	};
}