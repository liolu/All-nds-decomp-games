/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_0212d834;

s32 func_020bdd10(void) {
    s32 var_r0;

    var_r0 = 0;
loop_1:
    if (M2C_FIELD(((M2C_UNK *) ((s8 *) &data_0212d834 + (var_r0 * 4))), s32 *, 0x14) == 0) {
        return var_r0;
    }
    var_r0 += 1;
    if (var_r0 >= 0x10) {
        return -1;
    }
    goto loop_1;
}
