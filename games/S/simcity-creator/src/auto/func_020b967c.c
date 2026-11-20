#include "m2c.h"

s32 func_0200254c();                                /* extern */

void func_020b967c(void) {
    s16 *var_r2;
    s16 temp_r0;
    u8 var_r1;

    var_r2 = func_0200254c() + 0x540;
    var_r1 = 0;
    do {
        temp_r0 = var_r1 + 0xF2A0;
        var_r1 += 1;
        *var_r2 = temp_r0;
        var_r2  = (s16 *) ((s8 *) var_r2 + 2);
    } while ((u32) var_r1 < 0x60U);
}
