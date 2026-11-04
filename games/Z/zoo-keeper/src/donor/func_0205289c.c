/* compiler: 1.2/sp2p3  */
/* func_0206c43c from projets/madagascar/src/auto/func_0206c43c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
s32 func_0205289c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r2;
    s32 var_r4;
    u16 var_lr;

    var_r2 = arg2;
    var_lr = 1;
    var_r4 = 0;
    if (arg3 > 0) {
        do {
            var_r4 += 1;
            if (arg1 & var_lr) {
                var_r2 += (*(u16 *) ((s8 *) (arg0) + (0x810)));
            }
            var_lr *= 2;
        } while (var_r4 < arg3);
    }
    return var_r2;
}
