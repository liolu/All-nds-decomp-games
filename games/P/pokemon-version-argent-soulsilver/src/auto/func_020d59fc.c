#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);

extern M2C_UNK data_021e1a80;

s32 func_020d59fc(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = _Z20DisableIRQInterruptsv();
    if (M2C_FIELD(&data_021e1a80, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_021e1a80, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_021e1a80, s32 *, 0x20);
    }
    _Z20SetIRQInterruptStatei(temp_r0);
    return var_r4;
}
