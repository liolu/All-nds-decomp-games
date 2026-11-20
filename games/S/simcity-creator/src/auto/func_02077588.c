#include "m2c.h"

M2C_UNK func_020775c8(M2C_UNK, M2C_UNK);            /* extern */

void func_02077588(M2C_UNK arg0) {
    s32 var_r5;

    func_020775c8(arg0, 5);
    var_r5 = 0;
    do {
        func_020775c8(arg0, 3);
        var_r5 += 1;
    } while (var_r5 < 0x3C);
    func_020775c8(arg0, 5);
}
