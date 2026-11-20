/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020b0220(s32, s32, M2C_UNK);           /* extern */

void func_020672b8(s32 arg0) {
    s32 temp_r1;
    s32 var_r5;

    var_r5 = 0;
    do {
        temp_r1 = (var_r5 * 0x7C) + (arg0 + 0x48C);
        if (M2C_FIELD(temp_r1, s32 *, 0x70) != 0) {
            func_020b0220(M2C_FIELD((arg0 + (M2C_FIELD(temp_r1, s32 *, 0x78) * 4)), s32 *, 0x484), temp_r1, 3);
        }
        var_r5 += 1;
    } while (var_r5 < 2);
}
