/* compiler: 1.2/sp2p3  */
/* func_0200f0cc from projets/code-lyoko/src/auto/func_0200f0cc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020209d0(void *, M2C_UNK);
s32 func_020211ac(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    (*(s32 *) ((s8 *) (arg0) + (8)))    = arg1;
    (*(s32 *) ((s8 *) (arg0) + (0x38))) = arg4;
    (*(s32 *) ((s8 *) (arg0) + (0x30))) = arg2;
    (*(s32 *) ((s8 *) (arg0) + (0x34))) = arg3;
    if (func_020209d0(arg0, 7) == 0) {
        return 0;
    }
    (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) | 0x10);
    (*(s32 *) ((s8 *) (arg0) + (0xC))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0xC))) & ~0x20);
    return 1;
}
