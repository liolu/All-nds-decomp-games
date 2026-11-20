#include "m2c.h"

s32 func_02073448(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = arg0 + ((u32) ((arg1 >> 2) << 0x10) >> 0xB) + ((u32) (arg2 << 0xE) >> 0x10);
    return M2C_FIELD(temp_r0, u8 *, 0x54100) - M2C_FIELD(temp_r0, u8 *, 0x54504);
}
