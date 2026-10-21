#include "m2c.h"

extern M2C_UNK data_0216e3d8;

s32 func_0206cfd0(void) {
    s32 temp_r2;
    s32 temp_r2_2;

    temp_r2_2 = M2C_FIELD(&data_0216e3d8, s32 *, 0x10) ^ (M2C_FIELD(&data_0216e3d8, s32 *, 0x10) << 0x11);
    temp_r2   = temp_r2_2 ^ (temp_r2_2 >> 0xF);
    M2C_FIELD(&data_0216e3d8, s32 *, 0x10) = temp_r2;
    return temp_r2 & 0x7FFF;
}
