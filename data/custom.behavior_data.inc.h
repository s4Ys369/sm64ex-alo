//Include this file at the bottom of behavior_data.c
const BehaviorScript bhvFlyingWarp[] = {
BREAK(),
}

const BehaviorScript bhvCannon[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,201),
SPAWN_CHILD(127,318768356),
SET_INT(oInteractType,16384),
ADD_FLOAT(oPosY,65196),
SET_HOME(),
SET_HITBOX(150,150),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_cannon_base_loop),
END_LOOP(),
}

const BehaviorScript bhvFadingWarp[] = {
BEGIN(OBJ_LIST_LEVEL),
SET_INT(oInteractionSubtype,1),
OR_INT(oFlags,9),
SET_INT(oInteractType,8192),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_fading_warp_loop),
END_LOOP(),
}

const BehaviorScript bhvWarp[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,9),
SET_INT(oInteractType,8192),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_warp_loop),
END_LOOP(),
}

const BehaviorScript bhvDeathWarp[] = {
BREAK(),
}

const BehaviorScript bhvWarpPipe[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
SET_INT(oInteractType,8192),
LOAD_COLLISION_DATA(col_warp_pipe_geo_0xabbed4),
SET_FLOAT(oDrawingDistance,16000),
SET_INT(oIntangibleTimer,0),
SET_HITBOX(70,50),
BEGIN_LOOP(),
CALL_NATIVE( bhv_warp_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvAirborneStarCollectWarp[] = {
BREAK(),
}

const BehaviorScript bhvToadMessage[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,16457),
LOAD_ANIMATIONS(10022,100727880),
ANIMATE(6),
SET_INTERACT_TYPE(8388608),
SET_HITBOX(80,100),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_toad_message_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_toad_message_loop),
END_LOOP(),
}

const BehaviorScript bhv1Up[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
BILLBOARD(),
SET_HITBOX_WITH_OFFSET(30,30,0),
SET_FLOAT(oGraphYOffset,30),
CALL_NATIVE( bhv_1up_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_1up_loop),
END_LOOP(),
}

const BehaviorScript bhvCoinFormation[] = {
BEGIN(OBJ_LIST_SPAWNER),
OR_INT(oFlags,65),
CALL_NATIVE( bhv_coin_formation_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_coin_formation_loop),
END_LOOP(),
}

const BehaviorScript bhvExclamationBox[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_exclamation_box_geo_0xaa7794),
OR_INT(oFlags,1),
SET_FLOAT(oCollisionDistance,300),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_exclamation_box_loop),
END_LOOP(),
}

const BehaviorScript bhvButterfly[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,9),
LOAD_ANIMATIONS(10022,50353840),
DROP_TO_FLOOR(),
SET_FLOAT(oGraphYOffset,5),
CALL_NATIVE( bhv_butterfly_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_butterfly_loop),
END_LOOP(),
}

const BehaviorScript bhvTripletButterfly[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,50353840),
ANIMATE(0),
HIDE(),
SET_HOME(),
SET_OBJ_PHYSICS(0,0,0,0,1000,200,0,0),
SET_FLOAT(oUkikiTauntsToBeDone,1),
BEGIN_LOOP(),
CALL_NATIVE( bhv_triplet_butterfly_update),
END_LOOP(),
}

const BehaviorScript bhvGoomba[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,8265),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,134339148),
SET_HOME(),
SET_OBJ_PHYSICS(40,65136,65486,1000,1000,0,0,0),
CALL_NATIVE( bhv_goomba_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_goomba_update),
END_LOOP(),
}

const BehaviorScript bhvRecoveryHeart[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,8257),
BEGIN_LOOP(),
CALL_NATIVE( bhv_recovery_heart_loop),
END_LOOP(),
}

const BehaviorScript bhvHidden1upTrigger[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
SET_HITBOX(100,100),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_1up_hidden_trigger_loop),
END_LOOP(),
}

const BehaviorScript bhvHidden1up[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,8193),
BILLBOARD(),
SET_HITBOX_WITH_OFFSET(30,30,0),
SET_FLOAT(oGraphYOffset,30),
CALL_NATIVE( bhv_1up_common_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_1up_hidden_loop),
END_LOOP(),
}

const BehaviorScript bhvOneCoin[] = {
BEGIN(OBJ_LIST_LEVEL),
SET_INT(oBehParams2ndByte,1),
GOTO( Bhv_Custom_0x13000920),
}

const BehaviorScript Bhv_Custom_0x13000920[] = {
BILLBOARD(),
OR_INT(oFlags,65),
CALL_NATIVE( bhv_yellow_coin_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_yellow_coin_loop),
END_LOOP(),
}

const BehaviorScript bhvBobomb[] = {
BEGIN(OBJ_LIST_DESTRUCTIVE),
OR_INT(oFlags,25673),
LOAD_ANIMATIONS(10022,134363500),
DROP_TO_FLOOR(),
ANIMATE(0),
SET_INT(oIntangibleTimer,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_bobomb_loop),
END_LOOP(),
}

const BehaviorScript bhvFlyGuy[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8257),
LOAD_ANIMATIONS(10022,134290020),
ANIMATE(0),
SET_HOME(),
SET_OBJ_PHYSICS(50,0,0,0,1000,600,0,0),
CALL_NATIVE( bhv_init_room),
SET_INT(oInteractionSubtype,128),
SET_FLOAT(oGraphYOffset,30),
SCALE(0,150),
BEGIN_LOOP(),
CALL_NATIVE( bhv_fly_guy_update),
END_LOOP(),
}

const BehaviorScript bhvJumpingBox[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1089),
SET_OBJ_PHYSICS(30,65136,65486,1000,1000,600,0,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_jumping_box_loop),
END_LOOP(),
}

const BehaviorScript bhvStarDoor[] = {
BEGIN(OBJ_LIST_SURFACE),
SET_INT(oInteractType,4),
LOAD_COLLISION_DATA(col_None_0x83bfc4),
SET_INT(oInteractionSubtype,32),
OR_INT(oFlags,193),
SET_HITBOX(80,100),
SET_HOME(),
SET_FLOAT(oDrawingDistance,20000),
CALL_NATIVE( bhv_door_init),
SET_INT(oIntangibleTimer,0),
BEGIN(OBJ_LIST_PLAYER),
BEGIN_LOOP(),
CALL_NATIVE( bhv_star_door_loop),
CALL_NATIVE( load_object_collision_model),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvAirborneWarp[] = {
BREAK(),
}

const BehaviorScript bhvMrI[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,75),
SET_HOME(),
SPAWN_CHILD(102,318767244),
SET_MODEL(103),
BILLBOARD(),
BEGIN_LOOP(),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
CALL_NATIVE( bhv_mr_i_loop),
END_LOOP(),
}

const BehaviorScript bhvBalconyBigBoo[] = {
BEGIN(OBJ_LIST_GENACTOR),
SET_INT(oBehParams2ndByte,0),
SET_INT(oWigglerTextStatus,10),
GOTO( Bhv_Custom_0x13002794),
}

