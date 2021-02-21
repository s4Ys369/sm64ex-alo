#include "custom.model.inc.h"
Vtx VB_geo_bbh_0005B0_0x701f0f8[] = {
{{{ 625, 0, 700 }, 0, { -2048, 0 }, { 0, 0, 0, 255}}},
{{{ -625, 0, -700 }, 0, { -1024, 1024 }, { 0, 0, 0, 255}}},
{{{ -625, 0, 700 }, 0, { -2048, 1024 }, { 0, 0, 0, 255}}},
{{{ -625, 0, -700 }, 0, { -1024, 1024 }, { 0, 0, 0, 255}}},
{{{ 625, 0, 700 }, 0, { -2048, 0 }, { 0, 0, 0, 255}}},
{{{ 625, 0, -700 }, 0, { -1024, 0 }, { 0, 0, 0, 255}}},
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

Light_t Light_geo_bbh_0005B0_0x701f2c8 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 255, 255, 255}, 0
};

Gfx DL_geo_bbh_0005B0_0x701f1e8[] = {
gsDPPipeSync(),
gsSPGeometryMode(0, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 12, 124),
gsDPSetTextureImage(0, 2, 1, geo_bbh_0005B0__texture_09005800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_geo_bbh_0005B0_0x701f2c8.col, 1),
gsSPLight(&Light_geo_bbh_0005B0_0x701f2c8.col, 2),
gsSPVertex(VB_geo_bbh_0005B0_0x701f0f8, 15, 0),
gsDPSetTextureImage(0, 2, 1, geo_bbh_0005B0__texture_09000000),
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

