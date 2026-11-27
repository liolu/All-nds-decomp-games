/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

s32 func_0200f270(M2C_UNK, M2C_UNK);                /* extern */
s32 func_020c9d04();                                /* extern */
M2C_UNK func_020ca90c();                            /* extern */
extern M2C_UNK data_02129c34;

void func_020ca964(void) {
    s32 var_r0;
    s32 var_r7;

    func_020ca90c();
    var_r7 = 0;
    do {
        var_r0 = func_0200f270(0x1C8, 0);
        if (var_r0 != 0) {
            var_r0 = func_020c9d04();
        }
        *((M2C_UNK *) ((s8 *) &data_02129c34 + (var_r7 * 4))) = var_r0;
        var_r7 += 1;
    } while (var_r7 < 0xC);
}
