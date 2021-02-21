This file will contain instructions on how to import RM2C data into the sm64ex-alo repo.
First you should always copy the exported folders (/src,/levels,/sound,/text,/textures,/actors) into your repo.
Then make sure you set RM2C inside the makefile to 1
Then to build for PC use this input to terminal: "make clean && make RM2CPC"
Then to build for N64 use this input to terminal: "make clean && make -j4"
By default, due to their high variability and unique names, no actor data will be included from RM2C output, you must
go per actor and either copy data from a custom.model.inc.c file to the model.inc.c file, or change the includes in group files.

Level specific models will go into a folder inside of /actors/ with the name of the level they belong to. You must copy these folders
over to their level folders. The directory should match the target level dir, and not overwrite any files. Textures should be pre written
to the target level directories.

If you have exported custom behaviors, check the /data/ folder for exported custom behaviors with labels, and associated disassembled functions with matching labels.
These are provided for reference only, they must be manually integrated into the repo.

Below are some warnings generated by RM2C during extraction.
It is expected to have many warnings for editor files and for roms with lots of custom content.

******************************************************************************************

Objects without references must have behaviors created for them, be given an existing behavior, or be commented out.
#I've added all of these to custom.behavior_data.inc.h but there are more objects with custom behaviors
#that overwrite known labels. Almost all of them are just moving solid platforms, are just require new behaviors though.
 Level castle_inside Area 1 has object  Bhv_Custom_0x00402400 with no known label.
 Level bbh Area 1 has object  Bhv_Custom_0x19001200 with no known label.
 Level bbh Area 1 has object  Bhv_Custom_0x1300012c with no known label.
 Level bbh Area 1 has object  Bhv_Custom_0x13000684 with no known label.
 Level ssl Area 1 has object  Bhv_Custom_0x1300496c with no known label.
 Level wdw Area 1 has object  Bhv_Custom_0x13004cc8 with no known label.
 Level thi Area 1 has object  Bhv_Custom_0x13001e68 with no known label.
 Level thi Area 1 has object  Bhv_Custom_0x13000fc0 with no known label.
 Level castle_grounds Area 1 has object  Bhv_Custom_0x00402400 with no known label.
 Level ddd Area 1 has object  Bhv_Custom_0x13004854 with no known label.
 Level castle_courtyard Area 1 has object  Bhv_Custom_0x00402400 with no known label.
 Level totwc Area 1 has object  Bhv_Custom_0x13005664 with no known label.
******************************************************************************************

Levels with fog in sm64 editor and likely early versions of Rom Manager are completely broken and destroy the levels graphics and most non opaque objects.
I attempt to auto fix these, if there is any issue in these levels check fog first.
#combiners replaced with proper ones for all levels, may cause issues in these levels. Geo layers in these levels
#also changed.
 Level bbh Display List DL_bbh_1_0xe02c140 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level sl Display List DL_sl_1_0xe0223f0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level thi Display List DL_thi_1_0xe034780 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitdw Display List DL_bitdw_1_0xe018ae0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level vcutm Display List DL_vcutm_1_0xe01bf70 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bitfs Display List DL_bitfs_1_0xe03a9d0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level ending Display List DL_ending_1_0xe063110 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level pss Display List DL_pss_1_0xe01d1f0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level cotmc Display List DL_cotmc_1_0xe04b2b0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
 Level bowser_1 Display List DL_bowser_1_1_0xe01d3c0 has fog, for editor, fog DLs are heavily edited, potential for gfx errors.
******************************************************************************************

