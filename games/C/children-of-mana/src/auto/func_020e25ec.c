/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020e225c();                            /* extern */
extern M2C_UNK data_0212e914;

void func_020e25ec(void) {
    s32 var_r5;

    var_r5 = 0;
    do {
        if (*((M2C_UNK *) ((s8 *) &data_0212e914 + (var_r5 * 4))) != 0) {
            func_020e225c();
        }
        var_r5 += 1;
    } while (var_r5 < 4);
}
