#include "m2c.h"

s32 func_02072160(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02072184(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020721f4(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02072004(M2C_UNK arg0, u32 arg1) {
    s32 var_r4;

    var_r4 = 0;
    switch (arg1) {
        default:
            break;
        case 0:
        case 1:
        case 2:
            if ((func_02072160(arg0, 0) == 0) && (func_02072160(arg0, 1) == 0) && (func_02072160(arg0, 2) == 0)) {
                if (func_020721f4(arg0, 0) != 0) {
                    func_02072184(arg0, 0, 0);
                    var_r4 = 1;
                }
                if (func_020721f4(arg0, 1) != 0) {
                    func_02072184(arg0, 1, 0);
                    var_r4 = 1;
                }
            }
            break;
        case 3:
            if (func_020721f4(arg0, 2) != 0) {
                func_02072184(arg0, 2, 0);
                var_r4 = 1;
            }
            if (func_020721f4(arg0, 3) != 0) {
                func_02072184(arg0, 3, 0);
                var_r4 = 1;
            }
            break;
        case 4:
            if (func_020721f4(arg0, 4) != 0) {
                func_02072184(arg0, 4, 0);
                var_r4 = 1;
            }
            if (func_020721f4(arg0, 5) != 0) {
                func_02072184(arg0, 5, 0);
                var_r4 = 1;
            }
            break;
    }
    return var_r4;
}
