#include "m2c.h"

M2C_UNK func_02004078();                            /* extern */
M2C_UNK func_02004118();                            /* extern */
M2C_UNK func_02007558(s32, s32, s32);               /* extern */
M2C_UNK func_020cf6b4(M2C_UNK, s32 *);              /* extern */
M2C_UNK func_020cf720(s32);                         /* extern */

void func_0202b3d8(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 sp0;

    func_020cf6b4(arg0, &sp0);
    func_02004078();
    func_02007558(sp0, (arg1 << 5) + 0x06890000, arg2 << 5);
    func_02004118();
    func_020cf720(sp0);
}
