#include "m2c.h"

void func_020add58(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x494) = arg1;
    M2C_FIELD(arg0, u8 *, 0x4A0)  = (u8) (M2C_FIELD(arg0, u8 *, 0x4A0) | 8);
}
