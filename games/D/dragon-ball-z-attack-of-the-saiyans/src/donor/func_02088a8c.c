/* compiler: 2.0/sp1p5  */
/* STD_GetStringLength from projets/blue-dragon-awakened-shadow/src/auto/STD_GetStringLength.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
s32 func_02088a8c(s8 *arg0) {
    s32 var_r2;

    var_r2 = 0;
    if (*arg0 != 0) {
        do {
            var_r2 += 1;
        } while (*(arg0 + var_r2) != 0);
    }
    return var_r2;
}
