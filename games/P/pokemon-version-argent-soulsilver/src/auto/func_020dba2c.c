#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);
M2C_UNK func_020dc22c(void);

extern M2C_UNK data_021e3798;

s32 func_020dba2c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    temp_r0 = _Z20DisableIRQInterruptsv();
    if (M2C_FIELD(&data_021e3798, s32 *, 0xC) != 0) {
        _Z20SetIRQInterruptStatei(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_021e3798, s32 *, 0xC) = 1;
    _Z20SetIRQInterruptStatei(temp_r0);
    M2C_FIELD(&data_021e3798, s32 *, 0x20) = 0;
    M2C_FIELD(&data_021e3798, s32 *, 0x24) = 0;
    M2C_FIELD(&data_021e3798, s32 *, 0x14) = arg0;
    M2C_FIELD(&data_021e3798, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_021e3798, s32 *, 0x1C) = arg2;
    if (func_020dc22c() != 0) {
        return 0;
    }
    return 3;
}
