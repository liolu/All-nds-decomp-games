#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);

extern M2C_UNK data_021e1a80;

s32 func_020d5a28(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = _Z20DisableIRQInterruptsv();
    if ((u32) arg0 > (u32) M2C_FIELD(&data_021e1a80, u32 *, 4)) {
        if ((u32) (arg0 - M2C_FIELD(&data_021e1a80, u32 *, 4)) < 0x80000000U) {
            var_r4 = 0;
        } else {
            var_r4 = 1;
        }
    } else if ((u32) (M2C_FIELD(&data_021e1a80, u32 *, 4) - arg0) < 0x80000000U) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    _Z20SetIRQInterruptStatei(temp_r0);
    return var_r4;
}
