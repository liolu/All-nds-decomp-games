#include "m2c.h"

void func_020142b8(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x10) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = arg1;
        M2C_FIELD(arg0, s8 *, 0x19)  = 1;
    }
}