const BehaviorScript Bhv_Custom_0x13002794[] = {
OR_INT(oFlags,8265),
SET_HOME(),
SET_OBJ_PHYSICS(30,0,65486,1000,1000,200,0,0),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_boo_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_big_boo_loop),
END_LOOP(),
}

const BehaviorScript bhvStar[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_collect_star_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_collect_star_loop),
END_LOOP(),
}

const BehaviorScript bhvSlidingPlatform2[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
SCALE(0,32),
CALL_NATIVE( bhv_rotating_octagonal_plat_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_rotating_octagonal_plat_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvHiddenRedCoinStar[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,16385),
CALL_NATIVE( bhv_hidden_red_coin_star_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_red_coin_star_loop),
END_LOOP(),
}

const BehaviorScript bhvRedCoin[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
BILLBOARD(),
SET_INT(oIntangibleTimer,0),
SET_INT(oAnimState,65535),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_red_coin_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_red_coin_loop),
ADD_INT(oAnimState,1),
END_LOOP(),
}

const BehaviorScript Bhv_Custom_0x1300012c[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_rr_geo_0008C0_0xfab809),
GOTO( Bhv_Custom_0x13003b70),
}

const BehaviorScript Bhv_Custom_0x13003b70[] = {
ADD_FLOAT(oPosY,65230),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvGiantPole[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_rr_geo_000678_0xfb0201),
GOTO( Bhv_Custom_0x13001cbc),
}

const BehaviorScript Bhv_Custom_0x13001cbc[] = {
OR_INT(oFlags,1),
SET_HOME(),
SCALE(0,91),
CALL_NATIVE( bhv_horizontal_grindel_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_squishable_platform_loop),
CALL_NATIVE( bhv_squishable_platform_loop),
CALL_NATIVE( load_object_collision_model),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvGoombaTripletSpawner[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,65),
DROP_TO_FLOOR(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_goomba_triplet_spawner_update),
END_LOOP(),
}

const BehaviorScript bhvFlyingBookend[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,83895616),
ANIMATE(0),
SET_OBJ_PHYSICS(60,0,65486,1000,1000,200,0,0),
SET_INT(oMoveFlags,0),
SCALE(0,70),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_flying_bookend_loop),
END_LOOP(),
}

const BehaviorScript bhvPlatformOnTrack[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,8257),
SET_OBJ_PHYSICS(50,65436,65486,100,1000,200,0,0),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_platform_on_track_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_platform_on_track_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvTree[] = {
BEGIN(OBJ_LIST_POLELIKE),
BILLBOARD(),
OR_INT(oFlags,1),
SET_INT(oInteractType,64),
SET_HITBOX(80,500),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_pole_base_loop),
END_LOOP(),
}

const BehaviorScript bhvBoo[] = {
BEGIN(OBJ_LIST_GENACTOR),
SET_INT(oBehParams2ndByte,1),
GOTO( Bhv_Custom_0x13002808),
}

const BehaviorScript Bhv_Custom_0x13002808[] = {
OR_INT(oFlags,8265),
SET_INT(oIntangibleTimer,0),
SET_HOME(),
SET_INT(oDamageOrCoinValue,2),
SET_HITBOX(140,80),
SET_HURTBOX(40,60),
SET_FLOAT(oGraphYOffset,30),
CALL_NATIVE( bhv_init_room),
SPAWN_CHILD(116,318769288),
SET_OBJ_PHYSICS(30,0,65486,1000,1000,200,0,0),
CALL_NATIVE( bhv_boo_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_boo_loop),
END_LOOP(),
}

const BehaviorScript bhvScuttlebug[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,73),
LOAD_ANIMATIONS(10022,100749412),
ANIMATE(0),
SET_OBJ_PHYSICS(80,65136,65486,0,0,200,0,0),
SET_HOME(),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_scuttlebug_loop),
END_LOOP(),
}

const BehaviorScript bhvBobombBuddy[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9289),
LOAD_ANIMATIONS(10022,134363500),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
}

const BehaviorScript bhvBlueCoinSwitch[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_blue_coin_switch_geo_0xa826b4),
BEGIN_LOOP(),
CALL_NATIVE( bhv_blue_coin_switch_loop),
END_LOOP(),
}

const BehaviorScript bhvHiddenBlueCoin[] = {
BEGIN(OBJ_LIST_LEVEL),
SET_INT(oInteractType,16),
OR_INT(oFlags,193),
BILLBOARD(),
SET_HITBOX(100,64),
SET_INT(oDamageOrCoinValue,5),
SET_INT(oIntangibleTimer,0),
SET_INT(oAnimState,65535),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_blue_coin_loop),
ADD_INT(oAnimState,1),
END_LOOP(),
}

const BehaviorScript bhvKickableBoard[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_rr_geo_000690_0xfb1dc9),
GOTO( Bhv_Custom_0x13001528),
}

const BehaviorScript Bhv_Custom_0x13001528[] = {
SET_FLOAT(oCollisionDistance,500),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_pushable_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript Bhv_Custom_0x13000684[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_rr_geo_0006A8_0xfb6a89),
GOTO( Bhv_Custom_0x13001418),
}

const BehaviorScript Bhv_Custom_0x13001418[] = {
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_squarish_path_moving_loop),
END_LOOP(),
}

const BehaviorScript bhvBitfsTiltingInvertedPyramid[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_rr_geo_0006C0_0xfa9149),
SET_HOME(),
BEGIN_LOOP(),
SET_INT(oAngleVelYaw,256),
ADD_INT(oMoveAngleYaw,256),
CALL_NATIVE( load_object_collision_model),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvHiddenObject[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_breakable_box_geo_0xa9458c),
SET_FLOAT(oCollisionDistance,300),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_object_loop),
END_LOOP(),
}

const BehaviorScript bhvFloorSwitchHiddenObjects[] = {
BEGIN(OBJ_LIST_SURFACE),
SET_INT(oBehParams2ndByte,2),
GOTO( Bhv_Custom_0x13001488),
}

const BehaviorScript Bhv_Custom_0x13001488[] = {
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_purple_switch_geo_0xa8dfc4),
BEGIN_LOOP(),
CALL_NATIVE( bhv_purple_switch_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvPoleGrabbing[] = {
BEGIN(OBJ_LIST_POLELIKE),
OR_INT(oFlags,1),
SET_INT(oInteractType,64),
SET_HITBOX(80,1500),
CALL_NATIVE( bhv_pole_init),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_pole_base_loop),
END_LOOP(),
}

const BehaviorScript bhvCheckerboardElevatorGroup[] = {
BEGIN(OBJ_LIST_SPAWNER),
OR_INT(oFlags,1),
CALL_NATIVE( bhv_checkerboard_elevator_group_init),
DELAY(1),
DEACTIVATE(),
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,65),
LOAD_COLLISION_DATA(col_None_0xa8ef2c),
CALL_NATIVE( bhv_checkerboard_platform_init),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_checkerboard_platform_loop),
END_LOOP(),
}

const BehaviorScript bhvClamShell[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,83892036),
SET_FLOAT(oGraphYOffset,10),
BEGIN_LOOP(),
CALL_NATIVE( bhv_clam_loop),
END_LOOP(),
}

