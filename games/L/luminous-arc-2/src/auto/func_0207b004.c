#include "m2c.h"

s32 func_020cab60();                                /* extern */

void func_0207b004(void *arg0) {
    if (func_020cab60() != 0) {
        M2C_FIELD(arg0, u8 *, 0x77C) = (u8) (M2C_FIELD(arg0, u8 *, 0x77C) + 1);
    }
}
