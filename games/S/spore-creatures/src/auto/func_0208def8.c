#include "m2c.h"

void func_0208def8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0x1A) = (u16) ((M2C_FIELD(arg0, u16 *, 0x1A) & 0x3F00) | arg1);
    M2C_FIELD(arg0, u8 *, 0x1C)  = (u8) (M2C_FIELD(arg0, u8 *, 0x1C) | 8);
}
