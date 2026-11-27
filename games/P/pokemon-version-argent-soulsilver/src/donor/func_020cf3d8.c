/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3B_MaterialColorSpecEmi from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/gx/g3b.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef int BOOL;
typedef u16 GXRgb;
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
extern void G3BS_Direct1(GXDLInfo *info, int op, u32 param0);
extern void G3BS_MaterialColorSpecEmi(GXDLInfo *info, GXRgb specular, GXRgb emission, BOOL IsShininess);
extern void G3B_UpdateGXDLInfo(GXDLInfo *info, int n);
extern void func_020cf3d8(GXDLInfo *info, GXRgb specular, GXRgb emission, BOOL IsShininess);
static inline void G3BS_Direct1(GXDLInfo *info, int op, u32 param0) {
    *(u32 *) info->curr_cmd = (u32) op;
    *info->curr_param       = param0;
}
static inline void G3BS_MaterialColorSpecEmi(GXDLInfo *info, GXRgb specular, GXRgb emission, BOOL IsShininess) {
    G3BS_Direct1(info, 0x31, ((u32) ((specular) | ((emission) << 16) | ((IsShininess != 0) << 15))));
}
static inline void G3B_UpdateGXDLInfo(GXDLInfo *info, int n) {
    info->curr_cmd   = (u8 *) (info->curr_param + n);
    info->curr_param = (u32 *) (info->curr_cmd + 4);
}
extern const u16(*ctrdgi_fl_maxtime);
void func_020cf3d8(GXDLInfo *info, GXRgb specular, GXRgb emission, BOOL IsShininess) {
    G3BS_MaterialColorSpecEmi(info, specular, emission, IsShininess);

    G3B_UpdateGXDLInfo(info, 1);
}
