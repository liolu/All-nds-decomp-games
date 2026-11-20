#include "m2c.h"

u8 func_02073490(s32 arg0, s32 arg1, s32 arg2) {
    return M2C_FIELD((arg0 + ((u32) ((arg1 >> 2) << 0x10) >> 0xB) + ((u32) (arg2 << 0xE) >> 0x10)), u8 *, 0x54908);
}
