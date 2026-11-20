#include "m2c.h"

u8 func_020216ac(s32 arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0x1C) + arg0), u8 *, 0x34AD);
}
