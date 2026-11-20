#include "m2c.h"

extern u32 data_020e09dc;

s32 func_020c3f5c(void) {
    u32 temp_r0;

    temp_r0       = (data_020e09dc * 0x41C64E6D) + 0x3039;
    data_020e09dc = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
