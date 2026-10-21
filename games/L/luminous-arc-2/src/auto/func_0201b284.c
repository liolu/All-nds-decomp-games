#include "m2c.h"

extern u32 data_020eeac8;

s32 func_0201b284(void) {
    u32 temp_r0;

    temp_r0       = (data_020eeac8 * 0x41C64E6D) + 0x3039;
    data_020eeac8 = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
