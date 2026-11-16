/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern M2C_UNK data_020c7c50;

s32 func_0205f230(void) {
    s32 var_r0;

    var_r0 = 1;
loop_1:
    if (*((M2C_UNK *) ((s8 *) &data_020c7c50 + (var_r0 * 0x18))) == 0) {
        return var_r0;
    }
    var_r0 += 1;
    if (var_r0 >= 0x15) {
        return -1;
    }
    goto loop_1;
}
