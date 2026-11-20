/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_0205bcd0();                     /* extern */
M2C_UNK func_0205bcb4(M2C_UNK, s32);     /* extern */
s32 func_0205bf8c();                                /* extern */
s32 func_0205cce0(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_0205c94c;

s32 func_0205cc68(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_0205bcd0();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_0205bf8c();
        }
        var_r4 = func_0205cce0(arg0, &func_0205c94c, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_0205bcb4(arg0, var_r4);
        }
    }
    return var_r4;
}
