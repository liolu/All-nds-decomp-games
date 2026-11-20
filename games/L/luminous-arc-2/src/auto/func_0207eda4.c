#include "m2c.h"

M2C_UNK func_02000b9c(s32);                         /* extern */
s32 func_02092374(M2C_UNK);                         /* extern */
M2C_UNK func_02092b88(M2C_UNK);                     /* extern */
s32 func_02092e10();                                /* extern */
M2C_UNK func_020ab2c0(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK func_02083bc0;
extern M2C_UNK func_02083bd4;
extern M2C_UNK func_02083bf0;
extern M2C_UNK func_02083c08;

s32 func_0207eda4(M2C_UNK arg0) {
    s32 temp_r4;
    s32 var_r4;
    s32 var_r5;

    var_r5 = 0;
    func_02000b9c(0x2000BDC);
    temp_r4 = func_02092374(arg0);
    if (func_02092e10() != 0) {
        func_02092b88(arg0);
        var_r5 = 1;
    }
    if (temp_r4 < 0) {
        if (var_r5 != 0) {
            var_r4 = 2;
        } else {
            var_r4 = 3;
        }
    } else if (var_r5 != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    func_020ab2c0(&func_02083bc0, &func_02083bf0, &func_02083bd4, &func_02083c08);
    return var_r4;
}
