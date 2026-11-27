#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);

extern void *data_021d600c;

s32 func_020ae420(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = _Z20DisableIRQInterruptsv();
    var_r4  = 0;
    if (data_021d600c != NULL) {
        var_r4 = M2C_FIELD(data_021d600c, s32 *, 0x2260);
    }
    _Z20SetIRQInterruptStatei(temp_r0);
    return var_r4;
}
