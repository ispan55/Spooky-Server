/*
	///////////////////////////////////////////////////////////////////////////////
	// Class Names
	///////////////////////////////////////////////////////////////////////////////

	Remember that item class names, group names and loot table names cannot 
	contain spaces. Also be 100% sure to have the exact same name as in Arma,
	as they are *case sensive*.

	///////////////////////////////////////////////////////////////////////////////
	// Item Groups
	///////////////////////////////////////////////////////////////////////////////

	You can link one group of items to loot tables.
	One item should only be in one group.

	Syntax:
	> <Group Name>
	<Spawn Chance Within Group>,<Item Class Name>

	///////////////////////////////////////////////////////////////////////////////
	// Propability
	///////////////////////////////////////////////////////////////////////////////

	<Spawn Chance>,<Item>

	10, Banana
	20, Tomato
	30, Cherry

	Sum of chances:
	10 + 20 + 30 = 60 = 100%

	Spawn chances:
	Banana	10 : 60 = 10 * 100 / 60 = 16.67%
	Tomato	20 : 60 = 20 * 100 / 60 = 33.33%
	Cherry	30 : 60 = 30 * 100 / 60 = 50%

	In words: 
	If Exile should spawn an item of the above group, it has a 33.33%
	chance to spawn a Tomato.
*/
	
/*
	Item Groups
*/

///////////////////////////////////////////////////////////////////////////////
// Food & Drinks
///////////////////////////////////////////////////////////////////////////////

> FoodAndDrink
3, Exile_Item_CookingPot
10, Exile_Item_CanOpener
10, Exile_Item_Matches
10, Exile_Item_EMRE						// 75% Hunger
10, Exile_Item_GloriousKnakworst			// 60% Hunger
10, Exile_Item_Surstromming				// 55% Hunger
10, Exile_Item_SausageGravy				// 50% Hunger
10, Exile_Item_ChristmasTinner			// 40% Hunger
10, Exile_Item_MacasCheese				// 40% Hunger
10, Exile_Item_BBQSandwich				// 40% Hunger
10, Exile_Item_CatFood					// 40% Hunger
10, Exile_Item_Dogfood					// 30% Hunger
10, Exile_Item_BeefParts					// 30% Hunger
10, Exile_Item_Cheathas					// 30% Hunger
10, Exile_Item_DsNuts					// 30% Hunger
10, Exile_Item_Noodles					// 25% Hunger
10, Exile_Item_CockONut					// 20% Hunger
10, Exile_Item_SeedAstics				// 20% Hunger
10, Exile_Item_Raisins					// 15% Hunger
10, Exile_Item_Moobar					// 10% Hunger
10, Exile_Item_InstantCoffee
25, Exile_Item_PowerDrink					// +95% Thirst
25, Exile_Item_PlasticBottleFreshWater		// +80% Thirst
25, Exile_Item_Beer							// +75% Thirst
25, Exile_Item_EnergyDrink					// +75% Thirst
25, Exile_Item_MountainDupe					// +50% Thirst, spawns always twice!	
25, Exile_Item_ChocolateMilk				// +35% Thirst		// +10% Thirst
25, Exile_Item_PlasticBottleCoffee

///////////////////////////////////////////////////////////////////////////////
// Weapons & Attachments
///////////////////////////////////////////////////////////////////////////////

> Pistols
10, CUP_hgun_Compact // CZ 75 Compact
10, CUP_hgun_Glock17 // G17
3, hlc_smg_mp5k // HK MP5K
10, CUP_hgun_Colt1911 // 1911
10, CUP_hgun_M9 // M9
10, CUP_hgun_Makarov // Makarov
3, CUP_hgun_MicroUzi // Micro UZI
10, CUP_hgun_SA61 // Sa-61
10, CUP_hgun_TaurusTracker455 // Taurus

> Bipods
10, bipod_01_F_snd  //Bipod (Sand) [NATO]
10, bipod_01_F_blk  //Bipod (Black) [NATO]
10, bipod_01_F_mtp  //Bipod (MTP) [NATO]
10, bipod_02_F_blk  //Bipod (Black) [CSAT]
10, bipod_02_F_tan  //Bipod (Tan) [CSAT]
10, bipod_02_F_hex  //Bipod (Hex) [CSAT]
10, bipod_03_F_blk  //Bipod (Black) [AAF]
10, bipod_03_F_oli  //Bipod (Olive) [AAF]
10, bipod_01_F_khk  //Bipod (Khaki) [NATO]
10, CUP_bipod_Harris_1A2_L  //Harris 1A2-L Bipod (worn)
10, CUP_bipod_VLTOR_Modpod  //VLTOR Modpod Bipod (tan)
10, HLC_Bipod_G36  //G36 Bipod

