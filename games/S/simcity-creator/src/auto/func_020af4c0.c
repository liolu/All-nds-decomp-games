#include "m2c.h"

s32 func_0201a018(s32, M2C_UNK);                    /* extern */
extern M2C_UNK data_02162de0;

void func_020af4c0(s32 arg0) {
    M2C_FIELD(&data_02162de0, s32 *, 0x28) = arg0;
    M2C_FIELD(&data_02162de0, s32 *, 0x24) = func_0201a018(arg0 * 0xE, 0x11);
}
