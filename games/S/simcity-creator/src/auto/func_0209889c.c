/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u8 func_0209889c(void *arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD((arg0 + (M2C_FIELD(arg0, u16 *, 0x17A6) * 4)), s32 *, 0x1764);
    if (temp_r2 != 0) {
        return (u8) M2C_FIELD(((arg1 * 0x2C) + temp_r2), s32 *, 0x18);
    }
    return 0U;
}
