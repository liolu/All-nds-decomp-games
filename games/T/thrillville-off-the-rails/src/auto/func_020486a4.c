#include "m2c.h"

M2C_UNK func_0207e3e0(M2C_UNK);                     /* extern */

void func_020486a4(void *arg0, s32 arg1) {
    M2C_UNK var_r0;

    M2C_FIELD(arg0, s32 *, 0x5C) = arg1;
    if (M2C_FIELD(arg0, s32 *, 0x58) == 0) {
        return;
    }
    switch (arg1) {                                 /* irregular */
        case 1:
            var_r0 = 1;
            break;
        case 2:
            var_r0 = 2;
            break;
        default:
            var_r0 = 0;
            break;
    }
    func_0207e3e0(var_r0);
}
