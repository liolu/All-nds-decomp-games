#include "engine.h"
#include "m2c.h"

M2C_UNK func_020066e0(void);
void func_020066f4(M2C_UNK);
M2C_UNK func_0200d288(void);

extern M2C_UNK data_020d2d18;

s32 func_0200cb30(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_020066e0();
    if (M2C_FIELD(&data_020d2d18, s32 *, 0xC) != 0) {
        func_020066f4(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_020d2d18, s32 *, 0xC) = 1;
    func_020066f4(temp_r0);
    M2C_FIELD(&data_020d2d18, s32 *, 0x20) = 1;
    M2C_FIELD(&data_020d2d18, s32 *, 0x24) = 0;
    M2C_FIELD(&data_020d2d18, s32 *, 0x14) = arg0;
    M2C_FIELD(&data_020d2d18, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_020d2d18, s32 *, 0x1C) = arg2;
    if (func_0200d288() != 0) {
        return 0;
    }
    return 3;
}
