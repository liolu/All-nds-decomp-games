#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_020d4994(s32, M2C_UNK, s32);           /* extern */
s32 func_020a0ec4();                                /* extern */
M2C_UNK func_020a0f6c(s32, M2C_UNK);                /* extern */
M2C_UNK func_020a2d9c(s32);                         /* extern */
extern void *data_02110648;

s32 func_020a0e5c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r6;

    temp_r4 = func_020a0ec4();
    temp_r6 = _Z20DisableIRQInterruptsv();
    temp_r0 = M2C_FIELD(data_02110648, s32(**)(s32), 0x18)(temp_r4);
    if (temp_r0 != 0) {
        func_020d4994(temp_r0, 0, temp_r4);
        func_020a0f6c(temp_r0, arg0);
        func_020a2d9c(temp_r0);
    }
    _Z20SetIRQInterruptStatei(temp_r6);
    return temp_r0;
}
