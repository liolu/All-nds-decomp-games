/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_0216feec;

void func_020720c8(void) {
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    s32 var_r6_2;
    s32 var_r7;
    s8 *var_r8;

    var_r4 = 0;
    do {
        var_r5 = 0;
        var_r7 = -6;
        var_r8 = (M2C_UNK *) ((s8 *) &data_0216feec + (var_r4 * 8));
    loop_2:
        if (var_r5 < 4) {
            var_r6 = -1;
        } else {
            var_r6 = var_r7;
        }
        var_r6_2 = var_r4 + var_r6;
        if (var_r6_2 < 0) {
            var_r6_2 = 0;
        } else if (var_r6_2 > 0x58) {
            var_r6_2 = 0x58;
        }
        var_r5 += 1;
        *var_r8 = (s8) var_r6_2;
        var_r8 += 1;
        var_r7 += 2;
        if (var_r5 < 8) {
            goto loop_2;
        }
        var_r4 += 1;
    } while (var_r4 <= 0x58);
}
