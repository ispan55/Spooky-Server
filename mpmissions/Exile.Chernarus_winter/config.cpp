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
 

class CfgClans
{
	/*
		Defines the amount of pop tabs needed to register a new clan

		Default: 20,000
	*/
	registrationFee = 250;

	/*
		A list of all characters allowed in a clan *name*

		NOTE: 
	*/
	clanNameAlphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 ._-!:\\/";

	/*

		Maximum markers per clan

	*/
	maximumIcons = 20;

	/*
		Maximum number of characters on a Marker in a presistent system

		Note: MAX 255!
		
	*/
	maximumIconText = 50;

	/*

		Maximum poly markers per clan

	*/
	maximumPolys = 10;


	/* 

		Maximum points in poly
	*/
	maximumPolyNode = 10;
};
class Exile_AbstractCraftingRecipe
{
	name = "";
	pictureItem = ""; 
	returnedItems[] = {};
	components[] = {}; // Required components
	tools[] = {}; // Required tools (matches, gas cooker etc.)
	requiredInteractionModelGroup = ""; // See CfgInteractionModels
	requiresOcean = 0; // isSurfaceWater test
	requiresFire = 0; // inflamed object nearby
	requiresConcreteMixer = 0; // Check if concrete mixer is nearby
};

class CfgCraftingRecipes
{

class CraftFlag: Exile_AbstractCraftingRecipe
{
	name = "Craft Territory Flag";
	pictureItem = "Exile_Item_Flag";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_Flag"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{3, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_Magazine01"},
		{1, "Exile_Item_Magazine02"},
		{1, "Exile_Item_Magazine03"},
		{1, "Exile_Item_Magazine04"}
	};
};

class CraftMetalTower: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Tower";
	pictureItem = "Land_Cargo_Patrol_V2_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_Cargo_Patrol_V2_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"},
		{8, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};

class CraftMetalHouse: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal House";
	pictureItem = "Land_Cargo_House_V2_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_Cargo_House_V2_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"},
		{6, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};

class CraftMetalShed: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Shed";
	pictureItem = "Land_Metal_Shed_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_Metal_Shed_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{5, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};

class CraftHBarrierWall: Exile_AbstractCraftingRecipe
{
	name = "Craft H-Barrier Wall";
	pictureItem = "Land_Hbarrier6_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Land_Hbarrier6_F_Kit"}
	};
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{3, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalWire"}
	};
};

class CraftHBarrierWallCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier Wall Corner";
	pictureItem = "Land_HBarrierWall_corner_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Land_HBarrierWall_corner_F_Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{3, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalWire"}
	};
};

class CraftHBarrierTower: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier Tower";
	pictureItem = "Land_HBarrierTower_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Land_HBarrierTower_F_Kit"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"},
		{4, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalWire"}
	};
};

class CraftBunker: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbag Bunker";
	pictureItem = "Land_BagBunker_Tower_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_BagBunker_Tower_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"},
		{4, "Exile_Item_WoodPlank"},
		{6, "Exile_Item_Rope"},
		{4, "Exile_Item_Sand"}
	};
};

class CraftSunshade: Exile_AbstractCraftingRecipe
{
	name = "Craft Sunshade";
	pictureItem = "Land_Sunshade_04_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_Sunshade_04_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_Magazine01"},
		{1, "Exile_Item_Magazine02"}
	};
};

class CraftSunchair: Exile_AbstractCraftingRecipe
{
	name = "Craft Sunchair";
	pictureItem = "Land_Sun_chair_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Land_Sun_chair_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_Magazine01"},
		{1, "Exile_Item_Magazine02"}
	};
};

class Craft9mmSilencer: Exile_AbstractCraftingRecipe
{
	name = "Craft 9mm Suppressor";
	pictureItem = "Exile_Item_Foolbox";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "muzzle_snds_L"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Knife",
		"Exile_Item_Grinder"
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Can_Empty"},
		{1, "Exile_Item_MetalScrews"}
	};
};

class CraftCodeLock: Exile_AbstractCraftingRecipe
{
	name = "Craft Code Lock";
	pictureItem = "Exile_Item_CodeLock";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] =
	{
		{1, "Exile_Item_CodeLock"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Hammer",
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MobilePhone"},
		{1, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_PortableGeneratorKit"},
		{1, "Exile_Item_LightBulb"}
	};
};

class CraftScrew: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Screws";
	pictureItem = "Exile_Item_MetalScrews";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	returnedItems[] =
	{
		{1, "Exile_Item_MetalScrews"}
	};
	components[] = 
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class ScrapExtinguisher: Exile_AbstractCraftingRecipe
{
	name = "Scrap Fire Extinguisher";
	pictureItem = "Exile_Item_FireExtinguisher";
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
	components[] = 
	{
		{1, "Exile_Item_FireExtinguisher"}
	};
};

class TrimWood: Exile_AbstractCraftingRecipe
{
	name = "Trim Wood";
	pictureItem = "Exile_Item_WoodSticks";
	tools[] =
	{
		"Exile_Item_Knife"
	};
	returnedItems[] =
	{
		{2, "Exile_Item_WoodSticks"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodLog"}
	};
};

class TrimStick: Exile_AbstractCraftingRecipe
{
	name = "Pluck Leaves";
	pictureItem = "Exile_Item_Leaves";
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] =
	{
		{2, "Exile_Item_Leaves"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodSticks"}
	};
};

class CraftSVDGhillie: Exile_AbstractCraftingRecipe
{
	name = "Craft SVD Ghillie";
	pictureItem = "Exile_Item_Leaves";
	returnedItems[] =
	{
		{1, "CUP_SVD_camo_g_half"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{4, "Exile_Item_Rope"},
		{2, "Exile_Item_WoodSticks"},
		{8, "Exile_Item_Leaves"}
	};
};

class CraftM24Ghillie: Exile_AbstractCraftingRecipe
{
	name = "Craft M24/M40 Ghillie";
	pictureItem = "Exile_Item_Leaves";
	returnedItems[] =
	{
		{1, "CUP_Mxx_camo_half"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{4, "Exile_Item_Rope"},
		{2, "Exile_Item_WoodSticks"},
		{8, "Exile_Item_Leaves"}
	};
};

class CraftGhillieSuit: Exile_AbstractCraftingRecipe
{
	name = "Craft Ghillie Suit";
	pictureItem = "Exile_Item_Leaves";
	returnedItems[] =
	{
		{1, "TRYK_H_ghillie_over_green"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Knife"
	};
	components[] = 
	{
		{6, "Exile_Item_Rope"},
		{4, "Exile_Item_WoodSticks"},
		{12, "Exile_Item_Leaves"}
	};
};

class CraftVishpirin: Exile_AbstractCraftingRecipe
{
	name = "Craft Vishpirin";
	pictureItem = "Exile_Item_Vishpirin";
	returnedItems[] =
	{
		{1, "Exile_Item_Vishpirin"}
	};
	components[] = 
	{
		{3, "Exile_Item_Bandage"},
		{2, "Exile_Item_Beer"}
	};
};

class CraftKnifeCanOpener: Exile_AbstractCraftingRecipe
{
	name = "Craft Can Opener";
	pictureItem = "Exile_Item_CanOpener";
	returnedItems[] =
	{
		{1, "Exile_Item_CanOpener"}
	};
	components[] = 
	{
		{1, "Exile_Item_Knife"},
		{1, "Exile_Item_ZipTie"}
	};
};

class CraftPlierCanOpener: Exile_AbstractCraftingRecipe
{
	name = "Craft Can Opener";
	pictureItem = "Exile_Item_CanOpener";
	returnedItems[] =
	{
		{1, "Exile_Item_CanOpener"}
	};
	components[] = 
	{
		{1, "Exile_Item_Pliers"},
		{1, "Exile_Item_ZipTie"}
	};
};

class CraftTent: Exile_AbstractCraftingRecipe
{
	name = "Craft Tent";
	pictureItem = "Exile_Item_CamoTentKit";
	returnedItems[] =
	{
		{1, "Exile_Item_CamoTentKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_Rope"},
		{4, "Exile_Item_WoodSticks"},
		{6, "Exile_Item_Leaves"}
	};
};

class CraftRevolverAmmo: Exile_AbstractCraftingRecipe
{
	name = "Swap .45 Rounds";
	pictureItem = "Exile_Magazine_6Rnd_45ACP";
	returnedItems[] =
	{
		{1, "Exile_Magazine_6Rnd_45ACP"}
	};
	components[] = 
	{
		{1, "Exile_Magazine_7Rnd_45ACP"}
		
	};
};

class CraftWireBarrier: Exile_AbstractCraftingRecipe
{
	name = "Craft Barbed Wire Barrier";
	pictureItem = "Exile_Item_RazorWireKit";
	returnedItems[] =
	{
		{2, "Land_Razorwire_F_Kit"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	components[] = 
	{
		{2, "Exile_Item_MetalWire"},
		{2, "Exile_Item_WoodPlank"}
	};
};

class CraftWire: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Wire";
	pictureItem = "Exile_Item_MetalWire";
	requiresFire = 1;
	returnedItems[] =
	{
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot",
		"Exile_Item_Pliers"
	};
	components[] = 
	{
		{1, "Exile_Item_JunkMetal"}
	};
};

class SmeltTags: Exile_AbstractCraftingRecipe
{
	name = "Smelt Dog Tags";
	pictureItem = "Exile_Item_JunkMetal";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{5, "CUP_item_CDF_Dogtags"}
	};
};

class SmeltCans: Exile_AbstractCraftingRecipe
{
	name = "Smelt Empty Cans";
	pictureItem = "Exile_Item_JunkMetal";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{4, "Exile_Item_Can_Empty"}
	};
};
	
class BreachingChargeMetal: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Metal)";
	pictureItem = "Exile_Item_BreachingCharge_Metal";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Metal"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{3, "SatchelCharge_Remote_Mag"}
	};
};

class BreachingChargeWood: Exile_AbstractCraftingRecipe
{
	name = "Breaching Charge (Wood)";
	pictureItem = "Exile_Item_BreachingCharge_Wood";
	returnedItems[] =
	{
		{1, "Exile_Item_BreachingCharge_Wood"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};
	components[] = 
	{
		{1, "Exile_Item_DuctTape"},
		{2, "DemoCharge_Remote_Mag"}
	};
};

class CookBBQSandwich: Exile_AbstractCraftingRecipe
{
	name = "Cook BBQ Sandwich";
	pictureItem = "Exile_Item_BBQSandwich_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_BBQSandwich_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_BBQSandwich"}
	};
};

class CookCatFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Cat Food";
	pictureItem = "Exile_Item_CatFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_CatFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_CatFood"}
	};
};

class CookChristmasTinner: Exile_AbstractCraftingRecipe
{
	name = "Cook Christmas Tinner";
	pictureItem = "Exile_Item_ChristmasTinner_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_ChristmasTinner_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_ChristmasTinner"}
	};
};
class CookCoffee: Exile_AbstractCraftingRecipe
{
	name = "Brew Coffee";
	pictureItem = "Exile_Item_PlasticBottleCoffee";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleCoffee"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleFreshWater"},
		{1, "Exile_Item_InstantCoffee"}
	};
};
class CookDogFood: Exile_AbstractCraftingRecipe
{
	name = "Cook Dog Food";
	pictureItem = "Exile_Item_DogFood_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_DogFood_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_DogFood"}
	};
};

class CookGloriousKnakworst: Exile_AbstractCraftingRecipe
{
	name = "Cook Glorious Knakworst";
	pictureItem = "Exile_Item_GloriousKnakworst_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_GloriousKnakworst_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_GloriousKnakworst"}
	};
};

class CookMacasCheese: Exile_AbstractCraftingRecipe
{
	name = "Cook Macas Cheese";
	pictureItem = "Exile_Item_MacasCheese_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_MacasCheese_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_MacasCheese"}
	};
};

class CookPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class CookPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Cook Salt Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};

class CookSausageGravy: Exile_AbstractCraftingRecipe
{
	name = "Cook Sausage Gravy";
	pictureItem = "Exile_Item_SausageGravy_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_SausageGravy_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_SausageGravy"}
	};
};

class CookSurstromming: Exile_AbstractCraftingRecipe
{
	name = "Cook Surströmming";
	pictureItem = "Exile_Item_Surstromming_Cooked";
	requiresFire = 1;
	returnedItems[] =
	{
		{1, "Exile_Item_Surstromming_Cooked"}
	};
	tools[] =
	{
		"Exile_Item_CookingPot"
	};
	components[] = 
	{
		{1, "Exile_Item_Surstromming"}
	};
};

class CraftBandage: Exile_AbstractCraftingRecipe
{
	name = "Craft Bandage";
	pictureItem = "Exile_Item_Bandage";
	returnedItems[] =
	{
		{1, "Exile_Item_Bandage"}
	};
	components[] = 
	{
		{2, "Exile_Item_ToiletPaper"}
	};
};

class CraftFirePlace: Exile_AbstractCraftingRecipe
{
	name = "Craft Fire Place";
	pictureItem = "Exile_Item_CampFireKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_CampFireKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
};
class CraftFloodLight: Exile_AbstractCraftingRecipe
{
	name = "Craft Flood Light";
	pictureItem = "Exile_Item_FloodLightKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_FloodLightKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
class CraftFortificationUpgrade: Exile_AbstractCraftingRecipe
{
	name = "Craft Fortification Upgrade";
	pictureItem = "Exile_Item_MetalBoard"; //<< CHANGE IT
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_FortificationUpgrade"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftHBarrier5Kit: Exile_AbstractCraftingRecipe
{
	name = "Craft H-barrier (5 Blocks)";
	pictureItem = "Exile_Item_HBarrier5Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Pliers"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_HBarrier5Kit"}
	};
	components[] = 
	{
		{3, "Exile_Item_SandBagsKit_Long"},
		{2, "Exile_Item_MetalWire"}
	};
};
class CraftMetalBoard: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Board";
	pictureItem = "Exile_Item_MetalBoard";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalBoard"}
	};
	components[] = 
	{
		{3, "Exile_Item_JunkMetal"}
		
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalHedgehog: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Hedgehog";
	pictureItem = "Exile_Item_MetalHedgehogKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalHedgehogKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftMetalPole: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Pole";
	pictureItem = "Exile_Item_MetalPole";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_MetalPole"}
	};
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] = {"Exile_Item_Grinder"};
};
class CraftPortableGenerator: Exile_AbstractCraftingRecipe
{
	name = "Craft Portable Generator";
	pictureItem = "Exile_Item_PortableGeneratorKit";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_ExtensionCord"}
	};
};
/*class CraftRazorWireKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Razor Wire Kit Kit";
	pictureItem = "Exile_Item_RazorWireKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_RazorWireKit_Long"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};*/
class CraftRepairKitMetal: Exile_AbstractCraftingRecipe
{
	name = "Craft Metal Repair Kit";
	pictureItem = "Exile_Item_RepairKitMetal";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitMetal"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Grinder"
	};
};
class CraftRepairKitWood: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Repair Kit";
	pictureItem = "Exile_Item_RepairKitWood";
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_RepairKitWood"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Foolbox"
	};
};
class CraftSandBagsKitCorner: Exile_AbstractCraftingRecipe
{
	name = "Craft Sandbags Kit (Corner)";
	pictureItem = "Exile_Item_SandBagsKit_Corner";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Corner"}
	};
	components[] = 
	{
		{3, "Exile_Item_Sand"}
	};
};
class CraftSandBagsKitLong: Exile_AbstractCraftingRecipe
{
	name = "Craft Sand Bags Kit (Long)";
	pictureItem = "Exile_Item_SandBagsKit_Long";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_SandBagsKit_Long"}
	};
	components[] = 
	{
		{6, "Exile_Item_Sand"}
	};
};
class CraftStorageCrate: Exile_AbstractCraftingRecipe
{
	name = "Craft Storage Crate";
	pictureItem = "Exile_Item_StorageCrateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_StorageCrateKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWaterBarrel: Exile_AbstractCraftingRecipe
{
	name = "Craft Water Barrel";
	pictureItem = "Exile_Item_WaterBarrelKit";
	requiredInteractionModelGroup = "WorkBench";
	requiresFire = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_WaterBarrelKit"}
	};
	components[] = 
	{
		{20, "Exile_Item_PlasticBottleEmpty"}
	};
};
class CraftWireFenceKit: Exile_AbstractCraftingRecipe
{
	name = "Craft Wire Fence Kit";
	pictureItem = "Exile_Item_WireFenceKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = 
	{
		"Exile_Item_Grinder", 
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	returnedItems[] = 
	{
		{1, "Exile_Item_WireFenceKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{6, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"}
	};
};
class CraftWoodDoorWay: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Doorway";
	pictureItem = "Exile_Item_WoodDoorwayKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"}
	};
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodFloor: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor";
	pictureItem = "Exile_Item_WoodFloorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_JunkMetal"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodPlank: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Plank";
	pictureItem = "Exile_Item_WoodPlank";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodLog"}
	};
	tools[] = {"Exile_Item_Handsaw"};
};
class CraftWoodStairs: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Stairs";
	pictureItem = "Exile_Item_WoodStairsKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodStairsKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodSupport: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Support";
	pictureItem = "Exile_Item_WoodSupportKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodSupportKit"}
	};
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodWallHalf: Exile_AbstractCraftingRecipe
{
	name = "Craft 1/2 Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallHalfKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Window";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"}
	};
	components[] = 
	{
		{8, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWoodWallFromWindow: Exile_AbstractCraftingRecipe
{
	name = "Craft Wood Wall (from window)";
	pictureItem = "Exile_Item_WoodWallKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_WoodWindowKit"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class CraftWorkBench: Exile_AbstractCraftingRecipe
{
	name = "Craft Work Bench";
	pictureItem = "Exile_Item_WorkBenchKit";
	returnedItems[] = 
	{
		{1, "Exile_Item_WorkBenchKit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodLog"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class EmptyFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Empty Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterEmpty";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
};
class EmptyPlasticBottleDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
};
class EmptyPlasticBottleSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Empty Salt Water";
	pictureItem = "Exile_Item_PlasticBottleEmpty";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
	components[] =
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
};
class FillEmptyPlasticBottleWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_PlasticBottleDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithFreshWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Fresh Water";
	pictureItem = "Exile_Item_PlasticBottleFreshWater";
	requiredInteractionModelGroup = "CleanWaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_PlasticBottleFreshWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyPlasticBottleWithSaltWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Salt Water";
	pictureItem = "Exile_Item_PlasticBottleSaltWater";
	requiresOcean = 1;
	returnedItems[] = 
	{
		{1, "Exile_Item_PlasticBottleSaltWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_PlasticBottleEmpty"}
	};
};
class FillEmptyWaterCanisterWithDirtyWater: Exile_AbstractCraftingRecipe
{
	name = "Fill Dirty Water";
	pictureItem = "Exile_Item_WaterCanisterDirtyWater";
	requiredInteractionModelGroup = "WaterSource";
	returnedItems[] =
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterEmpty"}
	};
};
class FillFuelCanister: Exile_AbstractCraftingRecipe
{
	name = "Fill Fuel Canister";
	pictureItem = "Exile_Item_FuelCanisterFull";
	requiredInteractionModelGroup = "FuelSource";
	returnedItems[] = 
	{
		{1, "Exile_Item_FuelCanisterFull"}
	};
	components[] = 
	{
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
};
class UpgradeToWoodDoor: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Door";
	pictureItem = "Exile_Item_WoodDoorKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodDoorKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodDoorwayKit"},
		{2, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class UpgradeToWoodFloorPort: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Floor Port";
	pictureItem = "Exile_Item_WoodFloorPortKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodFloorPortKit"},
		{2, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodFloorKit"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class UpgradeToWoodGate: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Gate";
	pictureItem = "Exile_Item_WoodGateKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodGateKit"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"},
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class UpgradeToWoodWall: Exile_AbstractCraftingRecipe
{
	name = "Upgrade to Wood Wall";
	pictureItem = "Exile_Item_WoodWallHalfKit";
	requiredInteractionModelGroup = "WorkBench";
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
	components[] = 
	{
		{2, "Exile_Item_WoodWallHalfKit"}
	};
	tools[] = 
	{
		"Exile_Item_Hammer",
		"Exile_Item_Handsaw"
	};
};
class UpgradeToWoodWindow: Exile_AbstractCraftingRecipe
{
	name = "Saw Window Port";
	pictureItem = "Exile_Item_WoodWindowKit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = {"Exile_Item_Handsaw"};
	returnedItems[] = 
	{
		{1, "Exile_Item_WoodWindowKit"},
		{2, "Exile_Item_WoodPlank"}
	};
	components[] = 
	{
		{1, "Exile_Item_WoodWallKit"}
	};
};
/////////////////////////////////////////////
//EXTENDED BASE MOD
/////////////////////////////////////////////
class MetalWoodenRack: Exile_AbstractCraftingRecipe
{
	name = "Craft Large Storage Rack";
	pictureItem = "Land_Metal_wooden_rack_F_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	tools[] =
	{
		"Exile_Item_Hammer",
		"Exile_Item_Grinder"
	};
	returnedItems[] = 
	{
		{1, "Land_Metal_wooden_rack_F_Kit"}
	};
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Container";
};

class CncBarrier: Exile_AbstractCraftingRecipe
{
	name = "Craft Concrete Road Barrier";
	pictureItem = "Land_CncBarrier_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncBarrier_F_Kit"},
		{1, "Exile_Item_WaterCanisterEmpty"},
		{1, "Exile_Item_FuelCanisterEmpty"}
	};
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	category = "Walls";
};

class PierLadder: Exile_AbstractCraftingRecipe
{
	name = "Craft Ladder";
	pictureItem = "PierLadder_F_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	tools[] = {"Exile_Item_Grinder"};
	returnedItems[] = 
	{
		{1, "PierLadder_F_Kit"}
	};
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Misc";
};

class CNCWall: Exile_AbstractCraftingRecipe
{
	name = "Craft Corrugated Fence";
	pictureItem = "Land_Wall_Tin_4_Kit";
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	tools[] = {"Exile_Item_Hammer", "Exile_Item_Grinder"};	
	returnedItems[] = 
	{
		{1, "Land_Wall_Tin_4_Kit"}
	};
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Walls";
};

class Chair: Exile_AbstractCraftingRecipe
{
	name = "Craft Wooden Chair";
	pictureItem = "Land_ChairWood_F_Kit";
	requiredInteractionModelGroup = "WorkBench";
	tools[] = {"Exile_Item_Handsaw", "Exile_Item_Hammer"};
	returnedItems[] = 
	{
		{1, "Land_ChairWood_F_Kit"}
	};
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"}
	};
	category = "Misc";
};

};


class CfgExileArsenal
{

		
	