const BehaviorScript bhvPushableMetalBox[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_metal_box_geo_0xaa6444),
SET_FLOAT(oCollisionDistance,500),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_pushable_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvChirpChirp[] = {
BEGIN(OBJ_LIST_DEFAULT),
SET_INT(oUkikiTauntsToBeDone,1),
GOTO( bhvChirpChirpUnused),
}

const BehaviorScript bhvLargeFishGroup[] = {
BEGIN(OBJ_LIST_DEFAULT),
DISABLE_RENDERING(),
}

const BehaviorScript bhvChuckya[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1097),
LOAD_ANIMATIONS(10022,134266992),
ANIMATE(5),
SET_INT(oInteractType,2),
SET_HITBOX(150,100),
SET_OBJ_PHYSICS(30,65136,65486,1000,1000,200,0,0),
SPAWN_OBJ(0,318768516),
SET_INT(oNumLootCoins,5),
SET_INT(oIntangibleTimer,0),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_chuckya_loop),
END_LOOP(),
}

const BehaviorScript bhvWfTumblingBridge[] = {
BEGIN(OBJ_LIST_SPAWNER),
OR_INT(oFlags,193),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tumbling_bridge_loop),
END_LOOP(),
}

const BehaviorScript bhvHomingAmp[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8267),
LOAD_ANIMATIONS(10022,134234164),
ANIMATE(0),
SET_FLOAT(oGraphYOffset,40),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_homing_amp_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_homing_amp_loop),
END_LOOP(),
}

const BehaviorScript bhvMessagePanel[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_wooden_signpost_geo_0xae018c),
SET_INTERACT_TYPE(8388608),
SET_INT(oInteractionSubtype,4096),
DROP_TO_FLOOR(),
SET_HITBOX(150,80),
SET_INT(oUkikiTauntsToBeDone,0),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( load_object_collision_model),
SET_INT(oInteractStatus,0),
END_LOOP(),
}

const BehaviorScript bhvCirclingAmp[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8259),
LOAD_ANIMATIONS(10022,134234164),
ANIMATE(0),
SET_FLOAT(oGraphYOffset,40),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_circling_amp_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_circling_amp_loop),
END_LOOP(),
}

const BehaviorScript bhvBreakableBox[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_breakable_box_geo_0xa9458c),
SET_FLOAT(oCollisionDistance,500),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_breakable_box_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvBreakableBoxSmall[] = {
BEGIN(OBJ_LIST_DESTRUCTIVE),
OR_INT(oFlags,1097),
DROP_TO_FLOOR(),
SET_HOME(),
CALL_NATIVE( bhv_breakable_box_small_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_breakable_box_small_loop),
END_LOOP(),
}

const BehaviorScript bhvSeaweedBundle[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
DROP_TO_FLOOR(),
CALL_NATIVE( bhv_seaweed_bundle_init),
BEGIN_LOOP(),
END_LOOP(),
}

const BehaviorScript bhvSkeeter[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,100695520),
SET_HOME(),
SET_OBJ_PHYSICS(180,65136,65486,1000,1000,1200,0,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_skeeter_update),
END_LOOP(),
}

const BehaviorScript bhvSmallBomp[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,193),
LOAD_COLLISION_DATA(col_wf_geo_000A00_0x10add0b),
SET_HITBOX(200,200),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tower_door_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvSpinAirborneWarp[] = {
BREAK(),
}

const BehaviorScript bhvFallingPillar[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8193),
SET_HOME(),
CALL_NATIVE( bhv_falling_pillar_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_falling_pillar_loop),
END_LOOP(),
}

const BehaviorScript bhvJrbFloatingPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_jrb_geo_000948_0xf4f02d),
SET_FLOAT(oYoshiChosenHome,64),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_floating_platform_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvBobombBuddyOpensCannon[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,25673),
LOAD_ANIMATIONS(10022,134363500),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,1),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
}

const BehaviorScript bhvTreasureChests[] = {
BEGIN_LOOP(),
CALL_NATIVE( bhv_bowser_loop),
CALL_NATIVE( bhv_bowser_loop),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvFish3[] = {
BEGIN(OBJ_LIST_DEFAULT),
SET_INT(oBehParams2ndByte,1),
GOTO( Bhv_Custom_0x13002160),
}

const BehaviorScript Bhv_Custom_0x13002160[] = {
DISABLE_RENDERING(),
}

const BehaviorScript bhvThiHugeIslandTop[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,8257),
BILLBOARD(),
SCALE(0,1280),
BEGIN_LOOP(),
CALL_NATIVE( bhv_recovery_heart_loop),
END_LOOP(),
}

const BehaviorScript bhvCannonClosed[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,16385),
LOAD_COLLISION_DATA(col_cannon_lid_seg8_dl_080048E0_0xa8616c),
SET_HOME(),
CALL_NATIVE( bhv_cannon_closed_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_cannon_closed_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvBowserBomb[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1),
SET_INT(oIntangibleTimer,0),
SET_HITBOX_WITH_OFFSET(40,40,40),
DELAY(1),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bowser_bomb_loop),
END_LOOP(),
}

const BehaviorScript bhvShipPart3[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_jrb_geo_000930_0xf4a1f1),
SET_FLOAT(oCollisionDistance,500),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_breakable_box_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvSunkenShipPart[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8267),
SET_HOME(),
SET_HITBOX_WITH_OFFSET(50,50,50),
SET_INTERACT_TYPE(8),
SET_INT(oDamageOrCoinValue,3),
SCALE(0,256),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bullet_bill_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_bullet_bill_loop),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvFish2[] = {
BEGIN(OBJ_LIST_DEFAULT),
SET_INT(oBehParams2ndByte,0),
GOTO( Bhv_Custom_0x13002160),
}

const BehaviorScript Bhv_Custom_0x13002160[] = {
DISABLE_RENDERING(),
}

const BehaviorScript bhvWhirlpool[] = {
BEGIN(OBJ_LIST_POLELIKE),
OR_INT(oFlags,65),
CALL_NATIVE( bhv_whirlpool_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_whirlpool_loop),
END_LOOP(),
}

const BehaviorScript bhvKoopaShellUnderwater[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1089),
BEGIN_LOOP(),
CALL_NATIVE( bhv_koopa_shell_underwater_loop),
END_LOOP(),
}

const BehaviorScript bhvJetStreamRingSpawner[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,8257),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_platform_on_track_init),
LOAD_COLLISION_DATA(col_jrb_geo_000978_0xf4be31),
BEGIN_LOOP(),
CALL_NATIVE( bhv_platform_on_track_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvCameraLakitu[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,17),
LOAD_COLLISION_DATA(col_ttm_geo_0007A8_0x117ee13),
GOTO( Bhv_Custom_0x13000d40),
}

const BehaviorScript Bhv_Custom_0x13000d40[] = {
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvWigglerHead[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8257),
LOAD_ANIMATIONS(10022,83946636),
SET_HOME(),
SET_OBJ_PHYSICS(60,65136,0,1000,1000,200,0,0),
SCALE(0,400),
SET_FLOAT(oUkikiTauntsToBeDone,5000),
BEGIN_LOOP(),
CALL_NATIVE( bhv_wiggler_update),
CALL_NATIVE( bhv_wiggler_update),
END_LOOP(),
}

