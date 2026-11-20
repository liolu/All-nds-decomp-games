#include "m2c.h"

M2C_UNK func_020932c4(M2C_UNK, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_020ddde4;

void func_0207d7ac(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 var_r2;

    var_r2 = arg2;
    if (var_r2 > 0xC) {
        var_r2 = 0xC;
    }
    func_020932c4(arg0, arg1, arg3 | *((M2C_UNK *) ((s8 *) &data_020ddde4 + (var_r2 * 4))));
}