	//FoodAndDrink
	class Exile_Item_CookingPot                                            { quality = 1; price = 50; };
	class Exile_Item_CanOpener                                             { quality = 1; price = 50; };
	class Exile_Item_Matches                                               { quality = 1; price = 30; };
	class Exile_Item_EMRE                                                  { quality = 1; price = 30; };
	class Exile_Item_GloriousKnakworst                                     { quality = 1; price = 30; };
	class Exile_Item_Surstromming                                          { quality = 1; price = 30; };
	class Exile_Item_SausageGravy                                          { quality = 1; price = 30; };
	class Exile_Item_ChristmasTinner                                       { quality = 1; price = 30; };
	class Exile_Item_MacasCheese                                           { quality = 1; price = 30; };
	class Exile_Item_BBQSandwich                                           { quality = 1; price = 30; };
	class Exile_Item_CatFood                                               { quality = 1; price = 30; };
	class Exile_Item_Dogfood                                               { quality = 1; price = 30; };
	class Exile_Item_BeefParts                                             { quality = 1; price = 30; };
	class Exile_Item_Cheathas                                              { quality = 1; price = 30; };
	class Exile_Item_DsNuts                                                { quality = 1; price = 30; };
	class Exile_Item_Noodles                                               { quality = 1; price = 30; };
	class Exile_Item_CockONut                                              { quality = 1; price = 30; };
	class Exile_Item_SeedAstics                                            { quality = 1; price = 30; };
	class Exile_Item_Raisins                                               { quality = 1; price = 30; };
	class Exile_Item_Moobar                                                { quality = 1; price = 30; };
	class Exile_Item_InstantCoffee                                         { quality = 1; price = 30; };
	class Exile_Item_PowerDrink                                            { quality = 1; price = 30; };
	class Exile_Item_PlasticBottleFreshWater                               { quality = 1; price = 30; };
	class Exile_Item_Beer                                                  { quality = 1; price = 30; };
	class Exile_Item_EnergyDrink                                           { quality = 1; price = 30; };
	class Exile_Item_MountainDupe                                          { quality = 1; price = 30; };
	class Exile_Item_ChocolateMilk                                         { quality = 1; price = 30; };
	class Exile_Item_PlasticBottleCoffee                                   { quality = 1; price = 30; };
	
	//Pistols
	class CUP_hgun_Compact                                                 { quality = 1; price = 50; };
	class CUP_hgun_Glock17                                                 { quality = 1; price = 50; };
	class hlc_smg_mp5k                                                     { quality = 1; price = 50; };
	class CUP_hgun_Colt1911                                                { quality = 1; price = 50; };
	class CUP_hgun_M9                                                      { quality = 1; price = 50; };
	class CUP_hgun_Makarov                                                 { quality = 1; price = 50; };
	class CUP_hgun_MicroUzi                                                { quality = 1; price = 50; };
	class CUP_hgun_SA61                                                    { quality = 1; price = 50; };
	class CUP_hgun_TaurusTracker455                                        { quality = 1; price = 50; };
	
	//Bipods
	class bipod_01_F_snd                                                   { quality = 1; price = 20; };
	class bipod_01_F_blk                                                   { quality = 1; price = 20; };
	class bipod_01_F_mtp                                                   { quality = 1; price = 20; };
	class bipod_02_F_blk                                                   { quality = 1; price = 20; };
	class bipod_02_F_tan                                                   { quality = 1; price = 20; };
	class bipod_02_F_hex                                                   { quality = 1; price = 20; };
	class bipod_03_F_blk                                                   { quality = 1; price = 20; };
	class bipod_03_F_oli                                                   { quality = 1; price = 20; };
	class bipod_01_F_khk                                                   { quality = 1; price = 20; };
	class CUP_bipod_Harris_1A2_L                                           { quality = 1; price = 20; };
	class CUP_bipod_VLTOR_Modpod                                           { quality = 1; price = 20; };
	class HLC_Bipod_G36                                                    { quality = 1; price = 20; };
	
	//Supressors
	class muzzle_snds_M                                                    { quality = 1; price = 60; };
	class hlc_muzzle_300blk_KAC                                            { quality = 1; price = 60; };
	class hlc_muzzle_556NATO_KAC                                           { quality = 1; price = 60; };
	class hlc_muzzle_Tundra                                                { quality = 1; price = 60; };
	class muzzle_snds_H                                                    { quality = 1; price = 60; };
	class muzzle_snds_L                                                    { quality = 1; price = 60; };
	class muzzle_snds_B                                                    { quality = 1; price = 60; };
	class muzzle_snds_H_MG                                                 { quality = 1; price = 60; };
	class muzzle_snds_H_SW                                                 { quality = 1; price = 60; };
	class muzzle_snds_acp                                                  { quality = 1; price = 60; };
	class muzzle_snds_338_black                                            { quality = 1; price = 60; };
	class muzzle_snds_338_green                                            { quality = 1; price = 60; };
	class muzzle_snds_338_sand                                             { quality = 1; price = 60; };
	class muzzle_snds_93mmg                                                { quality = 1; price = 60; };
	class muzzle_snds_93mmg_tan                                            { quality = 1; price = 60; };
	class muzzle_snds_H_khk_F                                              { quality = 1; price = 60; };
	class muzzle_snds_H_snd_F                                              { quality = 1; price = 60; };
	class muzzle_snds_m_khk_F                                              { quality = 1; price = 60; };
	class muzzle_snds_m_snd_F                                              { quality = 1; price = 60; };
	class muzzle_snds_58_blk_F                                             { quality = 1; price = 60; };
	class muzzle_snds_58_wdm_F                                             { quality = 1; price = 60; };
	class muzzle_snds_58_ghex_F                                            { quality = 1; price = 60; };
	class muzzle_snds_58_hex_F                                             { quality = 1; price = 60; };
	class muzzle_snds_B_khk_F                                              { quality = 1; price = 60; };
	class muzzle_snds_B_snd_F                                              { quality = 1; price = 60; };
	class muzzle_snds_65_TI_blk_F                                          { quality = 1; price = 60; };
	class muzzle_snds_65_TI_hex_F                                          { quality = 1; price = 60; };
	class muzzle_snds_65_TI_ghex_F                                         { quality = 1; price = 60; };
	class muzzle_snds_H_MG_blk_F                                           { quality = 1; price = 60; };
	class muzzle_snds_H_MG_khk_F                                           { quality = 1; price = 60; };
	class CUP_muzzle_PBS4                                                  { quality = 1; price = 60; };
	class CUP_muzzle_PB6P9                                                 { quality = 1; price = 60; };
	class CUP_muzzle_Bizon                                                 { quality = 1; price = 60; };
	class CUP_muzzle_snds_M9                                               { quality = 1; price = 60; };
	class CUP_muzzle_snds_MicroUzi                                         { quality = 1; price = 60; };
	class hlc_muzzle_545SUP_AK                                             { quality = 1; price = 60; };
	class hlc_muzzle_762SUP_AK                                             { quality = 1; price = 60; };
	class muzzle_HBADGER                                                   { quality = 1; price = 60; };
	class hlc_muzzle_snds_AUG                                              { quality = 1; price = 60; };
	class hlc_muzzle_snds_a6AUG                                            { quality = 1; price = 60; };
	class hlc_muzzle_snds_fal                                              { quality = 1; price = 60; };
	class hlc_muzzle_snds_g3                                               { quality = 1; price = 60; };
	class hlc_muzzle_snds_HK33                                             { quality = 1; price = 60; };
	class hlc_muzzle_snds_M14                                              { quality = 1; price = 60; };
	class hlc_muzzle_Agendasix                                             { quality = 1; price = 60; };
	class hlc_muzzle_Agendasix10mm                                         { quality = 1; price = 60; };
	class CUP_muzzle_snds_AWM                                              { quality = 1; price = 60; };
	class CUP_muzzle_snds_G36_black                                        { quality = 1; price = 60; };
	class CUP_muzzle_snds_G36_desert                                       { quality = 1; price = 60; };
	class CUP_muzzle_snds_L85                                              { quality = 1; price = 60; };
	class CUP_acc_sffh                                                     { quality = 1; price = 60; };
	class CUP_acc_bfa                                                      { quality = 1; price = 60; };
	class CUP_muzzle_snds_M110                                             { quality = 1; price = 60; };
	class CUP_muzzle_snds_M14                                              { quality = 1; price = 60; };
	class CUP_muzzle_snds_M16_camo                                         { quality = 1; price = 60; };
	class CUP_muzzle_snds_M16                                              { quality = 1; price = 60; };
	class CUP_muzzle_snds_Mk12                                             { quality = 1; price = 60; };
	class CUP_muzzle_snds_SCAR_L                                           { quality = 1; price = 60; };
	class CUP_muzzle_mfsup_SCAR_L                                          { quality = 1; price = 60; };
	class CUP_muzzle_snds_SCAR_H                                           { quality = 1; price = 60; };
	class CUP_muzzle_mfsup_SCAR_H                                          { quality = 1; price = 60; };
	class CUP_muzzle_snds_XM8                                              { quality = 1; price = 60; };
	
	//Pointers
	class acc_flashlight                                                   { quality = 1; price = 30; };
	class acc_pointer_IR                                                   { quality = 1; price = 30; };
	class CUP_item_CDF_dogtags                                             { quality = 1; price = 30; };
	class CUP_item_Cobalt_File                                             { quality = 1; price = 30; };
	class CUP_Mxx_camo                                                     { quality = 1; price = 30; };
	class CUP_Mxx_camo_half                                                { quality = 1; price = 30; };
	class CUP_acc_Glock17_Flashlight                                       { quality = 1; price = 30; };
	class CUP_SVD_camo_g                                                   { quality = 1; price = 30; };
	class CUP_SVD_camo_g_half                                              { quality = 1; price = 30; };
	class CUP_SVD_camo_d                                                   { quality = 1; price = 30; };
	class CUP_SVD_camo_d_half                                              { quality = 1; price = 30; };
	class CUP_acc_ANPEQ_15                                                 { quality = 1; price = 30; };
	class CUP_acc_ANPEQ_2                                                  { quality = 1; price = 30; };
	class CUP_acc_Flashlight                                               { quality = 1; price = 30; };
	class CUP_acc_Flashlight_wdl                                           { quality = 1; price = 30; };
	class CUP_acc_Flashlight_desert                                        { quality = 1; price = 30; };
	class CUP_acc_XM8_light_module                                         { quality = 1; price = 30; };
	class CUP_acc_ANPEQ_2_camo                                             { quality = 1; price = 30; };
	class CUP_acc_ANPEQ_2_desert                                           { quality = 1; price = 30; };
	class CUP_acc_ANPEQ_2_grey                                             { quality = 1; price = 30; };
	class CUP_acc_CZ_M3X                                                   { quality = 1; price = 30; };
	class CUP_acc_LLM                                                      { quality = 1; price = 30; };
	class hlc_acc_Surefiregrip                                             { quality = 1; price = 30; };
	
	//Optics
	class optic_Arco                                                       { quality = 1; price = 60; };
	class optic_Hamr                                                       { quality = 1; price = 60; };
	class optic_Aco                                                        { quality = 1; price = 60; };
	class optic_ACO_grn                                                    { quality = 1; price = 60; };
	class optic_Aco_smg                                                    { quality = 1; price = 60; };
	class optic_ACO_grn_smg                                                { quality = 1; price = 60; };
	class optic_Holosight                                                  { quality = 1; price = 60; };
	class optic_Holosight_smg                                              { quality = 1; price = 60; };
	class optic_SOS                                                        { quality = 1; price = 60; };
	class optic_MRCO                                                       { quality = 1; price = 60; };
	class optic_NVS                                                        { quality = 1; price = 60; };
	class optic_DMS                                                        { quality = 1; price = 60; };
	class optic_Yorris                                                     { quality = 1; price = 60; };
	class optic_MRD                                                        { quality = 1; price = 60; };
	class optic_LRPS                                                       { quality = 1; price = 60; };
	class optic_AMS                                                        { quality = 1; price = 60; };
	class optic_AMS_khk                                                    { quality = 1; price = 60; };
	class optic_AMS_snd                                                    { quality = 1; price = 60; };
	class optic_KHS_blk                                                    { quality = 1; price = 60; };
	class optic_KHS_hex                                                    { quality = 1; price = 60; };
	class optic_KHS_old                                                    { quality = 1; price = 60; };
	class optic_KHS_tan                                                    { quality = 1; price = 60; };
	class optic_Arco_blk_F                                                 { quality = 1; price = 60; };
	class optic_Arco_ghex_F                                                { quality = 1; price = 60; };
	class optic_DMS_ghex_F                                                 { quality = 1; price = 60; };
	class optic_Hamr_khk_F                                                 { quality = 1; price = 60; };
	class optic_ERCO_blk_F                                                 { quality = 1; price = 60; };
	class optic_ERCO_khk_F                                                 { quality = 1; price = 60; };
	class optic_ERCO_snd_F                                                 { quality = 1; price = 60; };
	class optic_SOS_khk_F                                                  { quality = 1; price = 60; };
	class optic_LRPS_tna_F                                                 { quality = 1; price = 60; };
	class optic_LRPS_ghex_F                                                { quality = 1; price = 60; };
	class optic_Holosight_blk_F                                            { quality = 1; price = 60; };
	class optic_Holosight_khk_F                                            { quality = 1; price = 60; };
	class optic_Holosight_smg_blk_F                                        { quality = 1; price = 60; };
	class CUP_optic_PSO_1                                                  { quality = 1; price = 60; };
	class CUP_optic_PSO_3                                                  { quality = 1; price = 60; };
	class CUP_optic_Kobra                                                  { quality = 1; price = 60; };
	class CUP_optic_NSPU                                                   { quality = 1; price = 60; };
	class CUP_optic_PechenegScope                                          { quality = 1; price = 60; };
	class CUP_optic_SB_3_12x50_PMII                                        { quality = 1; price = 60; };
	class CUP_optic_LeupoldMk4                                             { quality = 1; price = 60; };
	class CUP_optic_HoloBlack                                              { quality = 1; price = 60; };
	class CUP_optic_HoloWdl                                                { quality = 1; price = 60; };
	class CUP_optic_HoloDesert                                             { quality = 1; price = 60; };
	class CUP_optic_Eotech533                                              { quality = 1; price = 60; };
	class CUP_optic_Eotech533Grey                                          { quality = 1; price = 60; };
	class CUP_optic_CompM4                                                 { quality = 1; price = 60; };
	class CUP_optic_SUSAT                                                  { quality = 1; price = 60; };
	class CUP_optic_ACOG                                                   { quality = 1; price = 60; };
	class CUP_optic_Leupold_VX3                                            { quality = 1; price = 60; };
	class CUP_optic_AN_PVS_10                                              { quality = 1; price = 60; };
	class CUP_optic_CompM2_Black                                           { quality = 1; price = 60; };
	class CUP_optic_CompM2_Woodland                                        { quality = 1; price = 60; };
	class CUP_optic_CompM2_Woodland2                                       { quality = 1; price = 60; };
	class CUP_optic_CompM2_Desert                                          { quality = 1; price = 60; };
	class CUP_optic_RCO                                                    { quality = 1; price = 60; };
	class CUP_optic_RCO_desert                                             { quality = 1; price = 60; };
	class CUP_optic_LeupoldM3LR                                            { quality = 1; price = 60; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Desert                            { quality = 1; price = 60; };
	class CUP_optic_LeupoldMk4_10x40_LRT_Woodland                          { quality = 1; price = 60; };
	class CUP_optic_ElcanM145                                              { quality = 1; price = 60; };
	class CUP_optic_LeupoldMk4_CQ_T                                        { quality = 1; price = 60; };
	class CUP_optic_ELCAN_SpecterDR                                        { quality = 1; price = 60; };
	class CUP_optic_LeupoldMk4_MRT_tan                                     { quality = 1; price = 60; };
	class CUP_optic_SB_11_4x20_PM                                          { quality = 1; price = 60; };
	class CUP_optic_ZDDot                                                  { quality = 1; price = 60; };
	class CUP_optic_MRad                                                   { quality = 1; price = 60; };
	class CUP_optic_TrijiconRx01_desert                                    { quality = 1; price = 60; };
	class CUP_optic_TrijiconRx01_black                                     { quality = 1; price = 60; };
	class CUP_optic_AN_PVS_4                                               { quality = 1; price = 60; };
	class CUP_optic_Elcan                                                  { quality = 1; price = 60; };
	class CUP_optic_Elcan_reflex                                           { quality = 1; price = 60; };
	class HLC_Optic_PSO1                                                   { quality = 1; price = 60; };
	class HLC_Optic_1p29                                                   { quality = 1; price = 60; };
	class hlc_optic_kobra                                                  { quality = 1; price = 60; };
	class hlc_optic_suit                                                   { quality = 1; price = 60; };
	class hlc_optic_PVS4FAL                                                { quality = 1; price = 60; };
	class HLC_Optic_G36dualoptic35x                                        { quality = 1; price = 60; };
	class HLC_Optic_G36dualoptic35x2d                                      { quality = 1; price = 60; };
	class HLC_Optic_G36Export35x                                           { quality = 1; price = 60; };
	class HLC_Optic_G36Export35x2d                                         { quality = 1; price = 60; };
	class HLC_Optic_G36Dualoptic15x                                        { quality = 1; price = 60; };
	class HLC_Optic_G36Dualoptic15x2d                                      { quality = 1; price = 60; };
	class HLC_Optic_G36Export15x                                           { quality = 1; price = 60; };
	class HLC_Optic_G36Export15x2d                                         { quality = 1; price = 60; };
	class HLC_Optic_ZFSG1                                                  { quality = 1; price = 60; };
	class hlc_optic_accupoint_g3                                           { quality = 1; price = 60; };
	class hlc_optic_PVS4G3                                                 { quality = 1; price = 60; };
	class hlc_optic_artel_m14                                              { quality = 1; price = 60; };
	class hlc_optic_PVS4M14                                                { quality = 1; price = 60; };
	class hlc_optic_LRT_m14                                                { quality = 1; price = 60; };
	class hlc_optic_Kern                                                   { quality = 1; price = 60; };
	class hlc_optic_Kern2d                                                 { quality = 1; price = 60; };
	class CUP_optic_NSPU_RPG                                               { quality = 1; price = 60; };
	