> Supressors
10, muzzle_snds_M  //Sound Suppressor (5.56 mm)
10, hlc_muzzle_300blk_KAC  //QD .300BLK Suppressor
10, hlc_muzzle_556NATO_KAC  //Gemtech Halo 5.56mm Suppressor
10, hlc_muzzle_Tundra  //Gemtech Tundra (9mm)
10, muzzle_snds_H  //Sound Suppressor (6.5 mm)
10, muzzle_snds_L  //Sound Suppressor (9 mm)
10, muzzle_snds_B  //Sound Suppressor (7.62 mm)
10, muzzle_snds_H_MG  //Sound Suppressor MG
10, muzzle_snds_H_SW  //Sound Suppressor MG
10, muzzle_snds_acp  //Sound Suppressor (.45 ACP)
1, muzzle_snds_338_black  //Sound Suppressor (.338, Black)
1, muzzle_snds_338_green  //Sound Suppressor (.338, Green)
1, muzzle_snds_338_sand  //Sound Suppressor (.338, Sand)
1, muzzle_snds_93mmg  //Sound Suppressor (9.3mm, Black)
1, muzzle_snds_93mmg_tan  //Sound Suppressor (9.3mm, Tan)
5, muzzle_snds_H_khk_F  //Sound Suppressor (6.5 mm, Khaki)
5, muzzle_snds_H_snd_F  //Sound Suppressor (6.5 mm, Sand)
10, muzzle_snds_m_khk_F  //Sound Suppressor (5.56 mm, Khaki)
10, muzzle_snds_m_snd_F  //Sound Suppressor (5.56 mm, Sand)
3, muzzle_snds_58_blk_F  //Stealth Sound Suppressor (5.8 mm, Black)
3, muzzle_snds_58_wdm_F  //Stealth Sound Suppressor (5.8 mm, Green Hex)
3, muzzle_snds_58_ghex_F  //Stealth Sound Suppressor (5.8 mm, Green Hex)
3, muzzle_snds_58_hex_F  //Stealth Sound Suppressor (5.8 mm, Hex)
5, muzzle_snds_B_khk_F  //Sound Suppressor (7.62 mm, Khaki)
5, muzzle_snds_B_snd_F  //Sound Suppressor (7.62 mm, Sand)
3, muzzle_snds_65_TI_blk_F  //Stealth Sound Suppressor (6.5 mm, Black)
3, muzzle_snds_65_TI_hex_F  //Stealth Sound Suppressor (6.5 mm, Hex)
3, muzzle_snds_65_TI_ghex_F  //Stealth Sound Suppressor (6.5 mm, Green Hex)
5, muzzle_snds_H_MG_blk_F  //Sound Suppressor MG
5, muzzle_snds_H_MG_khk_F  //Sound Suppressor MG
10, CUP_muzzle_PBS4  //PBS-4 silencer
10, CUP_muzzle_PB6P9  //PB 6P9 silencer
10, CUP_muzzle_Bizon  //PBS-1 Silencer
10, CUP_muzzle_snds_M9  //Silencer (M9)
10, CUP_muzzle_snds_MicroUzi  //Silencer (MicroUZI)
10, hlc_muzzle_545SUP_AK  //PBS4 AK Suppressor
10, hlc_muzzle_762SUP_AK  //PBS1 AK Suppressor
10, muzzle_HBADGER  //Honeybadger Suppressor
10, hlc_muzzle_snds_AUG  //KAC M4-2000
10, hlc_muzzle_snds_a6AUG  //AWC Agenda Six (AUG-Thread)
10, hlc_muzzle_snds_fal  //FAL Suppressor
10, hlc_muzzle_snds_g3  //G3 Suppressor
10, hlc_muzzle_snds_HK33  //HK33 Suppressor
10, hlc_muzzle_snds_M14  //M14 Suppressor
10, hlc_muzzle_Agendasix  //AWC Agenda Six (9mm)
10, hlc_muzzle_Agendasix10mm  //AWC Agenda Six (10mm)
5, CUP_muzzle_snds_AWM  //Silencer L115A1/AWM
5, CUP_muzzle_snds_G36_black  //G36 Silencer (Black)
5, CUP_muzzle_snds_G36_desert  //G36 Silencer (Desert)
10, CUP_muzzle_snds_L85  //L85 Silencer
10, CUP_acc_sffh  //Surefire FlashHider
10, CUP_acc_bfa  //BFA
10, CUP_muzzle_snds_M110  //M110 Silencer
10, CUP_muzzle_snds_M14  //Silencer (M14)
5, CUP_muzzle_snds_M16_camo  //M16 / M4 Silencer (Camo)
5, CUP_muzzle_snds_M16  //M16 / M4 Silencer (Black)
10, CUP_muzzle_snds_Mk12  //Mk12 SPR Silencer
10, CUP_muzzle_snds_SCAR_L  //Mk16 Silencer
10, CUP_muzzle_mfsup_SCAR_L  //Mk16 Flash Hider
10, CUP_muzzle_snds_SCAR_H  //Mk17 Silencer
10, CUP_muzzle_mfsup_SCAR_H  //Mk17 Flash Hider
10, CUP_muzzle_snds_XM8  //XM8 Silencer

> Pointers
10, acc_flashlight  //Flashlight
10, acc_pointer_IR  //IR Laser Pointer
10, CUP_item_CDF_dogtags  //CDF Dogtags
10, CUP_item_Cobalt_File  //Cobalt File
10, CUP_Mxx_camo  //M24/M40 camo
10, CUP_Mxx_camo_half  //M24/M40 camo half
10, CUP_acc_Glock17_Flashlight  //Glock 17 Flashlight
10, CUP_SVD_camo_g  //SVD camo green
10, CUP_SVD_camo_g_half  //SVD half camo green
10, CUP_SVD_camo_d  //SVD camo desert
10, CUP_SVD_camo_d_half  //SVD half camo desert
10, CUP_acc_ANPEQ_15  //AN/PEQ-15 Laser
10, CUP_acc_ANPEQ_2  //AN/PEQ-2 Laser
10, CUP_acc_Flashlight  //Flashlight (Black)
10, CUP_acc_Flashlight_wdl  //Flashlight (Woodland)
10, CUP_acc_Flashlight_desert  //Flashlight (Desert)
10, CUP_acc_XM8_light_module  //XM8 Underbarrel Light Module
10, CUP_acc_ANPEQ_2_camo  //AN/PEQ-2 Laser (Camo)
10, CUP_acc_ANPEQ_2_desert  //AN/PEQ-2 Laser (Desert)
10, CUP_acc_ANPEQ_2_grey  //AN/PEQ-2 Laser (Grey)
10, CUP_acc_CZ_M3X  //CZ M3X Pistol Flashlight
10, CUP_acc_LLM  //LLM MKIII
10, hlc_acc_Surefiregrip  //Surefire Weaponlight

