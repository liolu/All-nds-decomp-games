#include "m2c.h"

M2C_UNK func_02046b8c(s32, u8);                     /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
s32 func_020537ec();                                /* extern */

void func_0201efd4(void *arg0, M2C_UNK arg1) {
    func_02053114(arg1);
    func_02046b8c(func_020537ec(), M2C_FIELD(arg0, u8 *, 0x34A1));
}
