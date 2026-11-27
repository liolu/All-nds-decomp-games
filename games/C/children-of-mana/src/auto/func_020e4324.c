#include "m2c.h"

void func_020e4324(void *arg0, void *arg1) {
    void *var_r0;
    void *var_r2;

    var_r2 = M2C_FIELD(arg0, void **, 0x20);
    if (var_r2 != NULL) {
        var_r0 = M2C_FIELD(var_r2, void **, 0x34);
        if (var_r0 != NULL) {
            do {
                var_r2 = var_r0;
                var_r0 = M2C_FIELD(var_r0, void **, 0x34);
            } while (var_r0 != NULL);
        }
        M2C_FIELD(var_r2, void **, 0x34) = arg1;
    } else {
        M2C_FIELD(arg0, void **, 0x20) = arg1;
    }
    M2C_FIELD(arg1, s32 *, 0x34) = 0;
}
