#include "m2c.h"

extern M2C_UNK data_0216e3dc;

void func_02076bec(void *arg0) {
    u16 temp_r3;

    M2C_FIELD(arg0, s32 *, 0x14C)          = (s32) (M2C_FIELD(arg0, s32 *, 0x14C) & ~0xFF00);
    temp_r3                                = M2C_FIELD(arg0, u16 *, 0xA);
    M2C_FIELD(&data_0216e3dc, u16 *, 0xF6) = (u16) (M2C_FIELD(&data_0216e3dc, u16 *, 0xF6) & ~temp_r3);
    M2C_FIELD(&data_0216e3dc, u16 *, 0xF8) = (u16) (M2C_FIELD(&data_0216e3dc, u16 *, 0xF8) | temp_r3);
}
