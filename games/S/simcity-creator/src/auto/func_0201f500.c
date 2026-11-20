#include "m2c.h"

M2C_UNK func_02046300(s32, u8);                     /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
s32 func_020537ec();                                /* extern */

void func_0201f500(s32 arg0, M2C_UNK arg1, void *arg2) {
    func_02053114(arg1);
    func_02046300(func_020537ec(), M2C_FIELD(arg2, u8 *, 0x11));
}
