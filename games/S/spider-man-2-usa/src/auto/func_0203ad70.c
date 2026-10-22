/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u32 data_02124488;

u32 func_0203ad70(void) {
    u32 temp_r0;

    temp_r0       = (data_02124488 * 0x41C64E6D) + 0x3039;
    data_02124488 = temp_r0;
    return temp_r0 >> 0x11;
}
