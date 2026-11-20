/* compiler: 2.0/sp1p5  */
/* func_020652a0 from projets/madagascar/src/auto/func_020652a0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
extern u32 data_0217b094;
s32 func_0205c194(u32 arg0) {
    s32 var_r0;

    if (arg0 > (u32) data_0217b094) {
        if ((u32) (arg0 - data_0217b094) >= 0x80000000U) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if ((u32) (data_0217b094 - arg0) < 0x80000000U) {
        return 1;
    }
    return 0;
}
