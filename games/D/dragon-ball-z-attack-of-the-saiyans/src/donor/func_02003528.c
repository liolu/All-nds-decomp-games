/* compiler: 2.0/sp1p5  */
/* func_020304ec from projets/battle-of-giants-dinosaurs/src/auto/func_020304ec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_02003528(s8 *arg0) {
    s32 var_r2;
    s8 *var_r0;
    s8 temp_r1;

    var_r0 = arg0;
    var_r2 = -1;
    do {
        temp_r1 = *var_r0;
        var_r0 += 1;
        var_r2 += 1;
    } while (temp_r1 != 0);
    return var_r2;
}