> Optics
10, optic_Arco  //ARCO
10, optic_Hamr  //RCO
10, optic_Aco  //ACO (Red)
10, optic_ACO_grn  //ACO (Green)
10, optic_Aco_smg  //ACO SMG (Red)
10, optic_ACO_grn_smg  //ACO SMG (Green)
10, optic_Holosight  //Mk17 Holosight
10, optic_Holosight_smg  //Mk17 Holosight SMG
10, optic_SOS  //MOS
10, optic_MRCO  //MRCO
2, optic_NVS  //NVS
10, optic_DMS  //DMS
10, optic_Yorris  //Yorris J2
10, optic_MRD  //MRD
10, optic_LRPS  //LRPS
10, optic_AMS  //AMS (Black)
10, optic_AMS_khk  //AMS (Khaki)
10, optic_AMS_snd  //AMS (Sand)
10, optic_KHS_blk  //Kahlia (Black)
10, optic_KHS_hex  //Kahlia (Hex)
10, optic_KHS_old  //Kahlia (Old)
10, optic_KHS_tan  //Kahlia (Tan)
10, optic_Arco_blk_F  //ARCO (Black)
10, optic_Arco_ghex_F  //ARCO (Green Hex)
10, optic_DMS_ghex_F  //DMS (Green Hex)
10, optic_Hamr_khk_F  //RCO (Khaki)
10, optic_ERCO_blk_F  //ERCO (Black)
10, optic_ERCO_khk_F  //ERCO (Khaki)
10, optic_ERCO_snd_F  //ERCO (Sand)
10, optic_SOS_khk_F  //MOS (Khaki)
10, optic_LRPS_tna_F  //LRPS (Tropic)
10, optic_LRPS_ghex_F  //LRPS (Green Hex)
10, optic_Holosight_blk_F  //Mk17 Holosight (Black)
10, optic_Holosight_khk_F  //Mk17 Holosight (Khaki)
10, optic_Holosight_smg_blk_F  //Mk17 Holosight SMG (Black)
10, CUP_optic_PSO_1  //PSO-1 Scope
10, CUP_optic_PSO_3  //PSO-3 Scope
10, CUP_optic_Kobra  //Kobra Reflex Sight
1, CUP_optic_NSPU  //NSPU Scope / 1PN34
10, CUP_optic_PechenegScope  //Pecheneg 1P78 Scope
10, CUP_optic_SB_3_12x50_PMII  //Schmidt and Bender 3-12x60 PM II
10, CUP_optic_LeupoldMk4  //Leupold Mk4
10, CUP_optic_HoloBlack  //EoTech Holo (Black)
10, CUP_optic_HoloWdl  //EoTech Holo (Woodland)
10, CUP_optic_HoloDesert  //EoTech Holo (Desert)
10, CUP_optic_Eotech533  //EoTech 533 HWS (Tan)
10, CUP_optic_Eotech533Grey  //EoTech 533 HWS (Grey)
10, CUP_optic_CompM4  //Aimpoint CompM4 (Black)
10, CUP_optic_SUSAT  //SUSAT L9A1
10, CUP_optic_ACOG  //Trijicon ACOG TA31F
10, CUP_optic_Leupold_VX3  //Leupold VX-3 4.5-14x50mm
1, CUP_optic_AN_PVS_10  //AN/PVS-10 NVS
10, CUP_optic_CompM2_Black  //M68 CCO (Black)
10, CUP_optic_CompM2_Woodland  //M68 CCO (Woodland)
10, CUP_optic_CompM2_Woodland2  //M68 CCO (Woodland 2)
10, CUP_optic_CompM2_Desert  //M68 CCO (Desert)
10, CUP_optic_RCO  //Trijicon ACOG
10, CUP_optic_RCO_desert  //Trijicon ACOG (Desert)
10, CUP_optic_LeupoldM3LR  //Leupold Mark 4 3-9x36mm MR/T
10, CUP_optic_LeupoldMk4_10x40_LRT_Desert  //Leupold Mark 4 10x40mm LR/T (Desert)
10, CUP_optic_LeupoldMk4_10x40_LRT_Woodland  //Leupold Mark 4 10x40mm LR/T (Woodland)
10, CUP_optic_ElcanM145  //Elcan M145
10, CUP_optic_LeupoldMk4_CQ_T  //Leupold Mk4 CQ/T 1-3x14mm
10, CUP_optic_ELCAN_SpecterDR  //Elcan SpecterDR
10, CUP_optic_LeupoldMk4_MRT_tan  //Leupold Mk4 MR/T (Tan)
10, CUP_optic_SB_11_4x20_PM  //Schmidt and Bender 1.1-4x20 PM ShortDot
10, CUP_optic_ZDDot  //Meopta ZD-Dot
10, CUP_optic_MRad  //Meopta Rapid Acquisition Dot
10, CUP_optic_TrijiconRx01_desert  //Trijicon Rx01 Red Dot sight (Desert)
10, CUP_optic_TrijiconRx01_black  //Trijicon Rx01 Red Dot sight (Black)
1, CUP_optic_AN_PVS_4  //AN/PVS-4 NVS
10, CUP_optic_Elcan  //Elcan Optic
10, CUP_optic_Elcan_reflex  //Elcan Optic Reflex
10, HLC_Optic_PSO1  //PSO-1M
10, HLC_Optic_1p29  //1P29
10, hlc_optic_kobra  //Kobra Sight
10, hlc_optic_suit  //SUIT
1, hlc_optic_PVS4FAL  //AN/PVS4(FAL-Mount)
2, HLC_Optic_G36dualoptic35x  //G36 Dual-Optic 3.5x
2, HLC_Optic_G36dualoptic35x2d  //G36 Dual-Optic 3.5x(2D)
2, HLC_Optic_G36Export35x  //G36 Export Optic 3.5x
2, HLC_Optic_G36Export35x2d  //G36 Export Optic 3.5x(2D)
2, HLC_Optic_G36Dualoptic15x  //G36 Dual-Optic 1.5x
2, HLC_Optic_G36Dualoptic15x2d  //G36 Dual-Optic 1.5x(2D)
2, HLC_Optic_G36Export15x  //G36 Export Optic 1.5x
2, HLC_Optic_G36Export15x2d  //G36 Export Optic 1.5x(2D)
5, HLC_Optic_ZFSG1  //Zeiss Diavari
10, hlc_optic_accupoint_g3  //Accupoint TR20
1, hlc_optic_PVS4G3  //AN/PVS4(G3-Mount)
1, hlc_optic_artel_m14  //Redfield AR-TEL
10, hlc_optic_PVS4M14  //AN/PVS4(M14-Mount)
10, hlc_optic_LRT_m14  //Leupold LR/T
1, hlc_optic_Kern  //Kern AARAU 4x24
1, hlc_optic_Kern2d  //Kern AARAU 4x24(2D)
1, CUP_optic_NSPU_RPG  //NSPU (1PN58)

