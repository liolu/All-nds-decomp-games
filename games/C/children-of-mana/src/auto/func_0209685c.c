#include "m2c.h"

void func_0209685c(void *arg0, s8 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0) {
        M2C_FIELD(arg0, s8 *, 0x105) = 1;
        M2C_FIELD(arg0, s8 *, 0x104) = arg1;
    }
    M2C_FIELD(arg0, s8 *, 0x35) = 0;
}
