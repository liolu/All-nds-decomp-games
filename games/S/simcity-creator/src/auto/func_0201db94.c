#include "m2c.h"

M2C_UNK func_020216c0(s32, s32, s32);               /* extern */
s32 func_0204638c();                                /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
M2C_UNK func_020537ec();                            /* extern */

void func_0201db94(s32 arg0, M2C_UNK arg1) {
    func_02053114(arg1);
    func_020537ec();
    func_020216c0(arg0, arg0 + 0x76, func_0204638c());
}
