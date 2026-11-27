#include "m2c.h"

s32 func_020957c8();                                /* extern */
M2C_UNK func_020958b4(void *, M2C_UNK);             /* extern */

s32 func_02095788(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r2;

    var_r2 = arg2;
    if (var_r2 == 0) {
        var_r2 = func_020957c8();
    }
    if (var_r2 == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = var_r2;
    func_020958b4(arg0, arg1);
    return 1;
}
