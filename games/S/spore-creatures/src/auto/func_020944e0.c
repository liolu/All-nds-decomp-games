#include "m2c.h"

M2C_UNK func_020946c8();                            /* extern */
extern M2C_UNK data_020e8bec;

void func_020944e0(s32 arg0) {
    M2C_FIELD(&data_020e8bec, s32 *, 0x1C) = arg0;
    func_020946c8();
    M2C_FIELD(&data_020e8bec, s32 *, 0x10) = 0x26F;
    M2C_FIELD(&data_020e8bec, s32 *, 8)    = (s32) (M2C_FIELD(&data_020e8bec, s32 *, 0xC) + 4);
    M2C_FIELD(&data_020e8bec, s8 *, 1)     = (s8) arg0;
    M2C_FIELD(&data_020e8bec, s8 *, 0)     = 0;
}
