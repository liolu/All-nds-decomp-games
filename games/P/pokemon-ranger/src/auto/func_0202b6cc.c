#include "m2c.h"

void func_0202b6cc(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x14) | 0x80);
    M2C_FIELD(arg0, s16 *, 0x1C) = arg1;
}
