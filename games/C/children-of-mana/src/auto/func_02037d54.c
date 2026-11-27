/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02037d54(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x12C) != 0) && (M2C_FIELD(arg0, u8 *, 0x60C) != 0) && (M2C_FIELD(arg0, s32 *, 0x2E8) == 0) &&
        (M2C_FIELD(arg0, u8 *, 0x430) == 0)) {
        return 1;
    }
    return 0;
}
