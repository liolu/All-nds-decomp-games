#include "m2c.h"

extern s32 data_020eec34;

void func_0202aeb0(s32 arg0, s32 arg1) {
    M2C_FIELD((data_020eec34 + (arg0 * 4)), s32 *, 0x18) = arg1;
}
