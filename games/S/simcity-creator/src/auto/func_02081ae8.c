#include "m2c.h"

s32 func_0207039c(s32, u16, u16);                   /* extern */
M2C_UNK func_02081a58(s32, u16, u16);               /* extern */

void func_02081ae8(s32 *arg0) {
    u16 var_r6;
    u16 var_r7;

    var_r7 = 0;
    do {
        var_r6 = 0;
    loop_2:
        if (func_0207039c(*arg0, var_r6, var_r7) == 0) {
            func_02081a58(*arg0, var_r6, var_r7);
        }
        var_r6 += 1;
        if ((u32) var_r6 < 0x80U) {
            goto loop_2;
        }
        var_r7 += 1;
    } while ((u32) var_r7 < 0x80U);
}
