#include "m2c.h"

M2C_UNK func_0205e3a4();                            /* extern */
s32 func_0205e3d0(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 func_0205e414(M2C_UNK *, M2C_UNK);              /* extern */
extern M2C_UNK data_020e0e6c;

s32 func_0205e354(s32 *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = 0;
    func_0205e3a4();
    temp_r0 = func_0205e3d0(&data_020e0e6c, arg1, 1);
    *arg0   = temp_r0;
    if (temp_r0 == 0) {
        *arg0  = func_0205e414(&data_020e0e6c, arg1);
        var_r4 = 1;
    }
    return var_r4;
}
