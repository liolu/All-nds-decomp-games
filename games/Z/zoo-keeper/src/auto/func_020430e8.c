/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02042a9c();                                /* extern */
s32 func_02042590();                                /* extern */
M2C_UNK func_02042574(M2C_UNK, s32);                /* extern */
s32 func_02043268(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02042fdc;

s32 func_020430e8(M2C_UNK arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = func_02042590();
    if (var_r4 == 0) {
        var_r4 = func_02043268(arg0, &func_02042fdc, func_02042a9c(), arg0, arg1);
        if (var_r4 != 0) {
            func_02042574(arg0, var_r4);
        }
    }
    return var_r4;
}
