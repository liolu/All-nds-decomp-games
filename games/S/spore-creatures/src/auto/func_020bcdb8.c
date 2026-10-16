#include "engine.h"
#include "m2c.h"

M2C_UNK func_020b6bd0(void);
void func_020b6be4(M2C_UNK);
M2C_UNK func_020bd454(void);

extern M2C_UNK data_020f3a34;

s32 func_020bcdb8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = func_020b6bd0();
    if (M2C_FIELD(&data_020f3a34, s32 *, 4) != 0) {
        func_020b6be4(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_020f3a34, s32 *, 4) = 1;
    func_020b6be4(temp_r0);
    M2C_FIELD(&data_020f3a34, s32 *, 0x18) = 2;
    M2C_FIELD(&data_020f3a34, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_020f3a34, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_020f3a34, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_020f3a34, s32 *, 8)    = arg2;
    M2C_FIELD(&data_020f3a34, s32 *, 0x14) = arg3;
    if (func_020bd454() != 0) {
        return 0;
    }
    return 3;
}