const BehaviorScript bhvUkikiCage[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9257),
LOAD_ANIMATIONS(10022,100751140),
SET_INTERACT_TYPE(8388608),
DROP_TO_FLOOR(),
SET_HITBOX(100,60),
ANIMATE(0),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
}

const BehaviorScript bhvWfBreakableWallLeft[] = {
BEGIN(OBJ_LIST_LEVEL),
BILLBOARD(),
OR_INT(oFlags,65),
SCALE(0,20),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_red_coin_init),
CALL_NATIVE( bhv_yellow_coin_loop),
ADD_INT(oAnimState,1),
END_LOOP(),
}

const BehaviorScript bhvLllDrawbridgeSpawner[] = {
BEGIN(OBJ_LIST_POLELIKE),
BILLBOARD(),
OR_INT(oFlags,1),
SET_INT(oInteractType,64),
SET_HITBOX(80,500),
SET_INT(oIntangibleTimer,0),
SCALE(0,48),
BEGIN_LOOP(),
CALL_NATIVE( bhv_pole_base_loop),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvSpiny[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,83979948),
ANIMATE(0),
SET_OBJ_PHYSICS(40,65136,65486,1000,1000,200,0,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_spiny_update),
END_LOOP(),
}

const BehaviorScript bhvEnemyLakitu[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,8257),
LOAD_ANIMATIONS(10022,83969236),
ANIMATE(0),
SET_HOME(),
SET_OBJ_PHYSICS(40,0,65486,0,0,200,0,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_enemy_lakitu_update),
END_LOOP(),
}

const BehaviorScript bhvBirdsSoundLoop[] = {
BEGIN(OBJ_LIST_DEFAULT),
BEGIN_LOOP(),
CALL_NATIVE( bhv_birds_sound_loop),
END_LOOP(),
}

const BehaviorScript bhvBetaFishSplashSpawner[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,65),
DISABLE_RENDERING(),
}

const BehaviorScript Bhv_Custom_0x1300496c[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_ttm_geo_000990_0x11827cb),
GOTO( Bhv_Custom_0x13003b70),
}

const BehaviorScript Bhv_Custom_0x13003b70[] = {
ADD_FLOAT(oPosY,65230),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvHidden1upInPoleSpawner[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
BEGIN_LOOP(),
CALL_NATIVE( bhv_1up_hidden_in_pole_spawner_loop),
END_LOOP(),
}

const BehaviorScript bhvDDDPole[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8393),
LOAD_ANIMATIONS(10022,100815224),
ANIMATE(0),
SET_OBJ_PHYSICS(0,65136,65486,0,1000,200,0,0),
SET_HOME(),
SET_FLOAT(oGraphYOffset,240),
SCALE(0,168),
BEGIN_LOOP(),
CALL_NATIVE( bhv_chain_chomp_update),
END_LOOP(),
}

const BehaviorScript bhvHiddenStarTrigger[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
SET_HITBOX(200,200),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_star_trigger_loop),
END_LOOP(),
}

const BehaviorScript bhvKingBobomb[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8393),
LOAD_ANIMATIONS(10022,83951152),
SET_INT(oInteractType,2),
SET_HITBOX(100,100),
SET_OBJ_PHYSICS(30,65136,65486,1000,1000,200,0,0),
SET_INT(oIntangibleTimer,0),
SET_HOME(),
SPAWN_OBJ(0,318767700),
SET_INT(oHealth,3),
BEGIN_LOOP(),
CALL_NATIVE( bhv_king_bobomb_loop),
CALL_NATIVE( bhv_king_bobomb_loop),
END_LOOP(),
}

const BehaviorScript bhvHiddenStar[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,16385),
CALL_NATIVE( bhv_hidden_star_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hidden_star_loop),
END_LOOP(),
}

const BehaviorScript bhvWaterBombCannon[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,65),
BEGIN_LOOP(),
CALL_NATIVE( bhv_water_bomb_cannon_loop),
END_LOOP(),
}

const BehaviorScript bhvWaterBombSpawner[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,65),
DROP_TO_FLOOR(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_water_bomb_spawner_update),
END_LOOP(),
}

const BehaviorScript bhvWoodenPost[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_wooden_post_geo_0xa0bdc4),
OR_INT(oFlags,8257),
SET_INT(oNumLootCoins,5),
DROP_TO_FLOOR(),
SET_HOME(),
SCALE(0,50),
BEGIN_LOOP(),
CALL_NATIVE( bhv_wooden_post_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvChainChomp[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_hmc_geo_000530_0xeacf27),
SET_FLOAT(oCollisionDistance,500),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
CALL_NATIVE( bhv_breakable_box_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvSquishablePlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,17),
LOAD_COLLISION_DATA(col_hmc_geo_000570_0xeb0f6f),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvBigChillBully[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9),
LOAD_ANIMATIONS(10022,100678036),
DROP_TO_FLOOR(),
SCALE(0,176),
SET_INT(oUkikiTauntsToBeDone,16),
CALL_NATIVE( bhv_big_bully_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bully_loop),
END_LOOP(),
}

const BehaviorScript bhvSmallChillBully[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9),
LOAD_ANIMATIONS(10022,100678036),
DROP_TO_FLOOR(),
SET_HOME(),
SET_INT(oUkikiTauntsToBeDone,16),
CALL_NATIVE( bhv_small_bully_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bully_loop),
END_LOOP(),
}

const BehaviorScript bhvMoneybagHidden[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
SET_FLOAT(oGraphYOffset,27),
BILLBOARD(),
SET_HITBOX(110,100),
SET_INT(oIntangibleTimer,0),
SET_INT(oAnimState,65535),
BEGIN_LOOP(),
ADD_INT(oAnimState,1),
CALL_NATIVE( bhv_moneybag_hidden_loop),
END_LOOP(),
}

const BehaviorScript bhvTuxiesMother[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,83921780),
ANIMATE(3),
SET_OBJ_PHYSICS(30,65136,65486,0,0,0,0,0),
SET_HOME(),
SET_INTERACT_TYPE(8388608),
SET_HITBOX(200,300),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tuxies_mother_loop),
END_LOOP(),
}

const BehaviorScript bhvSmallPenguin[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9289),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,83921780),
ANIMATE(0),
SET_OBJ_PHYSICS(30,65136,65486,0,0,200,0,0),
SET_INT(oInteractType,2),
SET_INT(oInteractionSubtype,16),
SET_INT(oIntangibleTimer,0),
SET_HITBOX(40,40),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_small_penguin_loop),
END_LOOP(),
}

const BehaviorScript bhvSpindrift[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,73),
LOAD_ANIMATIONS(10022,83897704),
ANIMATE(0),
SET_OBJ_PHYSICS(30,65136,0,0,0,200,0,0),
SET_HOME(),
SET_INT(oInteractionSubtype,128),
BEGIN_LOOP(),
CALL_NATIVE( bhv_spindrift_loop),
END_LOOP(),
}

