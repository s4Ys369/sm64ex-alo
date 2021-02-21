#include "custom.model.inc.h"
Vtx VB_geo_bbh_000610_0x701fb38[] = {
{{{ -3584, 0, 7 }, 0, { -16640, 0 }, { 0, 60, 70, 80}}},
{{{ -16640, 0, 90 }, 0, { -16640, 0 }, { 0, 120, 130, 140}}},
{{{ 1248, 240, 1793 }, 0, { -16640, 0 }, { 0, 0, 10, 20}}},
{{{ -16640, 0, 30 }, 0, { -16640, 0 }, { 0, 60, 70, 80}}},
};

Vtx VB_geo_bbh_000610_0x701fb78[] = {
{{{ -16640, 0, 90 }, 0, { -16640, 0 }, { 0, 120, 130, 140}}},
{{{ -17664, 0, -1 }, 0, { -18432, 0 }, { 0, 0, 0, 0}}},
{{{ -1, -1, -1 }, 0, { -1, -1 }, { 255, 255, 255, 255}}},
{{{ 64, 9, 282 }, 0, { 282, -282 }, { 1, 36, 254, 230}}},
{{{ -282, 292, 282 }, 0, { 292, -282 }, { 0, 0, 255, 250}}},
{{{ 0, 8192, -8192 }, 0, { -8193, -8192 }, { 223, 0, 223, 255}}},
{{{ -8192, 8192, 8192 }, 0, { -8193, 0 }, { 0, 6, 0, 0}}},
{{{ 1, 2, 1 }, 0, { 3, 3 }, { 0, 0, 0, 4}}},
{{{ 2, 4, 0 }, 0, { 4, 2 }, { 0, 3, 0, 4}}},
{{{ 1, 65, 66 }, 0, { 2012, 1808 }, { 0, 0, 129, 255}}},
{{{ 256, 819, -204 }, 0, { 0, 580 }, { 0, 0, 129, 255}}},
{{{ -255, 512, 205 }, 0, { 2012, 1808 }, { 129, 0, 0, 255}}},
{{{ -255, 819, -204 }, 0, { 0, 580 }, { 129, 0, 0, 255}}},
{{{ -255, 512, -204 }, 0, { 0, 1808 }, { 129, 0, 0, 255}}},
{{{ -255, 819, 205 }, 0, { 2012, 580 }, { 129, 0, 0, 255}}},
{{{ -255, 0, -204 }, 0, { 0, 2012 }, { 129, 0, 0, 255}}},
};

Light_t Light_geo_bbh_000610_0x701fb28 = {
{ 231, 0, 0}, 0, { 0, 0, 0}, 0, { 245, 16, 16}, 0
};

Ambient_t Light_geo_bbh_000610_0x701fb20 = {
{243, 0, 0}, 0, {7, 63, 241}, 0
};

Gfx DL_geo_bbh_000610_0x701fd28[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_geo_bbh_000610_0x701fc78),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 252),
gsSPDisplayList(DL_geo_bbh_000610_0x701fcc0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_000610_0x701fc78[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_000610__texture_09003800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPLight(&Light_geo_bbh_000610_0x701fb28.col, 1),
gsSPLight(&Light_geo_bbh_000610_0x701fb20.col, 2),
gsSPVertex(VB_geo_bbh_000610_0x701fb38, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_000610_0x701fcc0[] = {
gsDPSetTextureImage(0, 2, 1, geo_bbh_000610__texture_09002800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 2047, 256),
gsSPVertex(VB_geo_bbh_000610_0x701fb78, 16, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 6, 4, 0,7, 8, 9, 0),
gsSP2Triangles(7, 10, 8, 0,11, 12, 13, 0),
gsSP2Triangles(11, 14, 12, 0,0, 2, 15, 0),
gsSPEndDisplayList(),
};