New models are detected by comparing the checksums of textures from the specific model.
The comparison models come from an unedited vanilla rom loaded into Rom Manager.
If a model is in this list, it has either an unrecognized ID or a new texture.
If a model is not in this list, it does not guarantee that it is unedited.

 model bubble_geo_ in folder bubble has a new model or new textures.
 bitdw
	 model geo_bitdw_0003C0_ in folder bitdw/areas/1/starting_platform has a new model or new textures.
	 model geo_bitdw_0003D8_ in folder bitdw/areas/1/large_platform has a new model or new textures.
	 model geo_bitdw_000408_ in folder bitdw/areas/1/quartzy_path_1 has a new model or new textures.
	 model geo_bitdw_000420_ in folder bitdw/areas/1/quartzy_path_2 has a new model or new textures.
	 model geo_bitdw_000438_ in folder bitdw/areas/1/quartzy_path_fences has a new model or new textures.
	 model geo_bitdw_000468_ in folder bitdw/areas/1/platform_with_hill has a new model or new textures.
	 model geo_bitdw_000480_ in folder bitdw/areas/1/wooden_platform has a new model or new textures.
	 model geo_bitdw_000498_ in folder bitdw/areas/1/platforms_and_tilting has a new model or new textures.
	 model geo_bitdw_0004B0_ in folder bitdw/areas/1/platforms_and_tilting2 has a new model or new textures.
	 model geo_bitdw_0004E0_ in folder bitdw/areas/1/staircase_slope_and_platform has a new model or new textures.
	 model geo_bitdw_000510_ in folder bitdw/areas/1/narrow_path_platform has a new model or new textures.
	 model geo_bitdw_000558_ in folder bitdw/square_platform has a new model or new textures.
	 model geo_bitdw_000540_ in folder bitdw/seesaw_platform has a new model or new textures.
	 model geo_bitdw_000528_ in folder bitdw/sliding_platform has a new model or new textures.
	 model geo_bitdw_000600_ in folder bitdw/collapsing_stairs_5 has a new model or new textures.
 model bubbly_tree_geo_ in folder tree has a new model or new textures.
 model metal_door_geo_ in folder door has a new model or new textures.
 model marios_winged_metal_cap_geo_ in folder mario_cap has a new model or new textures.
 model red_flame_geo_ in folder flame has a new model or new textures.
 model unk_DL_16001000_ in folder unk_bbh_16001000 has a new model or new textures.
 model unk_DL_1700009c_ in folder unk_ccm_1700009c has a new model or new textures.
 model unk_DL_1700009c_ in folder unk_hmc_1700009c has a new model or new textures.
 model unk_DL_0500c778_ in folder unk_ssl_0500c778 has a new model or new textures.
 model unk_DL_16001048_ in folder unk_bob_16001048 has a new model or new textures.
 model unk_DL_16001018_ in folder unk_sl_16001018 has a new model or new textures.
 model unk_DL_16001048_ in folder unk_lll_16001048 has a new model or new textures.
 model unk_DL_0500c778_ in folder unk_wf_0500c778 has a new model or new textures.
 model unk_DL_0500c778_ in folder unk_castle_courtyard_0500c778 has a new model or new textures.
 model breakable_box_geo_ in folder breakable_box has a new model or new textures.
 model breakable_box_small_geo_ in folder breakable_box_small has a new model or new textures.
 model exclamation_box_outline_geo_ in folder exclamation_box_outline has a new model or new textures.
 model exclamation_box_geo_ in folder exclamation_box has a new model or new textures.
 model black_bobomb_geo_ in folder bobomb has a new model or new textures.
 model cannon_lid_seg8_dl_080048E0_ in folder cannon_lid has a new model or new textures.
 model metal_box_geo_ in folder metal_box has a new model or new textures.
 rr
	 model rr_geo_000678_ in folder rr/areas/1/3 has a new model or new textures.
	 model rr_geo_000690_ in folder rr/areas/1/4 has a new model or new textures.
	 model rr_geo_0006A8_ in folder rr/areas/1/5 has a new model or new textures.
	 model rr_geo_0006C0_ in folder rr/areas/1/6 has a new model or new textures.
	 model rr_geo_0006D8_ in folder rr/areas/1/7 has a new model or new textures.
	 model rr_geo_0006F0_ in folder rr/areas/1/8 has a new model or new textures.
	 model rr_geo_000708_ in folder rr/areas/1/9 has a new model or new textures.
	 model rr_geo_000720_ in folder rr/areas/1/10 has a new model or new textures.
	 model rr_geo_000738_ in folder rr/areas/1/11 has a new model or new textures.
	 model rr_geo_000788_ in folder rr/areas/1/14 has a new model or new textures.
	 model rr_geo_0007A0_ in folder rr/areas/1/15 has a new model or new textures.
	 model rr_geo_0007B8_ in folder rr/areas/1/16 has a new model or new textures.
	 model rr_geo_0007E8_ in folder rr/areas/1/18 has a new model or new textures.
	 model rr_geo_0008C0_ in folder rr/sliding_platform has a new model or new textures.
	 model rr_geo_0008A8_ in folder rr/octagonal_platform has a new model or new textures.
	 model rr_geo_000878_ in folder rr/rotating_bridge_platform has a new model or new textures.
	 model rr_geo_000908_ in folder rr/seesaw_platform has a new model or new textures.
	 model rr_geo_000940_ in folder rr/l_platform has a new model or new textures.
	 model rr_geo_000860_ in folder rr/swinging_platform has a new model or new textures.
	 model rr_geo_000920_ in folder rr/donut_block has a new model or new textures.
	 model rr_geo_0008F0_ in folder rr/elevator_platform has a new model or new textures.
	 model rr_geo_000958_ in folder rr/tricky_triangles1 has a new model or new textures.
	 model rr_geo_000970_ in folder rr/tricky_triangles_2 has a new model or new textures.
	 model rr_geo_0009A0_ in folder rr/tricky_triangles_4 has a new model or new textures.
	 model rr_geo_000660_ in folder rr/areas/1/2 has a new model or new textures.
 model mr_i_iris_geo_ in folder mr_i_iris has a new model or new textures.
 model dorrie_geo_ in folder dorrie has a new model or new textures.
 wf
	 model wf_geo_0007E0_ in folder wf/areas/1/5 has a new model or new textures.
	 model wf_geo_000878_ in folder wf/areas/1/8 has a new model or new textures.
	 model wf_geo_0008A8_ in folder wf/areas/1/10 has a new model or new textures.
	 model wf_geo_000940_ in folder wf/areas/1/13 has a new model or new textures.
	 model wf_geo_000AE0_ in folder wf/areas/1/14 has a new model or new textures.
	 model wf_geo_0009D0_ in folder wf/areas/1/18 has a new model or new textures.
	 model wf_geo_000AF8_ in folder wf/beta_extending_platform has a new model or new textures.
	 model wf_geo_000B10_ in folder wf/extending_platform has a new model or new textures.
	 model wf_geo_000BA8_ in folder wf/kickable_board has a new model or new textures.
	 model wf_geo_000BE0_ in folder wf/tower_door has a new model or new textures.
	 model wf_geo_000A58_ in folder wf/rotating_wooden_platform has a new model or new textures.