const BehaviorScript bhvMrBlizzard[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,83939608),
ANIMATE(0),
SET_HOME(),
SET_OBJ_PHYSICS(30,65136,0,1000,1000,200,0,0),
CALL_NATIVE( bhv_mr_blizzard_init),
SET_FLOAT(oUkikiTauntsToBeDone,1),
BEGIN_LOOP(),
CALL_NATIVE( bhv_mr_blizzard_update),
END_LOOP(),
}

const BehaviorScript bhvBouncingFireball[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,65),
DISABLE_RENDERING(),
}

const BehaviorScript bhvFlamethrower[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,73),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_flamethrower_loop),
END_LOOP(),
}

const BehaviorScript bhvKlepto[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,134290020),
SET_HOME(),
SET_OBJ_PHYSICS(40,65136,65486,1000,1000,0,0,0),
CALL_NATIVE( bhv_goomba_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_goomba_update),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvSnowMoundSpawn[] = {
BEGIN(OBJ_LIST_DEFAULT),
BEGIN_LOOP(),
CALL_NATIVE( bhv_snow_mound_spawn_loop),
END_LOOP(),
}

const BehaviorScript bhvRacingPenguin[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8393),
LOAD_ANIMATIONS(10022,83921780),
ANIMATE(3),
SET_OBJ_PHYSICS(30,65136,0,0,0,200,0,0),
SCALE(0,256),
CALL_NATIVE( bhv_racing_penguin_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_racing_penguin_update),
END_LOOP(),
}

const BehaviorScript bhvPenguinRaceShortcutCheck[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,65),
BEGIN_LOOP(),
CALL_NATIVE( bhv_penguin_race_shortcut_check_update),
END_LOOP(),
}

const BehaviorScript bhvPlaysMusicTrackWhenTouched[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,65),
BEGIN_LOOP(),
CALL_NATIVE( bhv_play_music_track_when_touched_loop),
END_LOOP(),
}

const BehaviorScript bhvPenguinRaceFinishLine[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,193),
BEGIN_LOOP(),
CALL_NATIVE( bhv_penguin_race_finish_line_update),
END_LOOP(),
}

const BehaviorScript Bhv_Custom_0x13004cc8[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_collect_star_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_collect_star_loop),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
END_LOOP(),
}

const BehaviorScript bhvMovingBlueCoin[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
BILLBOARD(),
SET_INT(oIntangibleTimer,0),
SET_INT(oAnimState,65535),
CALL_NATIVE( bhv_moving_blue_coin_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_moving_blue_coin_loop),
ADD_INT(oAnimState,1),
END_LOOP(),
}

const BehaviorScript bhvFireSpitter[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8257),
BILLBOARD(),
SCALE(0,40),
BEGIN_LOOP(),
CALL_NATIVE( bhv_fire_spitter_update),
END_LOOP(),
}

const BehaviorScript bhvSmallWhomp[] = {
BEGIN(OBJ_LIST_SURFACE),
SET_INT(oNumLootCoins,5),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,100796932),
LOAD_COLLISION_DATA(col_whomp_geo_0xa2a340),
ANIMATE(0),
SET_OBJ_PHYSICS(0,65136,65486,0,0,200,0,0),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_whomp_loop),
END_LOOP(),
}

const BehaviorScript bhvSLWalkingPenguin[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9289),
LOAD_ANIMATIONS(10022,83921780),
ANIMATE(3),
SET_INTERACT_TYPE(8388608),
SET_HITBOX(100,60),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
SCALE(0,256),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvBeginningPeach[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_ttm_geo_000DF4_0x119e9b3),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_volcano_trap_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvHoot[] = {
BEGIN(OBJ_LIST_POLELIKE),
OR_INT(oFlags,9),
LOAD_ANIMATIONS(10022,83908456),
SET_INT(oInteractType,1),
SET_HITBOX(75,75),
CALL_NATIVE( bhv_hoot_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_hoot_loop),
END_LOOP(),
}

const BehaviorScript bhvPiranhaPlant[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,100778780),
ANIMATE(0),
SET_INTERACT_TYPE(8),
SET_HITBOX(100,200),
SET_HURTBOX(50,200),
SET_INT(oIntangibleTimer,0),
SET_INT(oDamageOrCoinValue,3),
SET_INT(oNumLootCoins,5),
SPAWN_CHILD(168,318772268),
SET_FLOAT(oDrawingDistance,2000),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_piranha_plant_loop),
END_LOOP(),
}

const BehaviorScript bhvSpinAirborneCircleWarp[] = {
BREAK(),
}

const BehaviorScript bhvLllTiltingInvertedPyramid[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,73),
LOAD_COLLISION_DATA(col_geo_bbh_0005F8_0xdd10c5),
ADD_FLOAT(oPosY,5),
SET_HOME(),
CALL_NATIVE( bhv_platform_normals_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tilting_inverted_pyramid_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript Bhv_Custom_0x13001e68[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_geo_bbh_0005C8_0xdd0c1d),
SET_INT_RAND_RSHIFT(oYoshiTargetYaw,1,32),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_arrow_lift_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvRockSolid[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,17),
LOAD_COLLISION_DATA(col_geo_bbh_0005B0_0xdd07f5),
GOTO( Bhv_Custom_0x13004864),
}

const BehaviorScript Bhv_Custom_0x13004864[] = {
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvSwoop[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,100692176),
SET_HOME(),
SET_OBJ_PHYSICS(50,0,65486,0,0,0,0,0),
CALL_NATIVE( bhv_init_room),
SCALE(0,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_swoop_update),
END_LOOP(),
}

const BehaviorScript bhvSnufit[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
SET_HOME(),
SET_OBJ_PHYSICS(30,0,65486,0,0,0,0,0),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
SET_INT(oUkikiTauntsToBeDone,0),
CALL_NATIVE( bhv_snufit_loop),
END_LOOP(),
}

const BehaviorScript bhvBowserSubDoor[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,17),
LOAD_COLLISION_DATA(col_geo_bbh_000628_0xdd160d),
GOTO( Bhv_Custom_0x13004864),
}

const BehaviorScript Bhv_Custom_0x13004864[] = {
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvMantaRay[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,8257),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_platform_on_track_init),
LOAD_COLLISION_DATA(col_checkerboard_platform_geo_0xdd18d5),
GOTO( Bhv_Custom_0x13003758),
}

const BehaviorScript Bhv_Custom_0x13003758[] = {
BEGIN_LOOP(),
CALL_NATIVE( bhv_platform_on_track_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvVolcanoSoundLoop[] = {
BEGIN(OBJ_LIST_DEFAULT),
BEGIN_LOOP(),
CALL_NATIVE( bhv_volcano_sound_loop),
END_LOOP(),
}

const BehaviorScript Bhv_Custom_0x13000fc0[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,73),
LOAD_COLLISION_DATA(col_geo_bbh_000640_0xa71f04),
ADD_FLOAT(oPosY,5),
SET_FLOAT(oCollisionDistance,2000),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_sinking_square_platforms_loop),
CALL_NATIVE( bhv_lll_sinking_square_platforms_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvSmallBully[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9),
LOAD_ANIMATIONS(10022,83904268),
DROP_TO_FLOOR(),
SET_HOME(),
CALL_NATIVE( bhv_small_bully_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bully_loop),
END_LOOP(),
}

const BehaviorScript bhvBobBowlingBallSpawner[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1),
SET_INT(oYoshiChosenHome,127),
CALL_NATIVE( bhv_generic_bowling_ball_spawner_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_generic_bowling_ball_spawner_loop),
END_LOOP(),
}