	//AllAmmo
	class CUP_10Rnd_9x19_Compact                                           { quality = 1; price = 30; };
	class CUP_17Rnd_9x19_glock17                                           { quality = 1; price = 30; };
	class hlc_30Rnd_9x19_B_MP5                                             { quality = 1; price = 30; };
	class CUP_7Rnd_45ACP_1911                                              { quality = 1; price = 30; };
	class CUP_15Rnd_9x19_M9                                                { quality = 1; price = 30; };
	class CUP_8Rnd_9x18_Makarov_M                                          { quality = 1; price = 30; };
	class CUP_30Rnd_9x19_UZI                                               { quality = 1; price = 30; };
	class CUP_20Rnd_B_765x17_Ball_M                                        { quality = 1; price = 30; };
	class CUP_6Rnd_45ACP_M                                                 { quality = 1; price = 30; };
	//
	class CUP_8Rnd_B_Beneli_74Slug                                         { quality = 1; price = 30; };
	class CUP_8Rnd_B_Beneli_74Pellets                                      { quality = 1; price = 30; };
	class CUP_10x_303_M                                                    { quality = 1; price = 30; };
	class CUP_30Rnd_9x19_MP5                                               { quality = 1; price = 30; };
	class CUP_8Rnd_B_Saiga12_74Slug_M                                      { quality = 1; price = 30; };
	class CUP_8Rnd_B_Saiga12_74Pellets_M                                   { quality = 1; price = 30; };
	class CUP_64Rnd_9x19_Bizon_M                                           { quality = 1; price = 30; };
	class CUP_5x_22_LR_17_HMR_M                                            { quality = 1; price = 30; };
	class hlc_5rnd_3006_1903                                               { quality = 1; price = 30; };
	//
	class hlc_30Rnd_762x39_b_ak                                            { quality = 1; price = 50; };
	class hlc_30Rnd_762x39_t_ak                                            { quality = 1; price = 50; };
	class hlc_45Rnd_762x39_m_rpk                                           { quality = 1; price = 50; };
	class hlc_45Rnd_762x39_t_rpk                                           { quality = 1; price = 50; };
	class hlc_30rnd_762x39_s_ak                                            { quality = 1; price = 50; };
	class 30Rnd_762x39_Mag_F                                               { quality = 1; price = 50; };
	class 30Rnd_762x39_Mag_Green_F                                         { quality = 1; price = 50; };
	class 30Rnd_762x39_Mag_Tracer_F                                        { quality = 1; price = 50; };
	class 30Rnd_762x39_Mag_Tracer_Green_F                                  { quality = 1; price = 50; };
	//
	class hlc_30Rnd_545x39_B_AK                                            { quality = 1; price = 50; };
	class hlc_30Rnd_545x39_t_ak                                            { quality = 1; price = 50; };
	class hlc_30Rnd_545x39_EP_ak                                           { quality = 1; price = 50; };
	class hlc_45Rnd_545x39_t_rpk                                           { quality = 1; price = 50; };
	class hlc_30Rnd_545x39_S_AK                                            { quality = 1; price = 50; };
	class hlc_60Rnd_545x39_t_rpk                                           { quality = 1; price = 50; };
	class 30Rnd_545x39_Mag_F                                               { quality = 1; price = 50; };
	class 30Rnd_545x39_Mag_Green_F                                         { quality = 1; price = 50; };
	class 30Rnd_545x39_Mag_Tracer_F                                        { quality = 1; price = 50; };
	class 30Rnd_545x39_Mag_Tracer_Green_F                                  { quality = 1; price = 50; };
	//
	class hlc_30rnd_556x45_EPR                                             { quality = 1; price = 50; };
	class hlc_30rnd_556x45_SOST                                            { quality = 1; price = 50; };
	class hlc_30rnd_556x45_SPR                                             { quality = 1; price = 50; };
	class hlc_30rnd_556x45_MDim                                            { quality = 1; price = 50; };
	class hlc_30rnd_556x45_TDim                                            { quality = 1; price = 50; };
	class hlc_50rnd_556x45_EPR                                             { quality = 1; price = 50; };
	//
	class 30Rnd_556x45_Stanag                                              { quality = 1; price = 50; };
	class 30Rnd_556x45_Stanag_Tracer_Red                                   { quality = 1; price = 50; };
	class 30Rnd_556x45_Stanag_Tracer_Green                                 { quality = 1; price = 50; };
	class 30Rnd_556x45_Stanag_Tracer_Yellow                                { quality = 1; price = 50; };
	class 30Rnd_556x45_Stanag_green                                        { quality = 1; price = 50; };
	class 30Rnd_556x45_Stanag_red                                          { quality = 1; price = 50; };
	class 150Rnd_556x45_Drum_Mag_Tracer_F                                  { quality = 1; price = 100; };
	class 150Rnd_556x45_Drum_Mag_F                                         { quality = 1; price = 100; };
	//
	class 29rnd_300BLK_STANAG_T                                            { quality = 1; price = 50; };
	class 29rnd_300BLK_STANAG                                              { quality = 1; price = 50; };
	//
	class hlc_20Rnd_762x51_B_fal                                           { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_mk316_fal                                       { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_barrier_fal                                     { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_T_fal                                           { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_TDim_fal                                        { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_S_fal                                           { quality = 1; price = 70; };
	class hlc_50rnd_762x51_M_FAL                                           { quality = 1; price = 70; };
	//
	class 100Rnd_580x42_Mag_F                                              { quality = 1; price = 100; };
	class 100Rnd_580x42_Mag_Tracer_F                                       { quality = 1; price = 100; };
	class 30Rnd_580x42_Mag_F                                               { quality = 1; price = 70; };
	class 30Rnd_580x42_Mag_Tracer_F                                        { quality = 1; price = 70; };
	class 20Rnd_650x39_Cased_Mag_F                                         { quality = 1; price = 70; };
	//
	class CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag                     { quality = 1; price = 100; };
	class CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag                      { quality = 1; price = 100; };
	class CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag                        { quality = 1; price = 100; };
	class CUP_100Rnd_556x45_BetaCMag                                       { quality = 1; price = 100; };
	//
	class CUP_20Rnd_762x51_CZ805B                                          { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B                        { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B                           { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B                         { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B                         { quality = 1; price = 70; };
	//
	class hlc_200rnd_556x45_M_SAW                                          { quality = 1; price = 100; };
	class hlc_200rnd_556x45_Mdim_SAW                                       { quality = 1; price = 100; };
	class hlc_200rnd_556x45_T_SAW                                          { quality = 1; price = 100; };
	class hlc_200rnd_556x45_B_SAW                                          { quality = 1; price = 100; };
	class 200Rnd_556x45_Box_F                                              { quality = 1; price = 100; };
	class 200Rnd_556x45_Box_Red_F                                          { quality = 1; price = 100; };
	class 200Rnd_556x45_Box_Tracer_F                                       { quality = 1; price = 100; };
	class 200Rnd_556x45_Box_Tracer_Red_F                                   { quality = 1; price = 100; };
	//
	class hlc_20rnd_762x51_b_G3                                            { quality = 1; price = 70; };
	class hlc_20rnd_762x51_Mk316_G3                                        { quality = 1; price = 70; };
	class hlc_20rnd_762x51_barrier_G3                                      { quality = 1; price = 70; };
	class hlc_20rnd_762x51_T_G3                                            { quality = 1; price = 70; };
	class hlc_20rnd_762x51_IRDim_G3                                        { quality = 1; price = 70; };
	class hlc_20rnd_762x51_MDim_G3                                         { quality = 1; price = 70; };
	class hlc_50rnd_762x51_M_G3                                            { quality = 1; price = 70; };
	class hlc_50rnd_762x51_MDIM_G3                                         { quality = 1; price = 70; };
	class hlc_20rnd_762x51_S_G3                                            { quality = 1; price = 70; };
	//
	class 30Rnd_65x39_caseless_mag                                         { quality = 1; price = 70; };
	class 30Rnd_65x39_caseless_mag_Tracer                                  { quality = 1; price = 70; };
	class 100Rnd_65x39_caseless_mag_Tracer                                 { quality = 1; price = 100; };
	class 30Rnd_65x39_caseless_green                                       { quality = 1; price = 70; };
	class 100Rnd_65x39_caseless_mag                                        { quality = 1; price = 100; };
	//
	class hlc_30rnd_556x45_EPR_G36                                         { quality = 1; price = 50; };
	class hlc_30rnd_556x45_SOST_G36                                        { quality = 1; price = 50; };
	class hlc_100rnd_556x45_EPR_G36                                        { quality = 1; price = 50; };
	class hlc_30rnd_556x45_SPR_G36                                         { quality = 1; price = 50; };
	class hlc_30rnd_556x45_Tracers_G36                                     { quality = 1; price = 50; };
	class hlc_30rnd_556x45_MDIM_G36                                        { quality = 1; price = 50; };
	class hlc_30rnd_556x45_TDIM_G36                                        { quality = 1; price = 50; };
	//
	class hlc_30rnd_556x45_b_HK33                                          { quality = 1; price = 50; };
	class hlc_30rnd_556x45_mdim_HK33                                       { quality = 1; price = 50; };
	class hlc_30rnd_556x45_tdim_HK33                                       { quality = 1; price = 50; };
	class hlc_30rnd_556x45_SOST_HK33                                       { quality = 1; price = 50; };
	class hlc_30rnd_556x45_EPR_HK33                                        { quality = 1; price = 50; };
	class hlc_30rnd_556x45_t_HK33                                          { quality = 1; price = 50; };
	//
	class CUP_20Rnd_B_AA12_Pellets                                         { quality = 1; price = 70; };
	class CUP_20Rnd_B_AA12_74Slug                                          { quality = 1; price = 70; };
	class CUP_20Rnd_762x51_L129_M                                          { quality = 1; price = 70; };
	//
	class CUP_20Rnd_762x51_B_M110                                          { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110                          { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_M110                             { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_M110                           { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_M110                           { quality = 1; price = 70; };
	//
	class CUP_20Rnd_762x51_DMR                                             { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR                           { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_DMR                              { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_DMR                            { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_DMR                            { quality = 1; price = 70; };
	//
	class CUP_5Rnd_762x51_M24                                              { quality = 1; price = 70; };
	class 20Rnd_762x51_Mag                                                 { quality = 1; price = 70; };
	//
	class hlc_100Rnd_762x51_M_M60E4                                        { quality = 1; price = 100; };
	class hlc_100Rnd_762x51_B_M60E4                                        { quality = 1; price = 100; };
	class hlc_100Rnd_762x51_Barrier_M60E4                                  { quality = 1; price = 100; };
	class hlc_100Rnd_762x51_T_M60E4                                        { quality = 1; price = 100; };
	class hlc_100Rnd_762x51_Mdim_M60E4                                     { quality = 1; price = 100; };
	class 150Rnd_762x51_Box                                                { quality = 1; price = 100; };
	class 150Rnd_762x51_Box_Tracer                                         { quality = 1; price = 100; };
	//
	class CUP_20Rnd_762x51_B_SCAR                                          { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR                          { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR                             { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR                           { quality = 1; price = 70; };
	class CUP_20Rnd_TE1_White_Tracer_762x51_SCAR                           { quality = 1; price = 70; };
	//
	class 200Rnd_65x39_cased_Box_Tracer                                    { quality = 1; price = 100; };
	class 200Rnd_65x39_cased_Box                                           { quality = 1; price = 100; };
	class CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M                     { quality = 1; price = 100; };
	//
	class CUP_30Rnd_Sa58_M_TracerG                                         { quality = 1; price = 70; };
	class CUP_30Rnd_Sa58_M_TracerR                                         { quality = 1; price = 70; };
	class CUP_30Rnd_Sa58_M_TracerY                                         { quality = 1; price = 70; };
	class CUP_30Rnd_Sa58_M                                                 { quality = 1; price = 70; };
	//
	class hlc_20Rnd_762x51_b_amt                                           { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_mk316_amt                                       { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_bball_amt                                       { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_T_amt                                           { quality = 1; price = 70; };
	//
	class hlc_24Rnd_75x55_B_stgw                                           { quality = 1; price = 70; };
	class hlc_24Rnd_75x55_ap_stgw                                          { quality = 1; price = 70; };
	class hlc_24Rnd_75x55_T_stgw                                           { quality = 1; price = 70; };
	//
	class CUP_10Rnd_762x54_SVD_M                                           { quality = 1; price = 70; };
	//
	class hlc_20Rnd_762x51_B_M14                                           { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_barrier_M14                                     { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_mk316_M14                                       { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_T_M14                                           { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_Mdim_M14                                        { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_Tdim_M14                                        { quality = 1; price = 70; };
	class hlc_20Rnd_762x51_S_M14                                           { quality = 1; price = 70; };
	class hlc_50Rnd_762x51_B_M14                                           { quality = 1; price = 70; };
	//
	class CUP_20Rnd_9x39_SP5_VSS_M                                         { quality = 1; price = 70; };
	class CUP_10Rnd_9x39_SP5_VSS_M                                         { quality = 1; price = 70; };
	//
	class hlc_30Rnd_556x45_B_AUG                                           { quality = 1; price = 50; };
	class hlc_30Rnd_556x45_SOST_AUG                                        { quality = 1; price = 50; };
	class hlc_30Rnd_556x45_SPR_AUG                                         { quality = 1; price = 50; };
	class hlc_30Rnd_556x45_T_AUG                                           { quality = 1; price = 50; };
	class hlc_30Rnd_556x45_MDIM_AUG                                        { quality = 1; price = 50; };
	class hlc_30Rnd_556x45_TDIM_AUG                                        { quality = 1; price = 50; };
	class hlc_40Rnd_556x45_B_AUG                                           { quality = 1; price = 50; };
	class hlc_40Rnd_556x45_SOST_AUG                                        { quality = 1; price = 50; };
	class hlc_40Rnd_556x45_SPR_AUG                                         { quality = 1; price = 50; };
	class hlc_40Rnd_556x45_TDIM_AUG                                        { quality = 1; price = 50; };
	
	//CivilianWeapons
	class CUP_sgun_M1014                                                   { quality = 1; price = 100; };
	class CUP_srifle_LeeEnfield_rail                                       { quality = 1; price = 100; };
	class CUP_smg_MP5A5                                                    { quality = 1; price = 100; };
	class CUP_smg_MP5SD6                                                   { quality = 1; price = 100; };
	class CUP_sgun_Saiga12K                                                { quality = 1; price = 100; };
	class CUP_smg_bizon                                                    { quality = 1; price = 100; };
	class CUP_srifle_CZ550                                                 { quality = 1; price = 100; };
	class hlc_rifle_M1903A1                                                { quality = 1; price = 100; };
	class hlc_rifle_M1903A1_unertl                                         { quality = 1; price = 100; };
	
	//AssaultRifleLow
	class hlc_rifle_aks74u_MTK                                             { quality = 1; price = 200; };
	class hlc_rifle_aks74u                                                 { quality = 1; price = 200; };
	class hlc_rifle_aks74_MTK                                              { quality = 1; price = 200; };
	class hlc_rifle_aks74_GL                                               { quality = 1; price = 200; };
	class hlc_rifle_aks74                                                  { quality = 1; price = 200; };
	class hlc_rifle_ak74m_MTK                                              { quality = 1; price = 200; };
	class hlc_rifle_ak74m_gl                                               { quality = 1; price = 200; };
	class hlc_rifle_ak74m                                                  { quality = 1; price = 200; };
	class hlc_rifle_ak74                                                   { quality = 1; price = 200; };
	class hlc_rifle_ak74_MTK                                               { quality = 1; price = 200; };
	class hlc_rifle_ak12                                                   { quality = 1; price = 200; };
	class hlc_rifle_ak12GL                                                 { quality = 1; price = 200; };
	class hlc_rifle_aku12                                                  { quality = 1; price = 200; };
	class hlc_rifle_RU5562                                                 { quality = 1; price = 200; };
	class hlc_rifle_RU556                                                  { quality = 1; price = 200; };
	class hlc_rifle_bcmjack                                                { quality = 1; price = 200; };
	class arifle_CTAR_blk_F                                                { quality = 1; price = 200; };
	class hlc_rifle_Colt727                                                { quality = 1; price = 200; };
	class hlc_rifle_Colt727_GL                                             { quality = 1; price = 200; };
	class hlc_rifle_M4                                                     { quality = 1; price = 200; };
	class hlc_rifle_m4m203                                                 { quality = 1; price = 200; };
	class hlc_rifle_CQBR                                                   { quality = 1; price = 200; };
	class CUP_arifle_CZ805_A1                                              { quality = 1; price = 200; };
	class CUP_arifle_CZ805_GL                                              { quality = 1; price = 200; };
	class CUP_arifle_CZ805_A2                                              { quality = 1; price = 200; };
	class hlc_rifle_G36C                                                   { quality = 1; price = 200; };
	class hlc_rifle_G36KV                                                  { quality = 1; price = 200; };
	class hlc_rifle_G36V                                                   { quality = 1; price = 200; };
	class hlc_rifle_G36TAC                                                 { quality = 1; price = 200; };
	class hlc_rifle_hk33a2                                                 { quality = 1; price = 200; };
	class hlc_rifle_hk33a2RIS                                              { quality = 1; price = 200; };
	class hlc_rifle_hk53                                                   { quality = 1; price = 200; };
	class hlc_rifle_hk53RAS                                                { quality = 1; price = 200; };
	class CUP_arifle_L85A2                                                 { quality = 1; price = 200; };
	class CUP_arifle_L85A2_G                                               { quality = 1; price = 200; };
	class CUP_arifle_L86A2                                                 { quality = 1; price = 200; };
	class CUP_arifle_M16A2                                                 { quality = 1; price = 200; };
	class CUP_arifle_M16A4_Base                                            { quality = 1; price = 200; };
	class CUP_arifle_M4A1_black                                            { quality = 1; price = 200; };
	class CUP_arifle_M4A1_camo                                             { quality = 1; price = 200; };
	class CUP_arifle_M4A1_desert                                           { quality = 1; price = 200; };
	class CUP_srifle_Mk12SPR                                               { quality = 1; price = 200; };
	class CUP_arifle_Mk16_CQC_FG                                           { quality = 1; price = 200; };
	class CUP_arifle_Mk16_STD_FG                                           { quality = 1; price = 200; };
	class CUP_arifle_Mk16_STD_EGLM                                         { quality = 1; price = 200; };
	class CUP_arifle_Mk16_SV                                               { quality = 1; price = 200; };
	class arifle_Mk20_F                                                    { quality = 1; price = 200; };
	class hlc_rifle_samr2                                                  { quality = 1; price = 200; };
	class arifle_SPAR_01_blk_F                                             { quality = 1; price = 200; };
	class hlc_rifle_auga3_b                                                { quality = 1; price = 200; };
	class hlc_rifle_auga3_bl                                               { quality = 1; price = 200; };
	class hlc_rifle_auga3                                                  { quality = 1; price = 200; };
	class hlc_rifle_auga3_GL_B                                             { quality = 1; price = 200; };
	class arifle_TRG20_F                                                   { quality = 1; price = 200; };
	class hlc_rifle_aek971                                                 { quality = 1; price = 200; };
	class hlc_rifle_aek971_mtk                                             { quality = 1; price = 200; };
	
	//AssaultRifleHigh
	class hlc_rifle_akm_MTK                                                { quality = 1; price = 300; };
	class hlc_rifle_akmgl                                                  { quality = 1; price = 300; };
	class hlc_rifle_akm                                                    { quality = 1; price = 300; };
	class hlc_rifle_ak47                                                   { quality = 1; price = 300; };
	class Exile_Weapon_AKS_Gold                                            { quality = 1; price = 300; };
	// class hlc_30Rnd_762x39_b_ak                                            { quality = 1; price = 300; };
	class hlc_rifle_slr107u_MTK                                            { quality = 1; price = 300; };
	class arifle_AK12_F                                                    { quality = 1; price = 300; };
	class arifle_AK12_GL_F                                                 { quality = 1; price = 300; };
	class hlc_rifle_bcmblackjack                                           { quality = 1; price = 300; };
	class hlc_rifle_Bushmaster300                                          { quality = 1; price = 300; };
	class hlc_rifle_c1A1                                                   { quality = 1; price = 300; };
	class CUP_arifle_CZ805_B                                               { quality = 1; price = 300; };
	class CUP_arifle_CZ805_B_GL                                            { quality = 1; price = 300; };
	class hlc_rifle_falosw                                                 { quality = 1; price = 300; };
	class hlc_rifle_osw_GL                                                 { quality = 1; price = 300; };
	class hlc_rifle_L1A1SLR                                                { quality = 1; price = 300; };
	class hlc_rifle_FAL5000Rail                                            { quality = 1; price = 300; };
	class hlc_rifle_FAL5061Rail                                            { quality = 1; price = 300; };
	class hlc_rifle_LAR                                                    { quality = 1; price = 300; };
	class hlc_rifle_g3sg1ris                                               { quality = 1; price = 300; };
	class hlc_rifle_g3a3                                                   { quality = 1; price = 300; };
	class hlc_rifle_g3a3ris                                                { quality = 1; price = 300; };
	class hlc_rifle_g3ka4                                                  { quality = 1; price = 300; };
	class HLC_Rifle_g3ka4_GL                                               { quality = 1; price = 300; };
	class arifle_Katiba_C_F                                                { quality = 1; price = 300; };
	class hlc_rifle_honeybadger                                            { quality = 1; price = 300; };
	class CUP_sgun_AA12                                                    { quality = 1; price = 300; };
	class CUP_srifle_L129A1                                                { quality = 1; price = 300; };
	class hlc_rifle_SLR                                                    { quality = 1; price = 300; };
	class CUP_arifle_Mk17_CQC_FG                                           { quality = 1; price = 300; };
	class CUP_arifle_Mk20                                                  { quality = 1; price = 300; };
	class CUP_arifle_Mk17_STD_FG                                           { quality = 1; price = 300; };
	class arifle_MX_GL_Black_F                                             { quality = 1; price = 300; };
	class arifle_MX_Black_F                                                { quality = 1; price = 300; };
	class arifle_MXC_Black_F                                               { quality = 1; price = 300; };
	class arifle_MXM_Black_F                                               { quality = 1; price = 300; };
	class CUP_arifle_Sa58RIS2                                              { quality = 1; price = 300; };
	class CUP_arifle_Sa58P                                                 { quality = 1; price = 300; };
	class hlc_rifle_amt                                                    { quality = 1; price = 300; };
	class hlc_rifle_sig5104                                                { quality = 1; price = 300; };
	class hlc_rifle_STGW57                                                 { quality = 1; price = 300; };
	class hlc_rifle_stgw57_commando                                        { quality = 1; price = 300; };
	class arifle_ARX_blk_F                                                 { quality = 1; price = 300; };
	class hlc_rifle_RK62                                                   { quality = 1; price = 300; };
		
	//LMG
	class hlc_rifle_rpk74n                                                 { quality = 1; price = 400; };
	class hlc_rifle_RPK12                                                  { quality = 1; price = 400; };
	class hlc_rifle_rpk                                                    { quality = 1; price = 400; };
	class arifle_CTARS_blk_F                                               { quality = 1; price = 400; };
	class hlc_lmg_minimi_railed                                            { quality = 1; price = 400; };
	class hlc_lmg_minimipara_railed                                        { quality = 1; price = 400; };
	class hlc_rifle_G36MLIC                                                { quality = 1; price = 400; };
	class hlc_rifle_G36CMLIC                                               { quality = 1; price = 400; };
	class LMG_03_F                                                         { quality = 1; price = 400; };
	class hlc_m249_pip1                                                    { quality = 1; price = 400; };
	class hlc_m249_pip3                                                    { quality = 1; price = 400; };
	class hlc_lmg_m60                                                      { quality = 1; price = 400; };
	class hlc_lmg_M60E4                                                    { quality = 1; price = 400; };
	class CUP_arifle_MG36                                                  { quality = 1; price = 400; };
	class CUP_arifle_MG36_camo                                             { quality = 1; price = 400; };
	class hlc_lmg_mk48                                                     { quality = 1; price = 400; };
	class LMG_Mk200_F                                                      { quality = 1; price = 400; };
	class arifle_MX_SW_Black_F                                             { quality = 1; price = 400; };
	class CUP_lmg_Pecheneg                                                 { quality = 1; price = 400; };
	class LMG_Zafir_F                                                      { quality = 1; price = 400; };
	class CUP_arifle_XM8_Railed                                            { quality = 1; price = 400; };
		
	//SniperLow
	class srifle_DMR_07_blk_F                                              { quality = 1; price = 300; };
	class hlc_rifle_psg1A1                                                 { quality = 1; price = 300; };
	class hlc_rifle_PSG1A1_RIS                                             { quality = 1; price = 300; };
	class CUP_srifle_M110                                                  { quality = 1; price = 300; };
	class hlc_rifle_M14_Rail                                               { quality = 1; price = 300; };
	class CUP_srifle_M14_DMR                                               { quality = 1; price = 300; };
	class CUP_srifle_M24_wdl                                               { quality = 1; price = 300; };
	class CUP_srifle_M24_des                                               { quality = 1; price = 300; };
	class CUP_srifle_M40A3                                                 { quality = 1; price = 300; };
	class srifle_DMR_03_tan_F                                              { quality = 1; price = 300; };
	class srifle_DMR_03_woodland_F                                         { quality = 1; price = 300; };
	class srifle_DMR_06_olive_F                                            { quality = 1; price = 300; };
	class srifle_EBR_F                                                     { quality = 1; price = 300; };
	class arifle_SPAR_03_blk_F                                             { quality = 1; price = 300; };
	class CUP_srifle_SVD                                                   { quality = 1; price = 300; };
	class hlc_rifle_m14sopmod                                              { quality = 1; price = 300; };
	class CUP_srifle_VSSVintorez                                           { quality = 1; price = 300; };
	class hlc_rifle_M21_Rail                                               { quality = 1; price = 300; };
	
	//Explosives
	class SatchelCharge_Remote_Mag                                         { quality = 1; price = 400; };
	class DemoCharge_Remote_Mag                                            { quality = 1; price = 200; };
	class CUP_IED_V1_M                                                     { quality = 1; price = 200; };
	class CUP_IED_V2_M                                                     { quality = 1; price = 200; };
	class CUP_IED_V3_M                                                     { quality = 1; price = 200; };
	class CUP_IED_V4_M                                                     { quality = 1; price = 200; };
	class hlc_VOG25_AK                                                     { quality = 1; price = 100; };
	class 3Rnd_HE_Grenade_shell                                            { quality = 1; price = 100; };
	class CUP_1Rnd_HE_M203                                                 { quality = 1; price = 100; };
	class 1Rnd_HE_Grenade_shell                                            { quality = 1; price = 100; };
	class MiniGrenade                                                      { quality = 1; price = 100; };
	class HandGrenade                                                      { quality = 1; price = 100; };
	
	//EpicWeapons
	class hlc_rifle_awcovert_BL                                            { quality = 1; price = 2000; };
	class hlc_rifle_awcovert_FDE                                           { quality = 1; price = 2000; };
	class hlc_rifle_awcovert                                               { quality = 1; price = 2000; };
	class CUP_srifle_AS50                                                  { quality = 1; price = 3000; };
	class srifle_DMR_04_F                                                  { quality = 1; price = 2000; };
	class srifle_GM6_F                                                     { quality = 1; price = 2000; };
	class srifle_DMR_05_blk_F                                              { quality = 1; price = 2000; };
	class srifle_DMR_05_hex_F                                              { quality = 1; price = 2000; };
	class CUP_srifle_M107_Base                                             { quality = 1; price = 3000; };
	class srifle_LRR_F                                                     { quality = 1; price = 2000; };
	class srifle_DMR_02_F                                                  { quality = 1; price = 2000; };
	class srifle_DMR_02_camo_F                                             { quality = 1; price = 2000; };
	class MMG_01_hex_F                                                     { quality = 1; price = 3000; };
	class MMG_02_black_F                                                   { quality = 1; price = 3000; };
	class MMG_02_camo_F                                                    { quality = 1; price = 3000; };
	class CUP_launch_MAAWS                                                 { quality = 1; price = 3000; };
	
	//EpicAmmo
	class hlc_5rnd_300WM_FMJ_AWM                                           { quality = 1; price = 300; };
	class hlc_5rnd_300WM_mk248_AWM                                         { quality = 1; price = 300; };
	class hlc_5rnd_300WM_BTSP_AWM                                          { quality = 1; price = 300; };
	class hlc_5rnd_300WM_AP_AWM                                            { quality = 1; price = 300; };
	class hlc_5rnd_300WM_SBT_AWM                                           { quality = 1; price = 300; };
	class hlc_5rnd_300WM_T_AWM                                             { quality = 1; price = 300; };
	class CUP_5Rnd_127x99_as50_M                                           { quality = 1; price = 300; };
	class 10Rnd_127x54_Mag                                                 { quality = 1; price = 300; };
	class 5Rnd_127x108_Mag                                                 { quality = 1; price = 300; };
	class 5Rnd_127x108_APDS_Mag                                            { quality = 1; price = 300; };
	class Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag                       { quality = 1; price = 300; };
	class 10Rnd_93x64_DMR_05_Mag                                           { quality = 1; price = 300; };
	class Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag                 { quality = 1; price = 300; };
	class CUP_10Rnd_127x99_M107                                            { quality = 1; price = 300; };
	class 7Rnd_408_Mag                                                     { quality = 1; price = 300; };
	class Exile_Magazine_7Rnd_408_Bullet_Cam_Mag                           { quality = 1; price = 300; };
	class 10Rnd_338_Mag                                                    { quality = 1; price = 300; };
	class Exile_Magazine_10Rnd_338_Bullet_Cam_Mag                          { quality = 1; price = 300; };
	class 150Rnd_93x64_Mag                                                 { quality = 1; price = 300; };
	class 130Rnd_338_Mag                                                   { quality = 1; price = 300; };
	class 10Rnd_50BW_Mag_F                                                 { quality = 1; price = 300; };
	class CUP_MAAWS_HEAT_M                                                 { quality = 1; price = 500; };
	class CUP_MAAWS_HEDP_M                                                 { quality = 1; price = 500; };
	
