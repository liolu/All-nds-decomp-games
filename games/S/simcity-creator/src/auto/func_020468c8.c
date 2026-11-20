#include "m2c.h"

s32 func_020468c8(s32 arg0, u32 arg1, s32 arg2) {
    if (arg1 >= 9U) {
        return 0;
    }
    return M2C_FIELD((((u8) (arg1 - 1) * 0x28) + arg0 + (arg2 * 4)), s32 *, 0xAF00);
}
