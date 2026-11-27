/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

s32 func_0200f270(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020e23cc(s32);                         /* extern */
M2C_UNK func_020e2458(s32);                         /* extern */
s32 func_020e2558();                                /* extern */
extern M2C_UNK data_0212e914;

void func_020e26c0(void) {
    s32 var_r0;
    s32 var_r7;

    var_r7 = 0;
    do {
        var_r0 = func_0200f270(0xE08, 0);
        if (var_r0 != 0) {
            var_r0 = func_020e2558();
        }
        *((M2C_UNK *) ((s8 *) &data_0212e914 + (var_r7 * 4))) = var_r0;
        func_020e2458(*((M2C_UNK *) ((s8 *) &data_0212e914 + (var_r7 * 4))));
        func_020e23cc(*((M2C_UNK *) ((s8 *) &data_0212e914 + (var_r7 * 4))));
        var_r7 += 1;
    } while (var_r7 < 4);
}
