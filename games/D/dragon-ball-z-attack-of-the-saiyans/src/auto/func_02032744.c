#include "m2c.h"

void func_02032744(s8 *arg0, s32 *arg1) {
    s32 var_r3;
    s8 *var_r0;
    s8 *var_r0_2;
    s8 temp_r2;
    s8 var_r1;

    var_r0 = arg0;
    var_r3 = 0;
    if (*var_r0 != 0) {
    loop_1:
        temp_r2 = *var_r0;
        var_r0 += 1;
        if (((s32) temp_r2 >= 0x30) && ((s32) temp_r2 <= 0x39)) {
            var_r3 = (temp_r2 - 0x30) + (var_r3 * 0x10);
            goto block_10;
        }
        if (((s32) temp_r2 >= 0x41) && ((s32) temp_r2 <= 0x46)) {
            var_r3 = (temp_r2 - 0x37) + (var_r3 * 0x10);
            goto block_10;
        }
        if (((s32) temp_r2 >= 0x61) && ((s32) temp_r2 <= 0x66)) {
            var_r3 = (temp_r2 - 0x57) + (var_r3 * 0x10);
        block_10:
            if (*var_r0 != 0) {
                goto loop_1;
            }
        }
    }
    if (arg1 != NULL) {
        *arg1 = var_r3;
    }
    var_r1   = M2C_FIELD(var_r0, s8 *, -1);
    var_r0_2 = var_r0 - 1;
    if (var_r1 == 0) {
        return;
    }
loop_15:
    if ((var_r1 != 0x20) && (var_r1 != 9)) {
        return;
    }
    var_r0_2 += 1;
    var_r1 = *var_r0_2;
    if (var_r1 == 0) {
        return;
    }
    goto loop_15;
}
