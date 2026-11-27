#include "m2c.h"

s32 func_02094570(s32, s32);                        /* extern */

u16 func_020a65b0(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02094570(arg0 & 0x1F, arg1 & 0x1F);
    temp_r4 = func_02094570((arg0 >> 5) & 0x1F, (arg1 >> 5) & 0x1F);
    return (u16) (temp_r5 | (temp_r4 << 5) | (func_02094570((arg0 >> 0xA) & 0x1F, (arg1 >> 0xA) & 0x1F) << 0xA));
}