> AllAmmo
10, CUP_10Rnd_9x19_Compact //*****
10, CUP_17Rnd_9x19_glock17
10, hlc_30Rnd_9x19_B_MP5
10, CUP_7Rnd_45ACP_1911
10, CUP_15Rnd_9x19_M9             // Pistol
10, CUP_8Rnd_9x18_Makarov_M
10, CUP_30Rnd_9x19_UZI
10, CUP_20Rnd_B_765x17_Ball_M
10, CUP_6Rnd_45ACP_M //*****
//
10, CUP_8Rnd_B_Beneli_74Slug // shotgun slug
10, CUP_8Rnd_B_Beneli_74Pellets // shotgun pellets
10, CUP_10x_303_M // enfield ammo
10, CUP_30Rnd_9x19_MP5 // MP5 ammo
10, CUP_8Rnd_B_Saiga12_74Slug_M //saiga slugs
10, CUP_8Rnd_B_Saiga12_74Pellets_M // saiga pellets
10, CUP_64Rnd_9x19_Bizon_M // bizon ammo
10, CUP_5x_22_LR_17_HMR_M // cz-550 ammo
10, hlc_5rnd_3006_1903 // M1903A1 ammo
//
10, hlc_30Rnd_762x39_b_ak //*****
10, hlc_30Rnd_762x39_t_ak
10, hlc_45Rnd_762x39_m_rpk
10, hlc_45Rnd_762x39_t_rpk       // 7.62 AK
10, hlc_30rnd_762x39_s_ak
10, 30Rnd_762x39_Mag_F
10, 30Rnd_762x39_Mag_Green_F
10, 30Rnd_762x39_Mag_Tracer_F
10, 30Rnd_762x39_Mag_Tracer_Green_F //*****
//
10, hlc_30Rnd_545x39_B_AK //*****
10, hlc_30Rnd_545x39_t_ak
10, hlc_30Rnd_545x39_EP_ak
10, hlc_45Rnd_545x39_t_rpk
10, hlc_30Rnd_545x39_S_AK        // 5.45 AK
10, hlc_60Rnd_545x39_t_rpk
10, 30Rnd_545x39_Mag_F
10, 30Rnd_545x39_Mag_Green_F
10, 30Rnd_545x39_Mag_Tracer_F
10, 30Rnd_545x39_Mag_Tracer_Green_F //*****
//
10, hlc_30rnd_556x45_EPR //*****
10, hlc_30rnd_556x45_SOST
10, hlc_30rnd_556x45_SPR      // NI Arsenal 5.56
10, hlc_30rnd_556x45_MDim
10, hlc_30rnd_556x45_TDim
10, hlc_50rnd_556x45_EPR //*****
//
10, 30Rnd_556x45_Stanag //*****
10, 30Rnd_556x45_Stanag_Tracer_Red
10, 30Rnd_556x45_Stanag_Tracer_Green
10, 30Rnd_556x45_Stanag_Tracer_Yellow    // Vanilla 5.56
10, 30Rnd_556x45_Stanag_green
10, 30Rnd_556x45_Stanag_red
10, 150Rnd_556x45_Drum_Mag_Tracer_F
10, 150Rnd_556x45_Drum_Mag_F //*****
//
10, 29rnd_300BLK_STANAG_T // .300 BLK STANAG Tracer
10, 29rnd_300BLK_STANAG // .300 BLK STANAG
//
10, hlc_20Rnd_762x51_B_fal //*****
10, hlc_20Rnd_762x51_mk316_fal
10, hlc_20Rnd_762x51_barrier_fal       // NIA FAL/CAL C1A1/Enfield L1A1 SLR/FN LAR/Lithgow SLR
10, hlc_20Rnd_762x51_T_fal
10, hlc_20Rnd_762x51_TDim_fal
10, hlc_20Rnd_762x51_S_fal
10, hlc_50rnd_762x51_M_FAL //*****
//
10, 100Rnd_580x42_Mag_F // CAR-95 LMG 5.8 100rnd Mag
10, 100Rnd_580x42_Mag_Tracer_F // CAR-95 LMG 5.8 100rnd TRacer (Green) Mag
10, 30Rnd_580x42_Mag_F // CAR-95 5.8mm 30rnd mag
10, 30Rnd_580x42_Mag_Tracer_F // CAR-95 5.8mm 30rnd Tracer (Green) mag
10, 20Rnd_650x39_Cased_Mag_F // CMR-76 6.5mm 20rnd mag
//
10, CUP_100Rnd_TE1_Yellow_Tracer_556x45_BetaCMag //*****
10, CUP_100Rnd_TE1_Green_Tracer_556x45_BetaCMag
10, CUP_100Rnd_TE1_Red_Tracer_556x45_BetaCMag      // CUP Beta C-Mag
10, CUP_100Rnd_556x45_BetaCMag //*****
//
10, CUP_20Rnd_762x51_CZ805B //*****
10, CUP_20Rnd_TE1_Yellow_Tracer_762x51_CZ805B
10, CUP_20Rnd_TE1_Red_Tracer_762x51_CZ805B         // CZ BREN B1 Ammo
10, CUP_20Rnd_TE1_Green_Tracer_762x51_CZ805B
10, CUP_20Rnd_TE1_White_Tracer_762x51_CZ805B //*****
//
10, hlc_200rnd_556x45_M_SAW //*****
10, hlc_200rnd_556x45_Mdim_SAW
10, hlc_200rnd_556x45_T_SAW
10, hlc_200rnd_556x45_B_SAW           // 5.56 LMG
10, 200Rnd_556x45_Box_F
10, 200Rnd_556x45_Box_Red_F
10, 200Rnd_556x45_Box_Tracer_F
10, 200Rnd_556x45_Box_Tracer_Red_F //*****
//
10, hlc_20rnd_762x51_b_G3 //*****
10, hlc_20rnd_762x51_Mk316_G3
10, hlc_20rnd_762x51_barrier_G3
10, hlc_20rnd_762x51_T_G3
10, hlc_20rnd_762x51_IRDim_G3        // HK G3 
10, hlc_20rnd_762x51_MDim_G3
10, hlc_50rnd_762x51_M_G3
10, hlc_50rnd_762x51_MDIM_G3
10, hlc_20rnd_762x51_S_G3 //*****
//
10, 30Rnd_65x39_caseless_mag //*****
10, 30Rnd_65x39_caseless_mag_Tracer
10, 100Rnd_65x39_caseless_mag_Tracer        // 6.5mm vanilla
10, 30Rnd_65x39_caseless_green
10, 100Rnd_65x39_caseless_mag //*****
//
10, hlc_30rnd_556x45_EPR_G36 //*****
10, hlc_30rnd_556x45_SOST_G36
10, hlc_100rnd_556x45_EPR_G36
10, hlc_30rnd_556x45_SPR_G36               // NIA HK G36
10, hlc_30rnd_556x45_Tracers_G36
10, hlc_30rnd_556x45_MDIM_G36
10, hlc_30rnd_556x45_TDIM_G36 //*****
//
10, hlc_30rnd_556x45_b_HK33 //*****
10, hlc_30rnd_556x45_mdim_HK33
10, hlc_30rnd_556x45_tdim_HK33
10, hlc_30rnd_556x45_SOST_HK33       // NIA HK53/HK33
10, hlc_30rnd_556x45_EPR_HK33
10, hlc_30rnd_556x45_t_HK33 //*****
//
10, CUP_20Rnd_B_AA12_Pellets // AA-12 Pellets
10, CUP_20Rnd_B_AA12_74Slug // AA-12 Slugs
10, CUP_20Rnd_762x51_L129_M // L129a1 7.62 20rnd
//
10, CUP_20Rnd_762x51_B_M110 //*****
10, CUP_20Rnd_TE1_Yellow_Tracer_762x51_M110
10, CUP_20Rnd_TE1_Red_Tracer_762x51_M110          // CUP M110
10, CUP_20Rnd_TE1_Green_Tracer_762x51_M110
10, CUP_20Rnd_TE1_White_Tracer_762x51_M110 //*****
//
10, CUP_20Rnd_762x51_DMR //*****
10, CUP_20Rnd_TE1_Yellow_Tracer_762x51_DMR
10, CUP_20Rnd_TE1_Red_Tracer_762x51_DMR         // CUP DMR
10, CUP_20Rnd_TE1_Green_Tracer_762x51_DMR
10, CUP_20Rnd_TE1_White_Tracer_762x51_DMR //*****
//
10, CUP_5Rnd_762x51_M24 // M24
10, 20Rnd_762x51_Mag // 7.62 20rnd vanilla
//
10, hlc_100Rnd_762x51_M_M60E4 //*****
10, hlc_100Rnd_762x51_B_M60E4
10, hlc_100Rnd_762x51_Barrier_M60E4
10, hlc_100Rnd_762x51_T_M60E4              // 7.62 LMG
10, hlc_100Rnd_762x51_Mdim_M60E4
10, 150Rnd_762x51_Box
10, 150Rnd_762x51_Box_Tracer //*****
//
10, CUP_20Rnd_762x51_B_SCAR //*****
10, CUP_20Rnd_TE1_Yellow_Tracer_762x51_SCAR
10, CUP_20Rnd_TE1_Red_Tracer_762x51_SCAR        // CUP Mk17
10, CUP_20Rnd_TE1_Green_Tracer_762x51_SCAR
10, CUP_20Rnd_TE1_White_Tracer_762x51_SCAR //*****
//
10, 200Rnd_65x39_cased_Box_Tracer // Mk200 Tracer
10, 200Rnd_65x39_cased_Box // Mk200
10, CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M // PKP
//
10, CUP_30Rnd_Sa58_M_TracerG //*****
10, CUP_30Rnd_Sa58_M_TracerR            // Sa58 ammo
10, CUP_30Rnd_Sa58_M_TracerY
10, CUP_30Rnd_Sa58_M //*****
//
10, hlc_20Rnd_762x51_b_amt //*****
10, hlc_20Rnd_762x51_mk316_amt
10, hlc_20Rnd_762x51_bball_amt    // SG510-4/AMT 
10, hlc_20Rnd_762x51_T_amt //*****
//
10, hlc_24Rnd_75x55_B_stgw //*****
10, hlc_24Rnd_75x55_ap_stgw          // SIG Stgw.57
10, hlc_24Rnd_75x55_T_stgw //*****
//
10, CUP_10Rnd_762x54_SVD_M // SVD
//
10, hlc_20Rnd_762x51_B_M14 //*****
10, hlc_20Rnd_762x51_barrier_M14
10, hlc_20Rnd_762x51_mk316_M14
10, hlc_20Rnd_762x51_T_M14
10, hlc_20Rnd_762x51_Mdim_M14      // NIA M14
10, hlc_20Rnd_762x51_Tdim_M14
10, hlc_20Rnd_762x51_S_M14
10, hlc_50Rnd_762x51_B_M14 //*****
//
10, CUP_20Rnd_9x39_SP5_VSS_M // VSS 20rnd
10, CUP_10Rnd_9x39_SP5_VSS_M // VSS 10rnd
//
10, hlc_30Rnd_556x45_B_AUG //*****
10, hlc_30Rnd_556x45_SOST_AUG
10, hlc_30Rnd_556x45_SPR_AUG
10, hlc_30Rnd_556x45_T_AUG
10, hlc_30Rnd_556x45_MDIM_AUG            // NIA AUG
10, hlc_30Rnd_556x45_TDIM_AUG
10, hlc_40Rnd_556x45_B_AUG
10, hlc_40Rnd_556x45_SOST_AUG
10, hlc_40Rnd_556x45_SPR_AUG
10, hlc_40Rnd_556x45_TDIM_AUG //*****

