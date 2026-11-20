/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_0217035c;

s32 func_020855d4(void) {
    s32 var_r0;

    var_r0 = 0;
loop_1:
    if (*((M2C_UNK *) ((s8 *) &data_0217035c + (var_r0 * 4))) == 0) {
        return var_r0;
    }
    var_r0 += 1;
    if (var_r0 >= 0x20) {
        return -1;
    }
    goto loop_1;
}
