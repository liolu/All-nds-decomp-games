#include "engine.h"
#include "m2c.h"

M2C_UNK _Z20DisableIRQInterruptsv(void);
void _Z20SetIRQInterruptStatei(M2C_UNK);
M2C_UNK func_020dc21c(void);

extern M2C_UNK data_021e3798;

s32 func_020dbb80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = _Z20DisableIRQInterruptsv();
    if (M2C_FIELD(&data_021e3798, s32 *, 0xC) != 0) {
        _Z20SetIRQInterruptStatei(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_021e3798, s32 *, 0xC) = 1;
    _Z20SetIRQInterruptStatei(temp_r0);
    M2C_FIELD(&data_021e3798, s32 *, 0x20) = 2;
    M2C_FIELD(&data_021e3798, s32 *, 0x24) = 0;
    M2C_FIELD(&data_021e3798, s32 *, 0x14) = arg0;
    M2C_FIELD(&data_021e3798, s32 *, 0x18) = arg1;
    M2C_FIELD(&data_021e3798, s32 *, 0x10) = arg2;
    M2C_FIELD(&data_021e3798, s32 *, 0x1C) = arg3;
    if (func_020dc21c() != 0) {
        return 0;
    }
    return 3;
}
