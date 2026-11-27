/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0201b86c();                                /* extern */

u32 func_0201b79c(void *arg0) {
    if (func_0201b86c() == 0) {
        return 0U;
    }
    if (M2C_FIELD(arg0, s8 *, 0xD8) == 0) {
        return 0U;
    }
    return (u32) (M2C_FIELD(arg0, u8 *, 0x26) << 0x19) >> 0x1F;
}
