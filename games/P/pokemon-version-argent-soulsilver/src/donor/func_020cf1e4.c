/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3BS_LoadMtx44 from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSDK/src/gx/g3b.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
extern void func_020d4968(const void *pSrc, void *pDest);
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
void func_020cf1e4(GXDLInfo *info, const MtxFx44 *m) {
    *(u32 *) info->curr_cmd = 0x16;

    func_020d4968(&m->_00, (void *) info->curr_param);
#line 44
}
