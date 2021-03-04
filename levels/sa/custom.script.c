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
#include "levels/sa/header.h"
extern u8 _sa_segment_ESegmentRomStart[]; 
extern u8 _sa_segment_ESegmentRomEnd[];
#include "levels/ssl/header.h"
const LevelScript level_sa_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _sslSegmentRomStart, _sslSegmentRomEnd),
LOAD_RAW(0x0E, _sa_segment_ESegmentRomStart, _sa_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_ssl_skybox_mio0SegmentRomStart,_ssl_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group5_mio0SegmentRomStart,_group5_mio0SegmentRomEnd),
LOAD_RAW(12,_group5_geoSegmentRomStart,_group5_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE,           palm_tree_geo),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       ssl_geo_0005C0),
LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       ssl_geo_0005D8),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP,         ssl_geo_000618),
LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL,             ssl_geo_000734),
LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL,             ssl_geo_000764),
LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794),
LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR,    ssl_geo_0007AC),
LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX,             ssl_geo_000630),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_GEO(86,0x05014630),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_6),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_sa_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,0,0,0),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sa_1_[] = {
AREA(1,Geo_sa_1_0x2001700),
TERRAIN(col_sa_1_0xe02b100),
SET_BACKGROUND_MUSIC(0,30),
TERRAIN_TYPE(3),
JUMP_LINK(local_objects_sa_1_),
JUMP_LINK(local_warps_sa_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sa_1_[] = {
OBJECT_WITH_ACTS(0,3762,4306,2252,0,270,0,0xa0000, bhvAirborneWarp,31),
OBJECT_WITH_ACTS(27,-5353,-110,-3781,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-4828,1236,2042,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-2100,1954,4769,0,107,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-1214,1902,3812,0,-151,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(215,-2893,2612,3863,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-5406,2621,4928,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,3685,1831,-889,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4901,730,-5146,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,852,-2833,2656,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,4559,3892,2295,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,5610,-4600,-553,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(215,-4491,880,-984,0,0,0,0x0, bhvRedCoin,31),
OBJECT_WITH_ACTS(0,5514,1392,-3285,0,0,0,0x0, bhvHiddenRedCoinStar,31),
OBJECT_WITH_ACTS(122,-4148,4103,3858,0,135,0,0x5000000, bhvClockMinuteHand,31),
OBJECT_WITH_ACTS(27,-4583,1345,4403,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(27,-3287,-327,-5761,0,0,0,0x0, bhvTree,31),
OBJECT_WITH_ACTS(22,6309,1123,-3285,0,270,0,0x60000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(22,5668,-5987,-5745,0,0,0,0x50000, bhvWarpPipe,31),
OBJECT_WITH_ACTS(129,5518,1123,-2308,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,5525,1132,-4107,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,5336,1123,-2528,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,5311,1123,-2322,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,5332,1332,-2342,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(0,-2458,-1940,77,0,0,0,0x0, bhvHidden1upInPoleSpawner,31),
OBJECT_WITH_ACTS(124,3180,3532,1907,0,90,0,0x360000, bhvMessagePanel,31),
OBJECT_WITH_ACTS(129,3286,3532,3102,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(212,-2449,2266,1293,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,7115,-4944,-1831,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(212,-4452,1675,-191,0,0,0,0x0, bhv1Up,31),
OBJECT_WITH_ACTS(129,3250,3532,1422,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,3510,3532,3140,0,0,0,0x10000, bhvBreakableBox,31),
OBJECT_WITH_ACTS(129,4397,3532,2611,0,0,0,0x0, bhvBreakableBox,31),
OBJECT_WITH_ACTS(140,3291,3532,3109,0,0,0,0x0, bhvBlueCoinSwitch,31),
OBJECT_WITH_ACTS(118,-359,1904,2977,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3163,1026,2278,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-4436,722,454,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-4452,217,-2495,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-3282,-507,-4494,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(118,-378,-1081,-4312,0,0,0,0x0, bhvHiddenBlueCoin,31),
OBJECT_WITH_ACTS(187,-1372,1845,3706,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-3199,-347,-5998,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-2014,1954,4564,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(187,-4883,1239,2353,0,0,0,0x0, bhvButterfly,31),
OBJECT_WITH_ACTS(192,-1612,2000,4395,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(192,-4926,9,-3393,0,0,0,0x0, bhvGoomba,31),
OBJECT_WITH_ACTS(0,819,-1925,39,0,270,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,-1980,-2344,63,0,0,0,0x0, bhvPokey,31),
OBJECT_WITH_ACTS(0,559,-3437,4062,0,90,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,1500,2913,2602,0,100,0,0x0, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,5628,-5340,-3230,0,0,0,0x0, bhvCoinFormation,31),
RETURN()
};
const LevelScript local_warps_sa_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,15,0),
WARP_NODE(241,26,1,16,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,20,1,6,0),
WARP_NODE(6,20,1,5,0),
RETURN()
};
