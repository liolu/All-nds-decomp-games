#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
void *func_020ae4ec();                              /* extern */

s32 func_020afa10(void) {
    s32 *temp_r1;
    s32 temp_r4;
    s32 var_r5;
    void *temp_r0;

    temp_r4 = _Z20DisableIRQInterruptsv();
    temp_r0 = func_020ae4ec();
    var_r5  = 0;
    if (temp_r0 == NULL) {
        _Z20SetIRQInterruptStatei(temp_r4);
        return 0;
    }
    temp_r1 = M2C_FIELD(temp_r0, s32 **, 0x2270);
    if ((temp_r1 != NULL) && ((u32) M2C_FIELD(temp_r0, u32 *, 0x2274) > 0xCU)) {
        var_r5 = *temp_r1;
    }
    _Z20SetIRQInterruptStatei(temp_r4);
    return var_r5;
}
