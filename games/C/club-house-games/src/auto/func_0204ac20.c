#include "m2c.h"

extern M2C_UNK data_0224da40;

s32 func_0204ac20(void) {
    s32 var_r0;

    var_r0 = 0;
loop_1:
    if (M2C_FIELD(((M2C_UNK *) ((s8 *) &data_0224da40 + (var_r0 * 8))), s32 *, 0x0) == 0) {
        return var_r0;
    }
    var_r0 += 1;
    if (var_r0 >= 0x21) {
        return -1;
    }
    goto loop_1;
}
