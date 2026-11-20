#include "m2c.h"

M2C_UNK func_020506d8(s32);                         /* extern */
extern M2C_UNK data_020ad9bc;

void func_0205330c(s32 arg0) {
    s32 temp_r4;

    temp_r4 = (arg0 * 0x30) + M2C_FIELD(&data_020ad9bc, s32 *, 8);
    func_020506d8(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0xC)  = 0;
    M2C_FIELD(temp_r4, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x14) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x24) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x28) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x2C) = 0;
}
