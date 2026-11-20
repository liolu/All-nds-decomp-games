#include "m2c.h"

extern void *data_0217a79c;

void func_0205622c(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_0217a79c, s32 *, 0x7C) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
