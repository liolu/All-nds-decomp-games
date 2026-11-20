#include "m2c.h"

s32 func_020d7084(void *arg0) {
    s32 temp_r2_2;
    u32 temp_r2;

    temp_r2 = M2C_FIELD(arg0, u32 *, 0x9C);
    if (temp_r2 >= (u32) M2C_FIELD(arg0, u32 *, 0xA0)) {
        return 0;
    }
    M2C_FIELD(arg0, u32 *, 0x9C) = (u32) (temp_r2 + 1);
    temp_r2_2                    = M2C_FIELD(arg0, s32 *, 0xC0) + 1;
    M2C_FIELD(arg0, s32 *, 0xC0) = temp_r2_2;
    if (temp_r2_2 == M2C_FIELD(arg0, s32 *, 0xA4)) {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    }
    return 1;
}
