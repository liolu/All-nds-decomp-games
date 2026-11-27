/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02036068(s32);                             /* extern */
M2C_UNK func_02036078(s32, s32);                    /* extern */
s32 func_0205da90();                                /* extern */
M2C_UNK func_0205daac(M2C_UNK);                     /* extern */

void func_0203dd58(void) {
    s32 var_r4;

    if (func_0205da90() == 0) {
        func_0205daac(1);
    }
    var_r4 = 0;
    do {
        func_02036078(func_02036068(var_r4), var_r4);
        var_r4 += 1;
    } while (var_r4 < 2);
}
