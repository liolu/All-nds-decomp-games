#include "m2c.h"

s32 func_02082220(u32 *arg0) {
    volatile u32 *reg = (volatile u32 *) 0x04000600;

    if (!(*reg & 0x4000)) {
        *arg0 = (*reg & 0x2000) >> 13;
        return 0;
    }
    return -1;
}
