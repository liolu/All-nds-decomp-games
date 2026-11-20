#include "m2c.h"

M2C_UNK func_020461f4(s32, s32);                    /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
s32 func_020537ec();                                /* extern */

void func_0201dae4(s32 arg0, M2C_UNK arg1) {
    func_02053114(arg1);
    func_020461f4(func_020537ec(), arg0 + 0x50);
}