const BehaviorScript bhvControllablePlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,2081),
LOAD_COLLISION_DATA(col_hmc_geo_0005A0_0xeb82ff),
SET_HOME(),
CALL_NATIVE( bhv_controllable_platform_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_controllable_platform_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvBulletBill[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8267),
SET_HOME(),
SET_HITBOX_WITH_OFFSET(50,50,50),
SET_INTERACT_TYPE(8),
SET_INT(oDamageOrCoinValue,3),
SCALE(0,40),
SET_INT(oIntangibleTimer,0),
SET_OBJ_PHYSICS(30,0,0,0,0,0,0,0),
CALL_NATIVE( bhv_bullet_bill_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_bullet_bill_loop),
END_LOOP(),
}

const BehaviorScript bhvHeaveHo[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9289),
LOAD_ANIMATIONS(10022,83972940),
ANIMATE(0),
SET_OBJ_PHYSICS(200,65136,65486,1000,1000,600,0,0),
SPAWN_OBJ(0,318772644),
SET_INT(oInteractType,2),
SET_INT(oInteractionSubtype,516),
SET_HITBOX(120,100),
SET_HOME(),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_heave_ho_loop),
END_LOOP(),
}

const BehaviorScript bhvThwomp[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_thwomp_geo_0x86c6ac),
OR_INT(oFlags,73),
DROP_TO_FLOOR(),
ADD_FLOAT(oPosY,1),
SCALE(0,140),
SET_HOME(),
SET_FLOAT(oDrawingDistance,4000),
BEGIN_LOOP(),
CALL_NATIVE( bhv_grindel_thwomp_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvStaticObject[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,1),
BREAK(),
}

const BehaviorScript bhvWfSlidingTowerPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_hmc_geo_000548_0xeb0097),
ADD_FLOAT(oPosY,65486),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvTTCPitBlock[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,201),
SET_INT(oInteractType,16384),
ADD_FLOAT(oPosY,65196),
SET_HOME(),
SET_HITBOX(150,166),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_cannon_base_loop),
END_LOOP(),
}

const BehaviorScript bhvDoor[] = {
BEGIN(OBJ_LIST_SURFACE),
SET_INT(oInteractType,4),
OR_INT(oFlags,201),
LOAD_ANIMATIONS(10022,50419392),
ANIMATE(0),
LOAD_COLLISION_DATA(col_metal_door_geo_0xacf284),
SET_HITBOX(80,100),
SET_INT(oIntangibleTimer,0),
SET_FLOAT(oCollisionDistance,1000),
SET_HOME(),
CALL_NATIVE( bhv_door_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_door_loop),
END_LOOP(),
}

const BehaviorScript bhvCheckerboardPlatformSub[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,65),
LOAD_COLLISION_DATA(col_checkerboard_platform_geo_0xa8ef2c),
CALL_NATIVE( bhv_checkerboard_platform_init),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_checkerboard_platform_loop),
END_LOOP(),
}

const BehaviorScript bhvThiBowlingBallSpawner[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1),
BEGIN_LOOP(),
CALL_NATIVE( bhv_thi_bowling_ball_spawner_loop),
END_LOOP(),
}

const BehaviorScript bhvPyramidTop[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_ssl_geo_000630_0xed2bcb),
OR_INT(oFlags,1097),
ADD_FLOAT(oPosY,256),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_chuckya_loop),
CALL_NATIVE( bhv_spindrift_loop),
SCALE(0,64),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvCoffinSpawner[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_ssl_geo_000630_0xed2bcb),
OR_INT(oFlags,1097),
ADD_FLOAT(oPosY,256),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_spindrift_loop),
SCALE(0,64),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvSslMovingPyramidWall[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_ssl_geo_000794_0xee8613),
OR_INT(oFlags,1097),
SET_FLOAT(oCollisionDistance,450),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ttc_spinner_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvTowerDoor[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,17),
LOAD_COLLISION_DATA(col_ssl_geo_000764_0xee84db),
SET_HOME(),
CALL_NATIVE( bhv_ttc_moving_bar_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ttc_moving_bar_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvMacroUkiki[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_ssl_geo_000734_0xee8457),
OR_INT(oFlags,1),
SET_HOME(),
SCALE(0,91),
CALL_NATIVE( bhv_horizontal_grindel_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_squishable_platform_loop),
CALL_NATIVE( bhv_squishable_platform_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvEyerokBoss[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8257),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_eyerok_boss_loop),
END_LOOP(),
}

const BehaviorScript bhvDoorWarp[] = {
BEGIN(OBJ_LIST_SURFACE),
SET_INT(oInteractType,2048),
GOTO( Bhv_Custom_0x13000b14),
}

const BehaviorScript Bhv_Custom_0x13000b14[] = {
OR_INT(oFlags,201),
LOAD_ANIMATIONS(10022,50419392),
ANIMATE(0),
LOAD_COLLISION_DATA(col_key_door_geo_0xacf284),
SET_HITBOX(80,100),
SET_INT(oIntangibleTimer,0),
SET_FLOAT(oCollisionDistance,1000),
SET_HOME(),
CALL_NATIVE( bhv_door_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_door_loop),
END_LOOP(),
}

const BehaviorScript bhvMips[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1033),
LOAD_ANIMATIONS(10022,100751140),
SET_INT(oInteractType,2),
DROP_TO_FLOOR(),
SET_HITBOX(50,75),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_mips_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_mips_loop),
END_LOOP(),
}

const BehaviorScript bhvYoshi[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9289),
LOAD_ANIMATIONS(10022,84034024),
SET_INTERACT_TYPE(8388608),
SET_HITBOX(160,150),
ANIMATE(0),
CALL_NATIVE( bhv_bobomb_buddy_init),
CALL_NATIVE( Func_Custom_0x803112f0),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
}

const BehaviorScript bhvPaintingStarCollectWarp[] = {
BREAK(),
}

const BehaviorScript bhvPaintingDeathWarp[] = {
BREAK(),
}

const BehaviorScript bhvBird[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,83888616),
ANIMATE(0),
HIDE(),
SCALE(0,70),
BEGIN_LOOP(),
CALL_NATIVE( bhv_bird_update),
END_LOOP(),
}

const BehaviorScript bhvLaunchStarCollectWarp[] = {
BREAK(),
}

const BehaviorScript bhvLaunchDeathWarp[] = {
BREAK(),
}

const BehaviorScript bhvMadPiano[] = {
BEGIN(OBJ_LIST_DEFAULT),
CALL_NATIVE( bhv_mad_piano_update),
BEGIN_LOOP(),
END_LOOP(),
}

const BehaviorScript bhvMontyMoleHole[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,8257),
DROP_TO_FLOOR(),
SCALE(0,150),
BEGIN_LOOP(),
CALL_NATIVE( bhv_monty_mole_hole_update),
END_LOOP(),
}

