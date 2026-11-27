#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                    /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);             /* extern */
s32 func_020b25a0(s32);                             /* extern */
M2C_UNK func_020b25f0(s32);                         /* extern */
M2C_UNK func_020b4128(s32);                         /* extern */
extern M2C_UNK data_021d6f80;

void func_020b2430(s32 arg0) {
    s32 temp_r4;
    s32 var_r5;

    temp_r4 = _Z20DisableIRQInterruptsv();
    var_r5  = func_020b25a0(arg0);
    if (var_r5 != 0) {
        do {
            func_020b25f0(var_r5);
            func_020b4128(var_r5);
            var_r5 = func_020b25a0(arg0);
        } while (var_r5 != 0);
    }
    *((M2C_UNK *) ((s8 *) &data_021d6f80 + (arg0 * 4))) = 0;
    _Z20SetIRQInterruptStatei(temp_r4);
}
