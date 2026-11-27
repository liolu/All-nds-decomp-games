#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);

extern M2C_UNK *data_021e1a80;

s32 func_020d5a78(void) {
    M2C_UNK *var_r1;
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = _Z20DisableIRQInterruptsv();
    var_r4  = 0;
    var_r1  = data_021e1a80;
    if (var_r1 != NULL) {
        do {
            var_r1 = *var_r1;
            var_r4 += 1;
        } while (var_r1 != NULL);
    }
    _Z20SetIRQInterruptStatei(temp_r0);
    return var_r4;
}
