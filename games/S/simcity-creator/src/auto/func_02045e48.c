#include "m2c.h"

s32 func_02045e48(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x604);
    if (temp_r3 >= 0xD) {
        return 0;
    }
    M2C_FIELD((arg0 + (temp_r3 * 4)), s32 *, 0x548)                       = arg1;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x604) * 4)), s32 *, 0x57C) = arg2;
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, s32 *, 0x604) * 4)), s32 *, 0x5B0) = 0x80;
    M2C_FIELD(arg0, s32 *, 0x604)                                         = (s32) (M2C_FIELD(arg0, s32 *, 0x604) + 1);
    return 1;
}
