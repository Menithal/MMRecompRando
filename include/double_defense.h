#include "ultra64.h"
#include "global.h"

extern Vtx object_gi_heartsVtx_000000[];
extern u64 gameplay_keep_Tex_044BB0[];
extern u64 gameplay_keep_Tex_0447B0[];

Gfx gGiDDHeartBorderDL[] = {
    // gsDPSetPrimColor(0, 0x80, 160, 255, 255, 255),
    gsDPSetPrimColor(0, 0x80, 0xFF, 0xFF, 0x00, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED,
                       ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    // gsDPSetEnvColor(0, 100, 255, 255),
    gsDPSetEnvColor(0xCC, 0xCC, 0x00, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x07D0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_044BB0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(object_gi_heartsVtx_000000, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_heartsVtx_000000[3], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 8, 7, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 10, 13, 0, 14, 12, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 20, 0),
    gsSP2Triangles(20, 19, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 22, 26, 0, 27, 25, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&object_gi_heartsVtx_000000[35], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 9, 8, 0, 11, 10, 12, 0),
    gsSP2Triangles(13, 11, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 22, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 24, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 27, 0),
    gsSPVertex(&object_gi_heartsVtx_000000[66], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(19, 18, 20, 0, 21, 19, 22, 0),
    gsSP2Triangles(23, 21, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 29, 0, 28, 30, 31, 0),
    gsSPVertex(&object_gi_heartsVtx_000000[98], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 3, 5, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 14, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 19, 23, 0, 24, 22, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 30, 0),
    gsSPVertex(&object_gi_heartsVtx_000000[129], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 10, 0),
    gsSP2Triangles(11, 9, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 15, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 23, 22, 0, 25, 24, 26, 0),
    gsSP2Triangles(27, 25, 28, 0, 7, 29, 30, 0),
    gsSPEndDisplayList(),
};

Gfx gGiDDHeartContainerDL[] = {
    // gsDPSetPrimColor(0, 0x80, 255, 0, 100, 255),
    gsDPSetPrimColor(0, 0x80, 0xFF, 0xFF, 0xFF, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE,
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    // gsDPSetEnvColor(100, 0, 50, 255),
    gsDPSetEnvColor(0xFF, 0xFF, 0xFF, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gameplay_keep_Tex_0447B0, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, 15, G_TX_NOMIRROR | G_TX_WRAP,
                5, 15),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_heartsVtx_000000[160], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_heartsVtx_000000[163], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 24, 0, 29, 30, 27, 0),
    gsSPVertex(&object_gi_heartsVtx_000000[194], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 5, 0),
    gsSP2Triangles(9, 10, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 11, 0, 16, 17, 14, 0),
    gsSP1Triangle(18, 19, 16, 0),
    gsSPEndDisplayList(),
};