#include "m2c.h"

s32 func_020c1c74(M2C_UNK *);                       /* extern */
M2C_UNK func_020a666c(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020a68a8(M2C_UNK *);                       /* extern */
M2C_UNK *func_020a6908(s32, M2C_UNK);               /* extern */
extern M2C_UNK data_0212d930;

void func_020a696c(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *var_r8;
    M2C_UNK *var_r9;

    var_r8 = func_020a6908(arg1 + 1, 0x5C);
    if (var_r8 == NULL) {
        return;
    }
    do {
        var_r9 = func_020a6908(0, 0x5C);
        if (var_r9 == NULL) {
            var_r9 = &data_0212d930;
        }
        if ((func_020a68a8(var_r8) != 0) && (func_020c1c74(var_r8) == 0)) {
            func_020a666c(arg0, var_r8, var_r9);
        }
        var_r8 = func_020a6908(0, 0x5C);
    } while (var_r8 != NULL);
}
