#include "m2c.h"

s32 func_02046cc8(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = arg2 + ((arg1 - 1) * 2);
    if (temp_r1 != 0) {
        var_r0 = (s32) M2C_FIELD(arg0, u16 *, 0xBA0A) >> temp_r1;
    } else {
        var_r0 = (s32) M2C_FIELD(arg0, u16 *, 0xBA0A);
    }
    return var_r0 & 1;
}
