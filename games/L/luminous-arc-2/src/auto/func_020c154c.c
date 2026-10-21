/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_020aadbc();                                 /* extern */

void func_020c154c(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;
    void *temp_r3;

    var_r4  = 0;
    temp_r0 = func_020aadbc();
    do {
        temp_r3 = arg0 + (var_r4 * 0x10);
        if ((M2C_FIELD(temp_r3, s32 *, 0x118) != 0) && ((u32) (temp_r0 - M2C_FIELD(temp_r3, s32 *, 0x120)) > 0xFA0U)) {
            M2C_FIELD(temp_r3, s32 *, 0x118) = 0;
        }
        var_r4 += 1;
    } while (var_r4 < 0xC8);
}
