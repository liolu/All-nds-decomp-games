#include "m2c.h"

void func_0200b81c(void *arg0) {
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;

    temp_r2                      = M2C_FIELD(arg0, s32 *, 0xB0);
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0xBC);
    M2C_FIELD(arg0, s32 *, 0xBC) = temp_r2;
    temp_r2_2                    = M2C_FIELD(arg0, s32 *, 0xA8);
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) M2C_FIELD(arg0, s32 *, 0xB4);
    M2C_FIELD(arg0, s32 *, 0xB4) = temp_r2_2;
    temp_r2_3                    = M2C_FIELD(arg0, s32 *, 0xAC);
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) M2C_FIELD(arg0, s32 *, 0xB8);
    M2C_FIELD(arg0, s32 *, 0xB8) = temp_r2_3;
}
