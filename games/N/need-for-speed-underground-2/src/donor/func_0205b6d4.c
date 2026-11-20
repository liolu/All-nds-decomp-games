/* compiler: 1.2/sp2p3  */
/* func_0209dacc from projets/pokemon-dash/src/auto/func_0209dacc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern s32 func_01ff8214(s32, s32, s32, s32);
s32 func_0205b6d4(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    volatile u32 *reg;
    u32 r0;

    if (arg3 == 0) {
        return arg0;
    }
    reg = (volatile u32 *) (0x040000B0 + ((arg0 * 3 + 2) * 4));
    while (*reg & 0x80000000) {
    }
    func_01ff8214(arg0, arg1, arg2, (s32) ((arg3 >> 1) | 0x80000000));
    do {
        r0 = *reg & 0x80000000;
    } while (r0 != 0);
    return r0;
}
