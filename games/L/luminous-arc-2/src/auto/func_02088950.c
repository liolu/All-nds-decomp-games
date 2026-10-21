#include "m2c.h"

s32 func_02083a48();                                /* extern */
void *func_02090a40();                              /* extern */
s32 func_020a6744(s32, M2C_UNK, s32);               /* extern */
s32 func_020a7644(s32, M2C_UNK);                    /* extern */

s32 func_02088950(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    s32 var_r4;

    var_r4 = arg2;
    if ((func_02090a40() == NULL) || (func_02083a48() != 0)) {
        return var_r4;
    }
    temp_r0 = func_020a7644(M2C_FIELD(func_02090a40(), s32 *, 0xE4), arg0);
    if (temp_r0 != 0) {
        var_r4 = func_020a6744(temp_r0, arg1, var_r4);
    }
    return var_r4;
}