const BehaviorScript bhvMontyMole[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
DROP_TO_FLOOR(),
LOAD_ANIMATIONS(10022,83915336),
ANIMATE(3),
SET_OBJ_PHYSICS(30,0,65486,1000,1000,200,0,0),
HIDE(),
SET_INT(oIntangibleTimer,65535),
SET_FLOAT(oGraphYOffset,65476),
SCALE(0,150),
DELAY(1),
CALL_NATIVE( bhv_monty_mole_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_monty_mole_update),
END_LOOP(),
}

const BehaviorScript bhvLllSinkingRockBlock[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_lll_geo_000DD0_0x10757a3),
ADD_FLOAT(oPosY,65486),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvLllRollingLog[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_lll_geo_000DE8_0x107581b),
SET_HOME(),
SET_FLOAT(oCollisionDistance,2000),
CALL_NATIVE( bhv_lll_rolling_log_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_rolling_log_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvClockMinuteHand[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1033),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_collect_star_init),
CALL_NATIVE( bhv_boo_with_cage_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_collect_star_loop),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvBookendSpawn[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_lll_geo_000DD0_0xa9458c),
SET_FLOAT(oCollisionDistance,500),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_boo_with_cage_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_breakable_box_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvCapSwitch[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_cap_switch_geo_0x913d94),
BEGIN_LOOP(),
CALL_NATIVE( bhv_cap_switch_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvFloorSwitchAnimatesObject[] = {
BEGIN(OBJ_LIST_SURFACE),
SET_INT(oBehParams2ndByte,1),
GOTO( Bhv_Custom_0x13001488),
}

const BehaviorScript Bhv_Custom_0x13001488[] = {
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_purple_switch_geo_0xa8dfc4),
BEGIN_LOOP(),
CALL_NATIVE( bhv_purple_switch_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvAnimatesOnFloorSwitchPress[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,65),
SET_FLOAT(oCollisionDistance,8000),
CALL_NATIVE( bhv_animates_on_floor_switch_press_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_animates_on_floor_switch_press_loop),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvRrRotatingBridgePlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_rr_geo_0007E8_0xfa72f1),
SET_HOME(),
BEGIN_LOOP(),
SET_INT(oAngleVelYaw,256),
ADD_INT(oMoveAngleYaw,256),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvThiTinyIslandTop[] = {
BEGIN(OBJ_LIST_DEFAULT),
CALL_NATIVE( bhv_thi_tiny_island_top_loop),
BEGIN_LOOP(),
END_LOOP(),
}

const BehaviorScript bhvWaterLevelPillar[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9417),
LOAD_ANIMATIONS(10022,100778780),
ANIMATE(0),
SET_INTERACT_TYPE(2097152),
SET_HITBOX(400,400),
BEGIN(OBJ_LIST_PLAYER),
BEGIN_LOOP(),
END_LOOP(),
}

const BehaviorScript bhvBowser[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9417),
SET_INT(oInteractType,2),
SET_HITBOX(400,400),
DROP_TO_FLOOR(),
SET_HOME(),
LOAD_ANIMATIONS(10022,101021664),
SPAWN_CHILD(0,318773452),
SPAWN_CHILD(101,318773508),
SPAWN_OBJ(0,318773288),
SET_INT(oNumLootCoins,50),
SET_OBJ_PHYSICS(0,65136,65466,1000,1000,200,0,0),
SET_HOME(),
CALL_NATIVE( bhv_bowser_init),
BEGIN(OBJ_LIST_PLAYER),
GOTO( bhvTreasureChests),
}

const BehaviorScript bhvTiltingBowserLavaPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,65),
ADD_FLOAT(oPosY,65486),
LOAD_COLLISION_DATA(col_ttm_geo_000920_0x117d853),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_moving_octagonal_mesh_platform_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvPokey[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8257),
DROP_TO_FLOOR(),
SET_HOME(),
SET_OBJ_PHYSICS(60,65136,0,1000,1000,200,0,0),
BEGIN_LOOP(),
CALL_NATIVE( bhv_pokey_update),
END_LOOP(),
}

const BehaviorScript bhvCastleFloorTrap[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,65),
SET_HOME(),
CALL_NATIVE( bhv_sliding_plat_2_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_sliding_plat_2_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvSeesawPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,8265),
CALL_NATIVE( bhv_seesaw_platform_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_seesaw_platform_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvSquarishPathMoving[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_geo_bitdw_000558_0xff080f),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_squarish_path_moving_loop),
END_LOOP(),
}

const BehaviorScript bhvFerrisWheelAxle[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
ADD_INT(oMoveAngleYaw,16384),
CALL_NATIVE( bhv_ferris_wheel_axle_init),
BEGIN_LOOP(),
ADD_INT(oFaceAngleRoll,400),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvEndToad[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,1),
SET_HOME(),
SCALE(0,28),
SET_INTERACT_TYPE(262144),
SET_HITBOX_WITH_OFFSET(50,25,25),
SET_INT(oIntangibleTimer,0),
BEGIN_LOOP(),
SET_INT(oInteractStatus,0),
CALL_NATIVE( bhv_butterfly_loop),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvLllRotatingBlockWithFireBars[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,73),
LOAD_COLLISION_DATA(col_None_0x11901eb),
SET_FLOAT(oCollisionDistance,4000),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_rotating_block_fire_bars_loop),
END_LOOP(),
}

const BehaviorScript bhvKoopa[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,8257),
LOAD_ANIMATIONS(10022,100733796),
SET_HOME(),
SET_OBJ_PHYSICS(50,65136,0,0,1000,200,0,0),
SCALE(0,150),
SET_FLOAT(oUkikiTauntsToBeDone,1),
CALL_NATIVE( bhv_koopa_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_koopa_update),
CALL_NATIVE( bhv_koopa_update),
END_LOOP(),
}

const BehaviorScript bhvKoopaRaceEndpoint[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,65),
DROP_TO_FLOOR(),
SPAWN_CHILD_WITH_PARAM(0,106,318785016),
BEGIN_LOOP(),
CALL_NATIVE( bhv_koopa_race_endpoint_update),
END_LOOP(),
}

const BehaviorScript bhvTweester[] = {
BEGIN(OBJ_LIST_POLELIKE),
OR_INT(oFlags,8385),
SET_OBJ_PHYSICS(30,65136,0,0,0,200,0,0),
DROP_TO_FLOOR(),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_tweester_loop),
END_LOOP(),
}

const BehaviorScript bhvTreasureChestsShip[] = {
BEGIN(OBJ_LIST_PUSHABLE),
OR_INT(oFlags,8257),
LOAD_ANIMATIONS(10022,100733796),
SET_HOME(),
SET_OBJ_PHYSICS(50,65136,0,0,1000,200,0,0),
SCALE(0,150),
SET_FLOAT(oUkikiTauntsToBeDone,1),
CALL_NATIVE( bhv_koopa_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_koopa_update),
END_LOOP(),
}

