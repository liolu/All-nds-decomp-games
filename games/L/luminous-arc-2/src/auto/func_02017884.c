#include "engine.h"

#include "m2c.h"

M2C_UNK func_0202d478(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021508c4;

M2C_UNK func_020075b0(s32, M2C_UNK, M2C_UNK);

void func_02017884(s32 arg0) {
    s32 temp_r4;

    if (M2C_FIELD(&data_021508c4, s32 *, 4) == 0) {
        return;
    }
    temp_r4 = arg0 - 1;
    func_020075b0(M2C_FIELD(&data_021508c4, s32 *, 4) + (temp_r4 << 5), 0, 0x1E);
    M2C_FIELD((M2C_FIELD(&data_021508c4, s32 *, 4) + (temp_r4 * 4)), s32 *, 0x1E0) = 0;
}
