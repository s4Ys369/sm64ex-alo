#include "custom.model.inc.h"
Vtx VB_geo_bbh_0005E0_0x701f6c0[] = {
{{{ -2800, 4096, 1 }, 0, { -3584, 0 }, { 0, 7, 192, 124}}},
{{{ -16640, 0, 90 }, 0, { -16640, 0 }, { 0, 120, 130, 140}}},
{{{ -17664, 0, -1 }, 0, { -18432, 0 }, { 0, 0, 0, 0}}},
{{{ -1, -1, -1 }, 0, { -1, -1 }, { 255, 255, 255, 255}}},
{{{ 64, 12, 399 }, 0, { -199, -400 }, { 255, 213, 0, 200}}},
{{{ -400, -48, -199 }, 0, { -53, 200 }, { 1, 144, 0, 46}}},
{{{ 199, 400, 46 }, 0, { -399, 56 }, { 255, 56, 254, 113}}},
{{{ 56, 199, 8192 }, 0, { 8192, -8193 }, { 224, 0, 223, 0}}},
{{{ -8193, -8192, 8192 }, 0, { -8192, -8193 }, { 0, 0, 0, 10}}},
{{{ 0, 1, 2 }, 0, { 0, 3 }, { 0, 0, 0, 4}}},
{{{ 3, 4, 0 }, 0, { 2, 5 }, { 0, 0, 0, 5}}},
{{{ 2, 6, 6 }, 0, { 5, 4 }, { 0, 6, 0, 7}}},
};

Light_t Light_geo_bbh_0005E0_0x701f6b0 = {
{ 243, 0, 0}, 0, { 7, 63, 241}, 0, { 231, 0, 0}, 0
};

Ambient_t Light_geo_bbh_0005E0_0x701f6a8 = {
{230, 0, 0}, 0, {0, 0, 0}, 0
};

Gfx DL_geo_bbh_0005E0_0x701f7e8[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_geo_bbh_0005E0_0x701f780),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_0005E0_0x701f780[] = {
gsDPNoOp(),
gsDPNoOp(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_geo_bbh_0005E0_0x701f6b0.col, 1),
gsSPLight(&Light_geo_bbh_0005E0_0x701f6a8.col, 2),
gsSPVertex(VB_geo_bbh_0005E0_0x701f6c0, 12, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(4, 5, 6, 0,4, 7, 5, 0),
gsSP2Triangles(8, 9, 10, 0,8, 11, 9, 0),
gsSPEndDisplayList(),
};

