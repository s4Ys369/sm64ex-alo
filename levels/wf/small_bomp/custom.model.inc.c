#include "custom.model.inc.h"
Vtx VB_wf_geo_000A00_0x700d388[] = {
{{{ 0, 192, -193 }, 0, { -1024, 1024 }, { 0, 0, 0, 255}}},
{{{ 0, -192, 193 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 192, 193 }, 0, { 0, 1024 }, { 0, 0, 0, 255}}},
{{{ 0, -192, 193 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 192, -193 }, 0, { -1024, 1024 }, { 0, 0, 0, 255}}},
{{{ 0, -192, -193 }, 0, { -1024, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 0, 0, 0 }, 0, { 0, 0 }, { 0, 0, 0, 255}}},
{{{ 136, 261, 75 }, 0, { 0, 0 }, { 0, 127, 0, 255}}},
};

Light_t Light_wf_geo_000A00_0xe000000 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 127, 127, 127}, 0
};

Gfx DL_wf_geo_000A00_0x700d708[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_wf_geo_000A00_0x700d608),
gsDPNoOp(),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_wf_geo_000A00_0x700d608[] = {
gsDPSetTextureImage(0, 2, 1, wf_geo_000A00__texture_09008000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_wf_geo_000A00_0xe000000.col, 1),
gsSPLight(&Light_wf_geo_000A00_0xe000000.col, 2),
gsSPVertex(VB_wf_geo_000A00_0x700d388, 16, 0),
gsDPSetTextureImage(0, 2, 1, wf_geo_000A00__texture_09008000),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP1Triangle(6, 7, 8, 0),
gsSPEndDisplayList(),
};

