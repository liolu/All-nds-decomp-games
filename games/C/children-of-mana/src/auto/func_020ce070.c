/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020cdc90();                            /* extern */
extern M2C_UNK data_02129ca4;

void func_020ce070(void) {
    s32 var_r5;

    var_r5 = 0;
    do {
        if (*((M2C_UNK *) ((s8 *) &data_02129ca4 + (var_r5 * 4))) != 0) {
            func_020cdc90();
        }
        var_r5 += 1;
    } while (var_r5 < 0x80);
}
