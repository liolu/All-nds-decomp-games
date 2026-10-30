#include "m2c.h"

s32 func_02046e14(void *arg0, s32 arg1) {
    return ((s32) M2C_FIELD(arg0, u16 *, 0xBA12) >> (arg1 - 1)) & 1;
}
