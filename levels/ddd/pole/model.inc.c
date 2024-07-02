#include "pc/rom_assets.h"
// 0x0700CEE0 - 0x0700CEF8
static const Lights1 ddd_seg7_lights_0700CEE0 = gdSPDefLights1(
    0x66, 0x66, 0x66,
    0xff, 0xff, 0xff, 0x28, 0x28, 0x28
);

// 0x0700CEF8 - 0x0700CFE8
ROM_ASSET_LOAD_VTX(ddd_seg7_vertex_0700CEF8, 0x0048d930, 33063, 0x0000cef8, 240);

// 0x0700CFE8 - 0x0700D0C8
ROM_ASSET_LOAD_VTX(ddd_seg7_vertex_0700CFE8, 0x0048d930, 33063, 0x0000cfe8, 224);

// 0x0700D0C8 - 0x0700D1B8
ROM_ASSET_LOAD_VTX(ddd_seg7_vertex_0700D0C8, 0x0048d930, 33063, 0x0000d0c8, 240);

// 0x0700D1B8 - 0x0700D2A0
static const Gfx ddd_seg7_dl_0700D1B8[] = {
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, ddd_seg7_texture_07003000),
    gsDPLoadSync(),
    gsDPLoadBlock(G_TX_LOADTILE, 0, 0, 32 * 32 - 1, CALC_DXT(32, G_IM_SIZ_16b_BYTES)),
    gsSPLight(&ddd_seg7_lights_0700CEE0.l, 1),
    gsSPLight(&ddd_seg7_lights_0700CEE0.a, 2),
    gsSPVertex(ddd_seg7_vertex_0700CEF8, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 3,  6,  4, 0x0,  7,  8,  9, 0x0),
    gsSP2Triangles( 7, 10,  8, 0x0, 11, 12, 13, 0x0),
    gsSP1Triangle(11, 13, 14, 0x0),
    gsSPVertex(ddd_seg7_vertex_0700CFE8, 14, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  0,  3,  1, 0x0),
    gsSP2Triangles( 4,  5,  6, 0x0,  4,  7,  5, 0x0),
    gsSP2Triangles( 8,  9, 10, 0x0, 11, 12, 13, 0x0),
    gsSPVertex(ddd_seg7_vertex_0700D0C8, 15, 0),
    gsSP2Triangles( 0,  1,  2, 0x0,  3,  4,  5, 0x0),
    gsSP2Triangles( 6,  7,  8, 0x0,  9, 10, 11, 0x0),
    gsSP2Triangles( 3, 12,  4, 0x0,  9, 11, 13, 0x0),
    gsSP1Triangle( 0, 14,  1, 0x0),
    gsSPEndDisplayList(),
};

// 0x0700D2A0 - 0x0700D310
const Gfx ddd_seg7_dl_0700D2A0[] = {
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATERGB, G_CC_MODULATERGB),
    gsSPClearGeometryMode(G_SHADING_SMOOTH),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, G_TX_LOADTILE, 0, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, G_TX_NOMASK, G_TX_NOLOD),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, G_TX_RENDERTILE, 0, G_TX_CLAMP, 5, G_TX_NOLOD, G_TX_WRAP | G_TX_NOMIRROR, 5, G_TX_NOLOD),
    gsDPSetTileSize(0, 0, 0, (32 - 1) << G_TEXTURE_IMAGE_FRAC, (32 - 1) << G_TEXTURE_IMAGE_FRAC),
    gsSPDisplayList(ddd_seg7_dl_0700D1B8),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_SHADE, G_CC_SHADE),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPEndDisplayList(),
};
