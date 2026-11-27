/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020e22a4();                            /* extern */
extern M2C_UNK data_0212e914;

void func_020e2628(void) {
    s32 var_r5;

    var_r5 = 0;
    do {
        if (*((M2C_UNK *) ((s8 *) &data_0212e914 + (var_r5 * 4))) != 0) {
            func_020e22a4();
        }
        var_r5 += 1;
    } while (var_r5 < 4);
}
