#include "m2c.h"

s32 func_02093948(u8);                              /* extern */

void func_02097018(void *arg0, s32 arg1) {
    if (((u32) (M2C_FIELD(arg0, s32 *, 0x28) << 0x16) >> 0x1E) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((M2C_FIELD(arg0, s32 *, 0x28) & ~0x3E000000) |
                                              ((u32) (func_02093948(M2C_FIELD(arg0, u8 *, 0x6C)) << 0x1B) >> 2));
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) ((M2C_FIELD(arg0, s32 *, 0x28) & ~0x300) | ((u32) (arg1 << 0x1E) >> 0x16));
}