> CivilianWeapons
10, CUP_sgun_M1014 // M1014
10, CUP_srifle_LeeEnfield_rail // Lee Enfield Railed
10, CUP_smg_MP5A5 // MP5
10, CUP_smg_MP5SD6 // MP5SD
10, CUP_sgun_Saiga12K // Saiga 12k
10, CUP_smg_bizon // Bizon
10, CUP_srifle_CZ550 // CZ-550 scoped
10, hlc_rifle_M1903A1 // M1903A1
10, hlc_rifle_M1903A1_unertl // M1903A1 Sniper

> AssaultRifleLow
5, hlc_rifle_aks74u_MTK // AKS74U(MTK)
5, hlc_rifle_aks74u // AKS74U
5, hlc_rifle_aks74_MTK // AKS74(MTK)
5, hlc_rifle_aks74_GL // AKS74(GL)
5, hlc_rifle_aks74 // AKS74
5, hlc_rifle_ak74m_MTK // AK74M(MTK)
5, hlc_rifle_ak74m_gl // AK74M(GL)
5, hlc_rifle_ak74m // AK74M
5, hlc_rifle_ak74 // AK74
5, hlc_rifle_ak74_MTK // AK74(MTK)
5, hlc_rifle_ak12 // AK12
5, hlc_rifle_ak12GL // AK12GL
5, hlc_rifle_aku12 // AK12U
10, hlc_rifle_RU5562 // AR15 Magpul Carbine
10, hlc_rifle_RU556 // Ar15 Sanitised Carbine
10, hlc_rifle_bcmjack // BCM 'Jack' Carbine
10, arifle_CTAR_blk_F // CAR-95 5.8mm
10, hlc_rifle_Colt727 // Colt Carbine
10, hlc_rifle_Colt727_GL // Colt Carbine GL
10, hlc_rifle_M4 // Colt M4 Carbine
10, hlc_rifle_m4m203 // Colt M4 Carbine GL
10, hlc_rifle_CQBR // Colt M4 CQB-R
10, CUP_arifle_CZ805_A1 // CZ 805 BREN A1
10, CUP_arifle_CZ805_GL // CZ 805 BREN A1 GL
10, CUP_arifle_CZ805_A2 // CZ 805 BREN A2
10, hlc_rifle_G36C // HK G36C
10, hlc_rifle_G36KV // HK G36KV
10, hlc_rifle_G36V // HK G36V
10, hlc_rifle_G36TAC // HK G36V(KAC)
10, hlc_rifle_hk33a2 // HK HK33A2
10, hlc_rifle_hk33a2RIS // HK HK33A2 RIS
10, hlc_rifle_hk53 // HK HK53
10, hlc_rifle_hk53RAS // HK HK53 RAS
10, CUP_arifle_L85A2 // L85A2
10, CUP_arifle_L85A2_G // L85A2(Grip)
10, CUP_arifle_L86A2 // L86A2 LSW
10, CUP_arifle_M16A2 // M16A2
10, CUP_arifle_M16A4_Base // M16A4
10, CUP_arifle_M4A1_black // M4A1
10, CUP_arifle_M4A1_camo // M4A1 (woodland)
10, CUP_arifle_M4A1_desert // M4A1 (desert)
10, CUP_srifle_Mk12SPR // Mk12 SPR
10, CUP_arifle_Mk16_CQC_FG // Mk16 CQC (foregrip)
10, CUP_arifle_Mk16_STD_FG // Mk16 Standard (foregrip)
10, CUP_arifle_Mk16_STD_EGLM // Mk16 Standard EGLM
10, CUP_arifle_Mk16_SV // Mk16 SV
10, arifle_Mk20_F // Mk20 Camo
10, hlc_rifle_samr2 // RRA LAR-15
10, arifle_SPAR_01_blk_F // SPAR-16 (Black)
10, hlc_rifle_auga3_b // Steyr AUGA3 Black
10, hlc_rifle_auga3_bl // Steyr AUGA3 Blue
10, hlc_rifle_auga3 // Steyr AUGA3 Green
10, hlc_rifle_auga3_GL_B // Steyr AUGA3 GL Black
10, arifle_TRG20_F // TRG-20
10, hlc_rifle_aek971 // ZID AEK971S
10, hlc_rifle_aek971_mtk // ZID AEK971S(MTK)

