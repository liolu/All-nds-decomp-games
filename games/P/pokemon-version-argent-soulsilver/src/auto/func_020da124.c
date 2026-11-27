#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
s32 func_020d66c4(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK data_021e36d0;

void func_020da124(void) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = _Z20DisableIRQInterruptsv();
    if (func_020d66c4(6, 0x03000000, 0) >= 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        _Z20SetIRQInterruptStatei(temp_r4);
        M2C_FIELD(&data_021e36d0, u16 *, 0x38) = (u16) (M2C_FIELD(&data_021e36d0, u16 *, 0x38) | 1);
        if (M2C_FIELD(&data_021e36d0, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4) == NULL) {
            return;
        }
        M2C_FIELD(&data_021e36d0, M2C_UNK(**)(M2C_UNK, M2C_UNK, M2C_UNK), 4)(0, 4, 0);
        return;
    }
    M2C_FIELD(&data_021e36d0, u16 *, 0x3A) = (u16) (M2C_FIELD(&data_021e36d0, u16 *, 0x3A) | 1);
    M2C_FIELD(&data_021e36d0, u16 *, 0x38) = (u16) (M2C_FIELD(&data_021e36d0, u16 *, 0x38) & ~1);
    _Z20SetIRQInterruptStatei(temp_r4);
}