	//MilitaryGear
	class NVGoggles_OPFOR                                                  { quality = 1; price = 200; };
	class NVGoggles                                                        { quality = 1; price = 200; };
	class NVGoggles_INDEP                                                  { quality = 1; price = 200; };
	class Rangefinder                                                      { quality = 1; price = 200; };
	class ItemGPS                                                          { quality = 1; price = 200; };
		
	//MilitaryVests
	class V_TacVestIR_blk                                                  { quality = 1; price = 200; };
	class TAC_V_tacSVD_BK                                                  { quality = 1; price = 200; };
	class TAC_V_tacSVD_OD                                                  { quality = 1; price = 200; };
	class V_TacVest_blk                                                    { quality = 1; price = 200; };
	class V_TacVest_brn                                                    { quality = 1; price = 200; };
	class V_TacVest_camo                                                   { quality = 1; price = 200; };
	class V_TacVest_khk                                                    { quality = 1; price = 200; };
	class V_TacVest_oli                                                    { quality = 1; price = 200; };
	class V_TacVest_blk_POLICE                                             { quality = 1; price = 200; };
	class V_I_G_resistanceLeader_F                                         { quality = 1; price = 200; };
	//
	class V_PlateCarrierGL_blk                                             { quality = 1; price = 300; };
	class V_PlateCarrier2_rgr                                              { quality = 1; price = 300; };
	class CUP_V_B_IOTV_AT                                                  { quality = 1; price = 300; };
	class CUP_V_BAF_Osprey_Mk2_DPM_Empty                                   { quality = 1; price = 300; };
	class TAC_PBDFG2_B_1                                                   { quality = 1; price = 300; };
	class TAC_ArmorVest_Winter                                             { quality = 1; price = 300; };
	class TRYK_V_PlateCarrier_wood_L                                       { quality = 1; price = 300; };
	class TRYK_V_PlateCarrier_blk_L                                        { quality = 1; price = 300; };
	class TRYK_V_PlateCarrier_blk                                          { quality = 1; price = 300; };
	class TRYK_V_PlateCarrier_ACU_L                                        { quality = 1; price = 300; };
	class TRYK_V_PlateCarrier_ACU                                          { quality = 1; price = 300; };
	class TRYK_V_ArmorVest_AOR2_2                                          { quality = 1; price = 300; };
	class TRYK_V_ArmorVest_Delta2                                          { quality = 1; price = 300; };
	class TRYK_V_ArmorVest_green2                                          { quality = 1; price = 300; };
	class TRYK_V_ArmorVest_Ranger2                                         { quality = 1; price = 300; };
	
	//MilitaryClothes
	class U_I_FullGhillie_lsh                                              { quality = 1; price = 100; };
	class TAC_W_ghillie_O1                                                 { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW4                                                 { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW6                                                 { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW                                                  { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW2                                                 { quality = 1; price = 100; };
	class TRYK_U_B_PCUHsW5                                                 { quality = 1; price = 100; };
	class TRYK_U_B_Snowt                                                   { quality = 1; price = 100; };
	class TRYK_U_B_Snow_CombatUniform                                      { quality = 1; price = 100; };
	class CUP_U_B_USMC_FROG4_WMARPAT                                       { quality = 1; price = 100; };
	class TRYK_U_B_WOOD_MARPAT_CombatUniform                               { quality = 1; price = 100; };
	class TRYK_U_B_Wood_T                                                  { quality = 1; price = 100; };
	class TRYK_B_USMC_R                                                    { quality = 1; price = 100; };
	class TRYK_U_B_JSDF_CombatUniform                                      { quality = 1; price = 100; };
	class TRYK_U_B_woodtan_CombatUniform                                   { quality = 1; price = 100; };
	class TRYK_T_camo_wood_marpat                                          { quality = 1; price = 100; };
	class TRYK_hoodie_Wood                                                 { quality = 1; price = 100; };
	class TRYK_U_B_OD_OD_R_CombatUniform                                   { quality = 1; price = 100; };
	class TRYK_U_B_MARPAT_WOOD_CombatUniform                               { quality = 1; price = 100; };
	class TRYK_U_B_BLK                                                     { quality = 1; price = 100; };
	class TRYK_U_B_BLKBLK_CombatUniform                                    { quality = 1; price = 100; };
	class TRYK_U_B_AOR2_OD_CombatUniform                                   { quality = 1; price = 100; };
	class TRYK_U_B_ARO2_CombatUniform                                      { quality = 1; price = 100; };
	class Exile_Uniform_Woodland                                           { quality = 1; price = 100; };
	
	//MilitaryBackpacks
	class B_Bergen_dgtl_F                                                  { quality = 1; price = 150; };
	class B_Bergen_hex_F                                                   { quality = 1; price = 150; };
	class B_Bergen_mcamo_F                                                 { quality = 1; price = 150; };
	class B_Bergen_tna_F                                                   { quality = 1; price = 150; };
	class B_Carryall_cbr                                                   { quality = 1; price = 150; };
	class B_Carryall_ghex_F                                                { quality = 1; price = 150; };
	class B_Carryall_ocamo                                                 { quality = 1; price = 150; };
	class B_Carryall_khk                                                   { quality = 1; price = 150; };
	class B_Carryall_mcamo                                                 { quality = 1; price = 150; };
	class G_Carryall_Ammo                                                  { quality = 1; price = 150; };
	class B_Carryall_oucamo                                                { quality = 1; price = 150; };
	class TRYK_B_Coyotebackpack_BLK                                        { quality = 1; price = 150; };
	class TRYK_B_Coyotebackpack                                            { quality = 1; price = 150; };
	class TRYK_B_Coyotebackpack_OD                                         { quality = 1; price = 150; };
	class TRYK_B_Coyotebackpack_WH                                         { quality = 1; price = 150; };
	class TRYK_B_Carryall_JSDF                                             { quality = 1; price = 150; };
	class TRYK_B_Carryall_blk                                              { quality = 1; price = 150; };
	class TRYK_B_Carryall_wh                                               { quality = 1; price = 150; };
	class TRYK_B_Carryall_wood                                             { quality = 1; price = 150; };
	//
	class B_Kitbag_cbr                                                     { quality = 1; price = 100; };
	class B_Kitbag_rgr                                                     { quality = 1; price = 100; };
	class B_Kitbag_mcamo                                                   { quality = 1; price = 100; };
	class CUP_B_RUS_Backpack                                               { quality = 1; price = 100; };
	class B_TacticalPack_blk                                               { quality = 1; price = 100; };
	class B_TacticalPack_rgr                                               { quality = 1; price = 100; };
	class B_TacticalPack_mcamo                                             { quality = 1; price = 100; };
	
	//MilitaryHeadgear
	class TRYK_H_WH                                                        { quality = 1; price = 60; };
	class TRYK_H_Helmet_Snow                                               { quality = 1; price = 60; };
	class TRYK_H_Helmet_Winter_2                                           { quality = 1; price = 60; };
	class TRYK_H_Helmet_Winter                                             { quality = 1; price = 60; };
	class CUP_H_CDF_H_PASGT_FST                                            { quality = 1; price = 60; };
	class CUP_H_CDF_H_PASGT_UN                                             { quality = 1; price = 60; };
	class H_HelmetB                                                        { quality = 1; price = 60; };
	class H_HelmetB_black                                                  { quality = 1; price = 60; };
	class H_HelmetB_grass                                                  { quality = 1; price = 60; };
	class CUP_H_USArmy_Helmet_ECH1_Black                                   { quality = 1; price = 60; };
	class CUP_H_USArmy_Helmet_ECH1_Green                                   { quality = 1; price = 60; };
	class H_HelmetSpecB                                                    { quality = 1; price = 60; };
	class CUP_H_USMC_HelmetWDL                                             { quality = 1; price = 60; };
	class CUP_H_RACS_Helmet_olive                                          { quality = 1; price = 60; };
	class CUP_H_RACS_Helmet_wdl                                            { quality = 1; price = 60; };
	class CUP_H_USArmy_HelmetMICH_earpro                                   { quality = 1; price = 60; };
	class TRYK_H_Helmet_WOOD                                               { quality = 1; price = 60; };
	class H_HelmetB_TI_tna_F                                               { quality = 1; price = 60; };
	class CUP_H_USMC_MICH2000_ESS_COMM_WDL                                 { quality = 1; price = 60; };
	
	////CivilianClothes
	//class TRYK_shirts_DENIM_BL                                             { quality = 1; price = 200; };
	//class TRYK_shirts_DENIM_BWH                                            { quality = 1; price = 200; };
	//class TRYK_shirts_DENIM_od                                             { quality = 1; price = 200; };
	//class TRYK_shirts_DENIM_R                                              { quality = 1; price = 200; };
	//class TRYK_shirts_DENIM_WH                                             { quality = 1; price = 200; };
	//class TRYK_shirts_DENIM_ylb                                            { quality = 1; price = 200; };
	//class TRYK_U_denim_jersey_blu                                          { quality = 1; price = 200; };
	//class TRYK_U_B_Denim_T_BK                                              { quality = 1; price = 200; };
	//class TRYK_U_B_RED_T_BR                                                { quality = 1; price = 200; };
	//class U_C_Poor_1                                                       { quality = 1; price = 200; };
	
	//CivilianBackpacks
	class B_AssaultPack_blk                                                { quality = 1; price = 50; };
	class B_AssaultPack_cbr                                                { quality = 1; price = 50; };
	class B_AssaultPack_khk                                                { quality = 1; price = 50; };
	class CUP_B_CivPack_WDL                                                { quality = 1; price = 50; };
	class CUP_B_ACRScout_m95                                               { quality = 1; price = 50; };
	//class B_Kitbag_cbr                                                     { quality = 1; price = 50; };
	//class B_Kitbag_rgr                                                     { quality = 1; price = 50; };
	class CUP_B_RPGPack_Khaki                                              { quality = 1; price = 50; };
	class CUP_B_AlicePack_Khaki                                            { quality = 1; price = 50; };
	//class B_TacticalPack_blk                                               { quality = 1; price = 50; };
	//class B_TacticalPack_rgr                                               { quality = 1; price = 50; };
	class TRYK_B_tube_blk                                                  { quality = 1; price = 50; };
	class CUP_B_AssaultPack_Coyote                                         { quality = 1; price = 50; };
	
	//CivilianVests
	class V_HarnessOGL_brn                                                 { quality = 1; price = 50; };
	class V_HarnessO_brn                                                   { quality = 1; price = 50; };
	class V_Rangemaster_belt                                               { quality = 1; price = 50; };
	class V_BandollierB_blk                                                { quality = 1; price = 50; };
	class V_BandollierB_oli                                                { quality = 1; price = 50; };
	class V_BandollierB_rgr                                                { quality = 1; price = 50; };
	class TRYK_V_Bulletproof_BL                                            { quality = 1; price = 50; };
	class V_TacChestrig_grn_F                                              { quality = 1; price = 50; };
	class TAC_LBT_HL3_B                                                    { quality = 1; price = 50; };
	class TAC_LBT_HL3_OD                                                   { quality = 1; price = 50; };
	class CUP_V_O_Ins_Carrier_Rig_Com                                      { quality = 1; price = 50; };
	class V_Chestrig_rgr                                                   { quality = 1; price = 50; };
	class V_Chestrig_blk                                                   { quality = 1; price = 50; };
	class V_Press_F                                                        { quality = 1; price = 50; };
	
	//CivilianGear
	class ItemWatch                                                        { quality = 1; price = 50; };
	class ItemRadio                                                        { quality = 1; price = 50; };
	// class ItemGPS                                                          { quality = 1; price = 50; };
	class Binocular                                                        { quality = 1; price = 50; };
	//class Exile_Item_Heatpack                                              { quality = 1; price = 50; };
	class ItemMap                                                          { quality = 1; price = 50; };
	class ItemCompass                                                      { quality = 1; price = 50; };
	
	////BarnItems
	//class ItemWatch                                                        { quality = 1; price = 200; };
	//class ItemRadio                                                        { quality = 1; price = 200; };
	//class Binocular                                                        { quality = 1; price = 200; };
	//class Exile_Item_Heatpack                                              { quality = 1; price = 200; };
	//class ItemMap                                                          { quality = 1; price = 200; };
	//class ItemCompass                                                      { quality = 1; price = 200; };
	//class Exile_Melee_Axe                                                  { quality = 1; price = 200; };
	//class Exile_Item_Rope                                                  { quality = 1; price = 200; };
	//class Exile_Item_CamoTentKit                                           { quality = 1; price = 200; };
	//class Exile_Item_Bandage                                               { quality = 1; price = 200; };
	//class Exile_Item_ZipTie                                                { quality = 1; price = 200; };
	//class Exile_Item_FuelCanisterFull                                      { quality = 1; price = 200; };
	//class Exile_Item_FuelCanisterEmpty                                     { quality = 1; price = 200; };
	//class Exile_Item_OilCanister                                           { quality = 1; price = 200; };
	//class Exile_Item_Carwheel                                              { quality = 1; price = 200; };
	//class Exile_Item_ExtensionCord                                         { quality = 1; price = 200; };
	//class Exile_Item_WaterCanisterEmpty                                    { quality = 1; price = 200; };
	//class Exile_Item_Hammer                                                { quality = 1; price = 200; };
	//class Exile_Item_Wrench                                                { quality = 1; price = 200; };
	//class Exile_Item_DuctTape                                              { quality = 1; price = 200; };
	
	//MedicalItems
	class Exile_Item_InstaDoc                                              { quality = 1; price = 400; };
	class Exile_Item_Bandage                                               { quality = 1; price = 20; };
	class Exile_Item_Vishpirin                                             { quality = 1; price = 100; };
	class Exile_Item_Heatpack                                              { quality = 1; price = 20; };
	
	//IndustrialItems
	class Exile_Item_Knife                                                 { quality = 1; price = 200; };
	class Exile_Item_ZipTie                                                { quality = 1; price = 200; };
	class Exile_Item_BaseCameraKit                                         { quality = 1; price = 200; };
	class Exile_Item_Laptop                                                { quality = 1; price = 200; };
	class Exile_Item_CarWheel                                              { quality = 1; price = 200; };
	class Exile_Item_Cement                                                { quality = 1; price = 200; };
	class Exile_Item_DuctTape                                              { quality = 1; price = 200; };
	class Exile_Item_OilCanister                                           { quality = 1; price = 200; };
	class Exile_Item_ExtensionCord                                         { quality = 1; price = 200; };
	class Exile_Item_FireExtinguisher                                      { quality = 1; price = 200; };
	class Exile_Item_FloodLightKit                                         { quality = 1; price = 200; };
	class Exile_Item_PortableGeneratorKit                                  { quality = 1; price = 200; };
	class Exile_Item_Rope                                                  { quality = 1; price = 200; };
	class Exile_Item_Sand                                                  { quality = 1; price = 200; };
	class Exile_Item_FuelCanisterEmpty                                     { quality = 1; price = 200; };
	class Exile_Item_FuelCanisterFull                                      { quality = 1; price = 200; };
	class Exile_Item_MobilePhone                                           { quality = 1; price = 200; };
	class Exile_Item_JunkMetal                                             { quality = 1; price = 200; };
	class Exile_Item_LightBulb                                             { quality = 1; price = 200; };
	class Exile_Item_MetalBoard                                            { quality = 1; price = 200; };
	class Exile_Item_MetalHedgehogKit                                      { quality = 1; price = 200; };
	class Exile_Item_MetalPole                                             { quality = 1; price = 200; };
	class Exile_Item_MetalScrews                                           { quality = 1; price = 200; };
	class Exile_Item_MetalWire                                             { quality = 1; price = 200; };
	class Exile_Item_ThermalScannerPro                                     { quality = 1; price = 200; };
	class Exile_Item_CamoTentKit                                           { quality = 1; price = 200; };
	class Land_TentDome_F_Kit                                              { quality = 1; price = 200; };
	
	//Tools
	class Exile_Item_Foolbox                                               { quality = 1; price = 400; };
	class Exile_Item_Grinder                                               { quality = 1; price = 300; };
	class Exile_Item_Hammer                                                { quality = 1; price = 200; };
	class Exile_Item_Handsaw                                               { quality = 1; price = 200; };
	class Exile_Item_Pliers                                                { quality = 1; price = 200; };
	class Exile_Item_Shovel                                                { quality = 1; price = 300; };
	class Exile_Item_Wrench                                                { quality = 1; price = 200; };
	class Exile_Melee_Axe                                                  { quality = 1; price = 300; };
	class Exile_Melee_SledgeHammer                                         { quality = 1; price = 300; };
	class Exile_Item_Screwdriver                                           { quality = 1; price = 200; };
	
	////Vehicle
	//class Exile_Item_CarWheel                                              { quality = 1; price = 200; };
	//class Exile_Item_Foolbox                                               { quality = 1; price = 200; };
	//class Exile_Item_Wrench                                                { quality = 1; price = 200; };
	//class Exile_Item_JunkMetal                                             { quality = 1; price = 200; };
	//class Exile_Item_FuelCanisterEmpty                                     { quality = 1; price = 200; };
	//class Exile_Item_OilCanister                                           { quality = 1; price = 200; };
	//class Exile_Item_DuctTape                                              { quality = 1; price = 200; };
	
	//Trash
	class Exile_Item_Can_Empty                                             { quality = 1; price = 10; };
	class Exile_Item_ToiletPaper                                           { quality = 1; price = 10; };
	class Exile_Item_PlasticBottleEmpty                                    { quality = 1; price = 10; };
	class Exile_Item_Magazine01                                            { quality = 1; price = 10; };
	class Exile_Item_Magazine02                                            { quality = 1; price = 10; };
	class Exile_Item_Magazine03                                            { quality = 1; price = 10; };
	class Exile_Item_Magazine04                                            { quality = 1; price = 10; };
	
	////Unused
	//class Exile_Item_CordlessScrewdriver                                   { quality = 1; price = 200; };
	//class Exile_Item_FireExtinguisher                                      { quality = 1; price = 200; };
	//class Exile_Item_OilCanister                                           { quality = 1; price = 200; };
	//class Exile_Item_Hammer                                                { quality = 1; price = 200; };
	//class Exile_Item_Carwheel                                              { quality = 1; price = 200; };
	//class Exile_Item_SleepingMat                                           { quality = 1; price = 200; };
	//class Exile_Item_Defibrillator                                         { quality = 1; price = 200; };
	//class Exile_Item_Wrench                                                { quality = 1; price = 200; };
	//class Exile_Item_Rope                                                  { quality = 1; price = 200; };
	
	//Spawn Uniforms
	class TRYK_U_B_Denim_T_WH                                              { quality = 1; price = 20; };
	class TRYK_U_B_RED_T_BR                                                { quality = 1; price = 20; };
	class TRYK_U_B_Denim_T_BK                                              { quality = 1; price = 20; };
	class TRYK_SUITS_BLK_F                                                 { quality = 1; price = 20; };
	class TRYK_shirts_DENIM_BK                                             { quality = 1; price = 20; };
	class TRYK_shirts_DENIM_BL                                             { quality = 1; price = 20; };
	class TRYK_shirts_DENIM_BWH                                            { quality = 1; price = 20; };
	class TRYK_shirts_DENIM_od                                             { quality = 1; price = 20; };
	class TRYK_shirts_DENIM_R                                              { quality = 1; price = 20; };
	class TRYK_shirts_DENIM_RED2                                           { quality = 1; price = 20; };
	class TRYK_shirts_DENIM_WH                                             { quality = 1; price = 20; };
	class TRYK_shirts_DENIM_WHB                                            { quality = 1; price = 20; };
	class TRYK_shirts_DENIM_ylb                                            { quality = 1; price = 20; };
	class TRYK_shirts_TAN_PAD_YEL                                          { quality = 1; price = 20; };
	class TRYK_shirts_OD_PAD_YEL                                           { quality = 1; price = 20; };
	class TRYK_shirts_BLK_PAD_YEL                                          { quality = 1; price = 20; };
	class TRYK_shirts_PAD_YEL                                              { quality = 1; price = 20; };
	class TRYK_shirts_TAN_PAD_RED2                                         { quality = 1; price = 20; };
	class TRYK_shirts_OD_PAD_RED2                                          { quality = 1; price = 20; };
	class TRYK_shirts_BLK_PAD_RED2                                         { quality = 1; price = 20; };
	class TRYK_shirts_PAD_RED2                                             { quality = 1; price = 20; };
	class TRYK_shirts_TAN_PAD                                              { quality = 1; price = 20; };
	class TRYK_shirts_OD_PAD                                               { quality = 1; price = 20; };
	class TRYK_shirts_BLK_PAD                                              { quality = 1; price = 20; };
	class TRYK_shirts_PAD                                                  { quality = 1; price = 20; };
	class TRYK_shirts_TAN_PAD_BLU3                                         { quality = 1; price = 20; };
	class TRYK_shirts_OD_PAD_BLU3                                          { quality = 1; price = 20; };
	class TRYK_shirts_BLK_PAD_BLU3                                         { quality = 1; price = 20; };
	class TRYK_shirts_PAD_BLU3                                             { quality = 1; price = 20; };
	class TRYK_shirts_TAN_PAD_BLW                                          { quality = 1; price = 20; };
	class TRYK_shirts_OD_PAD_BLW                                           { quality = 1; price = 20; };
	class TRYK_shirts_BLK_PAD_BLW                                          { quality = 1; price = 20; };
	class TRYK_shirts_PAD_BLW                                              { quality = 1; price = 20; };
	class TRYK_shirts_TAN_PAD_BL                                           { quality = 1; price = 20; };
	class TRYK_shirts_OD_PAD_BL                                            { quality = 1; price = 20; };
	class TRYK_shirts_BLK_PAD_BL                                           { quality = 1; price = 20; };
	class TRYK_shirts_PAD_BL                                               { quality = 1; price = 20; };
	
	//Trader Buyable Vests (that are not already listed above)
	class V_Chestrig_khk                                                   { quality = 1; price = 50; };
	class V_Chestrig_oli                                                   { quality = 1; price = 50; };
	class V_TacChestrig_cbr_F                                              { quality = 1; price = 50; };
	class V_TacChestrig_oli_F                                              { quality = 1; price = 50; };
	
	//Trader Buyable Backpacks (that are not already listed above)
	class B_AssaultPack_dgtl                                               { quality = 1; price = 50; };
	class B_AssaultPack_rgr                                                { quality = 1; price = 50; };
	class B_AssaultPack_ocamo                                              { quality = 1; price = 50; };
	class B_AssaultPack_mcamo                                              { quality = 1; price = 50; };
	class B_AssaultPack_sgg                                                { quality = 1; price = 50; };
	class B_FieldPack_blk                                                  { quality = 1; price = 50; };
	class B_FieldPack_cbr                                                  { quality = 1; price = 50; };
	class B_FieldPack_ocamo                                                { quality = 1; price = 50; };
	class B_FieldPack_khk                                                  { quality = 1; price = 50; };
	class B_FieldPack_oli                                                  { quality = 1; price = 50; };
	class B_FieldPack_oucamo                                               { quality = 1; price = 50; };
	class TRYK_B_tube_cyt                                                  { quality = 1; price = 50; };
	class TRYK_B_tube_od                                                   { quality = 1; price = 50; };
	class CUP_B_AssaultPack_ACU                                            { quality = 1; price = 50; };
	class CUP_B_AssaultPack_Black                                          { quality = 1; price = 50; };
	
