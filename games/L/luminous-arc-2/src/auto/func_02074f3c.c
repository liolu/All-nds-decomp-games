#include "m2c.h"

void *func_02074f3c(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_FIELD(arg3, s16 *, 0x92) = (s16) (M2C_FIELD(arg0, u8 *, 0) + (M2C_FIELD(arg0, u8 *, 1) << 8));
    M2C_FIELD(arg3, s16 *, 0x94) = (s16) (M2C_FIELD(arg0, u8 *, 2) + (M2C_FIELD(arg0, u8 *, 3) << 8));
    return arg0 + 4;
}