jrb
	 model jrb_geo_000930_ in folder jrb/rock has a new model or new textures.
	 model jrb_geo_000900_ in folder jrb/falling_pillar has a new model or new textures.
	 model jrb_geo_000918_ in folder jrb/falling_pillar_base has a new model or new textures.
 ttm
	 model ttm_geo_000778_ in folder ttm/areas/1/4 has a new model or new textures.
	 model ttm_geo_0007A8_ in folder ttm/areas/1/5 has a new model or new textures.
	 model ttm_geo_0007D8_ in folder ttm/areas/1/6 has a new model or new textures.
	 model ttm_geo_0008D0_ in folder ttm/areas/1/12 has a new model or new textures.
	 model ttm_geo_0008F8_ in folder ttm/areas/1/13 has a new model or new textures.
	 model ttm_geo_000920_ in folder ttm/areas/1/14 has a new model or new textures.
	 model ttm_geo_000948_ in folder ttm/areas/1/15 has a new model or new textures.
	 model ttm_geo_000970_ in folder ttm/areas/1/16 has a new model or new textures.
	 model ttm_geo_000990_ in folder ttm/areas/1/17 has a new model or new textures.
	 model ttm_geo_0009C0_ in folder ttm/areas/1/18 has a new model or new textures.
	 model ttm_geo_0009F0_ in folder ttm/areas/1/19 has a new model or new textures.
	 model ttm_geo_000A18_ in folder ttm/areas/1/20 has a new model or new textures.
	 model ttm_geo_000730_ in folder ttm/rolling_log has a new model or new textures.
	 model ttm_geo_000DBC_ in folder ttm/moon_smiley has a new model or new textures.
	 model ttm_geo_000DF4_ in folder ttm/slide_exit_podium has a new model or new textures.
 model wiggler_head_geo_ in folder wiggler_head has a new model or new textures.
 hmc
	 model hmc_geo_0005A0_ in folder hmc/arrow_platform has a new model or new textures.
	 model hmc_geo_000548_ in folder hmc/rolling_rock has a new model or new textures.
	 model hmc_geo_000570_ in folder hmc/rolling_rock_fragment_1 has a new model or new textures.
	 model hmc_geo_000588_ in folder hmc/rolling_rock_fragment_2 has a new model or new textures.
	 model hmc_geo_000530_ in folder hmc/areas/1/grill_door has a new model or new textures.
 model yoshi_egg_geo_ in folder yoshi_egg has a new model or new textures.
 bbh
	 model geo_bbh_0005B0_ in folder bbh/staircase_step has a new model or new textures.
	 model geo_bbh_0005C8_ in folder bbh/tilting_trap_platform has a new model or new textures.
	 model geo_bbh_0005F8_ in folder bbh/tumbling_platform_near has a new model or new textures.
	 model geo_bbh_000610_ in folder bbh/moving_bookshelf has a new model or new textures.
	 model geo_bbh_000628_ in folder bbh/mesh_elevator has a new model or new textures.
	 model geo_bbh_000640_ in folder bbh/merry_go_round has a new model or new textures.
 ssl
	 model ssl_geo_000734_ in folder ssl/grindel has a new model or new textures.
	 model ssl_geo_000764_ in folder ssl/spindel has a new model or new textures.
	 model ssl_geo_000630_ in folder ssl_tox_box has a new model or new textures.
 model pokey_head_geo_ in folder pokey has a new model or new textures.
 model eyerok_left_hand_geo_ in folder eyerok has a new model or new textures.
 lll
	 model lll_geo_000A78_ in folder lll/areas/1/10 has a new model or new textures.
	 model lll_geo_000A90_ in folder lll/areas/1/11 has a new model or new textures.
	 model lll_geo_000DD0_ in folder lll/sinking_rock_block has a new model or new textures.
	 model lll_geo_000BB0_ in folder lll/rotating_hexagonal_ring has a new model or new textures.
	 model lll_geo_000BC8_ in folder lll/sinking_rectangular_platform has a new model or new textures.
	 model lll_geo_000BE0_ in folder lll/sinking_square_platform has a new model or new textures.
	 model lll_geo_000BF8_ in folder lll/tilting_square_platform has a new model or new textures.
 ddd
	 model ddd_geo_000478_ in folder ddd/sub_door has a new model or new textures.
	 model ddd_geo_0004A0_ in folder ddd/submarine has a new model or new textures.
 model bowser_geo_ in folder bowser has a new model or new textures.
 bowser 3
	 model bowser_3_geo_000380_ in folder bowser_3/areas/1/bomb_stand has a new model or new textures.
	 model bowser_3_geo_0002A8_ in folder bowser_3/falling_platform_2 has a new model or new textures.
	 model bowser_3_geo_000308_ in folder bowser_3/falling_platform_6 has a new model or new textures.
	 model bowser_3_geo_000320_ in folder bowser_3/falling_platform_7 has a new model or new textures.
	 model bowser_3_geo_000338_ in folder bowser_3/falling_platform_8 has a new model or new textures.
	 model bowser_3_geo_000350_ in folder bowser_3/falling_platform_9 has a new model or new textures.
