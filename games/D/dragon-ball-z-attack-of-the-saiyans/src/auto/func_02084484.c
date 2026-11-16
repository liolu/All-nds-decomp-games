#include "m2c.h"

M2C_UNK func_02083fb0();                            /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */

void func_02084484(void *arg0) {
    s32 temp_r4;

    temp_r4                      = _Z20DisableIRQInterruptsv();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02083fb0();
    _Z20SetIRQInterruptStatei(temp_r4);
}
