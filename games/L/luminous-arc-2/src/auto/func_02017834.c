#include "engine.h"

#include "m2c.h"

M2C_UNK func_02021c68(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021508c4;

M2C_UNK MI_CpuFill8(s32, M2C_UNK, M2C_UNK);

void func_02017834(s32 arg0) {
    s32 temp_r1;

    temp_r1                                = arg0 - 2;
    M2C_FIELD(&data_021508c4, s32 *, 8)    = temp_r1;
    M2C_FIELD(&data_021508c4, s32 *, 0xC)  = func_02021c68(0x1E, temp_r1);
    M2C_FIELD(&data_021508c4, s32 *, 0x10) = 0x1E;
}
