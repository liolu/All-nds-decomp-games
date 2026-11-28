/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u32 data_02126ff4;

u32 func_0203a9d0(void) {
    u32 temp_r0;

    temp_r0       = (data_02126ff4 * 0x41C64E6D) + 0x3039;
    data_02126ff4 = temp_r0;
    return temp_r0 >> 0x11;
}
