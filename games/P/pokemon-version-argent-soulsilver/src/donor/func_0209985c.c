/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* SPL_EMITTER_SetTextureParam from https://github.com/Project-Holon/aletheia src/game/arm9/spl_emitter.c (license: none (MIT =
 * tooling only)), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
typedef s32 fx32;
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
typedef enum GXTexRepeat {
    GX_TEXREPEAT_NONE = 0,
    GX_TEXREPEAT_S    = 1,
    GX_TEXREPEAT_T    = 2,
    GX_TEXREPEAT_ST   = 3
} GXTexRepeat;
typedef enum GXTexFlip {
    GX_TEXFLIP_NONE = 0,
    GX_TEXFLIP_S    = 1,
    GX_TEXFLIP_T    = 2,
    GX_TEXFLIP_ST   = 3
} GXTexFlip;
typedef enum GXTexGen {
    GX_TEXGEN_NONE     = 0,
    GX_TEXGEN_TEXCOORD = 1,
    GX_TEXGEN_NORMAL   = 2,
    GX_TEXGEN_VERTEX   = 3
} GXTexGen;
typedef enum GXTexPlttColor0 {
    GX_TEXPLTTCOLOR0_USE  = 0,
    GX_TEXPLTTCOLOR0_TRNS = 1
} GXTexPlttColor0;
typedef union SPLTextureParam {
    u32 all;
    struct {
        u32 format : 4;
        u32 s : 4;
        u32 t : 4;
        u32 repeat : 2;
        u32 flip : 2;
        u32 palColor0 : 1;
        u32 useSharedTexture : 1;
        u32 sharedTexID : 8;
        u32 : 6;
    };
} SPLTextureParam;
typedef struct SPLTexture {
    const void *resource;
    u32 texAddr;
    u32 palAddr;
    SPLTextureParam param;
    u16 width;
    u16 height;
} SPLTexture;
typedef enum {
    GX_MTXMODE_PROJECTION      = 0,
    GX_MTXMODE_POSITION        = 1,
    GX_MTXMODE_POSITION_VECTOR = 2,
    GX_MTXMODE_TEXTURE         = 3
} GXMtxMode;
typedef struct SPLTexture SPLTexture;
typedef struct SPLTexture SPLTexture;
extern void func_0209985c(SPLTexture *tex);
extern void func_0209985c(SPLTexture *tex);
static inline void G3_Identity(void) {
    (*(volatile u32 *) 0x04000454) = 0;
}
extern u32 (*const func_02054A68_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054A68_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02054718_Hooks[])(s32, s32, void *);
extern u32 (*const func_02054718_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_0205429C_Hooks[])(s32, s32, void *);
extern u32 (*const func_0205429C_Hooks2[])(s32, s32, s32, s32);
extern u32 (*const func_02053E1C_Hooks[])(s32, s32, void *);
extern u32 (*const func_02053E1C_Hooks2[])(s32, s32, s32, s32);
static inline void G3_TexImageParam(GXTexFmt texFmt, GXTexGen texGen, GXTexSizeS sSize, GXTexSizeT tSize, GXTexRepeat repeat,
                                    GXTexFlip flip, GXTexPlttColor0 pltt0, u32 addr) {
    (*(volatile u32 *) 0x040004A8) = ((u32) ((addr) >> 3) | ((texFmt) << 26) | ((texGen) << 30) | ((sSize) << 20) |
                                      ((tSize) << 23) | ((repeat) << 16) | ((flip) << 18) | ((pltt0) << 29));
}
static inline void G3_TexPlttBase(u32 addr, GXTexFmt texfmt) {
    (*(volatile u32 *) 0x040004AC) = ((u32) ((addr) >> (4 - ((texfmt) == GX_TEXFMT_PLTT4))));
}
static inline void G3_MtxMode(GXMtxMode mode) {
    (*(volatile u32 *) 0x04000440) = (u32) mode;
}
static inline void G3_Scale(fx32 x, fx32 y, fx32 z) {
    (*(volatile u32 *) 0x0400046C) = (u32) x;
    (*(volatile u32 *) 0x0400046C) = (u32) y;
    (*(volatile u32 *) 0x0400046C) = (u32) z;
}
void func_0209985c(SPLTexture *tex) {
    SPLTextureParam param = tex->param;
    G3_TexImageParam(param.format, GX_TEXGEN_TEXCOORD, param.s, param.t, param.repeat, param.flip, param.palColor0,
                     tex->texAddr);
    G3_TexPlttBase(tex->palAddr, param.format);
    G3_MtxMode(GX_MTXMODE_TEXTURE);
    G3_Identity();
    G3_Scale(tex->width * ((fx32) 0x00001000L), tex->height * ((fx32) 0x00001000L), 0);
    G3_MtxMode(GX_MTXMODE_POSITION);
}
