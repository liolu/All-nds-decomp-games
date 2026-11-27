#include "m2c.h"

extern void *data_02123cb4;

void func_0207512c(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_02123cb4, s32 *, 0x80) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
