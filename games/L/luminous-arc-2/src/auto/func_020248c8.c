#include "m2c.h"

M2C_UNK func_01ff831c(void *, s32);                 /* extern */
M2C_UNK func_02024988(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_020cd7d0(s32);                         /* extern */
s32 func_020cd8a8(s32);                             /* extern */
extern u16 data_02167bd4;

void func_020248c8(M2C_UNK arg0, M2C_UNK arg1, void *arg2, M2C_UNK arg3, u16 arg4) {
    s32 temp_r0;

    data_02167bd4 = arg4;
    temp_r0 = func_020cd8a8(M2C_FIELD(arg2, u8 *, 2) | (M2C_FIELD(arg2, u8 *, 3) << 8) | (M2C_FIELD(arg2, u8 *, 4) << 0x10));
    func_01ff831c(arg2, temp_r0);
    func_02024988(arg0, arg1, temp_r0, arg3);
    func_020cd7d0(temp_r0);
}
