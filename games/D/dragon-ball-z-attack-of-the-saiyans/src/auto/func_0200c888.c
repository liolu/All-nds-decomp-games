#include "m2c.h"

extern M2C_UNK data_020b01e4;

void func_0200c888(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_020b01e4, s32 *, 0xA1C) = arg0;
    M2C_FIELD(&data_020b01e4, s32 *, 0xA20) = arg1;
}
