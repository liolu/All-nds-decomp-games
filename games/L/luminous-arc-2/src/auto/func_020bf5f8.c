#include "m2c.h"

void *func_0209cc7c(M2C_UNK);                       /* extern */
s32 func_020aaa4c();                                /* extern */

s32 func_020bf5f8(M2C_UNK arg0) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0_2 = func_020aaa4c();
    if (temp_r0_2 != -1) {
        return temp_r0_2;
    }
    temp_r0 = func_0209cc7c(arg0);
    if (temp_r0 == NULL) {
        return 0;
    }
    return **M2C_FIELD(temp_r0, s32 ***, 0xC);
}
