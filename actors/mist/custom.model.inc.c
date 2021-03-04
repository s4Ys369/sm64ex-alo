#include "custom.model.inc.h"
Vtx VB_mist_geo_0x3000000[] = {
{{{ -25, -25, 0 }, 0, { 0, 992 }, { 255, 255, 255, 255}}},
{{{ 25, -25, 0 }, 0, { 992, 992 }, { 255, 255, 255, 255}}},
{{{ 25, 25, 0 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ -25, 25, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

Gfx DL_mist_geo_0x3000880[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
gsDPSetTextureImage(3, 2, 1, mist_geo__texture_03000080),
gsDPSetTile(3, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_mist_geo_0x3000000, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsDPSetEnvColor(255, 255, 255, 255),
gsSPEndDisplayList(),
};

