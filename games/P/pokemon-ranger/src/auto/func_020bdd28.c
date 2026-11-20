#include "m2c.h"

extern void *data_020f5a6c;

void func_020bdd28(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_020f5a6c, s32 *, 0x80) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
