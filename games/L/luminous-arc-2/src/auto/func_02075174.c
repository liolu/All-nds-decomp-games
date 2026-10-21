#include "m2c.h"

void *func_02075174(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    void *temp_r3;

    temp_r3                        = arg3 + 0x78 + (M2C_FIELD(arg3, u8 *, 0x65) * 0x10);
    M2C_FIELD(temp_r3, s16 *, 0xA) = (s16) (M2C_FIELD(arg0, u8 *, 0) + (M2C_FIELD(arg0, u8 *, 1) << 8));
    M2C_FIELD(temp_r3, s16 *, 0xC) = (s16) (M2C_FIELD(arg0, u8 *, 2) + (M2C_FIELD(arg0, u8 *, 3) << 8));
    return arg0 + 4;
}
