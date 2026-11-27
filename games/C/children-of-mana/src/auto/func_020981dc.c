#include "m2c.h"

void *func_020981dc(void *arg0, s32 arg1) {
    void *var_r0;

    var_r0 = arg0;
    if (M2C_FIELD(var_r0, s32 *, 0x38) != arg1) {
        var_r0 = NULL;
    }
    return var_r0;
}
