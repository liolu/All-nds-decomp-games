/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02056d7c(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r2;
    s32 var_r0;
    u16 temp_r1;
    u8 temp_r1_2;

    temp_r2 = (((arg2 * M2C_FIELD(arg0, s8 *, 0x118C8)) + arg1) * 0x1C) + (s32) (arg0 + 0x758);
    if (M2C_FIELD(temp_r2, u8 *, 0xF) != 0) {
        return 0;
    }
    temp_r1 = M2C_FIELD((temp_r2 + (arg3 * 2)), u16 *, 0x10);
    if (temp_r1 != 0) {
        temp_r1_2 = M2C_FIELD((arg0 + (temp_r1 * 4)), u8 *, 0x11C81);
        if ((u32) temp_r1_2 < 0x15U) {
            return 0;
        }
        if (temp_r1_2 == M2C_FIELD(arg0, u8 *, 0x12C21)) {
            var_r0 = 0;
        } else {
            var_r0 = 2;
        }
        return var_r0;
    }
    return 1;
}
