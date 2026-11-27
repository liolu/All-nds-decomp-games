#include "m2c.h"

void *func_02053a7c(s32);                           /* extern */

s32 func_0204934c(s32 arg0) {
    s32 var_r4;
    s32 var_r4_2;
    s32 var_r5;
    void *temp_r0;
    void *temp_r0_2;

    var_r5 = 0xFF;
    var_r4 = 0;
loop_1:
    temp_r0 = func_02053a7c(var_r4 + 0x80);
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, u16 *, 0x28) == arg0)) {
        var_r5 = var_r4 + 0x80;
    } else {
        var_r4 += 1;
        if (var_r4 < 3) {
            goto loop_1;
        }
    }
    if (var_r5 == 0xFF) {
        var_r4_2 = 0;
    loop_7:
        temp_r0_2 = func_02053a7c(var_r4_2);
        if ((temp_r0_2 != NULL) && (M2C_FIELD(temp_r0_2, u16 *, 0x28) == arg0)) {
            var_r5 = var_r4_2;
        } else {
            var_r4_2 += 1;
            if (var_r4_2 < 6) {
                goto loop_7;
            }
        }
    }
    return var_r5;
}
