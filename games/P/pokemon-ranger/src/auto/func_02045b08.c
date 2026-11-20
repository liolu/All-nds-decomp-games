#include "m2c.h"

u8 func_02045b08(s32 arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 0x8C) + arg0), u8 *, 0xC);
}