	///////////////////////////////////////////////////////////////////////////////
	// Flags
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Item_FlagStolen1						{ quality = 5; price = 5000;  sellPrice = 5000;  };   
	class Exile_Item_FlagStolen2						{ quality = 5; price = 7000;  sellPrice = 7000;  };     
	class Exile_Item_FlagStolen3						{ quality = 5; price = 10000; sellPrice = 10000; };   
	class Exile_Item_FlagStolen4						{ quality = 5; price = 14000; sellPrice = 14000; };   
	class Exile_Item_FlagStolen5						{ quality = 5; price = 19000; sellPrice = 19000; };   
	class Exile_Item_FlagStolen6						{ quality = 5; price = 25000; sellPrice = 25000; };   
	class Exile_Item_FlagStolen7						{ quality = 5; price = 32000; sellPrice = 32000; };   
	class Exile_Item_FlagStolen8						{ quality = 5; price = 40000; sellPrice = 40000; };   
	class Exile_Item_FlagStolen9						{ quality = 5; price = 49000; sellPrice = 49000; };   
	class Exile_Item_FlagStolen10						{ quality = 5; price = 59000; sellPrice = 59000; };   
};



class CfgExileCustomCode 
{
	/*
		You can overwrite every single file of our code without touching it.
		To do that, add the function name you want to overwrite plus the 
		path to your custom file here. If you wonder how this works, have a
		look at our bootstrap/fn_preInit.sqf function.

		Simply add the following scheme here:

		<Function Name of Exile> = "<New File Name>";

		Example:

		ExileClient_util_fusRoDah = "myaddon\myfunction.sqf";
	*/
	//Snow updates
	ExileClient_system_snow_thread_update = "custom\overrides\ExileClient_system_snow_thread_update.sqf";
	//Temperature
	ExileClient_object_player_stats_updateTemperature = "custom\overrides\ExileClient_object_player_stats_updateTemperature.sqf";
	//Random Spawn
	ExileClient_gui_selectSpawnLocation_show = "custom\overrides\ExileClient_gui_selectSpawnLocation_show.sqf";
	//Party ESP GPS
	ExileClient_gui_hud_renderPartyESP = "custom\overrides\ExileClient_gui_hud_renderPartyESP.sqf";
	
	//Random Spawn Outfit
	// ExileServer_object_player_createBambi = "custom\loadout\ExileServer_object_player_createBambi.sqf";
	ExileServer_object_player_network_createPlayerRequest = "custom\overrides\ExileServer_object_player_network_createPlayerRequest.sqf";
	
	// loot spawn fixe
	ExileClient_system_lootManager_thread_spawn = "custom\overrides\ExileClient_system_lootManager_thread_spawn.sqf";
	
	//Waste Dump Cargo Only
	ExileClient_gui_wasteDumpDialog_show = "custom\overrides\ExileClient_gui_wasteDumpDialog_show.sqf";
	
	// Fix Vehicle Trader Spawns
	ExileServer_system_trading_network_purchaseVehicleRequest = "Fixes\TraderFixes\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	
	// Custom vehicle spawns
	ExileServer_world_spawnVehicles = "custom\overrides\ExileServer_Custom_Vehicle_Spawning.sqf";
	
	// remove pin code bullshit
	ExileServer_object_vehicle_createPersistentVehicle = "custom\overrides\ExileServer_object_vehicle_createPersistentVehicle.sqf";
	
	// remove blinking hunger/thirst icons
	ExileClient_object_player_stats_update = "custom\overrides\ExileClient_object_player_stats_update.sqf";
	
	// change hud icon locations
	ExileClient_gui_hud_toggleAutoRunIcon = "custom\overrides\ExileClient_gui_hud_toggleAutoRunIcon.sqf";
	ExileClient_gui_hud_toggleBambiIcon = "custom\overrides\ExileClient_gui_hud_toggleBambiIcon.sqf";
	ExileClient_gui_hud_toggleEarplugsIcon = "custom\overrides\ExileClient_gui_hud_toggleEarplugsIcon.sqf";
	ExileClient_gui_hud_toggleCombatIcon = "custom\overrides\ExileClient_gui_hud_toggleCombatIcon.sqf";
	
	// remove custom HUD when Exile hud is removed
	ExileClient_gui_hud_toggle = "custom\overrides\ExileClient_gui_hud_toggle.sqf";
	
	// prevent unwanted ammo from spawning
	ExileServer_system_lootManager_spawnLootInBuilding = "custom\overrides\ExileServer_system_lootManager_spawnLootInBuilding.sqf";
	
	// only allow events to spawn once per restart
	ExileServer_system_event_thread_spawn = "custom\overrides\ExileServer_system_event_thread_spawn.sqf";
		
	// Arma 1.66 Fixes
	ExileClient_gui_postProcessing_initialize = "Fixes\A166Fixes\ExileClient_gui_postProcessing_initialize.sqf";
	ExileClient_gui_postProcessing_reset = "Fixes\A166Fixes\ExileClient_gui_postProcessing_reset.sqf";
	ExileClient_gui_postProcessing_toggleDialogBackgroundBlur = "Fixes\A166Fixes\ExileClient_gui_postProcessing_toggleDialogBackgroundBlur.sqf";
	ExileClient_object_player_death_startBleedingOut = "Fixes\A166Fixes\ExileClient_object_player_death_startBleedingOut.sqf";
	ExileClient_object_player_event_onKilled = "Fixes\A166Fixes\ExileClient_object_player_event_onKilled.sqf";
	ExileServer_system_network_event_onPlayerDisconnected = "Fixes\A166Fixes\ExileServer_system_network_event_onPlayerDisconnected.sqf";
	ExileServer_system_network_setupEventHandlers = "Fixes\A166Fixes\ExileServer_system_network_setupEventHandlers.sqf";
	
};
class CfgExileEnvironment
{
	class Chernarus_winter
	{
		class FireFlies
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			// At this hour fire flies begin to spawn
			startHour = 18;

			// At this hour fire flies stop spawning
			endHour = 6;
		};

		class Anomalies
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			// At this hour anomalies begin to spawn
			startHour = 19;

			// At this hour anomalies stop spawning
			endHour = 6;
		};

		class Breathing
		{
			// 1 = enabled, 0 = disabled
			enable = 1;
		};

		class Snow
		{
			// 1 = enabled, 0 = disabled
			enable = 1;

			// https://community.bistudio.com/wiki/surfaceType
			surfaces[] = {};
		};

		class Radiation 
		{
			// 1 = enabled, 0 = disabled
			enable = 0;

			/*
				Defines contaminated zones in a specific map. 
				You can define multiple zones per map. The format
				of the zones is:

				[Position ASL(!), Full Radiation Radius, Maximum Radius]

				The radius works as follows:

	            |-------------------------------------------------------|
	                                Maximum Radius
				
				|------------------------|
				  Full Radiation Radius   

				Within the full radiation radius, radiation factor is
				always at a maximum. Outside of this, it lowers down
				to no radiation smoothly.

				Radiation:

	            |------------------------|------------------------------|
	            1        1      1        1     0.75    0.5     0.25    0
			*/
			contaminatedZones[] = {};
		};

		class Temperature
		{
			// Temperature in °C for the time of day, per hour
			// Add the first index to the last index, so it is 25 indizes!
			daytimeTemperature[] = {10.93,10.89,10.42,20.40,30.68,20.10,30.48,20.63,30.40,30.66,40.32,40.80,40.80,50.32,40.66,40.40,30.63,30.48,30.10,20.68,20.40,20.42,10.89,10.93,10.93};
		
			// Temperature change in °C when it is 100% overcast
			overcast = -5;

			// Temperature change in °C when it is 100% raining
			rain = -2;

			// Temperature change in °C when it is 100% windy
			wind = -3;

			// Temperature change per 100m altitude in °C
			altitude = -5;

			// Difference from the daytime temperature to the water temperature
			water = -15;
		};
	};
};
class CfgExileHUD
{
	class ShortItemNames
	{
		SmokeShell[] 						= {"WHITE", 	"SMOKE"};
		1Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};
		3Rnd_Smoke_Grenade_shell[] 			= {"WHITE", 	"SMOKE"};

		SmokeShellBlue[] 					= {"BLUE", 		"SMOKE"};
		1Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};
		3Rnd_SmokeBlue_Grenade_shell[] 		= {"BLUE", 		"SMOKE"};

		SmokeShellGreen[] 					= {"GREEN", 	"SMOKE"};
		1Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};
		3Rnd_SmokeGreen_Grenade_shell[] 	= {"GREEN", 	"SMOKE"};

		SmokeShellOrange[] 					= {"ORANGE", 	"SMOKE"};
		1Rnd_SmokeOrange_Grenade_shell[]	= {"ORANGE", 	"SMOKE"};
		3Rnd_SmokeOrange_Grenade_shell[] 	= {"ORANGE", 	"SMOKE"};

		SmokeShellPurple[] 					= {"PURPLE", 	"SMOKE"};
		1Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};
		3Rnd_SmokePurple_Grenade_shell[] 	= {"PURPLE", 	"SMOKE"};

		SmokeShellRed[] 					= {"RED", 		"SMOKE"};
		1Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
		3Rnd_SmokeRed_Grenade_shell[] 		= {"RED", 		"SMOKE"};
				
		SmokeShellYellow[] 					= {"YELLOW", 	"SMOKE"};
		1Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
		3Rnd_SmokeYellow_Grenade_shell[] 	= {"YELLOW", 	"SMOKE"};
				
		UGL_FlareCIR_F[] 					= {"IR", 		"FLARE"};
		3Rnd_UGL_FlareCIR_F[] 				= {"IR", 		"FLARE"};

		UGL_FlareGreen_F[] 					= {"GREEN", 	"FLARE"};
		3Rnd_UGL_FlareGreen_F[] 			= {"GREEN", 	"FLARE"};

		UGL_FlareRed_F[] 					= {"RED", 		"FLARE"};
		3Rnd_UGL_FlareRed_F[] 				= {"RED", 		"FLARE"};

		UGL_FlareWhite_F[] 					= {"WHITE", 	"FLARE"};
		3Rnd_UGL_FlareWhite_F[] 			= {"WHITE", 	"FLARE"};

		UGL_FlareYellow_F[] 				= {"YELLOW", 	"FLARE"};
		3Rnd_UGL_FlareYellow_F[] 			= {"YELLOW", 	"FLARE"};

		Chemlight_blue[] 					= {"BLUE", 		"LIGHT"};
		Chemlight_green[] 					= {"GREEN", 	"LIGHT"};
		Chemlight_red[] 					= {"RED", 		"LIGHT"};
		Chemlight_yellow[] 					= {"YELLOW", 	"LIGHT"};

		1Rnd_HE_Grenade_shell[] 			= {"40MM"};
		3Rnd_HE_Grenade_shell[] 			= {"40MM"};

		O_IR_Grenade[] 						= {"IR"};
		I_IR_Grenade[] 						= {"IR"};
		B_IR_Grenade[] 						= {"IR"};

		HandGrenade[] 						= {"RGO"};
		MiniGrenade[] 						= {"RGN"};

		Exile_Item_ZipTie[]					= {"ZIP", "TIE"};
	};
};
class CfgExileLootSettings
{
	/**
	 * Lifetime of loot in minutes. Synchronize this with
	 * the garbage collector settings of your server
	 * CfgSettings!
	 */
	lifeTime = 8;

	/**
	 * Interval in seconds when the client searches for
	 * new buildings to spawn loot in
	 */
	spawnInterval = 30;

	/**
	 * This is a percentage value to determine how many loot
	 * positions should contain loot when the system spawns loot.
	 *
	 * If a building has 20 positions defined, Exile will 
	 * spawn loot in 10 random positions of them.
	 * 
	 * This means smaller buildings spawn less loot and larger
	 * ones spawn more loot.
	 *
	 * You can also cap it at a maximum value. See below.
	 */
	maximumPositionCoverage = 40;

 	/**
 	 * Limit the number of loot positions per building. If the 
 	 * above percentage value exceeds this value, it will be capped.
 	 *
 	 * Example: Coverage is 50%. Building has 60 loot positions defined.
 	 * This results in 30 loot positions and that is too much. So we
 	 * cap this at 10
 	 */
	maximumNumberOfLootSpotsPerBuilding = 10;

	/**
	 * Exile spawns a random number of items per loot spot. This 
	 * is the upper cap for that. So 3 means it could spawn 1, 2 
	 * or 3.
	 */
	maximumNumberOfItemsPerLootSpot = 1;

	/**
	 * Radius in meter to spawn loot AROUND each player.
	 * Do NOT touch this value if you dont know what you do.
	 * The higher the number, the higher the drop rates, the
	 * easier your server will lag.
	 *
	 * 50m  = Minimum
	 * 200m = Maximum
	 */
	spawnRadius = 100;

	/**
	 * Defines the radius around trader cities where the system should
	 * not spawn loot. Set this to 0 if you want to have loot spawning
	 * in trader citites, ugh.
	 */
	minimumDistanceToTraderZones = 500;

	/**
	 * Defines the radius around territories where no loot spawns.
	 * This does not regard the actual size of a territory. So do not
	 * set this to a lower value than the maximum radius of a territory,
	 * which is 150m by default.
	 */
	minimumDistanceToTerritories = 100;
};
class CfgExileMobileXM8
{
	/**
	 * Add the 4 digit permission code here, so players can authorize
	 * your server to send them messages to their Mobile XM8 app.
	 */
	code = "";
};
class CfgExileMusic
{
	Ambient[] = {"ExileTrack03","ExileTrack04"};
	Combat[] = {"ExileTrack06","ExileTrack07"};
	Intro[] = {"ExileTrack02","ExileTrack03"};
};
class CfgExileParty 
{
	showESP = 1;
	allow3DMarkers = 1;
};
class CfgExileRussianRoulette
{
	/*
		Minimum amount to join a session of 
		russian roulette
	*/
	buyInAmount = 100;
};
class CfgFlags 
{
	class USA
	{
		name = "USA";
		texture = "\A3\Data_F\Flags\flag_us_co.paa";
		uids[] = {};
	};
};

class ExileAbstractAction
{
	title = "";
	condition = "true";
	action = "";
	priority = 1.5;
	showWindow = false;
};

/**
 * Sort this by probability of occurence to speed things up a bit
 */
class CfgInteractionMenus
{

	class Car 
	{
		targetType = 2;
		target = "Car";

		class Actions 
		{
			//class ScanLock: ExileAbstractAction
			//{
			//	title = "Scan Lock";
			//	condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !ExilePlayerInSafezone && ((locked ExileClientInteractionObject) != 1)";
			//	action = "_this call ExileClient_object_lock_scan";
			//};
            //
			//// Locks a vehicle
			//class Lock: ExileAbstractAction
			//{
			//	title = "Lock";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "true spawn ExileClient_object_lock_toggle";
			//};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			//Bones Custom Vehicle Repairs

		class Repair: ExileAbstractAction
			{
				title = "Repair/Salvage";
				condition = "true";
				action = "_this call Bones_fnc_salvageAndRepairMenuCar";
			};
			
			//// Repairs a vehicle to 100%. Requires Duckttape
			//class Repair: ExileAbstractAction
			//{
			//	title = "Repair";
			//	condition = "true";
			//	action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			//};

			//// Hot-wires a vehicle
			//class Hotwire: ExileAbstractAction
			//{
			//	title = "Hotwire";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			//};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};
		};
	};

	class Air
	{
		target = "Air";
		targetType = 2;

		class Actions
		{
			//class ScanLock: ExileAbstractAction
			//{
			//	title = "Scan Lock";
			//	condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && ((locked ExileClientInteractionObject) != 1) && !ExilePlayerInSafezone";
			//	action = "_this call ExileClient_object_lock_scan";
			//};
            //
			//// Locks a vehicle
			//class Lock: ExileAbstractAction
			//{
			//	title = "Lock";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "true spawn ExileClient_object_lock_toggle";
			//};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			// Bones Custom Air Repairs
			class Repair: ExileAbstractAction
				{
					title = "Repair/Salvage";
					condition = "true";
					action = "_this call Bones_fnc_salvageAndRepairMenuHelo";
				};
			
			//// Hot-wires a vehicle
			//class Hotwire: ExileAbstractAction
			//{
			//	title = "Hotwire";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			//};

			//// Repairs a vehicle to 100%. Requires Duckttape
			//class Repair: ExileAbstractAction
			//{
			//	title = "Repair";
			//	condition = "true";
			//	action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			//};

			// Flips a vehicle so the player doesnt have to call an admin
			// Check if vector up is fucked
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_flip";
			};

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			class RotateLeft: ExileAbstractAction
			{
				title = "Rotate Left";	
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,-15] call ExileClient_object_vehicle_rotate";
			};

			class RotateRight: ExileAbstractAction
			{
				title = "Rotate Right";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "[ExileClientInteractionObject,15] call ExileClient_object_vehicle_rotate";
			};
		};
	};

	class Safe
	{
		targetType = 2;
		target = "Exile_Container_Safe";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1) && !ExilePlayerInSafezone";
				action = "_this call ExileClient_object_lock_scan";
			};

			// Locks a vehicle
			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Pack : ExileAbstractAction
			{
				title = "Pack";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_container_pack";
			};

			class SetPinCode : ExileAbstractAction
			{
				title = "Set PIN";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_lock_setPin";
			};
		};
	};

	class Laptop
	{
		targetType = 2;
		target = "Exile_Construction_Laptop_Static";

		class Actions
		{
			class CameraSystem: ExileAbstractAction
			{
				title = "CCTV Access";
				condition = "((ExileClientInteractionObject animationPhase 'LaptopLidRotation') >= 0.5)";
				action = "_this call ExileClient_gui_baseCamera_show";
			};
		};
	};

	class SupplyBox
	{
		targetType = 2;
		target = "Exile_Container_SupplyBox";

		class Actions
		{
			class Mount: ExileAbstractAction
			{
				title = "Mount";
				condition = "(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_mount";
			};

			class Install: ExileAbstractAction
			{
				title = "Install";
				condition = "isNull (attachedTo ExileClientInteractionObject) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_install";
			};

			class Unmount: ExileAbstractAction
			{
				title = "Unmount";
				condition = "!(isNull (attachedTo ExileClientInteractionObject)) && ((ExileClientInteractionObject getvariable ['ExileOwnerUID',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_supplyBox_unmount";
			};
		};
	};

	class Construction
	{
		targetType = 2;
		target = "Exile_Construction_Abstract_Static";

		class Actions 
		{
			class ScanLock: ExileAbstractAction
			{
				title = "Scan Lock";
				condition = "('Exile_Item_ThermalScannerPro' in (magazines player)) && !((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 1)";
				action = "_this call ExileClient_object_lock_scan";
			};

			class Unlock : ExileAbstractAction
			{
				title = "Unlock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo -1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			class Lock : ExileAbstractAction
			{
				title = "Lock";
				condition = "((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "true spawn ExileClient_object_lock_toggle";
			};

			// Picks up the construction so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_move";
			};

			// Removes the construction.
			class Deconstruct: ExileAbstractAction
			{
				title = "Remove";
				condition = "call ExileClient_util_world_isInOwnTerritory";
				action = "_this spawn ExileClient_object_construction_deconstruct";
			};

			class AddALock : ExileAbstractAction
			{
				title = "Add a Lock";
				condition = "call ExileClient_object_construction_lockAddShow";
				action = "_this spawn ExileClient_object_construction_lockAdd";
			};

			class Upgrade : ExileAbstractAction
			{
				title = "Upgrade";
				condition = "call ExileClient_object_construction_upgradeShow";
				action = "_this call ExileClient_object_construction_upgrade";
			};

			class MakeBoom : ExileAbstractAction
			{
				title = "Plant charge";
				condition = "call ExileClient_system_breaching_condition";
				action = "_this call ExileClient_system_breaching_action";
			};

			class Repair : ExileAbstractAction
			{
				title = "Repair";
				condition = "(!((ExileClientInteractionObject getVariable ['ExileConstructionDamage',0]) isEqualTo 0)) && (call ExileClient_util_world_isInOwnTerritory)";
				action = "_this call ExileClient_object_construction_repair";
			};

		};
	};

	/*
		Tent, Storage crate etc.
	*/
	class Container
	{
		targetType = 2;
		target = "Exile_Container_Abstract";

		class Actions 
		{
			class Pack 
			{
				title = "Pack";
				condition = "!((typeOf ExileClientInteractionObject) isEqualTo 'Exile_Container_SupplyBox')";
				action = "_this spawn ExileClient_object_container_pack";
			};
			// Picks up the container so you can move it
			class Move: ExileAbstractAction
			{
				title = "Move";
				condition = "(getNumber(configFile >> 'CfgVehicles' >> typeOf ExileClientInteractionObject >> 'exileIsLockable') isEqualTo 0) || ((ExileClientInteractionObject getvariable ['ExileIsLocked',1]) isEqualTo 0)";
				action = "_this spawn ExileClient_object_construction_move";
			};
		};
	};

	class Flag
	{
		targetType = 2;
		target = "Exile_Construction_Flag_Static";

		class Actions
		{
			/*
			class Manage : ExileAbstractAction
			{
				title = "Manage";
				condition = "true";
				action = "_this call ExileClient_gui_baseManagement_event_show";
			};
			*/
			class StealFlag: ExileAbstractAction
			{
				title = "Steal Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',1]) isEqualTo 0)";
				action = "['StealFlag', _this select 0] call ExileClient_action_execute";
			};
			
			class RestoreFlag: ExileAbstractAction
			{
				title = "Restore Flag";
				condition = "((ExileClientInteractionObject getvariable ['ExileFlagStolen',0]) isEqualTo 1)";
				action = "['restoreFlagRequest', [netID ExileClientInteractionObject]] call ExileClient_system_network_send";
			};
			class PayProtectionFlag: ExileAbstractAction
			{
				title = "Pay Flag Maintenance";
				condition = "true";
				action = "_this call ExileClient_gui_payTerritoryProtectionMoneyDialog_show";
			};
			class PayRansomFlag: ExileAbstractAction
			{
				title = "Pay Flag Ransom";
				condition = "true";
				action = "_this call ExileClient_gui_payFlagRansomDialog_show";
			};
			class RegisterFamily: ExileAbstractAction
			{
				title = "Register Family";
				condition = "true";
				action = "_this call ExileClient_gui_registerClanDialog_show";
			};
		};
	};

	class Boat 
	{
		targetType = 2;
		target = "Ship";

		class Actions
		{
			//// Locks a vehicle
			//class Lock: ExileAbstractAction
			//{
			//	title = "Lock";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 0) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "true spawn ExileClient_object_lock_toggle";
			//};

			// Unlocks a vehicle
			class Unlock: ExileAbstractAction
			{
				title = "Unlock";
				condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
				action = "false spawn ExileClient_object_lock_toggle";
			};

			//// Hot-wires a vehicle
			//class Hotwire: ExileAbstractAction
			//{
			//	title = "Hotwire";
			//	condition = "((locked ExileClientInteractionObject) isEqualTo 2) && ((locked ExileClientInteractionObject) != 1)";
			//	action = "['HotwireVehicle', _this select 0] call ExileClient_action_execute";
			//};

			// Repairs a vehicle to 100%. Requires Duckttape
			// class Repair: ExileAbstractAction
			// {
				// title = "Repair";
				// condition = "true";
				// action = "['RepairVehicle', _this select 0] call ExileClient_action_execute";
			// };

			// Fills fuel from a can into a car
			class Refuel: ExileAbstractAction
			{
				title = "Refuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_refuel";
			};

			// Drains fuel from a car into an empty jerry can
			class DrainFuel: ExileAbstractAction
			{
				title = "Drain Fuel";
				condition = "call ExileClient_object_vehicle_interaction_show";
				action = "_this call ExileClient_object_vehicle_drain";
			};

