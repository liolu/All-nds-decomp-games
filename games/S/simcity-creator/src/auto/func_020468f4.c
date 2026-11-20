#include "m2c.h"

void func_020468f4(s32 arg0, u32 arg1, s32 arg2, s32 arg3) {
    if (arg1 >= 9U) {
        return;
    }
    M2C_FIELD((((u8) (arg1 - 1) * 0x28) + arg0 + (arg2 * 4)), s32 *, 0xAF00) = arg3;
}
