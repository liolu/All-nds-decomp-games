/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3B_Vtx from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/gx/g3b.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
typedef s16 fx16;
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
extern void G3BS_Direct2(GXDLInfo *info, int op, u32 param0, u32 param1);
extern void G3BS_Vtx(GXDLInfo *info, fx16 x, fx16 y, fx16 z);
extern void G3B_UpdateGXDLInfo(GXDLInfo *info, int n);
extern void func_020cf2f4(GXDLInfo *info, fx16 x, fx16 y, fx16 z);
static inline void G3BS_Direct2(GXDLInfo *info, int op, u32 param0, u32 param1) {
    *(u32 *) info->curr_cmd = (u32) op;
    *(info->curr_param + 0) = param0;
    *(info->curr_param + 1) = param1;
}
static inline void G3BS_Vtx(GXDLInfo *info, fx16 x, fx16 y, fx16 z) {
    G3BS_Direct2(info, 0x23, ((u32) ((u32) (u16) (x) | ((u32) (u16) (y) << 16))), (u32) (u16) z);
}
static inline void G3B_UpdateGXDLInfo(GXDLInfo *info, int n) {
    info->curr_cmd   = (u8 *) (info->curr_param + n);
    info->curr_param = (u32 *) (info->curr_cmd + 4);
}
extern const u16(*ctrdgi_fl_maxtime);
void func_020cf2f4(GXDLInfo *info, fx16 x, fx16 y, fx16 z) {
    G3BS_Vtx(info, x, y, z);
    G3B_UpdateGXDLInfo(info, 2);
}
