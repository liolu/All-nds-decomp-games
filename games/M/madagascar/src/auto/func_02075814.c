/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 data_020cf0e4;

s32 func_02075814(void) {
    u32 temp_r0;

    temp_r0       = (data_020cf0e4 * 0x41C64E6D) + 0x3039;
    data_020cf0e4 = temp_r0;
    return 0x7FFF & (temp_r0 >> 0x10);
}
