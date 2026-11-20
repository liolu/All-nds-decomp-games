#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_02086bf0(M2C_UNK);                     /* extern */

void func_02086a6c(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = _Z20DisableIRQInterruptsv();
    func_02086bf0(arg1);
    _Z20SetIRQInterruptStatei(temp_r4);
}
