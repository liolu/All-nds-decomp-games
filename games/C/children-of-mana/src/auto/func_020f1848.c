#include "m2c.h"

void func_020f1848(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x4E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4E8) = arg1;
    M2C_FIELD(arg0, s8 *, 0x4EC)  = 0;
}
