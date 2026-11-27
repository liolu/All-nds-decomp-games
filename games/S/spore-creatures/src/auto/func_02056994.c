#include "m2c.h"

M2C_UNK func_020569e4();                            /* extern */
s32 func_02056a10(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_02056a54(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_020e0e3c;

s32 func_02056994(s32 *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 0;
    func_020569e4();
    temp_r0 = func_02056a10(&data_020e0e3c, arg1, 1);
    *arg0   = temp_r0;
    if (temp_r0 == 0) {
        *arg0  = func_02056a54(&data_020e0e3c, arg1);
        var_r4 = 1;
    }
    return var_r4;
}
