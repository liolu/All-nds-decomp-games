#include "m2c.h"

extern M2C_UNK data_0210e25a;

void func_020e1a48(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x20) = 3;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) * ((u16 *) ((s8 *) &data_0210e25a + (M2C_FIELD(arg0, s32 *, 4) * 8)));
    M2C_FIELD(arg0, s16 *, 0x10) = 0;
}
