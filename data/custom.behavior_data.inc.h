//Include this file at the bottom of behavior_data.c
const BehaviorScript Bhv_Custom_0x1300012c[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
// LOAD_COLLISION_DATA(col_rr_geo_0008C0_0xfab809),
GOTO( Bhv_Custom_0x13003b70),
};

const BehaviorScript Bhv_Custom_0x13003b70[] = {
ADD_FLOAT(oPosY,65230),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13000684[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
// LOAD_COLLISION_DATA(col_rr_geo_0006A8_0xfb6a89),
GOTO( Bhv_Custom_0x13001418),
};

const BehaviorScript Bhv_Custom_0x13001418[] = {
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_squarish_path_moving_loop),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x1300496c[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
// LOAD_COLLISION_DATA(col_ttm_geo_000990_0x11827cb),
GOTO( Bhv_Custom_0x13003b70),
};

const BehaviorScript Bhv_Custom_0x13004cc8[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_collect_star_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_collect_star_loop),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13001e68[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
// LOAD_COLLISION_DATA(col_geo_bbh_0005C8_0xdd0c1d),
SET_INT_RAND_RSHIFT(oYoshiTargetYaw,1,32),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_arrow_lift_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13000fc0[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,73),
// LOAD_COLLISION_DATA(col_geo_bbh_000640_0xa71f04),
ADD_FLOAT(oPosY,5),
SET_FLOAT(oCollisionDistance,2000),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_sinking_square_platforms_loop),
CALL_NATIVE( bhv_lll_sinking_square_platforms_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13004854[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,17),
// LOAD_COLLISION_DATA(col_ddd_geo_000478_0x10890b3),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

const BehaviorScript Bhv_Custom_0x13005664[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
// LOAD_COLLISION_DATA(col_dorrie_geo_0xa71784),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ttc_spinner_update),
CALL_NATIVE( bhv_ttc_spinner_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
};