			// Pushes a boat into look direction to move into water
			class Push: ExileAbstractAction
			{
				title = "Push Boat (Stand Back)";
				condition = "((crew ExileClientInteractionObject) isEqualTo [])";
				action = "_this call ExileClient_object_vehicle_push";
			};
		};
	};

	class Bikes
	{
		targetType = 2;
		target = "Bicycle";

		class Actions
		{
			class Flip: ExileAbstractAction
			{
				title = "Flip";
				condition = "true";
				action = "_this call ExileClient_object_vehicle_flip";
			};
		};
	};

	class Player 
	{
		targetType = 2;
		target = "Exile_Unit_Player";

		class Actions 
		{
			class Free: ExileAbstractAction
			{
				title = "Free";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_free";
			};
			
			class Search: ExileAbstractAction
			{
				title = "Search Gear";
				condition = "(alive ExileClientInteractionObject) && (ExileClientInteractionObject getVariable ['ExileIsHandcuffed', false]) && !ExileClientIsHandcuffed";
				action = "_this call ExileClient_object_handcuffs_searchGear";
			};

			class Identify: ExileAbstractAction
			{
				title = "Identify Body";
				condition = "!(alive ExileClientInteractionObject)";
				action = "_this call ExileClient_object_player_identifyBody";
			};
			
			class HideCorpse: ExileAbstractAction
			{
				title = "Bury Body";
				condition = "!(alive ExileClientInteractionObject)"; // && ('Exile_Melee_Shovel' isEqualTo (currentWeapon player))
				action = "['HideBody', (_this select 0)] call ExileClient_action_execute";
			};
		};
	};
};
/**
 * Classname is used for reference
 * name is displayed in crafting requirements
 * models is used for crafting and interaction menus
 */
class CfgInteractionModels
{
	class WaterSource
	{
		name = "Water tanks, barrels, coolers or pumps";
		models[] = 	
		{
			"barrelwater_f", 
			"barrelwater_grey_f",
			"waterbarrel_f",
			"watertank_f",
			"stallwater_f",
			"waterpump_01_f",
			"water_source_f",
			"misc_wellpump.p3d",
			// "pumpa.p3d",
			// "kasna_new.p3d",
			
			// Namalsk
			"wellpump",
			"Land_jhad_stand_water",
			"Land_Jbad_Misc_Well_L",
			"Land_jbad_Fridge",
			"Land_jbad_reservoir",
			"Land_jbad_teapot",
			"Land_KBud",
			
			//Tanoa
			"watertank_01_f",
			"watertank_02_f",
			"watertank_03_f",
			"watertank_04_f"
		};
	};

	class CleanWaterSource
	{
		name = "Water pumps or wells";
		models[] = 	
		{
			"watercooler",
			"Land_Pumpa",
			"pumpa.p3d",
			"misc_wellpump.p3d",
			"Land_Pumpa(Water Pump)"
		};
	};

	class WorkBench
	{
		name = "Work Bench";
		models[] = 
		{
			"workstand_f.p3d"
		};
	};

	class ShippingContainerSource
	{
		name = "Shipping Containers";
		models[] = 
		{
			// Arma 3
			"CargoBox_V1_F",
			"Cargo20_blue_F",
			"Cargo20_brick_red_F",
			"Cargo20_cyan_F",
			"Cargo20_grey_F",
			"Cargo20_light_blue_F",
			"Cargo20_light_green_F",
			"Cargo20_military_green_F",
			"Cargo20_military_ruins_F",
			"Cargo20_orange_F",
			"Cargo20_red_F",
			"Cargo20_sand_F",
			"Cargo20_white_F",
			"Cargo20_yellow_F",
			"Cargo40_blue_F",
			"Cargo40_brick_red_F",
			"Cargo40_cyan_F",
			"Cargo40_grey_F",
			"Cargo40_light_blue_F",
			"Cargo40_light_green_F",
			"Cargo40_military_green_F",
			"Cargo40_orange_F",
			"Cargo40_red_F",
			"Cargo40_sand_F",
			"Cargo40_white_F",
			"Cargo40_yellow_F",

			// Namalsk
			"nam_container.p3d",
			"misc_cargo1d.p3d",
			"misc_cargo1b.p3d",
			"misc_cargo1bo.p3d",
			"misc_cargo2c.p3d",
			"misc_cargo1ao.p3d",
			
			//Tanoa
			"Land_ContainerLine_01_F",
			"Land_ContainerLine_02_F",
			"Land_ContainerLine_03_F",

			// Also allow wrecks
			"wreck_"
/*			
			"wreck_bmp2_f.p3d",
			"wreck_brdm2_f.p3d",
			"wreck_car2_f.p3d",
			"wreck_car3_f.p3d",
			"wreck_car_f.p3d",
			"wreck_cardismantled_f.p3d",
			"wreck_hmmwv_f.p3d",
			"wreck_hunter_f.p3d",
			"wreck_offroad2_f.p3d",
			"wreck_offroad_f.p3d",
			"wreck_skodovka_f.p3d",
			"wreck_slammer_f.p3d",
			"wreck_slammer_hull_f.p3d",
			"wreck_slammer_turret_f.p3d",
			"wreck_t72_hull_f.p3d",
			"wreck_t72_turret_f.p3d",
			"wreck_truck_dropside_f.p3d",
			"wreck_truck_f.p3d",
			"wreck_uaz_f.p3d",
			"wreck_ural_f.p3d"
			"wreck_van_f.p3d",
			*/


			// TODO: Ask community for CUP/AiA model names	
		};
	};

	class WoodSource
	{
		name = "Trees";
		models[] = 
		{
			" t_",
			" bo_t_",

			// A2 trees
            " str_",
            " Smrk_",
            " les_",
            " brg_"			
		};
	};

	// TODO: Add https://community.bistudio.com/wikidata/images/thumb/6/60/Arma3_CfgVehicles_Land_Tank_rust_F.jpg/150px-Arma3_CfgVehicles_Land_Tank_rust_F.jpg
	class FuelSource
	{
		name = "Fuel pumps, stations or barrels";
		models[] = 
		{
			"fuelstation_feed_f.p3d",
			"a_fuelstation_feed_f.p3d",
			"a_fuelstation_feed.p3d",
			"metalbarrel_f.p3d",
			"flexibletank_01_f.p3d",
			"fs_feed_f.p3d",
			"fuelstation_feed_pmc.p3d",
			"ind_tanksmall.p3d",
			"fuel_tank_big.p3d",
			"ind_tanksmall2.p3d",
			"fuel_tank_stairs.p3d",
			"fuel_tank_big.p3d",
			"ind_fuelstation_feed_ep1.p3d",
			//Tanoa
			"fuelstation_01_pump_f.p3d",
			"fuelstation_02_pump_f.p3d"
		};	
	};
};
class CfgLocker 
{
	numbersOnly = "0123456789";
	
	maxDeposit = 20000;
};

class CfgPlayer 
{
	// In minutes ammount of time it takes to go from 100 - 0 if stationary
	hungerDecay = 90;
	thirstDecay = 60;

	// Damage taken from 0 (health||thirst)/sec
	healthDecay = 0.0833;

	// Health regen if over BOTH
	thirstRegen = 70;
	hungerRegen = 70;

	// IF above meet recover HP%/MIN
	recoveryPerMinute = 1;

	// Set custom aim precision coefficient for weapon sway
	// https://community.bistudio.com/wiki/Arma_3_Stamina
	// Set to -1 if you want to use Arma 3 default value
	// setCustomAimCoef
	customAimCoefficient = 0.5;

	// 0 or 1
	enableFatigue = 0;
	enableStamina = 0;

	disableMapDrawing = 1;
};
class CfgSlothMachine
{
	spinCost = 100;
	Jackpot = 10100;
	
	chances[] = 
	{
		{85, ""}, 					// 85% = Nothing
		{95, "Level1"}, 			// 10% = 1pt
		{96, "Level2"}, 			// 1% = 10pt
		{97, "Level3"}, 			// 1% = 25pt
		{98, "Level4"}, 			// 1% = 50pt
		{99, "Level5"},				// 1% = 100pt
		{100, "Jackpot"} 			// 1% = Jackpot
	};

	class Prizes 
	{
		class Level1
		{
			symbol = "\exile_assets\texture\item\Exile_Item_ToiletPaper.paa";
			prize = 101;
		};

		class Level2
		{
			symbol = "\exile_assets\texture\item\Exile_Item_CockONut.paa";
			prize = 110;
		};

		class Level3
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Beer.paa";
			prize = 125;
		};

		class Level4
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Knife.paa";
			prize = 150;
		};

		class Level5
		{
			symbol = "\exile_assets\texture\item\Exile_Item_Safe.paa";
			prize = 200;
		};
		
		class Jackpot
		{
			symbol = "\exile_assets\texture\item\Exile_Item_XmasPresent.paa";
		};
	};
};
class CfgTerritories
{
	// Base Cost / Radius
	// Level 1 is allways for Pop Tabs, >= 2 for Respect
	prices[] = 
	{
		// Purchase Price 		Radius 		Number of Objects
		{5000,					60,			30 					}, // Level 1
		{2000,					60,			40					}, // Level 2 
		{3000,					60,			50 					}, // Level 3
		{4000,					60,			60					}, // Level 4
		{5000,					60,			70					}, // Level 5
		{6000,					60,			80					}, // Level 6
		{7000,					60,			90					}, // Level 7
		{8000,					60,			100					}, // Level 8
		{9000,					60,			130					}, // Level 9
		{10000,					60,			150					}  // Level 10
	};

	// A shortcut of the above maximum radius
	maximumRadius = 150;

	// The above * 2 plus coverving the 20m you can move while placing things
	minimumDistanceToOtherTerritories = 90; 

	// Maximum number of territories a player can own
	maximumNumberOfTerritoriesPerPlayer = 2;

	/**
	 * Defines the minimum distance to safe zones / trader cities where players
	 * cannot build territories
	 */
	minimumDistanceToTraderZones = 1500;

	/**
	 * Defines the minimum distance to spawn zones where players
	 * cannot build territories
	 */
	minimumDistanceToSpawnZones = 10;

	// Amount of pop tabs per object to pay
	popTabAmountPerObject = 100;
};
class CfgTraderCategories 
{
	/* class Community
	{
		name = "Community Items";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community2
	{
		name = "Community Items 2";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community3
	{
		name = "Community Items 3";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community4
	{
		name = "Community Items 4";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community5
	{
		name = "Community Items 5";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community6
	{
		name = "Community Items 6";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community7
	{
		name = "Community Items 7";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community8
	{
		name = "Community Items 8";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community9
	{
		name = "Community Items 9";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	};

	class Community10
	{
		name = "Community Items 10";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			// Add your items here <3
		};
	}; */

	class Uniforms
	{
		name = "Uniforms";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\uniform_ca.paa";
		items[] = 
		{
			"TRYK_U_B_Denim_T_WH",
			"TRYK_U_B_RED_T_BR",
			"TRYK_U_B_Denim_T_BK",
			"TRYK_SUITS_BLK_F",
			"TRYK_shirts_DENIM_BK",
			"TRYK_shirts_DENIM_BL",
			"TRYK_shirts_DENIM_BWH",
			"TRYK_shirts_DENIM_od",
			"TRYK_shirts_DENIM_R",
			"TRYK_shirts_DENIM_RED2",
			"TRYK_shirts_DENIM_WH",
			"TRYK_shirts_DENIM_WHB",
			"TRYK_shirts_DENIM_ylb",
			"TRYK_shirts_TAN_PAD_YEL",
			"TRYK_shirts_OD_PAD_YEL",
			"TRYK_shirts_BLK_PAD_YEL",
			"TRYK_shirts_PAD_YEL",
			"TRYK_shirts_TAN_PAD_RED2",
			"TRYK_shirts_OD_PAD_RED2",
			"TRYK_shirts_BLK_PAD_RED2",
			"TRYK_shirts_PAD_RED2",
			"TRYK_shirts_TAN_PAD",
			"TRYK_shirts_OD_PAD",
			"TRYK_shirts_BLK_PAD",
			"TRYK_shirts_PAD",
			"TRYK_shirts_TAN_PAD_BLU3",
			"TRYK_shirts_OD_PAD_BLU3",
			"TRYK_shirts_BLK_PAD_BLU3",
			"TRYK_shirts_PAD_BLU3",
			"TRYK_shirts_TAN_PAD_BLW",
			"TRYK_shirts_OD_PAD_BLW",
			"TRYK_shirts_BLK_PAD_BLW",
			"TRYK_shirts_PAD_BLW",
			"TRYK_shirts_TAN_PAD_BL",
			"TRYK_shirts_OD_PAD_BL",
			"TRYK_shirts_BLK_PAD_BL",
			"TRYK_shirts_PAD_BL"
		};
	};

	class Vests
	{
		name = "Vests";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\vest_ca.paa";
		items[] = 
		{
			"V_Chestrig_blk",
			"V_Chestrig_rgr",
			"V_Chestrig_khk",
			"V_Chestrig_oli",
			"V_TacChestrig_cbr_F",
			"V_TacChestrig_grn_F",
			"V_TacChestrig_oli_F"
		};
	};

	class Weapons 
	{
		name = "Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\headgear_ca.paa";
		items[] =
		{
			"CUP_sgun_M1014",
			"CUP_srifle_LeeEnfield_rail",
			"CUP_smg_MP5A5",
			"CUP_smg_MP5SD6",
			"CUP_sgun_Saiga12K",
			"CUP_smg_bizon",
			"CUP_srifle_CZ550",
			"hlc_rifle_M1903A1",
			"hlc_rifle_M1903A1_unertl"
		};
	};

class Equipment 
	{
		name = "Equipment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\Goggles_ca.paa";
		items[] =
		{
/* 			"G_Balaclava_TI_G_blk_F",
			"TRYK_Shemagh_G",
			"H_RacingHelmet_3_F",
			"TRYK_SUITS_BLK_F",
			"V_TacVest_blk_POLICE",
			"H_Watchcap_blk",
			"TRYK_B_tube_cyt",
			"B_HuntingBackpack",
			"TRYK_shirts_DENIM_ylb",
			"TRYK_hoodie_FR",
			"Exile_Headgear_GasMask",
			"V_RebreatherB",
			"TRYK_U_denim_hood_blk",
			"TRYK_U_denim_hood_mc",
			"TRYK_U_denim_hood_3c",
			"TRYK_U_denim_hood_nc",
			"H_Shemag_olive" */
		};
	};

	class Supplies 
	{
		name = "Supplies";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
/* 			"Exile_Item_PlasticBottleDirtyWater",
			"Exile_Item_Sand",
			"Exile_Item_CanOpener",
			"Exile_Item_Bandage",
			"Exile_Item_SeedAstics",
			"Exile_Item_Hammer",
			"Exile_Item_FuelCanisterEmpty",
			"Exile_Item_CodeLock",
			"Exile_Melee_Axe",
			"Land_CampingTable_F_Kit",
			"Land_Sun_chair_F_Kit",
			"Land_Sunshade_04_F_Kit",
			"Exile_Item_XM8",
			"ItemMap",
			"Binocular",
			"Exile_Item_ZipTie",
			"ItemCompass",
			"Exile_Item_MetalScrews",
			"Exile_Item_Matches",
			"Exile_Item_CookingPot",
			"Exile_Item_CarWheel",
			"Exile_Item_Knife",
			"Exile_Item_LightBulb",
			"Exile_Item_ExtensionCord",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_FloodLightKit",
			"Exile_Item_PlasticBottleEmpty" */
		};
	};

	class BipodAttachments 
	{
		name = "Bipod Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itembipod_ca.paa";
		items[] = 
		{
			"bipod_01_F_blk",
			"bipod_01_F_mtp",
			"bipod_01_F_snd",
			"bipod_02_F_blk",
			"bipod_02_F_hex",
			"bipod_02_F_tan",
			"bipod_03_F_blk",
			"bipod_03_F_oli",
			//Apex
			"bipod_01_F_khk"
		};
	};

/* 	class MuzzleAttachments 
	{
		name = "Suppressor Attachments";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemmuzzle_ca.paa";
		items[] = 
		{
			"muzzle_snds_338_black",
			"muzzle_snds_338_green",
			"muzzle_snds_338_sand",
			"muzzle_snds_93mmg",
			"muzzle_snds_93mmg_tan",
			"muzzle_snds_acp",
			"muzzle_snds_B",
			"muzzle_snds_H",
			"muzzle_snds_H_MG",
			"muzzle_snds_H_SW",
			"muzzle_snds_L",
			"muzzle_snds_M",
			//Apex
			"muzzle_snds_H_khk_F",
			"muzzle_snds_H_snd_F",
			"muzzle_snds_58_blk_F",
			"muzzle_snds_m_khk_F",
			"muzzle_snds_m_snd_F",
			"muzzle_snds_B_khk_F",
			"muzzle_snds_B_snd_F",
			"muzzle_snds_58_wdm_F",
			"muzzle_snds_65_TI_blk_F",
			"muzzle_snds_65_TI_hex_F",
			"muzzle_snds_65_TI_ghex_F",
			"muzzle_snds_H_MG_blk_F",
			"muzzle_snds_H_MG_khk_F"
		};
	};

	class UAVs
	{
		name = "Unmanned Aerial Vehicles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\gps_ca.paa";
		items[] = 
		{
			"I_UavTerminal",
			"I_UAV_01_backpack_F"
		};
	};

	class StaticMGs
	{
		name = "Static Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"O_HMG_01_support_F",
			//"O_HMG_01_support_high_F", // Does not seem to work with HMG01, only the lower version does
			"O_HMG_01_weapon_F"
		};
	}; */

	class OpticAttachments 
	{
		name = "Scopes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemoptic_ca.paa";
		items[] = 
		{
			"optic_Aco",  //ACO (Red)
			"optic_ACO_grn",  //ACO (Green)
			"optic_Aco_smg",  //ACO SMG (Red)
			"optic_ACO_grn_smg",  //ACO SMG (Green)
			"optic_Holosight",  //Mk17 Holosight
			"optic_Holosight_smg",  //Mk17 Holosight SMG
			"optic_MRD",  //MRD
			"optic_Holosight_blk_F",  //Mk17 Holosight (Black)
			"optic_Holosight_khk_F",  //Mk17 Holosight (Khaki)
			"optic_Holosight_smg_blk_F",  //Mk17 Holosight SMG (Black)
			"CUP_optic_Kobra",  //Kobra Reflex Sight
			"CUP_optic_HoloBlack",  //EoTech Holo (Black)
			"CUP_optic_HoloWdl",  //EoTech Holo (Woodland)
			"CUP_optic_HoloDesert",  //EoTech Holo (Desert)
			"CUP_optic_Eotech533",  //EoTech 533 HWS (Tan)
			"CUP_optic_Eotech533Grey",  //EoTech 533 HWS (Grey)
			"CUP_optic_CompM4",  //Aimpoint CompM4 (Black)
			"CUP_optic_CompM2_Black",  //M68 CCO (Black)
			"CUP_optic_CompM2_Woodland",  //M68 CCO (Woodland)
			"CUP_optic_CompM2_Woodland2",  //M68 CCO (Woodland 2)
			"CUP_optic_CompM2_Desert",  //M68 CCO (Desert)
			"CUP_optic_ZDDot",  //Meopta ZD-Dot
			"CUP_optic_MRad",  //Meopta Rapid Acquisition Dot
			"CUP_optic_TrijiconRx01_desert",  //Trijicon Rx01 Red Dot sight (Desert)
			"CUP_optic_TrijiconRx01_black",  //Trijicon Rx01 Red Dot sight (Black)
			"hlc_optic_kobra"  //Kobra Sight
		};
	};

	class Hardware 
	{
		name = "Hardware";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			
			"Exile_Item_ExtensionCord",
			"Exile_Item_FuelCanisterEmpty",			
			"Exile_Item_LightBulb",
			"Exile_Item_CamoTentKit",
			"Exile_Item_CarWheel"
			
			/*
			"Exile_Item_DuctTape",
			"Exile_Item_CodeLock"
			"Exile_Item_MetalBoard",
			"Exile_Item_MetalPole",
			"Exile_Item_SafeKit",
			"Exile_Item_JunkMetal",
			"Exile_Item_MetalScrews",
			"Exile_Item_MetalWire",
			"Exile_Item_Laptop",
			"Exile_Item_BaseCameraKit",
			"Exile_Item_MetalHedgehogKit",
			"Exile_Item_Cement",
			"Exile_Item_Sand",
			"Exile_Item_MobilePhone",
			--Unused--
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_OilCanister",
			"Exile_Item_Hammer",
			"Exile_Item_Carwheel",
			"Exile_Item_SleepingMat",
			"Exile_Item_Defibrillator",
			"Exile_Item_Wrench",
			"Exile_Item_Rope"
		*/
		};
	};

	class Food 
	{
		name = "Fast Food";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_Moobar"
			
/* 			"Exile_Item_EMRE",		
			"Exile_Item_GloriousKnakworst",
			"Exile_Item_Surstromming",
			"Exile_Item_SausageGravy",
			"Exile_Item_Catfood",
			"Exile_Item_ChristmasTinner",
			"Exile_Item_BBQSandwich",
			"Exile_Item_MacasCheese",
			"Exile_Item_Dogfood",
			"Exile_Item_BeefParts",
			"Exile_Item_Cheathas",
			"Exile_Item_Noodles",
			"Exile_Item_SeedAstics",
			"Exile_Item_Raisins",
			"Exile_Item_InstantCoffee" */
		};
	};

	class Drinks 
	{
		name = "Drinks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] =
		{
			"Exile_Item_ChocolateMilk"
			
			/* "Exile_Item_PlasticBottleCoffee",
			"Exile_Item_PowerDrink",
			"Exile_Item_PlasticBottleFreshWater",
			"Exile_Item_Beer",
			"Exile_Item_EnergyDrink",
			"Exile_Item_MountainDupe",
			"Exile_Item_PlasticBottleEmpty" */
		};
	};

	class Tools
	{
		name = "Tools";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"ItemMap",
			"ItemCompass",
			"ItemRadio",
			"ItemWatch",
			"Exile_Item_Matches",
			"Binocular"
			
			/* "Exile_Item_CookingPot",
			"Exile_Item_CanOpener",
			"Exile_Item_Handsaw",
			"Exile_Item_Pliers",
			"Exile_Item_Grinder",
			"Exile_Item_Foolbox",
			"Exile_Item_CordlessScrewdriver",
			"Exile_Item_FireExtinguisher",
			"Exile_Item_Hammer",
			"Exile_Item_OilCanister",
			"Exile_Item_Screwdriver",
			"Exile_Item_Shovel",
			"Exile_Item_Wrench",
			"Exile_Item_SleepingMat",	
			"Exile_Item_ToiletPaper",			
			"Exile_Item_ZipTie",
			"Rangefinder",
			"Laserdesignator",
			"Laserdesignator_02",
			"Laserdesignator_03",
			"NVGoggles",
			"NVGoggles_INDEP",
			"NVGoggles_OPFOR",
			"ItemGPS",
			"Exile_Item_XM8",
			//Apex
			"O_NVGoggles_hex_F",
			"O_NVGoggles_urb_F",
			"O_NVGoggles_ghex_F",
			"NVGoggles_tna_F" */
		};
	};

	class FirstAid
	{
		name = "FirstAid";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Item_Bandage",
			"Exile_Item_Heatpack"
			
			//"Exile_Item_InstaDoc",
			//"Exile_Item_Vishpirin",
			// Not available in 0.9.4!
			//"Exile_Item_Defibrillator"
		};
	};

/* 	class Navigation
	{
		name = "Special Environment";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"B_Parachute",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"Exile_Headgear_GasMask",
			"G_Diving",
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving"			
		};
	}; */

