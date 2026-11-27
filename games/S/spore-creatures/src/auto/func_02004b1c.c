#include "m2c.h"

s32 *func_020050f0(s32);                            /* extern */

void func_02004b1c(s32 arg0, s32 arg1) {
    s32 *temp_r0;

    temp_r0 = func_020050f0(arg0 + 4);
    if (temp_r0 != NULL) {
        *temp_r0 = arg1;
    }
}
