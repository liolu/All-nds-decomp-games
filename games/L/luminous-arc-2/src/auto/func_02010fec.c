#include "m2c.h"

M2C_UNK func_020101e0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02010250(M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
void *func_0201036c();                              /* extern */
s32 func_020103e0(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02010fec(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r0_2;

    temp_r0 = func_020103e0(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020101e0(3, arg0);
    temp_r0_2 = func_0201036c();
    var_r0    = func_02010250(3, 4, M2C_FIELD(temp_r0_2, s32 *, 0), M2C_FIELD(temp_r0_2, s32 *, 4),
                              M2C_FIELD(temp_r0_2, s32 *, 0x10), arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
