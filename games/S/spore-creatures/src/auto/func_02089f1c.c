#include "m2c.h"

M2C_UNK func_02084d14(M2C_UNK);                     /* extern */
s32 func_02085fe4(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020869d4(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020885c0();                                /* extern */
M2C_UNK func_02088694(M2C_UNK, s32, M2C_UNK);       /* extern */

void func_02089f1c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    if (func_02085fe4(arg1, 1) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    func_02084d14(arg0);
    func_020869d4(arg0, arg1, 1);
    func_02088694(arg0, func_020885c0(), 0);
}
