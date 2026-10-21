#include "m2c.h"

void *func_02060354();                              /* extern */
s32 *func_02060e38();                               /* extern */
s32 func_02061428(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0207906c(s32);                         /* extern */
s32 func_0207909c(s32);                             /* extern */

void func_0206154c(void) {
    s32 temp_r4;

    if (func_0207909c(*func_02060e38()) != 0) {
        return;
    }
    if (func_02061428(1, *func_02060e38()) > 1) {
        return;
    }
    temp_r4                                 = *func_02060e38() + 0x6C;
    M2C_FIELD(func_02060354(), s32 *, 0x2C) = temp_r4;
    func_0207906c(*func_02060e38());
}
