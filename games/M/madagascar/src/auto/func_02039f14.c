#include "m2c.h"

void func_02039f14(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 4)      = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    M2C_FIELD(arg0, void **, 0x10) = arg1;
}
