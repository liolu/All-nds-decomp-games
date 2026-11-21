#include "m2c.h"

s32 func_0209eb70(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    void *temp_r3;

    if (arg1 != 0) {
        temp_r3 = arg1 - 8;
        temp_r0 = M2C_FIELD(temp_r3, s32 *, 4);
        if (temp_r0 & 2) {
            var_r0 = 0;
            if (M2C_FIELD(temp_r3, s32 *, 0) & ~temp_r0 & 1) {
                var_r0 = 1;
            }
            if (arg2 != NULL) {
                if (var_r0 != 0) {
                    var_r0_2 = 8;
                } else {
                    var_r0_2 = 4;
                }
                *arg2 = var_r0_2;
            }
            return M2C_FIELD(temp_r3, s32 *, 4) & ~3;
        }
    }
    return 0;
}
