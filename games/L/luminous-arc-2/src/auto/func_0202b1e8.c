#include "m2c.h"

M2C_UNK func_020248c8(s32, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020cf6b4(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_020cf720(s32);                         /* extern */

void func_0202b1e8(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 sp4;

    func_020cf6b4(arg0, &sp4);
    func_020248c8(arg4, arg5, sp4, arg1, (s32) (u16) (arg2 + (arg3 << 0xC)));
    func_020cf720(sp4);
}
