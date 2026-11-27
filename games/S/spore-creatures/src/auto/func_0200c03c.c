#include "m2c.h"

void func_0200c03c(void **arg0, s32 arg1) {
    void *temp_r2;

    temp_r2                         = *arg0;
    M2C_FIELD(temp_r2, u16 *, 0x98) = (u16) ((M2C_FIELD(temp_r2, u16 *, 0x98) & ~8) | ((u32) (arg1 << 0x1F) >> 0x1C));
}
