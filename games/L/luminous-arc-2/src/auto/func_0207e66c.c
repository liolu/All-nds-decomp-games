#include "m2c.h"

s32 func_020111d0();                                /* extern */
extern void *data_02170260;

s32 func_0207e66c(s32 arg0) {
    s32 var_r0;

    if (arg0 == 0) {
        return -1;
    }
    M2C_FIELD(data_02170260, s32 *, 0x1A90) = 3;
    data_02170260                           = NULL;
    var_r0                                  = func_020111d0(arg0);
    if (var_r0 == 2) {
        var_r0 = 0;
    }
    return var_r0;
}
