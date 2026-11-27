#include "m2c.h"

void func_020e28dc(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = (s32) M2C_FIELD(arg0, s32 *, 0x230) >> 0xC;
    *arg2 = (s32) M2C_FIELD(arg0, s32 *, 0x234) >> 0xC;
}
