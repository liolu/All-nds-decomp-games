#include "m2c.h"

extern M2C_UNK data_02175a4c;

void func_020c8cf8(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        M2C_FIELD(&data_02175a4c, u8 *, 0x20C) = (u8) (M2C_FIELD(&data_02175a4c, u8 *, 0x20C) | arg1);
        return;
    }
    M2C_FIELD(&data_02175a4c, u8 *, 0x20C) = (u8) (M2C_FIELD(&data_02175a4c, u8 *, 0x20C) & ~arg1);
}
