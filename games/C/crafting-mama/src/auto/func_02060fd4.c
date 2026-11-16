/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_02029924();                                /* extern */

s32 func_02060fd4(void) {
    s32 temp_r0;
    s32 var_r2;
    s32 var_r3;
    u8 temp_r1;

    temp_r0 = func_02029924();
    var_r3  = 0;
    var_r2  = 0;
    do {
        temp_r1 = M2C_FIELD((temp_r0 + (var_r2 * 4)), u8 *, 0x1C);
        var_r2 += 1;
        if (temp_r1 != 0) {
            var_r3 += 1;
        }
    } while (var_r2 < 0x29);
    if ((var_r3 + 1) == 0x29) {
        return 1;
    }
    return 0;
}
