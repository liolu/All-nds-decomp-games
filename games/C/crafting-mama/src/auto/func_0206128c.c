#include "m2c.h"

void *func_02029924();                              /* extern */
s32 func_02060fd4();                                /* extern */
s32 func_02061014();                                /* extern */
s32 func_02061030();                                /* extern */

void func_0206128c(void) {
    void *temp_r0;

    temp_r0 = func_02029924();
    if ((M2C_FIELD(temp_r0, s8 *, 2) == 0) && (func_02060fd4() != 0)) {
        M2C_FIELD(temp_r0, s8 *, 2) = 1;
    }
    if ((M2C_FIELD(temp_r0, s8 *, 3) == 0) && (func_02061014() != 0)) {
        M2C_FIELD(temp_r0, s8 *, 3) = 1;
    }
    if (M2C_FIELD(temp_r0, s8 *, 4) != 0) {
        return;
    }
    if (func_02061030() != 0) {
        M2C_FIELD(temp_r0, s8 *, 4) = 1;
    }
}
