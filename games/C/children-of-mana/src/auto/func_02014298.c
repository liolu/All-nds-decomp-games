#include "m2c.h"

void func_02014298(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x14) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x14) = arg1;
        M2C_FIELD(arg0, s8 *, 0x1A)  = 1;
    }
}
