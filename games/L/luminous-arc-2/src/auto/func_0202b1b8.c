#include "m2c.h"

M2C_UNK func_02007558(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_020cf6b4(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_020cf720(s32);                         /* extern */

void func_0202b1b8(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 sp0;

    func_020cf6b4(arg0, &sp0);
    func_02007558(sp0, arg1, arg3 << 5);
    func_020cf720(sp0);
}
