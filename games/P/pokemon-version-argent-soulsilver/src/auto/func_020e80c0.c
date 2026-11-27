#include "m2c.h"

extern u32 data_02111374;

s32 func_020e80c0(void) {
    u32 temp_r0;

    temp_r0       = (data_02111374 * 0x41C64E6D) + 0x3039;
    data_02111374 = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
