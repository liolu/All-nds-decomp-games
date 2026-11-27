#include "m2c.h"

M2C_UNK func_020d1e7c(void *);                      /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */

void func_020d1e38(void *arg0) {
    s32 temp_r4;

    temp_r4 = _Z20DisableIRQInterruptsv();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        func_020d1e7c(arg0 + 0x9C);
    }
    _Z20SetIRQInterruptStatei(temp_r4);
}
