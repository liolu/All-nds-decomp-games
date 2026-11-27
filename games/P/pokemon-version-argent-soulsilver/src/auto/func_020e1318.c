#include "m2c.h"

M2C_UNK func_020d14ec();                            /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */

void func_020e1318(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020d14ec(arg0);
    }
    _Z20SetIRQInterruptStatei(M2C_FIELD(arg1, s32 *, 4));
}
