#include "m2c.h"

void *func_020702f0();                              /* extern */

void func_0209d7a4(void) {
    void *temp_r0;

    temp_r0 = func_020702f0();
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s32 *, 8) = 1;
    }
}
