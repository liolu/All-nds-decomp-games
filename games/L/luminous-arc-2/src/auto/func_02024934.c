#include "m2c.h"

M2C_UNK func_01ff831c(void *, s32);                 /* extern */
M2C_UNK func_02007558(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */
s32 func_020cd8a8(s32);                             /* extern */

void func_02024934(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r7;

    temp_r7 = M2C_FIELD(arg0, u8 *, 2) | (M2C_FIELD(arg0, u8 *, 3) << 8) | (M2C_FIELD(arg0, u8 *, 4) << 0x10);
    temp_r0 = func_020cd8a8(temp_r7);
    func_01ff831c(arg0, temp_r0);
    func_02007558(temp_r0, arg1, temp_r7);
    func_020cd7d0(temp_r0);
}
