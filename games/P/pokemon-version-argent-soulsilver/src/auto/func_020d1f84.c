#include "m2c.h"

M2C_UNK func_020d18b0();                            /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */

void func_020d1f84(void) {
    s32 temp_r4;

    temp_r4 = _Z20DisableIRQInterruptsv();
    func_020d18b0();
    _Z20SetIRQInterruptStatei(temp_r4);
}
