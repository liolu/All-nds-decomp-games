#include "m2c.h"

s32 func_020c961c(s32);                             /* extern */
s32 func_020c99a4(M2C_UNK);                         /* extern */
M2C_UNK func_020c99cc(M2C_UNK, M2C_UNK);            /* extern */
s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */

void func_020ca578(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = _Z20DisableIRQInterruptsv();
    temp_r4 = func_020c961c(arg1);
    if (arg0 == func_020c99a4(arg2)) {
        func_020c99cc(arg2, 0);
    }
    func_020c961c(temp_r4);
    _Z20SetIRQInterruptStatei(temp_r5);
}
