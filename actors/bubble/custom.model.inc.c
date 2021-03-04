#include "custom.model.inc.h"
Vtx VB_purple_marble_geo_0x302c660[] = {
{{{ -15, -15, 0 }, 0, { 0, 480 }, { 255, 255, 255, 255}}},
{{{ 15, -15, 0 }, 0, { 480, 480 }, { 255, 255, 255, 255}}},
{{{ 15, 15, 0 }, 0, { 480, 0 }, { 255, 255, 255, 255}}},
{{{ -15, 15, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

Vtx VB_purple_marble_geo_0x401cd20[] = {
{{{ -16, 0, 0 }, 0, { 0, 992 }, { 255, 255, 255, 255}}},
{{{ 16, 0, 0 }, 0, { 992, 992 }, { 255, 255, 255, 255}}},
{{{ 16, 32, 0 }, 0, { 992, 0 }, { 255, 255, 255, 255}}},
{{{ -16, 32, 0 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
};

Gfx DL_bubble_geo_0x401dd60[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPSetTextureImage(0, 2, 1, bubble_geo__texture_0401CD60),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsDPPipeSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPVertex(VB_bubble_geo_0x401cd20, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPEndDisplayList(),
};

Gfx DL_purple_marble_geo_0x302c8a0[] = {
gsDPPipeSync(),
gsSPGeometryMode(G_LIGHTING, 0),
gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, TEXEL0),
gsDPSetTextureImage(0, 2, 1, purple_marble_geo__texture_0302C6A0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 2, 4, 0, 2, 4, 0),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 255, 512),
gsDPPipeSync(),
gsDPSetTile(0, 2, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
gsDPSetTileSize(0, 0, 0, 60, 60),
gsSPTexture(65535, 65535, 0, 0, 1),
gsSPVertex(VB_purple_marble_geo_0x302c660, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_LIGHTING),
gsSPEndDisplayList(),
};

