#include "m2c.h"

M2C_UNK func_0202f198();                            /* extern */
M2C_UNK func_0202f1b8();                            /* extern */
s32 func_02094ad4(s32, s32, M2C_UNK);               /* extern */
s32 func_020ac3a4();                                /* extern */
s32 func_020ac3ac(M2C_UNK);                         /* extern */

s32 func_02005700(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = func_020ac3a4();
    if (func_02094ad4(temp_r4, func_020ac3ac(arg0), arg1) != 0) {
        if (arg2 != 0) {
            func_0202f198();
        } else {
            func_0202f1b8();
        }
        return 0;
    }
    return 1;
}
