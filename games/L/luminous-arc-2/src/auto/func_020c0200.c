#include "m2c.h"

extern void *data_0212edac;

void func_020c0200(void *arg0, s32 arg1) {
    void *var_r0;

    var_r0 = arg0;
    if (var_r0 == NULL) {
        var_r0 = data_0212edac;
    }
    M2C_FIELD(var_r0, s32 *, 0xA4) = arg1;
}
