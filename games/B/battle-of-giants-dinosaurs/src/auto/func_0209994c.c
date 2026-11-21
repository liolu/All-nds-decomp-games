#include "m2c.h"

s32 func_0209994c(void *arg0) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s32 *, 0x44);
    if ((u32) (M2C_FIELD(arg0, s32 *, 0x4C) - temp_r2) >= (u32) (M2C_FIELD(arg0, s32 *, 0x48) - temp_r2)) {
        return 1;
    }
    return 0;
}
