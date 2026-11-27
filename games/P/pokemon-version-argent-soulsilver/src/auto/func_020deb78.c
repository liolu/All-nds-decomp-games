#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);

extern M2C_UNK data_021e4240;

s32 func_020deb78(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = _Z20DisableIRQInterruptsv();
    if (M2C_FIELD(&data_021e4240, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_021e4240, void **, 4), s32 *, 0x14C);
    } else {
        var_r4 = 0;
    }
    _Z20SetIRQInterruptStatei(temp_r0);
    return (s32) (u16) var_r4;
}
