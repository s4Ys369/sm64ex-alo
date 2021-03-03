#This file is provided only as a reference for manually recoding functions.

#This function is called from Behavior  bhvCannon
#It has virtual address 0x802A9498 and rom address 0x64498
 bhv_cannon_base_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x140
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf8($t6)
	beqz	$t7, 0x3c
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0xf8($t8)
	addiu	$t0, $t9, 1
	sw	$t0, 0xf8($t8)
	lui	$t1, 0x8036
	lw	$t1, 0x1160($t1)
	sw	$zero, 0x134($t1)
	b	0x50
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvFadingWarp
#It has virtual address 0x802AAB54 and rom address 0x65B54
 bhv_fading_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x188($t8)
	sra	$t0, $t9, 0x18
	andi	$t1, $t0, 0xff
	sh	$t1, 6($sp)
	lhu	$t2, 6($sp)
	bnez	$t2, 0x54
	nop	
	lui	$at, 0x42aa
	lui	$t3, 0x8036
	lw	$t3, 0x1160($t3)
	mtc1	$at, $f4
	b	0xc0
	swc1	$f4, 0x1f8($t3)
	lhu	$t4, 6($sp)
	addiu	$at, $zero, 0xff
	bne	$t4, $at, 0x7c
#This function is called from Behavior  bhvWarp
#It has virtual address 0x802AAA60 and rom address 0x65A60
 bhv_warp_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0xd8
	nop	
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	lw	$t9, 0x188($t8)
	sra	$t0, $t9, 0x18
	andi	$t1, $t0, 0xff
	sh	$t1, 6($sp)
	lhu	$t2, 6($sp)
	bnez	$t2, 0x54
	nop	
	lui	$at, 0x4248
	lui	$t3, 0x8036
	lw	$t3, 0x1160($t3)
	mtc1	$at, $f4
	b	0xc0
	swc1	$f4, 0x1f8($t3)
	lhu	$t4, 6($sp)
	addiu	$at, $zero, 0xff
	bne	$t4, $at, 0x7c
