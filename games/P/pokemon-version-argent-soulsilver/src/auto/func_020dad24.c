#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);

extern M2C_UNK data_021e372c;

s32 func_020dad24(void) {
    s32 temp_r0;

    temp_r0 = _Z20DisableIRQInterruptsv();
    if (M2C_FIELD(&data_021e372c, s32 *, 0x1C) != 0) {
        _Z20SetIRQInterruptStatei(temp_r0);
        return 0;
    }
    M2C_FIELD(&data_021e372c, s32 *, 0x1C) = 1;
    _Z20SetIRQInterruptStatei(temp_r0);
    return 1;
}
