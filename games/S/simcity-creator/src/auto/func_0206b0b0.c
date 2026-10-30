#include "m2c.h"

s32 func_0206b0b0(void *arg0, s32 arg1, s8 arg2, s8 arg3) {
    if (M2C_FIELD(arg0, s32 *, 0x64) == 4) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(arg0, s32 *, 0x58);
        M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        M2C_FIELD(arg0, s8 *, 0x9D)  = arg2;
        M2C_FIELD(arg0, s8 *, 0x9E)  = arg3;
    }
    return 1;
}
