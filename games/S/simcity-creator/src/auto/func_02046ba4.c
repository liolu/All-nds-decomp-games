#include "m2c.h"

s32 func_02046ba4(void *arg0, s32 arg1) {
    return ((s32) M2C_FIELD(arg0, u8 *, 0x8075) >> (arg1 - 1)) & 1;
}
