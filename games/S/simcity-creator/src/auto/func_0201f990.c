#include "m2c.h"

s8 func_02046324();                                 /* extern */
s8 func_02046334();                                 /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
M2C_UNK func_020537ec();                            /* extern */

void func_0201f990(s32 arg0, M2C_UNK arg1, void *arg2) {
    func_02053114(arg1);
    func_020537ec();
    M2C_FIELD(arg2, s8 *, 0x2C) = func_02046324();
    func_02053114(arg1);
    func_020537ec();
    M2C_FIELD(arg2, s8 *, 0x2D) = func_02046334();
}
