/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u8 func_020992ec(void *arg0) {
    if ((M2C_FIELD(arg0, u8 *, 0x9B) == 0) || (M2C_FIELD(arg0, u8 *, 0x9C) == 0) ||
        ((s32) M2C_FIELD(arg0, s32 *, 0x24) >= 0x100) || ((s32) M2C_FIELD(arg0, s32 *, 0x28) >= 0xC0)) {
        return 0U;
    }
    return M2C_FIELD(arg0, u8 *, 0x9A);
}
