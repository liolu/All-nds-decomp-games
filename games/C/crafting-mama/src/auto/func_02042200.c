#include "m2c.h"

s32 func_02042200(void *arg0, s32 *arg1) {
    void *temp_r3;
    void *var_r0;

    if (arg0 == NULL) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x2C);
    if ((temp_r3 == NULL) && (M2C_FIELD(arg0, void **, 0x30) == NULL)) {
        return 0;
    }
    var_r0 = M2C_FIELD(arg0, void **, 0x30);
    if (var_r0 == NULL) {
        var_r0 = temp_r3;
    }
    *arg1 = M2C_FIELD(var_r0, s32 *, 0x14);
    return 1;
}
