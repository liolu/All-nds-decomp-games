#include "m2c.h"

M2C_UNK func_02003e90();                            /* extern */
M2C_UNK func_0200402c();                            /* extern */
M2C_UNK func_02024934(s32, s32);                    /* extern */
M2C_UNK func_020ca8cc(s32, M2C_UNK, M2C_UNK, u16, s32, s32); /* extern */
M2C_UNK func_020cf6b4(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_020cf720(s32);                         /* extern */

void func_0202b36c(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, u16 arg5, u8 arg6) {
    u32 sp8;
    u32 temp_r0;

    func_020cf6b4(arg0, &sp8);
    func_02003e90();
    temp_r0 = arg1 << 5;
    func_02024934(sp8, temp_r0 + 0x06820000);
    func_020ca8cc(temp_r0 + 0x06820000, arg2, arg3, arg4, (s32) arg5, (s32) arg6);
    func_0200402c();
    func_020cf720(sp8);
}
