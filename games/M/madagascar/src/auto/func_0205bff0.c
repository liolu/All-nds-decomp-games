/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205b544(M2C_UNK, s32);                /* extern */
s32 func_0205b560();                                /* extern */
s32 func_0205b938();                                /* extern */
s32 func_0205c110(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_0205bec0;

s32 func_0205bff0(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = func_0205b560();
    if (var_r4 == 0) {
        var_r4 = func_0205c110(arg0, &func_0205bec0, func_0205b938(), arg0, arg1);
        if (var_r4 != 0) {
            func_0205b544(arg0, var_r4);
        }
    }
    return var_r4;
}
