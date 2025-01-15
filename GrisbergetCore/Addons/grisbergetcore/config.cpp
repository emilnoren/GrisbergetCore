#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class grisbergetcore {
		units[] = {"flag_ban_manager_austria","flag_ban_manager_baltia","flag_ban_manager_bel","flag_ban_manager_bosnia","flag_ban_manager_Bulgaria","flag_ban_manager_Canada","flag_ban_manager_chechen_ka","flag_ban_manager_china","flag_ban_manager_CRI","flag_ban_manager_croat","flag_ban_manager_Cuba","flag_ban_manager_Cuban","flag_ban_manager_Czech","flag_ban_manager_emirat","flag_ban_manager_Estonia","flag_ban_manager_France","flag_ban_manager_frg","flag_ban_manager_fsb","flag_ban_manager_GDR","flag_ban_manager_German","flag_ban_manager_herzBos","flag_ban_manager_herzBos","flag_ban_manager_Iran","flag_ban_manager_Iraq","flag_ban_manager_isis","flag_ban_manager_Israel","flag_ban_manager_Italy","flag_ban_manager_Japan","flag_ban_manager_Jordan","flag_ban_manager_KoreaN","flag_ban_manager_KoreaS","flag_ban_manager_kz","flag_ban_manager_Latvia","flag_ban_manager_Litva","flag_ban_manager_Livan","flag_ban_manager_Marine","flag_ban_manager_Mexico","flag_ban_manager_Moldova","flag_ban_manager_monten","flag_ban_manager_novros","flag_ban_manager_odkb","flag_ban_manager_Pakistan","flag_ban_manager_Palestine","flag_ban_manager_Poland","flag_ban_manager_redcross","flag_ban_manager_Reich","flag_ban_manager_Romania","flag_ban_manager_serb_kraina","flag_ban_manager_serb_resp","flag_ban_manager_serbia","flag_ban_manager_Slovakia","flag_ban_manager_slovenia","flag_ban_manager_Syria","flag_ban_manager_Taiwan","flag_ban_manager_talib","flag_ban_manager_Turkey","flag_ban_manager_ukr","flag_ban_manager_Ussrr","flag_ban_manager_Victory","flag_ban_manager_vv","flag_Manager_austria","flag_manager_baltia","flag_manager_bel","flag_manager_bosnia","flag_Manager_Bulgaria","flag_Manager_Canada","flag_manager_chechen_ka","flag_Manager_china","flag_Manager_CRI","flag_manager_croat","flag_Manager_Cuba","flag_Manager_Cuban","flag_Manager_Czech","flag_manager_emirat","flag_Manager_Estonia","flag_Manager_France","flag_Manager_frg","flag_manager_fsb","flag_Manager_GDR","flag_Manager_German","flag_manager_herzBos","flag_Manager_Hungary","flag_Manager_Iran","flag_Manager_Iraq","flag_manager_isis","flag_Manager_Israel","flag_Manager_Italy","flag_Manager_Japan","flag_Manager_Jordan","flag_Manager_KoreaN","flag_Manager_KoreaS","flag_manager_kz","flag_Manager_Latvia","flag_Manager_Litva","flag_Manager_Livan","flag_Manager_Marine","flag_Manager_Mexico","flag_Manager_Moldova","flag_manager_monten","flag_manager_novros","flag_manager_odkb","flag_Manager_Pakistan","flag_Manager_Palestine","flag_Manager_Poland","flag_manager_redcross","flag_Manager_Reich","flag_Manager_Romania","flag_manager_serb_kraina","flag_manager_serb_resp","flag_manager_serbia","flag_Manager_Slovakia","flag_manager_slovenia","flag_Manager_Syria","flag_Manager_Taiwan","flag_manager_talib","flag_Manager_Turkey","flag_manager_ukr","flag_Manager_Ussrr","flag_Manager_Victory","flag_manager_vv"};
		weapons[] = {""};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgMods {
	author = "baigaman";
};

class CfgFaces {
	class Default
	{
		class Custom;
	};

	class Man_A3 : Default
	{
		class WhiteHead_01;
		
		class Lano: WhiteHead_01 {
			displayname = "Lano";
			author = "baigaman";
			texture = "grisbergetcore\data\lano.jpg";
			head = "DefaultHead_A3";
			identityTypes[] = {};
		};

	};
};

class CfgVehicles {
	class FlagCarrier;
	class Banner_01_F;
	
	class grisbergetcore_flag_efs : FlagCarrier {
		author = "baigaman";
		scope = 2;
		displayName = "EFS flag";
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'grisbergetcore\data\efs.paa'";
		};
		scopeCurator = 2;
	};

	class grisbergetcore_banner_efs : Banner_01_F {
		author = "NaGa";
		scope = 2;
		displayName = "EFS banner";
		hiddenSelectionsTextures[] = {"grisbergetcore\data\efs.paa"};
		class EventHandlers {
			init = "(_this select 0) setFlagTexture 'grisbergetcore\data\efs.paa'";
		};
		scopeCurator = 2;
	};

};

class Cfg3DEN {
	class Object {
		class AttributeCategories {
			class flagtoveh {
				displayName = "Flag";
				collapsed = 0;
				class Attributes {
					class markflag {
						displayName = "Flag";
						tooltip = "Flag";
						property = "marktheflag";
						control = "Combo";
						expression = "if (_value != 'NULL') then {_this forceFlagTexture _value};";
						defaultValue = 0;
						unique = 0;
						condition = "objectVehicle";
						typeName = STRING;
						class values {
							class none {
								name = "None";
								value = "NULL";
								defaultValue = 0;
							};

							class efs {
								name = "EFS flag";
								value = "grisbergetcore\data\efs.paa";
							};
													
						};
					};
				};
			};
		};
	};
};