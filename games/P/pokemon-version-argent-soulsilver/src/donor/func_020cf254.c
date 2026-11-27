/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3B_LoadMtx44 from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/gx/g3b.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
typedef s32 fx32;
typedef union {
    struct {
        fx32 _00, _01, _02, _03;
        fx32 _10, _11, _12, _13;
        fx32 _20, _21, _22, _23;
        fx32 _30, _31, _32, _33;
    };
    fx32 m[4][4];
    fx32 a[16];
} MtxFx44;
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
extern void func_020cf1e4(GXDLInfo *info, const MtxFx44 *m);
extern void G3B_UpdateGXDLInfo(GXDLInfo *info, int n);
extern void func_020cf254(GXDLInfo *info, const MtxFx44 *m);
static inline void G3B_UpdateGXDLInfo(GXDLInfo *info, int n) {
    info->curr_cmd   = (u8 *) (info->curr_param + n);
    info->curr_param = (u32 *) (info->curr_cmd + 4);
}
void func_020cf1e4(GXDLInfo *info, const MtxFx44 *m);
void func_020cf254(GXDLInfo *info, const MtxFx44 *m) {
    func_020cf1e4(info, m);
    G3B_UpdateGXDLInfo(info, 16);
}
