#include "m2c.h"

M2C_UNK _Z20SetIRQInterruptStatei(s32);             /* extern */
M2C_UNK func_02083c8c();                            /* extern */

void func_0208a3b4(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02083c8c(arg0);
    }
    _Z20SetIRQInterruptStatei(M2C_FIELD(arg1, s32 *, 4));
}
