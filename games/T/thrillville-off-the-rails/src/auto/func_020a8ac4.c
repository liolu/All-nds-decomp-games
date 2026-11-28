#include "m2c.h"

void func_020a8ac4(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x33F) = arg1;
    M2C_FIELD(arg0, u8 *, 0x34A) = (u8) (M2C_FIELD(arg0, u8 *, 0x34A) | 0x40);
}
