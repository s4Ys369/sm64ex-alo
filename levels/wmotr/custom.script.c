#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/wmotr/header.h"
extern u8 _wmotr_segment_ESegmentRomStart[]; 
extern u8 _wmotr_segment_ESegmentRomEnd[];
#include "levels/bitdw/header.h"
const LevelScript level_wmotr_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bitdw_segment_7SegmentRomStart, _bitdw_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bitdwSegmentRomStart, _bitdwSegmentRomEnd),
LOAD_RAW(0x0E, _wmotr_segment_ESegmentRomStart, _wmotr_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_cloud_floor_skybox_mio0SegmentRomStart,_cloud_floor_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group10_mio0SegmentRomStart,_group10_mio0SegmentRomEnd),
LOAD_RAW(12,_group10_geoSegmentRomStart,_group10_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       geo_bitdw_0003C0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       geo_bitdw_0003D8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,       geo_bitdw_0003F0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,       geo_bitdw_000408),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,       geo_bitdw_000420),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,       geo_bitdw_000438),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,       geo_bitdw_000450),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,       geo_bitdw_000468),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,       geo_bitdw_000480),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,       geo_bitdw_000498),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,       geo_bitdw_0004B0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,       geo_bitdw_0004C8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,       geo_bitdw_0004E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_10,       geo_bitdw_0004F8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,       geo_bitdw_000510),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_WARP_PIPE,         warp_pipe_geo),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SQUARE_PLATFORM,   geo_bitdw_000558),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SEESAW_PLATFORM,   geo_bitdw_000540),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_SLIDING_PLATFORM,  geo_bitdw_000528),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_FERRIS_WHEEL_AXLE, geo_bitdw_000570),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_BLUE_PLATFORM,     geo_bitdw_000588),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME4,  geo_bitdw_0005A0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME3,  geo_bitdw_0005B8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME2,  geo_bitdw_0005D0),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE_FRAME1,  geo_bitdw_0005E8),
    LOAD_MODEL_FROM_GEO(MODEL_BITDW_STAIRCASE,         geo_bitdw_000600),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_11),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_wmotr_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_wmotr_1_[] = {
AREA(1,Geo_wmotr_1_0x29a1700),
TERRAIN(col_wmotr_1_0xe031238),
SET_BACKGROUND_MUSIC(0,32),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_wmotr_1_),
JUMP_LINK(local_warps_wmotr_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_wmotr_1_[] = {
OBJECT_WITH_ACTS(0,-6396,122,724,0,90,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(187,-5316,-690,459,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,503,-1002,-3229,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,1179,-1002,-953,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,476,-1002,3648,0,0,0,0x0, bhvTripletButterfly,31),
OBJECT_WITH_ACTS(187,2364,-1002,-3048,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-940,-1002,2793,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-5986,-690,68,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(23,-6125,-690,1489,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,682,-1002,5904,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,1550,-1002,-3696,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,117,-1002,5228,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-1296,-1002,215,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,246,-1002,-2919,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,-103,-1002,1690,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(23,1230,-1002,-1293,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(84,-6128,-267,1495,0,0,0,0x10000, bhvBird,31),
OBJECT_WITH_ACTS(84,1244,-632,-1297,0,0,0,0x10000, bhvBird,31),
OBJECT_WITH_ACTS(84,131,-580,5220,0,0,0,0x10000, bhvBird,31),
OBJECT_WITH_ACTS(192,-363,-642,-1000,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,788,-642,4592,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(124,-5296,-759,1263,0,270,0,0x510000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(0,-3169,-1002,716,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(116,-2750,3239,-36,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,1416,1239,4551,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2727,1841,-2355,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,2727,2650,-2355,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(116,-2750,3989,715,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(122,2709,4465,-2397,0,234,0,0x5000000, bhvClockMinuteHand,31),
OBJECT_WITH_ACTS(23,2820,3497,1543,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(122,4995,4257,724,0,270,0,0x10000, bhvStar,31),
OBJECT_WITH_ACTS(187,2494,3497,980,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(212,2892,1526,3529,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(222,3031,3497,1206,0,270,0,0x21000000, bhvRrCruiserWing,31),
OBJECT_WITH_ACTS(85,2253,3497,-368,0,0,0,0x230000, bhvBetaTrampolineTop,31),
OBJECT_WITH_ACTS(192,-2784,2497,-255,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,1331,-1308,2460,0,0,0,0x0, bhvFish3,31),
OBJECT_WITH_ACTS(124,2531,3497,-373,0,0,0,0x340000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(22,1900,2239,-872,0,157,0,0xb0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,-4249,864,-3520,0,90,0,0xc0000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(192,-3456,739,-3526,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(137,-2539,999,-3529,0,0,0,0x70000, bhvExclamationBox,31),
OBJECT_WITH_ACTS(0,328,2489,400,0,82,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(17,614,1474,3115,0,20,0,0x0, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(17,-3246,1875,-3532,0,0,0,0x0, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(17,-2744,1875,-2280,0,0,0,0x0, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(17,-2744,2369,-1318,0,0,0,0x0, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(116,-300,3774,711,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(17,-2744,1875,-2530,0,0,0,0x0, bhvHmcElevatorPlatform,31),
OBJECT_WITH_ACTS(187,2862,3489,242,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(23,2835,3489,-111,0,0,0,0x0, bhvTree,31),
RETURN()
};
const LevelScript local_warps_wmotr_1_[] = {
WARP_NODE(10,31,1,10,0),
WARP_NODE(11,31,1,12,0),
WARP_NODE(12,31,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,16,1,9,0),
WARP_NODE(241,16,1,201,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};