#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                                /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);                         /* extern */
M2C_UNK func_020a273c();                            /* extern */
extern s32 data_021d44b0;

void func_020a28dc(void) {
    s32 temp_r5;

    temp_r5 = _Z20DisableIRQInterruptsv();
    if (data_021d44b0 != 0) {
        do {
            func_020a273c();
        } while (data_021d44b0 != 0);
    }
    _Z20SetIRQInterruptStatei(temp_r5);
}
