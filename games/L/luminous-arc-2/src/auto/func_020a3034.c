#include "m2c.h"

extern M2C_UNK data_02172940;

void func_020a3034(s32 arg0) {
    M2C_FIELD(&data_02172940, s32 *, 4)    = arg0;
    M2C_FIELD(&data_02172940, s8 *, 0x16)  = 0;
    M2C_FIELD(&data_02172940, s32 *, 0x10) = 1;
}
