/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNS_G2dSetupSoftwareSpriteMaterial from https://github.com/ntrtwl/NitroSystem libraries/g2d/src/g2d_Softsprite.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
typedef int BOOL;
typedef u16 GXRgb;
typedef enum {
    GX_LIGHTMASK_NONE = 0,
    GX_LIGHTMASK_0    = 1,
    GX_LIGHTMASK_1    = 2,
    GX_LIGHTMASK_01   = 3,
    GX_LIGHTMASK_2    = 4,
    GX_LIGHTMASK_02   = 5,
    GX_LIGHTMASK_12   = 6,
    GX_LIGHTMASK_012  = 7,
    GX_LIGHTMASK_3    = 8,
    GX_LIGHTMASK_03   = 9,
    GX_LIGHTMASK_13   = 10,
    GX_LIGHTMASK_013  = 11,
    GX_LIGHTMASK_23   = 12,
    GX_LIGHTMASK_023  = 13,
    GX_LIGHTMASK_123  = 14,
    GX_LIGHTMASK_0123 = 15
} GXLightMask;
typedef enum {
    GX_POLYGONMODE_MODULATE = 0,
    GX_POLYGONMODE_DECAL    = 1,
    GX_POLYGONMODE_TOON     = 2,
    GX_POLYGONMODE_SHADOW   = 3
} GXPolygonMode;
typedef enum {
    GX_CULL_ALL   = 0,
    GX_CULL_FRONT = 1,
    GX_CULL_BACK  = 2,
    GX_CULL_NONE  = 3
} GXCull;
extern void G3_PolygonAttr(int light, GXPolygonMode polyMode, GXCull cullMode, int polygonID, int alpha, int misc);
extern void G3_MaterialColorDiffAmb(GXRgb diffuse, GXRgb ambient, BOOL IsSetVtxColor);
extern void G3_MaterialColorSpecEmi(GXRgb specular, GXRgb emission, BOOL IsShininess);
static inline void G3_PolygonAttr(int light, GXPolygonMode polyMode, GXCull cullMode, int polygonID, int alpha, int misc) {
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);
    ((void) 0);

    (*(REGType32v *) (0x04000000 + 0x4a4)) =
        ((u32) (((light) << 0) | ((polyMode) << 4) | ((cullMode) << 6) | (misc) | ((polygonID) << 24) | ((alpha) << 16)));
}
static inline void G3_MaterialColorDiffAmb(GXRgb diffuse, GXRgb ambient, BOOL IsSetVtxColor) {
    ((void) 0);
    ((void) 0);

    (*(REGType32v *) (0x04000000 + 0x4c0)) = ((u32) ((diffuse) | ((ambient) << 16) | (((IsSetVtxColor) != 0) << 15)));
}
static inline void G3_MaterialColorSpecEmi(GXRgb specular, GXRgb emission, BOOL IsShininess) {
    ((void) 0);
    ((void) 0);

    (*(REGType32v *) (0x04000000 + 0x4c4)) = ((u32) ((specular) | ((emission) << 16) | (((IsShininess) != 0) << 15)));
}
extern const u16(*ctrdgi_fl_maxtime);
extern void func_020b27fc(void);
void func_020b27fc(void) {
    {
        G3_MaterialColorDiffAmb(((GXRgb) (((31) << (0)) | ((31) << (5)) | ((31) << (10)))),
                                ((GXRgb) (((16) << (0)) | ((16) << (5)) | ((16) << (10)))), 1);

        G3_MaterialColorSpecEmi(((GXRgb) (((16) << (0)) | ((16) << (5)) | ((16) << (10)))),
                                ((GXRgb) (((0) << (0)) | ((0) << (5)) | ((0) << (10)))), 0);

        G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, GX_CULL_NONE, 0, 31, 0);
    }
}