> AssaultRifleHigh
10, hlc_rifle_akm_MTK // AKM(MTK)
10, hlc_rifle_akmgl // AKM(GL)
10, hlc_rifle_akm // AKM
10, hlc_rifle_ak47 // AK47
10, Exile_Weapon_AKS_Gold // AKS Gold
10, hlc_30Rnd_762x39_b_ak // Arsenal Inc. SLR107U
10, hlc_rifle_slr107u_MTK // Arsenal Inc. SLR107U(MTK)
10, arifle_AK12_F // AK12 vanilla
10, arifle_AK12_GL_F // AK12 GL vanilla
10, hlc_rifle_bcmblackjack // BCM 'Black-Jack' Custom
10, hlc_rifle_Bushmaster300 // Bushmaster .300 Carbine
10, hlc_rifle_c1A1 // CAL C1A1
10, CUP_arifle_CZ805_B // CZ 805 BREN B1
10, CUP_arifle_CZ805_B_GL // CZ 805 BREN B1 GL
10, hlc_rifle_falosw // DSArms FAL OSW
10, hlc_rifle_osw_GL // DSArms FAL OSW GL
10, hlc_rifle_L1A1SLR // Enfield L1A1 SLR
10, hlc_rifle_FAL5000Rail // FN FAL 50.00 (RIS)
10, hlc_rifle_FAL5061Rail // FN FAL 50.61 'Para' (RIS)
10, hlc_rifle_LAR // FN LAR
10, hlc_rifle_g3sg1ris // HK G3/SG1(RIS)
10, hlc_rifle_g3a3 // HK G3A3
10, hlc_rifle_g3a3ris // HK G3A3(RIS)
10, hlc_rifle_g3ka4 // HK G3KA4 RAS
10, HLC_Rifle_g3ka4_GL // HK G3KA4 RAS GL
10, arifle_Katiba_C_F // Katiba Carbine
10, hlc_rifle_honeybadger // AAC Honey Badger
10, CUP_sgun_AA12 // AA-12
10, CUP_srifle_L129A1 // L129a1
10, hlc_rifle_SLR // Lithgow SLR
10, CUP_arifle_Mk17_CQC_FG // Mk17 CQC (foregrip)
10, CUP_arifle_Mk20 // Mk17 Sniper
10, CUP_arifle_Mk17_STD_FG // Mk17 Standard (foregrip)
10, arifle_MX_GL_Black_F // MX 3GL (Black)
10, arifle_MX_Black_F // MX (Black)
10, arifle_MXC_Black_F // MXC (Black)
10, arifle_MXM_Black_F // MXM (Black)
10, CUP_arifle_Sa58RIS2 // Sa-58 RIS2
10, CUP_arifle_Sa58P // Sa-58P
10, hlc_rifle_amt // SIG AMT
10, hlc_rifle_sig5104 // SIG SG510-4
10, hlc_rifle_STGW57 // SIG Stgw.57
10, hlc_rifle_stgw57_commando // SIG Stgw.57 Commando
10, arifle_ARX_blk_F // Type 115 (Black)
10, hlc_rifle_RK62 // Valmet Rk.62
	
> LMG
10, hlc_rifle_rpk74n // RPK 74
10, hlc_rifle_RPK12 // RPK 12
10, hlc_rifle_rpk // RPK
10, arifle_CTARS_blk_F // CAR-95-1 5.8mm
10, hlc_lmg_minimi_railed // FN Minimi (Long/RIS)
10, hlc_lmg_minimipara_railed // FN Minimi Para (Short/RIS)
10, hlc_rifle_G36MLIC // HK G36-MLI(C)
10, hlc_rifle_G36CMLIC // HK G36C-MLI(C)
10, LMG_03_F // LIM-85
10, hlc_m249_pip1 // M249 PIP (Long/RIS)
10, hlc_m249_pip3 // M249 PIP (Short/RIS)
10, hlc_lmg_m60 // M60
10, hlc_lmg_M60E4 // M60E4
10, CUP_arifle_MG36 // MG36 Black
10, CUP_arifle_MG36_camo // MG36 Camo
10, hlc_lmg_mk48 // Mk. 48 Mod.0
10, LMG_Mk200_F // Mk200
10, arifle_MX_SW_Black_F // MW SW (Black)
10, CUP_lmg_Pecheneg // PKP
10, LMG_Zafir_F // Zafir
10, CUP_arifle_XM8_Railed // XM8
	
> SniperLow
10, srifle_DMR_07_blk_F // CMR-76 6.5mm
10, hlc_rifle_psg1A1 // HK PSG1A1
10, hlc_rifle_PSG1A1_RIS // HK PSG1A1 RIS
10, CUP_srifle_M110 // M110
10, hlc_rifle_M14_Rail // M14
10, CUP_srifle_M14_DMR // DMR
10, CUP_srifle_M24_wdl // M24
10, CUP_srifle_M24_des // M24 Des
10, CUP_srifle_M40A3 // M40A3
10, srifle_DMR_03_tan_F // Mk-1 EMR Sand
10, srifle_DMR_03_woodland_F // Mk-1 EMR Woodland
10, srifle_DMR_06_olive_F // Mk14 Olive
10, srifle_EBR_F // Mk18 ABR
10, arifle_SPAR_03_blk_F // SPAR-17 (Black)
10, CUP_srifle_SVD // SVD
10, hlc_rifle_m14sopmod // Troy M14 SOPMOD
10, CUP_srifle_VSSVintorez // VSS Vintorez
10, hlc_rifle_M21_Rail // M21(RIS)

> Explosives
3, SatchelCharge_Remote_Mag  //Satchel Charge
3, DemoCharge_Remote_Mag  //Explosive Charge
3, CUP_IED_V1_M
3, CUP_IED_V2_M
3, CUP_IED_V3_M
3, CUP_IED_V4_M
10, hlc_VOG25_AK
10, 3Rnd_HE_Grenade_shell
10, CUP_1Rnd_HE_M203
10, 1Rnd_HE_Grenade_shell
10, MiniGrenade
10, HandGrenade

