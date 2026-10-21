#include "m2c.h"

s32 func_02077618(void *arg0) {
    s32 temp_r1;
    u8 temp_r2;

    if (M2C_FIELD(arg0, u16 *, 6) == 0) {
        temp_r2                   = M2C_FIELD(arg0, u8 *, 0);
        M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 4);
        if (temp_r2 & 1) {
            M2C_FIELD(arg0, s32 *, 0x14) = (s32) (0 - M2C_FIELD(arg0, s32 *, 0x14));
        }
        M2C_FIELD(arg0, u8 *, 0) = (u8) (temp_r2 | 1);
    }
    M2C_FIELD(arg0, u16 *, 6) = (u16) (M2C_FIELD(arg0, u16 *, 6) - 1);
    temp_r1                   = M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 8) = temp_r1;
    return temp_r1;
}
