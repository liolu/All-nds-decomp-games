#include "m2c.h"

void func_020a43d8(void *arg0) {
    void *temp_r2;
    void *var_r3;

    var_r3 = M2C_FIELD(arg0, void **, 4);
    if (var_r3 != NULL) {
        do {
            temp_r2                       = M2C_FIELD(var_r3, void **, 4);
            M2C_FIELD(var_r3, s32 *, 8)   = 0;
            M2C_FIELD(var_r3, void **, 4) = NULL;
            M2C_FIELD(var_r3, s32 *, 0xC) = 0;
            var_r3                        = temp_r2;
        } while (temp_r2 != NULL);
    }
    M2C_FIELD(arg0, void **, 4) = NULL;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
}
