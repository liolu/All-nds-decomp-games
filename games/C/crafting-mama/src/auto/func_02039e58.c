#include "m2c.h"

void *func_020291d0();                              /* extern */

void func_02039e58(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = func_020291d0();
    if (arg2 != 0) {
        M2C_FIELD(temp_r0, s32 *, 0x14) = arg2;
    }
}
