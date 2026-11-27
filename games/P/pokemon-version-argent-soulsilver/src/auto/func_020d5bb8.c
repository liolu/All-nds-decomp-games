#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);

extern M2C_UNK data_021e1a80;

s32 func_020d5bb8(void) {
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r4;
    s32 temp_r0;

    temp_r0 = _Z20DisableIRQInterruptsv();
    temp_r4 = M2C_FIELD(&data_021e1a80, M2C_UNK **, 0);
    if (temp_r4 == NULL) {
        _Z20SetIRQInterruptStatei(temp_r0);
        return 0;
    }
    temp_r2                                  = *temp_r4;
    M2C_FIELD(&data_021e1a80, M2C_UNK **, 0) = temp_r2;
    if (temp_r2 == NULL) {
        M2C_FIELD(&data_021e1a80, s32 *, 0x10) = 0;
    }
    _Z20SetIRQInterruptStatei(temp_r0);
    return (s32) temp_r4;
}
