#include "m2c.h"

s32 func_020edf64(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r0;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r3 != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x2C) == M2C_FIELD(((arg1 * 6) + temp_r3), s16 *, 8)) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
