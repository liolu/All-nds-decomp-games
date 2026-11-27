#include "m2c.h"

void *func_0200c3a0();                              /* extern */

void func_02043a58(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_0200c3a0();
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 8) = arg1;
    }
}
