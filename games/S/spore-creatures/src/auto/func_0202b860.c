#include "m2c.h"

s32 func_0202f504(M2C_UNK, s32);                    /* extern */

s32 func_0202b860(s32 arg0, M2C_UNK arg1, void *arg2) {
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;
    void *temp_r5;
    void *var_r6;

    var_r6  = M2C_FIELD(arg2, void **, 0x10);
    temp_r5 = arg2 + 0x10;
    var_r4  = 0;
    if (var_r6 != temp_r5) {
        do {
            var_r1 = M2C_FIELD(var_r6, s32 *, 4);
            var_r0 = var_r1;
            if (var_r1 != 0) {
                var_r0 = var_r1 - 4;
            }
            if (var_r0 != 0) {
                if (var_r1 != 0) {
                    var_r1 -= 4;
                }
                if (func_0202f504(arg1, var_r1) != 0) {
                    var_r4 += 1;
                }
            }
            var_r6 = M2C_FIELD(var_r6, void **, 0);
        } while (var_r6 != temp_r5);
    }
    return var_r4;
}
