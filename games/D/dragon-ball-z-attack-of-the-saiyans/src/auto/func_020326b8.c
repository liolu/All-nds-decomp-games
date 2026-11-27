#include "m2c.h"

void func_020326b8(s8 *arg0, s32 *arg1) {
    s32 var_lr;
    s32 var_r4;
    s8 *var_r0;
    s8 *var_r0_2;
    s8 temp_r3;
    s8 var_r1;

    var_r0 = arg0;
    var_lr = 0;
    var_r4 = 1;
    if (*var_r0 != 0) {
    loop_2:
        temp_r3 = *var_r0;
        var_r0 += 1;
        if (temp_r3 == 0x2D) {
            var_r4 = -1;
            goto block_7;
        }
        if (((s32) temp_r3 >= 0x30) && ((s32) temp_r3 <= 0x39)) {
            var_lr = (0xA * var_lr) + (temp_r3 - 0x30);
        block_7:
            if (*var_r0 != 0) {
                goto loop_2;
            }
        }
    }
    if (arg1 != NULL) {
        *arg1 = var_r4 * var_lr;
    }
    var_r1   = M2C_FIELD(var_r0, s8 *, -1);
    var_r0_2 = var_r0 - 1;
    if (var_r1 == 0) {
        return;
    }
loop_12:
    if ((var_r1 != 0x20) && (var_r1 != 9)) {
        return;
    }
    var_r0_2 += 1;
    var_r1 = *var_r0_2;
    if (var_r1 == 0) {
        return;
    }
    goto loop_12;
}
