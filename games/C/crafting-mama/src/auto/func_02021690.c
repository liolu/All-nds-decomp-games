#include "m2c.h"

s32 func_0200d998();                                /* extern */
M2C_UNK func_0200d9a8();                            /* extern */
M2C_UNK func_02021490(s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02021690(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (var_r4 != 1) {
        var_r4 = 0;
        if (func_0200d998() != 0) {
            func_0200d9a8();
        }
    }
    func_02021490(var_r4, 0, 0, 1);
}
