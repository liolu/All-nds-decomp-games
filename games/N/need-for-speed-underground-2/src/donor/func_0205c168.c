/* compiler: 2.0/sp1p5  */
/* func_0209e5bc from projets/pokemon-dash/src/auto/func_0209e5bc.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK *data_0217b090;
s32 func_0205c168(void) {
    M2C_UNK *var_r1;
    s32 var_r0;

    var_r0 = 0;
    var_r1 = data_0217b090;
    if (var_r1 == ((void *) 0)) {
        return 0;
    }
    do {
        var_r1 = *var_r1;
        var_r0 += 1;
    } while (var_r1 != ((void *) 0));
    return var_r0;
}
