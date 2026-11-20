#include "m2c.h"

s32 func_02031b50();                                /* extern */
s32 func_02031fb8();                                /* extern */
M2C_UNK func_02031fe0(M2C_UNK, s32);                /* extern */
s32 func_02032758(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02032b08;

s32 func_02032864(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02031fb8();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_02031b50();
        }
        var_r4 = func_02032758(arg0, &func_02032b08, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_02031fe0(arg0, var_r4);
        }
    }
    return var_r4;
}
