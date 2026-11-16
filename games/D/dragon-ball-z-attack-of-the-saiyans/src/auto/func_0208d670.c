#include "m2c.h"

s32 func_0208c980();                                /* extern */
s32 func_0208cd84();                                /* extern */
M2C_UNK func_0208cdac(M2C_UNK, s32);                /* extern */
s32 func_0208d48c(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_0208d894;

s32 func_0208d670(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_0208cd84();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_0208c980();
        }
        var_r4 = func_0208d48c(arg0, &func_0208d894, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_0208cdac(arg0, var_r4);
        }
    }
    return var_r4;
}
