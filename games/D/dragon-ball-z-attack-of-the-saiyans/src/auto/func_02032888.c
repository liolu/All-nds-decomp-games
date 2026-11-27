#include "m2c.h"

s8 *func_02009a0c(void *, M2C_UNK, M2C_UNK);        /* extern */

u32 func_02032888(u32 arg0, s8 *arg1, s32 *arg2) {
    s32 temp_r1;
    s8 *var_r0_2;
    s8 *var_r2;
    s8 *var_r9;
    u32 temp_r10;
    u32 var_r0;

    var_r0   = arg0;
    var_r9   = arg1;
    temp_r10 = var_r0;
    *var_r9  = 0;
    if ((u32) var_r9 > temp_r10) {
    loop_2:
        var_r0_2 = func_02009a0c((void *) var_r0, 0xC0, 0);
        if (*var_r0_2 != 0) {
            temp_r1 = *arg2 + 1;
            *arg2   = temp_r1;
            if (temp_r1 >= 3) {
                var_r2    = var_r9;
                *var_r0_2 = 0xD;
                var_r0_2 += 1;
                *arg2 = 0;
                var_r9 += 1;
                if ((u32) var_r2 >= (u32) var_r0_2) {
                    do {
                        M2C_FIELD(var_r2, s8 *, 1) = (s8) M2C_FIELD(var_r2, s8 *, 0);
                        var_r2 -= 1;
                    } while ((u32) var_r2 >= (u32) var_r0_2);
                }
            }
            *var_r0_2 = 0xA;
            var_r0    = (u32) (var_r0_2 + 1);
            if ((u32) var_r9 > temp_r10) {
                goto loop_2;
            }
        }
    }
    return (u32) var_r9;
}
