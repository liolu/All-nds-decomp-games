#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
void *func_020ae4ec();                              /* extern */
s32 func_020b0338();                                /* extern */

s32 func_020b0274(void) {
    s32 temp_r4;
    s32 var_r5;
    void *temp_r0;

    temp_r4 = _Z20DisableIRQInterruptsv();
    temp_r0 = func_020ae4ec();
    var_r5  = 0;
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s32 *, 0x2260) == 9)) {
        var_r5 = func_020b0338();
    }
    _Z20SetIRQInterruptStatei(temp_r4);
    return var_r5;
}
