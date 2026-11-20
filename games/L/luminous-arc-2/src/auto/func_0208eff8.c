/* compiler: 1.2/sp3  */
#include "m2c.h"

void *func_02090a40();                              /* extern */

u8 func_0208eff8(void) {
    s32 var_r6;
    u8 var_r5;

    var_r5 = 0;
loop_1:
    var_r6 = 0;
    if ((s32) M2C_FIELD(func_02090a40(), u8 *, 0x14) >= 0) {
    loop_2:
        if (var_r5 != M2C_FIELD((func_02090a40() + var_r6), u8 *, 0x2D0)) {
            var_r6 += 1;
            if (var_r6 <= (s32) M2C_FIELD(func_02090a40(), u8 *, 0x14)) {
                goto loop_2;
            }
        }
    }
    if (var_r6 <= (s32) M2C_FIELD(func_02090a40(), u8 *, 0x14)) {
        var_r5 += 1;
        if ((u32) var_r5 < 0x20U) {
            goto loop_1;
        }
    }
    return var_r5;
}
