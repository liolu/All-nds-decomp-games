#include "m2c.h"

void func_020add6c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x490) = arg1;
    M2C_FIELD(arg0, u8 *, 0x4A0)  = (u8) (M2C_FIELD(arg0, u8 *, 0x4A0) | 8);
}
