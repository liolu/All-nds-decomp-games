#include "engine.h"
#include "m2c.h"

M2C_UNK func_02006be0(void);
void func_02006bf4(M2C_UNK);
M2C_UNK func_0200e548(void);

extern M2C_UNK data_02149958;

s32 func_0200deac(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = func_02006be0();
    if (M2C_FIELD(&data_02149958, s32 *, 0xC) != 0) {
        func_02006bf4(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_02149958, s32 *, 0xC) = 1;
    func_02006bf4(temp_r0);
    M2C_FIELD(&data_02149958, s32 *, 0x20) = 2;
    M2C_FIELD(&data_02149958, s32 *, 0x24) = 0;
    M2C_FIELD(&data_02149958, s32 *, 0x14) = arg0;
    M2C_FIELD(&data_02149958, s32 *, 0x18) = arg1;
    M2C_FIELD(&data_02149958, s32 *, 0x10) = arg2;
    M2C_FIELD(&data_02149958, s32 *, 0x1C) = arg3;
    if (func_0200e548() != 0) {
        return 0;
    }
    return 3;
}
