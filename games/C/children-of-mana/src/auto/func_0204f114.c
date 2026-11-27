#include "m2c.h"

void func_0204f114(void *arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r2 > 0) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r2 - M2C_FIELD(arg0, s32 *, 0x10));
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r1 < 0) {
        var_r2 = 0;
    } else {
        var_r2 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r1 <= var_r2) {
            var_r2 = temp_r1;
        }
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r2;
}