#This function is called from Behavior  bhvWarpPipe
#It has virtual address 0x803839CC and rom address 0x13E9CC
 load_object_collision_model:
	beq	$gp, $v1, 0x10e00
	bne	$a2, $a1, -0x1011c
	andi	$s5, $at, 0xf001
	beql	$zero, $s3, 0x7eb4
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x802A4120 and rom address 0x5F120
 bhv_init_room:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x14
	jal	 is_item_in_array
	lh	$a0, -0x2208($a0)
	beqz	$v0, 0xc8
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x1c
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
	jal	 find_floor
	lw	$a2, 0xa8($t6)
	swc1	$f0, 0x18($sp)
	lw	$t7, 0x1c($sp)
	beqz	$t7, 0xc0
	nop	
	lw	$t8, 0x1c($sp)
	lb	$t9, 5($t8)
	beqz	$t9, 0x78
	nop	
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x80276910 and rom address 0x31910
 bhv_toad_message_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 save_file_get_flags
	nop	
	sw	$v0, 0x34($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
	jal	 save_file_get_total_star_count
	addiu	$a0, $a0, -1
	sw	$v0, 0x30($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
	andi	$t9, $t8, 0xff
	sw	$t9, 0x2c($sp)
	addiu	$t0, $zero, 1
	sw	$t0, 0x28($sp)
	lw	$s0, 0x2c($sp)
	addiu	$at, $zero, 0x4c
	beq	$s0, $at, 0xb8
#This function is called from Behavior  bhvToadMessage
#It has virtual address 0x8027684C and rom address 0x3184C
 bhv_toad_message_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 2($t6)
	andi	$t8, $t7, 1
	beqz	$t8, 0xac
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	sw	$zero, 0x190($t9)
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	lw	$t1, 0x110($t0)
	sltiu	$at, $t1, 5
	beqz	$at, 0xac
	nop	
	sll	$t1, $t1, 2
	lui	$at, 0x8033
	addu	$at, $at, $t1
	lw	$t1, 0x6f40($at)
	jr	$t1
	nop	
#This function is called from Behavior  bhv1Up
#It has virtual address 0x802F3D30 and rom address 0xAED30
 bhv_1up_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_1up_common_init
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
	lw	$t7, 0x144($t6)
	bne	$t7, $at, 0x50
	nop	
	jal	 save_file_get_flags
	nop	
	andi	$t8, $v0, 0x50
	bnez	$t8, 0x48
	nop	
	lui	$t9, 0x8036
	lw	$t9, 0x1160($t9)
	sh	$zero, 0x74($t9)
	b	0x88
	nop	
	lui	$t0, 0x8036
	lw	$t0, 0x1160($t0)
	addiu	$at, $zero, 2
#This function is called from Behavior  bhv1Up
#It has virtual address 0x802F45B8 and rom address 0xAF5B8
 bhv_1up_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_1up_interact
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
	jal	 set_object_visibility
	addiu	$a1, $zero, 0xbb8
	b	0x28
	nop	
	lw	$ra, 0x14($sp)
	addiu	$sp, $sp, 0x18
	jr	$ra
	nop	
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABEE4 and rom address 0x66EE4
 bhv_coin_formation_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 8
	andi	$t9, $t8, 0xff
	sw	$t9, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvCoinFormation
#It has virtual address 0x802ABF0C and rom address 0x66F0C
 bhv_coin_formation_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
#This function is called from Behavior  bhvExclamationBox
#It has virtual address 0x802C19C0 and rom address 0x7C9C0
 bhv_exclamation_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvButterfly
#It has virtual address 0x802E8F68 and rom address 0xA3F68
 bhv_butterfly_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	addiu	$a0, $zero, 1
	jal	 random_float
	nop	
	lui	$at, 0x42c8
	mtc1	$at, $f4
#This function is called from Behavior  bhvButterfly
#It has virtual address 0x802E96C8 and rom address 0xA46C8
 bhv_butterfly_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
	nop	
#This function is called from Behavior  bhvTripletButterfly
#It has virtual address 0x80313FC0 and rom address 0xCEFC0
 bhv_triplet_butterfly_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvGoomba
#It has virtual address 0x802FF408 and rom address 0xBA408
 bhv_goomba_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	andi	$t8, $t7, 3
	sw	$t8, 0xf4($t6)
	lui	$t9, 0x8036
#This function is called from Behavior  bhvGoomba
#It has virtual address 0x802FF96C and rom address 0xBA96C
 bhv_goomba_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	0x802fb87c
	lwc1	$f12, 0xf8($t6)
	beqz	$v0, 0x1a0
#This function is called from Behavior  bhvRecoveryHeart
#It has virtual address 0x80309B64 and rom address 0xC4B64
 bhv_recovery_heart_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x2bf0
	jal	 obj_set_hitbox
	lw	$a0, 0x1160($a0)
	lui	$a0, 0x8036
#This function is called from Behavior  bhvHidden1upTrigger
#It has virtual address 0x802F48F4 and rom address 0xAF8F4
 bhv_1up_hidden_trigger_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 obj_check_if_collided_with_object
	lw	$a0, 0x1160($a0)
	addiu	$at, $zero, 1
#This function is called from Behavior  bhvHidden1up
#It has virtual address 0x802F3CC8 and rom address 0xAECC8
 bhv_1up_common_init:
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	addiu	$t6, $zero, -0x4000
	sw	$t6, 0xc4($t7)
	lui	$at, 0x4040
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
	mtc1	$at, $f4
#This function is called from Behavior  bhvHidden1up
#It has virtual address 0x802F4710 and rom address 0xAF710
 bhv_1up_hidden_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x4c
	nop	
#This function is called from Behavior  Bhv_Custom_0x13000920
#It has virtual address 0x802AB650 and rom address 0x66650
 bhv_yellow_coin_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_set_behavior
	addiu	$a0, $a0, 0x91c
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x1f4
#This function is called from Behavior  Bhv_Custom_0x13000920
#It has virtual address 0x802AB70C and rom address 0x6670C
 bhv_yellow_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bhv_coin_sparkles_init
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf0($t6)
	addiu	$t8, $t7, 1
#This function is called from Behavior  bhvBobomb
#It has virtual address 0x802E6A2C and rom address 0xA1A2C
 bhv_bobomb_init:
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
	lui	$at, 0x8034
	lui	$t7, 0x8036
#This function is called from Behavior  bhvBobomb
#It has virtual address 0x802E742C and rom address 0xA242C
 bhv_bobomb_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0xfa0
	lwc1	$f12, 0xa0($t6)
	lwc1	$f14, 0xa4($t6)
#This function is called from Behavior  bhvFlyGuy
#It has virtual address 0x802FF040 and rom address 0xBA040
 bhv_fly_guy_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
	bnez	$t8, 0x1b8
#This function is called from Behavior  bhvJumpingBox
#It has virtual address 0x802B288C and rom address 0x6D88C
 bhv_jumping_box_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x4c
	nop	
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x802ACC3C and rom address 0x67C3C
 bhv_door_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x24($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvStarDoor
#It has virtual address 0x802A56BC and rom address 0x606BC
 bhv_star_door_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0
	sw	$v0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvMrI
#It has virtual address 0x802A6B7C and rom address 0x61B7C
 bhv_mr_i_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x84
	jal	 obj_set_hitbox
	lw	$a0, 0x1160($a0)
	lui	$a0, 0x8033
#This function is called from Behavior  Bhv_Custom_0x13002794
#It has virtual address 0x802C3440 and rom address 0x7E440
 bhv_boo_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0x110($t6)
	jr	$ra
	nop	
#This function is called from Behavior  Bhv_Custom_0x13002794
#It has virtual address 0x802C4F30 and rom address 0x7FF30
 bhv_big_boo_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0xc74
	jal	 obj_set_hitbox
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F24F4 and rom address 0xAD4F4
 bhv_collect_star_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x18
#This function is called from Behavior  bhvStar
#It has virtual address 0x802F25B0 and rom address 0xAD5B0
 bhv_collect_star_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	addiu	$t8, $t7, 0x800
#This function is called from Behavior  bhvSlidingPlatform2
#It has virtual address 0x80309454 and rom address 0xC4454
 bhv_rotating_octagonal_plat_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
	lw	$t7, 0x188($t6)
#This function is called from Behavior  bhvSlidingPlatform2
#It has virtual address 0x803094D0 and rom address 0xC44D0
 bhv_rotating_octagonal_plat_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd4($t6)
	lw	$t8, 0x118($t6)
	addu	$t9, $t7, $t8
	sw	$t9, 0xd4($t6)
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2C84 and rom address 0xADC84
 bhv_hidden_red_coin_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$t6, 0x8034
	lh	$t6, -0x453a($t6)
	addiu	$at, $zero, 3
	beq	$t6, $at, 0x34
#This function is called from Behavior  bhvHiddenRedCoinStar
#It has virtual address 0x802F2D8C and rom address 0xADD8C
 bhv_hidden_red_coin_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8036
#This function is called from Behavior  bhvRedCoin
#It has virtual address 0x802F2E6C and rom address 0xADE6C
 bhv_red_coin_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $sp, 0x24
	lwc1	$f12, 0xa0($t6)
#This function is called from Behavior  bhvRedCoin
#It has virtual address 0x802F2F2C and rom address 0xADF2C
 bhv_red_coin_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x134($t6)
	andi	$t8, $t7, 0x8000
#This function is called from Behavior  Bhv_Custom_0x13003b70
#It has virtual address 0x802BC22C and rom address 0x7722C
 bhv_lll_sinking_rock_block_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a2, $zero, 0x7c
	addiu	$a3, $zero, -0x6e
#This function is called from Behavior  Bhv_Custom_0x13001cbc
#It has virtual address 0x8030E14C and rom address 0xC914C
 bhv_horizontal_grindel_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  Bhv_Custom_0x13001cbc
#It has virtual address 0x802AEBC8 and rom address 0x69BC8
 bhv_squishable_platform_loop:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8038
	mtc1	$zero, $f8
	lhu	$t7, 0xf6($t6)
	sra	$t8, $t7, 4
#This function is called from Behavior  bhvGoombaTripletSpawner
#It has virtual address 0x802FF214 and rom address 0xBA214
 bhv_goomba_triplet_spawner_update:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x1ac
#This function is called from Behavior  bhvFlyingBookend
#It has virtual address 0x8030C364 and rom address 0xC7364
 bhv_flying_bookend_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvPlatformOnTrack
#It has virtual address 0x80305100 and rom address 0xC0100
 bhv_platform_on_track_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	andi	$t8, $t7, 8
#This function is called from Behavior  bhvPlatformOnTrack
#It has virtual address 0x80305A58 and rom address 0xC0A58
 bhv_platform_on_track_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvTree
#It has virtual address 0x802C63E8 and rom address 0x813E8
 bhv_pole_base_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x4120
	mtc1	$at, $f6
#This function is called from Behavior  Bhv_Custom_0x13002808
#It has virtual address 0x802C4824 and rom address 0x7F824
 bhv_boo_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvScuttlebug
#It has virtual address 0x802C65C0 and rom address 0x815C0
 bhv_scuttlebug_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBobombBuddy
#It has virtual address 0x802E76AC and rom address 0xA26AC
 bhv_bobomb_buddy_init:
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
#This function is called from Behavior  bhvBobombBuddy
#It has virtual address 0x802E7C4C and rom address 0xA2C4C
 bhv_bobomb_buddy_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 bobomb_buddy_actions
	nop	
	lui	$a0, 0x8036
	lw	$a0, 0x1160($a0)
#This function is called from Behavior  bhvBlueCoinSwitch
#It has virtual address 0x802C242C and rom address 0x7D42C
 bhv_blue_coin_switch_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x4040
	mtc1	$at, $f12
	jal	 cur_obj_scale
#This function is called from Behavior  bhvHiddenBlueCoin
#It has virtual address 0x802C22B8 and rom address 0x7D2B8
 bhv_hidden_blue_coin_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  Bhv_Custom_0x13001528
#It has virtual address 0x802B15E8 and rom address 0x6C5E8
 bhv_pushable_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3a0
	jal	 obj_set_hitbox
#This function is called from Behavior  Bhv_Custom_0x13001418
#It has virtual address 0x802B0BEC and rom address 0x6BBEC
 bhv_squarish_path_moving_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4120
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
#This function is called from Behavior  bhvHiddenObject
#It has virtual address 0x802B1AE0 and rom address 0x6CAE0
 bhv_hidden_object_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	bnez	$t7, 0x2c
#This function is called from Behavior  Bhv_Custom_0x13001488
#It has virtual address 0x802B1278 and rom address 0x6C278
 bhv_purple_switch_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvPoleGrabbing
#It has virtual address 0x802A6C20 and rom address 0x61C20
 bhv_pole_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
	sra	$t8, $t7, 0x10
	andi	$t9, $t8, 0xff
#This function is called from Behavior  bhvCheckerboardElevatorGroup
#It has virtual address 0x802B98FC and rom address 0x748FC
 bhv_checkerboard_elevator_group_init:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x144($t6)
	bnez	$t7, 0x2c
#This function is called from Behavior  bhvCheckerboardElevatorGroup
#It has virtual address 0x802B9BB4 and rom address 0x74BB4
 bhv_checkerboard_platform_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	lw	$t8, 0x144($t7)
	sw	$t8, 0xfc($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvCheckerboardElevatorGroup
#It has virtual address 0x802B9BD8 and rom address 0x74BD8
 bhv_checkerboard_platform_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0x1ac($t6)
	swc1	$f4, 0x24($sp)
#This function is called from Behavior  bhvClamShell
#It has virtual address 0x80312A54 and rom address 0xCDA54
 bhv_clam_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x3fc0
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
#This function is called from Behavior  bhvChuckya
#It has virtual address 0x802AA0AC and rom address 0x650AC
 bhv_chuckya_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0x2c($sp)
#This function is called from Behavior  bhvWfTumblingBridge
#It has virtual address 0x802AD890 and rom address 0x68890
 bhv_tumbling_bridge_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x2dc
	b	0x1c
	nop	
#This function is called from Behavior  bhvHomingAmp
#It has virtual address 0x802E8388 and rom address 0xA3388
 bhv_homing_amp_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x164($t6)
	lui	$t7, 0x8036
#This function is called from Behavior  bhvHomingAmp
#It has virtual address 0x802E89D4 and rom address 0xA39D4
 bhv_homing_amp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
	beqz	$at, 0xdc
#This function is called from Behavior  bhvCirclingAmp
#It has virtual address 0x802E8AE4 and rom address 0xA3AE4
 bhv_circling_amp_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
	swc1	$f4, 0x164($t6)
#This function is called from Behavior  bhvCirclingAmp
#It has virtual address 0x802E8ECC and rom address 0xA3ECC
 bhv_circling_amp_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 2
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvBreakableBox
#It has virtual address 0x802B1B2C and rom address 0x6CB2C
 bhv_breakable_box_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x3b0
	jal	 obj_set_hitbox
	lw	$a0, 0x1160($a0)
#This function is called from Behavior  bhvBreakableBoxSmall
#It has virtual address 0x802F5CD4 and rom address 0xB0CD4
 bhv_breakable_box_small_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x4020
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvBreakableBoxSmall
#It has virtual address 0x802F6228 and rom address 0xB1228
 bhv_breakable_box_small_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
	beqz	$s0, 0x4c
#This function is called from Behavior  bhvSeaweedBundle
#It has virtual address 0x802E67DC and rom address 0xA17DC
 bhv_seaweed_bundle_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$a2, $a2, 0x3134
	lw	$a0, 0x1160($a0)
	jal	 spawn_object
#This function is called from Behavior  bhvSkeeter
#It has virtual address 0x80313110 and rom address 0xCE110
 bhv_skeeter_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5072
	ori	$t6, $t6, 0xc081
#This function is called from Behavior  bhvSmallBomp
#It has virtual address 0x802AA700 and rom address 0x65700
 bhv_tower_door_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
	bnez	$t7, 0x30
	nop	
#This function is called from Behavior  bhvFallingPillar
#It has virtual address 0x802F7348 and rom address 0xB2348
 bhv_falling_pillar_init:
	lui	$at, 0x3f00
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0xe4($t6)
	lui	$at, 0x8034
#This function is called from Behavior  bhvFallingPillar
#It has virtual address 0x802F74DC and rom address 0xB24DC
 bhv_falling_pillar_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
#This function is called from Behavior  bhvJrbFloatingPlatform
#It has virtual address 0x802F6984 and rom address 0xB1984
 bhv_floating_platform_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	jal	 floating_platform_find_home_y
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvTreasureChests
#It has virtual address 0x802B75A4 and rom address 0x725A4
 bhv_bowser_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa8($t6)
	lwc1	$f8, 0xa0($t6)
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7C90 and rom address 0xA2C90
 bhv_cannon_closed_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	jal	 save_file_is_cannon_unlocked
	nop	
	addiu	$at, $zero, 1
	bne	$v0, $at, 0xa4
	nop	
#This function is called from Behavior  bhvCannonClosed
#It has virtual address 0x802E7E54 and rom address 0xA2E54
 bhv_cannon_closed_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
	beqz	$s0, 0x40
#This function is called from Behavior  bhvBowserBomb
#It has virtual address 0x802ECC14 and rom address 0xA7C14
 bhv_bowser_bomb_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 obj_check_if_collided_with_object
	lw	$a0, 0x1160($a0)
#This function is called from Behavior  bhvSunkenShipPart
#It has virtual address 0x802B3810 and rom address 0x6E810
 bhv_bullet_bill_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xc8($t6)
	sw	$t7, 0xf8($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvSunkenShipPart
#It has virtual address 0x802B3BE0 and rom address 0x6EBE0
 bhv_bullet_bill_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x43c
	jal	 cur_obj_check_interacted
#This function is called from Behavior  bhvWhirlpool
#It has virtual address 0x802E7F70 and rom address 0xA2F70
 bhv_whirlpool_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
	sw	$t7, 0xf4($t6)
	lui	$t8, 0x8036
	lw	$t8, 0x1160($t8)
#This function is called from Behavior  bhvWhirlpool
#It has virtual address 0x802E80DC and rom address 0xA30DC
 bhv_whirlpool_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8034
	lwc1	$f6, -0x7b08($at)
#This function is called from Behavior  bhvKoopaShellUnderwater
#It has virtual address 0x802AA97C and rom address 0x6597C
 bhv_koopa_shell_underwater_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
#This function is called from Behavior  Bhv_Custom_0x13000d40
#It has virtual address 0x802EFCD0 and rom address 0xAACD0
 bhv_ssl_moving_pyramid_wall_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x144($t6)
	beqz	$a0, 0x38
	nop	
#This function is called from Behavior  Bhv_Custom_0x13000d40
#It has virtual address 0x802EFD8C and rom address 0xAAD8C
 bhv_ssl_moving_pyramid_wall_loop:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x14c($t6)
	beqz	$a0, 0x2c
	nop	
#This function is called from Behavior  bhvWigglerHead
#It has virtual address 0x80302154 and rom address 0xBD154
 bhv_wiggler_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
#This function is called from Behavior  bhvSpiny
#It has virtual address 0x80302910 and rom address 0xBD910
 bhv_spiny_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvEnemyLakitu
#It has virtual address 0x80303028 and rom address 0xBE028
 bhv_enemy_lakitu_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x44fa
	mtc1	$at, $f12
	jal	0x802fbab4
#This function is called from Behavior  bhvBirdsSoundLoop
#It has virtual address 0x802F0898 and rom address 0xAB898
 bhv_birds_sound_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8034
	lw	$t6, -0x3430($t6)
	addiu	$at, $zero, 3
#This function is called from Behavior  bhvHidden1upInPoleSpawner
#It has virtual address 0x802F4B78 and rom address 0xAFB78
 bhv_1up_hidden_in_pole_spawner_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0x2bc
	lwc1	$f12, 0xa0($t6)
#This function is called from Behavior  bhvDDDPole
#It has virtual address 0x80300E40 and rom address 0xBBE40
 bhv_chain_chomp_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvHiddenStarTrigger
#It has virtual address 0x802F31BC and rom address 0xAE1BC
 bhv_hidden_star_trigger_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8036
	lw	$a1, 0x1158($a1)
	jal	 obj_check_if_collided_with_object
#This function is called from Behavior  bhvKingBobomb
#It has virtual address 0x802A8064 and rom address 0x63064
 bhv_king_bobomb_loop:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x41a0
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F3014 and rom address 0xAE014
 bhv_hidden_star_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$a0, 0x1300
	jal	 count_objects_with_behavior
	addiu	$a0, $a0, 0x3f1c
	sh	$v0, 0x36($sp)
#This function is called from Behavior  bhvHiddenStar
#It has virtual address 0x802F30F0 and rom address 0xAE0F0
 bhv_hidden_star_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvWaterBombCannon
#It has virtual address 0x8030A11C and rom address 0xC511C
 bhv_water_bomb_cannon_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x435c
	mtc1	$at, $f12
	lui	$at, 0x4396
#This function is called from Behavior  bhvWaterBombSpawner
#It has virtual address 0x80306084 and rom address 0xC1084
 bhv_water_bomb_spawner_update:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x4348
	mtc1	$at, $f8
#This function is called from Behavior  bhvWoodenPost
#It has virtual address 0x80300ECC and rom address 0xBBECC
 bhv_wooden_post_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x100($t6)
#This function is called from Behavior  bhvBigChillBully
#It has virtual address 0x802EB104 and rom address 0xA6104
 bhv_big_bully_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	move	$a0, $zero
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvBigChillBully
#It has virtual address 0x802EB9D0 and rom address 0xA69D0
 bhv_bully_loop:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	sw	$s0, 0x20($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
#This function is called from Behavior  bhvSmallChillBully
#It has virtual address 0x802EB05C and rom address 0xA605C
 bhv_small_bully_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	move	$a0, $zero
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvMoneybagHidden
#It has virtual address 0x802EE8F4 and rom address 0xA98F4
 bhv_moneybag_hidden_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0x26a4
#This function is called from Behavior  bhvTuxiesMother
#It has virtual address 0x802BF3C0 and rom address 0x7A3C0
 bhv_tuxies_mother_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
	ori	$t8, $t7, 0x400
#This function is called from Behavior  bhvSmallPenguin
#It has virtual address 0x802BFA88 and rom address 0x7AA88
 bhv_small_penguin_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
#This function is called from Behavior  bhvSpindrift
#It has virtual address 0x802AFD1C and rom address 0x6AD1C
 bhv_spindrift_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvMrBlizzard
#It has virtual address 0x8030803C and rom address 0xC303C
 bhv_mr_blizzard_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 1
	lw	$t7, 0x144($t6)
#This function is called from Behavior  bhvMrBlizzard
#It has virtual address 0x80308D6C and rom address 0xC3D6C
 bhv_mr_blizzard_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sdc1	$f20, 0x10($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$t6, 0x8036
#This function is called from Behavior  bhvFlamethrower
#It has virtual address 0x802AF1E8 and rom address 0x6A1E8
 bhv_flamethrower_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x84
#This function is called from Behavior  bhvSnowMoundSpawn
#It has virtual address 0x802F6448 and rom address 0xB1448
 bhv_snow_mound_spawn_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$a3, $zero, 0x1770
	lwc1	$f12, 0xa0($t6)
#This function is called from Behavior  bhvRacingPenguin
#It has virtual address 0x803118E4 and rom address 0xCC8E4
 bhv_racing_penguin_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8033
	lw	$t6, -0x26c4($t6)
	addiu	$at, $zero, 0x78
	lh	$t7, 0xaa($t6)
#This function is called from Behavior  bhvRacingPenguin
#It has virtual address 0x80312070 and rom address 0xCD070
 bhv_racing_penguin_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvPenguinRaceShortcutCheck
#It has virtual address 0x80312200 and rom address 0xCD200
 bhv_penguin_race_shortcut_check_update:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x43fa
	mtc1	$at, $f6
	lwc1	$f4, 0x15c($t6)
	c.lt.s	$f4, $f6
#This function is called from Behavior  bhvPlaysMusicTrackWhenTouched
#It has virtual address 0x802C5FDC and rom address 0x80FDC
 bhv_play_music_track_when_touched_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	bnez	$t7, 0x5c
#This function is called from Behavior  bhvPenguinRaceFinishLine
#It has virtual address 0x80312168 and rom address 0xCD168
 bhv_penguin_race_finish_line_update:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	lh	$t8, 0x1b0($t7)
	bnez	$t8, 0x5c
	nop	
#This function is called from Behavior  bhvMovingBlueCoin
#It has virtual address 0x802E6098 and rom address 0xA1098
 bhv_moving_blue_coin_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$at, 0x40a0
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
#This function is called from Behavior  bhvMovingBlueCoin
#It has virtual address 0x802E6114 and rom address 0xA1114
 bhv_moving_blue_coin_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvFireSpitter
#It has virtual address 0x8030D598 and rom address 0xC8598
 bhv_fire_spitter_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	jal	 cur_obj_scale
#This function is called from Behavior  bhvSmallWhomp
#It has virtual address 0x802C79D8 and rom address 0x829D8
 bhv_whomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_update_floor_and_walls
	nop	
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
#This function is called from Behavior  bhvBeginningPeach
#It has virtual address 0x802F3A30 and rom address 0xAEA30
 bhv_volcano_trap_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvHoot
#It has virtual address 0x802E9764 and rom address 0xA4764
 bhv_hoot_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	jal	 cur_obj_init_animation
	move	$a0, $zero
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvHoot
#It has virtual address 0x802EA588 and rom address 0xA5588
 bhv_hoot_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0xf4($t6)
#This function is called from Behavior  bhvPiranhaPlant
#It has virtual address 0x802BE5A0 and rom address 0x795A0
 bhv_piranha_plant_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x900
	lui	$t6, 0x8033
#This function is called from Behavior  bhvLllTiltingInvertedPyramid
#It has virtual address 0x802BCF40 and rom address 0x77F40
 bhv_platform_normals_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$t7, $t6, 0x21c
	sw	$t7, 0x1c($sp)
#This function is called from Behavior  bhvLllTiltingInvertedPyramid
#It has virtual address 0x802BD058 and rom address 0x78058
 bhv_tilting_inverted_pyramid_loop:
	addiu	$sp, $sp, -0x80
	sw	$ra, 0x14($sp)
	sw	$zero, 0x3c($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$t7, $t6, 0x21c
#This function is called from Behavior  Bhv_Custom_0x13001e68
#It has virtual address 0x802F6C0C and rom address 0xB1C0C
 bhv_arrow_lift_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvSwoop
#It has virtual address 0x802FE8B4 and rom address 0xB98B4
 bhv_swoop_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvSnufit
#It has virtual address 0x8030DC70 and rom address 0xC8C70
 bhv_snufit_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lh	$t7, 0x74($t6)
#This function is called from Behavior  bhvVolcanoSoundLoop
#It has virtual address 0x802F0820 and rom address 0xAB820
 bhv_volcano_sound_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x4103
	jal	 cur_obj_play_sound_1
	ori	$a0, $a0, 1
	b	0x1c
#This function is called from Behavior  Bhv_Custom_0x13000fc0
#It has virtual address 0x802BCE58 and rom address 0x77E58
 bhv_lll_sinking_square_platforms_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$at, 0x3f00
	mtc1	$at, $f4
	nop	
	swc1	$f4, 0x1c($sp)
#This function is called from Behavior  bhvBobBowlingBallSpawner
#It has virtual address 0x802EEEB4 and rom address 0xA9EB4
 bhv_generic_bowling_ball_spawner_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$a0, 0x144($t6)
	beqz	$a0, 0x38
	nop	
#This function is called from Behavior  bhvBobBowlingBallSpawner
#It has virtual address 0x802EEF9C and rom address 0xA9F9C
 bhv_generic_bowling_ball_spawner_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sdc1	$f20, 0x10($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 0x100
#This function is called from Behavior  bhvControllablePlatform
#It has virtual address 0x802F4EB4 and rom address 0xAFEB4
 bhv_controllable_platform_init:
	addiu	$sp, $sp, -0x38
	sw	$ra, 0x2c($sp)
	lui	$a0, 0x8036
	lui	$a2, 0x1300
	addiu	$t6, $zero, 0x33
	addiu	$t7, $zero, 0xcc
#This function is called from Behavior  bhvControllablePlatform
#It has virtual address 0x802F55A4 and rom address 0xB05A4
 bhv_controllable_platform_loop:
	addiu	$sp, $sp, -0x58
	sw	$ra, 0x2c($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	sw	$zero, 0x11c($t6)
	lui	$t7, 0x8036
#This function is called from Behavior  bhvHeaveHo
#It has virtual address 0x802B2278 and rom address 0x6D278
 bhv_heave_ho_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$at, 0x4000
	mtc1	$at, $f12
	jal	 cur_obj_scale
#This function is called from Behavior  bhvThwomp
#It has virtual address 0x802AD34C and rom address 0x6834C
 bhv_grindel_thwomp_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x298
	b	0x1c
#This function is called from Behavior  bhvDoor
#It has virtual address 0x802ACAC8 and rom address 0x67AC8
 bhv_door_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	sw	$zero, 0x1c($sp)
	lw	$t6, 0x1c($sp)
	lui	$t8, 0x8033
	addiu	$at, $zero, -1
#This function is called from Behavior  bhvThiBowlingBallSpawner
#It has virtual address 0x802EF0E8 and rom address 0xAA0E8
 bhv_thi_bowling_ball_spawner_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	addiu	$at, $zero, 0x100
	lw	$t7, 0x154($t6)
#This function is called from Behavior  bhvSslMovingPyramidWall
#It has virtual address 0x80307EA4 and rom address 0xC2EA4
 bhv_ttc_spinner_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lh	$t6, 0x1258($t6)
	lui	$t8, 0x8033
	lui	$t9, 0x8036
#This function is called from Behavior  bhvTowerDoor
#It has virtual address 0x803071B8 and rom address 0xC21B8
 bhv_ttc_moving_bar_init:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lh	$t6, 0x1258($t6)
	lui	$a0, 0x8033
	lui	$t8, 0x8036
	sll	$t7, $t6, 1
#This function is called from Behavior  bhvTowerDoor
#It has virtual address 0x80307670 and rom address 0xC2670
 bhv_ttc_moving_bar_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xfc($t6)
#This function is called from Behavior  bhvEyerokBoss
#It has virtual address 0x8030EA9C and rom address 0xC9A9C
 bhv_eyerok_boss_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
	sltiu	$at, $t7, 5
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8490 and rom address 0xB3490
 bhv_mips_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	addiu	$a1, $zero, -1
	jal	 save_file_get_star_flags
#This function is called from Behavior  bhvMips
#It has virtual address 0x802F8DAC and rom address 0xB3DAC
 bhv_mips_loop:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x124($t6)
#This function is called from Behavior  bhvYoshi
#It has virtual address 0x803112F0 and rom address 0xCC2F0
 Func_Custom_0x803112f0:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
	addiu	$a2, $zero, 0x18
#This function is called from Behavior  bhvBird
#It has virtual address 0x80311874 and rom address 0xCC874
 bhv_bird_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$s0, 0x14c($t6)
#This function is called from Behavior  bhvMadPiano
#It has virtual address 0x8030BFD0 and rom address 0xC6FD0
 bhv_mad_piano_update:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8034
	lh	$a0, -0x4de6($a0)
	addiu	$a1, $zero, 0x82
	bne	$a1, $a0, 0x28
#This function is called from Behavior  bhvMontyMoleHole
#It has virtual address 0x803043F8 and rom address 0xBF3F8
 bhv_monty_mole_hole_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x68($t6)
	bne	$t7, $t6, 0x3c
#This function is called from Behavior  bhvMontyMole
#It has virtual address 0x803044C0 and rom address 0xBF4C0
 bhv_monty_mole_init:
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	sw	$zero, 0xf4($t6)
	jr	$ra
	nop	
#This function is called from Behavior  bhvMontyMole
#It has virtual address 0x80304BA8 and rom address 0xBFBA8
 bhv_monty_mole_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x14($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	lui	$t6, 0x5024
#This function is called from Behavior  bhvLllRollingLog
#It has virtual address 0x802F3B98 and rom address 0xAEB98
 bhv_lll_rolling_log_init:
	lui	$at, 0x45a0
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvLllRollingLog
#It has virtual address 0x802F36A4 and rom address 0xAE6A4
 bhv_rolling_log_loop:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lwc1	$f4, 0xa0($t6)
#This function is called from Behavior  bhvClockMinuteHand
#It has virtual address 0x802C515C and rom address 0x8015C
 bhv_boo_with_cage_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	lh	$t6, -0x4d9c($t6)
	slti	$at, $t6, 0x79
#This function is called from Behavior  bhvCapSwitch
#It has virtual address 0x802A7170 and rom address 0x62170
 bhv_cap_switch_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0xac
#This function is called from Behavior  bhvAnimatesOnFloorSwitchPress
#It has virtual address 0x803094F8 and rom address 0xC44F8
 bhv_animates_on_floor_switch_press_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x1300
	jal	 cur_obj_nearest_object_with_behavior
	addiu	$a0, $a0, 0x1468
#This function is called from Behavior  bhvAnimatesOnFloorSwitchPress
#It has virtual address 0x80309530 and rom address 0xC4530
 bhv_animates_on_floor_switch_press_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x100($t6)
#This function is called from Behavior  bhvThiTinyIslandTop
#It has virtual address 0x802A6D64 and rom address 0x61D64
 bhv_thi_tiny_island_top_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	addiu	$a0, $zero, 0
	addiu	$a1, $zero, 0x32
	addiu	$a2, $zero, 0
#This function is called from Behavior  bhvBowser
#It has virtual address 0x802B7878 and rom address 0x72878
 bhv_bowser_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
	addiu	$t6, $zero, 1
#This function is called from Behavior  bhvTiltingBowserLavaPlatform
#It has virtual address 0x802BC0F0 and rom address 0x770F0
 bhv_lll_moving_octagonal_mesh_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x14c($t6)
#This function is called from Behavior  bhvPokey
#It has virtual address 0x802FE3B0 and rom address 0xB93B0
 bhv_pokey_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvCastleFloorTrap
#It has virtual address 0x803091E0 and rom address 0xC41E0
 bhv_sliding_plat_2_init:
	addiu	$sp, $sp, -0x20
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x188($t6)
#This function is called from Behavior  bhvCastleFloorTrap
#It has virtual address 0x80309354 and rom address 0xC4354
 bhv_sliding_plat_2_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0x154($t6)
#This function is called from Behavior  bhvSeesawPlatform
#It has virtual address 0x80305C14 and rom address 0xC0C14
 bhv_seesaw_platform_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
#This function is called from Behavior  bhvSeesawPlatform
#It has virtual address 0x80305C90 and rom address 0xC0C90
 bhv_seesaw_platform_update:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x1c($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd0($t6)
#This function is called from Behavior  bhvFerrisWheelAxle
#It has virtual address 0x80305E2C and rom address 0xC0E2C
 bhv_ferris_wheel_axle_init:
	addiu	$sp, $sp, -0x30
	sw	$ra, 0x24($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$a0, 0x8033
#This function is called from Behavior  bhvLllRotatingBlockWithFireBars
#It has virtual address 0x802BC618 and rom address 0x77618
 bhv_lll_rotating_block_fire_bars_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	jal	 cur_obj_call_action_function
	addiu	$a0, $a0, 0x830
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FBC4C and rom address 0xB6C4C
 bhv_koopa_init:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvKoopa
#It has virtual address 0x802FD7F8 and rom address 0xB87F8
 bhv_koopa_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t7, 0x8036
	lw	$t7, 0x1160($t7)
#This function is called from Behavior  bhvKoopaRaceEndpoint
#It has virtual address 0x802FD950 and rom address 0xB8950
 bhv_koopa_race_endpoint_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xf4($t6)
#This function is called from Behavior  bhvTweester
#It has virtual address 0x802C329C and rom address 0x7E29C
 bhv_tweester_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8036
	lui	$a1, 0x8033
	addiu	$a1, $a1, 0xc58
#This function is called from Behavior  bhvOpenableGrill
#It has virtual address 0x802C26F8 and rom address 0x7D6F8
 bhv_openable_grill_loop:
	addiu	$sp, $sp, -0x40
	sw	$ra, 0x2c($sp)
	sw	$s0, 0x28($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvHiddenAt120Stars
#It has virtual address 0x802F09F0 and rom address 0xAB9F0
 bhv_castle_cannon_grate_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
#This function is called from Behavior  bhvWfSlidingPlatform
#It has virtual address 0x8030B2F4 and rom address 0xC62F4
 bhv_dorrie_update:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$a0, 0x8033
	lh	$a0, -0x220c($a0)
	move	$a1, $zero
#This function is called from Behavior  bhvFirePiranhaPlant
#It has virtual address 0x8030CDDC and rom address 0xC7DDC
 bhv_fire_piranha_plant_init:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lui	$at, 0x8033
#This function is called from Behavior  bhvFirePiranhaPlant
#It has virtual address 0x8030D2F0 and rom address 0xC82F0
 bhv_fire_piranha_plant_update:
	addiu	$sp, $sp, -0x28
	sw	$ra, 0x1c($sp)
	sw	$s0, 0x18($sp)
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
#This function is called from Behavior  bhvTTCElevator
#It has virtual address 0x8031326C and rom address 0xCE26C
 bhv_swing_platform_init:
	lui	$at, 0x4600
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	mtc1	$at, $f4
	nop	
#This function is called from Behavior  bhvTTCElevator
#It has virtual address 0x80313294 and rom address 0xCE294
 bhv_swing_platform_update:
	addiu	$sp, $sp, -8
	lui	$t6, 0x8036
	lw	$t6, 0x1160($t6)
	lw	$t7, 0xd8($t6)
	sw	$t7, 4($sp)
#This function is called from Behavior  bhvStaticCheckeredPlatform
#It has virtual address 0x802C5DC0 and rom address 0x80DC0
 bhv_static_checkered_platform_loop:
	addiu	$sp, $sp, -0x18
	sw	$ra, 0x14($sp)
	lui	$t6, 0x8034
	addiu	$t6, $t6, -0x2d80
	lh	$t7, 0x50($t6)
