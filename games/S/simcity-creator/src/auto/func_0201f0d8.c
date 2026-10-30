#include "m2c.h"

M2C_UNK func_02046dcc(s32, u16);                    /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
s32 func_020537ec();                                /* extern */

void func_0201f0d8(void *arg0, M2C_UNK arg1) {
    func_02053114(arg1);
    func_02046dcc(func_020537ec(), M2C_FIELD(arg0, u16 *, 0x34A6));
}