	class Backpacks
	{
		name = "Backpacks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\backpack_ca.paa";
		items[] = 
		{
			"B_AssaultPack_blk",
			"B_AssaultPack_cbr",
			"B_AssaultPack_dgtl",
			"B_AssaultPack_rgr",
			"B_AssaultPack_ocamo",
			"B_AssaultPack_khk",
			"B_AssaultPack_mcamo",
			"B_AssaultPack_sgg",
			"CUP_B_ACRScout_m95",
			"B_FieldPack_blk",
			"B_FieldPack_cbr",
			"B_FieldPack_ocamo",
			"B_FieldPack_khk",
			"B_FieldPack_oli",
			"B_FieldPack_oucamo",
			"CUP_B_RPGPack_Khaki",
			"TRYK_B_tube_blk",
			"TRYK_B_tube_cyt",
			"TRYK_B_tube_od",
			"CUP_B_AssaultPack_ACU",
			"CUP_B_AssaultPack_Black",
			"CUP_B_AssaultPack_Coyote"
		};
	};

	class Ammunition
	{
		name = "Ammunition";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\CargoMag_ca.paa";
		items[] = 
		{
			"CUP_10Rnd_9x19_Compact",
			"CUP_17Rnd_9x19_glock17",
			"CUP_7Rnd_45ACP_1911",
			"CUP_15Rnd_9x19_M9",
			"CUP_8Rnd_9x18_Makarov_M",
			"CUP_20Rnd_B_765x17_Ball_M",
			"CUP_6Rnd_45ACP_M",
			"CUP_8Rnd_B_Beneli_74Slug",  //shotgun slug
			"CUP_8Rnd_B_Beneli_74Pellets",  //shotgun pellets
			"CUP_10x_303_M",  //enfield ammo
			"CUP_30Rnd_9x19_MP5",  //MP5 ammo
			"CUP_8Rnd_B_Saiga12_74Slug_M",  //saiga slugs
			"CUP_8Rnd_B_Saiga12_74Pellets_M",  //saiga pellets
			"CUP_64Rnd_9x19_Bizon_M",  //bizon ammo
			"CUP_5x_22_LR_17_HMR_M",  //cz-550 ammo
			"hlc_5rnd_3006_1903"  //M1903A1 ammo

			/* 			
			"100Rnd_65x39_caseless_mag",
			"100Rnd_65x39_caseless_mag_Tracer",
			"10Rnd_127x54_Mag",
			"10Rnd_338_Mag",
			"10Rnd_762x54_Mag",
			"10Rnd_93x64_DMR_05_Mag",
			"11Rnd_45ACP_Mag",
			//"130Rnd_338_Mag", SPMG
			"150Rnd_762x54_Box",
			"150Rnd_762x54_Box_Tracer",
			//"150Rnd_93x64_Mag", // NAVID
			"16Rnd_9x21_Mag",
			"200Rnd_65x39_cased_Box",
			"200Rnd_65x39_cased_Box_Tracer",
			"20Rnd_556x45_UW_mag",
			"20Rnd_762x51_Mag",
			"30Rnd_45ACP_Mag_SMG_01",
			"30Rnd_45ACP_Mag_SMG_01_tracer_green",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
			"30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow",
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green_mag_Tracer",
			"30Rnd_65x39_caseless_mag",
			"30Rnd_65x39_caseless_mag_Tracer",
			"30Rnd_9x21_Mag",
			"30Rnd_9x21_Yellow_Mag",
			"30Rnd_9x21_Green_Mag",
			"30Rnd_9x21_Red_Mag",
			"5Rnd_127x108_APDS_Mag",
			"5Rnd_127x108_Mag",
			"6Rnd_45ACP_Cylinder",
			"6Rnd_GreenSignal_F",
			"6Rnd_RedSignal_F",
			"7Rnd_408_Mag",
			"9Rnd_45ACP_Mag",
			"Exile_Magazine_30Rnd_762x39_AK",
			"Exile_Magazine_30Rnd_545x39_AK_Green",
			"Exile_Magazine_30Rnd_545x39_AK_Red",
			"Exile_Magazine_30Rnd_545x39_AK_White",
			"Exile_Magazine_30Rnd_545x39_AK_Yellow",
			"Exile_Magazine_45Rnd_545x39_RPK_Green",
			"Exile_Magazine_75Rnd_545x39_RPK_Green",
			"Exile_Magazine_20Rnd_762x51_DMR",
			"Exile_Magazine_20Rnd_762x51_DMR_Yellow",
			"Exile_Magazine_20Rnd_762x51_DMR_Red",
			"Exile_Magazine_20Rnd_762x51_DMR_Green",
			"Exile_Magazine_10Rnd_303",
			"Exile_Magazine_100Rnd_762x54_PK_Green",
			"Exile_Magazine_7Rnd_45ACP",
			"Exile_Magazine_8Rnd_9x18",
			"Exile_Magazine_30Rnd_545x39_AK",
			"Exile_Magazine_6Rnd_45ACP",
			"Exile_Magazine_5Rnd_22LR",
			"Exile_Magazine_10Rnd_762x54",
			"Exile_Magazine_10Rnd_9x39",
			"Exile_Magazine_20Rnd_9x39",
			//"Exile_Magazine_8Rnd_74Pellets",
			"Exile_Magazine_8Rnd_74Slug",
			//Apex
			"30Rnd_9x21_Mag_SMG_02",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Red",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow",
			"30Rnd_9x21_Mag_SMG_02_Tracer_Green",
			"30Rnd_580x42_Mag_F",
			"30Rnd_580x42_Mag_Tracer_F",
			"100Rnd_580x42_Mag_F",
			"100Rnd_580x42_Mag_Tracer_F",
			"20Rnd_650x39_Cased_Mag_F",
			"10Rnd_50BW_Mag_F",
			"150Rnd_556x45_Drum_Mag_F",
			"150Rnd_556x45_Drum_Mag_Tracer_F",
			"30Rnd_762x39_Mag_F",
			"30Rnd_762x39_Mag_Green_F",
			"30Rnd_762x39_Mag_Tracer_F",
			"30Rnd_762x39_Mag_Tracer_Green_F",
			"30Rnd_545x39_Mag_F",
			"30Rnd_545x39_Mag_Green_F",
			"30Rnd_545x39_Mag_Tracer_F",
			"30Rnd_545x39_Mag_Tracer_Green_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Red_F",
			"200Rnd_556x45_Box_Tracer_F",
			"200Rnd_556x45_Box_Tracer_Red_F",
			"10Rnd_9x21_Mag",
			"Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag",
			"Exile_Magazine_7Rnd_408_Bullet_Cam_Mag",
			"Exile_Magazine_10Rnd_338_Bullet_Cam_Mag" 
			*/
		};
	};

/* 	class Flares 
	{
		name = "Flares";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Chemlight_blue",
			"Chemlight_green",
			"Chemlight_red",
			"FlareGreen_F",
			"FlareRed_F",
			"FlareWhite_F",
			"FlareYellow_F",
			"UGL_FlareGreen_F",
			"UGL_FlareRed_F",
			"UGL_FlareWhite_F",
			"UGL_FlareYellow_F",
			"3Rnd_UGL_FlareGreen_F",
			"3Rnd_UGL_FlareRed_F",
			"3Rnd_UGL_FlareWhite_F",
			"3Rnd_UGL_FlareYellow_F"
		};
	};

	class Smokes 
	{
		name = "Smokes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"SmokeShell",
			"SmokeShellBlue",
			"SmokeShellGreen",
			"SmokeShellOrange",
			"SmokeShellPurple",
			"SmokeShellRed",
			"SmokeShellYellow",
			"1Rnd_Smoke_Grenade_shell",
			"1Rnd_SmokeBlue_Grenade_shell",
			"1Rnd_SmokeGreen_Grenade_shell",
			"1Rnd_SmokeOrange_Grenade_shell",
			"1Rnd_SmokePurple_Grenade_shell",
			"1Rnd_SmokeRed_Grenade_shell",
			"1Rnd_SmokeYellow_Grenade_shell",
			"3Rnd_Smoke_Grenade_shell",
			"3Rnd_SmokeBlue_Grenade_shell",
			"3Rnd_SmokeGreen_Grenade_shell",
			"3Rnd_SmokeOrange_Grenade_shell",
			"3Rnd_SmokePurple_Grenade_shell",
			"3Rnd_SmokeRed_Grenade_shell",
			"3Rnd_SmokeYellow_Grenade_shell"
		};
	};	

	class Explosives
	{
		name = "Explosives";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\cargothrow_ca.paa";
		items[] = 
		{
			"HandGrenade",
			"MiniGrenade",
			"B_IR_Grenade",
			"O_IR_Grenade",
			"I_IR_Grenade",
			"1Rnd_HE_Grenade_shell",
			"3Rnd_HE_Grenade_shell",
			"APERSBoundingMine_Range_Mag",
			"APERSMine_Range_Mag",
			"APERSTripMine_Wire_Mag",
			"ClaymoreDirectionalMine_Remote_Mag",
			"DemoCharge_Remote_Mag",
			"IEDLandBig_Remote_Mag",
			"IEDLandSmall_Remote_Mag",
			"IEDUrbanBig_Remote_Mag",
			"IEDUrbanSmall_Remote_Mag",
			"SatchelCharge_Remote_Mag",
			"SLAMDirectionalMine_Wire_Mag"
		};
	}; */

	class Pistols 
	{
		name = "Pistols";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\handgun_ca.paa";
		items[] = 
		{
			"CUP_hgun_Compact",
			"CUP_hgun_Glock17",
			"CUP_hgun_Colt1911",
			"CUP_hgun_M9",
			"CUP_hgun_Makarov",
			"CUP_hgun_SA61",
			"CUP_hgun_TaurusTracker455"
		};
	};

	/*
	class SubMachineGuns 
	{
		name = "Sub Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"hgun_PDW2000_F",
			"SMG_01_F",
			"SMG_02_F",
			"SMG_05_F"
		};
	};

	class LightMachineGuns 
	{
		name = "Light Machine Guns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MX_SW_Black_F",
			"arifle_MX_SW_F",
			"LMG_Mk200_F",
			"LMG_Zafir_F",
			"LMG_03_F",
			"Exile_Weapon_RPK",
			"Exile_Weapon_PK",
			"Exile_Weapon_PKP"

			
			// "MMG_01_hex_F",
			// "MMG_01_tan_F",
			// "MMG_02_black_F",
			// "MMG_02_camo_F",
			// "MMG_02_sand_F"
			
		};
	};

	class AssaultRifles
	{
		name = "Assault Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_Katiba_C_F",
			"arifle_Katiba_F",
			"arifle_Katiba_GL_F",
			"arifle_Mk20_F",
			"arifle_Mk20_GL_F",
			"arifle_Mk20_GL_plain_F",
			"arifle_Mk20_plain_F",
			"arifle_Mk20C_F",
			"arifle_Mk20C_plain_F",
			"arifle_MX_Black_F",
			"arifle_MX_F",
			"arifle_MX_GL_Black_F",
			"arifle_MX_GL_F",
			"arifle_MXC_Black_F",
			"arifle_MXC_F",
			"arifle_SDAR_F",
			"arifle_TRG20_F",
			"arifle_TRG21_F",
			"arifle_TRG21_GL_F",
			"Exile_Weapon_AK107",
			"Exile_Weapon_AK107_GL",
			"Exile_Weapon_AK74",
			"Exile_Weapon_AK74_GL",
			"Exile_Weapon_AK47",
			"Exile_Weapon_AKS_Gold",
			//Apex
			"arifle_AK12_F",
			"arifle_AK12_GL_F",
			"arifle_AKM_F",
			"arifle_AKM_FL_F",
			"arifle_AKS_F",
			"arifle_ARX_blk_F",
			"arifle_ARX_ghex_F",
			"arifle_ARX_hex_F",
			"arifle_CTAR_blk_F",
			"arifle_CTAR_hex_F",
			"arifle_CTAR_ghex_F",
			"arifle_CTAR_GL_blk_F",
			"arifle_CTARS_blk_F",
			"arifle_CTARS_hex_F",
			"arifle_CTARS_ghex_F",
			"arifle_SPAR_01_blk_F",
			"arifle_SPAR_01_khk_F",
			"arifle_SPAR_01_snd_F",
			"arifle_SPAR_01_GL_blk_F",
			"arifle_SPAR_01_GL_khk_F",
			"arifle_SPAR_01_GL_snd_F",
			"arifle_SPAR_02_blk_F",
			"arifle_SPAR_02_khk_F",
			"arifle_SPAR_02_snd_F",			
			"arifle_SPAR_03_blk_F",
			"arifle_SPAR_03_khk_F",
			"arifle_SPAR_03_snd_F",
			"arifle_MX_khk_F",
			"arifle_MX_GL_khk_F",
			"arifle_MXC_khk_F",
			"arifle_MXM_khk_F"
		};
	};
	
	class Shotguns
	{
		name = "Shotguns";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Weapon_M1014"
		};
	};

	class SniperRifles
	{
		name = "Sniper Rifles";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"arifle_MXM_Black_F",
			"arifle_MXM_F",
			"srifle_DMR_01_F",
			"srifle_DMR_02_camo_F",
			"srifle_DMR_02_F",
			"srifle_DMR_02_sniper_F",
			"srifle_DMR_03_F",
			"srifle_DMR_03_khaki_F",
			"srifle_DMR_03_multicam_F",
			"srifle_DMR_03_tan_F",
			"srifle_DMR_03_woodland_F",
			"srifle_DMR_04_F",
			"srifle_DMR_04_Tan_F",
			"srifle_DMR_05_blk_F",
			"srifle_DMR_05_hex_F",
			"srifle_DMR_05_tan_f",
			"srifle_DMR_06_camo_F",
			"srifle_DMR_06_olive_F",
			"srifle_EBR_F",
			"srifle_GM6_camo_F",
			"srifle_GM6_F",
			"srifle_LRR_camo_F",
			"srifle_LRR_F",
			"Exile_Weapon_CZ550",
			"Exile_Weapon_SVD",
			"Exile_Weapon_SVDCamo",
			"Exile_Weapon_VSSVintorez",
			"Exile_Weapon_DMR",
			"Exile_Weapon_LeeEnfield",
			//Apex
			"srifle_LRR_tna_F",
			"srifle_GM6_ghex_F",
			"srifle_DMR_07_blk_F",
			"srifle_DMR_07_hex_F",
			"srifle_DMR_07_ghex_F"
		};
	};

	class Bikes
	{
		name = "Bikes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Bike_OldBike",
			"Exile_Bike_MountainBike"
		};
	};

	class Cars
	{
		name = "Cars";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Kart_Black",
			"Exile_Bike_QuadBike_Black",
			"Exile_Car_OldTractor_Red",
			"Exile_Car_TowTractor_White",
			"Exile_Car_Tractor_Red",
			"Exile_Car_UAZ_Green",
			"Exile_Car_UAZ_Open_Green",
			"Exile_Car_Octavius_White",
			"Exile_Car_Golf_Red",
			"Exile_Car_LandRover_Green",
			"Exile_Car_LandRover_Ambulance_Green",
			"Exile_Car_Lada_Green",
			"Exile_Car_Volha_White",
			"Exile_Car_Hatchback_Rusty1",
			"Exile_Car_Hatchback_Rusty2",
			"Exile_Car_Hatchback_Rusty3",
			"Exile_Car_Hatchback_Sport_Red",
			"Exile_Car_SUV_Red",
			"Exile_Car_SUVXL_Black",
			"Exile_Car_SUV_Armed_Black",
			"Exile_Car_Offroad_Rusty1",
			"Exile_Car_Offroad_Rusty2",
			"Exile_Car_Offroad_Rusty3",
			"Exile_Car_Offroad_Repair_Civillian",
			"Exile_Car_Offroad_Armed_Guerilla01",
			"Exile_Car_BRDM2_HQ",
			"Exile_Car_BTR40_MG_Green",
			"Exile_Car_BTR40_Green",
			"Exile_Car_HMMWV_M134_Green",
			"Exile_Car_HMMWV_M2_Green",
			"Exile_Car_HMMWV_MEV_Green",
			"Exile_Car_HMMWV_UNA_Green",
			"Exile_Car_Strider",
			"Exile_Car_Hunter",
			"Exile_Car_Ifrit",
			"Exile_Car_ProwlerLight",
			"Exile_Car_ProwlerUnarmed",
			"Exile_Car_QilinUnarmed",
			"Exile_Car_MB4WD",
			"Exile_Car_MB4WDOpen"
		};
	};

	class Trucks
	{
		name = "Trucks";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Car_Van_Black",
			"Exile_Car_Van_Box_Black",
			"Exile_Car_Van_Fuel_Black",
			"Exile_Car_Ural_Open_Worker",
			"Exile_Car_Ural_Covered_Worker",
			"Exile_Car_V3S_Covered",
			"Exile_Car_Zamak",
			"Exile_Car_Tempest",
			"Exile_Car_HEMMT",
			"Exile_Car_Ikarus_Blue"
		};
	};

	class Choppers
	{
		name = "Helicopters";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Chopper_Hummingbird_Green",
			"Exile_Chopper_Hummingbird_Civillian_Wasp",
			"Exile_Chopper_Huey_Green",
			"Exile_Chopper_Huey_Armed_Green",
			"Exile_Chopper_Taru_Black",
			"Exile_Chopper_Taru_Covered_Black",
			"Exile_Chopper_Taru_Transport_Black",
			"Exile_Chopper_Orca_BlackCustom",
			"Exile_Chopper_Mohawk_FIA",
			"Exile_Chopper_Huron_Black",
			"Exile_Chopper_Hellcat_Green"
		};
	};

	class Boats
	{
		name = "Boats";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Boat_RubberDuck_CSAT",
			"Exile_Boat_RubberDuck_Digital",
			"Exile_Boat_RubberDuck_Orange",
			"Exile_Boat_RubberDuck_Blue",
			"Exile_Boat_RubberDuck_Black",
			"Exile_Boat_MotorBoat_Police",
			"Exile_Boat_MotorBoat_Orange",
			"Exile_Boat_MotorBoat_White",
			"Exile_Boat_SDV_CSAT",
			"Exile_Boat_SDV_Digital",
			"Exile_Boat_SDV_Grey",
			"Exile_Boat_WaterScooter",
			"Exile_Boat_RHIB"
		};
	};

	class Planes
	{
		name = "Planes";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"Exile_Plane_Cessna",
			"Exile_Plane_AN2_Green",
			"Exile_Plane_Ceasar",
			"Exile_Plane_BlackfishInfantry",
			"Exile_Plane_BlackfishVehicle"
		};
	};

	class Diving 
	{
		name = "Diving";
		icon = "a3\ui_f\data\gui\Rsc\RscDisplayArsenal\itemacc_ca.paa";
		items[] = 
		{
			"G_B_Diving",
			"G_O_Diving",
			"G_I_Diving",
			"V_RebreatherB",
			"V_RebreatherIA",
			"V_RebreatherIR",
			"U_I_Wetsuit",
			"U_O_Wetsuit",
			"U_B_Wetsuit"
		};
	}; */
};

class CfgTraders
{

/* 	class Exile_Trader_Armory
	{
		name = "ARMORY";
		showWeaponFilter = 1;
		categories[] = 
		{
			"PointerAttachments",
			"BipodAttachments",
			"MuzzleAttachments",
			"OpticAttachments",
			"Ammunition",
			"Pistols",
			"Shotguns",
			"SubMachineGuns",
			"LightMachineGuns",
			"AssaultRifles",
			"SniperRifles"
		};
	};


	class Exile_Trader_SpecialOperations
	{
		name = "SPECIAL OPERATIONS";
		showWeaponFilter = 1; // for noob tubes
		categories[] = 
		{
			"Flares",
			"Smokes",
			"UAVs",
			"StaticMGs",
			"Explosives",
			"Navigation"
		};
	}; */

	/**
	 * Uniforms, vests, helmets, backpacks
	 */
	class Exile_Trader_Equipment
	{	
		name = "Gear";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Uniforms",
			"Vests",
			"Backpacks",
			"Weapons",
			"Pistols",
			"Ammunition",
			"BipodAttachments",
			"OpticAttachments",
			"Hardware",
			"Food",
			"Drinks",
			"Tools",
			"FirstAid"
			
		};
	};


/* 	class Exile_Trader_Food
	{
		name = "FAST FOOD";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Food",
			"Drinks"
		};
	};


	class Exile_Trader_Hardware
	{
		name = "HARDWARE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Hardware",
			"Tools"
		};
	};

	class Exile_Trader_Vehicle
	{
		name = "VEHICLE";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Cars",
			"Trucks"
		};
	};


	class Exile_Trader_Aircraft
	{
		name = "AIRCRAFT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Choppers", 
			"Planes"
		};
	};


	class Exile_Trader_Boat
	{
		name = "BOAT";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Boats"
		};
	};

	class Exile_Trader_Diving
	{
		name = "DIVERS";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Diving"
		};
	};


	class Exile_Trader_CommunityCustoms
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community"
		};
	};

	class Exile_Trader_CommunityCustoms2
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community2"
		};
	};

	class Exile_Trader_CommunityCustoms3
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community3"
		};
	};

	class Exile_Trader_CommunityCustoms4
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community4"
		};
	};

	class Exile_Trader_CommunityCustoms5
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community5"
		};
	};

	class Exile_Trader_CommunityCustoms6
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community6"
		};
	};

	class Exile_Trader_CommunityCustoms7
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community7"
		};
	};

	class Exile_Trader_CommunityCustoms8
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community8"
		};
	};

	class Exile_Trader_CommunityCustoms9
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community9"
		};
	};

	class Exile_Trader_CommunityCustoms10
	{
		name = "COMMUNITY";
		showWeaponFilter = 0;
		categories[] = 
		{
			"Community10"
		};
	}; */
};
class CfgTrading 
{
	/*
	* This factor defines the difference between sales/purchase price of
	* items and vehicles. It is used if there is no sales price defined
	* in CfgExileArsenal. 
	*/
	sellPriceFactor = 0.5;
	
	rekeyPriceFactor = 0.1;

