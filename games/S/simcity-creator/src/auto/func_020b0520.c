#include "m2c.h"

M2C_UNK func_020b056c(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_020b05d8(s32, s32, M2C_UNK, s32);      /* extern */

s32 func_020b0520(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, u8 arg5) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = arg5 * 0x28;
    temp_r5 = arg0 + 0x104;
    func_020b056c(arg0, temp_r5 + temp_r4, arg1, arg2);
    func_020b05d8(arg0, temp_r5 + temp_r4, arg3, arg4);
    return temp_r5 + temp_r4;
}
