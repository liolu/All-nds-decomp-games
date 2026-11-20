#include "m2c.h"

M2C_UNK func_02046c6c(s32, s32);                    /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
s32 func_020537ec();                                /* extern */

void func_0201f644(s32 arg0, M2C_UNK arg1, void *arg2) {
    func_02053114(arg1);
    func_02046c6c(func_020537ec(), M2C_FIELD(arg2, s32 *, 0x14));
}
