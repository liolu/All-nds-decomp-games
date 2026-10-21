#include "m2c.h"

extern s32 data_02170c7c;

void func_02091298(s32 arg0) {
    s32 temp_r1;

    if (data_02170c7c == 0) {
        return;
    }
    temp_r1                                           = arg0 * 0x30;
    M2C_FIELD((data_02170c7c + temp_r1), s32 *, 0xC)  = 0;
    M2C_FIELD((data_02170c7c + temp_r1), s32 *, 0x10) = 0;
    M2C_FIELD((data_02170c7c + temp_r1), s32 *, 0x14) = 0;
    M2C_FIELD((data_02170c7c + temp_r1), s32 *, 0x18) = 0;
    M2C_FIELD((data_02170c7c + temp_r1), s8 *, 0x1C)  = 0;
    M2C_FIELD((data_02170c7c + temp_r1), s32 *, 4)    = 0;
    M2C_FIELD((data_02170c7c + temp_r1), s32 *, 8)    = 0;
    M2C_FIELD((data_02170c7c + temp_r1), s8 *, 0x1D)  = 0;
    M2C_FIELD((data_02170c7c + temp_r1), s16 *, 0x22) = 0;
}
