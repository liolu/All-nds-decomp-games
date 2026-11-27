/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200ffe8(s32);                         /* extern */
M2C_UNK func_02028a44(s32, M2C_UNK, s32);           /* extern */
s32 func_020e9524(M2C_UNK, M2C_UNK, s32, M2C_UNK);  /* extern */

void func_020c6d4c(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r4;
    s32 var_r5;

    if (arg2 == 0) {
        var_r5 = -1;
    } else {
        var_r5 = func_020e9524(arg1, 5, arg2, 0);
    }
    var_r4 = 1;
    do {
        func_02028a44(M2C_FIELD(arg0, s32 *, 0xC), arg1, var_r4);
        var_r4 += 1;
    } while (var_r4 <= 2);
    func_0200ffe8(var_r5);
}
