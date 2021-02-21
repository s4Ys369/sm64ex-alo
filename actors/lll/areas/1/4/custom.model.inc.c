#include "custom.model.inc.h"
Vtx VB_lll_geo_0009E0_0x7013968[] = {
{{{ -767, 307, -767 }, 0, { -1198, -2222 }, { 0, 127, 0, 255}}},
{{{ 1152, 307, 384 }, 0, { 4276, 1062 }, { 0, 127, 0, 255}}},
{{{ 1152, 307, -383 }, 0, { 4276, -1128 }, { 0, 127, 0, 255}}},
{{{ 768, 307, 768 }, 0, { 3180, 2156 }, { 0, 127, 0, 255}}},
{{{ 768, 307, -767 }, 0, { 3180, -2222 }, { 0, 127, 0, 255}}},
{{{ -1151, 307, 384 }, 0, { -2294, 1062 }, { 0, 127, 0, 255}}},
{{{ -767, 307, 768 }, 0, { -1198, 2156 }, { 0, 127, 0, 255}}},
{{{ -1151, 307, -383 }, 0, { -2294, -1128 }, { 0, 127, 0, 255}}},
};

Vtx VB_lll_geo_0009E0_0x70139e8[] = {
{{{ 1152, 0, 384 }, 0, { 2012, 990 }, { 89, 0, 89, 255}}},
{{{ 1152, 307, 384 }, 0, { 2012, 0 }, { 89, 0, 89, 255}}},
{{{ 768, 307, 768 }, 0, { -394, 0 }, { 89, 0, 89, 255}}},
{{{ -767, 0, -767 }, 0, { 7634, 990 }, { 0, 0, 129, 255}}},
{{{ -767, 307, -767 }, 0, { 7634, 0 }, { 0, 0, 129, 255}}},
{{{ 768, 307, -767 }, 0, { 0, 0 }, { 0, 0, 129, 255}}},
{{{ 768, 0, -767 }, 0, { 0, 990 }, { 0, 0, 129, 255}}},
{{{ 768, 0, -767 }, 0, { 2376, 990 }, { 89, 0, 167, 255}}},
{{{ 768, 307, -767 }, 0, { 2376, 0 }, { 89, 0, 167, 255}}},
{{{ 1152, 307, -383 }, 0, { 0, 0 }, { 89, 0, 167, 255}}},
{{{ 1152, 0, -383 }, 0, { 0, 990 }, { 89, 0, 167, 255}}},
{{{ 1152, 0, -383 }, 0, { 3374, 990 }, { 127, 0, 0, 255}}},
{{{ 1152, 307, -383 }, 0, { 3374, 0 }, { 127, 0, 0, 255}}},
{{{ 1152, 307, 384 }, 0, { 0, 0 }, { 127, 0, 0, 255}}},
{{{ 1152, 0, 384 }, 0, { 0, 990 }, { 127, 0, 0, 255}}},
};

Vtx VB_lll_geo_0009E0_0x7013ad8[] = {
{{{ -1151, 0, 384 }, 0, { 3374, 990 }, { 129, 0, 0, 255}}},
{{{ -1151, 307, -383 }, 0, { 0, 0 }, { 129, 0, 0, 255}}},
{{{ -1151, 0, -383 }, 0, { 0, 990 }, { 129, 0, 0, 255}}},
{{{ 1152, 0, 384 }, 0, { 2012, 990 }, { 89, 0, 89, 255}}},
{{{ 768, 307, 768 }, 0, { -394, 0 }, { 89, 0, 89, 255}}},
{{{ 768, 0, 768 }, 0, { -394, 990 }, { 89, 0, 89, 255}}},
{{{ 768, 0, 768 }, 0, { 7122, 990 }, { 0, 0, 127, 255}}},
{{{ -767, 307, 768 }, 0, { -542, 0 }, { 0, 0, 127, 255}}},
{{{ -767, 0, 768 }, 0, { -542, 990 }, { 0, 0, 127, 255}}},
{{{ 768, 307, 768 }, 0, { 7122, 0 }, { 0, 0, 127, 255}}},
{{{ -767, 0, 768 }, 0, { 2012, 990 }, { 167, 0, 89, 255}}},
{{{ -767, 307, 768 }, 0, { 2012, 0 }, { 167, 0, 89, 255}}},
{{{ -1151, 307, 384 }, 0, { -394, 0 }, { 167, 0, 89, 255}}},
{{{ -1151, 0, 384 }, 0, { -394, 990 }, { 167, 0, 89, 255}}},
{{{ -1151, 307, 384 }, 0, { 3374, 0 }, { 129, 0, 0, 255}}},
};

Vtx VB_lll_geo_0009E0_0x7013bc8[] = {
{{{ -1151, 0, -383 }, 0, { 2376, 990 }, { 167, 0, 167, 255}}},
{{{ -1151, 307, -383 }, 0, { 2376, 0 }, { 167, 0, 167, 255}}},
{{{ -767, 307, -767 }, 0, { 0, 0 }, { 167, 0, 167, 255}}},
{{{ -767, 0, -767 }, 0, { 0, 990 }, { 167, 0, 167, 255}}},
};

Light_t Light_lll_geo_0009E0_0x700fc08 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_lll_geo_0009E0_0x700fc00 = {
{63, 63, 63}, 0, {63, 63, 63}, 0
};

Gfx DL_lll_geo_0009E0_0x7013d28[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
gsSPGeometryMode(G_SHADING_SMOOTH, 0),
gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_0009E0_0x7013c08),
gsDPTileSync(),
gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_lll_geo_0009E0_0x7013c70),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPGeometryMode(0, G_SHADING_SMOOTH),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_0009E0_0x7013c08[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_0009E0__texture_0900A800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_lll_geo_0009E0_0x700fc08.col, 1),
gsSPLight(&Light_lll_geo_0009E0_0x700fc00.col, 2),
gsSPVertex(VB_lll_geo_0009E0_0x7013968, 8, 0),
gsSP2Triangles(0, 1, 2, 0,0, 3, 1, 0),
gsSP2Triangles(0, 2, 4, 0,0, 5, 6, 0),
gsSP2Triangles(0, 7, 5, 0,0, 6, 3, 0),
gsSPEndDisplayList(),
};

Gfx DL_lll_geo_0009E0_0x7013c70[] = {
gsDPSetTextureImage(0, 2, 1, lll_geo_0009E0__texture_09007800),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPVertex(VB_lll_geo_0009E0_0x70139e8, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(3, 5, 6, 0,7, 8, 9, 0),
gsSP2Triangles(7, 9, 10, 0,11, 12, 13, 0),
gsSP1Triangle(11, 13, 14, 0),
gsSPVertex(VB_lll_geo_0009E0_0x7013ad8, 15, 0),
gsSP2Triangles(0, 1, 2, 0,3, 4, 5, 0),
gsSP2Triangles(6, 7, 8, 0,6, 9, 7, 0),
gsSP2Triangles(10, 11, 12, 0,10, 12, 13, 0),
gsSP1Triangle(0, 14, 1, 0),
gsSPVertex(VB_lll_geo_0009E0_0x7013bc8, 4, 0),
gsSP2Triangles(0, 1, 2, 0,0, 2, 3, 0),
gsSPEndDisplayList(),
};
