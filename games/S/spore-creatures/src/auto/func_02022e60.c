#include "m2c.h"

M2C_UNK func_020934bc();                            /* extern */
extern M2C_UNK data_020e0d24;

void func_02022e60(void) {
    s32 temp_r1;

    temp_r1                                = M2C_FIELD(&data_020e0d24, s32 *, 0x10) - 1;
    M2C_FIELD(&data_020e0d24, s32 *, 0x10) = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    if (M2C_FIELD(&data_020e0d24, s32 *, 0x14) != 0) {
        func_020934bc();
    }
    M2C_FIELD(&data_020e0d24, s32 *, 0x14) = 0;
}
