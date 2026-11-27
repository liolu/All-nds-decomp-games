/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3B_LightVector from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/gx/g3b.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
typedef u32 VecFx10;
typedef s16 fx16;
typedef enum {
    GX_LIGHTID_0 = 0,
    GX_LIGHTID_1 = 1,
    GX_LIGHTID_2 = 2,
    GX_LIGHTID_3 = 3
} GXLightId;
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
extern void G3BS_Direct1(GXDLInfo *info, int op, u32 param0);
extern void G3BS_LightVector(GXDLInfo *info, GXLightId lightID, fx16 x, fx16 y, fx16 z);
extern void G3B_UpdateGXDLInfo(GXDLInfo *info, int n);
extern void func_020cf41c(GXDLInfo *info, GXLightId lightID, fx16 x, fx16 y, fx16 z);
static inline void G3BS_Direct1(GXDLInfo *info, int op, u32 param0) {
    *(u32 *) info->curr_cmd = (u32) op;
    *info->curr_param       = param0;
}
static inline void G3BS_LightVector(GXDLInfo *info, GXLightId lightID, fx16 x, fx16 y, fx16 z) {
    G3BS_Direct1(info, 0x32,
                 ((u32) ((VecFx10) ((((((x)) >> (12 - 9)) & (0x0000 | 0x01ff | 0x0200)) << 0) |
                                    (((((y)) >> (12 - 9)) & (0x0000 | 0x01ff | 0x0200)) << 10) |
                                    (((((z)) >> (12 - 9)) & (0x0000 | 0x01ff | 0x0200)) << 20))) |
                  ((u32) (lightID) << 30)));
}
static inline void G3B_UpdateGXDLInfo(GXDLInfo *info, int n) {
    info->curr_cmd   = (u8 *) (info->curr_param + n);
    info->curr_param = (u32 *) (info->curr_cmd + 4);
}
void func_020cf41c(GXDLInfo *info, GXLightId lightID, fx16 x, fx16 y, fx16 z) {
    G3BS_LightVector(info, lightID, x, y, z);

    G3B_UpdateGXDLInfo(info, 1);
}
