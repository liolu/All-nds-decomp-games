#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);
M2C_UNK func_020d4994(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020ae4ec(void);

void func_020af9bc(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r2;
    s32 temp_r4;

    temp_r4 = _Z20DisableIRQInterruptsv();
    temp_r0 = func_020ae4ec();
    if (temp_r0 == 0) {
        _Z20SetIRQInterruptStatei(temp_r4);
        return;
    }
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 0x2270);
    if (temp_r0_2 != 0) {
        temp_r2 = M2C_FIELD(temp_r0, s32 *, 0x2274);
        if (temp_r2 > 0) {
            func_020d4994(temp_r0_2, 0, temp_r2);
        }
    }
    _Z20SetIRQInterruptStatei(temp_r4);
}
