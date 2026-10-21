#include "m2c.h"

extern s32 data_020f92cc;

void func_020d0fac(s32 arg0, s32 arg1) {
    M2C_FIELD((data_020f92cc + (arg0 * 4)), s32 *, 0x18) = arg1;
}
