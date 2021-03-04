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
#include "levels/thi/header.h"
extern u8 _thi_segment_ESegmentRomStart[]; 
extern u8 _thi_segment_ESegmentRomEnd[];
#include "levels/bbh/header.h"
const LevelScript level_thi_custom_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
LOAD_RAW(0x0E, _thi_segment_ESegmentRomStart, _thi_segment_ESegmentRomEnd),
LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
LOAD_MIO0(0xA,_bitfs_skybox_mio0SegmentRomStart,_bitfs_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group2_mio0SegmentRomStart,_group2_mio0SegmentRomEnd),
LOAD_RAW(12,_group2_geoSegmentRomStart,_group2_geoSegmentRomEnd),
LOAD_MIO0(6,_group17_mio0SegmentRomStart,_group17_mio0SegmentRomEnd),
LOAD_RAW(13,_group17_geoSegmentRomStart,_group17_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(29, haunted_door_geo),
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
JUMP_LINK(script_func_global_3),
JUMP_LINK(script_func_global_18),
JUMP_LINK(local_area_thi_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_thi_1_[] = {
AREA(1,Geo_thi_1_0x19e1700),
TERRAIN(col_thi_1_0xe046888),
SET_BACKGROUND_MUSIC(0,42),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_thi_1_),
JUMP_LINK(local_warps_thi_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_thi_1_[] = {
OBJECT_WITH_ACTS(0,4268,478,-5822,0,90,0,0x10a0000, bhvSpinAirborneCircleWarp,63),
OBJECT_WITH_ACTS(56,-3745,-361,2804,0,337,0,0x0, bhvLllTiltingInvertedPyramid,63),
OBJECT_WITH_ACTS(56,-4535,-59,2374,0,337,0,0x0, bhvLllTiltingInvertedPyramid,63),
OBJECT_WITH_ACTS(56,-5324,239,1894,0,337,0,0x0, bhvLllTiltingInvertedPyramid,63),
OBJECT_WITH_ACTS(215,3986,683,7595,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-4402,-660,4476,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,5702,-1070,-739,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-2865,-781,2266,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,6426,1360,7923,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,748,-902,-3828,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,-1116,82,6228,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(215,4506,-181,-5522,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(212,-5858,2173,-5002,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(137,4240,1530,-4281,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(137,727,-698,-4823,0,0,0,0x30000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(54,2467,-677,1813,0,180,0,0x0, Bhv_Custom_0x13001e68,24),
OBJECT_WITH_ACTS(53,-2469,-1522,-2274,0,0,0,0x0, bhvRockSolid,63),
OBJECT_WITH_ACTS(53,-3719,-1522,-2274,0,0,0,0x0, bhvRockSolid,63),
OBJECT_WITH_ACTS(53,-4969,-1522,-2274,0,0,0,0x0, bhvRockSolid,63),
OBJECT_WITH_ACTS(53,-6219,-1522,-2274,0,0,0,0x0, bhvRockSolid,63),
OBJECT_WITH_ACTS(53,-3719,-1522,-3674,0,0,0,0x0, bhvRockSolid,63),
OBJECT_WITH_ACTS(100,-4173,1526,-2831,0,0,0,0x0, bhvSwoop,63),
OBJECT_WITH_ACTS(100,-4173,1802,-1526,0,0,0,0x0, bhvSwoop,63),
OBJECT_WITH_ACTS(116,6299,-1010,-2903,0,0,0,0x0, bhvOneCoin,63),
OBJECT_WITH_ACTS(53,-4969,-1522,-3674,0,0,0,0x0, bhvRockSolid,63),
OBJECT_WITH_ACTS(53,-6219,-1522,-3674,0,0,0,0x0, bhvRockSolid,63),
OBJECT_WITH_ACTS(54,2467,-417,2236,0,180,0,0x0, Bhv_Custom_0x13001e68,24),
OBJECT_WITH_ACTS(54,2467,-156,2661,0,180,0,0x0, Bhv_Custom_0x13001e68,24),
OBJECT_WITH_ACTS(54,2467,95,3081,0,180,0,0x0, Bhv_Custom_0x13001e68,24),
OBJECT_WITH_ACTS(122,-6605,-1262,-3113,0,90,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(192,-6863,958,6566,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(129,-2865,-781,2266,0,0,0,0x0, bhvBreakableBox,63),
OBJECT_WITH_ACTS(137,6552,877,6000,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(116,6133,-1010,-3629,0,0,0,0x0, bhvOneCoin,31),
OBJECT_WITH_ACTS(206,4381,-948,-748,0,0,0,0x0, bhvSnufit,63),
OBJECT_WITH_ACTS(206,2386,1085,-1343,0,0,0,0x0, bhvSnufit,63),
OBJECT_WITH_ACTS(206,-4451,-3328,5623,0,0,0,0x0, bhvSnufit,63),
OBJECT_WITH_ACTS(206,-79,-1069,-4096,0,0,0,0x0, bhvSnufit,63),
OBJECT_WITH_ACTS(0,1979,1545,-2054,0,297,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(137,-5071,-3224,5615,0,0,0,0x10000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(101,6368,610,6724,0,0,0,0x0, bhvScuttlebug,63),
OBJECT_WITH_ACTS(101,4967,-439,7234,0,0,0,0x0, bhvScuttlebug,63),
OBJECT_WITH_ACTS(101,-5829,-1074,3742,0,0,0,0x0, bhvScuttlebug,63),
OBJECT_WITH_ACTS(101,3728,1264,-3414,0,0,0,0x0, bhvScuttlebug,63),
OBJECT_WITH_ACTS(101,-4787,-459,-4515,0,0,0,0x0, bhvScuttlebug,63),
OBJECT_WITH_ACTS(206,1877,-810,755,0,0,0,0x0, bhvSnufit,63),
OBJECT_WITH_ACTS(100,5117,-26,1915,0,0,0,0x0, bhvSwoop,63),
OBJECT_WITH_ACTS(100,4987,237,3242,0,0,0,0x0, bhvSwoop,63),
OBJECT_WITH_ACTS(0,7329,-914,-5153,0,342,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,4119,853,6743,0,0,0,0x4000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(122,-4154,3274,-3163,0,0,0,0x5000000, bhvStar,63),
OBJECT_WITH_ACTS(137,-6839,1186,6566,0,0,0,0x20b0000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(122,1790,3083,4925,0,0,0,0x3000000, bhvStar,63),
OBJECT_WITH_ACTS(0,5082,-1314,-106,0,180,0,0x0, bhvBouncingFireball,63),
OBJECT_WITH_ACTS(0,6925,-1314,-766,0,90,0,0x0, bhvBouncingFireball,63),
OBJECT_WITH_ACTS(0,-2472,-880,-4729,0,90,0,0x0, bhvBouncingFireball,63),
OBJECT_WITH_ACTS(0,703,-1226,-4297,0,270,0,0x0, bhvBouncingFireball,63),
OBJECT_WITH_ACTS(54,-185,48,1272,0,270,0,0x0, Bhv_Custom_0x13001e68,30),
OBJECT_WITH_ACTS(54,241,369,1272,0,270,0,0x0, Bhv_Custom_0x13001e68,30),
OBJECT_WITH_ACTS(54,-606,-270,1272,0,270,0,0x0, Bhv_Custom_0x13001e68,30),
OBJECT_WITH_ACTS(56,50,-804,3289,0,0,0,0x0, bhvLllTiltingInvertedPyramid,63),
OBJECT_WITH_ACTS(58,0,600,-5000,0,0,0,0x0, bhvBowserSubDoor,2),
OBJECT_WITH_ACTS(137,-3955,-759,7449,0,0,0,0x50000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(56,750,979,-4250,0,0,0,0x0, bhvLllTiltingInvertedPyramid,2),
OBJECT_WITH_ACTS(56,2250,979,-4250,0,0,0,0x0, bhvLllTiltingInvertedPyramid,2),
OBJECT_WITH_ACTS(54,6478,-1103,-2846,0,162,0,0x0, Bhv_Custom_0x13001e68,31),
OBJECT_WITH_ACTS(54,5961,-1103,-3694,0,342,0,0x0, Bhv_Custom_0x13001e68,31),
OBJECT_WITH_ACTS(58,0,800,-5750,0,0,0,0x0, bhvBowserSubDoor,2),
OBJECT_WITH_ACTS(58,0,1000,-6500,0,0,0,0x0, bhvBowserSubDoor,2),
OBJECT_WITH_ACTS(58,750,1200,-6500,0,0,0,0x0, bhvBowserSubDoor,2),
OBJECT_WITH_ACTS(58,1500,1400,-6500,0,0,0,0x0, bhvBowserSubDoor,2),
OBJECT_WITH_ACTS(58,1500,1600,-5750,0,0,0,0x0, bhvBowserSubDoor,2),
OBJECT_WITH_ACTS(212,-6098,-1252,-3822,0,0,0,0x0, bhv1Up,63),
OBJECT_WITH_ACTS(0,-4894,-1557,-2982,0,180,0,0x0, bhvBouncingFireball,65),
OBJECT_WITH_ACTS(53,-2469,-1522,-3674,0,0,0,0x0, bhvRockSolid,63),
OBJECT_WITH_ACTS(180,-5394,-668,2886,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(180,3197,-265,7611,0,0,0,0x0, bhvFireSpitter,63),
OBJECT_WITH_ACTS(122,1500,2647,-5750,0,0,0,0x1000000, bhvStar,2),
OBJECT_WITH_ACTS(0,3289,-914,-467,0,299,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,5543,-514,5192,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(100,-1018,-310,-4738,0,0,0,0x0, bhvSwoop,63),
OBJECT_WITH_ACTS(100,-3104,298,-4741,0,0,0,0x0, bhvSwoop,63),
OBJECT_WITH_ACTS(0,-2948,-1074,5731,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(129,2257,-514,6350,0,0,0,0x0, bhvJumpingBox,63),
OBJECT_WITH_ACTS(0,-669,-412,-1411,0,270,0,0xd0000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(0,-5405,-412,-3288,0,0,0,0x40000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,4416,1510,7928,0,90,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(223,-4105,846,546,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(223,-4126,561,1147,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(137,-6321,-814,2242,0,0,0,0x60000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(0,6302,-1171,-739,0,90,0,0x110000, bhvCoinFormation,31),
OBJECT_WITH_ACTS(0,40,685,637,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-4530,241,2376,0,0,0,0x110000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(0,2511,-1314,118,0,50,0,0x0, bhvBouncingFireball,32),
OBJECT_WITH_ACTS(0,855,-1314,2674,0,0,0,0x0, bhvBouncingFireball,32),
OBJECT_WITH_ACTS(0,-748,-1314,2690,0,0,0,0x0, bhvBouncingFireball,32),
OBJECT_WITH_ACTS(0,137,-1314,3639,0,90,0,0x0, bhvBouncingFireball,32),
OBJECT_WITH_ACTS(0,-128,1114,-1506,0,325,0,0x0, bhvBouncingFireball,32),
OBJECT_WITH_ACTS(0,-2483,2403,-3196,0,90,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,-3153,3175,-3900,0,123,0,0x0, bhvFlamethrower,32),
OBJECT_WITH_ACTS(0,-3695,-3380,5617,0,270,0,0xe0000, bhvFadingWarp,63),
OBJECT_WITH_ACTS(202,6978,-933,-5734,0,73,0,0x20000, bhvMantaRay,32),
OBJECT_WITH_ACTS(0,7564,-1314,-7395,0,0,0,0x0, bhvVolcanoSoundLoop,63),
OBJECT_WITH_ACTS(180,1500,2252,-6500,0,0,0,0x0, bhvFireSpitter,2),
OBJECT_WITH_ACTS(180,0,1852,-6500,0,0,0,0x0, bhvFireSpitter,2),
OBJECT_WITH_ACTS(180,750,2052,-6500,0,0,0,0x0, bhvFireSpitter,2),
OBJECT_WITH_ACTS(0,2503,-1310,106,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,34,-1310,2709,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,47,-1310,3854,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(0,1506,1135,-4246,0,0,0,0x40000, bhvFlamethrower,2),
OBJECT_WITH_ACTS(0,5702,-1310,-739,0,0,0,0x40000, bhvFlamethrower,31),
OBJECT_WITH_ACTS(59,5702,-1299,-1339,0,0,0,0x0, Bhv_Custom_0x13000fc0,31),
OBJECT_WITH_ACTS(59,5102,-1299,-1339,0,0,0,0x0, Bhv_Custom_0x13000fc0,31),
OBJECT_WITH_ACTS(59,6302,-1299,-1339,0,0,0,0x0, Bhv_Custom_0x13000fc0,31),
OBJECT_WITH_ACTS(59,5702,-1299,-139,0,0,0,0x0, Bhv_Custom_0x13000fc0,31),
OBJECT_WITH_ACTS(59,5102,-1299,-139,0,0,0,0x0, Bhv_Custom_0x13000fc0,31),
OBJECT_WITH_ACTS(59,5102,-1299,-739,0,0,0,0x0, Bhv_Custom_0x13000fc0,31),
OBJECT_WITH_ACTS(59,6302,-1299,-739,0,0,0,0x0, Bhv_Custom_0x13000fc0,31),
OBJECT_WITH_ACTS(59,6302,-1299,-139,0,0,0,0x0, Bhv_Custom_0x13000fc0,31),
OBJECT_WITH_ACTS(56,4375,-1452,-715,0,0,0,0x0, bhvLllTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(56,5700,-1452,560,0,0,0,0x0, bhvLllTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(56,5704,-1452,-2042,0,0,0,0x0, bhvLllTiltingInvertedPyramid,31),
OBJECT_WITH_ACTS(86,-4592,-362,3556,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(86,-4178,728,-2808,0,0,0,0x0, bhvSmallBully,31),
OBJECT_WITH_ACTS(206,5688,-948,541,0,0,0,0x0, bhvSnufit,31),
OBJECT_WITH_ACTS(116,-607,-177,1533,0,0,0,0x0, bhvOneCoin,30),
OBJECT_WITH_ACTS(116,-180,141,1542,0,0,0,0x0, bhvOneCoin,30),
OBJECT_WITH_ACTS(116,242,462,1540,0,0,0,0x0, bhvOneCoin,30),
OBJECT_WITH_ACTS(86,-135,-510,4688,0,0,0,0x0, bhvSmallBully,63),
RETURN()
};
const LevelScript local_warps_thi_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,13,1,14,0),
WARP_NODE(14,13,1,13,0),
WARP_NODE(240,26,1,42,0),
WARP_NODE(241,26,1,43,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};