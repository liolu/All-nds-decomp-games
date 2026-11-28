#include "m2c.h"

extern void *data_020fa9a4;

void func_0207fcec(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_020fa9a4, s32 *, 0x40) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
