#include "m2c.h"

s32 func_020ac3ac(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4) + 7;
    return (s32) (temp_r1 + ((u32) (temp_r1 >> 2) >> 0x1D)) >> 3;
}
