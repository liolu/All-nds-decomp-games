#include "m2c.h"

void func_0204c574(void *arg0, void *arg1) {
    void *temp_r3;
    void *var_ip;
    void *var_r0;

    var_r0  = arg0;
    temp_r3 = M2C_FIELD(var_r0, void **, 0x1BC);
    if (temp_r3 != NULL) {
        var_ip = var_r0;
        if (var_r0 != NULL) {
            var_ip = var_r0 + 4;
        }
        M2C_FIELD(temp_r3, s32 *, 4) = (s32) (M2C_FIELD(temp_r3, s32 *, 4) - 1);
        M2C_FIELD(var_ip, s32 *, 4)  = (s32) (M2C_FIELD(var_ip, s32 *, 4) - 1);
    }
    M2C_FIELD(var_r0, void **, 0x1BC) = arg1;
    if (var_r0 != NULL) {
        var_r0 += 4;
    }
    M2C_FIELD(arg1, s32 *, 4)   = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
    M2C_FIELD(var_r0, s32 *, 4) = (s32) (M2C_FIELD(var_r0, s32 *, 4) + 1);
}
