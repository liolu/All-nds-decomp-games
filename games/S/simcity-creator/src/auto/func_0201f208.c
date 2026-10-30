#include "m2c.h"

M2C_UNK func_02045f3c(s32, s32);                    /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
s32 func_020537e0();                                /* extern */

void func_0201f208(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x34E4) == 0) {
        return;
    }
    func_02053114(arg1);
    func_02045f3c(func_020537e0(), M2C_FIELD(arg0, u8 *, 0x34A9) & 0x7F);
}
