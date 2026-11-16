#include "m2c.h"

s32 func_020cf9d8(u32 *arg0) {
    if (*(volatile u32 *) 0x04000600 & 0x4000) {
        return -1;
    }
    *arg0 = (*(volatile u32 *) 0x04000600 & 0x1F00) >> 8;
    return 0;
}
