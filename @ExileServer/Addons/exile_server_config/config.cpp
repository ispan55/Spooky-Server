/**
 * config
 *
 * Exile Mod
 * www.exilemod.com
 * © 2015 Exile Mod Team
 *
 * This work is licensed under the Creative Commons Attribution-NonCommercial-NoDerivatives 4.0 International License. 
 * To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-nd/4.0/.
 */
 
class CfgPatches
{
	class exile_server_config
	{
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

// Chernarus Loot Positions - Replaced CfgBuildings
#include "chernarusLootBuildings.cpp"
// Chernarus Loot Positions - Replaced CfgBuildings

class CfgLootTables
{
	/**
	  Result of 100 rounds:

	  TRYK_B_tube_blk
	  Exile_Item_Moobar
	  Exile_Item_Dogfood
	  ItemRadio
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_ChocolateMilk
	  Binocular
	  Exile_Item_ToiletPaper
	  V_Rangemaster_belt
	  Exile_Item_MountainDupe
	  Exile_Item_MacasCheese
	  Exile_Item_EnergyDrink
	  Exile_Item_PlasticBottleCoffee
	  Exile_Item_CockONut
	  V_Press_F
	  Exile_Item_Raisins
	  CUP_B_AssaultPack_Coyote
	  CUP_sgun_M1014
	  Exile_Item_PowerDrink
	  Exile_Item_PowerDrink
	  V_HarnessOGL_brn
	  Exile_Item_MountainDupe
	  Exile_Item_EnergyDrink
	  Exile_Item_BBQSandwich
	  Exile_Item_Beer
	  Exile_Item_Raisins
	  CUP_hgun_Colt1911
	  V_HarnessO_brn
	  ItemMap
	  ItemCompass
	  ItemMap
	  V_Chestrig_rgr
	  CUP_hgun_M9
	  ItemCompass
	  Exile_Item_Beer
	  Exile_Item_CanOpener
	  CUP_B_AlicePack_Khaki
	  Exile_Item_PowerDrink
	  Exile_Item_ToiletPaper
	  Exile_Item_BBQSandwich
	  Exile_Item_ToiletPaper
	  hlc_smg_mp5k
	  V_BandollierB_oli
	  Exile_Item_EnergyDrink
	  Exile_Item_Heatpack
	  B_AssaultPack_blk
	  Exile_Item_PlasticBottleEmpty
	  V_HarnessOGL_brn
	  Exile_Item_EMRE
	  Exile_Item_EnergyDrink
	  CUP_V_O_Ins_Carrier_Rig_Com
	  Exile_Item_DsNuts
	  Exile_Item_Heatpack
	  Binocular
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_EnergyDrink
	  Exile_Item_Magazine02
	  Binocular
	  CUP_V_O_Ins_Carrier_Rig_Com
	  Exile_Item_Beer
	  Exile_Item_Beer
	  Exile_Item_EnergyDrink
	  B_AssaultPack_blk
	  ItemCompass
	  V_BandollierB_oli
	  ItemRadio
	  Binocular
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_Beer
	  TAC_LBT_HL3_B
	  Exile_Item_Beer
	  Exile_Item_GloriousKnakworst
	  B_AssaultPack_khk
	  CUP_hgun_Colt1911
	  TRYK_V_Bulletproof_BL
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_BeefParts
	  Exile_Item_Raisins
	  ItemCompass
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleFreshWater
	  V_HarnessOGL_brn
	  Exile_Item_Beer
	  Exile_Item_BeefParts
	  CUP_B_CivPack_WDL
	  V_Chestrig_blk
	  ItemCompass
	  CUP_hgun_SA61
	  Exile_Item_PlasticBottleCoffee
	  B_Kitbag_cbr
	  Exile_Item_EnergyDrink
	  Exile_Item_MacasCheese
	  Exile_Item_PlasticBottleFreshWater
	  ItemMap
	  B_Kitbag_rgr
	  ItemCompass
	  Exile_Item_PlasticBottleCoffee
	  Exile_Item_PlasticBottleCoffee
	*/
	class Civillian
	{
		count = 87;
		half = 7378.15354851366;
		halfIndex = 43;
		sum = 10000;
		items[] = 
		{
			{554.016620498615, "Exile_Item_Heatpack"}, // 5.54%
			{969.529085872576, "ItemCompass"}, // 4.16%
			{1385.04155124654, "Binocular"}, // 4.16%
			{1800.5540166205, "ItemMap"}, // 4.16%
			{2079.02797930499, "Exile_Item_PlasticBottleCoffee"}, // 2.78%
			{2357.50194198948, "Exile_Item_ChocolateMilk"}, // 2.78%
			{2635.97590467397, "Exile_Item_MountainDupe"}, // 2.78%
			{2914.44986735845, "Exile_Item_EnergyDrink"}, // 2.78%
			{3192.92383004294, "Exile_Item_Beer"}, // 2.78%
			{3471.39779272743, "Exile_Item_PlasticBottleFreshWater"}, // 2.78%
			{3749.87175541192, "Exile_Item_PowerDrink"}, // 2.78%
			{4026.88006566123, "ItemRadio"}, // 2.77%
			{4158.45901302965, "Exile_Item_Can_Empty"}, // 1.32%
			{4290.03796039807, "Exile_Item_PlasticBottleEmpty"}, // 1.32%
			{4421.61690776649, "Exile_Item_ToiletPaper"}, // 1.32%
			{4533.00649284029, "Exile_Item_SausageGravy"}, // 1.11%
			{4644.39607791408, "Exile_Item_Surstromming"}, // 1.11%
			{4755.78566298788, "Exile_Item_CanOpener"}, // 1.11%
			{4867.17524806167, "Exile_Item_Matches"}, // 1.11%
			{4978.56483313547, "Exile_Item_EMRE"}, // 1.11%
			{5089.95441820926, "Exile_Item_GloriousKnakworst"}, // 1.11%
			{5201.34400328306, "Exile_Item_InstantCoffee"}, // 1.11%
			{5312.73358835685, "Exile_Item_Raisins"}, // 1.11%
			{5424.12317343065, "Exile_Item_SeedAstics"}, // 1.11%
			{5535.51275850444, "Exile_Item_Moobar"}, // 1.11%
			{5646.90234357824, "Exile_Item_Noodles"}, // 1.11%
			{5758.29192865204, "Exile_Item_DsNuts"}, // 1.11%
			{5869.68151372583, "Exile_Item_Cheathas"}, // 1.11%
			{5981.07109879963, "Exile_Item_BeefParts"}, // 1.11%
			{6092.46068387342, "Exile_Item_Dogfood"}, // 1.11%
			{6203.85026894722, "Exile_Item_CatFood"}, // 1.11%
			{6315.23985402101, "Exile_Item_BBQSandwich"}, // 1.11%
			{6426.62943909481, "Exile_Item_MacasCheese"}, // 1.11%
			{6538.0190241686, "Exile_Item_ChristmasTinner"}, // 1.11%
			{6649.4086092424, "Exile_Item_CockONut"}, // 1.11%
			{6730.38026916143, "CUP_B_RPGPack_Khaki"}, // 0.81%
			{6811.35192908046, "CUP_B_AssaultPack_Coyote"}, // 0.81%
			{6892.32358899948, "TRYK_B_tube_blk"}, // 0.81%
			{6973.29524891851, "B_TacticalPack_rgr"}, // 0.81%
			{7054.26690883754, "B_TacticalPack_blk"}, // 0.81%
			{7135.23856875657, "B_Kitbag_rgr"}, // 0.81%
			{7216.2102286756, "CUP_B_AlicePack_Khaki"}, // 0.81%
			{7297.18188859463, "CUP_B_ACRScout_m95"}, // 0.81%
			{7378.15354851366, "B_Kitbag_cbr"}, // 0.81%
			{7459.12520843269, "CUP_B_CivPack_WDL"}, // 0.81%
			{7540.09686835171, "B_AssaultPack_khk"}, // 0.81%
			{7621.06852827074, "B_AssaultPack_cbr"}, // 0.81%
			{7702.04018818977, "B_AssaultPack_blk"}, // 0.81%
			{7777.22815811458, "V_Press_F"}, // 0.75%
			{7852.4161280394, "V_Chestrig_blk"}, // 0.75%
			{7927.60409796421, "V_Chestrig_rgr"}, // 0.75%
			{8002.79206788902, "CUP_V_O_Ins_Carrier_Rig_Com"}, // 0.75%
			{8077.98003781383, "TAC_LBT_HL3_OD"}, // 0.75%
			{8153.16800773864, "TAC_LBT_HL3_B"}, // 0.75%
			{8228.35597766346, "V_TacChestrig_grn_F"}, // 0.75%
			{8303.54394758827, "V_HarnessO_brn"}, // 0.75%
			{8378.73191751308, "V_BandollierB_rgr"}, // 0.75%
			{8453.9198874379, "V_BandollierB_oli"}, // 0.75%
			{8529.10785736271, "V_BandollierB_blk"}, // 0.75%
			{8604.29582728752, "V_Rangemaster_belt"}, // 0.75%
			{8679.48379721234, "V_HarnessOGL_brn"}, // 0.75%
			{8754.67176713715, "TRYK_V_Bulletproof_BL"}, // 0.75%
			{8823.92384469948, "CUP_hgun_TaurusTracker455"}, // 0.69%
			{8893.1759222618, "CUP_hgun_SA61"}, // 0.69%
			{8962.42799982413, "CUP_hgun_Makarov"}, // 0.69%
			{9031.68007738646, "CUP_hgun_M9"}, // 0.69%
			{9100.93215494878, "CUP_hgun_Colt1911"}, // 0.69%
			{9170.18423251111, "CUP_hgun_Glock17"}, // 0.69%
			{9239.43631007344, "CUP_hgun_Compact"}, // 0.69%
			{9297.91584223718, "hlc_rifle_M1903A1"}, // 0.58%
			{9356.39537440092, "CUP_sgun_M1014"}, // 0.58%
			{9414.87490656467, "CUP_srifle_CZ550"}, // 0.58%
			{9473.35443872841, "CUP_srifle_LeeEnfield_rail"}, // 0.58%
			{9531.83397089215, "CUP_smg_MP5SD6"}, // 0.58%
			{9590.3135030559, "CUP_smg_MP5A5"}, // 0.58%
			{9648.79303521964, "CUP_sgun_Saiga12K"}, // 0.58%
			{9707.27256738338, "CUP_smg_bizon"}, // 0.58%
			{9765.75209954712, "hlc_rifle_M1903A1_unertl"}, // 0.58%
			{9799.16897506926, "Exile_Item_CookingPot"}, // 0.33%
			{9832.06371191137, "Exile_Item_Magazine02"}, // 0.33%
			{9864.95844875347, "Exile_Item_Magazine03"}, // 0.33%
			{9897.85318559558, "Exile_Item_Magazine01"}, // 0.33%
			{9930.74792243768, "Exile_Item_Magazine04"}, // 0.33%
			{9951.52354570638, "hlc_smg_mp5k"}, // 0.21%
			{9972.29916897508, "CUP_hgun_MicroUzi"}, // 0.21%
			{9986.14958448754, "ItemWatch"}, // 0.14%
			{10000, "ItemGPS"} // 0.14%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Handsaw
	  Exile_Item_JunkMetal
	  Exile_Item_MetalScrews
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Pliers
	  Exile_Item_MobilePhone
	  Exile_Item_CarWheel
	  Exile_Item_MobilePhone
	  Exile_Item_Magazine04
	  Exile_Item_ZipTie
	  Exile_Item_MetalWire
	  Exile_Item_CarWheel
	  Exile_Item_ThermalScannerPro
	  Exile_Item_FireExtinguisher
	  Exile_Item_DuctTape
	  Exile_Item_ExtensionCord
	  Exile_Item_Knife
	  Exile_Item_Cement
	  Exile_Item_Can_Empty
	  Exile_Item_JunkMetal
	  Exile_Item_ExtensionCord
	  Exile_Item_Rope
	  Exile_Item_MetalBoard
	  Exile_Item_Laptop
	  Exile_Item_MetalScrews
	  Exile_Item_CamoTentKit
	  Exile_Item_Shovel
	  Exile_Item_MetalScrews
	  Exile_Item_MetalScrews
	  Exile_Item_JunkMetal
	  Exile_Item_Screwdriver
	  Exile_Item_ExtensionCord
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterEmpty
	  Exile_Melee_Axe
	  Exile_Item_DuctTape
	  Exile_Item_MetalPole
	  Exile_Item_Grinder
	  Exile_Item_ZipTie
	  Exile_Item_Wrench
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_JunkMetal
	  Exile_Item_JunkMetal
	  Exile_Item_PlasticBottleEmpty
	  Exile_Melee_SledgeHammer
	  Exile_Item_MetalBoard
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterFull
	  Exile_Item_FloodLightKit
	  Exile_Melee_SledgeHammer
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Wrench
	  Exile_Item_MetalHedgehogKit
	  Exile_Item_Magazine03
	  Exile_Item_Wrench
	  Exile_Item_Magazine02
	  Exile_Item_MetalPole
	  Exile_Item_Sand
	  Exile_Item_JunkMetal
	  Exile_Item_FireExtinguisher
	  Exile_Item_Screwdriver
	  Land_TentDome_F_Kit
	  Exile_Item_Can_Empty
	  Exile_Item_MetalScrews
	  Exile_Item_MobilePhone
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Rope
	  Exile_Item_FireExtinguisher
	  Exile_Item_Handsaw
	  Exile_Item_Wrench
	  Exile_Item_LightBulb
	  Exile_Item_LightBulb
	  Exile_Item_CamoTentKit
	  Exile_Item_MetalScrews
	  Exile_Item_MobilePhone
	  Exile_Item_PortableGeneratorKit
	  Exile_Item_MetalPole
	  Exile_Item_LightBulb
	  Land_TentDome_F_Kit
	  Exile_Item_MetalScrews
	  Exile_Item_DuctTape
	  Exile_Item_MetalWire
	  Exile_Item_Hammer
	  Exile_Item_Foolbox
	  Exile_Item_CamoTentKit
	  Exile_Item_ZipTie
	  Exile_Item_MetalScrews
	  Exile_Item_Magazine04
	  Exile_Item_CarWheel
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Knife
	  Exile_Item_MetalPole
	  Exile_Item_MetalPole
	  Exile_Item_PlasticBottleEmpty
	*/
	class Industrial
	{
		count = 44;
		half = 7396.19883040936;
		halfIndex = 22;
		sum = 10000;
		items[] = 
		{
			{467.836257309942, "Exile_Item_FuelCanisterEmpty"}, // 4.68%
			{935.672514619883, "Exile_Item_MetalScrews"}, // 4.68%
			{1403.50877192982, "Exile_Item_MetalPole"}, // 4.68%
			{1871.34502923977, "Exile_Item_MetalHedgehogKit"}, // 4.68%
			{2339.18128654971, "Exile_Item_JunkMetal"}, // 4.68%
			{2807.01754385965, "Exile_Item_DuctTape"}, // 4.68%
			{3274.85380116959, "Exile_Item_CarWheel"}, // 4.68%
			{3742.69005847953, "Exile_Item_ZipTie"}, // 4.68%
			{4159.3567251462, "Exile_Item_Can_Empty"}, // 4.17%
			{4576.02339181287, "Exile_Item_ToiletPaper"}, // 4.17%
			{4992.69005847953, "Exile_Item_PlasticBottleEmpty"}, // 4.17%
			{5226.6081871345, "Exile_Item_MetalBoard"}, // 2.34%
			{5460.52631578948, "Exile_Item_ExtensionCord"}, // 2.34%
			{5694.44444444445, "Exile_Item_FireExtinguisher"}, // 2.34%
			{5928.36257309942, "Land_TentDome_F_Kit"}, // 2.34%
			{6162.28070175439, "Exile_Item_CamoTentKit"}, // 2.34%
			{6396.19883040936, "Exile_Item_MobilePhone"}, // 2.34%
			{6562.86549707603, "Exile_Melee_Axe"}, // 1.67%
			{6729.53216374269, "Exile_Item_Wrench"}, // 1.67%
			{6896.19883040936, "Exile_Item_Shovel"}, // 1.67%
			{7062.86549707603, "Exile_Item_Pliers"}, // 1.67%
			{7229.53216374269, "Exile_Item_Handsaw"}, // 1.67%
			{7396.19883040936, "Exile_Item_Hammer"}, // 1.67%
			{7562.86549707603, "Exile_Item_Grinder"}, // 1.67%
			{7729.5321637427, "Exile_Item_Foolbox"}, // 1.67%
			{7896.19883040936, "Exile_Item_Screwdriver"}, // 1.67%
			{8062.86549707603, "Exile_Melee_SledgeHammer"}, // 1.67%
			{8179.82456140351, "Exile_Item_Knife"}, // 1.17%
			{8296.783625731, "Exile_Item_Laptop"}, // 1.17%
			{8413.74269005849, "Exile_Item_Cement"}, // 1.17%
			{8530.70175438597, "Exile_Item_OilCanister"}, // 1.17%
			{8647.66081871346, "Exile_Item_FloodLightKit"}, // 1.17%
			{8764.61988304094, "Exile_Item_PortableGeneratorKit"}, // 1.17%
			{8881.57894736843, "Exile_Item_LightBulb"}, // 1.17%
			{8998.53801169592, "Exile_Item_Rope"}, // 1.17%
			{9115.4970760234, "Exile_Item_ThermalScannerPro"}, // 1.17%
			{9232.45614035089, "Exile_Item_MetalWire"}, // 1.17%
			{9349.41520467837, "Exile_Item_FuelCanisterFull"}, // 1.17%
			{9466.37426900586, "Exile_Item_Sand"}, // 1.17%
			{9583.33333333334, "Exile_Item_BaseCameraKit"}, // 1.17%
			{9687.50000000001, "Exile_Item_Magazine03"}, // 1.04%
			{9791.66666666668, "Exile_Item_Magazine02"}, // 1.04%
			{9895.83333333334, "Exile_Item_Magazine04"}, // 1.04%
			{10000, "Exile_Item_Magazine01"} // 1.04%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_CarWheel
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_CarWheel
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Foolbox
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_JunkMetal
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_JunkMetal
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine03
	  Exile_Item_Magazine01
	  Exile_Item_OilCanister
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine04
	  Exile_Item_DuctTape
	  Exile_Item_Foolbox
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_OilCanister
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_CarWheel
	  Exile_Item_DuctTape
	  Exile_Item_Magazine02
	  Exile_Item_Magazine02
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine03
	  Exile_Item_CarWheel
	  Exile_Item_JunkMetal
	  Exile_Item_DuctTape
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Foolbox
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_OilCanister
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_FuelCanisterEmpty
	*/
	class Factories
	{
		count = 14;
		half = 8303.57142857143;
		halfIndex = 7;
		sum = 10000;
		items[] = 
		{
			{1428.57142857143, "Exile_Item_Can_Empty"}, // 14.29%
			{2857.14285714286, "Exile_Item_ToiletPaper"}, // 14.29%
			{4285.71428571429, "Exile_Item_PlasticBottleEmpty"}, // 14.29%
			{5625, "Exile_Item_FuelCanisterEmpty"}, // 13.39%
			{6964.28571428571, "Exile_Item_DuctTape"}, // 13.39%
			{7410.71428571429, "Exile_Item_CarWheel"}, // 4.46%
			{7857.14285714286, "Exile_Item_JunkMetal"}, // 4.46%
			{8303.57142857143, "Exile_Item_OilCanister"}, // 4.46%
			{8660.71428571428, "Exile_Item_Magazine01"}, // 3.57%
			{9017.85714285714, "Exile_Item_Magazine02"}, // 3.57%
			{9375, "Exile_Item_Magazine03"}, // 3.57%
			{9732.14285714286, "Exile_Item_Magazine04"}, // 3.57%
			{9866.07142857143, "Exile_Item_Foolbox"}, // 1.34%
			{10000, "Exile_Item_Wrench"} // 1.34%
		};
	};

	/**
	  Result of 100 rounds:

	  hlc_30Rnd_762x39_b_ak
	  hlc_rifle_auga3_bl
	  B_Kitbag_mcamo
	  CUP_H_CDF_H_PASGT_FST
	  bipod_03_F_oli
	  B_TacticalPack_blk
	  30Rnd_556x45_Stanag_Tracer_Red
	  hlc_40Rnd_556x45_B_AUG
	  CUP_arifle_L85A2
	  hlc_30rnd_556x45_EPR_G36
	  CUP_item_CDF_dogtags
	  CUP_muzzle_snds_M14
	  optic_Aco_smg
	  hlc_rifle_Colt727
	  optic_Aco
	  CUP_20Rnd_762x51_B_SCAR
	  hlc_rifle_CQBR
	  TRYK_V_ArmorVest_AOR2_2
	  30Rnd_580x42_Mag_Tracer_F
	  TRYK_U_B_Snowt
	  muzzle_snds_m_snd_F
	  hlc_rifle_aek971
	  TRYK_V_PlateCarrier_blk_L
	  CUP_optic_LeupoldMk4_10x40_LRT_Desert
	  B_Carryall_cbr
	  TRYK_U_B_ARO2_CombatUniform
	  B_Kitbag_rgr
	  CUP_20Rnd_TE1_White_Tracer_762x51_SCAR
	  30Rnd_545x39_Mag_F
	  V_TacVest_camo
	  V_TacVest_khk
	  CUP_arifle_Mk16_SV
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B
	  V_PlateCarrier2_rgr
	  CUP_arifle_L85A2_G
	  hlc_rifle_m4m203
	  TAC_PBDFG2_B_1
	  B_TacticalPack_rgr
	  CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M
	  arifle_CTAR_blk_F
	  V_TacVest_oli
	  CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B
	  CUP_muzzle_mfsup_SCAR_H
	  hlc_24Rnd_75x55_ap_stgw
	  hlc_rifle_CQBR
	  hlc_rifle_ak74m
	  CUP_arifle_Mk16_SV
	  hlc_rifle_auga3
	  CUP_H_CDF_H_PASGT_FST
	  hlc_20Rnd_762x51_TDim_fal
	  bipod_01_F_blk
	  B_TacticalPack_rgr
	  CUP_optic_HoloBlack
	  CUP_optic_ZDDot
	  100Rnd_580x42_Mag_Tracer_F
	  CUP_H_USMC_HelmetWDL
	  30Rnd_762x39_Mag_Tracer_F
	  CUP_arifle_M4A1_desert
	  muzzle_snds_B_snd_F
	  hlc_20Rnd_762x51_B_M14
	  CUP_SVD_camo_d_half
	  V_TacVest_blk_POLICE
	  CUP_optic_LeupoldMk4
	  arifle_Mk20_F
	  CUP_20Rnd_762x51_DMR
	  150Rnd_556x45_Drum_Mag_F
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR
	  CUP_acc_bfa
	  CUP_B_RUS_Backpack
	  hlc_20Rnd_762x51_barrier_M14
	  B_TacticalPack_blk
	  hlc_rifle_RU556
	  optic_Holosight_blk_F
	  CUP_20Rnd_TE1_Red_Tracer_762x51_DMR
	  hlc_45Rnd_762x39_m_rpk
	  hlc_24Rnd_75x55_T_stgw
	  optic_KHS_tan
	  CUP_optic_LeupoldMk4_10x40_LRT_Woodland
	  CUP_10Rnd_9x39_SP5_VSS_M
	  B_Kitbag_mcamo
	  hlc_20Rnd_762x51_Mdim_M14
	  hlc_optic_suit
	  V_TacVest_blk
	  optic_KHS_tan
	  hlc_30rnd_556x45_mdim_HK33
	  B_Kitbag_mcamo
	  CUP_arifle_L86A2
	  optic_DMS
	  CUP_8Rnd_B_Beneli_74Slug
	  hlc_20rnd_762x51_T_G3
	  CUP_20Rnd_762x51_B_M110
	  CUP_muzzle_snds_Mk12
	  B_Kitbag_rgr
	  CUP_item_CDF_dogtags
	  CUP_arifle_CZ805_A1
	  B_TacticalPack_rgr
	  30Rnd_580x42_Mag_Tracer_F
	  V_TacVest_oli
	  V_TacVestIR_blk
	  bipod_02_F_hex
	*/
	class MilitaryLow
	{
		count = 512;
		half = 6890.11365450428;
		halfIndex = 256;
		sum = 9999.99999999998;
		items[] = 
		{
			{110.472823685373, "B_Kitbag_cbr"}, // 1.10%
			{220.945647370747, "B_TacticalPack_mcamo"}, // 1.10%
			{331.41847105612, "B_TacticalPack_rgr"}, // 1.10%
			{441.891294741494, "B_TacticalPack_blk"}, // 1.10%
			{552.364118426867, "CUP_B_RUS_Backpack"}, // 1.10%
			{662.83694211224, "B_Kitbag_mcamo"}, // 1.10%
			{773.309765797614, "B_Kitbag_rgr"}, // 1.10%
			{855.721310739376, "V_TacVest_khk"}, // 0.82%
			{938.132855681139, "V_TacVest_camo"}, // 0.82%
			{1020.5444006229, "V_TacVest_blk_POLICE"}, // 0.82%
			{1102.95594556466, "V_I_G_resistanceLeader_F"}, // 0.82%
			{1185.36749050643, "V_TacVestIR_blk"}, // 0.82%
			{1267.77903544819, "V_TacVest_oli"}, // 0.82%
			{1350.19058038995, "TAC_V_tacSVD_OD"}, // 0.82%
			{1432.60212533171, "V_TacVest_blk"}, // 0.82%
			{1515.01367027348, "V_TacVest_brn"}, // 0.82%
			{1597.42521521524, "TAC_V_tacSVD_BK"}, // 0.82%
			{1638.93621563035, "CUP_arifle_Mk16_STD_EGLM"}, // 0.42%
			{1680.44721604546, "CUP_arifle_M4A1_black"}, // 0.42%
			{1721.95821646057, "CUP_arifle_M4A1_camo"}, // 0.42%
			{1763.46921687568, "CUP_arifle_M4A1_desert"}, // 0.42%
			{1804.98021729079, "CUP_srifle_Mk12SPR"}, // 0.42%
			{1846.4912177059, "CUP_arifle_Mk16_CQC_FG"}, // 0.42%
			{1888.00221812101, "CUP_arifle_Mk16_STD_FG"}, // 0.42%
			{1929.51321853612, "CUP_arifle_Mk16_SV"}, // 0.42%
			{1971.02421895123, "hlc_rifle_auga3"}, // 0.42%
			{2012.53521936634, "hlc_rifle_samr2"}, // 0.42%
			{2054.04621978145, "arifle_SPAR_01_blk_F"}, // 0.42%
			{2095.55722019656, "hlc_rifle_auga3_bl"}, // 0.42%
			{2137.06822061167, "hlc_rifle_auga3_GL_B"}, // 0.42%
			{2178.57922102678, "arifle_TRG20_F"}, // 0.42%
			{2220.09022144189, "CUP_arifle_M16A4_Base"}, // 0.42%
			{2261.601221857, "hlc_rifle_aek971_mtk"}, // 0.42%
			{2303.11222227211, "arifle_Mk20_F"}, // 0.42%
			{2344.62322268722, "hlc_rifle_aek971"}, // 0.42%
			{2386.13422310233, "CUP_arifle_M16A2"}, // 0.42%
			{2427.64522351744, "CUP_arifle_L85A2_G"}, // 0.42%
			{2469.15622393255, "hlc_rifle_RU5562"}, // 0.42%
			{2510.66722434766, "hlc_rifle_RU556"}, // 0.42%
			{2552.17822476277, "hlc_rifle_bcmjack"}, // 0.42%
			{2593.68922517788, "arifle_CTAR_blk_F"}, // 0.42%
			{2635.20022559299, "CUP_arifle_L86A2"}, // 0.42%
			{2676.7112260081, "hlc_rifle_Colt727_GL"}, // 0.42%
			{2718.22222642321, "hlc_rifle_M4"}, // 0.42%
			{2759.73322683832, "hlc_rifle_m4m203"}, // 0.42%
			{2801.24422725343, "hlc_rifle_CQBR"}, // 0.42%
			{2842.75522766854, "CUP_arifle_CZ805_A1"}, // 0.42%
			{2884.26622808365, "hlc_rifle_Colt727"}, // 0.42%
			{2925.77722849876, "CUP_arifle_CZ805_A2"}, // 0.42%
			{2967.28822891387, "CUP_arifle_CZ805_GL"}, // 0.42%
			{3008.79922932898, "hlc_rifle_hk53RAS"}, // 0.42%
			{3050.31022974409, "hlc_rifle_hk53"}, // 0.42%
			{3091.8212301592, "hlc_rifle_hk33a2RIS"}, // 0.42%
			{3133.33223057431, "hlc_rifle_hk33a2"}, // 0.42%
			{3174.84323098942, "CUP_arifle_L85A2"}, // 0.42%
			{3216.35423140453, "hlc_rifle_G36V"}, // 0.42%
			{3257.86523181964, "hlc_rifle_G36TAC"}, // 0.42%
			{3299.37623223475, "hlc_rifle_G36C"}, // 0.42%
			{3340.88723264986, "hlc_rifle_auga3_b"}, // 0.42%
			{3382.39823306497, "hlc_rifle_G36KV"}, // 0.42%
			{3404.21133837865, "CUP_muzzle_snds_XM8"}, // 0.22%
			{3426.02444369232, "CUP_muzzle_snds_SCAR_H"}, // 0.22%
			{3447.83754900599, "hlc_muzzle_snds_fal"}, // 0.22%
			{3469.65065431966, "hlc_muzzle_snds_a6AUG"}, // 0.22%
			{3491.46375963334, "CUP_muzzle_mfsup_SCAR_H"}, // 0.22%
			{3513.27686494701, "muzzle_HBADGER"}, // 0.22%
			{3535.08997026068, "hlc_muzzle_762SUP_AK"}, // 0.22%
			{3556.90307557435, "CUP_muzzle_mfsup_SCAR_L"}, // 0.22%
			{3578.71618088803, "CUP_muzzle_snds_SCAR_L"}, // 0.22%
			{3600.5292862017, "CUP_muzzle_snds_Mk12"}, // 0.22%
			{3622.34239151537, "CUP_muzzle_snds_M14"}, // 0.22%
			{3644.15549682905, "CUP_muzzle_snds_M110"}, // 0.22%
			{3665.96860214272, "hlc_muzzle_snds_AUG"}, // 0.22%
			{3687.78170745639, "hlc_muzzle_556NATO_KAC"}, // 0.22%
			{3709.59481277006, "CUP_muzzle_snds_MicroUzi"}, // 0.22%
			{3731.40791808374, "hlc_muzzle_snds_g3"}, // 0.22%
			{3753.22102339741, "hlc_muzzle_snds_HK33"}, // 0.22%
			{3775.03412871108, "hlc_muzzle_snds_M14"}, // 0.22%
			{3796.84723402475, "hlc_muzzle_Agendasix"}, // 0.22%
			{3818.66033933843, "hlc_muzzle_Agendasix10mm"}, // 0.22%
			{3840.4734446521, "CUP_acc_bfa"}, // 0.22%
			{3862.28654996577, "muzzle_snds_M"}, // 0.22%
			{3884.09965527944, "hlc_muzzle_300blk_KAC"}, // 0.22%
			{3905.91276059312, "CUP_muzzle_snds_L85"}, // 0.22%
			{3927.72586590679, "hlc_muzzle_Tundra"}, // 0.22%
			{3949.53897122046, "hlc_muzzle_545SUP_AK"}, // 0.22%
			{3971.35207653413, "muzzle_snds_H"}, // 0.22%
			{3993.16518184781, "muzzle_snds_B"}, // 0.22%
			{4014.97828716148, "muzzle_snds_H_MG"}, // 0.22%
			{4036.79139247515, "muzzle_snds_H_SW"}, // 0.22%
			{4058.60449778883, "muzzle_snds_acp"}, // 0.22%
			{4080.4176031025, "muzzle_snds_m_khk_F"}, // 0.22%
			{4102.23070841617, "muzzle_snds_m_snd_F"}, // 0.22%
			{4124.04381372984, "CUP_muzzle_PBS4"}, // 0.22%
			{4145.85691904351, "CUP_muzzle_PB6P9"}, // 0.22%
			{4167.67002435719, "CUP_muzzle_Bizon"}, // 0.22%
			{4189.48312967086, "CUP_muzzle_snds_M9"}, // 0.22%
			{4211.29623498453, "muzzle_snds_L"}, // 0.22%
			{4233.1093402982, "CUP_acc_sffh"}, // 0.22%
			{4253.86484050576, "hlc_rifle_aks74u_MTK"}, // 0.21%
			{4274.62034071331, "hlc_rifle_aku12"}, // 0.21%
			{4295.37584092087, "hlc_rifle_aks74u"}, // 0.21%
			{4316.13134112842, "hlc_rifle_aks74_MTK"}, // 0.21%
			{4336.88684133598, "hlc_rifle_aks74_GL"}, // 0.21%
			{4357.64234154353, "hlc_rifle_ak74m_MTK"}, // 0.21%
			{4378.39784175109, "hlc_rifle_ak74m_gl"}, // 0.21%
			{4399.15334195864, "hlc_rifle_aks74"}, // 0.21%
			{4419.9088421662, "hlc_rifle_ak74"}, // 0.21%
			{4440.66434237375, "hlc_rifle_ak74_MTK"}, // 0.21%
			{4461.41984258131, "hlc_rifle_ak12"}, // 0.21%
			{4482.17534278886, "hlc_rifle_ak12GL"}, // 0.21%
			{4502.93084299642, "hlc_rifle_ak74m"}, // 0.21%
			{4520.95535633456, "CUP_H_RACS_Helmet_wdl"}, // 0.18%
			{4538.9798696727, "CUP_H_USMC_MICH2000_ESS_COMM_WDL"}, // 0.18%
			{4557.00438301084, "H_HelmetB_TI_tna_F"}, // 0.18%
			{4575.02889634898, "CUP_H_USArmy_HelmetMICH_earpro"}, // 0.18%
			{4593.05340968712, "CUP_H_RACS_Helmet_olive"}, // 0.18%
			{4611.07792302526, "TRYK_H_Helmet_WOOD"}, // 0.18%
			{4629.1024363634, "H_HelmetSpecB"}, // 0.18%
			{4647.12694970154, "TRYK_H_WH"}, // 0.18%
			{4665.15146303968, "TRYK_H_Helmet_Snow"}, // 0.18%
			{4683.17597637781, "TRYK_H_Helmet_Winter_2"}, // 0.18%
			{4701.20048971595, "CUP_H_CDF_H_PASGT_FST"}, // 0.18%
			{4719.22500305409, "CUP_H_CDF_H_PASGT_UN"}, // 0.18%
			{4737.24951639223, "TRYK_H_Helmet_Winter"}, // 0.18%
			{4755.27402973037, "H_HelmetB_black"}, // 0.18%
			{4773.29854306851, "H_HelmetB_grass"}, // 0.18%
			{4791.32305640665, "CUP_H_USMC_HelmetWDL"}, // 0.18%
			{4809.34756974479, "CUP_H_USArmy_Helmet_ECH1_Black"}, // 0.18%
			{4827.37208308293, "CUP_H_USArmy_Helmet_ECH1_Green"}, // 0.18%
			{4845.39659642107, "H_HelmetB"}, // 0.18%
			{4862.5198840923, "CUP_bipod_Harris_1A2_L"}, // 0.17%
			{4879.64317176354, "bipod_03_F_oli"}, // 0.17%
			{4896.76645943477, "bipod_03_F_blk"}, // 0.17%
			{4913.889747106, "bipod_02_F_hex"}, // 0.17%
			{4931.01303477723, "bipod_01_F_khk"}, // 0.17%
			{4948.13632244847, "CUP_bipod_VLTOR_Modpod"}, // 0.17%
			{4965.2596101197, "HLC_Bipod_G36"}, // 0.17%
			{4982.38289779093, "bipod_02_F_blk"}, // 0.17%
			{4999.50618546217, "bipod_01_F_mtp"}, // 0.17%
			{5016.6294731334, "bipod_01_F_blk"}, // 0.17%
			{5033.75276080463, "bipod_01_F_snd"}, // 0.17%
			{5050.87604847587, "bipod_02_F_tan"}, // 0.17%
			{5067.44697202867, "TRYK_B_Coyotebackpack_WH"}, // 0.17%
			{5084.01789558148, "B_Carryall_cbr"}, // 0.17%
			{5100.58881913428, "B_Carryall_ghex_F"}, // 0.17%
			{5117.15974268709, "B_Carryall_ocamo"}, // 0.17%
			{5133.73066623989, "B_Carryall_mcamo"}, // 0.17%
			{5150.3015897927, "B_Carryall_oucamo"}, // 0.17%
			{5166.8725133455, "TRYK_B_Coyotebackpack_BLK"}, // 0.17%
			{5183.44343689831, "TRYK_B_Coyotebackpack"}, // 0.17%
			{5200.01436045112, "TRYK_B_Coyotebackpack_OD"}, // 0.17%
			{5216.58528400392, "TRYK_B_Carryall_JSDF"}, // 0.17%
			{5233.15620755673, "B_Carryall_khk"}, // 0.17%
			{5249.72713110953, "TRYK_B_Carryall_wh"}, // 0.17%
			{5266.29805466234, "TRYK_B_Carryall_wood"}, // 0.17%
			{5282.86897821514, "TRYK_B_Carryall_blk"}, // 0.17%
			{5299.3512872035, "V_PlateCarrier2_rgr"}, // 0.16%
			{5315.83359619185, "CUP_V_BAF_Osprey_Mk2_DPM_Empty"}, // 0.16%
			{5332.3159051802, "TAC_PBDFG2_B_1"}, // 0.16%
			{5348.79821416855, "TRYK_V_PlateCarrier_wood_L"}, // 0.16%
			{5365.2805231569, "TRYK_V_PlateCarrier_blk_L"}, // 0.16%
			{5381.76283214526, "TAC_ArmorVest_Winter"}, // 0.16%
			{5398.24514113361, "TRYK_V_ArmorVest_AOR2_2"}, // 0.16%
			{5414.72745012196, "TRYK_V_ArmorVest_Delta2"}, // 0.16%
			{5431.20975911031, "TRYK_V_ArmorVest_green2"}, // 0.16%
			{5447.69206809867, "TRYK_V_ArmorVest_Ranger2"}, // 0.16%
			{5464.17437708702, "TRYK_V_PlateCarrier_ACU_L"}, // 0.16%
			{5480.19616672092, "CUP_20Rnd_762x51_DMR"}, // 0.16%
			{5496.21795635482, "CUP_5Rnd_762x51_M24"}, // 0.16%
			{5512.23974598872, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.16%
			{5528.26153562262, "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR"}, // 0.16%
			{5544.28332525653, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.16%
			{5560.30511489043, "CUP_20Rnd_TE1_White_Tracer_762x51_DMR"}, // 0.16%
			{5576.32690452433, "20Rnd_762x51_Mag"}, // 0.16%
			{5592.34869415823, "150Rnd_762x51_Box"}, // 0.16%
			{5608.37048379213, "hlc_100Rnd_762x51_B_M60E4"}, // 0.16%
			{5624.39227342604, "hlc_100Rnd_762x51_Barrier_M60E4"}, // 0.16%
			{5640.41406305994, "hlc_100Rnd_762x51_T_M60E4"}, // 0.16%
			{5656.43585269384, "hlc_100Rnd_762x51_Mdim_M60E4"}, // 0.16%
			{5672.45764232774, "CUP_20Rnd_TE1_White_Tracer_762x51_M110"}, // 0.16%
			{5688.47943196164, "150Rnd_762x51_Box_Tracer"}, // 0.16%
			{5704.50122159554, "CUP_20Rnd_762x51_B_SCAR"}, // 0.16%
			{5720.52301122945, "hlc_100Rnd_762x51_M_M60E4"}, // 0.16%
			{5736.54480086335, "CUP_20Rnd_TE1_Green_Tracer_762x51_M110"}, // 0.16%
			{5752.56659049725, "CUP_20Rnd_B_AA12_Pellets"}, // 0.16%
			{5768.58838013115, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.16%
			{5784.61016976505, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.16%
			{5800.63195939895, "hlc_100rnd_556x45_EPR_G36"}, // 0.16%
			{5816.65374903286, "hlc_30rnd_556x45_SPR_G36"}, // 0.16%
			{5832.67553866676, "hlc_30rnd_556x45_Tracers_G36"}, // 0.16%
			{5848.69732830066, "hlc_30rnd_556x45_MDIM_G36"}, // 0.16%
			{5864.71911793456, "hlc_30rnd_556x45_TDIM_G36"}, // 0.16%
			{5880.74090756846, "hlc_30rnd_556x45_b_HK33"}, // 0.16%
			{5896.76269720237, "hlc_30rnd_556x45_mdim_HK33"}, // 0.16%
			{5912.78448683627, "hlc_30rnd_556x45_tdim_HK33"}, // 0.16%
			{5928.80627647017, "hlc_30rnd_556x45_EPR_HK33"}, // 0.16%
			{5944.82806610407, "hlc_30rnd_556x45_t_HK33"}, // 0.16%
			{5960.84985573797, "CUP_20Rnd_B_AA12_74Slug"}, // 0.16%
			{5976.87164537187, "hlc_30rnd_556x45_SOST_G36"}, // 0.16%
			{5992.89343500578, "CUP_20Rnd_762x51_L129_M"}, // 0.16%
			{6008.91522463968, "CUP_20Rnd_762x51_B_M110"}, // 0.16%
			{6024.93701427358, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.16%
			{6040.95880390748, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.16%
			{6056.98059354138, "hlc_50Rnd_762x51_B_M14"}, // 0.16%
			{6073.00238317529, "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"}, // 0.16%
			{6089.02417280919, "hlc_20Rnd_762x51_Tdim_M14"}, // 0.16%
			{6105.04596244309, "hlc_20Rnd_762x51_S_M14"}, // 0.16%
			{6121.06775207699, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.16%
			{6137.08954171089, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.16%
			{6153.11133134479, "hlc_30Rnd_556x45_B_AUG"}, // 0.16%
			{6169.1331209787, "hlc_30Rnd_556x45_SOST_AUG"}, // 0.16%
			{6185.1549106126, "hlc_30Rnd_556x45_SPR_AUG"}, // 0.16%
			{6201.1767002465, "hlc_30Rnd_556x45_T_AUG"}, // 0.16%
			{6217.1984898804, "hlc_30Rnd_556x45_MDIM_AUG"}, // 0.16%
			{6233.2202795143, "hlc_30Rnd_556x45_TDIM_AUG"}, // 0.16%
			{6249.2420691482, "hlc_40Rnd_556x45_B_AUG"}, // 0.16%
			{6265.26385878211, "hlc_40Rnd_556x45_SOST_AUG"}, // 0.16%
			{6281.28564841601, "hlc_40Rnd_556x45_SPR_AUG"}, // 0.16%
			{6297.30743804991, "hlc_40Rnd_556x45_TDIM_AUG"}, // 0.16%
			{6313.32922768381, "hlc_30rnd_556x45_EPR_G36"}, // 0.16%
			{6329.35101731771, "hlc_20Rnd_762x51_Mdim_M14"}, // 0.16%
			{6345.37280695162, "hlc_20Rnd_762x51_T_M14"}, // 0.16%
			{6361.39459658552, "hlc_20Rnd_762x51_mk316_M14"}, // 0.16%
			{6377.41638621942, "hlc_20Rnd_762x51_barrier_M14"}, // 0.16%
			{6393.43817585332, "200Rnd_65x39_cased_Box_Tracer"}, // 0.16%
			{6409.45996548722, "200Rnd_65x39_cased_Box"}, // 0.16%
			{6425.48175512112, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.16%
			{6441.50354475503, "CUP_30Rnd_Sa58_M_TracerG"}, // 0.16%
			{6457.52533438893, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.16%
			{6473.54712402283, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.16%
			{6489.56891365673, "CUP_30Rnd_Sa58_M"}, // 0.16%
			{6505.59070329063, "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR"}, // 0.16%
			{6521.61249292454, "hlc_20Rnd_762x51_b_amt"}, // 0.16%
			{6537.63428255844, "hlc_20Rnd_762x51_bball_amt"}, // 0.16%
			{6553.65607219234, "hlc_20Rnd_762x51_T_amt"}, // 0.16%
			{6569.67786182624, "hlc_24Rnd_75x55_B_stgw"}, // 0.16%
			{6585.69965146014, "hlc_24Rnd_75x55_ap_stgw"}, // 0.16%
			{6601.72144109404, "hlc_24Rnd_75x55_T_stgw"}, // 0.16%
			{6617.74323072795, "CUP_10Rnd_762x54_SVD_M"}, // 0.16%
			{6633.76502036185, "hlc_20Rnd_762x51_B_M14"}, // 0.16%
			{6649.78680999575, "hlc_20Rnd_762x51_mk316_amt"}, // 0.16%
			{6665.80859962965, "100Rnd_65x39_caseless_mag"}, // 0.16%
			{6681.83038926355, "hlc_30rnd_556x45_SOST_HK33"}, // 0.16%
			{6697.85217889745, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.16%
			{6713.87396853136, "30Rnd_762x39_Mag_Green_F"}, // 0.16%
			{6729.89575816526, "30Rnd_762x39_Mag_Tracer_F"}, // 0.16%
			{6745.91754779916, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.16%
			{6761.93933743306, "hlc_30Rnd_545x39_t_ak"}, // 0.16%
			{6777.96112706696, "hlc_30Rnd_545x39_EP_ak"}, // 0.16%
			{6793.98291670087, "hlc_45Rnd_545x39_t_rpk"}, // 0.16%
			{6810.00470633477, "hlc_30Rnd_545x39_S_AK"}, // 0.16%
			{6826.02649596867, "hlc_60Rnd_545x39_t_rpk"}, // 0.16%
			{6842.04828560257, "30Rnd_545x39_Mag_F"}, // 0.16%
			{6858.07007523647, "30Rnd_762x39_Mag_F"}, // 0.16%
			{6874.09186487037, "30Rnd_545x39_Mag_Green_F"}, // 0.16%
			{6890.11365450428, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.16%
			{6906.13544413818, "hlc_30rnd_556x45_EPR"}, // 0.16%
			{6922.15723377208, "hlc_30rnd_556x45_SOST"}, // 0.16%
			{6938.17902340598, "hlc_30rnd_556x45_SPR"}, // 0.16%
			{6954.20081303988, "hlc_30rnd_556x45_MDim"}, // 0.16%
			{6970.22260267379, "hlc_30rnd_556x45_TDim"}, // 0.16%
			{6986.24439230769, "hlc_50rnd_556x45_EPR"}, // 0.16%
			{7002.26618194159, "30Rnd_556x45_Stanag"}, // 0.16%
			{7018.28797157549, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.16%
			{7034.30976120939, "30Rnd_545x39_Mag_Tracer_F"}, // 0.16%
			{7050.33155084329, "hlc_30rnd_762x39_s_ak"}, // 0.16%
			{7066.3533404772, "hlc_45Rnd_762x39_t_rpk"}, // 0.16%
			{7082.3751301111, "hlc_45Rnd_762x39_m_rpk"}, // 0.16%
			{7098.396919745, "30Rnd_65x39_caseless_green"}, // 0.16%
			{7114.4187093789, "hlc_30Rnd_762x39_b_ak"}, // 0.16%
			{7130.4404990128, "hlc_5rnd_3006_1903"}, // 0.16%
			{7146.46228864671, "CUP_5x_22_LR_17_HMR_M"}, // 0.16%
			{7162.48407828061, "CUP_64Rnd_9x19_Bizon_M"}, // 0.16%
			{7178.50586791451, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.16%
			{7194.52765754841, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.16%
			{7210.54944718231, "CUP_30Rnd_9x19_MP5"}, // 0.16%
			{7226.57123681621, "CUP_10x_303_M"}, // 0.16%
			{7242.59302645012, "CUP_8Rnd_B_Beneli_74Pellets"}, // 0.16%
			{7258.61481608402, "CUP_8Rnd_B_Beneli_74Slug"}, // 0.16%
			{7274.63660571792, "CUP_6Rnd_45ACP_M"}, // 0.16%
			{7290.65839535182, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.16%
			{7306.68018498572, "CUP_30Rnd_9x19_UZI"}, // 0.16%
			{7322.70197461962, "CUP_8Rnd_9x18_Makarov_M"}, // 0.16%
			{7338.72376425353, "CUP_15Rnd_9x19_M9"}, // 0.16%
			{7354.74555388743, "CUP_7Rnd_45ACP_1911"}, // 0.16%
			{7370.76734352133, "hlc_30Rnd_9x19_B_MP5"}, // 0.16%
			{7386.78913315523, "CUP_17Rnd_9x19_glock17"}, // 0.16%
			{7402.81092278913, "CUP_10Rnd_9x19_Compact"}, // 0.16%
			{7418.83271242304, "hlc_30Rnd_762x39_t_ak"}, // 0.16%
			{7434.85450205694, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.16%
			{7450.87629169084, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.16%
			{7466.89808132474, "hlc_30Rnd_545x39_B_AK"}, // 0.16%
			{7482.91987095864, "30Rnd_556x45_Stanag_red"}, // 0.16%
			{7498.94166059254, "CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B"}, // 0.16%
			{7514.96345022645, "CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B"}, // 0.16%
			{7530.98523986035, "30Rnd_65x39_caseless_mag"}, // 0.16%
			{7547.00702949425, "hlc_20rnd_762x51_S_G3"}, // 0.16%
			{7563.02881912815, "hlc_50rnd_762x51_MDIM_G3"}, // 0.16%
			{7579.05060876205, "hlc_50rnd_762x51_M_G3"}, // 0.16%
			{7595.07239839596, "hlc_20rnd_762x51_MDim_G3"}, // 0.16%
			{7611.09418802986, "hlc_20rnd_762x51_IRDim_G3"}, // 0.16%
			{7627.11597766376, "hlc_20rnd_762x51_T_G3"}, // 0.16%
			{7643.13776729766, "hlc_20rnd_762x51_barrier_G3"}, // 0.16%
			{7659.15955693156, "hlc_20rnd_762x51_Mk316_G3"}, // 0.16%
			{7675.18134656546, "hlc_20rnd_762x51_b_G3"}, // 0.16%
			{7691.20313619937, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.16%
			{7707.22492583327, "200Rnd_556x45_Box_Tracer_F"}, // 0.16%
			{7723.24671546717, "200Rnd_556x45_Box_Red_F"}, // 0.16%
			{7739.26850510107, "200Rnd_556x45_Box_F"}, // 0.16%
			{7755.29029473497, "hlc_200rnd_556x45_B_SAW"}, // 0.16%
			{7771.31208436887, "30Rnd_556x45_Stanag_green"}, // 0.16%
			{7787.33387400278, "hlc_200rnd_556x45_T_SAW"}, // 0.16%
			{7803.35566363668, "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B"}, // 0.16%
			{7819.37745327058, "hlc_200rnd_556x45_Mdim_SAW"}, // 0.16%
			{7835.39924290448, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B"}, // 0.16%
			{7851.42103253838, "CUP_100Rnd_556x45_BetaCMag"}, // 0.16%
			{7867.44282217229, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.16%
			{7883.46461180619, "150Rnd_556x45_Drum_Mag_F"}, // 0.16%
			{7899.48640144009, "29rnd_300BLK_STANAG_T"}, // 0.16%
			{7915.50819107399, "29rnd_300BLK_STANAG"}, // 0.16%
			{7931.52998070789, "hlc_20Rnd_762x51_B_fal"}, // 0.16%
			{7947.55177034179, "hlc_20Rnd_762x51_mk316_fal"}, // 0.16%
			{7963.5735599757, "hlc_20Rnd_762x51_barrier_fal"}, // 0.16%
			{7979.5953496096, "hlc_20Rnd_762x51_T_fal"}, // 0.16%
			{7995.6171392435, "hlc_20Rnd_762x51_TDim_fal"}, // 0.16%
			{8011.6389288774, "CUP_20Rnd_762x51_CZ805B"}, // 0.16%
			{8027.6607185113, "hlc_20Rnd_762x51_S_fal"}, // 0.16%
			{8043.68250814521, "100Rnd_580x42_Mag_F"}, // 0.16%
			{8059.70429777911, "100Rnd_580x42_Mag_Tracer_F"}, // 0.16%
			{8075.72608741301, "30Rnd_580x42_Mag_F"}, // 0.16%
			{8091.74787704691, "30Rnd_580x42_Mag_Tracer_F"}, // 0.16%
			{8107.76966668081, "20Rnd_650x39_Cased_Mag_F"}, // 0.16%
			{8123.79145631471, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.16%
			{8139.81324594862, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.16%
			{8155.83503558252, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.16%
			{8171.85682521642, "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag"}, // 0.16%
			{8187.87861485032, "hlc_50rnd_762x51_M_FAL"}, // 0.16%
			{8203.90040448422, "hlc_200rnd_556x45_M_SAW"}, // 0.16%
			{8219.32678977362, "TRYK_U_B_PCUHsW4"}, // 0.15%
			{8234.75317506302, "TRYK_U_B_BLK"}, // 0.15%
			{8250.17956035242, "TRYK_U_B_ARO2_CombatUniform"}, // 0.15%
			{8265.60594564182, "Exile_Uniform_Woodland"}, // 0.15%
			{8281.03233093122, "TRYK_U_B_PCUHsW6"}, // 0.15%
			{8296.45871622061, "TRYK_U_B_PCUHsW"}, // 0.15%
			{8311.88510151001, "TRYK_U_B_PCUHsW2"}, // 0.15%
			{8327.31148679941, "TRYK_U_B_PCUHsW5"}, // 0.15%
			{8342.73787208881, "TRYK_U_B_Snowt"}, // 0.15%
			{8358.16425737821, "CUP_U_B_USMC_FROG4_WMARPAT"}, // 0.15%
			{8373.5906426676, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 0.15%
			{8389.017027957, "TRYK_U_B_Wood_T"}, // 0.15%
			{8404.4434132464, "TRYK_U_B_Snow_CombatUniform"}, // 0.15%
			{8419.8697985358, "TRYK_U_B_JSDF_CombatUniform"}, // 0.15%
			{8435.2961838252, "TRYK_B_USMC_R"}, // 0.15%
			{8450.7225691146, "TRYK_U_B_BLKBLK_CombatUniform"}, // 0.15%
			{8466.14895440399, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 0.15%
			{8481.57533969339, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 0.15%
			{8497.00172498279, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 0.15%
			{8512.42811027219, "TRYK_T_camo_wood_marpat"}, // 0.15%
			{8527.85449556159, "TRYK_U_B_woodtan_CombatUniform"}, // 0.15%
			{8543.28088085099, "TRYK_hoodie_Wood"}, // 0.15%
			{8556.25306848071, "CUP_optic_MRad"}, // 0.13%
			{8569.22525611043, "CUP_optic_ElcanM145"}, // 0.13%
			{8582.19744374015, "CUP_optic_LeupoldMk4_CQ_T"}, // 0.13%
			{8595.16963136988, "CUP_optic_ELCAN_SpecterDR"}, // 0.13%
			{8608.1418189996, "CUP_optic_LeupoldMk4_MRT_tan"}, // 0.13%
			{8621.11400662932, "CUP_optic_SB_11_4x20_PM"}, // 0.13%
			{8634.08619425904, "CUP_optic_ZDDot"}, // 0.13%
			{8647.05838188877, "CUP_optic_TrijiconRx01_desert"}, // 0.13%
			{8660.03056951849, "hlc_optic_LRT_m14"}, // 0.13%
			{8673.00275714821, "CUP_optic_Elcan"}, // 0.13%
			{8685.97494477793, "CUP_optic_Elcan_reflex"}, // 0.13%
			{8698.94713240766, "HLC_Optic_PSO1"}, // 0.13%
			{8711.91932003738, "HLC_Optic_1p29"}, // 0.13%
			{8724.8915076671, "hlc_optic_kobra"}, // 0.13%
			{8737.86369529682, "hlc_optic_suit"}, // 0.13%
			{8750.83588292655, "hlc_optic_accupoint_g3"}, // 0.13%
			{8763.80807055627, "hlc_optic_PVS4M14"}, // 0.13%
			{8776.78025818599, "CUP_optic_TrijiconRx01_black"}, // 0.13%
			{8789.75244581572, "CUP_optic_LeupoldMk4_10x40_LRT_Woodland"}, // 0.13%
			{8802.72463344544, "CUP_optic_RCO_desert"}, // 0.13%
			{8815.69682107516, "CUP_optic_LeupoldM3LR"}, // 0.13%
			{8828.66900870488, "optic_KHS_old"}, // 0.13%
			{8841.64119633461, "optic_KHS_tan"}, // 0.13%
			{8854.61338396433, "optic_Arco_blk_F"}, // 0.13%
			{8867.58557159405, "optic_Arco_ghex_F"}, // 0.13%
			{8880.55775922377, "optic_DMS_ghex_F"}, // 0.13%
			{8893.5299468535, "optic_Hamr_khk_F"}, // 0.13%
			{8906.50213448322, "CUP_optic_LeupoldMk4_10x40_LRT_Desert"}, // 0.13%
			{8919.47432211294, "optic_ERCO_khk_F"}, // 0.13%
			{8932.44650974266, "optic_ERCO_snd_F"}, // 0.13%
			{8945.41869737239, "optic_SOS_khk_F"}, // 0.13%
			{8958.39088500211, "optic_LRPS_tna_F"}, // 0.13%
			{8971.36307263183, "optic_LRPS_ghex_F"}, // 0.13%
			{8984.33526026155, "optic_Holosight_blk_F"}, // 0.13%
			{8997.30744789128, "optic_Holosight_khk_F"}, // 0.13%
			{9010.279635521, "optic_Holosight_smg_blk_F"}, // 0.13%
			{9023.25182315072, "optic_KHS_hex"}, // 0.13%
			{9036.22401078044, "CUP_optic_PSO_1"}, // 0.13%
			{9049.19619841017, "optic_KHS_blk"}, // 0.13%
			{9062.16838603989, "optic_AMS_khk"}, // 0.13%
			{9075.14057366961, "optic_Arco"}, // 0.13%
			{9088.11276129934, "optic_Hamr"}, // 0.13%
			{9101.08494892906, "optic_Aco"}, // 0.13%
			{9114.05713655878, "optic_ACO_grn"}, // 0.13%
			{9127.0293241885, "optic_Aco_smg"}, // 0.13%
			{9140.00151181823, "optic_ACO_grn_smg"}, // 0.13%
			{9152.97369944795, "optic_Holosight"}, // 0.13%
			{9165.94588707767, "optic_Holosight_smg"}, // 0.13%
			{9178.91807470739, "optic_SOS"}, // 0.13%
			{9191.89026233712, "optic_MRCO"}, // 0.13%
			{9204.86244996684, "optic_DMS"}, // 0.13%
			{9217.83463759656, "optic_Yorris"}, // 0.13%
			{9230.80682522628, "optic_MRD"}, // 0.13%
			{9243.77901285601, "optic_LRPS"}, // 0.13%
			{9256.75120048573, "optic_AMS"}, // 0.13%
			{9269.72338811545, "optic_AMS_snd"}, // 0.13%
			{9282.69557574517, "CUP_optic_PSO_3"}, // 0.13%
			{9295.6677633749, "optic_ERCO_blk_F"}, // 0.13%
			{9308.63995100462, "CUP_optic_HoloDesert"}, // 0.13%
			{9321.61213863434, "CUP_optic_HoloBlack"}, // 0.13%
			{9334.58432626406, "CUP_optic_RCO"}, // 0.13%
			{9347.55651389379, "CUP_optic_CompM2_Desert"}, // 0.13%
			{9360.52870152351, "CUP_optic_CompM2_Woodland2"}, // 0.13%
			{9373.50088915323, "CUP_optic_CompM2_Woodland"}, // 0.13%
			{9386.47307678296, "CUP_optic_CompM2_Black"}, // 0.13%
			{9399.44526441268, "CUP_optic_Leupold_VX3"}, // 0.13%
			{9412.4174520424, "CUP_optic_LeupoldMk4"}, // 0.13%
			{9425.38963967212, "CUP_optic_ACOG"}, // 0.13%
			{9438.36182730185, "CUP_optic_CompM4"}, // 0.13%
			{9451.33401493157, "CUP_optic_SUSAT"}, // 0.13%
			{9464.30620256129, "CUP_optic_HoloWdl"}, // 0.13%
			{9477.27839019101, "CUP_optic_SB_3_12x50_PMII"}, // 0.13%
			{9490.25057782074, "CUP_optic_Kobra"}, // 0.13%
			{9503.22276545046, "CUP_optic_Eotech533"}, // 0.13%
			{9516.19495308018, "CUP_optic_Eotech533Grey"}, // 0.13%
			{9529.1671407099, "CUP_optic_PechenegScope"}, // 0.13%
			{9540.07369336674, "CUP_muzzle_snds_AWM"}, // 0.11%
			{9550.98024602358, "CUP_muzzle_snds_G36_black"}, // 0.11%
			{9561.88679868041, "CUP_muzzle_snds_G36_desert"}, // 0.11%
			{9572.79335133725, "CUP_muzzle_snds_M16"}, // 0.11%
			{9583.69990399408, "muzzle_snds_H_MG_blk_F"}, // 0.11%
			{9594.60645665092, "muzzle_snds_H_MG_khk_F"}, // 0.11%
			{9605.51300930775, "CUP_muzzle_snds_M16_camo"}, // 0.11%
			{9616.41956196459, "muzzle_snds_B_snd_F"}, // 0.11%
			{9627.32611462142, "muzzle_snds_B_khk_F"}, // 0.11%
			{9638.23266727826, "muzzle_snds_H_khk_F"}, // 0.11%
			{9649.1392199351, "muzzle_snds_H_snd_F"}, // 0.11%
			{9658.07310915487, "CUP_acc_CZ_M3X"}, // 0.09%
			{9667.00699837464, "CUP_acc_ANPEQ_2_grey"}, // 0.09%
			{9675.94088759442, "CUP_acc_ANPEQ_2_desert"}, // 0.09%
			{9684.87477681419, "CUP_acc_ANPEQ_2_camo"}, // 0.09%
			{9693.80866603397, "CUP_acc_XM8_light_module"}, // 0.09%
			{9702.74255525374, "CUP_acc_Flashlight_desert"}, // 0.09%
			{9711.67644447351, "CUP_acc_Flashlight_wdl"}, // 0.09%
			{9720.61033369329, "CUP_acc_Flashlight"}, // 0.09%
			{9729.54422291306, "CUP_acc_ANPEQ_2"}, // 0.09%
			{9738.47811213283, "CUP_acc_ANPEQ_15"}, // 0.09%
			{9747.41200135261, "CUP_SVD_camo_d_half"}, // 0.09%
			{9756.34589057238, "CUP_SVD_camo_d"}, // 0.09%
			{9765.27977979216, "CUP_SVD_camo_g_half"}, // 0.09%
			{9774.21366901193, "CUP_acc_LLM"}, // 0.09%
			{9783.1475582317, "acc_flashlight"}, // 0.09%
			{9792.08144745148, "acc_pointer_IR"}, // 0.09%
			{9801.01533667125, "CUP_item_CDF_dogtags"}, // 0.09%
			{9809.94922589103, "CUP_item_Cobalt_File"}, // 0.09%
			{9818.8831151108, "CUP_Mxx_camo"}, // 0.09%
			{9827.81700433057, "CUP_SVD_camo_g"}, // 0.09%
			{9836.75089355035, "CUP_Mxx_camo_half"}, // 0.09%
			{9845.68478277012, "CUP_acc_Glock17_Flashlight"}, // 0.09%
			{9854.61867198989, "hlc_acc_Surefiregrip"}, // 0.09%
			{9861.162603584, "muzzle_snds_58_blk_F"}, // 0.07%
			{9867.7065351781, "muzzle_snds_58_wdm_F"}, // 0.07%
			{9874.2504667722, "muzzle_snds_58_ghex_F"}, // 0.07%
			{9880.7943983663, "muzzle_snds_58_hex_F"}, // 0.07%
			{9887.3383299604, "muzzle_snds_65_TI_blk_F"}, // 0.07%
			{9893.88226155451, "muzzle_snds_65_TI_hex_F"}, // 0.07%
			{9900.42619314861, "muzzle_snds_65_TI_ghex_F"}, // 0.07%
			{9906.91228696347, "HLC_Optic_ZFSG1"}, // 0.06%
			{9912.43592814774, "B_Bergen_dgtl_F"}, // 0.06%
			{9917.95956933201, "B_Bergen_mcamo_F"}, // 0.06%
			{9923.48321051628, "B_Bergen_hex_F"}, // 0.06%
			{9929.00685170055, "B_Bergen_tna_F"}, // 0.06%
			{9934.50095469666, "CUP_V_B_IOTV_AT"}, // 0.05%
			{9939.99505769278, "TRYK_V_PlateCarrier_blk"}, // 0.05%
			{9945.4891606889, "V_PlateCarrierGL_blk"}, // 0.05%
			{9950.98326368502, "TRYK_V_PlateCarrier_ACU"}, // 0.05%
			{9953.57770121096, "HLC_Optic_G36Export15x"}, // 0.03%
			{9956.1721387369, "optic_NVS"}, // 0.03%
			{9958.76657626285, "HLC_Optic_G36Export15x2d"}, // 0.03%
			{9961.36101378879, "HLC_Optic_G36dualoptic35x"}, // 0.03%
			{9963.95545131474, "HLC_Optic_G36Dualoptic15x"}, // 0.03%
			{9966.54988884068, "HLC_Optic_G36Export35x2d"}, // 0.03%
			{9969.14432636662, "HLC_Optic_G36Export35x"}, // 0.03%
			{9971.73876389257, "HLC_Optic_G36dualoptic35x2d"}, // 0.03%
			{9974.33320141851, "HLC_Optic_G36Dualoptic15x2d"}, // 0.03%
			{9976.51451194988, "muzzle_snds_338_black"}, // 0.02%
			{9978.69582248125, "muzzle_snds_338_green"}, // 0.02%
			{9980.87713301261, "muzzle_snds_338_sand"}, // 0.02%
			{9983.05844354398, "muzzle_snds_93mmg"}, // 0.02%
			{9985.23975407535, "muzzle_snds_93mmg_tan"}, // 0.02%
			{9986.78239260429, "U_I_FullGhillie_lsh"}, // 0.02%
			{9988.32503113322, "TAC_W_ghillie_O1"}, // 0.02%
			{9989.6222498962, "CUP_optic_AN_PVS_4"}, // 0.01%
			{9990.91946865917, "CUP_optic_AN_PVS_10"}, // 0.01%
			{9992.21668742214, "hlc_optic_PVS4G3"}, // 0.01%
			{9993.51390618512, "hlc_optic_PVS4FAL"}, // 0.01%
			{9994.81112494809, "hlc_optic_Kern"}, // 0.01%
			{9996.10834371106, "hlc_optic_Kern2d"}, // 0.01%
			{9997.40556247404, "CUP_optic_NSPU_RPG"}, // 0.01%
			{9998.70278123701, "hlc_optic_artel_m14"}, // 0.01%
			{9999.99999999998, "CUP_optic_NSPU"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  hlc_lmg_M60E4
	  CUP_muzzle_snds_SCAR_H
	  CUP_item_CDF_dogtags
	  optic_Aco_smg
	  CUP_arifle_M4A1_black
	  Rangefinder
	  hlc_rifle_auga3
	  H_HelmetB_grass
	  bipod_03_F_blk
	  HandGrenade
	  CUP_arifle_CZ805_A2
	  B_Carryall_mcamo
	  muzzle_snds_m_snd_F
	  optic_ERCO_blk_F
	  hlc_20Rnd_762x51_T_amt
	  TRYK_U_B_ARO2_CombatUniform
	  CUP_optic_LeupoldMk4
	  CUP_20Rnd_TE1_White_Tracer_762x51_DMR
	  B_Carryall_ocamo
	  CUP_optic_CompM2_Woodland
	  1Rnd_HE_Grenade_shell
	  hlc_40Rnd_556x45_TDIM_AUG
	  CUP_10Rnd_9x39_SP5_VSS_M
	  CUP_arifle_M4A1_desert
	  CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR
	  hlc_30rnd_556x45_TDim
	  hlc_20rnd_762x51_T_G3
	  CUP_30Rnd_9x19_MP5
	  hlc_rifle_aks74_MTK
	  CUP_30Rnd_9x19_MP5
	  CUP_optic_Elcan_reflex
	  arifle_SPAR_01_blk_F
	  ItemGPS
	  NVGoggles
	  ItemGPS
	  hlc_30rnd_556x45_SPR
	  ItemGPS
	  Rangefinder
	  V_TacVest_khk
	  CUP_arifle_CZ805_A2
	  B_TacticalPack_blk
	  CUP_arifle_Mk17_STD_FG
	  hlc_rifle_aks74
	  hlc_rifle_Colt727
	  hlc_30Rnd_545x39_EP_ak
	  optic_AMS_snd
	  muzzle_snds_acp
	  CUP_optic_LeupoldMk4_MRT_tan
	  muzzle_snds_acp
	  HLC_Bipod_G36
	  hlc_rifle_Colt727_GL
	  ItemGPS
	  B_Carryall_mcamo
	  3Rnd_HE_Grenade_shell
	  B_TacticalPack_mcamo
	  CUP_IED_V1_M
	  hlc_rifle_ak12GL
	  hlc_40Rnd_556x45_B_AUG
	  CUP_arifle_L85A2
	  CUP_8Rnd_B_Saiga12_74Pellets_M
	  arifle_CTAR_blk_F
	  hlc_20Rnd_762x51_S_M14
	  hlc_30rnd_556x45_TDim
	  TRYK_U_B_PCUHsW5
	  CUP_arifle_Mk16_STD_FG
	  ItemGPS
	  bipod_01_F_khk
	  TAC_V_tacSVD_BK
	  hlc_rifle_aks74_MTK
	  CUP_V_B_IOTV_AT
	  hlc_20Rnd_762x51_S_fal
	  CUP_optic_LeupoldMk4_CQ_T
	  muzzle_snds_B
	  V_TacVest_oli
	  TRYK_U_B_Snowt
	  3Rnd_HE_Grenade_shell
	  TRYK_U_B_MARPAT_WOOD_CombatUniform
	  hlc_rifle_CQBR
	  hlc_20rnd_762x51_b_G3
	  150Rnd_556x45_Drum_Mag_F
	  NVGoggles_OPFOR
	  hlc_optic_kobra
	  CUP_arifle_Mk16_STD_FG
	  hlc_rifle_G36V
	  CUP_muzzle_snds_XM8
	  optic_KHS_hex
	  100Rnd_580x42_Mag_F
	  optic_MRD
	  HandGrenade
	  30Rnd_556x45_Stanag_green
	  optic_SOS_khk_F
	  CUP_muzzle_snds_MicroUzi
	  30Rnd_556x45_Stanag_red
	  CUP_H_USArmy_Helmet_ECH1_Black
	  hlc_rifle_stgw57_commando
	  B_Carryall_khk
	  CUP_arifle_L85A2
	  Rangefinder
	  Rangefinder
	  hlc_20Rnd_762x51_b_amt
	*/
	class MilitaryHigh
	{
		count = 613;
		half = 7239.61162485545;
		halfIndex = 306;
		sum = 9999.99999999996;
		items[] = 
		{
			{210.260723296888, "Rangefinder"}, // 2.10%
			{420.521446593776, "ItemGPS"}, // 2.10%
			{518.869204264901, "B_Kitbag_cbr"}, // 0.98%
			{617.216961936026, "B_Kitbag_rgr"}, // 0.98%
			{715.564719607152, "B_Kitbag_mcamo"}, // 0.98%
			{813.912477278277, "CUP_B_RUS_Backpack"}, // 0.98%
			{912.260234949402, "B_TacticalPack_blk"}, // 0.98%
			{1010.60799262053, "B_TacticalPack_rgr"}, // 0.98%
			{1108.95575029165, "B_TacticalPack_mcamo"}, // 0.98%
			{1187.12960895332, "1Rnd_HE_Grenade_shell"}, // 0.78%
			{1265.30346761498, "CUP_1Rnd_HE_M203"}, // 0.78%
			{1343.47732627664, "3Rnd_HE_Grenade_shell"}, // 0.78%
			{1421.65118493831, "HandGrenade"}, // 0.78%
			{1499.82504359997, "MiniGrenade"}, // 0.78%
			{1577.99890226163, "hlc_VOG25_AK"}, // 0.78%
			{1651.36527763662, "V_TacVest_khk"}, // 0.73%
			{1724.7316530116, "V_TacVestIR_blk"}, // 0.73%
			{1798.09802838659, "TAC_V_tacSVD_OD"}, // 0.73%
			{1871.46440376157, "TAC_V_tacSVD_BK"}, // 0.73%
			{1944.83077913655, "V_TacVest_camo"}, // 0.73%
			{2018.19715451154, "V_TacVest_blk"}, // 0.73%
			{2091.56352988652, "V_TacVest_brn"}, // 0.73%
			{2164.9299052615, "V_I_G_resistanceLeader_F"}, // 0.73%
			{2238.29628063649, "V_TacVest_blk_POLICE"}, // 0.73%
			{2311.66265601147, "V_TacVest_oli"}, // 0.73%
			{2374.74087300054, "NVGoggles"}, // 0.63%
			{2437.8190899896, "NVGoggles_INDEP"}, // 0.63%
			{2500.89730697867, "NVGoggles_OPFOR"}, // 0.63%
			{2525.53391698113, "CUP_arifle_Mk16_STD_EGLM"}, // 0.25%
			{2550.1705269836, "CUP_arifle_Mk16_SV"}, // 0.25%
			{2574.80713698606, "arifle_Mk20_F"}, // 0.25%
			{2599.44374698853, "hlc_rifle_samr2"}, // 0.25%
			{2624.08035699099, "arifle_SPAR_01_blk_F"}, // 0.25%
			{2648.71696699345, "hlc_rifle_auga3_b"}, // 0.25%
			{2673.35357699592, "arifle_TRG20_F"}, // 0.25%
			{2697.99018699838, "hlc_rifle_auga3"}, // 0.25%
			{2722.62679700085, "hlc_rifle_auga3_GL_B"}, // 0.25%
			{2747.26340700331, "hlc_rifle_aek971"}, // 0.25%
			{2771.90001700577, "hlc_rifle_aek971_mtk"}, // 0.25%
			{2796.53662700824, "hlc_rifle_auga3_bl"}, // 0.25%
			{2821.1732370107, "CUP_arifle_Mk16_STD_FG"}, // 0.25%
			{2845.80984701316, "CUP_arifle_Mk16_CQC_FG"}, // 0.25%
			{2870.44645701563, "CUP_arifle_CZ805_A2"}, // 0.25%
			{2895.08306701809, "hlc_rifle_CQBR"}, // 0.25%
			{2919.71967702056, "CUP_arifle_CZ805_A1"}, // 0.25%
			{2944.35628702302, "CUP_arifle_CZ805_GL"}, // 0.25%
			{2968.99289702548, "hlc_rifle_Colt727_GL"}, // 0.25%
			{2993.62950702795, "hlc_rifle_Colt727"}, // 0.25%
			{3018.26611703041, "CUP_srifle_Mk12SPR"}, // 0.25%
			{3042.90272703288, "arifle_CTAR_blk_F"}, // 0.25%
			{3067.53933703534, "hlc_rifle_bcmjack"}, // 0.25%
			{3092.1759470378, "hlc_rifle_RU556"}, // 0.25%
			{3116.81255704027, "hlc_rifle_RU5562"}, // 0.25%
			{3141.44916704273, "hlc_rifle_G36C"}, // 0.25%
			{3166.08577704519, "hlc_rifle_G36KV"}, // 0.25%
			{3190.72238704766, "hlc_rifle_m4m203"}, // 0.25%
			{3215.35899705012, "hlc_rifle_G36V"}, // 0.25%
			{3239.99560705259, "hlc_rifle_hk33a2"}, // 0.25%
			{3264.63221705505, "hlc_rifle_hk33a2RIS"}, // 0.25%
			{3289.26882705751, "hlc_rifle_hk53"}, // 0.25%
			{3313.90543705998, "hlc_rifle_hk53RAS"}, // 0.25%
			{3338.54204706244, "CUP_arifle_L85A2"}, // 0.25%
			{3363.17865706491, "CUP_arifle_L85A2_G"}, // 0.25%
			{3387.81526706737, "CUP_arifle_L86A2"}, // 0.25%
			{3412.45187706983, "CUP_arifle_M16A2"}, // 0.25%
			{3437.0884870723, "CUP_arifle_M16A4_Base"}, // 0.25%
			{3461.72509707476, "CUP_arifle_M4A1_black"}, // 0.25%
			{3486.36170707722, "CUP_arifle_M4A1_camo"}, // 0.25%
			{3510.99831707969, "CUP_arifle_M4A1_desert"}, // 0.25%
			{3535.63492708215, "hlc_rifle_G36TAC"}, // 0.25%
			{3560.27153708462, "hlc_rifle_M4"}, // 0.25%
			{3583.72369468311, "DemoCharge_Remote_Mag"}, // 0.23%
			{3607.17585228161, "CUP_IED_V3_M"}, // 0.23%
			{3630.62800988011, "CUP_IED_V2_M"}, // 0.23%
			{3654.08016747861, "CUP_IED_V1_M"}, // 0.23%
			{3677.53232507711, "SatchelCharge_Remote_Mag"}, // 0.23%
			{3700.98448267561, "CUP_IED_V4_M"}, // 0.23%
			{3720.40346667437, "muzzle_snds_L"}, // 0.19%
			{3739.82245067312, "muzzle_snds_B"}, // 0.19%
			{3759.24143467188, "muzzle_snds_H"}, // 0.19%
			{3778.66041867064, "muzzle_snds_H_MG"}, // 0.19%
			{3798.0794026694, "hlc_muzzle_556NATO_KAC"}, // 0.19%
			{3817.49838666815, "hlc_muzzle_300blk_KAC"}, // 0.19%
			{3836.91737066691, "muzzle_snds_M"}, // 0.19%
			{3856.33635466567, "hlc_muzzle_Tundra"}, // 0.19%
			{3875.75533866442, "muzzle_snds_H_SW"}, // 0.19%
			{3895.17432266318, "CUP_muzzle_snds_M110"}, // 0.19%
			{3914.59330666194, "muzzle_snds_m_khk_F"}, // 0.19%
			{3934.0122906607, "CUP_muzzle_snds_XM8"}, // 0.19%
			{3953.43127465945, "CUP_muzzle_mfsup_SCAR_H"}, // 0.19%
			{3972.85025865821, "CUP_muzzle_snds_SCAR_H"}, // 0.19%
			{3992.26924265697, "CUP_muzzle_mfsup_SCAR_L"}, // 0.19%
			{4011.68822665572, "CUP_muzzle_snds_SCAR_L"}, // 0.19%
			{4031.10721065448, "CUP_muzzle_snds_Mk12"}, // 0.19%
			{4050.52619465324, "CUP_muzzle_snds_M14"}, // 0.19%
			{4069.94517865199, "muzzle_snds_acp"}, // 0.19%
			{4089.36416265075, "CUP_acc_sffh"}, // 0.19%
			{4108.78314664951, "CUP_muzzle_snds_L85"}, // 0.19%
			{4128.20213064827, "hlc_muzzle_Agendasix10mm"}, // 0.19%
			{4147.62111464702, "hlc_muzzle_Agendasix"}, // 0.19%
			{4167.04009864578, "hlc_muzzle_snds_M14"}, // 0.19%
			{4186.45908264454, "CUP_acc_bfa"}, // 0.19%
			{4205.8780666433, "hlc_muzzle_snds_g3"}, // 0.19%
			{4225.29705064205, "muzzle_snds_m_snd_F"}, // 0.19%
			{4244.71603464081, "CUP_muzzle_PBS4"}, // 0.19%
			{4264.13501863957, "CUP_muzzle_PB6P9"}, // 0.19%
			{4283.55400263833, "hlc_muzzle_snds_HK33"}, // 0.19%
			{4302.97298663708, "CUP_muzzle_snds_M9"}, // 0.19%
			{4322.39197063584, "CUP_muzzle_snds_MicroUzi"}, // 0.19%
			{4341.8109546346, "CUP_muzzle_Bizon"}, // 0.19%
			{4361.22993863336, "hlc_muzzle_762SUP_AK"}, // 0.19%
			{4380.64892263211, "hlc_muzzle_snds_fal"}, // 0.19%
			{4400.06790663087, "hlc_muzzle_snds_a6AUG"}, // 0.19%
			{4419.48689062963, "hlc_muzzle_545SUP_AK"}, // 0.19%
			{4438.90587462839, "hlc_muzzle_snds_AUG"}, // 0.19%
			{4458.32485862714, "muzzle_HBADGER"}, // 0.19%
			{4474.37107172086, "TRYK_H_Helmet_WOOD"}, // 0.16%
			{4490.41728481457, "H_HelmetB_TI_tna_F"}, // 0.16%
			{4506.46349790828, "CUP_H_USMC_MICH2000_ESS_COMM_WDL"}, // 0.16%
			{4522.50971100199, "CUP_H_RACS_Helmet_wdl"}, // 0.16%
			{4538.5559240957, "CUP_H_RACS_Helmet_olive"}, // 0.16%
			{4554.60213718941, "CUP_H_USMC_HelmetWDL"}, // 0.16%
			{4570.64835028312, "TRYK_H_Helmet_Winter_2"}, // 0.16%
			{4586.69456337683, "TRYK_H_Helmet_Snow"}, // 0.16%
			{4602.74077647054, "TRYK_H_WH"}, // 0.16%
			{4618.78698956425, "CUP_H_CDF_H_PASGT_UN"}, // 0.16%
			{4634.83320265796, "H_HelmetB"}, // 0.16%
			{4650.87941575167, "CUP_H_USArmy_HelmetMICH_earpro"}, // 0.16%
			{4666.92562884538, "CUP_H_CDF_H_PASGT_FST"}, // 0.16%
			{4682.97184193909, "H_HelmetB_black"}, // 0.16%
			{4699.0180550328, "H_HelmetB_grass"}, // 0.16%
			{4715.06426812651, "CUP_H_USArmy_Helmet_ECH1_Black"}, // 0.16%
			{4731.11048122022, "CUP_H_USArmy_Helmet_ECH1_Green"}, // 0.16%
			{4747.15669431393, "H_HelmetSpecB"}, // 0.16%
			{4763.20290740764, "TRYK_H_Helmet_Winter"}, // 0.16%
			{4778.44680984667, "bipod_02_F_tan"}, // 0.15%
			{4793.69071228569, "CUP_bipod_VLTOR_Modpod"}, // 0.15%
			{4808.93461472471, "CUP_bipod_Harris_1A2_L"}, // 0.15%
			{4824.17851716374, "bipod_01_F_khk"}, // 0.15%
			{4839.42241960276, "bipod_03_F_oli"}, // 0.15%
			{4854.66632204179, "bipod_03_F_blk"}, // 0.15%
			{4869.91022448081, "bipod_02_F_hex"}, // 0.15%
			{4885.15412691983, "bipod_02_F_blk"}, // 0.15%
			{4900.39802935886, "bipod_01_F_snd"}, // 0.15%
			{4915.64193179788, "bipod_01_F_blk"}, // 0.15%
			{4930.88583423691, "HLC_Bipod_G36"}, // 0.15%
			{4946.12973667593, "bipod_01_F_mtp"}, // 0.15%
			{4960.8819003266, "TRYK_B_Carryall_blk"}, // 0.15%
			{4975.63406397727, "TRYK_B_Carryall_JSDF"}, // 0.15%
			{4990.38622762794, "TRYK_B_Coyotebackpack_WH"}, // 0.15%
			{5005.13839127861, "TRYK_B_Coyotebackpack_OD"}, // 0.15%
			{5019.89055492928, "TRYK_B_Coyotebackpack"}, // 0.15%
			{5034.64271857994, "TRYK_B_Carryall_wh"}, // 0.15%
			{5049.39488223061, "B_Carryall_khk"}, // 0.15%
			{5064.14704588128, "B_Carryall_mcamo"}, // 0.15%
			{5078.89920953195, "TRYK_B_Coyotebackpack_BLK"}, // 0.15%
			{5093.65137318262, "B_Carryall_cbr"}, // 0.15%
			{5108.40353683329, "B_Carryall_ghex_F"}, // 0.15%
			{5123.15570048396, "B_Carryall_ocamo"}, // 0.15%
			{5137.90786413463, "TRYK_B_Carryall_wood"}, // 0.15%
			{5152.6600277853, "B_Carryall_oucamo"}, // 0.15%
			{5167.33330286029, "TAC_PBDFG2_B_1"}, // 0.15%
			{5182.00657793529, "CUP_V_BAF_Osprey_Mk2_DPM_Empty"}, // 0.15%
			{5196.67985301029, "TRYK_V_ArmorVest_Ranger2"}, // 0.15%
			{5211.35312808528, "V_PlateCarrier2_rgr"}, // 0.15%
			{5226.02640316028, "TRYK_V_ArmorVest_Delta2"}, // 0.15%
			{5240.69967823528, "TRYK_V_ArmorVest_AOR2_2"}, // 0.15%
			{5255.37295331028, "TRYK_V_ArmorVest_green2"}, // 0.15%
			{5270.04622838527, "TRYK_V_PlateCarrier_blk_L"}, // 0.15%
			{5284.71950346027, "TRYK_V_PlateCarrier_wood_L"}, // 0.15%
			{5299.39277853527, "TAC_ArmorVest_Winter"}, // 0.15%
			{5314.06605361026, "TRYK_V_PlateCarrier_ACU_L"}, // 0.15%
			{5328.32935413801, "CUP_20Rnd_TE1_White_Tracer_762x51_DMR"}, // 0.14%
			{5342.59265466575, "CUP_5Rnd_762x51_M24"}, // 0.14%
			{5356.85595519349, "CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR"}, // 0.14%
			{5371.11925572123, "20Rnd_762x51_Mag"}, // 0.14%
			{5385.38255624897, "hlc_100Rnd_762x51_M_M60E4"}, // 0.14%
			{5399.64585677672, "hlc_100Rnd_762x51_B_M60E4"}, // 0.14%
			{5413.90915730446, "hlc_100Rnd_762x51_T_M60E4"}, // 0.14%
			{5428.1724578322, "hlc_100Rnd_762x51_Mdim_M60E4"}, // 0.14%
			{5442.43575835994, "150Rnd_762x51_Box"}, // 0.14%
			{5456.69905888769, "CUP_20Rnd_TE1_Green_Tracer_762x51_DMR"}, // 0.14%
			{5470.96235941543, "150Rnd_762x51_Box_Tracer"}, // 0.14%
			{5485.22565994317, "CUP_20Rnd_762x51_B_SCAR"}, // 0.14%
			{5499.48896047091, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR"}, // 0.14%
			{5513.75226099865, "hlc_100Rnd_762x51_Barrier_M60E4"}, // 0.14%
			{5528.0155615264, "CUP_20Rnd_TE1_Red_Tracer_762x51_DMR"}, // 0.14%
			{5542.27886205414, "CUP_20Rnd_TE1_Green_Tracer_762x51_M110"}, // 0.14%
			{5556.54216258188, "CUP_20Rnd_762x51_DMR"}, // 0.14%
			{5570.80546310962, "hlc_30rnd_556x45_b_HK33"}, // 0.14%
			{5585.06876363736, "hlc_30rnd_556x45_mdim_HK33"}, // 0.14%
			{5599.33206416511, "hlc_30rnd_556x45_tdim_HK33"}, // 0.14%
			{5613.59536469285, "hlc_30rnd_556x45_SOST_HK33"}, // 0.14%
			{5627.85866522059, "hlc_30rnd_556x45_EPR_HK33"}, // 0.14%
			{5642.12196574833, "hlc_30rnd_556x45_t_HK33"}, // 0.14%
			{5656.38526627607, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR"}, // 0.14%
			{5670.64856680382, "CUP_20Rnd_B_AA12_Pellets"}, // 0.14%
			{5684.91186733156, "CUP_20Rnd_762x51_L129_M"}, // 0.14%
			{5699.1751678593, "CUP_20Rnd_762x51_B_M110"}, // 0.14%
			{5713.43846838704, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110"}, // 0.14%
			{5727.70176891479, "CUP_20Rnd_TE1_Red_Tracer_762x51_M110"}, // 0.14%
			{5741.96506944253, "CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR"}, // 0.14%
			{5756.22836997027, "CUP_20Rnd_TE1_White_Tracer_762x51_M110"}, // 0.14%
			{5770.49167049801, "CUP_20Rnd_B_AA12_74Slug"}, // 0.14%
			{5784.75497102575, "CUP_20Rnd_TE1_White_Tracer_762x51_SCAR"}, // 0.14%
			{5799.0182715535, "CUP_30Rnd_Sa58_M_TracerR"}, // 0.14%
			{5813.28157208124, "200Rnd_65x39_cased_Box"}, // 0.14%
			{5827.54487260898, "hlc_20Rnd_762x51_S_M14"}, // 0.14%
			{5841.80817313672, "hlc_50Rnd_762x51_B_M14"}, // 0.14%
			{5856.07147366446, "CUP_20Rnd_9x39_SP5_VSS_M"}, // 0.14%
			{5870.33477419221, "CUP_10Rnd_9x39_SP5_VSS_M"}, // 0.14%
			{5884.59807471995, "hlc_30Rnd_556x45_B_AUG"}, // 0.14%
			{5898.86137524769, "hlc_30Rnd_556x45_SOST_AUG"}, // 0.14%
			{5913.12467577543, "hlc_20Rnd_762x51_Tdim_M14"}, // 0.14%
			{5927.38797630317, "hlc_30Rnd_556x45_SPR_AUG"}, // 0.14%
			{5941.65127683092, "hlc_30Rnd_556x45_MDIM_AUG"}, // 0.14%
			{5955.91457735866, "hlc_40Rnd_556x45_B_AUG"}, // 0.14%
			{5970.1778778864, "hlc_40Rnd_556x45_SOST_AUG"}, // 0.14%
			{5984.44117841414, "hlc_40Rnd_556x45_SPR_AUG"}, // 0.14%
			{5998.70447894189, "hlc_40Rnd_556x45_TDIM_AUG"}, // 0.14%
			{6012.96777946963, "hlc_30rnd_556x45_TDIM_G36"}, // 0.14%
			{6027.23107999737, "hlc_30Rnd_556x45_T_AUG"}, // 0.14%
			{6041.49438052511, "200Rnd_65x39_cased_Box_Tracer"}, // 0.14%
			{6055.75768105285, "hlc_20Rnd_762x51_Mdim_M14"}, // 0.14%
			{6070.0209815806, "hlc_20Rnd_762x51_mk316_M14"}, // 0.14%
			{6084.28428210834, "CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M"}, // 0.14%
			{6098.54758263608, "CUP_30Rnd_Sa58_M_TracerG"}, // 0.14%
			{6112.81088316382, "CUP_30Rnd_Sa58_M_TracerY"}, // 0.14%
			{6127.07418369156, "CUP_30Rnd_Sa58_M"}, // 0.14%
			{6141.33748421931, "hlc_20Rnd_762x51_b_amt"}, // 0.14%
			{6155.60078474705, "hlc_20Rnd_762x51_mk316_amt"}, // 0.14%
			{6169.86408527479, "hlc_20Rnd_762x51_T_M14"}, // 0.14%
			{6184.12738580253, "hlc_20Rnd_762x51_bball_amt"}, // 0.14%
			{6198.39068633027, "hlc_24Rnd_75x55_B_stgw"}, // 0.14%
			{6212.65398685802, "hlc_24Rnd_75x55_ap_stgw"}, // 0.14%
			{6226.91728738576, "hlc_24Rnd_75x55_T_stgw"}, // 0.14%
			{6241.1805879135, "CUP_10Rnd_762x54_SVD_M"}, // 0.14%
			{6255.44388844124, "hlc_20Rnd_762x51_B_M14"}, // 0.14%
			{6269.70718896899, "hlc_20Rnd_762x51_barrier_M14"}, // 0.14%
			{6283.97048949673, "hlc_20Rnd_762x51_T_amt"}, // 0.14%
			{6298.23379002447, "hlc_30rnd_556x45_MDIM_G36"}, // 0.14%
			{6312.49709055221, "hlc_50rnd_556x45_EPR"}, // 0.14%
			{6326.76039107995, "hlc_30rnd_556x45_SPR_G36"}, // 0.14%
			{6341.0236916077, "30Rnd_762x39_Mag_Tracer_Green_F"}, // 0.14%
			{6355.28699213544, "hlc_30Rnd_545x39_B_AK"}, // 0.14%
			{6369.55029266318, "hlc_30Rnd_545x39_t_ak"}, // 0.14%
			{6383.81359319092, "hlc_30Rnd_545x39_EP_ak"}, // 0.14%
			{6398.07689371866, "hlc_45Rnd_545x39_t_rpk"}, // 0.14%
			{6412.34019424641, "hlc_30Rnd_545x39_S_AK"}, // 0.14%
			{6426.60349477415, "hlc_60Rnd_545x39_t_rpk"}, // 0.14%
			{6440.86679530189, "30Rnd_545x39_Mag_F"}, // 0.14%
			{6455.13009582963, "30Rnd_545x39_Mag_Green_F"}, // 0.14%
			{6469.39339635737, "30Rnd_545x39_Mag_Tracer_F"}, // 0.14%
			{6483.65669688512, "30Rnd_545x39_Mag_Tracer_Green_F"}, // 0.14%
			{6497.91999741286, "hlc_30rnd_556x45_Tracers_G36"}, // 0.14%
			{6512.1832979406, "hlc_30rnd_556x45_SOST"}, // 0.14%
			{6526.44659846834, "hlc_30rnd_556x45_SPR"}, // 0.14%
			{6540.70989899609, "hlc_30rnd_556x45_MDim"}, // 0.14%
			{6554.97319952383, "hlc_30rnd_556x45_TDim"}, // 0.14%
			{6569.23650005157, "30Rnd_556x45_Stanag"}, // 0.14%
			{6583.49980057931, "30Rnd_556x45_Stanag_Tracer_Red"}, // 0.14%
			{6597.76310110705, "30Rnd_556x45_Stanag_Tracer_Green"}, // 0.14%
			{6612.0264016348, "30Rnd_556x45_Stanag_Tracer_Yellow"}, // 0.14%
			{6626.28970216254, "30Rnd_556x45_Stanag_green"}, // 0.14%
			{6640.55300269028, "30Rnd_762x39_Mag_Tracer_F"}, // 0.14%
			{6654.81630321802, "30Rnd_762x39_Mag_Green_F"}, // 0.14%
			{6669.07960374576, "30Rnd_762x39_Mag_F"}, // 0.14%
			{6683.34290427351, "hlc_30rnd_762x39_s_ak"}, // 0.14%
			{6697.60620480125, "CUP_10Rnd_9x19_Compact"}, // 0.14%
			{6711.86950532899, "CUP_17Rnd_9x19_glock17"}, // 0.14%
			{6726.13280585673, "hlc_30Rnd_9x19_B_MP5"}, // 0.14%
			{6740.39610638447, "CUP_7Rnd_45ACP_1911"}, // 0.14%
			{6754.65940691222, "CUP_15Rnd_9x19_M9"}, // 0.14%
			{6768.92270743996, "CUP_8Rnd_9x18_Makarov_M"}, // 0.14%
			{6783.1860079677, "CUP_30Rnd_9x19_UZI"}, // 0.14%
			{6797.44930849544, "CUP_20Rnd_B_765x17_Ball_M"}, // 0.14%
			{6811.71260902319, "CUP_6Rnd_45ACP_M"}, // 0.14%
			{6825.97590955093, "CUP_8Rnd_B_Beneli_74Slug"}, // 0.14%
			{6840.23921007867, "30Rnd_556x45_Stanag_red"}, // 0.14%
			{6854.50251060641, "CUP_8Rnd_B_Beneli_74Pellets"}, // 0.14%
			{6868.76581113415, "CUP_30Rnd_9x19_MP5"}, // 0.14%
			{6883.0291116619, "CUP_8Rnd_B_Saiga12_74Slug_M"}, // 0.14%
			{6897.29241218964, "CUP_8Rnd_B_Saiga12_74Pellets_M"}, // 0.14%
			{6911.55571271738, "CUP_64Rnd_9x19_Bizon_M"}, // 0.14%
			{6925.81901324512, "CUP_5x_22_LR_17_HMR_M"}, // 0.14%
			{6940.08231377286, "hlc_5rnd_3006_1903"}, // 0.14%
			{6954.34561430061, "hlc_30Rnd_762x39_b_ak"}, // 0.14%
			{6968.60891482835, "hlc_30Rnd_762x39_t_ak"}, // 0.14%
			{6982.87221535609, "hlc_45Rnd_762x39_m_rpk"}, // 0.14%
			{6997.13551588383, "hlc_45Rnd_762x39_t_rpk"}, // 0.14%
			{7011.39881641157, "CUP_10x_303_M"}, // 0.14%
			{7025.66211693932, "150Rnd_556x45_Drum_Mag_Tracer_F"}, // 0.14%
			{7039.92541746706, "hlc_30rnd_556x45_EPR"}, // 0.14%
			{7054.1887179948, "29rnd_300BLK_STANAG_T"}, // 0.14%
			{7068.45201852254, "200Rnd_556x45_Box_F"}, // 0.14%
			{7082.71531905029, "200Rnd_556x45_Box_Red_F"}, // 0.14%
			{7096.97861957803, "200Rnd_556x45_Box_Tracer_F"}, // 0.14%
			{7111.24192010577, "200Rnd_556x45_Box_Tracer_Red_F"}, // 0.14%
			{7125.50522063351, "hlc_20rnd_762x51_b_G3"}, // 0.14%
			{7139.76852116125, "hlc_20rnd_762x51_Mk316_G3"}, // 0.14%
			{7154.031821689, "hlc_20rnd_762x51_barrier_G3"}, // 0.14%
			{7168.29512221674, "hlc_20rnd_762x51_T_G3"}, // 0.14%
			{7182.55842274448, "150Rnd_556x45_Drum_Mag_F"}, // 0.14%
			{7196.82172327222, "hlc_20rnd_762x51_MDim_G3"}, // 0.14%
			{7211.08502379996, "hlc_50rnd_762x51_M_G3"}, // 0.14%
			{7225.34832432771, "hlc_50rnd_762x51_MDIM_G3"}, // 0.14%
			{7239.61162485545, "hlc_20rnd_762x51_S_G3"}, // 0.14%
			{7253.87492538319, "30Rnd_65x39_caseless_mag"}, // 0.14%
			{7268.13822591093, "30Rnd_65x39_caseless_mag_Tracer"}, // 0.14%
			{7282.40152643867, "100Rnd_65x39_caseless_mag_Tracer"}, // 0.14%
			{7296.66482696642, "30Rnd_65x39_caseless_green"}, // 0.14%
			{7310.92812749416, "100Rnd_65x39_caseless_mag"}, // 0.14%
			{7325.1914280219, "hlc_30rnd_556x45_EPR_G36"}, // 0.14%
			{7339.45472854964, "hlc_30rnd_556x45_SOST_G36"}, // 0.14%
			{7353.71802907738, "hlc_100rnd_556x45_EPR_G36"}, // 0.14%
			{7367.98132960513, "hlc_200rnd_556x45_B_SAW"}, // 0.14%
			{7382.24463013287, "hlc_200rnd_556x45_T_SAW"}, // 0.14%
			{7396.50793066061, "hlc_20rnd_762x51_IRDim_G3"}, // 0.14%
			{7410.77123118835, "hlc_200rnd_556x45_M_SAW"}, // 0.14%
			{7425.0345317161, "29rnd_300BLK_STANAG"}, // 0.14%
			{7439.29783224384, "hlc_20Rnd_762x51_B_fal"}, // 0.14%
			{7453.56113277158, "hlc_20Rnd_762x51_mk316_fal"}, // 0.14%
			{7467.82443329932, "hlc_200rnd_556x45_Mdim_SAW"}, // 0.14%
			{7482.08773382706, "hlc_20Rnd_762x51_barrier_fal"}, // 0.14%
			{7496.35103435481, "hlc_20Rnd_762x51_T_fal"}, // 0.14%
			{7510.61433488255, "hlc_20Rnd_762x51_TDim_fal"}, // 0.14%
			{7524.87763541029, "hlc_20Rnd_762x51_S_fal"}, // 0.14%
			{7539.14093593803, "hlc_50rnd_762x51_M_FAL"}, // 0.14%
			{7553.40423646577, "100Rnd_580x42_Mag_F"}, // 0.14%
			{7567.66753699352, "100Rnd_580x42_Mag_Tracer_F"}, // 0.14%
			{7581.93083752126, "hlc_30Rnd_556x45_TDIM_AUG"}, // 0.14%
			{7596.194138049, "30Rnd_580x42_Mag_Tracer_F"}, // 0.14%
			{7610.45743857674, "30Rnd_580x42_Mag_F"}, // 0.14%
			{7624.72073910448, "CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B"}, // 0.14%
			{7638.98403963223, "CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B"}, // 0.14%
			{7653.24734015997, "CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B"}, // 0.14%
			{7667.51064068771, "CUP_20Rnd_762x51_CZ805B"}, // 0.14%
			{7681.77394121545, "CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B"}, // 0.14%
			{7696.0372417432, "CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag"}, // 0.14%
			{7710.30054227094, "CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag"}, // 0.14%
			{7724.56384279868, "CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag"}, // 0.14%
			{7738.82714332642, "20Rnd_650x39_Cased_Mag_F"}, // 0.14%
			{7753.09044385416, "CUP_100Rnd_556x45_BetaCMag"}, // 0.14%
			{7766.82368929473, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 0.14%
			{7780.55693473529, "Exile_Uniform_Woodland"}, // 0.14%
			{7794.29018017585, "TRYK_U_B_ARO2_CombatUniform"}, // 0.14%
			{7808.02342561641, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 0.14%
			{7821.75667105698, "TRYK_U_B_BLKBLK_CombatUniform"}, // 0.14%
			{7835.48991649754, "TRYK_U_B_BLK"}, // 0.14%
			{7849.2231619381, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 0.14%
			{7862.95640737866, "TRYK_hoodie_Wood"}, // 0.14%
			{7876.68965281922, "TRYK_U_B_Wood_T"}, // 0.14%
			{7890.42289825979, "TRYK_U_B_woodtan_CombatUniform"}, // 0.14%
			{7904.15614370035, "TRYK_U_B_JSDF_CombatUniform"}, // 0.14%
			{7917.88938914091, "TRYK_B_USMC_R"}, // 0.14%
			{7931.62263458147, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 0.14%
			{7945.35588002204, "CUP_U_B_USMC_FROG4_WMARPAT"}, // 0.14%
			{7959.0891254626, "TRYK_U_B_Snow_CombatUniform"}, // 0.14%
			{7972.82237090316, "TRYK_U_B_Snowt"}, // 0.14%
			{7986.55561634372, "TRYK_U_B_PCUHsW5"}, // 0.14%
			{8000.28886178429, "TRYK_U_B_PCUHsW"}, // 0.14%
			{8014.02210722485, "TRYK_U_B_PCUHsW6"}, // 0.14%
			{8027.75535266541, "TRYK_U_B_PCUHsW4"}, // 0.14%
			{8041.48859810597, "TRYK_T_camo_wood_marpat"}, // 0.14%
			{8055.22184354653, "TRYK_U_B_PCUHsW2"}, // 0.14%
			{8067.54014854777, "hlc_rifle_aks74u_MTK"}, // 0.12%
			{8079.858453549, "hlc_rifle_ak74m_MTK"}, // 0.12%
			{8092.17675855023, "hlc_rifle_ak12GL"}, // 0.12%
			{8104.49506355146, "hlc_rifle_ak12"}, // 0.12%
			{8116.8133685527, "hlc_rifle_ak74_MTK"}, // 0.12%
			{8129.13167355393, "hlc_rifle_aks74u"}, // 0.12%
			{8141.44997855516, "hlc_rifle_aks74_MTK"}, // 0.12%
			{8153.76828355639, "hlc_rifle_aks74_GL"}, // 0.12%
			{8166.08658855762, "hlc_rifle_aks74"}, // 0.12%
			{8178.40489355886, "hlc_rifle_aku12"}, // 0.12%
			{8190.72319856009, "hlc_rifle_ak74m_gl"}, // 0.12%
			{8203.04150356132, "hlc_rifle_ak74m"}, // 0.12%
			{8215.35980856255, "hlc_rifle_ak74"}, // 0.12%
			{8226.90821950121, "CUP_optic_TrijiconRx01_desert"}, // 0.12%
			{8238.45663043986, "CUP_optic_PSO_3"}, // 0.12%
			{8250.00504137852, "CUP_optic_Kobra"}, // 0.12%
			{8261.55345231717, "CUP_optic_PSO_1"}, // 0.12%
			{8273.10186325582, "CUP_optic_PechenegScope"}, // 0.12%
			{8284.65027419448, "optic_Holosight_smg_blk_F"}, // 0.12%
			{8296.19868513313, "optic_Holosight_blk_F"}, // 0.12%
			{8307.74709607179, "optic_KHS_blk"}, // 0.12%
			{8319.29550701044, "optic_KHS_hex"}, // 0.12%
			{8330.8439179491, "optic_KHS_old"}, // 0.12%
			{8342.39232888775, "optic_KHS_tan"}, // 0.12%
			{8353.9407398264, "optic_Arco_blk_F"}, // 0.12%
			{8365.48915076506, "optic_Arco_ghex_F"}, // 0.12%
			{8377.03756170371, "optic_Holosight_khk_F"}, // 0.12%
			{8388.58597264237, "optic_DMS_ghex_F"}, // 0.12%
			{8400.13438358102, "optic_ERCO_blk_F"}, // 0.12%
			{8411.68279451968, "optic_ERCO_khk_F"}, // 0.12%
			{8423.23120545833, "optic_ERCO_snd_F"}, // 0.12%
			{8434.77961639699, "optic_SOS_khk_F"}, // 0.12%
			{8446.32802733564, "optic_LRPS_tna_F"}, // 0.12%
			{8457.87643827429, "optic_LRPS_ghex_F"}, // 0.12%
			{8469.42484921295, "optic_Hamr_khk_F"}, // 0.12%
			{8480.9732601516, "optic_AMS_snd"}, // 0.12%
			{8492.52167109026, "CUP_optic_SB_3_12x50_PMII"}, // 0.12%
			{8504.07008202891, "CUP_optic_HoloBlack"}, // 0.12%
			{8515.61849296757, "CUP_optic_LeupoldMk4_CQ_T"}, // 0.12%
			{8527.16690390622, "CUP_optic_ELCAN_SpecterDR"}, // 0.12%
			{8538.71531484487, "CUP_optic_LeupoldMk4_MRT_tan"}, // 0.12%
			{8550.26372578353, "CUP_optic_SB_11_4x20_PM"}, // 0.12%
			{8561.81213672218, "CUP_optic_ZDDot"}, // 0.12%
			{8573.36054766084, "CUP_optic_MRad"}, // 0.12%
			{8584.90895859949, "CUP_optic_ElcanM145"}, // 0.12%
			{8596.45736953815, "CUP_optic_TrijiconRx01_black"}, // 0.12%
			{8608.0057804768, "CUP_optic_Elcan_reflex"}, // 0.12%
			{8619.55419141545, "HLC_Optic_PSO1"}, // 0.12%
			{8631.10260235411, "HLC_Optic_1p29"}, // 0.12%
			{8642.65101329276, "hlc_optic_kobra"}, // 0.12%
			{8654.19942423142, "hlc_optic_suit"}, // 0.12%
			{8665.74783517007, "hlc_optic_LRT_m14"}, // 0.12%
			{8677.29624610873, "CUP_optic_Elcan"}, // 0.12%
			{8688.84465704738, "CUP_optic_LeupoldMk4"}, // 0.12%
			{8700.39306798604, "CUP_optic_LeupoldMk4_10x40_LRT_Woodland"}, // 0.12%
			{8711.94147892469, "CUP_optic_LeupoldM3LR"}, // 0.12%
			{8723.48988986334, "CUP_optic_HoloWdl"}, // 0.12%
			{8735.038300802, "CUP_optic_HoloDesert"}, // 0.12%
			{8746.58671174065, "CUP_optic_Eotech533"}, // 0.12%
			{8758.13512267931, "CUP_optic_Eotech533Grey"}, // 0.12%
			{8769.68353361796, "CUP_optic_CompM4"}, // 0.12%
			{8781.23194455662, "CUP_optic_SUSAT"}, // 0.12%
			{8792.78035549527, "CUP_optic_LeupoldMk4_10x40_LRT_Desert"}, // 0.12%
			{8804.32876643392, "CUP_optic_ACOG"}, // 0.12%
			{8815.87717737258, "CUP_optic_CompM2_Black"}, // 0.12%
			{8827.42558831123, "CUP_optic_CompM2_Woodland"}, // 0.12%
			{8838.97399924989, "CUP_optic_CompM2_Woodland2"}, // 0.12%
			{8850.52241018854, "CUP_optic_CompM2_Desert"}, // 0.12%
			{8862.0708211272, "CUP_optic_RCO"}, // 0.12%
			{8873.61923206585, "CUP_optic_RCO_desert"}, // 0.12%
			{8885.1676430045, "CUP_optic_Leupold_VX3"}, // 0.12%
			{8896.71605394316, "optic_AMS_khk"}, // 0.12%
			{8908.26446488181, "optic_MRD"}, // 0.12%
			{8919.81287582047, "optic_LRPS"}, // 0.12%
			{8931.36128675912, "optic_AMS"}, // 0.12%
			{8942.90969769778, "optic_Arco"}, // 0.12%
			{8954.45810863643, "optic_Hamr"}, // 0.12%
			{8966.00651957508, "optic_Aco"}, // 0.12%
			{8977.55493051374, "optic_ACO_grn"}, // 0.12%
			{8989.10334145239, "optic_Aco_smg"}, // 0.12%
			{9000.65175239105, "optic_ACO_grn_smg"}, // 0.12%
			{9012.2001633297, "hlc_optic_accupoint_g3"}, // 0.12%
			{9023.74857426836, "optic_Holosight_smg"}, // 0.12%
			{9035.29698520701, "optic_Holosight"}, // 0.12%
			{9046.84539614567, "optic_Yorris"}, // 0.12%
			{9058.39380708432, "optic_DMS"}, // 0.12%
			{9069.94221802297, "hlc_optic_PVS4M14"}, // 0.12%
			{9081.49062896163, "optic_MRCO"}, // 0.12%
			{9093.03903990028, "optic_SOS"}, // 0.12%
			{9103.2016415263, "hlc_rifle_PSG1A1_RIS"}, // 0.10%
			{9113.36424315231, "CUP_srifle_M110"}, // 0.10%
			{9123.52684477833, "hlc_rifle_M14_Rail"}, // 0.10%
			{9133.68944640435, "CUP_srifle_M14_DMR"}, // 0.10%
			{9143.85204803036, "CUP_srifle_M24_wdl"}, // 0.10%
			{9154.01464965638, "CUP_srifle_M24_des"}, // 0.10%
			{9164.1772512824, "hlc_rifle_M21_Rail"}, // 0.10%
			{9174.33985290841, "CUP_srifle_M40A3"}, // 0.10%
			{9184.50245453443, "srifle_DMR_03_woodland_F"}, // 0.10%
			{9194.66505616044, "srifle_DMR_07_blk_F"}, // 0.10%
			{9204.82765778646, "srifle_EBR_F"}, // 0.10%
			{9214.99025941248, "arifle_SPAR_03_blk_F"}, // 0.10%
			{9225.15286103849, "CUP_srifle_SVD"}, // 0.10%
			{9235.31546266451, "hlc_rifle_m14sopmod"}, // 0.10%
			{9245.47806429052, "CUP_srifle_VSSVintorez"}, // 0.10%
			{9255.64066591654, "srifle_DMR_03_tan_F"}, // 0.10%
			{9265.80326754256, "srifle_DMR_06_olive_F"}, // 0.10%
			{9275.96586916857, "hlc_rifle_psg1A1"}, // 0.10%
			{9285.67536116795, "muzzle_snds_H_MG_khk_F"}, // 0.10%
			{9295.38485316733, "muzzle_snds_H_khk_F"}, // 0.10%
			{9305.09434516671, "muzzle_snds_H_snd_F"}, // 0.10%
			{9314.80383716608, "muzzle_snds_B_khk_F"}, // 0.10%
			{9324.51332916546, "CUP_muzzle_snds_G36_black"}, // 0.10%
			{9334.22282116484, "CUP_muzzle_snds_G36_desert"}, // 0.10%
			{9343.93231316422, "muzzle_snds_B_snd_F"}, // 0.10%
			{9353.6418051636, "CUP_muzzle_snds_AWM"}, // 0.10%
			{9363.35129716297, "CUP_muzzle_snds_M16_camo"}, // 0.10%
			{9373.06078916235, "muzzle_snds_H_MG_blk_F"}, // 0.10%
			{9382.77028116173, "CUP_muzzle_snds_M16"}, // 0.10%
			{9390.7236215647, "CUP_acc_CZ_M3X"}, // 0.08%
			{9398.67696196767, "CUP_acc_ANPEQ_2_grey"}, // 0.08%
			{9406.63030237064, "CUP_acc_ANPEQ_2_desert"}, // 0.08%
			{9414.58364277361, "CUP_acc_ANPEQ_2_camo"}, // 0.08%
			{9422.53698317658, "CUP_acc_XM8_light_module"}, // 0.08%
			{9430.49032357955, "acc_flashlight"}, // 0.08%
			{9438.44366398252, "acc_pointer_IR"}, // 0.08%
			{9446.39700438549, "CUP_item_CDF_dogtags"}, // 0.08%
			{9454.35034478846, "CUP_item_Cobalt_File"}, // 0.08%
			{9462.30368519143, "CUP_Mxx_camo"}, // 0.08%
			{9470.2570255944, "CUP_Mxx_camo_half"}, // 0.08%
			{9478.21036599737, "CUP_acc_Glock17_Flashlight"}, // 0.08%
			{9486.16370640034, "CUP_SVD_camo_g"}, // 0.08%
			{9494.11704680331, "CUP_SVD_camo_g_half"}, // 0.08%
			{9502.07038720628, "CUP_SVD_camo_d"}, // 0.08%
			{9510.02372760925, "CUP_SVD_camo_d_half"}, // 0.08%
			{9517.97706801222, "CUP_acc_ANPEQ_15"}, // 0.08%
			{9525.93040841519, "CUP_acc_Flashlight_desert"}, // 0.08%
			{9533.88374881816, "CUP_acc_ANPEQ_2"}, // 0.08%
			{9541.83708922113, "CUP_acc_Flashlight_wdl"}, // 0.08%
			{9549.7904296241, "CUP_acc_Flashlight"}, // 0.08%
			{9557.74377002707, "hlc_acc_Surefiregrip"}, // 0.08%
			{9565.69711043004, "CUP_acc_LLM"}, // 0.08%
			{9571.52280562966, "muzzle_snds_58_blk_F"}, // 0.06%
			{9577.34850082929, "muzzle_snds_58_wdm_F"}, // 0.06%
			{9583.17419602891, "muzzle_snds_65_TI_ghex_F"}, // 0.06%
			{9588.99989122854, "muzzle_snds_65_TI_hex_F"}, // 0.06%
			{9594.82558642817, "muzzle_snds_65_TI_blk_F"}, // 0.06%
			{9600.65128162779, "muzzle_snds_58_ghex_F"}, // 0.06%
			{9606.47697682742, "muzzle_snds_58_hex_F"}, // 0.06%
			{9612.28417775657, "hlc_rifle_G36MLIC"}, // 0.06%
			{9618.09137868572, "LMG_Mk200_F"}, // 0.06%
			{9623.89857961488, "hlc_lmg_mk48"}, // 0.06%
			{9629.70578054403, "LMG_03_F"}, // 0.06%
			{9635.51298147318, "hlc_lmg_M60E4"}, // 0.06%
			{9641.32018240233, "arifle_MX_SW_Black_F"}, // 0.06%
			{9647.12738333148, "hlc_lmg_m60"}, // 0.06%
			{9652.93458426063, "hlc_m249_pip3"}, // 0.06%
			{9658.74178518979, "hlc_lmg_minimipara_railed"}, // 0.06%
			{9664.54898611894, "hlc_rifle_G36CMLIC"}, // 0.06%
			{9670.35618704809, "hlc_m249_pip1"}, // 0.06%
			{9676.16338797724, "CUP_arifle_MG36"}, // 0.06%
			{9681.97058890639, "CUP_lmg_Pecheneg"}, // 0.06%
			{9687.77778983555, "CUP_arifle_MG36_camo"}, // 0.06%
			{9693.5849907647, "arifle_CTARS_blk_F"}, // 0.06%
			{9699.39219169385, "CUP_arifle_XM8_Railed"}, // 0.06%
			{9705.199392623, "hlc_rifle_rpk74n"}, // 0.06%
			{9711.00659355215, "hlc_rifle_RPK12"}, // 0.06%
			{9716.8137944813, "hlc_rifle_rpk"}, // 0.06%
			{9722.62099541046, "LMG_Zafir_F"}, // 0.06%
			{9728.42819633961, "hlc_lmg_minimi_railed"}, // 0.06%
			{9734.20240180894, "HLC_Optic_ZFSG1"}, // 0.06%
			{9739.11978969249, "B_Bergen_tna_F"}, // 0.05%
			{9744.03717757605, "B_Bergen_mcamo_F"}, // 0.05%
			{9748.9545654596, "B_Bergen_hex_F"}, // 0.05%
			{9753.87195334316, "B_Bergen_dgtl_F"}, // 0.05%
			{9758.76304503482, "CUP_V_B_IOTV_AT"}, // 0.05%
			{9763.65413672649, "V_PlateCarrierGL_blk"}, // 0.05%
			{9768.54522841815, "TRYK_V_PlateCarrier_ACU"}, // 0.05%
			{9773.43632010982, "TRYK_V_PlateCarrier_blk"}, // 0.05%
			{9777.50136076022, "hlc_rifle_bcmblackjack"}, // 0.04%
			{9781.56640141063, "hlc_rifle_Bushmaster300"}, // 0.04%
			{9785.63144206104, "arifle_AK12_GL_F"}, // 0.04%
			{9789.69648271144, "hlc_rifle_amt"}, // 0.04%
			{9793.76152336185, "arifle_AK12_F"}, // 0.04%
			{9797.82656401226, "hlc_rifle_slr107u_MTK"}, // 0.04%
			{9801.89160466266, "hlc_rifle_sig5104"}, // 0.04%
			{9805.95664531307, "hlc_rifle_akm_MTK"}, // 0.04%
			{9810.02168596347, "hlc_30Rnd_762x39_b_ak"}, // 0.04%
			{9814.08672661388, "Exile_Weapon_AKS_Gold"}, // 0.04%
			{9818.15176726429, "hlc_rifle_akmgl"}, // 0.04%
			{9822.21680791469, "hlc_rifle_ak47"}, // 0.04%
			{9826.2818485651, "hlc_rifle_akm"}, // 0.04%
			{9830.34688921551, "hlc_rifle_RK62"}, // 0.04%
			{9834.41192986591, "arifle_ARX_blk_F"}, // 0.04%
			{9838.47697051632, "hlc_rifle_stgw57_commando"}, // 0.04%
			{9842.54201116673, "hlc_rifle_STGW57"}, // 0.04%
			{9846.60705181713, "hlc_rifle_c1A1"}, // 0.04%
			{9850.67209246754, "hlc_rifle_honeybadger"}, // 0.04%
			{9854.73713311795, "CUP_arifle_CZ805_B_GL"}, // 0.04%
			{9858.80217376835, "CUP_arifle_Sa58P"}, // 0.04%
			{9862.86721441876, "CUP_arifle_Sa58RIS2"}, // 0.04%
			{9866.93225506917, "arifle_MXM_Black_F"}, // 0.04%
			{9870.99729571957, "arifle_MXC_Black_F"}, // 0.04%
			{9875.06233636998, "arifle_MX_Black_F"}, // 0.04%
			{9879.12737702038, "arifle_MX_GL_Black_F"}, // 0.04%
			{9883.19241767079, "CUP_arifle_Mk17_STD_FG"}, // 0.04%
			{9887.2574583212, "CUP_arifle_Mk20"}, // 0.04%
			{9891.3224989716, "CUP_arifle_Mk17_CQC_FG"}, // 0.04%
			{9895.38753962201, "hlc_rifle_SLR"}, // 0.04%
			{9899.45258027242, "CUP_srifle_L129A1"}, // 0.04%
			{9903.51762092282, "CUP_sgun_AA12"}, // 0.04%
			{9907.58266157323, "arifle_Katiba_C_F"}, // 0.04%
			{9911.64770222364, "HLC_Rifle_g3ka4_GL"}, // 0.04%
			{9915.71274287404, "hlc_rifle_g3ka4"}, // 0.04%
			{9919.77778352445, "hlc_rifle_g3a3ris"}, // 0.04%
			{9923.84282417486, "hlc_rifle_g3a3"}, // 0.04%
			{9927.90786482526, "hlc_rifle_g3sg1ris"}, // 0.04%
			{9931.97290547567, "hlc_rifle_LAR"}, // 0.04%
			{9936.03794612607, "hlc_rifle_FAL5061Rail"}, // 0.04%
			{9940.10298677648, "hlc_rifle_FAL5000Rail"}, // 0.04%
			{9944.16802742689, "hlc_rifle_L1A1SLR"}, // 0.04%
			{9948.23306807729, "hlc_rifle_osw_GL"}, // 0.04%
			{9952.2981087277, "CUP_arifle_CZ805_B"}, // 0.04%
			{9956.36314937811, "hlc_rifle_falosw"}, // 0.04%
			{9958.67283156584, "HLC_Optic_G36Export15x"}, // 0.02%
			{9960.98251375357, "HLC_Optic_G36Dualoptic15x2d"}, // 0.02%
			{9963.2921959413, "HLC_Optic_G36Export15x2d"}, // 0.02%
			{9965.60187812903, "HLC_Optic_G36Dualoptic15x"}, // 0.02%
			{9967.91156031676, "HLC_Optic_G36Export35x2d"}, // 0.02%
			{9970.2212425045, "HLC_Optic_G36Export35x"}, // 0.02%
			{9972.53092469223, "HLC_Optic_G36dualoptic35x"}, // 0.02%
			{9974.84060687996, "HLC_Optic_G36dualoptic35x2d"}, // 0.02%
			{9977.15028906769, "optic_NVS"}, // 0.02%
			{9979.09218746757, "muzzle_snds_338_green"}, // 0.02%
			{9981.03408586744, "muzzle_snds_93mmg_tan"}, // 0.02%
			{9982.97598426732, "muzzle_snds_93mmg"}, // 0.02%
			{9984.91788266719, "muzzle_snds_338_sand"}, // 0.02%
			{9986.85978106707, "muzzle_snds_338_black"}, // 0.02%
			{9988.23310561112, "U_I_FullGhillie_lsh"}, // 0.01%
			{9989.60643015518, "TAC_W_ghillie_O1"}, // 0.01%
			{9990.76127124904, "hlc_optic_Kern2d"}, // 0.01%
			{9991.91611234291, "hlc_optic_Kern"}, // 0.01%
			{9993.07095343677, "hlc_optic_PVS4FAL"}, // 0.01%
			{9994.22579453064, "CUP_optic_AN_PVS_4"}, // 0.01%
			{9995.3806356245, "hlc_optic_artel_m14"}, // 0.01%
			{9996.53547671837, "hlc_optic_PVS4G3"}, // 0.01%
			{9997.69031781223, "CUP_optic_AN_PVS_10"}, // 0.01%
			{9998.8451589061, "CUP_optic_NSPU_RPG"}, // 0.01%
			{9999.99999999996, "CUP_optic_NSPU"} // 0.01%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_Magazine03
	  Exile_Item_Bandage
	  Exile_Item_Magazine02
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_ToiletPaper
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  Exile_Item_Can_Empty
	  Exile_Item_Heatpack
	  Exile_Item_Magazine04
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	*/
	class Medical
	{
		count = 11;
		half = 9180;
		halfIndex = 5;
		sum = 10000;
		items[] = 
		{
			{4550, "Exile_Item_Bandage"}, // 45.50%
			{6650, "Exile_Item_Heatpack"}, // 21.00%
			{7400, "Exile_Item_Can_Empty"}, // 7.50%
			{8150, "Exile_Item_ToiletPaper"}, // 7.50%
			{8900, "Exile_Item_PlasticBottleEmpty"}, // 7.50%
			{9180, "Exile_Item_Vishpirin"}, // 2.80%
			{9367.5, "Exile_Item_Magazine01"}, // 1.88%
			{9555, "Exile_Item_Magazine02"}, // 1.88%
			{9742.5, "Exile_Item_Magazine03"}, // 1.88%
			{9930, "Exile_Item_Magazine04"}, // 1.88%
			{10000, "Exile_Item_InstaDoc"} // 0.70%
		};
	};

	/**
	  Result of 100 rounds:

	  hlc_rifle_RU556
	  Exile_Item_Bandage
	  hlc_rifle_auga3_bl
	  Exile_Item_InstaDoc
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  hlc_rifle_aks74u
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  hlc_rifle_m4m203
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Vishpirin
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	  Exile_Item_Bandage
	  CUP_arifle_CZ805_A2
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Bandage
	  Exile_Item_Heatpack
	*/
	class MedicMil
	{
		count = 60;
		half = 9545.45454545452;
		halfIndex = 30;
		sum = 9999.99999999997;
		items[] = 
		{
			{5850, "Exile_Item_Bandage"}, // 58.50%
			{8550, "Exile_Item_Heatpack"}, // 27.00%
			{8910, "Exile_Item_Vishpirin"}, // 3.60%
			{9000, "Exile_Item_InstaDoc"}, // 0.90%
			{9020.20202020202, "hlc_rifle_hk33a2"}, // 0.20%
			{9040.40404040404, "hlc_rifle_hk33a2RIS"}, // 0.20%
			{9060.60606060606, "hlc_rifle_hk53"}, // 0.20%
			{9080.80808080808, "hlc_rifle_hk53RAS"}, // 0.20%
			{9101.0101010101, "CUP_arifle_L85A2"}, // 0.20%
			{9121.21212121212, "CUP_arifle_L85A2_G"}, // 0.20%
			{9141.41414141414, "CUP_arifle_L86A2"}, // 0.20%
			{9161.61616161616, "CUP_arifle_M16A2"}, // 0.20%
			{9181.81818181817, "CUP_arifle_M16A4_Base"}, // 0.20%
			{9202.02020202019, "CUP_arifle_M4A1_black"}, // 0.20%
			{9222.22222222221, "CUP_arifle_M4A1_camo"}, // 0.20%
			{9242.42424242423, "CUP_arifle_M4A1_desert"}, // 0.20%
			{9262.62626262625, "CUP_arifle_Mk16_CQC_FG"}, // 0.20%
			{9282.82828282827, "hlc_rifle_G36TAC"}, // 0.20%
			{9303.03030303029, "CUP_arifle_Mk16_STD_FG"}, // 0.20%
			{9323.23232323231, "CUP_arifle_Mk16_STD_EGLM"}, // 0.20%
			{9343.43434343433, "CUP_arifle_Mk16_SV"}, // 0.20%
			{9363.63636363635, "arifle_Mk20_F"}, // 0.20%
			{9383.83838383837, "hlc_rifle_samr2"}, // 0.20%
			{9404.04040404039, "arifle_SPAR_01_blk_F"}, // 0.20%
			{9424.24242424241, "hlc_rifle_auga3_b"}, // 0.20%
			{9444.44444444443, "hlc_rifle_auga3_bl"}, // 0.20%
			{9464.64646464645, "hlc_rifle_auga3"}, // 0.20%
			{9484.84848484847, "hlc_rifle_auga3_GL_B"}, // 0.20%
			{9505.05050505049, "arifle_TRG20_F"}, // 0.20%
			{9525.2525252525, "CUP_srifle_Mk12SPR"}, // 0.20%
			{9545.45454545452, "hlc_rifle_G36V"}, // 0.20%
			{9565.65656565654, "hlc_rifle_G36C"}, // 0.20%
			{9585.85858585856, "hlc_rifle_aek971"}, // 0.20%
			{9606.06060606058, "hlc_rifle_G36KV"}, // 0.20%
			{9626.2626262626, "hlc_rifle_RU5562"}, // 0.20%
			{9646.46464646462, "hlc_rifle_RU556"}, // 0.20%
			{9666.66666666664, "hlc_rifle_bcmjack"}, // 0.20%
			{9686.86868686866, "arifle_CTAR_blk_F"}, // 0.20%
			{9707.07070707068, "hlc_rifle_Colt727"}, // 0.20%
			{9727.2727272727, "hlc_rifle_aek971_mtk"}, // 0.20%
			{9747.47474747472, "hlc_rifle_M4"}, // 0.20%
			{9767.67676767674, "hlc_rifle_m4m203"}, // 0.20%
			{9787.87878787876, "hlc_rifle_CQBR"}, // 0.20%
			{9808.08080808078, "CUP_arifle_CZ805_A1"}, // 0.20%
			{9828.2828282828, "CUP_arifle_CZ805_GL"}, // 0.20%
			{9848.48484848482, "CUP_arifle_CZ805_A2"}, // 0.20%
			{9868.68686868683, "hlc_rifle_Colt727_GL"}, // 0.20%
			{9878.78787878785, "hlc_rifle_aks74u_MTK"}, // 0.10%
			{9888.88888888886, "hlc_rifle_aks74u"}, // 0.10%
			{9898.98989898987, "hlc_rifle_aks74_MTK"}, // 0.10%
			{9909.09090909088, "hlc_rifle_aks74_GL"}, // 0.10%
			{9919.19191919189, "hlc_rifle_aks74"}, // 0.10%
			{9929.2929292929, "hlc_rifle_ak74"}, // 0.10%
			{9939.39393939391, "hlc_rifle_ak74m_gl"}, // 0.10%
			{9949.49494949492, "hlc_rifle_ak74m"}, // 0.10%
			{9959.59595959593, "hlc_rifle_ak74_MTK"}, // 0.10%
			{9969.69696969694, "hlc_rifle_ak12"}, // 0.10%
			{9979.79797979795, "hlc_rifle_ak12GL"}, // 0.10%
			{9989.89898989896, "hlc_rifle_ak74m_MTK"}, // 0.10%
			{9999.99999999997, "hlc_rifle_aku12"} // 0.10%
		};
	};

	/**
	  Result of 100 rounds:

	  hlc_5rnd_300WM_FMJ_AWM
	  Exile_Item_ToiletPaper
	  10Rnd_338_Mag
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine03
	  Exile_Item_Magazine01
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine04
	  Exile_Item_Magazine04
	  Exile_Item_Magazine02
	  Exile_Item_Magazine04
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  srifle_DMR_02_F
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine02
	  srifle_GM6_F
	  Exile_Item_Magazine03
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_Can_Empty
	  Exile_Item_Magazine03
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine04
	  Exile_Item_Magazine04
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine01
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine02
	  Exile_Item_Magazine03
	  Exile_Item_Magazine01
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  Exile_Item_Magazine04
	  Exile_Item_PlasticBottleEmpty
	  srifle_LRR_F
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_ToiletPaper
	  Exile_Item_Can_Empty
	  Exile_Item_Can_Empty
	  Exile_Item_PlasticBottleEmpty
	*/
	class SuperCrate
	{
		count = 46;
		half = 9540.90909090909;
		halfIndex = 23;
		sum = 10000;
		items[] = 
		{
			{2250, "Exile_Item_Can_Empty"}, // 22.50%
			{4500, "Exile_Item_ToiletPaper"}, // 22.50%
			{6750, "Exile_Item_PlasticBottleEmpty"}, // 22.50%
			{7312.5, "Exile_Item_Magazine04"}, // 5.63%
			{7875, "Exile_Item_Magazine03"}, // 5.63%
			{8437.5, "Exile_Item_Magazine02"}, // 5.63%
			{9000, "Exile_Item_Magazine01"}, // 5.63%
			{9031.81818181818, "10Rnd_50BW_Mag_F"}, // 0.32%
			{9063.63636363636, "130Rnd_338_Mag"}, // 0.32%
			{9095.45454545455, "150Rnd_93x64_Mag"}, // 0.32%
			{9127.27272727273, "Exile_Magazine_10Rnd_338_Bullet_Cam_Mag"}, // 0.32%
			{9159.09090909091, "10Rnd_127x54_Mag"}, // 0.32%
			{9190.90909090909, "Exile_Magazine_7Rnd_408_Bullet_Cam_Mag"}, // 0.32%
			{9222.72727272727, "7Rnd_408_Mag"}, // 0.32%
			{9254.54545454546, "CUP_10Rnd_127x99_M107"}, // 0.32%
			{9286.36363636364, "Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag"}, // 0.32%
			{9318.18181818182, "10Rnd_93x64_DMR_05_Mag"}, // 0.32%
			{9350, "Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag"}, // 0.32%
			{9381.81818181818, "5Rnd_127x108_APDS_Mag"}, // 0.32%
			{9413.63636363637, "5Rnd_127x108_Mag"}, // 0.32%
			{9445.45454545455, "10Rnd_338_Mag"}, // 0.32%
			{9477.27272727273, "CUP_5Rnd_127x99_as50_M"}, // 0.32%
			{9509.09090909091, "hlc_5rnd_300WM_SBT_AWM"}, // 0.32%
			{9540.90909090909, "hlc_5rnd_300WM_AP_AWM"}, // 0.32%
			{9572.72727272728, "hlc_5rnd_300WM_BTSP_AWM"}, // 0.32%
			{9604.54545454546, "hlc_5rnd_300WM_mk248_AWM"}, // 0.32%
			{9636.36363636364, "hlc_5rnd_300WM_FMJ_AWM"}, // 0.32%
			{9668.18181818182, "hlc_5rnd_300WM_T_AWM"}, // 0.32%
			{9695.45454545455, "hlc_rifle_awcovert_FDE"}, // 0.27%
			{9722.72727272728, "hlc_rifle_awcovert"}, // 0.27%
			{9750.00000000001, "srifle_DMR_04_F"}, // 0.27%
			{9777.27272727273, "srifle_GM6_F"}, // 0.27%
			{9804.54545454546, "srifle_DMR_05_blk_F"}, // 0.27%
			{9831.81818181819, "srifle_DMR_05_hex_F"}, // 0.27%
			{9859.09090909092, "srifle_LRR_F"}, // 0.27%
			{9886.36363636365, "srifle_DMR_02_F"}, // 0.27%
			{9913.63636363637, "srifle_DMR_02_camo_F"}, // 0.27%
			{9940.9090909091, "hlc_rifle_awcovert_BL"}, // 0.27%
			{9956.81818181819, "CUP_MAAWS_HEAT_M"}, // 0.16%
			{9972.72727272728, "CUP_MAAWS_HEDP_M"}, // 0.16%
			{9983.63636363637, "CUP_srifle_M107_Base"}, // 0.11%
			{9989.09090909092, "CUP_srifle_AS50"}, // 0.05%
			{9991.81818181819, "MMG_01_hex_F"}, // 0.03%
			{9994.54545454546, "MMG_02_black_F"}, // 0.03%
			{9997.27272727273, "MMG_02_camo_F"}, // 0.03%
			{10000, "CUP_launch_MAAWS"} // 0.03%
		};
	};

	/**
	  Result of 100 rounds:

	  arifle_MX_Black_F
	  TRYK_U_B_Snow_CombatUniform
	  Exile_Weapon_AKS_Gold
	  TRYK_B_Carryall_blk
	  TRYK_U_B_PCUHsW4
	  1Rnd_HE_Grenade_shell
	  B_Kitbag_mcamo
	  TRYK_U_B_WOOD_MARPAT_CombatUniform
	  TRYK_U_B_Wood_T
	  CUP_B_RUS_Backpack
	  TRYK_U_B_BLK
	  TRYK_B_USMC_R
	  TRYK_U_B_PCUHsW5
	  hlc_rifle_rpk74n
	  TRYK_U_B_BLKBLK_CombatUniform
	  CUP_arifle_MG36_camo
	  B_Carryall_ghex_F
	  TRYK_U_B_woodtan_CombatUniform
	  TRYK_U_B_JSDF_CombatUniform
	  TRYK_B_Coyotebackpack_BLK
	  3Rnd_HE_Grenade_shell
	  TRYK_U_B_MARPAT_WOOD_CombatUniform
	  TRYK_U_B_OD_OD_R_CombatUniform
	  TRYK_U_B_PCUHsW4
	  TRYK_hoodie_Wood
	  CUP_IED_V1_M
	  srifle_DMR_03_tan_F
	  hlc_rifle_m14sopmod
	  hlc_lmg_minimipara_railed
	  hlc_rifle_m14sopmod
	  CUP_lmg_Pecheneg
	  B_Kitbag_mcamo
	  1Rnd_HE_Grenade_shell
	  B_Kitbag_cbr
	  HandGrenade
	  CUP_IED_V1_M
	  HandGrenade
	  1Rnd_HE_Grenade_shell
	  B_TacticalPack_mcamo
	  TRYK_U_B_BLK
	  hlc_VOG25_AK
	  hlc_rifle_g3a3ris
	  hlc_lmg_minimipara_railed
	  Exile_Uniform_Woodland
	  SatchelCharge_Remote_Mag
	  arifle_MX_SW_Black_F
	  TRYK_U_B_Snow_CombatUniform
	  CUP_arifle_XM8_Railed
	  TRYK_U_B_Snow_CombatUniform
	  TRYK_B_USMC_R
	  Exile_Uniform_Woodland
	  HandGrenade
	  TRYK_U_B_JSDF_CombatUniform
	  CUP_1Rnd_HE_M203
	  3Rnd_HE_Grenade_shell
	  TRYK_U_B_PCUHsW6
	  LMG_03_F
	  TRYK_U_B_MARPAT_WOOD_CombatUniform
	  TRYK_U_B_AOR2_OD_CombatUniform
	  hlc_rifle_m14sopmod
	  Exile_Uniform_Woodland
	  TRYK_U_B_OD_OD_R_CombatUniform
	  CUP_IED_V1_M
	  hlc_m249_pip1
	  TRYK_U_B_BLK
	  HandGrenade
	  TRYK_U_B_Wood_T
	  B_TacticalPack_rgr
	  hlc_lmg_minimipara_railed
	  CUP_srifle_L129A1
	  hlc_rifle_PSG1A1_RIS
	  LMG_Zafir_F
	  TRYK_U_B_PCUHsW6
	  B_Kitbag_cbr
	  hlc_m249_pip1
	  CUP_1Rnd_HE_M203
	  hlc_lmg_M60E4
	  TRYK_U_B_BLK
	  srifle_DMR_03_woodland_F
	  srifle_DMR_03_tan_F
	  B_Kitbag_rgr
	  TRYK_B_Carryall_wood
	  TRYK_U_B_BLK
	  TRYK_U_B_ARO2_CombatUniform
	  TRYK_U_B_Snow_CombatUniform
	  hlc_rifle_RPK12
	  hlc_rifle_PSG1A1_RIS
	  TRYK_B_Carryall_JSDF
	  CUP_1Rnd_HE_M203
	  CUP_IED_V2_M
	  hlc_rifle_rpk74n
	  TRYK_U_B_Snowt
	  hlc_rifle_psg1A1
	  TRYK_U_B_WOOD_MARPAT_CombatUniform
	  HLC_Rifle_g3ka4_GL
	  TRYK_B_USMC_R
	  TRYK_U_B_AOR2_OD_CombatUniform
	  1Rnd_HE_Grenade_shell
	  1Rnd_HE_Grenade_shell
	  TRYK_U_B_PCUHsW2
	*/
	class ChopperCrash
	{
		count = 145;
		half = 8305.46088610605;
		halfIndex = 72;
		sum = 9999.99999999997;
		items[] = 
		{
			{233.100233100233, "1Rnd_HE_Grenade_shell"}, // 2.33%
			{466.200466200466, "HandGrenade"}, // 2.33%
			{699.300699300699, "MiniGrenade"}, // 2.33%
			{932.400932400932, "hlc_VOG25_AK"}, // 2.33%
			{1165.50116550117, "3Rnd_HE_Grenade_shell"}, // 2.33%
			{1398.6013986014, "CUP_1Rnd_HE_M203"}, // 2.33%
			{1594.10481991127, "CUP_B_RUS_Backpack"}, // 1.96%
			{1789.60824122114, "B_TacticalPack_mcamo"}, // 1.96%
			{1985.11166253102, "B_TacticalPack_rgr"}, // 1.96%
			{2180.61508384089, "B_TacticalPack_blk"}, // 1.96%
			{2376.11850515076, "B_Kitbag_cbr"}, // 1.96%
			{2571.62192646064, "B_Kitbag_rgr"}, // 1.96%
			{2767.12534777051, "B_Kitbag_mcamo"}, // 1.96%
			{2930.92551157067, "TRYK_U_B_BLK"}, // 1.64%
			{3094.72567537084, "Exile_Uniform_Woodland"}, // 1.64%
			{3258.525839171, "TRYK_U_B_ARO2_CombatUniform"}, // 1.64%
			{3422.32600297116, "TRYK_U_B_AOR2_OD_CombatUniform"}, // 1.64%
			{3586.12616677133, "TRYK_U_B_PCUHsW4"}, // 1.64%
			{3749.92633057149, "TRYK_U_B_PCUHsW6"}, // 1.64%
			{3913.72649437166, "TRYK_U_B_PCUHsW"}, // 1.64%
			{4077.52665817182, "TRYK_U_B_Snow_CombatUniform"}, // 1.64%
			{4241.32682197198, "TRYK_U_B_PCUHsW5"}, // 1.64%
			{4405.12698577215, "TRYK_U_B_Snowt"}, // 1.64%
			{4568.92714957231, "CUP_U_B_USMC_FROG4_WMARPAT"}, // 1.64%
			{4732.72731337248, "TRYK_U_B_WOOD_MARPAT_CombatUniform"}, // 1.64%
			{4896.52747717264, "TRYK_U_B_Wood_T"}, // 1.64%
			{5060.3276409728, "TRYK_B_USMC_R"}, // 1.64%
			{5224.12780477297, "TRYK_U_B_JSDF_CombatUniform"}, // 1.64%
			{5387.92796857313, "TRYK_U_B_woodtan_CombatUniform"}, // 1.64%
			{5551.7281323733, "TRYK_T_camo_wood_marpat"}, // 1.64%
			{5715.52829617346, "TRYK_hoodie_Wood"}, // 1.64%
			{5879.32845997363, "TRYK_U_B_OD_OD_R_CombatUniform"}, // 1.64%
			{6043.12862377379, "TRYK_U_B_MARPAT_WOOD_CombatUniform"}, // 1.64%
			{6206.92878757395, "TRYK_U_B_PCUHsW2"}, // 1.64%
			{6370.72895137412, "TRYK_U_B_BLKBLK_CombatUniform"}, // 1.64%
			{6440.65902130419, "SatchelCharge_Remote_Mag"}, // 0.70%
			{6510.58909123426, "DemoCharge_Remote_Mag"}, // 0.70%
			{6580.51916116433, "CUP_IED_V1_M"}, // 0.70%
			{6650.4492310944, "CUP_IED_V2_M"}, // 0.70%
			{6720.37930102447, "CUP_IED_V3_M"}, // 0.70%
			{6790.30937095454, "CUP_IED_V4_M"}, // 0.70%
			{6840.81442145959, "hlc_rifle_psg1A1"}, // 0.51%
			{6891.31947196464, "hlc_rifle_m14sopmod"}, // 0.51%
			{6941.82452246969, "CUP_srifle_SVD"}, // 0.51%
			{6992.32957297474, "arifle_SPAR_03_blk_F"}, // 0.51%
			{7042.83462347979, "srifle_EBR_F"}, // 0.51%
			{7093.33967398484, "srifle_DMR_06_olive_F"}, // 0.51%
			{7143.84472448989, "srifle_DMR_03_woodland_F"}, // 0.51%
			{7194.34977499494, "srifle_DMR_03_tan_F"}, // 0.51%
			{7244.85482549999, "CUP_srifle_M40A3"}, // 0.51%
			{7295.35987600504, "CUP_srifle_M24_des"}, // 0.51%
			{7345.86492651009, "CUP_srifle_M24_wdl"}, // 0.51%
			{7396.36997701514, "CUP_srifle_M14_DMR"}, // 0.51%
			{7446.87502752019, "hlc_rifle_M14_Rail"}, // 0.51%
			{7497.38007802524, "CUP_srifle_M110"}, // 0.51%
			{7547.88512853029, "hlc_rifle_PSG1A1_RIS"}, // 0.51%
			{7598.39017903534, "srifle_DMR_07_blk_F"}, // 0.51%
			{7648.8952295404, "CUP_srifle_VSSVintorez"}, // 0.51%
			{7699.40028004545, "hlc_rifle_M21_Rail"}, // 0.51%
			{7742.69032333549, "hlc_lmg_mk48"}, // 0.43%
			{7785.98036662553, "CUP_arifle_MG36_camo"}, // 0.43%
			{7829.27040991558, "CUP_arifle_MG36"}, // 0.43%
			{7872.56045320562, "hlc_lmg_M60E4"}, // 0.43%
			{7915.85049649566, "hlc_lmg_m60"}, // 0.43%
			{7959.14053978571, "hlc_m249_pip3"}, // 0.43%
			{8002.43058307575, "hlc_m249_pip1"}, // 0.43%
			{8045.72062636579, "LMG_Mk200_F"}, // 0.43%
			{8089.01066965584, "LMG_03_F"}, // 0.43%
			{8132.30071294588, "hlc_rifle_G36MLIC"}, // 0.43%
			{8175.59075623592, "hlc_lmg_minimipara_railed"}, // 0.43%
			{8218.88079952596, "hlc_lmg_minimi_railed"}, // 0.43%
			{8262.17084281601, "arifle_CTARS_blk_F"}, // 0.43%
			{8305.46088610605, "hlc_rifle_rpk"}, // 0.43%
			{8348.75092939609, "hlc_rifle_RPK12"}, // 0.43%
			{8392.04097268614, "hlc_rifle_G36CMLIC"}, // 0.43%
			{8435.33101597618, "hlc_rifle_rpk74n"}, // 0.43%
			{8478.62105926622, "arifle_MX_SW_Black_F"}, // 0.43%
			{8521.91110255626, "LMG_Zafir_F"}, // 0.43%
			{8565.20114584631, "CUP_arifle_XM8_Railed"}, // 0.43%
			{8608.49118913635, "CUP_lmg_Pecheneg"}, // 0.43%
			{8637.81670233283, "TRYK_B_Carryall_wood"}, // 0.29%
			{8667.14221552931, "B_Carryall_cbr"}, // 0.29%
			{8696.46772872579, "B_Carryall_ghex_F"}, // 0.29%
			{8725.79324192227, "B_Carryall_ocamo"}, // 0.29%
			{8755.11875511876, "B_Carryall_khk"}, // 0.29%
			{8784.44426831524, "B_Carryall_mcamo"}, // 0.29%
			{8813.76978151172, "B_Carryall_oucamo"}, // 0.29%
			{8843.0952947082, "TRYK_B_Coyotebackpack_BLK"}, // 0.29%
			{8872.42080790468, "TRYK_B_Coyotebackpack_OD"}, // 0.29%
			{8901.74632110116, "TRYK_B_Coyotebackpack_WH"}, // 0.29%
			{8931.07183429765, "TRYK_B_Carryall_JSDF"}, // 0.29%
			{8960.39734749413, "TRYK_B_Carryall_wh"}, // 0.29%
			{8989.72286069061, "TRYK_B_Carryall_blk"}, // 0.29%
			{9019.04837388709, "TRYK_B_Coyotebackpack"}, // 0.29%
			{9039.25039408911, "hlc_rifle_stgw57_commando"}, // 0.20%
			{9059.45241429113, "arifle_ARX_blk_F"}, // 0.20%
			{9079.65443449315, "hlc_rifle_sig5104"}, // 0.20%
			{9099.85645469517, "hlc_rifle_STGW57"}, // 0.20%
			{9120.05847489719, "hlc_rifle_RK62"}, // 0.20%
			{9140.26049509921, "hlc_rifle_amt"}, // 0.20%
			{9160.46251530123, "hlc_rifle_c1A1"}, // 0.20%
			{9180.66453550325, "hlc_rifle_FAL5000Rail"}, // 0.20%
			{9200.86655570526, "CUP_arifle_Sa58P"}, // 0.20%
			{9221.06857590728, "hlc_rifle_L1A1SLR"}, // 0.20%
			{9241.2705961093, "hlc_rifle_osw_GL"}, // 0.20%
			{9261.47261631132, "hlc_rifle_falosw"}, // 0.20%
			{9281.67463651334, "CUP_arifle_CZ805_B_GL"}, // 0.20%
			{9301.87665671536, "CUP_arifle_CZ805_B"}, // 0.20%
			{9322.07867691738, "hlc_rifle_Bushmaster300"}, // 0.20%
			{9342.2806971194, "hlc_rifle_bcmblackjack"}, // 0.20%
			{9362.48271732142, "arifle_AK12_GL_F"}, // 0.20%
			{9382.68473752344, "arifle_AK12_F"}, // 0.20%
			{9402.88675772546, "hlc_rifle_slr107u_MTK"}, // 0.20%
			{9423.08877792748, "hlc_30Rnd_762x39_b_ak"}, // 0.20%
			{9443.2907981295, "Exile_Weapon_AKS_Gold"}, // 0.20%
			{9463.49281833152, "hlc_rifle_ak47"}, // 0.20%
			{9483.69483853354, "hlc_rifle_akm"}, // 0.20%
			{9503.89685873556, "hlc_rifle_FAL5061Rail"}, // 0.20%
			{9524.09887893758, "hlc_rifle_LAR"}, // 0.20%
			{9544.30089913959, "hlc_rifle_g3sg1ris"}, // 0.20%
			{9564.50291934161, "hlc_rifle_g3a3"}, // 0.20%
			{9584.70493954363, "CUP_arifle_Sa58RIS2"}, // 0.20%
			{9604.90695974565, "arifle_MXM_Black_F"}, // 0.20%
			{9625.10897994767, "arifle_MXC_Black_F"}, // 0.20%
			{9645.31100014969, "arifle_MX_Black_F"}, // 0.20%
			{9665.51302035171, "arifle_MX_GL_Black_F"}, // 0.20%
			{9685.71504055373, "CUP_arifle_Mk17_STD_FG"}, // 0.20%
			{9705.91706075575, "CUP_arifle_Mk20"}, // 0.20%
			{9726.11908095777, "hlc_rifle_akmgl"}, // 0.20%
			{9746.32110115979, "CUP_arifle_Mk17_CQC_FG"}, // 0.20%
			{9766.52312136181, "CUP_srifle_L129A1"}, // 0.20%
			{9786.72514156383, "CUP_sgun_AA12"}, // 0.20%
			{9806.92716176585, "hlc_rifle_honeybadger"}, // 0.20%
			{9827.12918196787, "arifle_Katiba_C_F"}, // 0.20%
			{9847.33120216989, "HLC_Rifle_g3ka4_GL"}, // 0.20%
			{9867.53322237191, "hlc_rifle_g3ka4"}, // 0.20%
			{9887.73524257392, "hlc_rifle_g3a3ris"}, // 0.20%
			{9907.93726277594, "hlc_rifle_SLR"}, // 0.20%
			{9928.13928297796, "hlc_rifle_akm_MTK"}, // 0.20%
			{9944.51929935798, "TAC_W_ghillie_O1"}, // 0.16%
			{9960.899315738, "U_I_FullGhillie_lsh"}, // 0.16%
			{9970.67448680349, "B_Bergen_mcamo_F"}, // 0.10%
			{9980.44965786899, "B_Bergen_hex_F"}, // 0.10%
			{9990.22482893448, "B_Bergen_dgtl_F"}, // 0.10%
			{9999.99999999997, "B_Bergen_tna_F"} // 0.10%
		};
	};

	/**
	  Result of 100 rounds:

	  Exile_Item_EMRE
	  Exile_Item_ExtensionCord
	  Exile_Item_PlasticBottleFreshWater
	  Exile_Item_Magazine02
	  Exile_Item_ToiletPaper
	  ItemMap
	  Exile_Item_Heatpack
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_FuelCanisterEmpty
	  Binocular
	  Exile_Item_Can_Empty
	  Exile_Item_DuctTape
	  Exile_Item_ExtensionCord
	  Exile_Melee_Axe
	  Exile_Item_Hammer
	  CUP_srifle_CZ550
	  Exile_Item_FuelCanisterFull
	  Exile_Item_WaterCanisterEmpty
	  Exile_Item_DuctTape
	  Exile_Item_Wrench
	  Binocular
	  ItemRadio
	  Exile_Item_Rope
	  Exile_Item_ToiletPaper
	  Exile_Item_CamoTentKit
	  Exile_Item_OilCanister
	  CUP_smg_MP5A5
	  CUP_smg_MP5SD6
	  hlc_rifle_M1903A1
	  CUP_smg_MP5SD6
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Heatpack
	  ItemMap
	  Exile_Item_Heatpack
	  ItemMap
	  Exile_Item_OilCanister
	  ItemMap
	  ItemMap
	  ItemWatch
	  Exile_Item_Can_Empty
	  ItemCompass
	  Exile_Item_SeedAstics
	  hlc_rifle_M1903A1
	  Exile_Item_Can_Empty
	  Exile_Item_Hammer
	  Exile_Melee_Axe
	  Exile_Item_ExtensionCord
	  Exile_Item_FuelCanisterFull
	  Exile_Item_ExtensionCord
	  Exile_Item_DuctTape
	  Exile_Item_Can_Empty
	  ItemMap
	  Exile_Item_DuctTape
	  Binocular
	  ItemCompass
	  Exile_Item_PlasticBottleEmpty
	  hlc_rifle_M1903A1
	  Exile_Item_Rope
	  Exile_Item_ToiletPaper
	  CUP_smg_MP5SD6
	  Exile_Item_Can_Empty
	  Exile_Item_Rope
	  Exile_Item_OilCanister
	  hlc_rifle_M1903A1_unertl
	  Exile_Item_Can_Empty
	  ItemMap
	  Exile_Item_FuelCanisterEmpty
	  ItemWatch
	  hlc_rifle_M1903A1
	  Exile_Item_BBQSandwich
	  CUP_sgun_M1014
	  Exile_Melee_Axe
	  Exile_Item_PlasticBottleEmpty
	  Exile_Item_Bandage
	  hlc_rifle_M1903A1_unertl
	  Binocular
	  CUP_srifle_CZ550
	  Exile_Item_Can_Empty
	  CUP_smg_MP5A5
	  CUP_smg_MP5A5
	  Exile_Item_Heatpack
	  Exile_Item_FuelCanisterFull
	  Exile_Item_Can_Empty
	  Exile_Item_ToiletPaper
	  Exile_Item_ExtensionCord
	  Exile_Item_ZipTie
	  CUP_smg_bizon
	  Exile_Item_Magazine03
	  Binocular
	  Exile_Item_OilCanister
	  Exile_Melee_Axe
	  Exile_Item_Carwheel
	  CUP_sgun_Saiga12K
	  Exile_Item_FuelCanisterEmpty
	  Exile_Item_DsNuts
	  Exile_Item_DuctTape
	  Exile_Item_ToiletPaper
	  ItemMap
	  ItemMap
	  ItemRadio
	*/
	class Barn
	{
		count = 64;
		half = 8942.30769230769;
		halfIndex = 32;
		sum = 10000;
		items[] = 
		{
			{546.661460367044, "ItemMap"}, // 5.47%
			{1015.22842639594, "ItemCompass"}, // 4.69%
			{1483.79539242483, "Binocular"}, // 4.69%
			{1952.36235845373, "ItemWatch"}, // 4.69%
			{2342.83483014447, "Exile_Item_Bandage"}, // 3.90%
			{2733.30730183522, "Exile_Item_Heatpack"}, // 3.90%
			{3117.92268645061, "Exile_Item_Can_Empty"}, // 3.85%
			{3502.53807106599, "Exile_Item_ToiletPaper"}, // 3.85%
			{3887.15345568137, "Exile_Item_PlasticBottleEmpty"}, // 3.85%
			{4246.38812963686, "Exile_Item_ExtensionCord"}, // 3.59%
			{4558.76610698946, "Exile_Item_Carwheel"}, // 3.12%
			{4871.14408434205, "Exile_Item_FuelCanisterEmpty"}, // 3.12%
			{5183.52206169465, "Exile_Item_DuctTape"}, // 3.12%
			{5464.66224131199, "Exile_Item_WaterCanisterEmpty"}, // 2.81%
			{5745.80242092932, "Exile_Item_CamoTentKit"}, // 2.81%
			{5980.08590394377, "Exile_Item_Rope"}, // 2.34%
			{6214.36938695822, "ItemRadio"}, // 2.34%
			{6448.65286997267, "Exile_Item_Hammer"}, // 2.34%
			{6682.93635298711, "Exile_Item_OilCanister"}, // 2.34%
			{6853.87652392729, "CUP_sgun_Saiga12K"}, // 1.71%
			{7024.81669486746, "CUP_smg_MP5SD6"}, // 1.71%
			{7195.75686580763, "CUP_smg_MP5A5"}, // 1.71%
			{7366.6970367478, "CUP_srifle_LeeEnfield_rail"}, // 1.71%
			{7537.63720768797, "CUP_sgun_M1014"}, // 1.71%
			{7708.57737862814, "CUP_smg_bizon"}, // 1.71%
			{7879.51754956831, "CUP_srifle_CZ550"}, // 1.71%
			{8050.45772050848, "hlc_rifle_M1903A1_unertl"}, // 1.71%
			{8221.39789144865, "hlc_rifle_M1903A1"}, // 1.71%
			{8377.58688012495, "Exile_Item_ZipTie"}, // 1.56%
			{8533.77586880125, "Exile_Melee_Axe"}, // 1.56%
			{8689.96485747755, "Exile_Item_FuelCanisterFull"}, // 1.56%
			{8846.15384615385, "Exile_Item_Wrench"}, // 1.56%
			{8942.30769230769, "Exile_Item_Magazine03"}, // 0.96%
			{9038.46153846154, "Exile_Item_Magazine02"}, // 0.96%
			{9134.61538461538, "Exile_Item_Magazine01"}, // 0.96%
			{9230.76923076923, "Exile_Item_Magazine04"}, // 0.96%
			{9281.64428164428, "Exile_Item_PlasticBottleCoffee"}, // 0.51%
			{9332.51933251933, "Exile_Item_ChocolateMilk"}, // 0.51%
			{9383.39438339438, "Exile_Item_MountainDupe"}, // 0.51%
			{9434.26943426943, "Exile_Item_EnergyDrink"}, // 0.51%
			{9485.14448514448, "Exile_Item_PlasticBottleFreshWater"}, // 0.51%
			{9536.01953601953, "Exile_Item_PowerDrink"}, // 0.51%
			{9586.89458689458, "Exile_Item_Beer"}, // 0.51%
			{9607.24460724461, "Exile_Item_CanOpener"}, // 0.20%
			{9627.59462759463, "Exile_Item_Matches"}, // 0.20%
			{9647.94464794465, "Exile_Item_EMRE"}, // 0.20%
			{9668.29466829467, "Exile_Item_GloriousKnakworst"}, // 0.20%
			{9688.64468864469, "Exile_Item_Surstromming"}, // 0.20%
			{9708.99470899471, "Exile_Item_SausageGravy"}, // 0.20%
			{9729.34472934473, "Exile_Item_ChristmasTinner"}, // 0.20%
			{9749.69474969475, "Exile_Item_MacasCheese"}, // 0.20%
			{9770.04477004477, "Exile_Item_BBQSandwich"}, // 0.20%
			{9790.39479039479, "Exile_Item_Dogfood"}, // 0.20%
			{9810.74481074481, "Exile_Item_BeefParts"}, // 0.20%
			{9831.09483109483, "Exile_Item_Cheathas"}, // 0.20%
			{9851.44485144485, "Exile_Item_DsNuts"}, // 0.20%
			{9871.79487179487, "Exile_Item_CockONut"}, // 0.20%
			{9892.1448921449, "Exile_Item_SeedAstics"}, // 0.20%
			{9912.49491249492, "Exile_Item_Raisins"}, // 0.20%
			{9932.84493284494, "Exile_Item_Moobar"}, // 0.20%
			{9953.19495319496, "Exile_Item_InstantCoffee"}, // 0.20%
			{9973.54497354498, "Exile_Item_CatFood"}, // 0.20%
			{9993.894993895, "Exile_Item_Noodles"}, // 0.20%
			{10000, "Exile_Item_CookingPot"} // 0.06%
		};
	};

};


class CfgSettings
{
	///////////////////////////////////////////////////////////////////////
	// Community Base Addons
	///////////////////////////////////////////////////////////////////////
	class CBA 
	{
		// Set this to 1 if you want to have CBA support
		useStackedEH = 1;

		// If you set this to 1 ...........................................
		iReallyWantToGetHackedAndImRetarded = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// GARBAGE COLLECTOR
	///////////////////////////////////////////////////////////////////////
	class GarbageCollector
	{
		/*
			Remark: 
			In 0.9.35 and below, Exile has checked if a player was nearby and then delayed
			the deletion. This check has been removed to save server performance.

			Do NOT touch these if you are not 10000% sure what you do!	
		*/
		class Ingame 
		{
			// Dropped items without fissix
			class GroundWeaponHolder
			{
				lifeTime = 10;
				interval = 5;
			};

			// Dropped items with fissix
			class WeaponHolderSimulated
			{
				lifeTime = 10;
				interval = 5;
			};

			// Corpses and wrecks
			class AllDead 
			{
				lifeTime = 15;
				interval = 5;
			};

			// Loot spawned inside a building
			class Loot 
			{
				lifeTime = 8;
				interval = 1;
			};

			// Never touch this or you will break your sever!
			class Groups 
			{
				interval = 0.5;
			};
		};

		class Database 
		{
			// Remove all deleted items from the database after X days
			permanentlyDeleteTime = 28;
			
			// Remove all territories (and contructions + containers in it) that were not paid after X days
			territoryLifeTime = 14;

			// Remove all containers outside of territories that have not been used for X days
			// Example: Tents
			containerLifeTime = 10;

			// Remove all constructions outside of territories that are older than X days or not moved for X days 
			// Example: Work Benches
			constructionLifeTime = 2;

			// Remove all vehicles that were not moved/used for X days
			vehicleLifeTime = 5;
			
			// Set safe as abandoned
			abandonedTime = 7;
			
			// Deletes a base X days after the flag is stolen if the ransom money isn't paid
			stolenFlagLifeTime = 8;
			
			// Sets door & safe pins to 0000 and marks safes to abandoned X days after the flag is stolen if the ransom money isn't paid
			unlockLifeTime = 5;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// RESPECT, YO
	///////////////////////////////////////////////////////////////////////
	class Respect
	{
		/**
		* Defines the factor of respect you gain for every pop tab in revenue
		*
		* Default: Get 1 respect for every 10 pop tabs 
		*/
		tradingRespectFactor = 0.1;
		
		/**
		* Defines the the minimum amount of Respect earned/lost for a kill
		*/
		minRespectTransfer = 100;

		/**
		* Defines the amount of respect earned/lost for certain types of frags
		*/
		class Frags
		{
			domination = 80;			// Keeps killing the same guy
			letItRain = 150;			// MG, also vehicle MGs
			humiliation = 300;			// Axe
			passenger = 400;			// Out of car/chopper/boat
			roadKill = 200;				// :)
			bigBird = 600;				// Roadkill, but with chopper/plane
			chuteGreaterChopper = 1000;	// Someone flies into chute and chopper/plane explodes	
		};

		class Percentages 
		{
			unlucky = 1; // Dying for an unknown reason costs you 1% respect
			crash = 1; // Crashing your car costs you 1% respect
			suicide = 2; // Comitting suicide costs you 2% of your respect
			friendyFire = 3; // Friendly fire costs you 3% 
			npc = 4; // Being killed by an NPC costs you 4%
			bambiKill = 5; // Killing a bambi costs you 5%
			frag = 5; // Killing someone will get you 5% and remove 5% from the victim
		};

		class Handcuffs 
		{
			trapping = -50;					// A handcuffs B
			breakingFree = 100; 			// B broke free
			releasedByHero = 100; 			// C releases B
			releasedByHostageTaker = 50; 	// A releases B	
		};

		class Bonus
		{
			// Bonus per full 100m 
			per100mDistance = 10;

			// First blood after server restart
			firstBlood = 100;

			// If you kill someone while you are in your own territory
			homie = 50;

			// If you kill someone who is in his own territory
			raid = 200;

			/*
				Example with killstreak = 50

				Frag  Factor   Bonus
				2    * 50      +100
				3    * 50      +150
				4    * 50      +200
				5    * 50      +250
			*/
			killStreak = 50;

			// Kills within this amount of seconds stack (default: 2 minutes)
			killStreakTimeout = 120;
		};
	};

	///////////////////////////////////////////////////////////////////////
	// KILLFEED MAN!
	///////////////////////////////////////////////////////////////////////

	class KillFeed
	{
		// Shows a kill feed for well kills
		showKillFeed = 0;
	};

	///////////////////////////////////////////////////////////////////////
	// PLAYER SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////
	class BambiSettings
	{
		/**
		 * Loadout of new bambi players
		 *
		 * (They will always spawn with a bambi overall - you cannot 
		 * change the loadout uniform)
		 */
		loadOut[] = 
		{
			"Exile_Item_XM8",
			"ItemRadio",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Bandage",
			"Exile_Item_Bandage",
			"Exile_Item_Bandage"
		};

		/**
		 * Enables or disables parachute spawning.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		parachuteSpawning = 0;

		/**
		 * Enables or disables halo jumping. Only applies 
		 * if parachute spawning is enabled.
		 *
		 * Remember that if you enable halo jump, it is adviced
		 * to adjust the parachuteDropHeight to something around
		 * 1km or so.
		 *
		 * 1 = On
		 * 0 = Off
		 */
		haloJump = 0	;

		/**
		 * Parachute drop height in meters. 
		 */
		parachuteDropHeight = 1000;

		/**
		 * Number of minutes where a fresh spawned player remains in the
		 * bambi state. It will end the bambi state after this timeout
		 * expired or when they pick up their first weapon. Whatever
		 * happens first.
		 */
		protectionDuration = 5;

		/**
		 * Radius of spawn zones around the center of spawn zone markers.
		 */
		spawnZoneRadius = 300;

		/**
		 * These vehicles spawn on server restart close to spawn zones.
		 * They are non-persistent and will despawn on server restart.
		 * Basically they are just used to get away from the spawn zone
		 * faster.
		 *
		 * {Number of vehicles *per* spawn zone, vehicle class name}
		 */
		spawnZoneVehicles[] =
		{
			{3, "Exile_Bike_OldBike"}
		};
	};

	///////////////////////////////////////////////////////////////////////
	// VEHICLE SPAWN CONFIGURATION
	///////////////////////////////////////////////////////////////////////

	class VehicleSpawn
	{
		/**
		* Grid Size for vehicle spawning,
		* smaller the number more vehicles,
		* you get the point
		*/
		vehiclesGridSize = 2200;

		/**
		* Vehicle ammount per grid
		* kinda self explanitory
		*/
		vehiclesGridAmount = 2;

		/**
		* Creates global markers for vehicle spawn tweeking,
		* after you are satisfied with vehicle ammount and spread set this to 0.
		*/
		vehiclesDebugMarkers = 0;

		/**
		* The server will apply random damage up to this value when spawning a vehicle.
		*/
		damageChance = 30; // 20% chance for a vehicle HITPOINT to be damaged
		maximumDamage = 0.9;

		/**
		 * If "randmizeFuel" is set to 1, vehicles will spawn with randomized
		 * fuel. In this case, "fuel" controls the percentage of fuel that
		 * can be in the vehicle at a maximum. For example, if you set this to
		 * 0.5, then vehicles will spawn with something random between 0% and 50%.
		 *
		 * If "randomizeFuel" is set to 0, all vehicles will spawn exactly the 
		 * fuel percentage defined in "fuel". For example, setting this to 0.5
		 * will spawn all vehicles with 50% fuel. Setting it to 0 would spawn
		 * all vehicles without fuel.
		 */
		randomizeFuel = 1;
		fuel = 1;

		/**
		 * Works exactly the same as the fuel setting ^
		 */
		randomizeAmmo = 1;
		ammo = 1;

		// Stuff to spawn on water
		water[] = 
		{
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey"
		};

		// Stuff to spawn on roads
		ground[] = 
		{
			"Exile_Bike_QuadBike_Black",
			"Exile_Bike_QuadBike_Blue",
			"Exile_Bike_QuadBike_Red",
			"Exile_Bike_QuadBike_White",
			"Exile_Bike_QuadBike_Nato",
			"Exile_Bike_QuadBike_Csat",
			"Exile_Bike_QuadBike_Fia",
			"Exile_Bike_QuadBike_Guerilla01",
			"Exile_Bike_QuadBike_Guerilla02",
			"Exile_Car_Volha_Blue",
			"Exile_Car_Volha_White",
			"Exile_Car_Lada_Green",
			"Exile_Car_Lada_Taxi",
			"Exile_Car_TowTractor_White",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_UAZ_Green",
			"Exile_Car_Tractor_Red",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_Octavius_White"
		};

		/**
		 * Enables or disables nightvision optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		nightVision = 1;

		/**
		 * Enables or disables thermal optics on ALL vehicles
		 *
		 * 0 = off
		 * 1 = on
		 */
		thermalVision = 0;

		/**
		 * Set this to 1 to unlock vehicles on server boot if they are in safe zones
		 *
		 * 0 = off
		 * 1 = on
		 */
		unlockInSafeZonesAfterRestart = 1;	
	};

	class Weather
	{
		/*
			You can define multiple "keyframes" for the weather to change. The server will pick
			a keyframe randomly to simulate the weather. It will change the weather-keyframes
			based on the following interval
		*/
		interval = 30;

		/*
			Add the keyframes here. The server will pick one random, so if you want one 
			weather type of be more dominant compared to others, add it multiple times
		*/
		//keyframes[] = {"Sunny", "Cloudy", "Thunderstorm"}; 
		keyframes[] = {"Cloudy"}; 

		/*
			This is a keyframe. Look up the BIKI to get more details about the parameters

			Be sure to design the fog settings at a view distance of 1,600m as this is the
			limit in multiplayer by default

			https://community.bistudio.com/wiki/fogParams
			https://community.bistudio.com/wiki/overcast
			https://community.bistudio.com/wiki/setWaves
			https://community.bistudio.com/wiki/setWindStr
			https://community.bistudio.com/wiki/setGusts
			https://community.bistudio.com/wiki/setRain
			https://community.bistudio.com/wiki/setLightnings
			https://community.bistudio.com/wiki/setRainbow
		*/
		class Sunny
		{
			fogValue = 0;
			fogDecay = 0;
			fogBase = 0;
			overcast = 0.1;
			waves = 0.2;
			wind = 0.25;
			gusts = 0.1;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Cloudy
		{
			fogValue = 0.1;
			fogDecay = 0.1;
			fogBase = 5;
			overcast = 1;
			waves = 0.4;
			wind = 0.25;
			gusts = 0.5;
			rain = 0;
			lightnings = 0;
			rainbows = 0;
		};

		class Thunderstorm
		{
			fogValue = 0.7;
			fogDecay = 0.2;
			fogBase = 5;
			overcast = 1;
			waves = 1;
			wind = 0.25;
			gusts = 0.5;
			rain = 1;
			lightnings = 1;
			rainbows = 0.5;
		};
	};

	class Time
	{
		// Uses Dedicated Server time as ingame Time
		useRealTime = 0;

		// Will overide RealTime
		useStaticTime = 1;

		// time in ARMA FORMAT << CONFIG
		// https://community.bistudio.com/wiki/setDate

		staticTime[] = {2039,10,24,15,30};
	};


	class RCON
	{
		/*
			Note that for this to work you need to have serverCommandPassowrd defined in config.cfg and BE enabled
		*/

		// This needs to match config.cfg serverCommandPassword
		serverPassword = "";

		// Autolocks server until its ready to accept players
		useAutoLock = 1;

		// Server will autoLock at that time before restart (minutes)
		restartAutoLock = 5;

		/*
			Number of hours and minutes of your restart period.

			Examples:

			{4, 0} = Every 4 hours
			{1, 30} = Every one and a half hour (who the hell would do this?)
		*/
		restartTimer[] = {3, 0};

		/*
			Kicks players before restart to prevent gear loss.
			We strongely recommend to use this!

			0 = off
			1 = on
		*/
		useAutoKick = 1;

		/*
			Number of minutes before the server kicks players that did
			not disconnect before the restart. Should at least be two
			minutes!
		*/
		kickTime = 2;

		/*
			Self-explanatory

			0 = off
			1 = on
		*/
		useRestartMessages = 0;

		/*
			Number of minutes before the restart to inform your players.

			Only use full minutes here. Value like 5.5 have not been tested.
		*/
		restartWarningTime[] = {15, 10, 5, 3}; 

		/* 
			If set to 1 server will execute '#shutdown',
			to try to shutdown the server
		*/

		useShutdown = 0;
	};

	class ServerSettings
	{
		/*
			Support for custom server FSM if wanted
		*/
		serverFSM = "exile_server\fsm\main.fsm";

		/*
			If this is enabled, Exile developers will spawn with a ton of pop tabs.
			We will have a hard time debugging things if you disable this.
		*/
		devFriendyMode = 0;

		devs[] = 
		{
			{"76561197985241690","[EXILE|DEV] Eichi"},
			{"76561198022879703","[EXILE|DEV] Grim"},
			{"76561198075905447","[EXILE|DEV] Vishpala"},
			{"76561197968613061","[EXILE|DEV] Niuva"}
		};
	};

	class Events 
	{
		/*
			A list of events that are active
		*/
		enabledEvents[] = {"SupplyBox"}; 

		class EarthQuake 
		{
			type = "spawn";
			function = "ExileServer_system_event_earthQuake_start";
			minTime = 60;
			maxTime = 180;
			minimumPlayersOnline = 1;
		};

		class SupplyBox 
		{
			/*
				Drops a supply box on a parachute next to a random airport on the map.
				The box may contain items. The box can be transported to a territory
				and installed to become a normal storage container.
			*/
			type = "spawn";
			function = "ExileServer_system_event_supplyBox_start";
			minTime = 20; // minutes
			maxTime = 150; // minutes
			minimumPlayersOnline = 2;
			dropRadius = 500; // 500m around an airport (including the main airport on Altis!)
			dropAltitude = 300; // altitude of the drop
			markerTime = 45; // minutes

			/*
				These are different types of boxes can be dropped.
				You can specify the cargo a box should contain.
				The type of box is chosen randomly from the following list.
				Add a type multiple times to increase the chance of being used.
			*/
			types[] = {"Tools", "Food", "Drinks", "RepairParts", "Medical", "Technology", "BuildingSupplies"};

			class BoxTypes
			{
				class Food 
				{
					items[] = 
					{
						{"Exile_Item_BBQSandwich", 10},
						{"Exile_Item_Catfood", 10},
						{"Exile_Item_ChristmasTinner", 10},
						{"Exile_Item_GloriousKnakworst", 10},
						{"Exile_Item_SausageGravy", 10},
						{"Exile_Item_Surstromming", 10},
						{"Exile_Item_CanOpener", 3},
						{"Exile_Item_CookingPot", 3},
						{"Exile_Item_Matches", 3}
					};
				};

				class Drinks 
				{
					items[] = 
					{
						{"Exile_Item_InstantCoffee", 12},
						{"Exile_Item_Energydrink", 12},
						{"Exile_Item_PlasticBottleFreshWater", 12},
						{"Exile_Item_MountainDupe", 24},
						{"Exile_Item_PowerDrink", 12},
						{"Exile_Item_PlasticBottleCoffee", 12}
					};
				};
				
				class Tools 
				{
					items[] = 
					{
						{"Exile_Item_Wrench", 1},
						{"Exile_Melee_Axe", 1},
						{"Exile_Item_Shovel", 1},
						{"Exile_Item_Screwdriver", 1},
						{"Exile_Item_Pliers", 1},
						{"Exile_Item_Grinder", 1},
						{"Exile_Item_Handsaw", 1},
						{"Exile_Item_Foolbox", 1},
						{"Exile_Item_FireExtinguisher", 1},
						{"Exile_Item_CordlessScrewdriver", 1},
						{"Exile_Melee_SledgeHammer", 1},
						{"Exile_Item_Hammer", 1}
					};
				};
				
				class Medical 
				{
					items[] = 
					{
						{"Exile_Item_Bandage", 20},
						{"Exile_Item_Vishpirin", 20},
						{"Exile_Item_InstaDoc", 10}
					};
				};
				
				class BuildingSupplies 
				{
					items[] = 
					{
						{"Exile_Item_WoodFloorKit", 12},
						{"Exile_Item_WoodFloorPortKit", 3},
						{"Exile_Item_WoodWallKit", 12},
						{"Exile_Item_WoodDoorwayKit", 2},
						{"Exile_Item_WoodGateKit", 2},
						{"Exile_Item_WoodWindowKit", 5},
						{"Exile_Item_Codelock", 1}
					};
				};

				class Technology 
				{
					items[] = 
					{
						{"Exile_Item_ThermalScannerPro", 2},
						{"Exile_Item_BaseCameraKit", 2},
						{"ItemGPS", 2},
						{"Rangefinder", 2},
						{"NVGoggles", 2}
					};
				};

				class RepairParts 
				{
					items[] = 
					{
						{"Exile_Item_CarWheel", 4},
						{"Exile_Item_FuelCanisterFull", 4},
						{"Exile_Item_OilCanister", 2},
						{"Exile_Item_MetalWire", 2},
						{"Exile_Item_JunkMetal", 2},
						{"Exile_Item_DuctTape", 3},
						{"Exile_Item_MetalScrews", 3},
						{"Exile_Item_MetalBoard", 2}
					};
				};
			};
		};
		
		class AbandonedSafe
		{
			type = "spawn";
			function = "ExileServer_system_event_abandonedSafe_start";
			minTime = 60; // minutes
			maxTime = 120; // minutes
			minimumPlayersOnline = 0;
			markerTime = 15; // minutes
		};

		class AmbientFlyOver
		{
			type = "call";
			function = "ExileServer_system_event_ambientFlyOver_start";
			minTime = 30; // minutes
			maxTime = 90; // minutes
			minimumPlayersOnline = 1;
		};		
	};
	
	class Logging
	{
		/*
			If logging is enabled separate logs will be made in the sql logs folder for each type
		*/
		traderLogging = 1;
		deathLogging = 1;
		territoryLogging = 1;
	};
};

