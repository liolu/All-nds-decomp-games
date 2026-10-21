#include "engine.h"
#include "m2c.h"

M2C_UNK func_02038e10(void);
void func_02038e24(M2C_UNK);
M2C_UNK func_02040514(void);

extern M2C_UNK data_0215fb98;

s32 func_0203fe84(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = func_02038e10();
    if (M2C_FIELD(&data_0215fb98, s32 *, 0xC) != 0) {
        func_02038e24(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_0215fb98, s32 *, 0xC) = 1;
    func_02038e24(temp_r0);
    M2C_FIELD(&data_0215fb98, s32 *, 0x20) = 0;
    M2C_FIELD(&data_0215fb98, s32 *, 0x24) = 0;
    M2C_FIELD(&data_0215fb98, s32 *, 0x14) = arg0;
    M2C_FIELD(&data_0215fb98, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_0215fb98, s32 *, 0x1C) = arg2;
    if (func_02040514() != 0) {
        return 0;
    }
    return 3;
}
