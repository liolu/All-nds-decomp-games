#include "m2c.h"

extern void *data_02263e80;

void func_0205bcb4(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_02263e80, s32 *, 0x84) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
