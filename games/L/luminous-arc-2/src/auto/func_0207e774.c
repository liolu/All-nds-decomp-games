#include "m2c.h"

s32 func_02011624();                                /* extern */
extern void *data_02170260;

s32 func_0207e774(s32 arg0) {
    s32 var_r0;

    if (arg0 == 0) {
        return -1;
    }
    M2C_FIELD(data_02170260, s32 *, 0x1A90) = 2;
    var_r0                                  = func_02011624(arg0);
    if (var_r0 == 2) {
        var_r0 = 0;
    }
    return var_r0;
}
