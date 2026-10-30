#include "m2c.h"

s32 func_020961a0(void *arg0) {
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u32 *, 4);
    switch (temp_r1) {
        case 0:
        case 2:
        case 3:
            break;
        default:
            break;
        case 1:
            M2C_FIELD(arg0, u32 *, 4) = 2U;
            break;
    }
    return 1;
}
