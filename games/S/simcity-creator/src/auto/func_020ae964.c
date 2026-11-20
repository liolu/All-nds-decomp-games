#include "m2c.h"

extern M2C_UNK data_02162de0;

void func_020ae964(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02162de0, s32 *, 0x10) = arg0;
    M2C_FIELD(&data_02162de0, s32 *, 0x30) = arg1;
    M2C_FIELD(&data_02162de0, s32 *, 0xC)  = 0;
    M2C_FIELD(&data_02162de0, s32 *, 8)    = 0;
    M2C_FIELD(&data_02162de0, s32 *, 0x14) = 0x1E;
    M2C_FIELD(&data_02162de0, s32 *, 0x2C) = 0;
}
