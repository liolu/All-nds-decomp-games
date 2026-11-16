/* compiler: 2.0/sp1p5 -flag no-opt_strength_reduction */
#include "m2c.h"

s32 func_020c14ec(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r5;
    void *temp_r4;

    var_r5 = 0;
loop_1:
    temp_r4 = arg0 + (var_r5 * 0x10);
    if (M2C_FIELD(arg1, s32 *, 4) == M2C_FIELD(temp_r4, s32 *, 0x118)) {
        if ((M2C_FIELD(arg1, u16 *, 2) == M2C_FIELD(temp_r4, u16 *, 0x116)) && (arg2 == M2C_FIELD(temp_r4, s32 *, 0x11C))) {
            M2C_FIELD(temp_r4, s32 *, 0x118) = 0;
            M2C_FIELD(temp_r4, u16 *, 0x116) = 0U;
            return 1;
        }
        goto block_7;
    }
block_7:
    var_r5 += 1;
    if (var_r5 >= 0xC8) {
        return 0;
    }
    goto loop_1;
}
