#include "m2c.h"

void *func_0209d028(s32 arg0, u32 arg1, void **arg2) {
    u32 temp_ip;
    void *var_lr;
    void *var_r0;

    var_r0 = arg0 + 0x1BC;
    var_lr = NULL;
loop_1:
    temp_ip = M2C_FIELD(var_r0, u32 *, 0);
    if ((arg1 >= temp_ip) && (arg1 < (u32) (temp_ip + M2C_FIELD(var_r0, s32 *, 4)))) {
        if (arg2 != NULL) {
            *arg2 = var_lr;
        }
        return var_r0;
    }
    var_lr = var_r0;
    var_r0 = M2C_FIELD(var_r0, void **, 8);
    if (var_r0 == NULL) {
        return NULL;
    }
    goto loop_1;
}
