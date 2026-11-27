#include "m2c.h"

M2C_UNK func_0201b7c4(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_0209d53c;
extern M2C_UNK data_0209d548;

void func_020378d0(M2C_UNK arg0, s32 arg1) {
    M2C_UNK *var_r0;
    s32 var_r2;

    var_r2 = arg1;
    if (var_r2 > 0xAD) {
        var_r0 = &data_0209d53c;
    } else {
        var_r0 = &data_0209d548;
    }
    if (var_r2 > 0xAD) {
        var_r2 -= 0xAD;
    }
    func_0201b7c4(var_r0, arg0, var_r2);
}
