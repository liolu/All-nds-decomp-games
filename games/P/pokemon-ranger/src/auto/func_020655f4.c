/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u32 func_020655f4(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x34);
    if (temp_r0 != NULL) {
        return (u32) (M2C_FIELD(temp_r0, u8 *, 0x33F) << 0x19) >> 0x19;
    }
    return 0U;
}
