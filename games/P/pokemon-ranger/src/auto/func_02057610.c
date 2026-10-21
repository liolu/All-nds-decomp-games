#include "m2c.h"

u8 func_02057610(s32 arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0xC) + arg0), u8 *, 0x59);
}