*****************************************************************************
Collision models are loaded via behavior, not alongside the model. This means it can be more difficult to detect where exactly the collision belongs.
I attempt to guess based on what model the collision is first used with, but if I'm not sure, it will be logged here.

 Collision geo_bbh_0005C8 in folder bbh/tilting_trap_platform is unkown. Used with Behavior Bhv_Custom_0x13001e68.
 Collision geo_bbh_000640 in folder bbh/merry_go_round is unkown. Used with Behavior Bhv_Custom_0x13000fc0.
 Collision ddd_geo_000478 in folder ddd/sub_door is unkown. Used with Behavior Bhv_Custom_0x13004854.
 Collision dorrie_geo in folder dorrie is unkown. Used with Behavior Bhv_Custom_0x13005664.

Known methods of crashing:
*****************************************************************************
ALL BUILDS
IF CRASH ON BOOT - CHECK SEQUENCES
IF TITLE SCREEN LOOP - CHECK START LEVEL IN TWEAKS.INC.C
IF TEXTURES ARE MESSED UP - ALWAYS CHECK LEVEL FOG FIRST
IF ONLY ALPHA TEXTURES MESSED UP - MOVE FOG GEO LAYOUT TO LAYER 1/4 FROM 4/6
IF CRASH UPON ENTERING A LEVEL, CHECK OBJECTS. IF EDITOR, CHECK SCROLLS FIRST. IF NO OBJECTS BAD CHECK SEQUENCES
*****************************************************************************
N64 BUILD
IF SURFACE NODE POOOL OR SURFACE POOL FULL - ADD MORE TRIS TO EXT BOUNDS.H
IF CRASH ON STAR SELECT - PUSH FORWARD GODDARD SEGMENT IN SEGMENTS.H
*****************************************************************************

MORE ON AUDIO ERRORS:
On N64 build, a lack of proper audio memory allocation will instantly crash the game. If this happens, extend gAudioHeap in buffers.c
If you have issues with certain m64s sounding garbled, extend gAlBankSets in load.c (line 2000 about).
If sound cuts out at certain points, extend values in gAudioSessionPresets.
On all builds, if an out of bounds array access happens (often with high sequence numbers) the game will crash or have audio issues.