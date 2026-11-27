#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_020d6654(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020de664();                                /* extern */
s32 func_020de6c8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020deb08();                            /* extern */
extern M2C_UNK data_021e4240;

s32 func_020de458(void) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = _Z20DisableIRQInterruptsv();
    if (func_020de664() != 0) {
        _Z20SetIRQInterruptStatei(temp_r4);
        return 3;
    }
    temp_r0 = func_020de6c8(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020deb08();
    func_020d6654(0xA, 0);
    M2C_FIELD(&data_021e4240, s32 *, 4) = 0;
    M2C_FIELD(&data_021e4240, s16 *, 0) = 0;
    _Z20SetIRQInterruptStatei(temp_r4);
    return 0;
}
