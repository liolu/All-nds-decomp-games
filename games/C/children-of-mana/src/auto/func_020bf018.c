#include "m2c.h"

void *func_020bf018(void **arg0, s32 arg1) {
    void *temp_r3;
    void *var_r0;

    var_r0 = *arg0;
    if (var_r0 == NULL) {
        return NULL;
    }
loop_2:
    temp_r3 = M2C_FIELD(var_r0, void **, 0xE0);
    if (arg1 == M2C_FIELD(var_r0, s32 *, 0x14)) {
        return var_r0;
    }
    if (temp_r3 != NULL) {
        var_r0 = temp_r3;
        goto loop_2;
    }
    return NULL;
}