> EpicWeapons
10, hlc_rifle_awcovert_BL // AWC Black
10, hlc_rifle_awcovert_FDE // AWC Tan
10, hlc_rifle_awcovert // AWC Green
2, CUP_srifle_AS50 // AS50
10, srifle_DMR_04_F // ASP-1 Kir
10, srifle_GM6_F // GM6 Lynx
10, srifle_DMR_05_blk_F // Cyrus 9.3 Black
10, srifle_DMR_05_hex_F // Cyrus 9.3 Camo
4, CUP_srifle_M107_Base // M107
10, srifle_LRR_F // M320 LRR .408
10, srifle_DMR_02_F // MAR-10 Black
10, srifle_DMR_02_camo_F // MAR-10 Camo
1, MMG_01_hex_F // Navid Camo
1, MMG_02_black_F // SPMG (Black)
1, MMG_02_camo_F // SPMG (Camo)
1, CUP_launch_MAAWS // MAAWS

> EpicAmmo
10, hlc_5rnd_300WM_FMJ_AWM //*****
10, hlc_5rnd_300WM_mk248_AWM
10, hlc_5rnd_300WM_BTSP_AWM
10, hlc_5rnd_300WM_AP_AWM        // AWC
10, hlc_5rnd_300WM_SBT_AWM
10, hlc_5rnd_300WM_T_AWM //*****
10, CUP_5Rnd_127x99_as50_M // AS50
10, 10Rnd_127x54_Mag // ASP-1 Kir
10, 5Rnd_127x108_Mag // Lynx
10, 5Rnd_127x108_APDS_Mag //Lynx APDS
10, Exile_Magazine_5Rnd_127x108_Bullet_Cam_Mag // Lynx BulletCam
10, 10Rnd_93x64_DMR_05_Mag // Cyrus
10, Exile_Magazine_10Rnd_93x64_DMR_05_Bullet_Cam_Mag // Cyrus BulletCam
10, CUP_10Rnd_127x99_M107 // M107
10, 7Rnd_408_Mag // M320 LRR
10, Exile_Magazine_7Rnd_408_Bullet_Cam_Mag // M320 LRR BulletCam
10, 10Rnd_338_Mag // MAR-10
10, Exile_Magazine_10Rnd_338_Bullet_Cam_Mag // MAR-10 BulletCam
10, 150Rnd_93x64_Mag // Navid
10, 130Rnd_338_Mag // SPMG
10, 10Rnd_50BW_Mag_F // Type 115 .50
5, CUP_MAAWS_HEAT_M // MAAWS HEAT
5, CUP_MAAWS_HEDP_M // MAAWS HEDP

///////////////////////////////////////////////////////////
/////// Gear //////////////////////////////////////////////
///////////////////////////////////////////////////////////

> MilitaryGear
3, NVGoggles_OPFOR  //NVG (Black)
3, NVGoggles  //NVG (Brown)
3, NVGoggles_INDEP  //NVG (Green)
10, Rangefinder // Rangerfinder
10, ItemGPS // GPS
	
> MilitaryVests
15, V_TacVestIR_blk //*****
15, TAC_V_tacSVD_BK
15, TAC_V_tacSVD_OD
15, V_TacVest_blk
15, V_TacVest_brn          // Low Tier Vests
15, V_TacVest_camo
15, V_TacVest_khk
15, V_TacVest_oli
15, V_TacVest_blk_POLICE
15, V_I_G_resistanceLeader_F //*****
//
1, V_PlateCarrierGL_blk //*****
3, V_PlateCarrier2_rgr
1, CUP_V_B_IOTV_AT
3, CUP_V_BAF_Osprey_Mk2_DPM_Empty
3, TAC_PBDFG2_B_1
3, TAC_ArmorVest_Winter
3, TRYK_V_PlateCarrier_wood_L
3, TRYK_V_PlateCarrier_blk_L     
1, TRYK_V_PlateCarrier_blk               // High Tier Vests
3, TRYK_V_PlateCarrier_ACU_L
1, TRYK_V_PlateCarrier_ACU
3, TRYK_V_ArmorVest_AOR2_2
3, TRYK_V_ArmorVest_Delta2
3, TRYK_V_ArmorVest_green2
3, TRYK_V_ArmorVest_Ranger2 //*****

> MilitaryClothes
1, U_I_FullGhillie_lsh
1, TAC_W_ghillie_O1
10, TRYK_U_B_PCUHsW4
10, TRYK_U_B_PCUHsW6
10, TRYK_U_B_PCUHsW
10, TRYK_U_B_PCUHsW2
10, TRYK_U_B_PCUHsW5
10, TRYK_U_B_Snowt
10, TRYK_U_B_Snow_CombatUniform
10, CUP_U_B_USMC_FROG4_WMARPAT
10, TRYK_U_B_WOOD_MARPAT_CombatUniform
10, TRYK_U_B_Wood_T
10, TRYK_B_USMC_R
10, TRYK_U_B_JSDF_CombatUniform
10, TRYK_U_B_woodtan_CombatUniform
10, TRYK_T_camo_wood_marpat
10, TRYK_hoodie_Wood
10, TRYK_U_B_OD_OD_R_CombatUniform
10, TRYK_U_B_MARPAT_WOOD_CombatUniform
10, TRYK_U_B_BLK
10, TRYK_U_B_BLKBLK_CombatUniform
10, TRYK_U_B_AOR2_OD_CombatUniform
10, TRYK_U_B_ARO2_CombatUniform
10, Exile_Uniform_Woodland

> MilitaryBackpacks
1, B_Bergen_dgtl_F //*****
1, B_Bergen_hex_F
1, B_Bergen_mcamo_F
1, B_Bergen_tna_F
3, B_Carryall_cbr
3, B_Carryall_ghex_F
3, B_Carryall_ocamo
3, B_Carryall_khk
3, B_Carryall_mcamo
3, B_Carryall_oucamo                 // High Capacity Backpacks
3, TRYK_B_Coyotebackpack_BLK
3, TRYK_B_Coyotebackpack
3, TRYK_B_Coyotebackpack_OD
3, TRYK_B_Coyotebackpack_WH
3, TRYK_B_Carryall_JSDF
3, TRYK_B_Carryall_blk
3, TRYK_B_Carryall_wh
3, TRYK_B_Carryall_wood //*****
//
20, B_Kitbag_cbr //*****
20, B_Kitbag_rgr
20, B_Kitbag_mcamo
20, CUP_B_RUS_Backpack           // Medium Capacity Backpacks
20, B_TacticalPack_blk
20, B_TacticalPack_rgr
20, B_TacticalPack_mcamo //*****

