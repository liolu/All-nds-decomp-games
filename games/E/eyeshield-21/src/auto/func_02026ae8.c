/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_0207d52c();                            /* extern */
extern M2C_UNK data_020fe200;

void func_02026ae8(void) {
    s32 var_r6;

    var_r6 = 0;
    do {
        if (*((M2C_UNK *) ((s8 *) &data_020fe200 + (var_r6 * 4))) != 0) {
            func_0207d52c();
            *((M2C_UNK *) ((s8 *) &data_020fe200 + (var_r6 * 4))) = 0;
        }
        var_r6 += 1;
    } while (var_r6 < 2);
}
