#include "custom.model.inc.h"
Vtx VB_jrb_geo_000930_0x7007808[] = {
{{{ 300, 0, 300 }, 0, { -3101, -2048 }, { 0, 0, 0, 255}}},
{{{ -300, 0, -300 }, 0, { -4125, -1024 }, { 0, 0, 0, 255}}},
{{{ -300, 0, 300 }, 0, { -4125, -2048 }, { 0, 0, 0, 255}}},
{{{ -300, 0, -300 }, 0, { -4125, -1024 }, { 0, 0, 0, 255}}},
{{{ 300, 0, 300 }, 0, { -3101, -2048 }, { 0, 0, 0, 255}}},
{{{ 300, 0, -300 }, 0, { -3101, -1024 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
};

Light_t Light_jrb_geo_000930_0x70079d8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 255, 255, 255}, 0
};

Gfx DL_jrb_geo_000930_0x70078f8[] = {
gsDPPipeSync(),
gsSPGeometryMode(0, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 12, 124),
gsDPSetTextureImage(0, 2, 1, jrb_geo_000930__texture_09005800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_jrb_geo_000930_0x70079d8.col, 1),
gsSPLight(&Light_jrb_geo_000930_0x70079d8.col, 2),
gsSPVertex(VB_jrb_geo_000930_0x7007808, 15, 0),
gsDPSetTextureImage(0, 2, 1, jrb_geo_000930__texture_09000000),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,9, 10, 11, 0),
gsSP1Triangle(12, 13, 14, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsSPEndDisplayList(),
};