> MilitaryHeadgear
10, TRYK_H_WH
10, TRYK_H_Helmet_Snow
10, TRYK_H_Helmet_Winter_2
10, TRYK_H_Helmet_Winter
10, CUP_H_CDF_H_PASGT_FST
10, CUP_H_CDF_H_PASGT_UN
10, H_HelmetB
10, H_HelmetB_black
10, H_HelmetB_grass
10, CUP_H_USArmy_Helmet_ECH1_Black
10, CUP_H_USArmy_Helmet_ECH1_Green
10, H_HelmetSpecB
10, CUP_H_USMC_HelmetWDL
10, CUP_H_RACS_Helmet_olive
10, CUP_H_RACS_Helmet_wdl
10, CUP_H_USArmy_HelmetMICH_earpro
10, TRYK_H_Helmet_WOOD
10, H_HelmetB_TI_tna_F
10, CUP_H_USMC_MICH2000_ESS_COMM_WDL

> CivilianClothes
10, TRYK_shirts_DENIM_BL
10, TRYK_shirts_DENIM_BWH
10, TRYK_shirts_DENIM_od
10, TRYK_shirts_DENIM_R
10, TRYK_shirts_DENIM_WH
10, TRYK_shirts_DENIM_ylb
10, TRYK_U_denim_jersey_blu
10, TRYK_U_B_Denim_T_BK
10, TRYK_U_B_RED_T_BR
10, U_C_Poor_1

> CivilianBackpacks
10, B_AssaultPack_blk
10, B_AssaultPack_cbr
10, B_AssaultPack_khk
10, CUP_B_CivPack_WDL
10, CUP_B_ACRScout_m95
10, B_Kitbag_cbr
10, B_Kitbag_rgr
10, CUP_B_RPGPack_Khaki
10, CUP_B_AlicePack_Khaki
10, B_TacticalPack_blk
10, B_TacticalPack_rgr
10, TRYK_B_tube_blk
10, CUP_B_AssaultPack_Coyote

> CivilianVests
10, V_HarnessOGL_brn
10, V_HarnessO_brn
10, V_Rangemaster_belt
10, V_BandollierB_blk
10, V_BandollierB_oli
10, V_BandollierB_rgr
10, TRYK_V_Bulletproof_BL
10, V_TacChestrig_grn_F
10, TAC_LBT_HL3_B
10, TAC_LBT_HL3_OD
10, CUP_V_O_Ins_Carrier_Rig_Com
10, V_Chestrig_rgr
10, V_Chestrig_blk
10, V_Press_F

> CivilianGear
1, ItemWatch
20, ItemRadio
1, ItemGPS
30, Binocular
40, Exile_Item_Heatpack
30, ItemMap
30, ItemCompass

> BarnItems
30, ItemWatch
15, ItemRadio
30, Binocular
25, Exile_Item_Heatpack
35, ItemMap
30, ItemCompass
10, Exile_Melee_Axe
15, Exile_Item_Rope
18, Exile_Item_CamoTentKit
25, Exile_Item_Bandage
10, Exile_Item_ZipTie
10, Exile_Item_FuelCanisterFull
20, Exile_Item_FuelCanisterEmpty
15, Exile_Item_OilCanister
20, Exile_Item_Carwheel
23, Exile_Item_ExtensionCord
18, Exile_Item_WaterCanisterEmpty
15, Exile_Item_Hammer
10, Exile_Item_Wrench
20, Exile_Item_DuctTape

///////////////////////////////////////////////////////////////////////////////
// Other Items
///////////////////////////////////////////////////////////////////////////////

> MedicalItems
1, Exile_Item_InstaDoc
65, Exile_Item_Bandage
4, Exile_Item_Vishpirin
30, Exile_Item_Heatpack

> IndustrialItems
5, Exile_Item_Knife  //Knife
20, Exile_Item_ZipTie  //ZipTie
5, Exile_Item_BaseCameraKit  //Base Camera
5, Exile_Item_Laptop  //Base Laptop
20, Exile_Item_CarWheel  //Car Wheel
5, Exile_Item_Cement  //Bag of Cement
20, Exile_Item_DuctTape  //Duct Tape
5, Exile_Item_OilCanister  //Oil Canister
10, Exile_Item_ExtensionCord  //Extension Cord
10, Exile_Item_FireExtinguisher  //Fire Extinguisher
5, Exile_Item_FloodLightKit  //Flood Light Kit
5, Exile_Item_PortableGeneratorKit  //Portable Generator Kit
5, Exile_Item_Rope  //Rope
5, Exile_Item_Sand  //Bag of Sand
20, Exile_Item_FuelCanisterEmpty  //Fuel Canister (Empty)
5, Exile_Item_FuelCanisterFull  //Fuel Canister (Full)
10, Exile_Item_MobilePhone  //Mobile Phone
20, Exile_Item_JunkMetal  //Junk Metal
5, Exile_Item_LightBulb  //Light Bulb
10, Exile_Item_MetalBoard  //Metal Board
20, Exile_Item_MetalHedgehogKit  //Metal Hedgehog Kit
20, Exile_Item_MetalPole  //Metal Pole
20, Exile_Item_MetalScrews  //Box of Screws
5, Exile_Item_MetalWire  //Metal Wire
5, Exile_Item_ThermalScannerPro  //Thermal Scanner Pro
10, Exile_Item_CamoTentKit
10, Land_TentDome_F_Kit  //Tent Dome

> Tools
10, Exile_Item_Foolbox  //Foolbox
10, Exile_Item_Grinder  //Grinder
10, Exile_Item_Hammer  //Hammer
10, Exile_Item_Handsaw  //Handsaw
10, Exile_Item_Pliers  //Pliers
10, Exile_Item_Shovel  //Shovel
10, Exile_Item_Wrench  //Wrench
10, Exile_Melee_Axe  //Axe
10, Exile_Melee_SledgeHammer  //Sledgehammer
10, Exile_Item_Screwdriver  //Screwdriver

> Vehicle
10, Exile_Item_CarWheel  //Car Wheel
3, Exile_Item_Foolbox  //Foolbox
3, Exile_Item_Wrench  //Wrench
10, Exile_Item_JunkMetal  //Junk Metal
30, Exile_Item_FuelCanisterEmpty  //Fuel Canister (Empty)
10, Exile_Item_OilCanister  //Oil Canister
30, Exile_Item_DuctTape  //Duct Tape


 // Trash or items not currently being used

> Trash
4, Exile_Item_Can_Empty
4, Exile_Item_ToiletPaper
4, Exile_Item_PlasticBottleEmpty			// Nothing :)
1, Exile_Item_Magazine01
1, Exile_Item_Magazine02
1, Exile_Item_Magazine03
1, Exile_Item_Magazine04

> Unused
3, Exile_Item_CordlessScrewdriver
3, Exile_Item_FireExtinguisher
10, Exile_Item_OilCanister
14, Exile_Item_Hammer
5, Exile_Item_Carwheel
5, Exile_Item_SleepingMat
5, Exile_Item_Defibrillator
5, Exile_Item_Wrench
4, Exile_Item_Rope
