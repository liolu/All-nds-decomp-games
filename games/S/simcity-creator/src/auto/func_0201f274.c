#include "m2c.h"

M2C_UNK func_02045f74(s32, u8);                     /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
s32 func_020537e0();                                /* extern */

void func_0201f274(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x34E4) == 0) {
        return;
    }
    func_02053114(arg1);
    func_02045f74(func_020537e0(), M2C_FIELD(arg0, u8 *, 0x34AA));
}
