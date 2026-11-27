#include "m2c.h"

void *func_02053a7c(u8);                            /* extern */
extern u8 data_02094aa8;

void func_020445d0(s32 arg0) {
    s32 temp_r1;
    s32 temp_r3;
    s32 var_r3;
    s32 var_r4;
    u8 *var_r5;
    void *temp_r0;

    var_r5 = &data_02094aa8;
    var_r4 = 0;
    do {
        temp_r0 = func_02053a7c(*var_r5);
        if ((temp_r0 != NULL) && (temp_r3 = M2C_FIELD(temp_r0, s32 *, 0xA0), (temp_r3 != 0))) {
            var_r3  = temp_r3 + arg0;
            temp_r1 = M2C_FIELD(temp_r0, s32 *, 0xA8) + M2C_FIELD(temp_r0, s32 *, 0xBC);
            if (var_r3 > temp_r1) {
                var_r3 = temp_r1;
            }
            if (var_r3 <= 0) {
                var_r3 = 1;
            }
            M2C_FIELD(temp_r0, s32 *, 0xA0) = var_r3;
        }
        var_r4 += 1;
        var_r5 += 1;
    } while (var_r4 < 8);
}
