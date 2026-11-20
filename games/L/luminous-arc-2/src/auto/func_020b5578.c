#include "m2c.h"

s32 func_020b4b08();                                /* extern */
s32 func_020b4e18();                                /* extern */
s32 func_020b5134(M2C_UNK, void *);                 /* extern */
M2C_UNK func_020b54b0(M2C_UNK, void *);             /* extern */

s32 func_020b5578(M2C_UNK arg0, void *arg1) {
    s32 temp_r2;
    s32 var_r4;

    temp_r2 = M2C_FIELD(arg1, s32 *, 0);
    var_r4  = 0;
    if (temp_r2 == 0x64) {
        return 3;
    }
    if (temp_r2 != 0x69) {
        if (M2C_FIELD(arg1, s32 *, 4) != 0) {
            var_r4 = func_020b4b08(arg0, arg1);
        } else {
            var_r4 = func_020b4e18(arg0, arg1);
        }
    }
    if ((var_r4 == 0) && (M2C_FIELD(arg1, s32 *, 0) == 0x69)) {
        var_r4 = func_020b5134(arg0, arg1);
        func_020b54b0(arg0, arg1);
    }
    return var_r4;
}
