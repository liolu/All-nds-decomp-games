#include "m2c.h"

s32 func_0209149c(void *arg0) {
    s32 *temp_r2;
    s32 temp_r1;
    s32 var_r0;

    temp_r2 = M2C_FIELD(arg0, s32 **, 0x520);
    if (temp_r2 == NULL) {
        return 1;
    }
    if (M2C_FIELD(arg0, s16 *, 0x52A) == -1) {
        temp_r1 = *temp_r2;
        var_r0  = 1;
        if (temp_r1 == 2) {
            return 1;
        }
        if (temp_r1 != 0x18) {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
