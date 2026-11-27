#include "m2c.h"

s32 func_02003b04(void *, void *);                  /* extern */

void func_02003a24(void *arg0, void *arg1, void *arg2) {
    void *var_r4;

    var_r4 = arg2;
    if (var_r4 == NULL) {
        var_r4 = M2C_FIELD(arg0, void **, 8);
    }
    if (func_02003b04(arg0, arg1) != 0) {
        return;
    }
    if (M2C_FIELD(var_r4, s32 *, 8) != 0) {
        do {
            var_r4 = M2C_FIELD(var_r4, void **, 8);
        } while (M2C_FIELD(var_r4, s32 *, 8) != 0);
    }
    M2C_FIELD(arg1, void **, 0xC) = var_r4;
    M2C_FIELD(arg1, s32 *, 8)     = 0;
    M2C_FIELD(var_r4, void **, 8) = arg1;
    if (var_r4 == M2C_FIELD(arg0, void **, 8)) {
        M2C_FIELD(arg0, void **, 8) = arg1;
    }
}
