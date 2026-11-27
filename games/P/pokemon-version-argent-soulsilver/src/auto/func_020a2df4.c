#include "m2c.h"

s32 *func_020a2e10();                               /* extern */

void func_020a2df4(s32 arg0, void *arg1) {
    s32 *temp_r0;

    temp_r0 = func_020a2e10();
    if (temp_r0 != NULL) {
        *temp_r0 = M2C_FIELD(arg1, s32 *, 0x7C);
    }
}
