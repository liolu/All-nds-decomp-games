#include "m2c.h"

extern void *data_020b0a70;

void func_0205893c(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_020b0a70, s32 *, 0x90) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
