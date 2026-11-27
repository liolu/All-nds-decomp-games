/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_G2dDrawSoftEmuSprite from https://github.com/Project-Holon/aletheia src/game/arm9/nns_g2d_renderer_core.c (license:
 * none (MIT = tooling only)), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed long s32;
typedef s16 fx16;
typedef s32 fx32;
typedef int BOOL;
typedef enum {
    GX_OAM_SHAPE_8x8 = 0
} GXOamShape;
typedef enum GXOBJVRamModeChar {
    GX_OBJVRAMMODE_CHAR_2D      = 0x00000000,
    GX_OBJVRAMMODE_CHAR_1D_32K  = 0x00000010,
    GX_OBJVRAMMODE_CHAR_1D_64K  = 0x00100010,
    GX_OBJVRAMMODE_CHAR_1D_128K = 0x00200010,
    GX_OBJVRAMMODE_CHAR_1D_256K = 0x00300010
} GXOBJVRamModeChar;
typedef enum GXTexFmt {
    GX_TEXFMT_NONE    = 0,
    GX_TEXFMT_A3I5    = 1,
    GX_TEXFMT_PLTT4   = 2,
    GX_TEXFMT_PLTT16  = 3,
    GX_TEXFMT_PLTT256 = 4,
    GX_TEXFMT_COMP4x4 = 5,
    GX_TEXFMT_A5I3    = 6,
    GX_TEXFMT_DIRECT  = 7
} GXTexFmt;
typedef enum GXTexSizeS {
    GX_TEXSIZE_S8 = 0,
    GX_TEXSIZE_S16,
    GX_TEXSIZE_S32,
    GX_TEXSIZE_S64,
    GX_TEXSIZE_S128,
    GX_TEXSIZE_S256,
    GX_TEXSIZE_S512,
    GX_TEXSIZE_S1024
} GXTexSizeS;
typedef enum GXTexSizeT {
    GX_TEXSIZE_T8 = 0,
    GX_TEXSIZE_T16,
    GX_TEXSIZE_T32,
    GX_TEXSIZE_T64,
    GX_TEXSIZE_T128,
    GX_TEXSIZE_T256,
    GX_TEXSIZE_T512,
    GX_TEXSIZE_T1024
} GXTexSizeT;
typedef enum GXTexPlttColor0 {
    GX_TEXPLTTCOLOR0_USE  = 0,
    GX_TEXPLTTCOLOR0_TRNS = 1
} GXTexPlttColor0;
typedef union GXOamAttr {
    struct {
        u16 attr0;
        u16 attr1;
        u16 attr2;
        u16 attr3;
    };
    struct {
        u32 attr01;
        u32 attr23;
    };
    struct {
        u32 y : 8;
        u32 rsMode : 2;
        u32 objMode : 2;
        u32 mosaic : 1;
        u32 colorMode : 1;
        u32 shape : 2;
        u32 x : 9;
        u32 rsParam : 5;
        u32 size : 2;
        u32 charNo : 10;
        u32 priority : 2;
        u32 cParam : 4;
        u32 _3 : 16;
    };
    struct {
        u32 _0 : 28;
        u32 flipH : 1;
        u32 flipV : 1;
        u32 _1 : 2;
        u32 _2 : 2;
        u32 _4 : 16;
    };
} GXOamAttr;
typedef struct NNSG2dImageAttr {
    GXTexSizeS sizeS;
    GXTexSizeT sizeT;
    GXTexFmt fmt;
    BOOL bExtendedPlt;
    GXTexPlttColor0 plttUse;
    GXOBJVRamModeChar mappingType;
} NNSG2dImageAttr;
typedef struct SpriteParams {
    fx32 u0;
    fx32 v0;
    fx32 u1;
    fx32 v1;
    int sx;
    int sy;
} SpriteParams;
typedef void (*UVFlipCorrectFunc)(fx32 *pU0, fx32 *pV0, fx32 *pU1, fx32 *pV1, BOOL bFlipH, BOOL bFlipV);
struct UVFlipState {
    UVFlipCorrectFunc pFunc;
    fx32 zOffset;
    u32 zOffsetEnabled;
};
typedef enum {
    GX_OAM_EFFECT_NONE          = 0x0000,
    GX_OAM_EFFECT_AFFINE        = 0x0100,
    GX_OAM_EFFECT_NODISPLAY     = 0x0200,
    GX_OAM_EFFECT_AFFINE_DOUBLE = 0x0300
} GXOamEffect;
extern void func_020bb234(int x, int y, int z, const GXOamAttr *oam, const struct NNSG2dImageAttr *pTexImageAttr,
                          u32 texBaseAddr, u32 pltBaseAddr);
