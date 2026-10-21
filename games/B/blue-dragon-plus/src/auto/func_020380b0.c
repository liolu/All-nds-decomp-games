#include "m2c.h"

extern M2C_UNK data_0215dd64;

void func_020380b0(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0215dd64, s32 *, 8) = arg0;
    M2C_FIELD(&data_0215dd64, s32 *, 4) = arg1;
}