const BehaviorScript bhvTTC2DRotator[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_ddd_geo_0004A0_0x1095763),
BEGIN(OBJ_LIST_PLAYER),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ttc_spinner_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvInSunkenShip[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8257),
BILLBOARD(),
SET_HOME(),
CALL_NATIVE( bhv_init_room),
SCALE(0,150),
BEGIN_LOOP(),
CALL_NATIVE( bhv_fly_guy_update),
CALL_NATIVE( bhv_fly_guy_update),
ADD_INT(oAnimState,1),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript Bhv_Custom_0x13004854[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,17),
LOAD_COLLISION_DATA(col_ddd_geo_000478_0x10890b3),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvWhompKingBoss[] = {
BEGIN(OBJ_LIST_SURFACE),
SET_INT(oBehParams2ndByte,1),
SET_INT(oHealth,3),
GOTO( Bhv_Custom_0x13002bd4),
}

const BehaviorScript Bhv_Custom_0x13002bd4[] = {
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,100796932),
LOAD_COLLISION_DATA(col_whomp_geo_0xa2a340),
ANIMATE(0),
SET_OBJ_PHYSICS(0,65136,65486,0,0,200,0,0),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_whomp_loop),
END_LOOP(),
}

const BehaviorScript bhvOpenableGrill[] = {
BEGIN(OBJ_LIST_DEFAULT),
OR_INT(oFlags,9),
BEGIN_LOOP(),
CALL_NATIVE( bhv_openable_grill_loop),
END_LOOP(),
}

const BehaviorScript bhvFloorSwitchGrills[] = {
BEGIN(OBJ_LIST_SURFACE),
GOTO( Bhv_Custom_0x13001488),
}

const BehaviorScript Bhv_Custom_0x13001488[] = {
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_purple_switch_geo_0xa8dfc4),
BEGIN_LOOP(),
CALL_NATIVE( bhv_purple_switch_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvRrCruiserWing[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,16457),
LOAD_ANIMATIONS(10022,84002052),
ANIMATE(6),
SET_INTERACT_TYPE(8388608),
SET_HITBOX(80,100),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_init_room),
CALL_NATIVE( bhv_toad_message_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_toad_message_loop),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvFlame[] = {
BEGIN(OBJ_LIST_LEVEL),
OR_INT(oFlags,1),
BILLBOARD(),
SET_HOME(),
SCALE(0,256),
SET_INTERACT_TYPE(262144),
SET_HITBOX_WITH_OFFSET(50,25,25),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_init_room),
BEGIN_LOOP(),
SET_INT(oInteractStatus,0),
ANIMATE_TEXTURE(oAnimState,2),
END_LOOP(),
}

const BehaviorScript bhvSignOnWall[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
SET_INTERACT_TYPE(8388608),
SET_INT(oInteractionSubtype,4096),
SET_HITBOX(150,80),
SET_INT(oUkikiTauntsToBeDone,0),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
SET_INT(oInteractStatus,0),
END_LOOP(),
}

const BehaviorScript bhvHiddenAt120Stars[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_castle_grounds_geo_000724_0xfd8ecf),
SET_FLOAT(oCollisionDistance,4000),
CALL_NATIVE( bhv_castle_cannon_grate_init),
BEGIN_LOOP(),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvWfSlidingPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_None_0xfd17df),
SET_FLOAT(oCollisionDistance,4000),
CALL_NATIVE( bhv_dorrie_update),
BEGIN_LOOP(),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript Bhv_Custom_0x13005664[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_dorrie_geo_0xa71784),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ttc_spinner_update),
CALL_NATIVE( bhv_ttc_spinner_update),
CALL_NATIVE( load_object_collision_model),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvFirePiranhaPlant[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,8265),
LOAD_ANIMATIONS(10022,100778780),
ANIMATE(0),
SET_HOME(),
CALL_NATIVE( bhv_fire_piranha_plant_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_fire_piranha_plant_update),
CALL_NATIVE( bhv_fire_piranha_plant_update),
END_LOOP(),
}

const BehaviorScript bhvBetaTrampolineTop[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9289),
LOAD_ANIMATIONS(10022,84034024),
SET_INTERACT_TYPE(8388608),
SET_HITBOX(160,150),
ANIMATE(0),
SET_INT(oYoshiChosenHome,0),
SET_HOME(),
CALL_NATIVE( bhv_bobomb_buddy_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bobomb_buddy_loop),
END_LOOP(),
}

const BehaviorScript bhvHmcElevatorPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,17),
LOAD_COLLISION_DATA(col_geo_bitdw_000510_0xfeba67),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_ssl_moving_pyramid_wall_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvWdwExpressElevator[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_lll_geo_000A78_0x107592f),
SET_HOME(),
BEGIN_LOOP(),
SET_INT(oAngleVelYaw,256),
ADD_INT(oMoveAngleYaw,256),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvBigBully[] = {
BEGIN(OBJ_LIST_GENACTOR),
OR_INT(oFlags,9),
LOAD_ANIMATIONS(10022,83904268),
SCALE(0,144),
SET_HOME(),
CALL_NATIVE( bhv_big_bully_init),
BEGIN_LOOP(),
SET_INT(oIntangibleTimer,0),
CALL_NATIVE( bhv_bully_loop),
END_LOOP(),
}

const BehaviorScript bhvTTCElevator[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_rr_geo_000860_0xfb98fd),
OR_INT(oFlags,1),
SET_FLOAT(oCollisionDistance,2000),
SCALE(0,160),
CALL_NATIVE( bhv_swing_platform_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_swing_platform_update),
CALL_NATIVE( load_object_collision_model),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

const BehaviorScript bhvSwingPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_rr_geo_000860_0xfb98fd),
OR_INT(oFlags,1),
SET_FLOAT(oCollisionDistance,2000),
CALL_NATIVE( bhv_swing_platform_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_swing_platform_update),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvStaticCheckeredPlatform[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,1),
LOAD_COLLISION_DATA(col_checkerboard_platform_geo_0xa8ef2c),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_static_checkered_platform_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvThwomp2[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_thwomp_geo_0x86c808),
OR_INT(oFlags,73),
DROP_TO_FLOOR(),
ADD_FLOAT(oPosY,1),
SET_HOME(),
SCALE(0,297),
SET_FLOAT(oDrawingDistance,4000),
BEGIN_LOOP(),
CALL_NATIVE( bhv_grindel_thwomp_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvPyramidElevator[] = {
BEGIN(OBJ_LIST_SURFACE),
OR_INT(oFlags,9),
LOAD_COLLISION_DATA(col_rr_geo_000920_0xfb9f7d),
ADD_FLOAT(oPosY,65230),
SET_HOME(),
BEGIN_LOOP(),
CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
CALL_NATIVE( bhv_lll_sinking_rock_block_loop),
CALL_NATIVE( load_object_collision_model),
END_LOOP(),
}

const BehaviorScript bhvTTCTreadmill[] = {
BEGIN(OBJ_LIST_SURFACE),
LOAD_COLLISION_DATA(col_thwomp_geo_0x86c6ac),
OR_INT(oFlags,73),
SET_FLOAT(oGraphYOffset,5),
CALL_NATIVE( bhv_butterfly_init),
BEGIN_LOOP(),
CALL_NATIVE( bhv_butterfly_loop),
CALL_NATIVE( load_object_collision_model),
BEGIN(OBJ_LIST_PLAYER),
END_LOOP(),
}

