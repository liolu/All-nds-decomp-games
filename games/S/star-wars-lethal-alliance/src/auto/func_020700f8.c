#include "m2c.h"

M2C_UNK func_020697e0(M2C_UNK, M2C_UNK);
s32 func_020702e4();
s32 func_02070348(M2C_UNK, M2C_UNK);
M2C_UNK func_02070788();
extern M2C_UNK data_020e8cc0;

s32 func_020700f8(void) {
    s32 temp_r0;

    if (func_020702e4() != 0) {
        return 3;
    }
    temp_r0 = func_02070348(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02070788();
    func_020697e0(0xA, 0);
    M2C_FIELD(&data_020e8cc0, s32 *, 4) = 0;
    M2C_FIELD(&data_020e8cc0, s16 *, 0) = 0;
    return 0;
}
