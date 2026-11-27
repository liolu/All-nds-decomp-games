/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

void *func_0200e270(s16);                           /* extern */

s32 func_0200cfb4(s32 arg0, void *arg1) {
    s32 var_r4;
    s32 var_r5;
    void *temp_r0;
    void *var_r6;

    var_r4 = 0;
    var_r6 = arg1;
    var_r5 = 0;
    do {
        temp_r0 = func_0200e270(M2C_FIELD((arg0 + (var_r5 * 2)), s16 *, 0x3E));
        if (temp_r0 != NULL) {
            M2C_FIELD(var_r6, s32 *, 0)   = arg0;
            M2C_FIELD(var_r6, void **, 4) = temp_r0;
            var_r4 += 1;
            M2C_FIELD(var_r6, u8 *, 8) = (u8) M2C_FIELD(temp_r0, u8 *, 0x6E);
            var_r6 += 0xC;
        }
        var_r5 += 1;
    } while (var_r5 < 0x60);
    return var_r4;
}
