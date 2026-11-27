#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                    /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);             /* extern */
s32 func_020a6834();                                /* extern */
M2C_UNK func_020d1e7c(M2C_UNK);                     /* extern */

void func_020a699c(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0                      = func_020a6834();
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    M2C_FIELD(arg0, s8 *, 8)     = 1;
    temp_r4                      = _Z20DisableIRQInterruptsv();
    M2C_FIELD(arg0, s32 *, 4)    = 1;
    func_020d1e7c(0);
    _Z20SetIRQInterruptStatei(temp_r4);
}
