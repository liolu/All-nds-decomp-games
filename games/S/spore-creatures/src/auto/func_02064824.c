#include "m2c.h"

void func_02064824(void *arg0, s32 arg1, s8 arg2) {
    *(s8 *) (M2C_FIELD(arg0, s32 *, 0x478) + arg1) = arg2;
}