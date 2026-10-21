#include "m2c.h"

extern M2C_UNK data_020ca5c8;

void func_02072c1c(s32 arg0) {
    s32 temp_r2;

    temp_r2                             = M2C_FIELD(&data_020ca5c8, s32 *, 0) + arg0;
    M2C_FIELD(&data_020ca5c8, s32 *, 0) = temp_r2;
    if (temp_r2 > (s32) M2C_FIELD(&data_020ca5c8, s32 *, 0x10)) {
        M2C_FIELD(&data_020ca5c8, s32 *, 0) = (s32) M2C_FIELD(&data_020ca5c8, s32 *, 0x10);
    }
}
