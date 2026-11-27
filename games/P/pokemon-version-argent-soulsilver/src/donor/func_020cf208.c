/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3B_PushMtx from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/gx/g3b.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
extern void G3BS_Direct0(GXDLInfo *info, int op);
extern void G3BS_PushMtx(GXDLInfo *info);
extern void G3B_UpdateGXDLInfo(GXDLInfo *info, int n);
extern void func_020cf208(GXDLInfo *info);
static inline void G3BS_Direct0(GXDLInfo *info, int op) {
    *(u32 *) info->curr_cmd = (u32) op;
}
static inline void G3BS_PushMtx(GXDLInfo *info) {
    G3BS_Direct0(info, 0x11);
}
static inline void G3B_UpdateGXDLInfo(GXDLInfo *info, int n) {
    info->curr_cmd   = (u8 *) (info->curr_param + n);
    info->curr_param = (u32 *) (info->curr_cmd + 4);
}
void func_020cf208(GXDLInfo *info) {
    G3BS_PushMtx(info);
    G3B_UpdateGXDLInfo(info, 0);
}
