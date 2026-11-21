#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_020d5cc0(M2C_UNK);                     /* extern */

void func_020d5b0c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = _Z20DisableIRQInterruptsv();
    func_020d5cc0(arg1);
    _Z20SetIRQInterruptStatei(temp_r4);
}
