/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020114e4();                                /* extern */
s32 func_02013c90(s32, s32);                        /* extern */
M2C_UNK func_02014128();                            /* extern */

void func_020af38c(void) {
    s32 var_r4;

    var_r4 = 0;
    do {
        if (func_02013c90(func_020114e4(), var_r4) != 0) {
            func_02014128();
        }
        var_r4 += 1;
    } while (var_r4 < 0x100);
}
