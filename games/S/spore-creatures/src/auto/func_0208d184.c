#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208c4e8(M2C_UNK);

extern M2C_UNK data_020e6d9c;

s32 func_0208d184(s32 arg0) {
    s32 temp_r2;
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 4);
    temp_r2 = M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020e6d9c + (M2C_FIELD(arg0, s32 *, 0) << 5))), s32 *, 4) & 7;
    if ((temp_r3 == 3) && ((u32) (u16) (temp_r2 + 0xFFFD) <= 1U)) {
        return 1;
    }
    if (((u32) (temp_r3 - 2) <= 1U) && (temp_r2 == 5)) {
        return 1;
    }
    if (((u32) (*(u16 *) func_0208c4e8(arg0) << 0x18) >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}
