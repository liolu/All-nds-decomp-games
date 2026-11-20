#include "m2c.h"

s32 func_02029924();                                /* extern */
s32 func_02066c40(M2C_UNK, M2C_UNK, M2C_UNK, s32);  /* extern */
M2C_UNK func_02066c88(M2C_UNK);                     /* extern */
M2C_UNK func_02066cdc(M2C_UNK);                     /* extern */

s32 func_02061850(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r4;
    s32 var_r4;

    temp_r4 = func_02029924();
    func_02066cdc(arg0);
    func_02066c88(arg0);
    var_r4 = 0;
    if (func_02066c40(arg0, arg1, 0, temp_r4 + 0x11E) != 0) {
        var_r4 = 1;
    }
    return var_r4;
}
