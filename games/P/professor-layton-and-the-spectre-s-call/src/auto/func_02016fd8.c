#include "engine.h"
#include "m2c.h"

void func_020170e8(M2C_UNK);

extern M2C_UNK data_02034d24;

void func_02016fd8(s32 arg0) {
    s32 temp_r3;

    temp_r3                                = M2C_FIELD(&data_02034d24, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 0x14)           = temp_r3;
    M2C_FIELD(arg0, s32 *, 0x18)           = 0;
    M2C_FIELD(&data_02034d24, s32 *, 0x10) = arg0;
    if (temp_r3 != 0) {
        M2C_FIELD(temp_r3, s32 *, 0x18) = arg0;
        return;
    }
    M2C_FIELD(&data_02034d24, s32 *, 0xC) = arg0;
    func_020170e8(arg0);
}
