#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);
M2C_UNK func_020ae4ec(void);

s32 func_020aff20(void) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r5;

    var_r5  = 0;
    temp_r4 = func_020ae4ec();
    temp_r0 = _Z20DisableIRQInterruptsv();
    if ((temp_r4 != 0) && (M2C_FIELD(temp_r4, s32 *, 0x2260) == 9) && (M2C_FIELD(temp_r4, u8 *, 0x226B) == 0)) {
        var_r5 = temp_r4 + 0x2144;
    }
    _Z20SetIRQInterruptStatei(temp_r0);
    return var_r5;
}
