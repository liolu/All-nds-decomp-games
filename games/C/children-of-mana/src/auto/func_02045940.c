#include "m2c.h"

u8 func_02045940(s32 arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0xC) + arg0), u8 *, 0x2F4);
}
