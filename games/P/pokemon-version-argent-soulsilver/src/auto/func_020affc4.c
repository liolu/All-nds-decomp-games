#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);

extern M2C_UNK data_021d6010;

void func_020affc4(s32 arg0) {
    s32 temp_r0;

    temp_r0                                = _Z20DisableIRQInterruptsv();
    M2C_FIELD(&data_021d6010, s32 *, 0x28) = arg0;
    _Z20SetIRQInterruptStatei(temp_r0);
}
