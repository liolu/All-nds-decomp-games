/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d0d28(M2C_UNK, M2C_UNK);                /* extern */
void *func_020d0e48();                              /* extern */
s32 func_020d0e58(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_020d0fac(M2C_UNK, M2C_UNK);            /* extern */

s32 func_020d1d3c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_020d0d28(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020d0fac(3, arg0);
    temp_r0_2 = func_020d0e48();
    var_r0 =
        func_020d0e58(3, 3, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4), M2C_FIELD(temp_r0_2, s32 *, 0x10));
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
