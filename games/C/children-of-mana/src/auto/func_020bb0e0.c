#include "m2c.h"

void func_020bb0e0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x13C) = (s32) (M2C_FIELD(arg0, s32 *, 0x13C) | 4);
    M2C_FIELD(arg0, s32 *, 0x148) = arg1;
}
