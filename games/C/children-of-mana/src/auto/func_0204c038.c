#include "m2c.h"

void func_0204c038(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) (arg1 - 0xA);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (arg2 - 0xA);
}
