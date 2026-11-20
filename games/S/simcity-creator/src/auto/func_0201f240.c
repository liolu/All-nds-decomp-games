#include "m2c.h"

s8 func_02045f8c();                                 /* extern */
M2C_UNK func_02053114(M2C_UNK);                     /* extern */
M2C_UNK func_020537e0();                            /* extern */

void func_0201f240(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x34E4) == 0) {
        return;
    }
    func_02053114(arg1);
    func_020537e0();
    M2C_FIELD(arg0, s8 *, 0x34AA) = func_02045f8c();
}
