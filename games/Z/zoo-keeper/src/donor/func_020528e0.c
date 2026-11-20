/* compiler: 1.2/sp2p3  */
/* func_0206c480 from projets/madagascar/src/auto/func_0206c480.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0205289c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_020528e0(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        return 0;
    }
    if (arg1 == 0) {
        return 0;
    }
    if (!((*(u16 *) ((s8 *) (arg1) + (2))) & (1 << arg2))) {
        return 0;
    }
    return func_0205289c(arg0, (s32) (*(u16 *) ((s8 *) (arg1) + (0))), arg1 + 4, arg2);
}
