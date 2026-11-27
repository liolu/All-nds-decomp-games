#include "m2c.h"

extern M2C_UNK data_020e10ac;

void func_02066f90(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_020e10ac, s32 *, 0x28) = arg0;
    M2C_FIELD(&data_020e10ac, s32 *, 0x2C) = arg1;
}
