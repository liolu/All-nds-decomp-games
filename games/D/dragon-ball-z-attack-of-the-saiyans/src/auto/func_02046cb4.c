#include "m2c.h"

M2C_UNK func_0200a3d0(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
s32 func_02012a90(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02012b7c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02044c50();                                /* extern */

s32 func_02046cb4(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = func_02012a90(arg0, 1);
    temp_r4 = func_02012b7c(arg0, 2, 2);
    if (func_02044c50() != 0) {
        return 1;
    }
    func_0200a3d0(temp_r4, temp_r5, 0x10, 0);
    return 1;
}
