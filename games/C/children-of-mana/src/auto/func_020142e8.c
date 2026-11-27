#include "m2c.h"

void func_020142e8(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != arg1) {
        M2C_FIELD(arg0, s32 *, 0xC) = arg1;
        M2C_FIELD(arg0, s8 *, 0x18) = 1;
    }
}
