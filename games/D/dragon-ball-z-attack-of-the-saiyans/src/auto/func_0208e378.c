#include "m2c.h"

s32 _Z20DisableIRQInterruptsv();                    /* extern */
M2C_UNK _Z20SetIRQInterruptStatei(s32);             /* extern */
M2C_UNK func_0208aaa4(M2C_UNK, void *);             /* extern */
void *func_0208ab04(M2C_UNK, M2C_UNK);              /* extern */

void *func_0208e378(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r4 = _Z20DisableIRQInterruptsv();
    temp_r0 = func_0208ab04(arg0, 0);
    if (temp_r0 != NULL) {
        func_0208aaa4(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    _Z20SetIRQInterruptStatei(temp_r4);
    return temp_r0;
}
