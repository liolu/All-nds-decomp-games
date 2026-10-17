#include "m2c.h"

extern s32 data_020de1ac;

void func_0206b370(s32 arg0, s32 arg1) {
    M2C_FIELD((data_020de1ac + (arg0 * 4)), s32 *, 0x14) = arg1;
}
