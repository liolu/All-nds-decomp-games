#include "m2c.h"

void func_020411e4(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg1 = (s32) M2C_FIELD(arg0, s32 *, 0x10) >> 0xC;
    *arg2 = (s32) M2C_FIELD(arg0, s32 *, 0x14) >> 0xC;
    *arg3 = (s32) M2C_FIELD(arg0, s32 *, 0x18) >> 0xC;
}
