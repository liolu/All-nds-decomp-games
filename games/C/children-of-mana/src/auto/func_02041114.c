#include "m2c.h"

void func_02041114(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (M2C_FIELD(arg0, s32 *, 0xC0) | 1);
    M2C_FIELD(arg0, s16 *, 0xC4) = arg1;
}
