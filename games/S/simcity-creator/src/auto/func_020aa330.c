#include "m2c.h"

M2C_UNK func_020aa368(void *, M2C_UNK);             /* extern */
M2C_UNK func_020aa40c(void *);                      /* extern */

void func_020aa330(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r3;

    if (arg1 != 0) {
        var_r3 = arg1 - 1;
    } else {
        var_r3 = 3;
    }
    M2C_FIELD(arg0, s32 *, 0x28624) = var_r3;
    M2C_FIELD(arg0, s32 *, 0x28628) = arg1;
    func_020aa368(arg0, arg2);
    func_020aa40c(arg0);
}
