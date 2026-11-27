/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3B_PolygonAttr from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/gx/g3b.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
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
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
extern void G3BS_Direct1(GXDLInfo *info, int op, u32 param0);
extern void G3BS_PolygonAttr(GXDLInfo *info, int light, GXPolygonMode polyMode, GXCull cullMode, int polygonID, int alpha,
                             int misc);
extern void G3B_UpdateGXDLInfo(GXDLInfo *info, int n);
extern void func_020cf348(GXDLInfo *info, int light, GXPolygonMode polyMode, GXCull cullMode, int polygonID, int alpha,
                          int misc);
static inline void G3BS_Direct1(GXDLInfo *info, int op, u32 param0) {
    *(u32 *) info->curr_cmd = (u32) op;
    *info->curr_param       = param0;
}
static inline void G3BS_PolygonAttr(GXDLInfo *info, int light, GXPolygonMode polyMode, GXCull cullMode, int polygonID,
                                    int alpha, int misc) {
    G3BS_Direct1(
        info, 0x29,
        ((u32) (((light) << 0) | ((polyMode) << 4) | ((cullMode) << 6) | (misc) | ((polygonID) << 24) | ((alpha) << 16))));
}
static inline void G3B_UpdateGXDLInfo(GXDLInfo *info, int n) {
    info->curr_cmd   = (u8 *) (info->curr_param + n);
    info->curr_param = (u32 *) (info->curr_cmd + 4);
}
void func_020cf348(GXDLInfo *info, int light, GXPolygonMode polyMode, GXCull cullMode, int polygonID, int alpha, int misc) {
    G3BS_PolygonAttr(info, light, polyMode, cullMode, polygonID, alpha, misc);
    G3B_UpdateGXDLInfo(info, 1);
}