	class requiredRespect 
	{
		Level1 = 0;
		Level2 = 5000;
		Level3 = 10000;
		Level4 = 15000;
		Level5 = 20000;
		Level6 = 25000;
	};
};

/* class CfgVehicleCustoms
{
	///////////////////////////////////////////////////////////////////////////////
	// QUAD BIKES
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Bike_QuadBike_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Bike_QuadBike_Blue",		100, "Blue",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLUE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLUE_CO.paa"};},
			{"Exile_Bike_QuadBike_Red",			100, "Red",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_RED_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVRED_CO.paa"};},
			{"Exile_Bike_QuadBike_White",		100, "White",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_WHITE_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVWHITE_CO.paa"};},
			{"Exile_Bike_QuadBike_Nato",		150, "NATO",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_co.paa"};},
			{"Exile_Bike_QuadBike_Csat",		150, "CSAT",		{"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_OPFOR_CO.paa","\A3\Soft_F\Quadbike_01\Data\Quadbike_01_wheel_OPFOR_CO.paa"};},
			{"Exile_Bike_QuadBike_Fia",			150, "FIA",			{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_INDP_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_INDP_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_IG_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_IG_CO.paa"};},
			{"Exile_Bike_QuadBike_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Quadbike_01\Data\Quadbike_01_INDP_Hunter_CO.paa","\A3\soft_f_gamma\Quadbike_01\Data\Quadbike_01_wheel_INDP_Hunter_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Black",		{"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa","\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"};},
			{"Exile_Bike_QuadBike_Black",		100, "Hex",		{"\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_ghex_CO.paa","\A3\Soft_f_Exp\Quadbike_01\data\Quadbike_01_wheel_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// MOTOR BOATS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_MotorBoat_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_MotorBoat_Police",		350, "Police", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_police_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_police_co.paa"};},
			{"Exile_Boat_MotorBoat_Orange",		300, "Orange", {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_rescue_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_rescue_co.paa"};},
			{"Exile_Boat_MotorBoat_White",		300, "White",  {"\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_ext_co.paa","\a3\boat_f_gamma\Boat_Civil_01\data\Boat_Civil_01_int_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// RUBBER DUCKS
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_RubberDuck_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_RubberDuck_CSAT",		200, "CSAT", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_OPFOR_CO.paa"};},
			{"Exile_Boat_RubberDuck_Digital",	200, "Digital",{"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_INDP_CO.paa"};},
			{"Exile_Boat_RubberDuck_Orange",	150, "Orange", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_rescue_CO.paa"};},
			{"Exile_Boat_RubberDuck_Blue",		150, "Blue", {"\A3\boat_F\Boat_Transport_01\data\Boat_Transport_01_civilian_CO.paa"};},
			{"Exile_Boat_RubberDuck_Black",		150, "Black", {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SDV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_SDV_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_SDV_CSAT",		200, "CSAT", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_opfor_CO.paa"};},
			{"Exile_Boat_SDV_Digital",	200, "Digital", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_INDP_CO.paa"};},
			{"Exile_Boat_SDV_Grey",		100, "Grey", {"\A3\boat_f_beta\SDV_01\data\SDV_ext_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hellcat
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hellcat_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hellcat_Green", 350, "Green", 	{"\A3\Air_F_EPB\Heli_Light_03\data\Heli_Light_03_base_CO.paa"};},
			{"Exile_Chopper_Hellcat_FIA", 	500, "FIA", 	{"\A3\Air_F_EPB\Heli_Light_03\data\heli_light_03_base_indp_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Karts
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Kart_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Kart_BluKing", 				100, "Bluking", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_blu_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_RedStone", 			100, "RedStone", 	{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},
			{"Exile_Car_Kart_Vrana", 				100, "Vrana", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_vrana_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_vrana_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Green", 				100, "Green", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_green_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Blue", 				100, "Blue", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_blue_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Orange", 				100, "Orange",		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_orange_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_blu_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_White", 				100, "White", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_white_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Yellow", 				100, "Yellow", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_yellow_CO.paa","","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};},	
			{"Exile_Car_Kart_Black", 				100, "Black", 		{"\a3\Soft_F_Kart\Kart_01\Data\Kart_01_base_black_CO.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_01_logos_black_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_1_CA.paa","\a3\Soft_F_Kart\Kart_01\Data\Kart_num_3_CA.paa"};}	
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hummingbird (Civillian)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Hummingbird_Civillian_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Hummingbird_Civillian_Blue", 		350, "Blue", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Red", 		350, "Red", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_ION", 		350, "ION", 		{"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_BlueLine", 	350, "BlueLine", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueLine_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Digital", 	350, "Digital", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Elliptical", 	350, "Elliptical", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Furious", 	350, "Furious", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_GrayWatcher", 350, "GrayWatcher",	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_graywatcher_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Jeans", 		350, "Jeans", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Light", 		350, "Light", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_light_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Shadow", 		350, "Shadow", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_shadow_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sheriff", 	350, "Sheriff", 	{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Speedy", 		350, "Speedy", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Sunset", 		350, "Sunset", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Vrana", 		350, "Vrana", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wasp", 		350, "Wasp", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wasp_co.paa"};},
			{"Exile_Chopper_Hummingbird_Civillian_Wave", 		350, "Wave", 		{"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Huron
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huron_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huron_Black", 	450, "Black", {"\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"};},
			{"Exile_Chopper_Huron_Green", 	450, "Green", {"\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa","\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Orca
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Orca_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Orca_CSAT", 		350, "CSAT", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"};},
			{"Exile_Chopper_Orca_Black", 		350, "Black", 			{"\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"};},
			{"Exile_Chopper_Orca_BlackCustom", 	350, "Black Custom", 	{"\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_CSAT",		500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Black",	500, "BLACK", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Transport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Transport_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Transport_CSAT",	500, "CSAT", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_co.paa"};},
			{"Exile_Chopper_Taru_Transport_Black",	500, "Black", 	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_black_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_black_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Taru (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Taru_Covered_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Taru_Covered_CSAT",		500, "CSAT",	{"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_CO.paa","A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_CO.paa"};},
			{"Exile_Chopper_Taru_Covered_Black",	500, "Black",	{"A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_base_02_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext01_black_co.paa","A3\Air_F_Heli\Heli_Transport_04\Data\heli_transport_04_pod_ext02_black_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Hatchback_Rusty1", 			50, "Rusty White",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_01_co.paa"};},
			{"Exile_Car_Hatchback_Rusty2", 			50, "Rusty Red",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_02_co.paa"};},
			{"Exile_Car_Hatchback_Rusty3", 			50, "Rusty Yellow",		{"\exile_assets\model\RTV\Exile_Car_Hatchback_03_co.paa"};},
			{"Exile_Car_Hatchback_Beige", 			100, "Beige",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Hatchback_Green", 			100, "Green",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Hatchback_Blue", 			100, "Blue",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Hatchback_BlueCustom", 		100, "Blue Custom",		{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Hatchback_BeigeCustom", 	100, "Beige Custom",	{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Hatchback_Yellow", 			100, "Yellow",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE06_CO.paa"};},
			{"Exile_Car_Hatchback_Grey", 			100, "Grey",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE07_CO.paa"};},
			{"Exile_Car_Hatchback_Black", 			100, "Black",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE08_CO.paa"};},
			{"Exile_Car_Hatchback_Dark", 			100, "Dark",			{"\A3\Soft_F_Gamma\Hatchback_01\data\Hatchback_01_ext_BASE09_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Hatchback (Sport)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hatchback_Sport_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Hatchback_Sport_Red", 		100, "Red",		{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT01_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Blue", 		100, "Blue",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT02_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Orange", 	100, "Orange",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT03_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_White", 	100, "White",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT04_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Beige", 	100, "Beige",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT05_CO.paa"};},
			{"Exile_Car_Hatchback_Sport_Green", 	100, "Green",	{"\A3\soft_f_gamma\Hatchback_01\data\Hatchback_01_ext_SPORT06_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Rusty1", 		50, "Rusty White",	{"\exile_assets\model\RTV\Exile_offroad_03_co.paa","\exile_assets\model\RTV\Exile_offroad_03_co.paa"};},
			{"Exile_Car_Offroad_Rusty2", 		50, "Rusty Red",	{"\exile_assets\model\RTV\Exile_offroad_01_co.paa","\exile_assets\model\RTV\Exile_offroad_01_co.paa"};},
			{"Exile_Car_Offroad_Rusty3", 		50, "Rusty Blue",	{"\exile_assets\model\RTV\Exile_offroad_02_co.paa","\exile_assets\model\RTV\Exile_offroad_02_co.paa"};},
			{"Exile_Car_Offroad_Red", 			500, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Beige", 		500, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_White", 		500, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Blue", 			500, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed", 		500, "Dark Red",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_BlueCustom", 	500, "Blue Custom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla01", 	700, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla02", 	700, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla03", 	700, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla04", 	700, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla05", 	700, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla06", 	700, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla07", 	700, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla08", 	700, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla09", 	700, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla10", 	700, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla11", 	700, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Guerilla12", 	700, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Black", {"exile_assets\texture\vehicle\Exile_Offroad_Black_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Light Blue", {"exile_assets\texture\vehicle\Exile_Offroad_LightBlue_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Orange",{"exile_assets\texture\vehicle\Exile_Offroad_Orange_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Pink",	{"exile_assets\texture\vehicle\Exile_Offroad_Pink_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile White",	{"exile_assets\texture\vehicle\Exile_Offroad_White_co.paa"};},
			{"Exile_Car_Offroad_DarkRed",		700, "Exile Yellow",{"exile_assets\texture\vehicle\Exile_Offroad_Yellow_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Red", 250, "Red", {"Exile_psycho_LRC\data\r_lr_base_co.paa","Exile_psycho_LRC\data\r_lr_special_co.paa"};},
			{"Exile_Car_LandRover_Urban", 250, "Urban", {"Exile_psycho_LRC\data\textures\lr_base_urbancamo_co.paa","Exile_psycho_LRC\data\textures\lr_special_urbancamo_co.paa"};},
			{"Exile_Car_LandRover_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Land Rover (Ambulance)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_LandRover_Ambulance_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_LandRover_Ambulance_Green", 250, "Green", {"Exile_psycho_LRC\data\lr_acr_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_acr_spec_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Desert", 250, "Desert", {"Exile_psycho_LRC\data\lr_acrs_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};},
			{"Exile_Car_LandRover_Ambulance_Sand", 250, "Sand", {"Exile_psycho_LRC\data\lr_acr_sand_base_co.paa","Exile_psycho_LRC\data\lr_amb_ext_co.paa","Exile_psycho_LRC\data\lr_special_acr_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Octavius
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Octavius_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Octavius_White", 250, "White", {"exile_psycho_Octavia\Data\car_body_co.paa"};},
			{"Exile_Car_Octavius_Black", 250, "Black", {"exile_psycho_Octavia\Data\car_body_bl_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// UH-1H Huey (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Chopper_Huey_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Chopper_Huey_Armed_Green", 700, "Green", {"Exile_psycho_UH1H\data\uh1h_co.paa","Exile_psycho_UH1H\data\uh1h_in_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};},
			{"Exile_Chopper_Huey_Armed_Desert", 700, "Desert", {"Exile_psycho_UH1H\data\uh1d_tka_co.paa","Exile_psycho_UH1H\data\uh1d_in_tka_co.paa","Exile_psycho_UH1H\data\default_co.paa","Exile_psycho_UH1H\data\alpha_ca.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Armed)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Armed_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Armed_Guerilla01",	250, "Guerilla 01", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla02",	250, "Guerilla 02", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla03",	250, "Guerilla 03", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla04",	250, "Guerilla 04", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla05",	250, "Guerilla 05", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla06",	250, "Guerilla 06", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla07",	250, "Guerilla 07", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla08",	250, "Guerilla 08", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla09",	250, "Guerilla 09", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla10",	250, "Guerilla 10", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla11",	250, "Guerilla 11", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Armed_Guerilla12",	250, "Guerilla 12", {"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Offroad (Repair)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Offroad_Repair_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Offroad_Repair_Civillian",		150, "Civillian",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\Offroad_01_ext_repair_CIV_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Red",			150, "Red",			{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Beige",			150, "Beige",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_White",			150, "White",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Blue",			150, "Blue",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_DarkRed",		150, "DarkRed",		{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_BlueCustom",		150, "BlueCustom",	{"\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa","\a3\Soft_F\Offroad_01\data\Offroad_01_ext_BASE05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla01",		250, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_01_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla02",		250, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_02_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla03",		250, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_03_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla04",		250, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_04_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla05",		250, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_05_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla06",		250, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_06_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla07",		250, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_07_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla08",		250, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_08_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla09",		250, "Guerilla 09",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_09_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla10",		250, "Guerilla 10",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_10_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla11",		250, "Guerilla 11",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_11_CO.paa"};},
			{"Exile_Car_Offroad_Repair_Guerilla12",		250, "Guerilla 12",	{"\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa","\A3\Soft_F_Bootcamp\Offroad_01\Data\offroad_01_ext_IG_12_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUV_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUV_Red", 		100, "Red",					{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Black",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_02_CO.paa"};},
			{"Exile_Car_SUV_Grey", 		100, "Grey",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_03_CO.paa"};},
			{"Exile_Car_SUV_Orange", 	100, "Orange",				{"\A3\Soft_F_Gamma\SUV_01\Data\SUV_01_ext_04_CO.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Snow Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Snow_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo",			{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Light_co.paa"};},
			{"Exile_Car_SUV_Black", 	150, "Leaf Camo (Dark)",	{"exile_assets\texture\vehicle\Exile_SUV_Leaf_Dark_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// SUV XL
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_SUVXL_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_SUVXL_Black", 100, "Black", {""};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Red",			100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Guerilla01",	150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Guerilla02",	150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Guerilla03",	150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Guerilla04",	150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Guerilla05",	150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Guerilla06",	150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Guerilla07",	150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Guerilla08",	150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};},
			{"Exile_Car_Van_Black",	150, "Brown",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_brn_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_2_CO.paa"};},
			{"Exile_Car_Van_Black",	150, "Olive",	{"\A3\Soft_F_Exp\Van_01\Data\Van_01_ext_oli_co.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa","\A3\Soft_F_Exp\Van_01\Data\Van_01_int_base_3_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Box) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Box_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Box_Black",				100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_White",				100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_01_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_02_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_03_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla04",		150, "Guerilla 04",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_04_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_04_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla05",		150, "Guerilla 05",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_05_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_05_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla06",		150, "Guerilla 06",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_06_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_06_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla07",		150, "Guerilla 07",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_07_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_07_CO.paa"};},
			{"Exile_Car_Van_Box_Guerilla08",		150, "Guerilla 08",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_08_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_adds_IG_08_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Van (Fuel) 
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Van_Fuel_Abstract
	{
		skins[] = 
		{
			{"Exile_Car_Van_Fuel_Black",			100, "Black",		{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_black_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_White",			100, "White",		{"\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Red",				100, "Red",			{"\A3\soft_f_gamma\van_01\Data\Van_01_ext_red_CO.paa","\A3\soft_f_gamma\Van_01\Data\Van_01_tank_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla01",		150, "Guerilla 01",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_01_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_01_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla02",		150, "Guerilla 02",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_02_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_02_CO.paa"};},
			{"Exile_Car_Van_Fuel_Guerilla03",		150, "Guerilla 03",	{"\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_ext_IG_03_CO.paa","\A3\Soft_F_Bootcamp\Van_01\Data\Van_01_tank_IG_03_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Tempest
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Tempest_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Tempest", 		200, "Green Hex",	{"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa","\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ikarus
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ikarus_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ikarus_Blue", 		200, "Blue",	{"Exile_psycho_Ikarus\Data\bus_exterior_co.paa"};},
			{"Exile_Car_Ikarus_Red", 		200, "Red",		{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};},
			{"Exile_Car_Ikarus_Party", 		500, "Party",	{"Exile_psycho_Ikarus\Data\bus_exterior_eciv_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Open)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Open_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Open_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\Ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Yellow",			300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Open_Worker",			300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Open_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Ural (Covered)
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ural_Covered_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Ural_Covered_Blue",			300, "Blue",		{"Exile_psycho_Ural\data\ural_kabina_civil_co.paa","Exile_psycho_Ural\data\ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Yellow",		300, "Yellow",		{"Exile_psycho_Ural\data\ural_kabina_civ1_co.paa","Exile_psycho_Ural\data\ural_plachta_civ1_co.paa"};},
			{"Exile_Car_Ural_Covered_Worker",		300, "Worker",		{"Exile_psycho_Ural\data\ural_kabina_civ2_co.paa","Exile_psycho_Ural\data\Ural_plachta_civil_co.paa"};},
			{"Exile_Car_Ural_Covered_Military",		300, "Military",	{"Exile_psycho_Ural\data\ural_kabina_khk_co.paa","Exile_psycho_Ural\data\ural_plachta_co.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Lada
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Lada_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Lada_Green", 		100, "Green",	{"exile_psycho_lada\data\lada_eciv1_co.paa","exile_psycho_lada\data\Lada_glass_ECIV1_CA.paa"};},
			{"Exile_Car_Lada_Taxi", 		100, "Taxi",	{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Red", 			100, "Red",		{"exile_psycho_lada\data\Lada_red_CO.paa"};},
			{"Exile_Car_Lada_Hipster", 		100, "Hipster",	{"exile_psycho_lada\data\lada_eciv2_co.paa","exile_psycho_lada\data\Lada_glass_ECIV2_CA.paa"};}
		};
	};

	///////////////////////////////////////////////////////////////////////////////
	// Volha
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Volha_Abstract
	{	
		skins[] = 
		{
			{"Exile_Car_Volha_Blue", 		100, "Blue",	{"Exile_psycho_Gaz_volha\data\Volha_ECIV_CO.paa"};},
			{"Exile_Car_Volha_White", 		100, "White",	{"Exile_psycho_Gaz_volha\data\Volha_Gray_ECIV_CO.paa"};},
			{"Exile_Car_Volha_Black",		100, "Black",	{"Exile_psycho_Gaz_volha\data\Volha_Black_ECIV_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HUNTER
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Hunter_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Hunter",		1000, "Exile White Edition",	{"exile_assets\texture\vehicle\Exile_Hunter_Snow_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Snow_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Hex",				{"exile_assets\texture\vehicle\Exile_Hunter_Hex_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};},
			{"Exile_Car_Hunter",		1000, "Exile Black",			{"exile_assets\texture\vehicle\Exile_Hunter_Black_co.paa","exile_assets\texture\vehicle\Exile_Hunter_Black_Back_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// IFRIT
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Ifrit_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Ifrit",		1000, "Green Hex",	{"\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_01_ghex_CO.paa","\A3\Soft_F_Exp\MRAP_02\data\MRAP_02_ext_02_ghex_CO.paa","\A3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// HMMWV
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_HMMWV_M2_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M2_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M2_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_M134_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_M134_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_M134_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_MEV_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_MEV_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_cm.paa"};},
			{"Exile_Car_HMMWV_MEV_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_cm.paa"};}
		};
	};
	
	class Exile_Car_HMMWV_UNA_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_HMMWV_UNA_Green",		1000, "Green",	{"Exile_psycho_hmmw\data\hmmwv_body_co.paa"};},
			{"Exile_Car_HMMWV_UNA_Desert",		1000, "Desert",	{"Exile_psycho_hmmw\data\des\hmmwv_body_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// BTR40
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_BTR40_MG_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_MG_Green",		1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_MG_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	class Exile_Car_BTR40_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_BTR40_Green",			1000, "Green",	{"exile_psycho_btr40\data\btr40ext_co.paa"};},
			{"Exile_Car_BTR40_Camo",			1000, "Camo",	{"exile_psycho_btr40\data\btr40extcamo_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Golf
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Car_Golf_Abstract
	{
		skins[] = 
		{
			
			{"Exile_Car_Golf_Red",				1000, "Red",	{"exile_psycho_VWGolf\data\vwgolf_body_co.paa"};},
			{"Exile_Car_Golf_Black",			1000, "Black",	{"exile_psycho_VWGolf\data\texture\black_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// AN-2
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Plane_AN2_Abstract
	{
		skins[] = 
		{
			{"Exile_Plane_AN2_Green", 700, "Green", {"Exile_psycho_An2\data\an2_1_co.paa","Exile_psycho_An2\data\an2_2_co.paa","Exile_psycho_An2\data\an2_wings_co.paa"};},
			{"Exile_Plane_AN2_White", 700, "Red, White & Blue", {"Exile_psycho_An2\data\an2_1_a_co.paa",
		"Exile_psycho_An2\data\an2_2_a_co.paa","Exile_psycho_An2\data\an2_wings_a_co.paa"};},
			{"Exile_Plane_AN2_Stripe", 700, "Green Stripe", {"Exile_psycho_An2\data\an2_1_b_co.paa","Exile_psycho_An2\data\an2_2_b_co.paa","Exile_psycho_An2\data\an2_wings_b_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// RHIB
	///////////////////////////////////////////////////////////////////////////////
	class B_G_Boat_Transport_02_F
	{
		skins[] = 
		{
			{"Exile_Boat_RHIB",		150, "Blue", {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa","\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_civilian_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Water Scooter
	///////////////////////////////////////////////////////////////////////////////
	class Exile_Boat_WaterScooter_Abstract
	{
		skins[] = 
		{
			{"Exile_Boat_WaterScooter",		150, "Blue", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Grey", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Lime", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Red", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "White", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"};},
			{"Exile_Boat_WaterScooter",		150, "Yellow", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Ceasar BTT
	///////////////////////////////////////////////////////////////////////////////
	class C_Plane_Civil_01_F
	{
		skins[] = 
		{
			{"Exile_Plane_Ceasar",		150, "Racing (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Racing", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Red Line (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Tribal", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave (Tan Interior)", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"};},
			{"Exile_Plane_Ceasar",		150, "Blue Wave", {"A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa","A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Infantry Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_infantry_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishInfantry",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// V-44 X Blackfish (Vehicle Transport)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_VTOL_01_vehicle_F
	{
		skins[] = 
		{
			{"Exile_Plane_BlackfishVehicle",		150, "Blue", {"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa","\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Light)
	///////////////////////////////////////////////////////////////////////////////
	class B_CTRG_LSV_01_light_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerLight",		150, "Black", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_black_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_black_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerLight",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Prowler (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class B_T_LSV_01_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_ProwlerUnarmed",		150, "Olive", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Dazzle", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_olive_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_olive_CO.paa"};},
			{"Exile_Car_ProwlerUnarmed",		150, "Sand", {"\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_01_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_02_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_03_sand_CO.paa","\A3\Soft_F_Exp\LSV_01\Data\NATO_LSV_Adds_sand_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// Qilin (Unarmed)
	///////////////////////////////////////////////////////////////////////////////
	class O_T_LSV_02_unarmed_black_F
	{
		skins[] = 
		{
			{"Exile_Car_QilinUnarmed",		150, "Arid", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"};},
			{"Exile_Car_QilinUnarmed",		150, "Green Hex", {"\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa","\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"};}
		};
	};
	
	///////////////////////////////////////////////////////////////////////////////
	// MB 4WD
	///////////////////////////////////////////////////////////////////////////////
	class C_Offroad_02_unarmed_orange_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WD",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};},
			{"Exile_Car_MB4WD",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WD",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};}
		};
	};
	
	class I_C_Offroad_02_unarmed_F
	{
		skins[] = 
		{
			{"Exile_Car_MB4WDOpen",		150, "Black", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Blue", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Brown", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_brown_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Green", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Orange", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Red", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "White", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"};},
			{"Exile_Car_MB4WDOpen",		150, "Olive", {"\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa","\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_olive_co.paa"};}
		};
	};
};
 */
class CfgVehicleTransport 
{
	class Exile_Container_SupplyBox
	{
		vehicles[] = {"Exile_Car_Van_Abstract", "Exile_Car_Offroad_Abstract", "Exile_Car_Zamak_Abstract", "Exile_Car_HEMMT_Abstract", "Exile_Car_Tempest_Abstract"};

		class Exile_Car_Van_Abstract
		{
			attachPosition[] = {0, -1.1, 0.2};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0, -4.4};
		};

		class Exile_Car_Offroad_Abstract
		{
			attachPosition[] = {0, -1.6, 0.4};
			cargoIndizes[] = {1, 2, 3, 4}; 
			detachPosition[] = {0, -4};
		};

		class Exile_Car_Zamak_Abstract
		{
			attachPosition[] = {0.03, 0.3, 0};
			cargoIndizes[] = {2, 3, 4, 5, 6, 7}; 
			detachPosition[] = {0.03, -4.8};
		};

		class Exile_Car_HEMMT_Abstract
		{
			attachPosition[] = {0.05, -0.1, 0.3};
			cargoIndizes[] = {1, 2, 8, 9}; 
			detachPosition[] = {0.05, -6.1};
		};

		class Exile_Car_Tempest_Abstract
		{
			attachPosition[] = {0.08, -0.85, 0.4};
			cargoIndizes[] = {1, 6, 7, 9}; 
			detachPosition[] = {0.08, -6};
		};
	};
};