extern void func_020baf88(const GXOamAttr *pOam, const NNSG2dImageAttr *pTexImageAttr, u32 texBaseAddr, u32 pltBaseAddr,
                          SpriteParams *pResult);
extern void func_020bb234(int x, int y, int z, const GXOamAttr *oam, const NNSG2dImageAttr *pTexImageAttr, u32 texBaseAddr,
                          u32 pltBaseAddr);
extern struct UVFlipState data_021da49c;
extern const u16 data_02109334[3][4];
extern const u16 data_0210931c[3][4];
extern fx32 data_02110a1c;
void func_020baf88(const GXOamAttr *pOam, const NNSG2dImageAttr *pTexImageAttr, u32 texBaseAddr, u32 pltBaseAddr,
                   SpriteParams *pResult);
static inline GXOamEffect G2_GetOBJEffect(const GXOamAttr *oam) {
    GXOamEffect effect;
    effect = (GXOamEffect) (oam->attr01 & 0x0300);
    if (effect == GX_OAM_EFFECT_AFFINE || effect == GX_OAM_EFFECT_AFFINE_DOUBLE) {
        return effect;
    }
    return (GXOamEffect) (effect | (oam->attr01 & 0x30000000));
}
static inline void G3_Translate(fx32 x, fx32 y, fx32 z) {
    (*(volatile u32 *) 0x04000470) = (u32) x;
    (*(volatile u32 *) 0x04000470) = (u32) y;
    (*(volatile u32 *) 0x04000470) = (u32) z;
}
static inline void G3_Scale(fx32 x, fx32 y, fx32 z) {
    (*(volatile u32 *) 0x0400046C) = (u32) x;
    (*(volatile u32 *) 0x0400046C) = (u32) y;
    (*(volatile u32 *) 0x0400046C) = (u32) z;
}
static inline void G3_TexCoord(fx32 s, fx32 t) {
    (*(volatile u32 *) 0x04000488) = ((u32) ((u16) ((s16) ((s) >> 8)) | ((u16) ((s16) ((t) >> 8)) << 16)));
}
static inline void G3_Vtx10(fx16 x, fx16 y, fx16 z) {
    (*(volatile u32 *) 0x04000490) =
        ((u32) (((((x) >> 6) & 0x3ff) << 0) | ((((y) >> 6) & 0x3ff) << 10) | ((((z) >> 6) & 0x3ff) << 20)));
}
static inline void G3_Begin(int prim) {
    (*(volatile u32 *) 0x04000500) = (u32) prim;
}
static inline void G3_End(void) {
    (*(volatile u32 *) 0x04000504) = 0;
}
static inline GXOamShape G2_GetOBJShape(const GXOamAttr *oam) {
    return (GXOamShape) (oam->attr01 & (0x0000c000 | 0xc0000000));
}
void func_020bb234(int x, int y, int z, const GXOamAttr *oam, const NNSG2dImageAttr *pTexImageAttr, u32 texBaseAddr,
                   u32 pltBaseAddr) {
    fx32 uv[6];

    func_020baf88(oam, pTexImageAttr, texBaseAddr, pltBaseAddr, (SpriteParams *) uv);
    if (G2_GetOBJEffect(oam) == GX_OAM_EFFECT_AFFINE_DOUBLE) {
        GXOamShape shape;
        int h;
        int w;
        shape = G2_GetOBJShape(oam);
        w     = *(u16 *) ((u8 *) data_02109334 + ((shape & 0x0000c000) >> 14) * 8 + ((shape & 0xc0000000) >> 30) * 2);
        h     = *(u16 *) ((u8 *) data_0210931c + ((shape & 0x0000c000) >> 14) * 8 + ((shape & 0xc0000000) >> 30) * 2);
        G3_Translate((x + (w >> 1)) << 12, (y + (h >> 1)) << 12,
                     data_021da49c.zOffsetEnabled ? data_021da49c.zOffset + (z << 12) : z << 12);
    } else {
        G3_Translate(x << 12, y << 12, data_021da49c.zOffsetEnabled ? data_021da49c.zOffset + (z << 12) : z << 12);
    }
    G3_Scale(uv[4] << 12, uv[5] << 12, 0x1000);
    G3_Begin(1);
    G3_TexCoord(uv[0], uv[3]);
    G3_Vtx10(0, ((fx16) 0x1000), 0);
    G3_TexCoord(uv[2], uv[3]);
    G3_Vtx10(((fx16) 0x1000), ((fx16) 0x1000), 0);
    G3_TexCoord(uv[2], uv[1]);
    G3_Vtx10(((fx16) 0x1000), 0, 0);
    G3_TexCoord(uv[0], uv[1]);
    G3_Vtx10(0, 0, 0);
    G3_End();
    if (data_021da49c.zOffsetEnabled) {
        data_021da49c.zOffset += data_02110a1c;
    }
}
