/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_02005bc4(s32, M2C_UNK, s32);           /* extern */

void func_0206bef4(s32 arg0) {
    s32 var_r6;

    var_r6 = 0;
    do {
        func_02005bc4(0, -1, M2C_FIELD((arg0 + (var_r6 * 4)), s32 *, 0x724));
        var_r6 += 1;
    } while (var_r6 < 5);
}
