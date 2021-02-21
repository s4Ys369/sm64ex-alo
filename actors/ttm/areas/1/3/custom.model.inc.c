#include "custom.model.inc.h"
Vtx VB_ttm_geo_000748_0x700a940[] = {
{{{ 80, 654, -199 }, 0, { 308, 138 }, { 57, 245, 112, 255}}},
{{{ -22, 654, -199 }, 0, { 308, 138 }, { 143, 251, 56, 255}}},
{{{ -22, -1719, -97 }, 0, { 0, 990 }, { 200, 4, 113, 255}}},
{{{ 80, -1719, -97 }, 0, { 0, 990 }, { 113, 2, 56, 255}}},
{{{ 80, 654, -302 }, 0, { 650, 138 }, { 101, 3, 181, 255}}},
{{{ -22, -1719, -199 }, 0, { 308, 990 }, { 167, 253, 167, 255}}},
{{{ -22, 654, -302 }, 0, { 650, 138 }, { 186, 15, 152, 255}}},
{{{ 80, -1719, -199 }, 0, { 308, 990 }, { 89, 253, 167, 255}}},
};

Vtx VB_ttm_geo_000748_0x700a9c0[] = {
{{{ 80, 654, -302 }, 0, { 0, 0 }, { 101, 3, 181, 255}}},
{{{ 80, 1473, 5 }, 0, { 0, 0 }, { 113, 243, 55, 255}}},
{{{ 80, 654, -199 }, 0, { 0, 0 }, { 57, 245, 112, 255}}},
{{{ -22, 1473, 5 }, 0, { 0, 0 }, { 200, 229, 110, 255}}},
{{{ -22, 654, -199 }, 0, { 0, 0 }, { 143, 251, 56, 255}}},
{{{ 80, 1473, -97 }, 0, { 0, 0 }, { 56, 27, 146, 255}}},
{{{ -22, 1473, -97 }, 0, { 0, 0 }, { 143, 13, 201, 255}}},
{{{ -22, 654, -302 }, 0, { 0, 0 }, { 186, 15, 152, 255}}},
};

Light_t Light_ttm_geo_000748_0x700a930 = {
{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_ttm_geo_000748_0x700a928 = {
{127, 127, 127}, 0, {127, 127, 127}, 0
};

Gfx DL_ttm_geo_000748_0x700ab08[] = {
gsDPPipeSync(),
gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
gsDPSetTile(3, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
gsSPTexture(65535, 65535, 0, 0, 1),
gsDPTileSync(),
gsDPSetTile(3, 2, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
gsDPSetTileSize(0, 0, 0, 124, 124),
gsSPDisplayList(DL_ttm_geo_000748_0x700aa40),
gsSPTexture(65535, 65535, 0, 0, 0),
gsDPPipeSync(),
gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
gsSPDisplayList(DL_ttm_geo_000748_0x700aab8),
gsSPEndDisplayList(),
};

Gfx DL_ttm_geo_000748_0x700aa40[] = {
gsDPSetTextureImage(3, 2, 1, ttm_geo_000748__texture_07000000),
gsDPLoadSync(),
gsDPLoadBlock(7, 0, 0, 1023, 256),
gsSPLight(&Light_ttm_geo_000748_0x700a930.col, 1),
gsSPLight(&Light_ttm_geo_000748_0x700a928.col, 2),
gsSPVertex(VB_ttm_geo_000748_0x700a940, 8, 0),
gsSP2Triangles(0, 1, 2, 0,3, 0, 2, 0),
gsSP2Triangles(4, 0, 3, 0,2, 1, 5, 0),
gsSP2Triangles(1, 6, 5, 0,7, 4, 3, 0),
gsSP2Triangles(5, 6, 4, 0,5, 4, 7, 0),
gsSPEndDisplayList(),
};

Gfx DL_ttm_geo_000748_0x700aab8[] = {
gsSPVertex(VB_ttm_geo_000748_0x700a9c0, 8, 0),
gsSP2Triangles(0, 1, 2, 0,2, 1, 3, 0),
gsSP2Triangles(2, 3, 4, 0,0, 5, 1, 0),
gsSP2Triangles(4, 3, 6, 0,4, 6, 7, 0),
gsSP2Triangles(7, 5, 0, 0,7, 6, 5, 0),
gsSPEndDisplayList(),
};

