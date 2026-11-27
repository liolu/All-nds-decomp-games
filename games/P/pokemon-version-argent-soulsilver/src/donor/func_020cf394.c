/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3B_MaterialColorDiffAmb from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/gx/g3b.c (license: none),
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
extern void G3BS_MaterialColorDiffAmb(GXDLInfo *info, GXRgb diffuse, GXRgb ambient, BOOL IsSetVtxColor);
extern void G3B_UpdateGXDLInfo(GXDLInfo *info, int n);
extern void func_020cf394(GXDLInfo *info, GXRgb diffuse, GXRgb ambient, BOOL IsSetVtxColor);
static inline void G3BS_Direct1(GXDLInfo *info, int op, u32 param0) {
    *(u32 *) info->curr_cmd = (u32) op;
    *info->curr_param       = param0;
}
static inline void G3BS_MaterialColorDiffAmb(GXDLInfo *info, GXRgb diffuse, GXRgb ambient, BOOL IsSetVtxColor) {
    G3BS_Direct1(info, 0x30, ((u32) ((diffuse) | ((ambient) << 16) | ((IsSetVtxColor != 0) << 15))));
}
static inline void G3B_UpdateGXDLInfo(GXDLInfo *info, int n) {
    info->curr_cmd   = (u8 *) (info->curr_param + n);
    info->curr_param = (u32 *) (info->curr_cmd + 4);
}
extern const u16(*ctrdgi_fl_maxtime);
void func_020cf394(GXDLInfo *info, GXRgb diffuse, GXRgb ambient, BOOL IsSetVtxColor) {
    G3BS_MaterialColorDiffAmb(info, diffuse, ambient, IsSetVtxColor);

    G3B_UpdateGXDLInfo(info, 1);
}
