#include "m2c.h"

void func_020caf5c(void **arg0, s32 arg1) {
    *(s8 *) (M2C_FIELD(*arg0, s32 *, 0x660) + (arg1 * 8))             = 1;
    M2C_FIELD((M2C_FIELD(*arg0, s32 *, 0x660) + (arg1 * 8)), s8 *, 1) = 0;
}