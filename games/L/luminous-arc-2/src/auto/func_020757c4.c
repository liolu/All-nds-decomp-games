#include "m2c.h"

void func_020757c4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x54) = arg1;
    M2C_FIELD(arg0, u16 *, 8)   = (u16) (M2C_FIELD(arg0, u16 *, 8) | 0x20);
}
