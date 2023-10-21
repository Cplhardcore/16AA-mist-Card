class Man;
class CAManBase: Man
{
	sensitivityEar = 0.2;	
	class ACE_Actions
	{
		class ACE_MainActions
		{
			class i6aaMIST
			{
				displayName = "MIST Card";
				condition = "('i6aa_MIST_TAG' in (items _target))";
				statement = "createDialog 'i6aa_MIST_TAG'";
				icon="\i6aaMIST\data\MISTCARD.paa";
			};
		};
	};
};