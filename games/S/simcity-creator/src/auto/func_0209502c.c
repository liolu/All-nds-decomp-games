#include "m2c.h"

s32 func_0209502c(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xED8);
    if (temp_r3 >= 2) {
        return 0;
    }
    M2C_FIELD((arg0 + (temp_r3 * 4)), s32 *, 0xEDC)                       = arg1;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0xED8) * 4)), s32 *, 0xEE4) = arg2;
    M2C_FIELD(arg0, s32 *, 0xED8)                                         = (s32) (M2C_FIELD(arg0, s32 *, 0xED8) + 1);
    return 1;
}
