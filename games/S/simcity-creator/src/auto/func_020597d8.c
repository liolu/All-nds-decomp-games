/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020597d8(s32 arg0, void *arg1, void *arg2, s32 arg3) {
    M2C_FIELD(arg1, s16 *, 0x12) = (s16) M2C_FIELD(arg2, u8 *, 0xC);
    M2C_FIELD(arg1, s16 *, 0x14) = (s16) ((u16) (M2C_FIELD(arg2, u8 *, 0xE) + arg3) + (M2C_FIELD(arg2, u8 *, 0xF) * 0x10));
    M2C_FIELD(arg1, s16 *, 0x16) = 0x1F;
}
