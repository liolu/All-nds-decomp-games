#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
s32 func_020a8460(M2C_UNK);                         /* extern */
extern M2C_UNK data_021d46a0;

s32 func_020a2b90(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;

    temp_r5                             = _Z20DisableIRQInterruptsv();
    temp_r6                             = M2C_FIELD(&data_021d46a0, s32 *, 0);
    temp_r7                             = M2C_FIELD(&data_021d46a0, s32 *, 4);
    M2C_FIELD(&data_021d46a0, s32 *, 0) = 0;
    M2C_FIELD(&data_021d46a0, s32 *, 4) = 0;
    temp_r4                             = func_020a8460(arg0);
    M2C_FIELD(&data_021d46a0, s32 *, 0) = temp_r6;
    M2C_FIELD(&data_021d46a0, s32 *, 4) = temp_r7;
    _Z20SetIRQInterruptStatei(temp_r5);
    return temp_r4;
}
