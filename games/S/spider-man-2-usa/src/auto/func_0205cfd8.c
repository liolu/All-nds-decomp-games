#include "m2c.h"

extern void *data_02163c00;

void func_0205cfd8(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_02163c00, s32 *, 0x7C) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
