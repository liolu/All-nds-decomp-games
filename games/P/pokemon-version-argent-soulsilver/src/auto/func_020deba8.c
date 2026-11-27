#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
void *func_020de654();                              /* extern */
s32 func_020de664();                                /* extern */

s32 func_020deba8(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = _Z20DisableIRQInterruptsv();
    temp_r0 = func_020de664();
    if (temp_r0 != 0) {
        _Z20SetIRQInterruptStatei(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_020de654(), s32 *, 0xC8) = arg0;
    _Z20SetIRQInterruptStatei(temp_r5);
    return 0;
}
