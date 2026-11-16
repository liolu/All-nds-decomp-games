/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern M2C_UNK data_0204d8fc;

s32 func_020060f0(void) {
    u32 var_r2;

    var_r2 = 0;
loop_1:
    if (M2C_FIELD(((M2C_UNK *) ((s8 *) &data_0204d8fc + (var_r2 * 2))), u16 *, 0x67A0) == 0) {
        return 0;
    }
    var_r2 += 1;
    if (var_r2 >= 0x14U) {
        return 1;
    }
    goto loop_1;
}
