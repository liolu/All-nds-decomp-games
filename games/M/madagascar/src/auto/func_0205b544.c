#include "m2c.h"

extern void *data_020da970;

void func_0205b544(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_020da970, s32 *, 0x7C) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
